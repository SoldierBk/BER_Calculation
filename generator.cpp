#include <iostream>

int main ()
{
	FILE* Test1a = fopen("Test1a","w");
	FILE* Test1b = fopen("Test1b","w");
	FILE* Test2a = fopen("Test2a","w");
	FILE* Test2b = fopen("Test2b","w");
	FILE* Test3a = fopen("Test3a","w");
	FILE* Test3b = fopen("Test3b","w");
	
	for (int i=0;i<100;i++)
		fputc(0x55, Test1a);
	for (int i=0;i<100;i++)
		fputc(0x55, Test1b);
	for (int i=0;i<100;i++)
		fputc(0x55, Test2a);
	for (int i=0;i<98;i++)
		fputc(0x55, Test2b);
	fputc (0x56, Test2b);
	fputc (0xAA, Test2b);
	for (long i=0; i<419430400;i++)
		fputc(0x55, Test3a);
	for (long i=0; i<419430400;i++)
		fputc(0x50, Test3b);
}
