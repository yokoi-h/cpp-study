#include <iostream>

using namespace std;

int Abs(int a){
  if(a < 0) {
    return -1 * a;
  }else{
    return a;
  }
}

double Abs(double a){
  if(a < 0.0) {
    return -1.0 * a;
  }else{
    return a;
  }
}


int Input(int& i, double& d) {
  cout << "input inteer > " << flush;
  cin >> i;
  if(i == 0) {
    return 0;
  }

  cout << "input floating value > " << flush;
  cin >> d;
  if ( d == 0) {
    return 0;
  }

  return 1;
}

void ShowAbs(int i, double d){
  cout << i << " abs : " << Abs(i) << endl;
  cout << d << " abs : " << Abs(d) << endl;
}

int main() {
  int i;
  double d;

  while(Input(i, d) != 0) {
    ShowAbs(i, d);
  }
}

  
