#include <raylib.h>
#include "config.h"

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE);
  SetTargetFPS(GLOBAL_FPS);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    EndDrawing();
  }
  
  CloseWindow();

  return 0;
}
