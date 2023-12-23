#include<stdio.h>
void swap(int *a,int *b){
    int temp  = *a;
    *a = *b;
    *b = temp;
}
int Partition(int arr[],int l,int r){
    int i =l,j=r;
    int key = arr[l];
    while(j-i>1)
        if(key>arr[i]){swap(&arr[j],&arr[i]);j--;}
        else i++;
    }
    swap(&arr[0],&arr[i]);
    return k;
}
void QuickSort(int arr[],int l,int r){
    if(l<r){
        int i= Partition(arr,l,r);
        QuickSort(arr,l,i-1);
        QuickSort(arr,i+1,r);
    }
}
int main(){
    int arr[10]={15,34,45,23,54,23,52,53,32,56};
    QuickSort(arr,0,9);
    for(int i=0;i<10;i++)printf("%d ",arr[i]);
}