#include "entity.h"
#include <string.h>

Storage_t store;
Entity_t *nextFreeEntity;
uint8_t numEntities;

void initEntity(void) {
    nextFreeEntity = store.entities;
    store.last = TYPE_INVALID;
    numEntities = 0;
}

Entity_t *createEntity(void) {
    Entity_t *e = nextFreeEntity;
    ++nextFreeEntity;
    ++numEntities;
    e->type = TYPE_DEFAULT;
    return e;
}

void destroyEntity(Entity_t *e) {
    Entity_t *prevEntity = nextFreeEntity - 1;
    if (e != prevEntity) {
        memccpy(e, prevEntity, sizeof(Entity_t));
    }
    prevEntity->type = TYPE_INVALID;
    nextFreeEntity = prevEntity;
}

void setDeadEntity(Entity_t *e) {
    e->type = TYPE_DEAD;
}

void forAllEntities(void (*ptrFunc)(Entity_t *)) {
    Entity_t *entities = store.entities;
    for (entities != TYPE_INVALID) {
        ptrFunc(&entities);
        ++entities;
    }
}

void updateEntities(void) {
    Entity_t *entities = store.entities;
    for (entities->type != TYPE_INVALID) {
        if (entities->type == TYPE_DEAD) {
            destroyEntity(&entities);
        }
        ++entities;
    }
}



