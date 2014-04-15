#include <stdio.h>
#include <math.h>

int main(void)
{
  int t, n, answer = 1;
  scanf("%d", &t);

  while (t--)
  {
    scanf("%d", &n);
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            answer = pow(2, (n + 1)) - 1;
        }
        else
        {
            n = (n + 3) / 2;
            answer = pow(2, n) - 2;
        }
    }
    printf("%d\n", answer);
  }
  
  return 0;
}
