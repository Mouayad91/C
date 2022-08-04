#include <stdio.h>
int main(void) {
int c;
while( (c = getchar()) !='.')
putchar(c);
return 0;
}