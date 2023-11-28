#include"Character.hpp"

class Enemy: public Character
{
  public:
    Enemy(SDL_Rect src, SDL_Rect mover, int power, int range, int speed, std::vector<SDL_Rect> frames, SDL_Texture* Texture, int health, int scoreDrop);

    void moveForward();
    void gotHit() override;

  // private:
    int pointsDrop, movingSpeed;
    bool isHit = false;
    SDL_Rect empty = {0,0,0,0};
};