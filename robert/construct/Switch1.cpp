#include <iostream>

using namespace std;

int main() {
  for(int i = 0; i < 5; i++){
    int a, b, op, result;

    cout << "first : " << flush;
    cin >> a;
    cout << "second : " << flush;
    cin >> b;
    cout << "1:add, 2:sub, 3:mul, 4:div > " << flush;
    cin >> op;

    switch(op){
    case 1:
      result = a + b;
      break;
    case 2:
      result = a - b;
      break;
    case 3:
      result = a * b;
      break;
    case 4:
      result = a / b;
      break;
    default:
      cout << "operator is invalid." << endl;
      continue;
    }

    cout << "ans : " << result << endl;
  }
}
