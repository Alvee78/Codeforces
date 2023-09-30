#include<stdio.h>
#include<string.h>
int b[10];
void merge(int *a,int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}


void mergesort(int *a,int i,int j){
	//base case
	if(i>=j)return;
	int m=(i+j)/2;
	//recursive case
	printf("\n");
	mergesort(a,i,m);
	mergesort(a,m+1,j);
	merge(a,i,m,j);
}
int main(){
	int a[]={4,3,2,1};
	mergesort(a,0,3);
	for(int i=0;i<4;i++){
		printf("%d ",a[i]);
	}
	return 0;
	}
//O(NlogN);
//mergesort algorithm 
