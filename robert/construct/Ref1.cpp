#include <iostream>

using namespace std;

void WesternToJapanese(int& x) {
  if (1926 <= x && x <= 1989) {
    x -= 1925;
  } else {
    x = 0;
  }
}

void Japanese(){
  int year;

  cout << "input year : " << flush;
  cin >> year;

  WesternToJapanese(year);
  if(year != 0) {
    cout << "Japanese year : " << year << endl;
  } else {
    cout << "it's not Japanese year." << endl;
  }

}

int main() {
  Japanese();
  Japanese();
}
