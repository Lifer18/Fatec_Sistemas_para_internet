#include <iostream>
#include <locale>
using namespace std;

int square( int y )
{
   return y * y;
}

int main(int argc, char *argv[]){
   setlocale (LC_ALL, "PORTUGUESE");
   int x;
   for ( x = 1; x <= 10; x++ ) {
      cout << "\n" << square(x);
   }
   cout << endl;

   return 0;
}
