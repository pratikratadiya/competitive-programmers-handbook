#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i <= b; i++)

int return_max_sum(int arr[], int size){
    int best_sum = 0;

    loop(i,0,size-1){
        loop(j,i,size-1){
            int sum = 0;
            loop(k,i,j){
                sum += arr[k];
            }
            best_sum = max(best_sum,sum);
        }
    }
    return best_sum;
}

int main(){
    int n, sum;
    cin >> n;
    int list[n];
    loop(i,0,n-1){
        cin >> list[i];
    }
    sum = return_max_sum(list,n);
    cout << sum <<"\n";
    return 0;
}