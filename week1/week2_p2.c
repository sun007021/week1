//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void swap(int* arr, int i, int j) {
//	int tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	int* arr = malloc(n * sizeof(int));
//	
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i =1; i < n; i++) {
//		for (int j = i-1; j >= 0; j--) {
//			if (arr[j] > arr[j + 1]) {
//				swap(arr, j, j + 1);
//			}
//			else {
//				break;
//			}
//		}
//	}
//
//	//Ãâ·Â
//	for (int i = 0; i < n; i++) {
//		printf(" %d", arr[i]);
//	}
//
//	free(arr);
//
//	return 0;
//}