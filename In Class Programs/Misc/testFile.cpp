#include <iostream>
#include <random>
#include <cmath>
using namespace std;

int main()
{
    double numInCircle;
    double numTotal;
    long double piEstimate;

    const int range_from  = 0;
    const int range_to    = 1;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_real_distribution<double>  distr(range_from, range_to);

    for (int i = 0; i < 50000000; i++)
    {
        double x = distr(generator);
        double y = distr(generator);
        double distance = pow(x,2) + pow(y,2);
        if (distance <= 1)
        {
            numInCircle++;
        }
        numTotal++;
    }
    piEstimate = 4 * (numInCircle/numTotal);
    cout << numInCircle << endl;
    cout << numTotal << endl;
    cout << piEstimate << endl;
    return 0;
}