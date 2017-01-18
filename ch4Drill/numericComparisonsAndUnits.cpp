#include "../std_lib_facilities.h"

int main()
{
  double num1, num2;
  while(cin >> num1 && cin >> num2){
    
    if (num1 < num2) {
      cout << "The smallest value is: " << num1 << ". \nThe largest value is: " << num2 << ".\n";
    }
    else if (num1 > num2) {
      cout << "The smallest value is: " << num2 << ". \nThe largest value is: " << num1 << ".\n";
    }
    else {
      cout << "The numbers are equal. \n";
    }
    
    if (abs(num1-num2) < .01 && num1 != num2){
      cout << "The numbers are almost equal.  \n";
    }
  }
   
  return 0;
}
