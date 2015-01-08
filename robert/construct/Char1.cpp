#include <iostream>

using namespace std;

void ShowCode(char ch){
  cout << "[" << ch << "] is " << (int)(unsigned char)ch << endl;
}

int main(){
  ShowCode('0');
  ShowCode('A');
}
  
