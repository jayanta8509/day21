// Write a program to identify if the number is Palindrome or not
#include <iostream>

using namespace std;

bool isPalindrome(int x) {
  if (x < 0)
    return false;
  int rev = 0, original = x;
  while (x != 0) {
    int pop = x % 10;
    x /= 10;
    rev = rev * 10 + pop;
  }
  return original == rev;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (isPalindrome(num)) {
    cout << " palindrome." << endl;
  } else {
    cout << " Not a palindrome." << endl;
  }

  return 0;
}
