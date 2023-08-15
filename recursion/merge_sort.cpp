#include<bits/stdc++.h>
using namespace std;
#define ll long long

void merge(int a[],vector<int>&temp,int low,int mid,int high){
    int i=0,j=0;
    if(low>=high)return;
    while (low+i<=mid and mid+1+j<=high)
    {
        if(a[low+i]<=a[mid+1+j]){
            temp.push_back(a[low+i]);
            i++;
        }else{
            temp.push_back(a[mid+1+j]);
            j++;
        }
    }
    while(mid+1+j>high and low+i<=mid){
        temp.push_back(a[low+i]);
        i++;
    }
    while(mid+1+j<=high and low+i>mid){
        temp.push_back(a[mid+1+j]);
        j++;
    }
    for(int k=0;k<high-low+1;k++){
        a[low+k]=temp[k];
    }
    temp.clear();
}

void mergesort(int a[],vector<int>&temp,int low,int high){
    if(low==high){
        return;
    }
    int mid=low+(high-low)/2;
    mergesort(a,temp,low,mid);
    mergesort(a,temp,mid+1,high);
    merge(a,temp,low,mid,high);
}

int main(){
    int a[]={2,1,3,1,4};
    int n=sizeof(a)/sizeof(int);
    int low=0,high=n-1;
    vector<int>temp;
    mergesort(a,temp,low,high);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}