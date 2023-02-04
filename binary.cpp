#include <bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s =0;
int e=n-1;
int mid=e-(s-e)/2;


while(s<e){

if(arr[mid]==arr[key]){

    return mid;
}

if(arr[mid]>arr[key]){


    e=mid-1;

    mid=e-(e-s)/2;


}


else{
    s=mid+1;

    mid=s+(e-s);
}


}

}

int main(){


    int arr[]={1,2,3,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin key;
    int index=binarysearch(arr,n,key);
    
    '

}