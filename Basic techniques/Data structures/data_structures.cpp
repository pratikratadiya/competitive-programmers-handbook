#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

int main(){
    // Dynamic Arrays
    vector<int> v = {4,3,1,7,89};
    
    v.push_back(8);

    cout << v[0] << " " << v[1] << " " << v[2] << "\n";

    loop(i,0,v.size()){
        cout << v[i] << " ";
    }

    for(auto x:v){
        cout << x << " ";
    }

    // Remove last element
    v.pop_back();
    cout << v.back() << "\n";

    // size 10, initialize to zero and five respectively
    vector<int> v1(10);
    vector<int> v2(10,5);

    string str = "Sample";
    cout << str.substr(1,2) << "\n"; // Substring of 2 characters starting from 1st index

    // Sets: Accept distinct entries
    set<int> s;
    s.insert(2);
    s.insert(3);
    cout << s.count(3) << "\n"; // Returns a 1 or 0 value depending on presence of element
    s.erase(3);

    // Cannot access set elements using [] notations
    for(auto x:s){
        cout << x << " ";
    }

    s.insert(4);

    // iterators on set
    auto it = s.begin(); // first element
    cout << *it << " ";
    it = s.end(); 
    it--;               // last element
    cout << *it << "\n";

    it = s.find(27);
    if(it == s.end()){
        cout << "27 not found" << "\n";
    }

    // Use this if you want to insert same element multiple times
    multiset<int> s2;
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    s2.erase(s2.find(5)); // to delete one instance
    s2.erase(5); // to delete all instances

    // Maps
    map<string,int> m;
    m["Monkey"] = 22;
    m["Human"] = 98;
    cout << m["Human"] << "\n";
    cout << m["Chimpanzee"] << "\n"; // automatically creates a zero entry

    if(m.count("Human")){
        cout << "human exists" << "\n";
    }

    for(auto x:m){
        cout << x.first << " " << x.second << "\n";
    }
}