// merge-sort.cpp
// 2015.10.11
// zhanghaoran

#include <stdlib.h>

void merge(int *num_arr, int start, int middle, int end) {
	int n1 = middle - start + 1, n2 = end - middle;
	int *l = (int *)malloc(n1 * sizeof(int));
	int *r = (int *)malloc(n2 * sizeof(int));
	for (int i = 0; i < middle - start + 1; ++i)
		l[i] = num_arr[start + i];
	for (int i = 0; i < end - middle; ++i)
		r[i] = num_arr[middle + 1 + i];
	int i = 0, j = 0;
	for (int k = start; k <= end; ++k) {
		if (i == n1) {
			//num_arr[k] = r[j++];
			while (k <= end) {
				num_arr[k++] = r[j++];
			}
			break;
		}
		else if (j == n2) {
			//num_arr[k] = l[i++];
			while (k <= end) {
				num_arr[k++] = l[i++];
			}
			break;
		}
		else if (l[i] < r[j]) {
			num_arr[k] = l[i++];
		}
		else {
			num_arr[k] = r[j++];
		}
	}
	free(l);
	free(r);
}

void merge_sort(int *num_arr, int start, int end) {
	if (start < end) {
		int middle = (end + start) / 2;
		merge_sort(num_arr, start, middle);
		merge_sort(num_arr, middle + 1, end);
		merge(num_arr, start, middle, end);
	}
}
