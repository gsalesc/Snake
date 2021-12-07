#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "map.h"

void initMap(int *snakex, int *snakey, int *applex, int *appley){

    for(int x = 0; x < 20; x++){
        for(int y = 0; y < 20; y++){
            mapa[x][y].d = ' ';
        }
    }

    mapa[(*snakex)][(*snakey)].d = 'o';
    mapa[(*applex)][(*appley)].d = '*';

}

void showMap(){
        for(int i = 0; i < 20; i++){
            for(int j = 0; j <= 20; j++){
                    if(j == 20)
                        printf("|");
                    else
                        printf("%c", mapa[i][j].d);
            }
            printf("\n");
        }
}

char getMove(){
    char mov;

    scanf("%c", &mov);
    return mov;
}

bool makeMove(char mov, int *snakex, int *snakey){
    bool jogo = true;
        switch (mov) {
            case 'w': //UP
                mapa[(*snakex)-1][(*snakey)].d = 'o';
                mapa[(*snakex)][(*snakey)].d = ' ';
                (*snakex) = (*snakex)-1;
                break;
            case 'd': //RIGHT
                mapa[(*snakex)][(*snakey)+1].d = 'o';
                mapa[(*snakex)][(*snakey)].d = ' ';
                (*snakey)=(*snakey)+1;
                break;
            case 's': //DOWN
                mapa[(*snakex)+1][(*snakey)].d = 'o';
                mapa[(*snakex)][(*snakey)].d = ' ';
                (*snakex)=(*snakex)+1;
                break;
            case 'a': //LEFT
                mapa[(*snakex)][(*snakey)-1].d = 'o';
                mapa[(*snakex)][(*snakey)].d = ' ';
                (*snakey)=(*snakey)-1;
                break;
            case 'x':
                jogo = false;
                break;
        }

    if((*snakex) < 0 || (*snakex) > 19)
        jogo = false;

    else if ((*snakey) < 0 || (*snakey) > 19)
        jogo = false;

    return jogo;

}

void sortApple(int *snakex, int *snakey, int *applex, int *appley){

        if((*snakex) == (*applex) && (*snakey) == (*appley)){
            int aux1 = rand() % 20;
            int aux2 = rand() % 20;

            (*applex) = aux1;
            (*appley) = aux2;

            mapa[(*applex)][(*appley)].d = '*';
        }
}
