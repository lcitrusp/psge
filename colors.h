#pragma once

#include "structs.h"


const Color red = {226, 51, 51, 255};
const Color orange = {226, 133, 51, 255};
const Color yellow = {226, 196, 51, 255};
const Color lime = {163, 226, 51, 255};
const Color green = {51, 196, 82, 255};
const Color cyan = {51, 196, 196, 255};
const Color skyBlue = {51, 163, 226, 255};
const Color blue = {51, 82, 226, 255};
const Color purple = {133, 51, 226, 255};
const Color magenta = {196, 51, 196, 255};
const Color pink = {226, 51, 133, 255};

const Color white  = {255, 255, 255, 255};
const Color silver = {192, 192, 192, 255};
const Color gray = {128, 128, 128, 255};
const Color darkGray = {64, 64, 64, 255};
const Color black  = {0, 0, 0, 255};

const Color brown = {139, 90, 43, 255};
const Color chocolate = {123, 63, 0, 255};
const Color beige = {226, 196, 153, 255};
const Color olive = {128, 128, 0, 255};
const Color teal = {0, 128, 128, 255};
const Color navy  = {0, 0, 128, 255};
const Color maroon = {128, 0, 0, 255};


Color hexToColor(str h) {
    unsigned int r, g, b, a;
    if (h[0] == '#') h.erase(0, 1);
    sscanf(h.c_str(), "%2x%2x%2x%2x", &r, &g, &b, &a);
    return { (byte)r, (byte)g, (byte)b, (byte)a};
}

str rgbaToHex(byte r, byte g, byte b, byte a = 255) {
    char h[10];
    sprintf(h, "#%02X%02X%02X%02X", r, g, b, a);
    return h;
}

Color rgbaToColor(byte r, byte g, byte b, byte a = 255) {
    return { r, g, b, a };
}

Color hexToRGBA(str h) {
    return hexToColor(h);
}