// insertion-sort.c
// 2015.10.9
// zhanghaoran

// data: an array store the numbers to sort, sorted in place
// datalen: the length of the array 'data'
void insertion_sort(int *data, int datalen) {
	int i = 0, j = 0, key = 0;
	for (j = 1; j < datalen; ++j) {
		key = data[j];
		i = j - 1;
		while (i >= 0 && data[i] > key) {
			data[i + 1] = data[i];
			--i;
		}
		data[i + 1] = key;
	}
}

void insertion_sort_desc(int *data, int datalen) {
	int i = 0, j = 0, key = 0;
	for (j = 1; j < datalen; ++j) {
		key = data[j];
		i = j - 1;
		while (i >= 0 && data[i] < key) {
			data[i + 1] = data[i];
			--i;
		}
		data[i + 1] = key;
	}
}
