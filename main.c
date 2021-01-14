#include <raylib.h>
#include "config.h"
#include "src/manager/entity.h"
#include "src/system/physics.h"

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE);
    SetTargetFPS(GLOBAL_FPS);

    initEntity();
    while (!WindowShouldClose()) {
        updatePhysics();
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();

  return 0;
}
