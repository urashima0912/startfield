#ifndef _STAR_ENTITY_H
#define _STAR_ENTITY_H

#include <stdint.h>

#include <stdint.h>
#include "raylib.h"

typedef enum type_t {
  TYPE_DEFAULT = 0,
  TYPE_START,
  TYPE_DEAD,
  TYPE_INVALID
} type_t;

typedef struct Entity_t {
  type_t type;
  Vector2 position;
  Vector2 velocity;
  Color color;
} Entity_t;

typedef struct Storage_t {
  Entity_t entities;
  type_t last;
} Storage_t;

#endif /* _STAR_ENTITY_H */
