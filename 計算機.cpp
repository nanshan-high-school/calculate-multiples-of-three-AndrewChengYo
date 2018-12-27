#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main() {
  int y,z;
  char x[1];
  cout << "輸入運算符號:";
  cin >> x;
  if(*x == '+'){
    cout << "輸入被加數:";
    cin >> y;
    cout << "輸入加數:";
    cin >> z;
    cout << y+z;
  }
  else if(*x == '-'){
    cout << "輸入被減數:";
    cin >> y;
    cout << "輸入減數:";
    cin >> z;
    cout << y-z;
  }
  else if(*x == '*'){
    cout << "輸入被乘數:";
    cin >> y;
    cout << "輸入乘數:";
    cin >> z;
    cout << y*z;
  }
    else if(*x == '/'){
    cout << "輸入被除數:";
    cin >> y;
    cout << "輸入除數:";
    cin >> z;
    cout << y/z;
  }
}
