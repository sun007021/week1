//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int findePivot(int l, int r) {
//
//	int pivot = (rand() % (r - l) + l);
//	return pivot;
//}
//
//void swap(int* arr, int a, int b) {
//	int tmp = arr[a];
//	arr[a] = arr[b];
//	arr[b] = tmp;
//}
//
//int inPlacePartition(int* arr, int l, int r, int k) {
//	int pivot = arr[k];
//	swap(arr, k, r);
//
//	int i, j, temp;
//	i = l;
//	j = r - 1;
//
//	while (i <= j) {
//		while (i <= j && arr[i] <= pivot) {
//			i++;
//		}
//		while (j >= i && arr[j] > pivot) {
//			j--;
//		}
//
//		if (i < j) {
//			swap(arr, i, j);
//		}
//	}
//	swap(arr, i, r);
//	
//	return i;
//}
//
//void inPlaceQuickSort(int* arr, int l, int r) {
//	if (l >= r) {
//		return;
//	}
//	int pivot = findePivot(l, r);
//	int pivot_index = inPlacePartition(arr, l, r, pivot);
//	inPlaceQuickSort(arr, l, pivot_index - 1);
//	inPlaceQuickSort(arr, pivot_index + 1, r);
//}
//
//void print(int* arr, int n) {
//	for (int i = 0; i < n; i++) {
//		printf(" %d", arr[i]);
//	}
//}
//int main() {
//	srand(time(NULL));
//	int n;
//	scanf("%d", &n);
//	int* arr = malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	inPlaceQuickSort(arr, 0, n - 1);
//	print(arr, n);
//	free(arr);
//	return 0;
//}