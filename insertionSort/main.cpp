#include <iostream>
#include <algorithm>
#include <string>
#include "SortTestHelper.h"
#include "SelectionSort.h"

using namespace std;

template<typename T>
void insertionSort(T arr[], int n){

	for(int i = 1; i < n; i++){

		//寻找元素arr[i]合适的插入位置
		for(int j = i; j > 0; j--){
			if(arr[j] < arr[j-1])
				swap(arr[j], arr[j-1]);
			else
				break;
		}
	}
}


int main()
{
	int n = 100;
	int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    int *arr2 = SortTestHelper::copyArray(arr, n);

    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
    SortTestHelper::testSort("Insertion Sort", insertionSort, arr2, n);

	delete[] arr;
	delete[] arr2;

	return 0;
}
