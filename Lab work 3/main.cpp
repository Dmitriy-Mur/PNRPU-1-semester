#include <iostream>
#include <stdlib.h>
using namespace std;

const int LENGHT = 1000;
void fillRandomly(int arr[], int lenght);
void print(int arr[], int lenght);
void removeEvenElements(int arr[], int &lenght);

int main() {
    setlocale(LC_ALL, "Rus");
    int arr[LENGHT];
    cout << "Введите длину массива (от 1 до " << LENGHT << "): ";
    int lenght;
    cin >> lenght;
    fillRandomly(arr, lenght);
    cout << "Исходный массив:\n";
    print(arr, lenght);
    cout << "Удаляем четные элементы.\n";
    removeEvenElements(arr, lenght);
    cout << "Массив после удаления четных элементов:\n";
    print(arr, lenght);
    return 0;
}

void fillRandomly(int arr[], int lenght) {
    srand(time(0));
    for (int i = 0; i < lenght; i++) {
        arr[i] = (rand() % 100);
    }
}

void print(int arr[], int lenght) {
    for (int i = 0; i < lenght; i++) {
        cout << arr[i];
        cout << " ";
    }
    cout << "\n";
}

void removeEvenElements(int arr[], int &lenght) {
    int newLenght = 0;
    for (int i = 0; i < lenght; i++) {
        if ((arr[i] % 2) != 0) {
            arr[newLenght++] = arr[i];
        }
    }
    lenght = newLenght;
}
