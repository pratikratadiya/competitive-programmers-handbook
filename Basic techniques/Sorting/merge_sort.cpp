#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i <= b; i++)

void merge(int arr[], int start, int mid, int end){

    int first_subarray_size = mid - start + 1;
    int second_subarray_size = end - mid;

    int first_temp[first_subarray_size], second_temp[second_subarray_size];

    loop(i,0,first_subarray_size - 1){
        first_temp[i] = arr[start + i];
    }

    loop(j,0,second_subarray_size - 1){
        second_temp[j] = arr[mid + 1 + j];
    }

    int fsub_index = 0, ssub_index = 0, merged_index = start;

    while (fsub_index < first_subarray_size && ssub_index < second_subarray_size){

        if(first_temp[fsub_index] <= second_temp[ssub_index]){
            arr[merged_index] = first_temp[fsub_index];
            fsub_index++;
        }

        else{
            arr[merged_index] = second_temp[ssub_index];
            ssub_index++;
        }

        merged_index++;
    }

    while (fsub_index < first_subarray_size){
        arr[merged_index] = first_temp[fsub_index];
        fsub_index++;
        merged_index++;
    }

    while (ssub_index < second_subarray_size){
        arr[merged_index] = second_temp[ssub_index];
        ssub_index++;
        merged_index++;
    }
        
}

void merge_sort(int arr[], int start, int end){
    
    if(start < end){
        int mid = start + (end - start) / 2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int input_array[n];

    loop(i,0,n-1){
        cout << "Enter element " << i+1 << ": ";
        cin >> input_array[i];
    }

    merge_sort(input_array,0,n-1);

    loop(i,0,n-1){
        cout << input_array[i] << " ";
    }

    cout << "\n";
    return 0;
}