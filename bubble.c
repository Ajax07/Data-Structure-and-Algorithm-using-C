#include<stdio.h>

void printArray(int* A, int n){
	int i;
	for(i=0; i<n;i++){
		printf("  %d ",A[i] );
	}
	printf("\n");
}

void bubbleSort(int *A, int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(A[j]>A[j+1]){
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main(){
	int A[] ={12, 54, 65, 7, 23, 9};
	int n=6;
	printArray(A, n);
	bubbleSort(A, n);
	printArray(A, n);
	return 0;
}