/* *******************   NAME     : MITUL DUDHAT
  ********************   ROLL NO. : 1261
  ********************   DIV      : C    */
#include <stdio.h>
#define sin(n) scanf("%d",&n)
void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubbleSort(int arr[], int n) {
	int i, j;
	for (i = 1; i < n; i++)	// itretar
	for (j = 0; j < n-i; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}
int main() {
    int n;
    sin(n);
    int ar[n];
    for(int i = 0; i < n; i++) {
        int x;
		sin(x);
		ar[i] = x;
    }
	bubbleSort(ar, n);
	printf("Sorted array.....\n");
    for(int i = 0; i < n; i++) {
		printf("%d ",ar[i]);
    }
	return 0;
}