#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

  int a = 5, b = 7;
  cout << "a: " << a << " b: " << b << endl;
  /* Bitwise AND-&
    5=101
  & 7=111
   -------
     101
  */

  cout << "a & b = " << (a & b) << endl;

  /* Bitwise OR-|
    5=101
  | 7=111
   -------
      111
  */

  cout << "a | b = " << (a | b) << endl;

  /* Bitwise NOT- ~
         5=00000000000000000000000000000-101
        ------
            11111111111111111111111111111-010 = -6
1's comple     0000000000000000000000000000-101
2's comple                                   +1
             0000000000000000000000000000-110 =6
  */
  cout << "~a = " << (~a) << endl;

  /*
   Bitwise XOR - ^
       a=5= 101
       b=7= 111
       ---------
            010

   */
  cout << "a ^ b = " << (a ^ b) << endl;

  // Left shift << ||| Right shift >>

  // Left shift 3 two times
  // first shift - 3*2 = 6
  // second shift- 6*2 = 12

  cout << "(3<<2): " << (3 << 2) << endl;

  // right shift 5 two times
  //  first shift - 5/2 = 2
  //  second shift- 2/2 = 1
  cout << "(5>>2): " << (5 >> 2) << endl;

  // Increment operators

  // post-increment = x++
  // pre-increment = ++x

  int x = 5;
  cout << x << x++ << ++x << endl;
  x = 5;
  printf("%d %d %d", x, ++x, x++);
}