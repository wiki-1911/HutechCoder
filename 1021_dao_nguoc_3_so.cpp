#include <iostream>
#include <string.h>

using namespace std;

void str_reverse(char str[]) {
  int lo = 0;
  int length = 0;
  for (; str[length] != '\0' ; length++) {} 
  if (length > 3) {
  	cout << "None";
  	return;
  }
  while ( lo < length ) {
    --length;
    char tmp = str[lo];
    str[lo] = str[length];
    str[length] = tmp;
    ++lo;
  }
  cout << str;
}

int main() {
    char str[100];
    cin >>  str;
    str_reverse(str);
    return 0;
}

