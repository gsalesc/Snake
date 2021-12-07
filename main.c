#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "map.h"
#include "logic.h"

int main()
{
    srand(time(NULL));

    bool jogo = true;
    int score = 0;
    snake.x = 10;
    snake.y = 10;
    apple.x = 5;
    apple.y = 5;

    initMap(&snake.x, &snake.y, &apple.x, &apple.y);

    while(jogo){

        showMap();
        printf("\nScore: %d\n\n", score);
        printf("\n %d %d | %d %d\n", apple.x, apple.y, snake.x, snake.y);

        char mov = getMove();

        jogo = makeMove(mov, &snake.x, &snake.y);

        if(snake.x == apple.x && snake.y == apple.y){
            sortApple(&snake.x, &snake.y, &apple.x, &apple.y);
            score = score + 10;
        }

        system("cls");
    }
    return 0;
}
