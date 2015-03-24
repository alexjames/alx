#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* RLE (char *src)
{
	int len = strlen(src);
	char ch;
	char *p = malloc(2 * len + 1);
	char *dst = p;

	while (*src)
	{
		int count = 0;
		ch = *src;
		while (*src == ch)
		{
			src++;
			count++;
		}
		sprintf(dst, "%d", count);
		while (count > 0)
		{
			dst++;
			count = count / 10;
		}
		*dst = ch;
		dst++;
	}
	*dst = '\0';
	return p;
}

int main()
{
	char buffer[100];
	char *p;
	strcpy(buffer, "wwwwwwaaaallexxx");
	p = RLE(buffer);
	printf("%s", p);
	return 0;

}
