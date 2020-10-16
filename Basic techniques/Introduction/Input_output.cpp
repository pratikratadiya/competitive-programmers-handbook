#include<bits/stdc++.h>

using namespace std;

int main(){

    // Makes input output more efficient, when you want an input first
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,undefstring;
    getline(cin,s); // To read a whole line from the input along with possible spaces

    int i=0;
    while (cin>>undefstring){ // When amount of data is unknown. Use Ctrl+D to exit input in Linux
        i++;
    }

    cout << i << "\n";  // faster than endl as there is no flush operation

    // freopen("input.txt","r",stdin); // For reading input from file
    // freopen("output.txt","w",stdout); // For putting output in file

    return 0;
}