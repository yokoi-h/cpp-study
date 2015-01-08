#include <iostream>

using namespace std;

int main() {
  for ( ; ; ) {
    int a, b;

    cout << "first : " << flush;
    cin >> a;

    cout << "second : " << flush;
    cin >> b;

    if ( b == 0) {
      cout << "can't divide with zero" << endl;
      break;
    }

    cout << a << " / " << b << " = " << a / b << " ... " << a % b << endl;
  }

  cout << "rogram was finished." << endl;
}

    
