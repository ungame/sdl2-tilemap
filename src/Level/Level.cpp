#include <string>
#include <vector>
#include <SDL2/SDL.h>
#include "Tile.hpp"
#include "Level.hpp"
#include "Color.hpp"

Level::Level(std::string levelData[], int mapHeight, int tileSize)
{
    for(int row = 0; row < mapHeight; row++)
    {
        int len = levelData[row].length();

        for(int col = 0; col < len; col++)
        {
            char cell = levelData[row][col];
            
            if(cell == 'X')
            {
                float x = col * tileSize;
                float y = row * tileSize;

                SDL_FPoint position = { x, y };

                Tile* tile = new Tile(Color::Grey(), position, tileSize, tileSize);

                _level.push_back(tile);
            }
        }
    }
}

void Level::Run(SDL_Renderer* renderer)
{
    for(Tile* tile : _level)
    {
        tile->Update(-1);
        tile->Draw(renderer);
    }
}

void Level::Destroy()
{
  if(_level.size() > 0)
    _level.clear();
}