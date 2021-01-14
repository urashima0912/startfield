#include "physics.h"
#include "../manager/entity.h"
#include <stdint.h>

void updateOneEntity(Entity_t *e) {
    int32_t newPosX = e->position.x + e->velocity.x;
    if (newPosX < 0) {
        setDeadEntity(e);
    } else {
        e->position = newPosX;
    }
}

void updatePhysics(void) {
    forAllEntities(&updatePhysics);
}
