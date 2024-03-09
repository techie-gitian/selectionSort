#include<iostream>
using namespace std;
int main() {
	int arr[5], i, j, temp;
	for (i = 0;i < 5;i++) {
		cout << "Input Value \n";
		cin >> arr[i];
	}
	cout << "Inserted Values Are: \n";
	for (i = 0;i < 5;i++) {
		cout << arr[i]<<" ";

	}
	for (i = 0;i < 4;i++) {
		for (j =i+ 1;j < 5;j++) {
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[j] = arr[i];
				arr[i] = temp;
			}

		}
	}
	cout << "\nSorted Array: \n";
	for (i = 0;i < 5;i++) {
		cout << arr[i]<<" ";
	}
}