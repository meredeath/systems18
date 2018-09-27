#include<stdio.h>
#include<string.h>

int main()
{
	char s[50] = "Hello";
	char s1[] = " World\n";

	strcat(s, s1);
	printf("%s", s);

	char a[50] = "Meredith";
	char a1[] = " Hu\n";
	strncat(a, a1, 2);
	printf("%s", a);

	return 0;
}