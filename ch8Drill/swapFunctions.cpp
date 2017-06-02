#include "../std_lib_facilities.h"

void swap_v(int a, int b) {
  int temp;
  temp = a, a=b;
  b=temp;
}

void swap_r(int& a, int& b) {
  int temp;
  temp = a, a=b;
  b=temp;
}

// void swap_cr(const int& a, const int& b) {
//   int temp;
//   temp = a, a=b;
//   b=temp;
// }

int main()
{
  int x = 7;
  int y = 9;
  cout << "running swap_v(x,y);" << endl;
  swap_v(x,y);
  cout << "x: " << x << " y: " << y << endl;

  x = 7;
  y = 9;
  cout << "running swap_r(x,y); with reset x and y" << endl;
  swap_r(x,y);
  cout << "x: " << x << " y: " << y << endl;

  // swap_cr(x,y);  //compile error

  cout << "running swap_v(7,9);" << endl;
  swap_v(7,9);

  // swap_r(7,9);  //compile error
  // swap_cr(7,9);  //compile error
  const int cx = 7;
  const int cy = 9;

  cout << "running swap_v(cx,cy);" << endl;
  swap_v(cx,cy);
  cout << "cx: " << cx << " cy: " << cy << endl;

  // swap_r(cx,cy);  //compile error
  // swap_cr(cx,cy);  //compile error
  double dx = 7.7;
  double dy = 9.9;

  cout << "running swap_v(dx,dy);" << endl;
  swap_v(dx,dy);
  cout << "dx: " << dx << " dy: " << dy << endl;

  // swap_r(dx,dy);  //compile error
  // swap_cr(dx,dy);  //compile error

  cout << "running swap_v(dx,dy);" << endl;
  swap_v(7.7,9.9);
  // swap_r(7.7,9.9);  //compile error
  // swap_cr(7.7,9.9);  //compile error

  return 0;
}
