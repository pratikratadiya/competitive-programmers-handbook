#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

int main(){
    
    // Assuming the array is sorted. Only then these functions will work
    int size = 4;
    int arr[] = {21,78,89,89,90};

    // Find if element present in a sorted array
    auto k = lower_bound(arr,arr+size,89)-arr;
    if(k < size && arr[k] == 89){
        cout << "89 found\n";
    }

    // Find number of occurrences of 89:
    auto r = equal_range(arr,arr+size,89);
    cout << r.second - r.first << "\n";

    // Finding smallest solution Eg: Find k such that f(x) = True for x >= k and False otherwise
    // int x = -1;
    // for(int b = z; b >= 1; b /= 2){
    //     while(!f(x+b)) x += b;
    // }
    // int k = x + 1;

    // Finding maximum value of a function Eg: Find k such that f(x-1) < f(x) for x < k and f(x) > f(x+1) for x>=k
    // int x = -1;
    // for(int b = z; b >= 1; b /= 2){
    //     while(f(x+b) < f(x+b+1)) x += b;
    // }
    // int k = x + 1; 
}