#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    int n = 3; 
  
    // Create a vector of size n with 
    // all values as 10. 
    vector<int> vect(n, 10); 
  
    for (int x : vect) 
        cout << x << " "; 
  
    return 0; 
}