#include <stdio.h>
#include "bbsort.h"

int main(){
	int a[] = {1,5,2,5,6,4,8,11};
	sort(a, 8);
	int i;
	for (i = 0; i < 8; i++) printf("%i ", a[i]);
	printf("\n"); 
}
