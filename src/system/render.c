#include "render.h"
#include "../manager/entity.h"
#include <raylib.h>

void updateRenderOneEntity(Entity_t *e) {
    if (e->type == TYPE_STAR) {
        DrawPixelV(e->position, e->color);
    }
}

void updateRender(void) {
    BeginDrawing();
    ClearBackground(BLACK);
    forAllEntities(&updateRenderOneEntity);
    EndDrawing();
}
