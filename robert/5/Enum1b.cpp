#include <iostream>

using namespace std;

enum CompareResult {
  CR_LESS_THAN = 0,
  CR_EQUAL_TO = 1,
  CR_GREATER_THAN = 2
};

CompareResult Compare(int a, int b) {
  return a < b ? CR_LESS_THAN : a > b ? CR_GREATER_THAN : CR_EQUAL_TO;

}

bool Compare() {
  const char* message[] = {
    "former is less than latter",
    "both are same",
    "former is greater than latter"
  };


  int a, b;

  cout << "input two number > " << flush;
  cin >> a >> b;

  if(a == -1) {
    return false;
  }
  cout << a << ":" << b << endl;
  cout << message[Compare(a, b)] << endl;

  return true;

}

int main() {
  while(Compare()){
    //
  }
}


  
