#include<iostream>
#include<string>
using namespace std;

int partition(int a[], int low, int high) {
	int peak = a[high];
	int pindex = low;
	for (int i = low; i < high; ++i) {
		if (a[i] < peak) {
			swap(a[pindex], a[i]);
			pindex++;
		}
	}
	swap(a[pindex], a[high]);
	return pindex;
}

void quicksort(int a[], int low, int high) {
	if (low < high) {
		int pindex = partition(a, low, high);
		quicksort(a, low, pindex - 1);
		quicksort(a, pindex + 1, high);
	}
}

int main() {
	string arr[] = { "state1024", "county763","dma435","state234","state100","county297","dma4","dma987" };
	int n = sizeof(arr) / sizeof(arr[0]);
	int a[10] = { 0 };
	int m = 0;
	for (int i = 0; i < n; ++i) {
		string str = arr[i];
		string temp = "";
		for (int j = 0; j < str.length(); ++j) {
			if (isdigit(str[j])) {
				temp += str[j];
			}
		}
		a[m++] = stoi(temp);
	}
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; ++i) {
		cout << a[i] << "\t";
	}
}