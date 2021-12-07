#ifndef LOGIC_H_INCLUDED
#define LOGIC_H_INCLUDED

void initMap(int *snakex, int *snakey, int *applex, int *appley);
void showMap();
char getMove();
bool makeMove(char mov, int *snakex, int *snakey);
void sortApple(int *snakex, int *snakey, int *applex, int *appley);

#endif // LOGIC_H_INCLUDED
