#include <iostream>

using namespace std;

#include "Plot.h"
#include "Position.h"

int main() {
    cout << "Hello, World!" << endl;

    cout << "Test plot :" << endl;
    Plot plot = Plot(15);
    cout << plot.getHauteur() << endl;

    cout << "Test Position" << endl;
    Position pos = Position();
    cout << pos.getX() << endl;
    cout << pos.getY() << endl;

    return 0;
}