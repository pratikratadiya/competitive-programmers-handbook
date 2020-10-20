#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

int* merge_sort(int arr[], int start, int end){
    
    while(start < end){
        int mid = (start + (end - start)) / 2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    int input_array[n];

    loop(i,0,n){
        cin >> input_array[i];
    }

    int* output_array = merge_sort(input_array,0,n-1);

    loop(i,0,n){
        cout << output_array[i] << " ";
    }

    return 0;
}