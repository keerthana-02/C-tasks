#include<stdio.h>
main()
{
	int a = 21, b=11;
	printf("Before swapping:\n a=%d\n b=%d\n", a ,b );
	a = a+b;  // 21+11=33
	b = a-b;  // 33-11=21
	a = a-b;  // 33-21=11
	printf("After swapping:\n a=%d\n b=%d\n", a, b);
}
	
