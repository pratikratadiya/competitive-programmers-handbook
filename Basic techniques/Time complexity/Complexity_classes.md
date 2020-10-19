## Complexity classes

The most common time complexity classes:

| Class | Description | Comments |
| :----- | :----------- | :----- |
| O(1) | Constant-time | Direct formula |
| O(logn) | Logarithmic | Halves input at each step |
| O(sqrt(n)) | Slower than logn, faster than n | Lies somewhere in the middle of the input |
| O(n) | Linear | Often the best, as you need to access each element atleast once in most cases |
| O(nlogn) | -- | Possibly sorting involved, or some data structure where individual operation needs O(logn) time |
| O(n^2) | Quadratic | Two nested loops |
| O(n^3) | Cubic | Three nested loops |
| O(2^n) | -- | Often indicates that algorithm iterates through all subsets of the input elements |
| O(n!) | -- | Often indicates that algorithm iterates through all permutations of the input elements |