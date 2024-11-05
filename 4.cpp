#include <iostream>

using namespace std;
int main()

{
    int seconds;
    cout << "Введите время в секундах: ";
    cin >> seconds;

    int hours = seconds / 60 / 60;
    int minuts = (seconds / 60) % 60;
    int seconds2 = seconds % 60;
    
    cout << hours << "ч." << minuts << "мин." << seconds2 << "сек.";
}
