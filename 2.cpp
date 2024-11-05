#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
    float L;

    cout << "L = ";
    cin >> L;
    
    float R = L / M_PI * 2;
    float S = M_PI * R * R;

    cout << S << '\n';
}