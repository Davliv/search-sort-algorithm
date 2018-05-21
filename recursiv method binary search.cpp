#include "stdafx.h"
#include <iostream>

using namespace std;

int searchIndex(int arr[], int search, int left, int right) {
	if (right >= left)
	{

		int middle = (left + right) / 2;

		if (search == arr[middle]) {
			return middle;
		}
		else if (search < arr[middle]) {
			return searchIndex(arr, search, left, middle - 1);
		}

		else {
			return searchIndex(arr, search, middle + 1, right);
		}

	}
	return -1;
}


int main() {
	int arr[11] = { 12,17,19,21,25,27,29,31,32,33,42 };
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "Entered your number to fined index in array " << endl;
	int search;
	cin >> search;
	int left = 0;
	int index = searchIndex(arr, search, left, length);
	if (index) {
		cout << "entered number index in array is :" << index;
	}
	else {
		cout << "index is not fined" << endl;
	}


}



