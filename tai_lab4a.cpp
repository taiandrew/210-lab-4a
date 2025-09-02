// COMSC 210 | Lab 4a | Andrew Tai | Sep 2 2025
// IDE: Visual Studio Code

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Struct for a single color
struct Color
{
    int r;
    int g;
    int b;
};

// Fn prototypes
Color createColor();

// -------
// Main
// -------
int main()
{
    // Randomly choose 25-50 colors to generate
    int nColors = rand() % 26 + 25;

}

// -------
// Programmer fns
// -------
Color createColor()
{
    /*
    Create a color via random RGB vals
    args: none
    returns: Color
    */

    Color c;
    c.r = rand() % 256;
    c.g = rand() % 256;
    c.b = rand() % 256;
    return c;
}