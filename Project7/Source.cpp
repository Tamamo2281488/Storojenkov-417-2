#include <iostream>

enum Colors
{
    COLOR_GRAY,
    COLOR_PINK,
    COLOR_BLUE,
    COLOR_PURPLE,
    COLOR_RED
};

void printColor(Colors color)
{
    if (color == COLOR_GRAY)
        std::cout << "Gray";
    else if (color == COLOR_PINK)
        std::cout << "Pink";
    else if (color == COLOR_BLUE)
        std::cout << "Blue";
    else if (color == COLOR_PURPLE)
        std::cout << "Purple";
    else if (color == COLOR_RED)
        std::cout << "Red";
    else
        std::cout << "Unknown";
}

int main()
{
    printColor(COLOR_BLUE);


    system("pause");
    return 0;
}