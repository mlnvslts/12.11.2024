#include <iostream>

using namespace std;
int main()

{
    float S1;
    float t1;

    cout << "Введите дистанцию (в метрах): ";
    cin >> S1;

    cout << "Введите время (в секундах):";
    cin >> t1;

    float S2 = S1 / 1000;
    float t2 = t1 / 60 / 60;

    float V = S2 / t2;

    cout << "Скорость на забеге была равна " << V << "км/ч";

}