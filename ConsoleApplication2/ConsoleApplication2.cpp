#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

void printMas (int b[], int len);
void sortMas (int* b, int len);
int MaxMas (int* b, int len);
int MinMas (int* b, int len);
void setMas (int* b, int len);

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const short int size = 10;
    int a[size];
    setMas(a, size);
    cout << "Оригінальний массив:" << endl;
    printMas(a, size);

    sortMas(a, size);

    cout << endl << "Сортований массив:" << endl;
    printMas(a, size);
    
    cout << endl << "Мінімальне значення: " << MinMas(a, size) << endl << "Максимальне значення: " << MaxMas(a, size) << endl;
    system("pause");
}
void printMas (int b[], int len) {
    for (int i = 0; i < len; i++) {
        cout << b[i] << "\t";
    }
}
int MaxMas(int* b, int len) {
    int max = b[0];
    for (int i = 1; i < len; i++) {
        if (max < b[i]) max = b[i];
    }
    return max;
}
int MinMas(int* b, int len) {
    int min = b[0];
    for (int i = 1; i < len; i++) {
        if (min > b[i]) min = b[i];
    }
    return min;
}
void setMas(int* b, int len) {
    for (int i = 1; i < len; i++) {
        b[i] = rand() % 100;
    }
}
void sortMas(int* b, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}
