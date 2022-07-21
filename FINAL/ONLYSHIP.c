#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "conio.h"
#include "kbhit.h"

#define SCREEN_WIDTH (32)
#define SCREEN_HEIGHT (24)

#define FPS (1)
#define INTERVAL (1000 / FPS)

enum { TILE_NONE, TILE_PLAYER, TILE_MAX };

typedef struct {
  int x, y;
} PLAYER;

int screen[SCREEN_HEIGHT][SCREEN_WIDTH];
PLAYER player;

const char* tileAA[TILE_MAX] = {
    " ",  // TILE_NONE
    "▲",  // TILE_PLAYER
};

void DrawScreen() {
  memset(screen, 0, sizeof screen);

  screen[player.y][player.x] = TILE_PLAYER;

  system("clear");
  for (int y = 0; y < SCREEN_HEIGHT; y++) {
    for (int x = 0; x < SCREEN_WIDTH; x++) {
      printf("%s", tileAA[screen[x][y]]);
    }
    printf("\n");
  }
}

void Init() {
  player.x = SCREEN_WIDTH / 2;
  player.y = SCREEN_HEIGHT - 2;

  DrawScreen();
}

int main() {
  Init();

  clock_t lastClock = clock();
  while (1) {
    clock_t nowClock = clock();
    if (nowClock >= lastClock + INTERVAL) {
      lastClock = nowClock;
      DrawScreen();
    }

    if (kbhit()) {
      switch (getchar()) {
        case 'a':
          player.x--;
          break;
        case 'd':
          player.x++;
          break;
      } 
        if(player.x < 0)
            player.x = 0;
        if(player.x >= SCREEN_WIDTH)
            player.x = SCREEN_WIDTH - 1;
        DrawScreen();
    }
  }
}