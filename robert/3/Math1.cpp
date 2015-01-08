#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double a,b;
  cout << "input length of 2 borders : " << flush;
  cin >> a >> b;

  cout << "length : " << sqrt(a * a + b* b) << endl;
}

