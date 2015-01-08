#include <iostream>

using namespace std;

const int MAX_NAME = 16;

struct Student {
  char name[MAX_NAME + 1];
  int scoreJapanese;
  int scoreMathl;
  int scoreEnglish;
};


void Show(const Student& student){
  cout << "name : " << student.name << endl;
  cout << " Japanese : " << student.scoreJapanese << endl;
  cout << " Math : " << student.scoreMathl << endl;
  cout << " English : " << student.scoreEnglish << endl;
}

int main() {
  Student student[] = {
    {"aaa", 73, 98, 86,},
    {"bbb", 64, 45, 40,},
    {"ccc", 76, 78, 69 },
  };

  int a[] = {1,2,3,4,5};
  
  int size = sizeof student / sizeof *student;

  cout << "size : " << sizeof(a) << endl;
  cout << "size : " << sizeof(Student) << endl;
  cout << "size / student : " << size << endl;
  cout << "*student : " << sizeof *student  << endl;

  for (int i = 0; i < size ; i ++ ) {
    Show(student[i]);
  }
}
