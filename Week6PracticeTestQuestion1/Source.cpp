/************************************************
** Author: Andrea Hayes
** Date:
** Purpose:
** Input:
** Processing:
** Output:
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    const double MARSSG = 0.377, JUPITERSG = 2.528, SATURNSG = 1.064, NEPTUNESG = 1.125;
    double weight, mars, jupiter, saturn, neptune;

    cout << "Enter the object's weight on Earth (any unit): " << endl;
    cin >> weight;

    mars = weight * MARSSG;
    jupiter = weight * JUPITERSG;
    saturn = weight * SATURNSG;
    neptune = weight * NEPTUNESG;

    cout << fixed << setprecision(2);
    cout << right << setw(38) << "Equivilant Weights" << endl;
    cout << left << setw(10) << "Mars " << right << setw(46) << mars << endl;
    cout << left << setw(10) << "Jupiter " << right << setw(46) << jupiter << endl;
    cout << left << setw(10) << "Saturn " << right << setw(46) << saturn << endl;
    cout << left << setw(10) << "Neptune " << right << setw(46) << neptune << endl;

    return 0;
}