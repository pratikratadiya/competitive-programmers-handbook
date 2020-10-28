#include<bits/stdc++.h>

using namespace std;

void generate_permutations(int arr[], int n){
    sort(arr,arr+n);

    do{
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    } while (next_permutation(arr,arr+n));
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    generate_permutations(arr,n);
    return 0;
}