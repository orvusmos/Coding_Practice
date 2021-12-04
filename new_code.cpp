#include <iostream>
using namespace std;

// =======================================
// conditional print

int main() {
  char a;
  a= cin.get();
  if (a>=97 && a<=122)
  {
    cout << "a-z";
  }
  else if (a>=65 && a<=90)
  {
    cout << "A-Z";
  }
  else if (a>=48 && a<=57)
  {
    cout << "0-9";
  }
} 
