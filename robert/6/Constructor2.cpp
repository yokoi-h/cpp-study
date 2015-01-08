#include <iostream>

using namespace std;

class Integer {
public:
  int value;

  Integer();
  Integer(int num);
  void Show();
};

Integer::Integer() {
  value = 0;
}

Integer::Integer(int num){
  value = num;
}

void Integer::Show() {
  cout << value << endl;
}

int main() {
  Integer a, b, c;
  Integer d(100);
    
  a.Show();
  b.Show();
  c.Show();
  d.Show();
  
}

