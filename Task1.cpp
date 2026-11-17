// Лабораторна робота №8 — Задача 1 (одновимірні масиви)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

void printArray(const int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i + 1 < n ? " " : "");
    }
    cout << endl;
}

int main()
{
    const int m = 12;
    int a[m] = {15, -3, 42, 7, 0, -11, 28, 4, 19, -8, 12, 5};
    int asc[m], desc[m];

    for (int i = 0; i < m; i++) {
        asc[i] = a[i];
        desc[i] = a[i];
    }

    // Сортування за зростанням
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - 1 - i; j++) {
            if (asc[j] > asc[j + 1]) {
                int tmp = asc[j];
                asc[j] = asc[j + 1];
                asc[j + 1] = tmp;
            }
        }
    }

    // Сортування за спаданням
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - 1 - i; j++) {
            if (desc[j] < desc[j + 1]) {
                int tmp = desc[j];
                desc[j] = desc[j + 1];
                desc[j + 1] = tmp;
            }
        }
    }

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Original:   "; printArray(a, m);
    cout << "Ascending:  "; printArray(asc, m);
    cout << "Descending: "; printArray(desc, m);
    return 0;
}
