// COMSC 210 | Lab 4a | Andrew Tai | Sep 2 2025
// IDE: Visual Studio Code

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Struct for a single color; stores RGB vals
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
    // Randomly choose 25-50 colors to generate and store
    int nColors = rand() % 26 + 25;
    vector<Color> colors;

    for (int i = 0; i < nColors; i++)
    {
        Color c = createColor();
        colors.push_back(c);
    }

    // Display in formatted table
    cout << setw(9) << "Color#" << setw(5) << "R" << setw(5) << "G" << setw(5) << "B" << endl;
    cout << setw(9) << "--------" << setw(5) << "----" << setw(5) << "----" << setw(5) << "----" << endl;
    for (int i = 0; i < colors.size(); i++)
    {
        cout << setw(9) << i + 1 << setw(5) << colors[i].r << setw(5) << colors[i].g << setw(5) << colors[i].b << endl;
    }

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