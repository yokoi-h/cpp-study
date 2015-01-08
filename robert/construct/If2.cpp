#include <iostream>

using namespace std;

void Divide() {
  int a, b;

  cout << "first number :" << flush;
  cin >> a;

  cout << "second number :" << flush;
  cin >> b;

  if ( b == 0 ) {
    cout << "can't divide by zero" << endl;
  } else {
    cout << a << " / " << b << " = " << a / b << " ... " << a % b << endl;
  }
}


void BirthMonth() {
  int month;

  cout << "What month were you born in?" << flush;
  cin >> month;

  if ( 1 <= month && month <= 12 ) {
    cout << "month : " << month << endl;
  } else {
    cout << month << " is invalid" << endl;
  }
}

int main() {
  Divide();
  Divide();
}


  
