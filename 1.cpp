#include <iostream>
using namespace std;

int main()
{
    int k;
    float p;
    int r;
    int profit = 0;
    int years = 0;
    int prec = k;
    
    cout << "Введите размер кредита: ";
    cin >> k;
    
    cout << "Введите годовой процент: ";
    cin >> p;
    
    cout << "Введите прибыль за год: ";
    cin >> r;
    
    while (profit < k)
    {
        k+=prec*(p/100);
        profit+=r;
        ++years;
    }
    
    cout << "Кредит будет выплачен за " <<years<< "лет";
}
