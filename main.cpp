#include <iostream>

using namespace std;

#include "Plot.h"

int main() {
    cout << "Hello, World!" << endl;
    Plot plot = Plot(15);
    cout << plot.getHauteur();
    return 0;
}