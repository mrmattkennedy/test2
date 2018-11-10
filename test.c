#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int binarySearch(int* arr, int min, int max, int searchElement);

int main() {
	/*
	int* arr = (int *)(malloc(SIZE * sizeof(int)));
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 1000;
		*/
	int arr[10] = {1, 2, 3, 5, 8, 10, 12, 15, 17, 20};

	int c = binarySearch(arr, 1, 10, 5);
	printf("%d\n", c);
}

int binarySearch(int* arr, int min, int max, int searchElement) {

	int mid = (min + max) / 2;
	printf("%d,%d,%d\n", min, mid, max);
	
	if (arr[mid] < searchElement)
		return binarySearch (arr, mid+1, max, searchElement);
	else if (arr[mid] > searchElement)
		return binarySearch (arr, min, mid-1, searchElement);
	else if (arr[mid] == searchElement)
		return mid;
	return -1;
}
