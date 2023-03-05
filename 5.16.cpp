#include <iostream>
#include <cmath>

using namespace std;

int main (){
    float x, y;
    cout << "x = ";
    cin >> x;
    if (x > 7)
        y = (2 * (x * x)) - 3;
    else if (x == 7)
        y = 0;
    else if (x < 7)
        y = 2 * abs(x) + 3;
    cout << "f(x) = " << y;

    return 0;
}
