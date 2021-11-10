#include <iostream>
#include <string>
#ifndef _TICTAC_
#define _TICTAC_

class tictac
{
private:
    std::string p_1, p_2;
    int count = 0;
    char x[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    void set_p1()
    {
        int i, j;
        std::cin >> i >> j;
        if (x[i][j] != ' ')
        {
            i = i - 1;
            count--;
            std::cout << "Wrong step! Try Again!" << std::endl;
        }
        else
        {

            x[i][j] = 'O';
        }

        board();
        if (vertical() || horizontaly() || diaganal())
        {

            std::cout << "You Win " << p_2 << " !" << std::endl;
            exit(0);
        }
    }
    void set_p2()
    {
        int i, j;
        std::cin >> i >> j;
        if (x[i][j] != ' ')
        {
            i = i - 1;
            count--;
            std::cout << "Wrong step! Try Again!" << std::endl;
        }
        else
        {
            x[i][j] = 'X';
        }
        board();

        if (vertical() || horizontaly() || diaganal())
        {

            std::cout << "You Win " << p_1 << " !" << std::endl;
            exit(0);
        }
    }
    void board()
    {
        std::system("clear");
        for (int i = 0; i < 3; ++i)
        {
            std::cout << " -------------" << std::endl;
            for (int j = 0; j < 3; ++j)
            {

                std::cout << " | " << x[i][j];
            }

            std::cout << " |" << std::endl;
        }
        std::cout << " -------------" << std::endl;
        std::cout << std::endl;
    }

    bool vertical()
    {

        if ((x[0][0] == 'O' && x[1][0] == 'O' && x[2][0] == 'O') || (x[0][1] == 'O' && x[1][1] == 'O' && x[2][1] == 'O') || (x[0][2] == 'O' && x[1][2] == 'O' && x[2][2] == 'O'))
        {
            return true;
        }
        else if ((x[0][0] == 'X' && x[1][0] == 'X' && x[2][0] == 'X') || (x[0][1] == 'X' && x[1][1] == 'X' && x[2][1] == 'X') || (x[0][2] == 'X' && x[1][2] == 'X' && x[2][2] == 'X'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool horizontaly()
    {

        if ((x[0][0] == 'O' && x[0][1] == 'O' && x[0][2] == 'O') || (x[1][0] == 'O' && x[1][1] == 'O' && x[1][2] == 'O') || (x[2][0] == 'O' && x[2][1] == 'O' && x[2][2] == 'O'))
        {
            return true;
        }
        else if ((x[0][0] == 'X' && x[0][1] == 'X' && x[0][2] == 'X') || (x[1][0] == 'X' && x[1][1] == 'X' && x[1][2] == 'X') || (x[2][0] == 'X' && x[2][1] == 'X' && x[2][2] == 'X'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool diaganal()
    {

        if ((x[0][0] == 'X' && x[1][1] == 'X' && x[2][2] == 'X') || (x[0][2] == 'X' && x[1][1] == 'X' && x[2][0] == 'X'))
        {
            return true;
        }
        else if ((x[0][0] == 'O' && x[1][1] == 'O' && x[2][2] == 'O') || (x[0][2] == 'O' && x[1][1] == 'O' && x[2][0] == 'O'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    void set_names()
    {
        std::cout << "Enter names of players" << std::endl;
        std::cin >> p_1 >> p_2;
        std::cout << std::endl;
    }

    void play()
    {
        for (int i = 0; i < 9; ++i)
        {
            count++;
            if (count == 0 || count % 2 == 0)
            {
                set_p1();
            }
            if (count % 2 == 1)

            {
                set_p2();
            }
        }
    }
};

#endif //_TICTAC_