#include<bits/stdc++.h>
using namespace std;
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p,e);
    }
}
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);
    int i=s,j=e;
    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    } 
    return pivotIndex;
}
// int partition (int arr[], int low, int high) 
// { 
//     int pivot = arr[high]; // pivot 
//     int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
//     for (int j = low; j <= high - 1; j++) 
//     { 
//         // If current element is smaller than the pivot 
//         if (arr[j] < pivot) 
//         { 
//             i++; // increment index of smaller element 
//             swap(&arr[i], &arr[j]); 
//         } 
//     } 
//     swap(&arr[i + 1], &arr[high]); 
//     return (i + 1); 
// } 