#include <stdio.h> 
#include <assert.h> 
int main() { int x = 7; 
/* Some big code in between and let’s say x is accidentally changed to 9 */ 
x = 9; 
assert(x<=7     );
/* Rest of the code */
 }