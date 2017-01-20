#include "../std_lib_facilities.h"
#include "float.h"

//int main()
//{
//  double inputNumber1, inputNumber2;
//  while(cin >> inputNumber1 && cin >> inputNumber2){
//    
//    if (inputNumber1 < inputNumber2) {
//      cout << "The smallest value is: " << inputNumber1 << ". \nThe largest value is: " << inputNumber2 << ".\n";
//    }
//    else if (inputNumber1 > inputNumber2) {
//      cout << "The smallest value is: " << inputNumber2 << ". \nThe largest value is: " << inputNumber1 << ".\n";
//    }
//    else {
//      cout << "The inputNumberbers are equal. \n";
//    }
//     
//    if (abs(inputNumber1-inputNumber2) < .01 && inputNumber1 != inputNumber2){
//      cout << "The inputNumberbers are almost equal.  \n";
//    }
//  }
//   
//  return 0;
//}


double centimetersToMeters(double centimetersToConvert){
  return centimetersToConvert/100;
}

double inchesToMeters(double inchesToConvert){
  return inchesToConvert/39.3701;
}

double feetToMeters(double feetToConvert){
  return feetToConvert/3.28084;
}

int main()
{
  double largeNumber = -DBL_MAX;
  double smallNumber = DBL_MAX;
  double inputNumber;
  string unitOfMeasure;
  double sumOfInputs = 0;
  vector<double> inputsInMeters;
  
  while (cin >> inputNumber && cin >> unitOfMeasure){
    if (unitOfMeasure == "cm" || unitOfMeasure == "in" || unitOfMeasure == "ft" || unitOfMeasure == "m"){
      cout << inputNumber << unitOfMeasure << " \n";

      if (unitOfMeasure == "cm"){
        inputNumber = centimetersToMeters(inputNumber);
      }
      else if (unitOfMeasure == "in"){
        inputNumber = inchesToMeters(inputNumber);
      }
      else if (unitOfMeasure == "ft"){
        inputNumber = feetToMeters(inputNumber);
      }

      if (inputNumber < smallNumber){
        smallNumber = inputNumber;
        cout << "smallest so far\n";
      } 
      if (inputNumber > largeNumber){
        largeNumber = inputNumber;
        cout << "largest so far\n";
      }
      inputsInMeters.push_back(inputNumber);
      sumOfInputs += inputNumber;
    }
    else {
      cout << "Bad input.\n";
    }
  }

  sort(inputsInMeters);
  
  cout << "Smallest value: " << smallNumber << "m\n";
  cout << "Largest value: " << largeNumber << "m\n";
  cout << "There were " << inputsInMeters.size() << " inputs for a total of " << sumOfInputs << " meters.\n";
  cout << "Full list of inputs: \n";
  for (double x : inputsInMeters) {
    cout << x << " ";
  } 
  
  return 0;
}
