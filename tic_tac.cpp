#include "tic_tac.h"
int main()
{
    std::string answer, answer_c;
    tictac Game;
    std::cout << "Start Game (yes, no)" << std::endl;
    std::cin >> answer;
    std::cout << std::endl;
    if (answer == "yes")
    {
        Game.set_names();
        for (int i = 0; i < 3; ++i)
        {
            std::cout << " -------------" << std::endl;
            for (int j = 0; j < 3; ++j)
            {

                std::cout << " |  ";
            }

            std::cout << " |" << std::endl;
        }
        std::cout << " -------------" << std::endl;
        std::cout << std::endl;
        Game.play();
    }
    else
    {
        return 0;
    }
    std::cout << "Play Again (yes, no)" << std::endl;
    std::cin >> answer_c;
    std::cout << std::endl;
    if (answer_c == "yes")
    {
        Game.set_names();
        for (int i = 0; i < 3; ++i)
        {
            std::cout << " -------------" << std::endl;
            for (int j = 0; j < 3; ++j)
            {

                std::cout << " |  ";
            }

            std::cout << " |" << std::endl;
        }
        std::cout << " -------------" << std::endl;
        std::cout << std::endl;
        Game.play();
    }
    else
    {

        return 0;
    }
}