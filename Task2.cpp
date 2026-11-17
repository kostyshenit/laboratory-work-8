// Лабораторна робота №8 — Задача 2 (одновимірні масиви)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int a[n] = {-5, 3, -2, 8, -9, 14, -7, 14, -1, 4};

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIdx]) {
            maxIdx = i;
        }
    }

    for (int i = 0; i < maxIdx; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }

    cout << "First max element: a[" << maxIdx << "] = " << a[maxIdx] << endl;
    cout << "Modified array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
