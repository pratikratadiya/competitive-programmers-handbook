#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for (int i = a; i < b; i++)

// Construct a set of arr1, then loop through arr2. O(nlogn)
int common_elements_by_sets(int arr1[], int arr2[], int size1, int size2){

    int common_elements = 0;
    
    set<int> s(arr1, arr1+size1);

    loop(i,0,size2){
        if(s.count(arr2[i])==1) common_elements++;
    }
    return common_elements;
}

// Same logic but using the faster unordered_set as order doesn't matter here. O(n)
int common_elements_by_unordered_sets(int arr1[], int arr2[], int size1, int size2){

    int common_elements = 0;
    
    unordered_set<int> s(arr1, arr1+size1);

    loop(i,0,size2){
        if(s.count(arr2[i])==1) common_elements++;
    }
    return common_elements;
}

/* Sorting the lists and then looping through them simultaneously. O(nlogn) but faster than 1 as logn operation
(sorting) is performed only once at the start while Funcn1 always works in logn constraint for all n elements */
int common_elements_by_sorting(int arr1[], int arr2[], int size1, int size2){
    
    int common_elements = 0;
    sort(arr1,arr1+size1);
    sort(arr2,arr2+size2);

    int findex = 0, sindex = 0;

    while(findex < size1 && sindex < size2){
        if(arr1[findex] < arr2[sindex]) findex++;
        else if(arr1[findex] > arr2[sindex]) sindex++;
        else{
            common_elements++;
            findex++;
            sindex++;
        }
    }
    return common_elements;
}

int main(){
    int size1, size2;
    cout << "Enter size of array 1 and array 2: ";
    cin >> size1 >> size2;

    int a[size1], b[size2];

    cout << "Enter elements of list 1: ";
    loop(i,0,size1){
        cin >> a[i];
    }

    cout << "Enter elements of list 2: ";
    loop(i,0,size2){
        cin >> b[i];
    }

    cout << "The number of common elements by \n";
    cout << "Method 1: " << common_elements_by_sets(a,b,size1,size2) << "\n";
    cout << "Method 2: " << common_elements_by_unordered_sets(a,b,size1,size2) << "\n";
    cout << "Method 3: " << common_elements_by_sorting(a,b,size1,size2) << "\n";
    return 0;
}