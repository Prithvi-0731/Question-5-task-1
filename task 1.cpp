#include <iostream>
using namespace std;
int main(void) {
   char str[] = "A string.";
   char *pointer = str;
   cout << str[0] <<' '<< *pointer <<' '<<pointer[3]<<"\n";
   pointer += 2;
   cout <<*pointer<<' '<< pointer[2] <<' '<< pointer[5];
   return 0;
}
