#include "entity.h"

Storage_t store;
Entity_t *nextFreeEntity;

void initEntity(void) {
  nextFreeEntity = store.entities;
  store.last = TYPE_INVALID;
}
