// Same code as Working_with_numbers.cpp but demonstrating how to shorten code

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

// define <new var/loop> <original var/loop>
#define s samp
#define s2 samp2
#define loop(i,a,b) for (int i = a; i<= n; i++)

int main(){
    int a = 123456789;
    ll b = (ll) a * a; // Type conversion is necessary
    cout << b << "\n";

    // Remember: Modulo can be taken before operations like add, subtract, multiply
    // Eg: Calculating factorial(n) % m
    int n, m;
    cout << "Enter n and m values to calculate factorial(n) % m: ";
    cin >> n >> m;

    ll x = 1;
    loop(i,2,n){
        x = (x*i)%m;                // calculate modulo during factorial calculation itself
    }
    cout << x%m << "\n";

    float s = 23.7625672;
    cout << "Printing with precision: ";
    printf("%.5f\n",s); // To print output with a particular precision

    float s2 = 23.762567;

    if(abs(s-s2) < 1e-9){     // More precise way to compare floats than == operator
        cout << "Equal \n";
    }

    return 0;
}