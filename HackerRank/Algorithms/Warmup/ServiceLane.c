#include <stdio.h>

int main()
{
    int N,T;
    int width[100000];
    int i,j, answer;
    scanf("%d %d", &N, &T);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &width[i]);
    }
    while (T--)
    {
        scanf("%d %d", &i, &j);
        answer = width[i];
        while (i<=j)
        {
            if (answer > width[i])
            {
                answer = width[i];
            }
            i++;
        }
        printf("%d\n", answer);
    }
}

