// test.c
// 2015.10.9
// zhanghaoran
#include <stdio.h>
#include "insertion-sort.h"

int main(){
	int a[] = {5, 2, 4, 6, 1, 3};
	printf("size: %d\n", sizeof(a));
	insertion_sort(a, sizeof(a)/sizeof(int));
	for (int i = 0; i < sizeof(a)/sizeof(int); i++)
		printf("%d  ", a[i]);
}
