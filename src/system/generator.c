#include "generator.h"
#include "../manager/entity.h"
#include <string.h>
#include <stdint.h>

const Entity_t baseEntity = {
    TYPE_STAR,
    (Vector2){ 0 },
    (Vector2){ 0 },
    RAYWHITE
};

void generateEntity(void) {
    Entity_t *e = createEntity();
    memcpy(e, &baseEntity, sizeof(Entity_t));
    e->position.x = GetScreenWidth();
    e->velocity.x = GetRandomValue(1, 15);
    e->position.y = GetRandomValue(5, GetScreenHeight() - 5);
    if (e->velocity.x > 0 && e->velocity.x < 5) {
        e->color = GRAY;
    } else {
        e->color = WHITE;
    }
}

void updateGenerator(void) {
    const int32_t free = numFreeEntities();
    if (free) {
        generateEntity();
    }
}
