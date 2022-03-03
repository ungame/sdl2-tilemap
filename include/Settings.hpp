#ifndef SETTINGS_HPP
#define SETTINGS_HPP

#include <string>

#define MAP_HEIGHT 11

std::string LevelMap[MAP_HEIGHT] = {
"                            ",
"                            ",
"                            ",
" XX    XXX             XX   ",
" XX                         ",
" XXXX         XX         XX ",
" XXXX       XX              ",
" XX    X  XXXX    XX  XX    ",
"       X  XXXX    XX  XXX   ",
"    XXXX  XXXXXX  XX  XXXX  ",
"XXXXXXXX  XXXXXX  XX  XXXX  "
};

#define TILE_SIZE 64

#define SCREEN_WIDTH  1000
#define SCREEN_HEIGHT MAP_HEIGHT * TILE_SIZE

#endif