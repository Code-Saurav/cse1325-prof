#include <iostream>
using namespace std;

int main() {
  string s;
  int a;
  cout << "What's your name? "; // try "George Rice"
  getline(cin, s);
  cout << "What's your age? ";
  cin >> a;
  cout << "Your name is " << s << " and you're " << a << " years old"<< endl;
}
