#include <iostream>
#include <iomanip>
#include "math.h"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float xstart, xstartW, xstartD, xend, step, y;
    cout << "Введіть будь ласка Початкове x:";
    cin >> xstart;
    cout << "Введіть будь ласка Кінцеве x:";
    cin >> xend;
    cout << "Введіть будь ласка крок:";
    cin >> step;
    cout << setw(15) << "_______ Вайл _______\n";
    cout << setw(7) << "x" << setw(14) << "y" << endl;
    xstartW = xstart;
    while ((xstartW >= 3) && (xend <= 5) && (xstartW <= xend) && (step == 0.2))
    {
        y = pow(xstartW, 5) + pow(xstartW, 1. / 2) - 3;
        cout << setw(7) << xstartW << setw(14) << y << endl;
        xstartW += step;
    }
    cout << setw(15) << "_______ Ду Вайл _______\n";
    cout << setw(7) << "x" << setw(17) << "y" << endl;
    xstartD = xstart;
    do {
        y = pow(xstartD, 5) + pow(xstartD, 1. / 2) - 3;
        cout << setw(7) << xstartD << setw(17) << y << endl;
        xstartD += step;
    } while ((xstartD >= 3) && (xend <= 5) && (xstartD <= xend) && (step == 0.2));
    return 0;
}
