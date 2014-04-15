#include <stdio.h>

int main(void)
{
    long T, num, temp;
    scanf("%ld", &T);
    while (T--)
    {
      scanf("%ld", &num);
      temp = num / 2;
      if (num % 2 == 1)
      {
        printf("%ld\n", temp * (temp + 1));
      }
      else
      {
        printf("%ld\n",temp * temp);
      }
    }
	return 0;  
}
