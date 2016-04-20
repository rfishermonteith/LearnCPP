#include <iostream>
#include "io.h"

using namespace std;

int main()
{
    int x = readNumber();
    int y = readNumber();
    writeNumber(x+y);
    return 0;
}
