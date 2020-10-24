// This data structure is not a part of C++ but supported by g++
#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

int main(){
    
    // Creates an ordered set, but indexed like an array
    typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
    indexed_set s;

    s.insert(5);
    s.insert(7);
    s.insert(2);

    // Get element from index
    auto x = s.find_by_order(2);
    cout << *x << "\n";

    // Get index from element
    cout << s.order_of_key(7) << "\n";
    // If element absent, get to know what index would be allocated to it based on its value
    cout << s.order_of_key(8) << "\n";

    return 0;
}


