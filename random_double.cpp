#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

double fRand(double min, double max)
{
    double f;

    f = (double)rand() / RAND_MAX;
    return min + (max - min) * f;
}

int main()
{
    unsigned seed = time(0);
    srand(seed);

    cout << fixed << setprecision(2);
    cout << fRand(10.0, 100.0);
    return 0;
}
