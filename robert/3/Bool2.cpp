#include <iostream>

using namespace std;

bool IsDigit(char ch) {
  return '0' <= ch && ch <= '9';
}

int main(){
  while(true) {
    char ch;
    cout << "input number : " << flush;
    cin >> ch;
    if(ch == 'Q' || ch == 'q') {
      break;
    }

    if(IsDigit(ch)) {
      cout << "number" << endl;
    } else {
      cout << "not number" << endl;
    }
  }
  cout << "finished." << endl;
}

