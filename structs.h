
#pragma once

#include <cstdint>
#include "aliases.h"

struct V2 {
    float x = 0;
    float y = 0;
};

struct V3 {
    float x = 0;
    float y = 0;
    float z = 0;
};

struct V4 {
    float x = 0;
    float y = 0;
    float z = 0;
    float t = 0;
};

struct Color {
    uint8_t R = 255;
    uint8_t G = 255;
    uint8_t B = 255;
    uint8_t A = 255;
};

struct Gravity {
    double mass = 0;
    float acceleration = 0;
};

struct Time {
    double seconds = 0;
};

enum class TypeList {
    MODEL,
    IMAGE,
    NPC,
    TRIGGER
};

enum class Images {
    PICTURE,
    VIDEO,
    GIF
};

struct Asset {
    str path = nullptr;
};

struct Square {
    V2 lu;
    V2 rd;
};

struct Circle {
    V2 pos;
    float radius = 0;
};

struct Material {
    bool isTexture = false;
    bool isTiling = false;

    int tileX = 1;
    int tileY = 1;
    int tileZ = 1;

    union {
        Asset material;
        Color clr;
    };
};

struct GameObject2D {
    TypeList t = TypeList::MODEL;

    float angle = 0;

    V2 pos;
    V2 size;

    Material appearance{};

    V2 coef;
};

struct GameObject3D {
    TypeList t = TypeList::MODEL;

    float angle = 0;

    V3 pos;
    V3 size;

    Material appearance{};

    V3 coef;
};
