#ifndef _STAR_ENTITY_H
#define _STAR_ENTITY_H

#include "raylib.h"
#include "../../config.h"

typedef enum type_t {
  TYPE_DEFAULT  = 0x00,
  TYPE_START    = 0x10,
  TYPE_DEAD     = 0x40,
  TYPE_INVALID  = 0x80
} type_t;

typedef struct Entity_t {
  type_t type;
  Vector2 position;
  Vector2 velocity;
  Color color;
} Entity_t;

typedef struct Storage_t {
  Entity_t entities[MAX_ENTITIES];
  type_t last;
} Storage_t;

void        initEntity(void);
Entity_t    *createEntity(void);
void        destroyEntity(Entity_t *e);
void        setDeadEntity(Entity_t *e);
void        forAllEntities(void (*ptrFunc)(Entity_t *));
void        updateEntities(void);
#endif /* _STAR_ENTITY_H */
