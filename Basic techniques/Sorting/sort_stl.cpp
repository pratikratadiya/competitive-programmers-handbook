#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

int main(){
    vector<int> v = {4,2,3,5,6,2,1};
    
    // Ascending sort
    sort(v.begin(),v.end());
    cout << "Ascending\n";
    loop(i,0,v.size()){
        cout << v[i] << " ";
    }

    // Descending sort
    cout << "\nDescending\n";
    sort(v.rbegin(),v.rend());
    loop(i,0,v.size()){
        cout << v[i] << " ";
    }

    // Sorting an array
    int n = 7;
    int a[] = {2,1,3,5,4,1,8};
    sort(a,a+n);

    // Sorting a string
    string s = "geeksforever";
    sort(s.begin(),s.end());
    cout << "\n" << s << "\n";

    // Pair sorting. Prioritizes first element, then second element. Similarly for Tuple
    vector<pair<int,int>> v2;
    v2.push_back({1,3});
    v2.push_back({1,2});
    v2.push_back({5,8});
    sort(v2.begin(),v2.end());

    // Can also use external sorting function as third parameter to sort function. Can also overwrite < operator
}