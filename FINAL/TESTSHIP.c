typedef struct {
    int x, y;
}PLAYER;

PLAYER player.;

const char* tileAA[TILE_MAX] = {
    "▲",
}

void Iint() {
    player.x = SCREEN_WIDTH / 2;
    player.y = SCREEN_HEIHGT - 2;
    DrawScreen();
}
void DrawScreen(){
    screen[player.y][player.x] = TILE_PLAYER;
}
if (_kbhit()){
    switch(_getchar()){
    case 'a': player.x--; break;
    case 'd': player.x++; break; 
    }
    if(player.x < 0)
       player.x = 0;
    if(player.x >= SCREEN_WIDTH)
       player.x = SCREEN_WIDTH - 1;
    DrawScreen();
}