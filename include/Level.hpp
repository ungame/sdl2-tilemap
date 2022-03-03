#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <string>
#include <vector>
#include <SDL2/SDL.h>
#include "Tile.hpp"

class Level
{
    public:
        Level(std::string levelData[], int mapHeight, int tileSize);
        void Run(SDL_Renderer* renderer);
        void Destroy();

    private:
        std::vector<Tile*> _level;
};

#endif