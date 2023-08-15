#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f(int a[],int low,int high){
    int i=low,j=high;
    int pav=a[low];
    while (i<j)
    {
        while (i<=high-1 and pav>=a[i])
        {
            i++;
        }
        while (j>=low+1 and pav<=a[j])
        {
            j--;
        }
        if(i<j)swap(a[i],a[j]);
    }
    swap(a[low],a[j]);
    return j;
}

void quick_sort(int a[],int low,int high){
    if(low>=high)return;
    int partition=f(a,low,high);
    quick_sort(a,low,partition-1);
    quick_sort(a,partition+1,high);
}

int main(){
    int a[]={4,3,6,2,1,5,7,8,5,3,9};
    int n=sizeof(a)/sizeof(int);
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}