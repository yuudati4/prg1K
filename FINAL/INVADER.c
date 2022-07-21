#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "conio.h"
#include "kbhit.h"

#define SCREEN_WIDTH    (32)
#define SCREEN_HEIGHT   (24)

#define FPS             (1)
#define INTERVAL        (1000 / FPS)

#define INVADER_COLUMN  (11)
#define INVADER_ROW     (5)

enum{
    TILE_NONE,
    TILE_INVADER,
    TILE_PLAYER,
    TILE_MAX
};

enum {
    DIRECTION_RIGHT,
    DIRECTION_DOWN,
    DIRECTION_LEFT,
    DIRECTION_MAX
};

typedef struct {
    int x, y;
}VEC2;

typedef struct {
    int x,y;
}INVADER;

typedef struct {
    int x, y;
}PLAYER;

VEC2 directions[] = {
    { 1,0},     // DIRECTION_RIGHT,
    { 0,1},     // DIRECTION_DOWN,
    {-1,0}, };  // DIRECTION_LEFT,

int screen[SCREEN_HEIGHT][SCREEN_WIDTH];
INVADER invaders[INVADER_ROW][INVADER_COLUMN];
PLAYER player;

int invaderDirection;

const char* tileAA[TILE_MAX] = {
    " ", // TILE_NONE
    "★", // TILE_INVADER
    "▲", //TILE_PLAYER
};

void DrawScreen(){
    memset(screen,0,sizeof screen);
    for(int y = 0;y<INVADER_ROW;y++){
        for(int x=0;x<INVADER_COLUMN;x++){
            screen[invaders[y][x].y][invaders[y][x].x] = TILE_INVADER;
        }
    }

    screen[player.y][player.x] = TILE_PLAYER;

    system("cls");
    for(int y = 0; y < SCREEN_HEIGHT; y++){
        for(int x = 0; x < SCREEN_WIDTH; x++){
            printf("%s",tileAA[screen[x][y]]);
        }
        printf("\n");
    }
}

void Init(){
        for(int y = 0; y<INVADER_ROW;y++)
            for(int x = 0;x<INVADER_COLUMN;x++){
                invaders[y][x].x = x * 2;
                invaders[y][x].y = y * 2;
            }
        invaderDirection = DIRECTION_RIGHT;

        player.x = SCREEN_WIDTH / 2;
        player.y = SCREEN_HEIGHT - 2;

        DrawScreen();
}
int main(){
    Init();

    clock_t lastClock = clock();
    while(1){
        clock_t nowClock = clock();
        if(nowClock>= lastClock + INTERVAL) {
            lastClock = nowClock;

            int nextDirection = invaderDirection; 
            for(int y = 0;y<INVADER_ROW;y++){
                for(int x=0;x<INVADER_COLUMN;x++){
                    invaders[y][x].x+= directions[invaderDirection].x;
                    invaders[y][x].y+= directions[invaderDirection].y;
                
                    switch(invaderDirection){
                        case DIRECTION_RIGHT:
                            if( invaders[y][x].x >= SCREEN_WIDTH-1)
                                nextDirection = DIRECTION_DOWN;
                            break;
                        case DIRECTION_DOWN:
                             if(invaders[y][x].x >= SCREEN_WIDTH-1)
                                nextDirection = DIRECTION_LEFT;
                            if( invaders[y][x].x >= SCREEN_WIDTH-1)
                                nextDirection = DIRECTION_RIGHT;
                            break;
                        case DIRECTION_LEFT:
                            if(invaders[y][x].x <= 0)
                                nextDirection = DIRECTION_DOWN;
                            break;
                    }
                }

             }
            invaderDirection = nextDirection;

            DrawScreen();
        }
    if (kbhit()){
        switch(getchar()){
        case 'a': player.x--; break;
        case 'd': player.x++; break; 
        }

         DrawScreen();
        }
    }
}