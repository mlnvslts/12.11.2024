#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество ячеек в одной строке: ";
    cin >> n;

    int pos = n * n;

    char a = '*';

    for (int i = 0; i < pos; ++i) {
        if (i % n == 0) {
            cout << endl;
        }
        cout << a << ' ';
    }
}