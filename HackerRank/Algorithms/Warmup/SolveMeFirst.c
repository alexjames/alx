/***
This is an introductory challenge. The purpose of this challenge is to give you a working I/O template in your preferred language. It includes scanning 2 integers from STDIN, calling a function, returning a value, and printing it to STDOUT.

Your task is to scan two numbers from STDIN, and print the sum A+B on STDOUT.

Note: The code has been saved in a template, which you can submit if you want.

Input Format
This section specifies the Input Format.
Given A and B on two different lines.

Output Format
This section specifies the Output Format.
An integer that denotes Sum (A + B) 
***/


#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}
