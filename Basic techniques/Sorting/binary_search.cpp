#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

// Reduce interval size by comparing mid element with element to be searched
void binary_search_conventional(int arr[], int size, int element){
    int start = 0, end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == element){
            cout << "Element found\n";
            return;
        }

        if(arr[mid] > element) end = mid - 1;
        else start = mid + 1;
    }
    cout << "Element not found\n";
}

// Reduce the speed of jump as you move closer to the element
void binary_search_speedreducer(int arr[], int size, int element){
    int index = 0;

    for(int jump = size/2; jump >= 1; jump /= 2){
        while(index+jump < size && arr[index+jump] <= element) index += jump;
    }
    if(arr[index] == element){
        cout << "Element found\n";
    }
    else cout << "Element not found\n";
}

int main(){
    int size,element;
    cin >> size;

    int input_array[size];

    loop(i,0,size){
        cin >> input_array[i];
    }

    cin >> element;
    binary_search_speedreducer(input_array,size,element);
    return 0;

}
