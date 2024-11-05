#include <iostream>

using namespace std;
int main()

{
float V, t, a;

cout << "V = ";
cin >> V;

cout << "t = ";
cin >> t;

cout << "a = ";
cin >> a;

float S = V * t + (a * t * t) / 2;

cout << "S = " << S;
}
