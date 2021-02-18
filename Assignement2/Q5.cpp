#include <iostream> 
using namespace std; 
  
int numberOfPaths(int m, int n) 
{ 
    int p = 1;  //p is path
    for (int i = n; i < (m + n - 1); i++) { 
        p *= i; 
        p /= (i - n + 1); 
    } 
    return p; 
} 
int main() 
{ 
    cout << numberOfPaths(3, 3); 
    return 0; 
} 
