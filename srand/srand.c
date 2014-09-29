#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)
char menu(void);
void plus(void);
void minus(void);
void multiply(void);
int main(void)
{
	char choice;
	srand((unsigned)time(NULL));
	while ((choice = menu()) != 'e')
	{
		switch (choice)
		{
		case 'a':plus();
			break;
		case 'b':minus();
			break;
		case 'c':multiply();
			break;
		default:printf("%c\n", choice);
			break;
		}
	}
	puts("bye bye");
	getch();
	return 0;
}
char menu(void)
{
	puts("Version 1.0");
	puts("Producer:Frank_feng");
	puts("****************************************************************************");
	puts("a.plus     b.minus");
	puts("c.multiply e.exit");
	puts("****************************************************************************");
	char input;
	fflush(stdin);
	while (scanf("%c", &input) != 1 || ((input<'a' || input>'c') && input != 'e'))
	{
		fflush(stdin);
		puts("Input a letter and the letter must be a,b,c or e.");
	}
	return input;
}

void plus(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while (1)
	{
		a = rand();
		b = rand();
		d = a + b;
		printf("%d+%d=", a, b);
		scanf("%d", &c);
		(c == d) ? puts("Correct!") : puts("Wrong!");
		getch();
		fflush(stdin);
	}
}
void minus(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while (1)
	{
		a = rand();
		b = rand();
		d = a - b;
		printf("%d-%d=", a, b);
		scanf("%d", &c);
		(c == d) ? puts("Correct!") : puts("Wrong!");
		getch();
		fflush(stdin);
	}
}
void multiply(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while (1)
	{
		a = rand()%90+11;
		b = rand()%90+11;
		d = a * b;
		printf("%d¡Á%d=", a, b);
		scanf("%d", &c);
		(c == d) ? puts("Correct!") : puts("Wrong!");
		getch();
		fflush(stdin);
	}
}