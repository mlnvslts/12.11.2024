#include <iostream>
using namespace std;

int main() {
    int th = 0, tm = 0, rh = 0, rm = 0, Th = 0, Tm =0, result2h, result2m;       
    double t, r, T, ts, result2;                                        
    int result1;                                  
    cout << endl;
 
 
    for(;;)
    {
        cout << "Введите время прихода мастера на работу:\n";
        cout << "Введите час: ";
        cin >> th;
        cout << "Введите минуты: ";
        cin >> tm;
        
        t = static_cast<double>(th) + static_cast<double>(tm)/60;
        break;
    }
    cout << endl;
 
   for(;;)
   {
       cout << "Введите время обслуживания мастером одного клиента:\n";
       cout << "Введите час: ";
       cin >> rh;
       cout << "Введите минуты: ";
       cin >> rm;
       
        r = (double)(rh) + (double)(rm)/60;
       break;
   }
    cout << endl;
  for(;;)
  {
      cout << "Введите время, когда мастер уходит с работы:\n";
      cout << "Введите час: ";
      cin >> Th;
      cout << "Введите минуты: ";
      cin >> Tm;
      
        T = static_cast<double>(Th) + static_cast<double>(Tm)/60;
        break;
  }
 
 
 
  ts = T - t;       
  result1 = ts/r;     
  result2 = result1 * r;                   
  result2h = result2;                  
  result2m = (60*(result2 - result2h)); 
 
  cout << endl << endl << "Ответ:" << endl << "За смену мастер успеет обслужить " << result1 << " клиентов";
  cout << endl << "Он потратит на это " << result2h << " часов " << result2m << " минут." << endl << endl;
 
return 0;
}