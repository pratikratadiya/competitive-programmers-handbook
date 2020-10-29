#include<bits/stdc++.h>

using namespace std;

void permutations_recursion(int arr[], int n, vector<int> permutations, vector<bool> chosen){
    if(permutations.size() == n){
        for(auto x:permutations){
            cout << x << " ";
        }
        cout << "\n";
    }
    else{
        for(int i = 0; i < n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutations.push_back(arr[i]);
            permutations_recursion(arr,n,permutations,chosen);
            chosen[i] = false;
            permutations.pop_back();
        }
    }
}

void permutations_stl(int arr[], int n){
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
    
    vector<int> permutations;
    vector<bool> chosen(n,false);

    permutations_recursion(arr,n,permutations,chosen);

   permutations_stl(arr,n);
    return 0;
}