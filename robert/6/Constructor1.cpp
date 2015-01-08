#include <iostream>

using namespace std;

class Integer {
public:
  int value;

  Integer();
  void Show();
};

Integer::Integer() {
  value = 0;
}

void Integer::Show() {
  cout << value << endl;
}

int main() {
  Integer a, b, c;
  Integer* d;
  d = new Integer;
  
  a.Show();
  b.Show();
  c.Show();
  d->value = 100;
  d->Show();
  
}

