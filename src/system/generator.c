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
    e->velocity.x = GetRandomValue(1, 5);
    e->position.y = GetRandomValue(10, GetScreenHeight() - 10);
}

void updateGenerator(void) {
    const int32_t free = numFreeEntities();
    if (free) {
        generateEntity();
    }
}
