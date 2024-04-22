#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int minValue;
    int minElemIdx;
    int matchesNumber = 1;
    const int LENGHT = 10;
    int arr[LENGHT];
    for (int i = 0; i < LENGHT; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << ' ';
    }

    minValue = arr[0];
    for (int i = 1; i < LENGHT; i++) {
        if (minValue > arr[i]) {
            minValue = arr[i];
            minElemIdx = i + 1;
            matchesNumber = 1;
        }
        else {
            if (minValue == arr[i]) {
                matchesNumber++;
            }
        }
    }

    cout << endl;
    cout << "Минимальный элемент: " << minValue << endl;
    cout << "Его номер равен: " << minElemIdx << endl;
    cout << "Количество совпадающих с ним элементов: " << matchesNumber;
    return 0;
}
