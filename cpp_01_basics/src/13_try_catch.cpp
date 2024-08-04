#include <iostream> 
using namespace std; 
  
// Driver code 
int main()  
{ 
  int numerator = 5; 
  int denominator = 0; 
  int result; 
    
  try
  { 
    if(denominator == 0) 
    { 
      throw denominator; 
    } 
    result = numerator / denominator; 
  } 
  catch(int ex) 
  { 
    cout << "Exception: Divide by zero not allowed :" <<  
             ex << endl; 
  } 
  cout << "Division Result is: " << result; 
    
  return 0; 
}