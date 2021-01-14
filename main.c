#include <raylib.h>
#include "config.h"
#include "src/manager/entity.h"
#include "src/system/physics.h"
#include "src/system/render.h"
#include "src/system/generator.h"

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE);
    SetTargetFPS(GLOBAL_FPS);

    initEntity();
    while (!WindowShouldClose()) {
        updatePhysics();
        updateGenerator();
        updateRender();
        updateEntities();
    }
    CloseWindow();

  return 0;
}
