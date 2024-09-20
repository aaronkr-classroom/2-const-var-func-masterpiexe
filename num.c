#include<stdio.h>

int main()
{
	int decimal = 42;//10
	int octal = 052;//8
	int hex = 0x2A;//16
	int binary = 0b101010;//2

	printf("Decimal: %d\n", decimal);
	printf("Octal: %o (Prefix 0: 0%o)=%d\n", octal, octal, octal);
	printf("Hexadeciaml: %x (Prefix 0x:0x%x)=%d\n", hex, hex, hex);
	printf("Binary (manual):0b101010=%d\n", binary);
	return 0;
}