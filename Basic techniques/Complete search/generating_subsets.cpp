#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

vector<int> subset;

// Finds subsets of [start,end)
void process_subsets_recursive(int start, int end){
    
    if(start == end){               // Process this subset, we have shown a sample print operation
        for(auto x:subset){
            cout << x << " ";
        }
        cout << "\n";
    }

    else{
        process_subsets_recursive(start+1,end);
        subset.push_back(start);
        process_subsets_recursive(start+1,end);
        subset.pop_back();
    }
}

// Generate all subsets of given array elements
void process_subsets_bitwise(int arr[], int size){

    int count = pow(2,size);

    loop(i,0,count){
        loop(j,0,size){
            
            if((i & (1 << j)) != 0){
                cout << arr[j] << " ";        // Add element to current subset
            }    
        }
        cout << "\n";
    }
}

int main(){
    int start, end;
    cout << "Generating subsets for: " << "\n";
    cin >> start >> end;
    process_subsets_recursive(start,end);

    int size;
    cin >> size;
    int input_arr[size];
    loop(i,0,size){
        cin >> input_arr[i];
    }

    process_subsets_bitwise(input_arr,size);

    return 0;
}