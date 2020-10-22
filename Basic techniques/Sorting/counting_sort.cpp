#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

void count_sort(int input_array[], int size){
    int max = *max_element(input_array,input_array + size);

    int count_array[max];
    int output_array[size];

    loop(i,0,max){              // Initialize empty counter array
        count_array[i] = 0;
    }

    loop(i,0,size){                             // Fill counter array indices with count occurrences
        count_array[input_array[i]-1] += 1;
    }

    int output_index = 0;

    // Fill output array with the number COUNT number of times while moving index ahead
    loop(i,0,max){
        fill(output_array+output_index,output_array+output_index+count_array[i],i+1);
        output_index += count_array[i];    
    }

    loop(i,0,size){
        cout << output_array[i] << " ";
    }
}

int main(){
    int size;
    cin >> size;

    int input_array[size];
    loop(i,0,size){
        cin >> input_array[i];
    }

    count_sort(input_array,size);

    return 0;
}