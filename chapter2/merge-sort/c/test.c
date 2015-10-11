// test.c
// 2015.10.11
// zhanghaoran

#include "merge-sort.h"

int main() {
	printf("=====merge() test======\n");
	int arr1[] ={1,3,5,7,9,2,4,6,8};
	merge(arr1, 0, 4, 8);
	for (int i = 0; i < 9; i++)
		printf("%d ", arr1[i]);
	printf("\n\n");

	printf("=====merge_sort() test=====\n");
	int arr2[] = {1,123,2,12,32,12,888,432,43,2,15};
	for (int i = 0; i < sizeof(arr2) / sizeof(int); ++i)
		printf("%d ", arr2[i]);
	printf("\n");
	printf("\n");
	merge_sort(arr2, 0, sizeof(arr2) / sizeof(int) - 1);
	for (int i = 0; i < sizeof(arr2) / sizeof(int); ++i)
		printf("%d ", arr2[i]);
	printf("\n");
}
