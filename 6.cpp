#include <iostream>

using namespace std;
int main()

{
    int days;

    cout << "Введите количество дней: ";
    cin >> days;

    float weeks = days / 7;
    float days2 = days % 7;

    cout << weeks << " недель " << days2 << " дней\n";
}

