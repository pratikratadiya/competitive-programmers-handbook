#include<bits/stdc++.h>

using namespace std;

int main(){

    // Bitset: Requires lesser memory if storing bool values. Only 0 or 1 permitted
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[7] = 1;
    cout << s[3] << " " << s[5] << "\n";

    // Another way to initialize
    bitset<10> s1(string("0010100001"));
    cout << s1.count() << "\n"; // Returns number of 1s

    bitset<10> s2(string("1010100101"));
    // Operations: AND OR EXOR
    cout << (s1&s2) << "\n";
    cout << (s1|s2) << "\n";
    cout << (s1^s2) << "\n";

    // Deque: Slower than vector, but add and deletion in O(1)
    deque<int> d;
    d.push_back(5); //[5]
    d.push_back(3); //[5,3]
    d.push_front(2); //[2,5,3]
    d.pop_back();
    d.pop_front();
    d.push_front(1);
    d.push_front(7);

    for(auto it=d.begin();it!=d.end();it++){
        cout << *it << " ";
    }
    cout << "\n";

    // Stack
    stack<int> st;
    st.push(5);
    st.push(7);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    // Queue
    queue<int> q;
    q.push(5);
    q.push(7);
    cout << q.front(); //5
    q.pop();
    cout << " " << q.front() << "\n"; //7

    // Priority queue: Similar to ordered set but smaller constant factors as implemented in heap than balanced binary tree
    // By default sorted in descending order
    priority_queue<int> q2;
    q2.push(3);
    q2.push(5);
    q2.push(7);
    q2.push(2);
    cout << q2.top() << "\n";  //7
    q2.pop();
    cout << q2.top() << "\n";  //5  
    q2.push(6);
    cout << q2.top() << "\n";  //6
    
    return 0;  
}