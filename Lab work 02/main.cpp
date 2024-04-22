#include <iostream>
#include <stdlib.h>
using namespace std;


void arrayGenerator(int arr[], int lenght);
void arrayPrinter(int arr[], int lenght);
void arrayProcessing(int arr[], int lenght);

int main() {
	setlocale(LC_ALL, "Rus");
	const int LENGHT = 500;
	int arr[LENGHT];
	cout << "Введите длину массива: ";
	int lenght;
	cin >> lenght;
	arrayGenerator(arr, lenght);
	cout << "Массив:\n";
	arrayPrinter(arr, lenght);
	cout << "Вставляем -1 перед четными числами\n";
	arrayProcessing(arr, lenght);
	cout << "Массив:\n";
	arrayPrinter(arr, lenght);
	return 0;
}

void arrayGenerator(int arr[], int lenght) {
	srand(time(0));
	for (int i = 0; i < lenght; i++) {
		arr[i] = rand() % 100;
	}
}

void arrayPrinter(int arr[], int lenght) {
	for (int i = 0; i < lenght; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void arrayProcessing(int arr[], int lenght) {
	for (int i = 0; i < lenght; i++) {
		if (arr[i] % 2 == 0) {
			lenght++;
			for (int j = lenght; j >= i + 1; j--) {
				arr[j] = arr[j - 1];
			}
			arr[i] = -1;
			i++;
		}
	}
}