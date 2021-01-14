#include "render.h"
#include "../manager/entity.h"
#include <raylib.h>

void updateRenderOneEntity(Entity_t *e) {
    DrawPixelV(e->position, RAYWHITE);
}

void updateRender(void) {
    BeginDrawing();
    ClearBackground(BLACK);
    forAllEntities(&updateRenderOneEntity);
    EndDrawing();
}
