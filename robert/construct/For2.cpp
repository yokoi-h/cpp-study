#include <iostream>

using namespace std;

int score[] = {
  641, 703, 405, 598, 402, 752, 330, 0 ,445, 662,
  642, 703, 405, 598, 402, 752, 330, 0 ,445, 662,
  643, 703, 405, 598, 402, 752, 330, 0 ,445, 662,
};

int main() {
  int sum = 0;

  for (int i = 0; i < 40; i ++) {
    sum += score[i];
  }

  cout << "average : " << sum / 40.0 << endl;
}
