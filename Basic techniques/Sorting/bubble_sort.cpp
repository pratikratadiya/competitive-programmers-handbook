#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i <= b; i++)

int* bubble_sort(int arr[], int size){

    loop(i,0,size-1){
        loop(j,0,size-2){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    int input_array[n];

    loop(i,0,n-1){
        cin >> input_array[i];
    }

    int* sorted_array = bubble_sort(input_array,n);

    loop(i,0,n-1){
        cout << sorted_array[i] << " ";
    }
    return 0;
}