#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 123456789;
    long long b = (long long) a * a; // Type conversion is necessary
    cout << b << "\n";

    // Remember: Modulo can be taken before operations like add, subtract, multiply
    // Eg: Calculating factorial(n) % m
    int n, m;
    cout << "Enter n and m values to calculate factorial(n) % m: ";
    cin >> n >> m;

    long long x = 1;
    for(int i = 2; i <= n; i++){
        x = (x*i)%m;                // calculate modulo during factorial calculation itself
    }
    cout << x%m << "\n";

    float samp = 23.7625672;
    cout << "Printing with precision: ";
    printf("%.5f\n",samp); // To print output with a particular precision

    float samp2 = 23.762567;

    if(abs(samp-samp2) < 1e-9){     // More precise way to compare floats than == operator
        cout << "Equal \n";
    }

    return 0;
}