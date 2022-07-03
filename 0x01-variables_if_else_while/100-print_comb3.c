#include <stdio.h>
/**
 * main - Entry point, print 00 to 99 using putchar
 * return: always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++) /*print tens place*/
	{
		for (ones = '0'; ones <= '9'; ones++) /*print ones place*/
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9')) /*skip comma at end*/
			{
				putchar(',');
				putchar9' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
