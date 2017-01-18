#include "../std_lib_facilities.h"

int main()
{
  string userName;
  string friendName;
  char friendGender = 'n';
  int userAge;

  cout << "Enter the name of the person you wish to write to:\n";
  cin >> userName;
  cout << "Dear " << userName << ",\n";
  cout << "  How do?\n";
  cout << "Enter the name of a friend:\n";
  cin >> friendName;
  cout << "Have you seen " << friendName << " lately?\n";
  cout << "please enter your friend's gender (m, f, or n):\n";
  cin >> friendGender;
  if (friendGender == 'f'){
    cout << "If you see " << friendName << " please ask her to call me.\n";
  }
  else if (friendGender == 'm'){
    cout << "If you see " << friendName << " please ask him to call me.\n";
  } 
  else {
    cout << "If you see " << friendName << " please ask them to call me.\n";
  }
  cout << "Please enter the age of the recipient:\n";
  cin >> userAge;
  cout << "So you're " << userAge << " years old now?\n";
  if (userAge < 0 || 110 < userAge){
    simple_error("That age is crazy!\n");
  }
  if (userAge < 12){
    cout << "You'll be " << userAge + 1 << " next year!\n";
  }
  if (userAge == 17){
    cout << "Next year you'll be able to vote!\n";
  }
  if (userAge > 70){
    cout << "You're ooooold.\n";
  }
  cout << "Yours sincerely,\n\nJane Doe\n";

  keep_window_open();
  return 0;
}
