#include <iostream>
#include <iomanip>
#include "myConstants.h"

using namespace std;

void getDistance(double height, double time)
{
    double dist = height - myConstants::gravity*(time*time)/2;
    if (dist > 0)
        cout << "At " << time << " seconds, the ball is at height: " << dist << " meters" << endl;
    else
        cout << "At " << time << " seconds, the ball is on the ground" << endl;

}

int main()
{
    double height;
    std::cout << "Enter the height of the tower in metres: ";
    std::cin >> height;
    std::cout << std::setprecision(4);
    getDistance(height, 0);
    getDistance(height, 1);
    getDistance(height, 2);
    getDistance(height, 3);
    getDistance(height, 4);
    getDistance(height, 5);


    return 0;
}
