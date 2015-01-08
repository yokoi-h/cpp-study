#include <iostream>

using namespace std;

const char* const MONTH_NAME[] = {
  "January", "Feburary", "March", "April", "May", "June", "July",
  "August", "September", "October", "November","December"};

const char* GetEnglishMonthName(int month) {
  if (1 <= month && month <= 12) {
    return MONTH_NAME[month - 1];
  }
  return NULL;
}

int main() {
  int month;

  cout << "month : " << flush;
  cin >> month;

  const char* name = GetEnglishMonthName(month);
  if (name == 0){
    cout << "invalid month" << endl;
  } else {
    cout << name << endl;
  }
}

