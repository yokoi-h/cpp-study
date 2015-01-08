#include <iostream>

using namespace std;

enum ComapreResult {
  CR_LESS_THAN = 0,
  CR_EQUAL_TO = 1,
  CR_GREATER_THAN = 2
};

ComapreResult Compare(int a, int b){
  if(a < b) {
    return CR_LESS_THAN;
  } else if(a > b ) {
    return CR_GREATER_THAN;
  } else {
    return CR_EQUAL_TO;
  }

}

bool Compare() {
  int a, b;

  cout << "input two numbers : " << flush;
  cin >> a >> b;

  if(a == -1) {
    return false;
  }

  switch(Compare(a ,b)){
  case CR_LESS_THAN:
    cout << "less than" << endl;
    break;
  case CR_GREATER_THAN:
    cout << "greater than" << endl;
    break;
  case CR_EQUAL_TO:
    cout << "equal to" << endl;
    break;
  }

  return false;
}

int main() {
  while(Compare()){
    //
  }
}

