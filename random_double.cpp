#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double fRand(double MIN, double MAX)
    {
        double f;
        const double MIN = 1.00, MAX = 100.00;

        unsigned seed = time(0);
        srand(seed);
        
        double f = (double)rand() / RAND_MAX;
        return MIN + (MAX - MIN) * f;
    }

int main()
{
    cout << f;
    return 0;
}
