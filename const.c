#include<stdio.h>

int main()
{
	const float VERSION_NUMBER = 2.3;//4byte
	const int DAYS_IN_WEEK = 7;
	const float PI = 3.141592f;
	const double GRAVITY = 9.80665;//8byte
	const char LETTER_A = 'A';
	const char NEW_LINE = '\n';
	const char TAB = '\t';
	const char* GREETING = "Hello World!~";
	printf("숫자형 상수: %c", NEW_LINE);
	printf("일주일의 일: %d %c", DAYS_IN_WEEK, NEW_LINE);
	printf("내 피자의 크기: 12 inch * %.5f%c", PI, NEW_LINE);
	printf("중력:%.5f m/s^2%c", GRAVITY, NEW_LINE);


	printf("%c%c%c%c%c", LETTER_A, TAB, LETTER_A, TAB,NEW_LINE);
	printf("%s%c", GREETING,NEW_LINE);

	return 0;
}