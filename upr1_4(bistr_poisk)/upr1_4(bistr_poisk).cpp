#include <iostream>
#include <conio.h>
#include <locale>
using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    int mas[N];
    bool TF = true;
    char t;
    int t1;
    int q, p;
    int r = 0;
    for (int i = 0; i < N; i++) {
        mas[i] = i;
    }
    while (TF) {
        cout << "q и p введите" << endl;
        cin >> q >> p;
        if (mas[q] == p) {
            continue;
        }
        t1 = mas[q];
        for (int i = 0; i < N; i++) {
            if (mas[i] == t1) {
                mas[i] = mas[p];
                r += 1;
            }
        }
        cout << q << " " << p << "   ";
        for (int i = 0; i < N; i++)
        {
            cout << mas[i] << ", ";
        }
        cout << endl << "Количество обращений: " << r << endl;
        r = 0;
        cout << "Продолжаем?" << endl;
        cin >> t;
        if (t == 'n') {
            TF = false;
        }
    }
    _getch();
}
