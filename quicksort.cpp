#include <iostream>
using namespace std;

//swap func.
void swap(int arr[],int i,int j){
    int temp= arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}

//partition func.
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;

    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }

    }
    swap(arr,i+1,r);
    return i+1;
}

//quick sort func.
void quicksort(int arr[],int l,int r){
    if(l<r){

        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);

    }
}

int main(){
    int arr[]={5,8,4,2,1,3,9};
    quicksort(arr,0,6);
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}