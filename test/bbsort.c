#include "bbsort.h"

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int* array, int n){
	int flag = 0;
	int i;
	while (flag == 0){
		flag = 1;
		i = 0;
		while (i < n-1){
			if (array[i] > array[i+1]){
				swap(&array[i], &array[i+1]);
				flag = 0;
			}
			i++;
		}
	}
}

