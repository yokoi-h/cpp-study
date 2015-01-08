#include <iostream>

using namespace std;

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
  BirthMonth();
  BirthMonth();
}


  
