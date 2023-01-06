/**
 *_pow_recursion- function that return x ^ y
 *@x:base
 *@y:exponent
 *Return:x^y if y > 0 and -1 if otherwise
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
{
int res = (x * _pow_recursion(x, y - 1));
if (res > 0 && x < 0)
{
res = 0 - res;
}
else if (res < 0)
{
res = res * -1;
}
return (res);
}
else
{
return (-1);
}
}
