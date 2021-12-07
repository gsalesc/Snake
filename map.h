#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

typedef struct desenho{
    char d;
} Icon;

typedef struct coord{
    int x;
    int y;

} Location;

Icon mapa[20][20];
Location snake;
Location apple;


#endif // MAP_H_INCLUDED
