#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - a function that adds two integers
  * @a: takes first integer
  * @b: takes second integer
  * Return: an integer
  */
int op_add(int a, int b)
{
int result;
result = a + b;
return (result);
}

/**
  * op_sub - a function that subtracts two integers
  * @a: takes first integer
  * @b: takes second integer
  * Return: an integer
  */
int op_sub(int a, int b)
{
int result;
result = a - b;
return (result);
}

/**
  * op_mul - a function that multiplies two integers
  * @a: takes first integer
  * @b: takes second integer
  * Return: an integer
  */
int op_mul(int a, int b)
{
int result;
result = a * b;
return (result);
}

/**
  * op_div - a function that divides two integers
  * @a: takes first integer
  * @b: takes second integer
  * Return: an integer
  */
int op_div(int a, int b)
{
int result;
result = a / b;
return (result);
}

/**
  * op_mod - a function that gives the remainder of two integers
  * @a: takes first integer
  * @b: takes second integer
  * Return: an integer
  */
int op_mod(int a, int b)
{
int result;
result = a % b;
return (result);
}
