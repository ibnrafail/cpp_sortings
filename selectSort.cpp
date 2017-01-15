/**
 * @file Contains implementation of select sorting algorithm.
 */
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

template<class T>
void showArray(vector<T> &array) {
	cout << "[";
	for (size_t i = 0; i < array.size() - 1; i++)
		cout << array[i] << ", ";
	cout << array[array.size() - 1] << "]" << endl;
}

void selectSort(vector<int> &array) {
	int min, indMin;
	for (size_t i = 0; i < array.size(); i++) {
		min = array[i]; indMin = i;
		for (size_t j = i + 1; j < array.size(); j++) {
			if (array[j] < min) {
				min = array[j];
				indMin = j;
			}
		}
		if (indMin != i)
			swap(array[i], array[indMin]); /** calling @ref std::swap */
	}
}

int main() {
	srand(time(0));
	vector<int> array;

	/** Generating numbers from 1 to 10 */
	for (size_t i = 0; i < 10; i++)
		array.push_back(1 + rand() % 10);

	showArray(array);
	selectSort(array);
	showArray(array);
	return 0;
}