
#include <Circle.hpp>
#include <Game.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    mt::Game game(1000, 600, "Game");
    game.Setup(10);

    game.LifeCycle();

    return 0;
}