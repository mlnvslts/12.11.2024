#include <iostream>
using namespace std;

int main()
{
    int totalTime = 0;
    int processingTime; 
  
  cout << "Введите время обработки каждой детали на каждом станке (группы по 3 числа):\n";
  while (cin >> processingTime) {
    totalTime += processingTime;
    if (cin.peek() == ' ') {
      cin.ignore(); 
    } else {
      break; 
    }
  }

  cout << "Общее время обработки всех деталей: " << totalTime << " единиц времени.\n";
}