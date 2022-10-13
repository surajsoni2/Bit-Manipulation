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

  // 3=00000011
  // first shift = 00000110
  // 2nd shift = 00001100
  cout << "(3<<2): " << (3 << 2) << endl;

  // right shift 5 two times
  //  first shift - 5/2 = 2
  //  second shift- 2/2 = 1

  // 5=00000101
  //1st shift = 00000010
  //2nd shift = 00000001
  cout << "(5>>2): " << (5 >> 2) << endl;

  // Increment operators

  // post-increment = x++
  // pre-increment = ++x

  int x = 5;
  cout << x << x++ << ++x << endl;
  x = 5;
  printf("%d %d %d\n", x, ++x, x++);

  // Tricks & tips

  // if use bitwise & with any even number then output will be 0
  // else use bitwise & with any odd number then output will be 1

  /*

    Reason = any odd number in binary always have first bit == 1
            like - 3 = 00000011, 5=00000101 , 9 = 00001001
             and when you use & with 1 then it give o/p= 1
             eg: 5 = 00000101
              &  1 = 00000001
                ans= 00000001 = 1


                */

  cout << (8 & 5);
}