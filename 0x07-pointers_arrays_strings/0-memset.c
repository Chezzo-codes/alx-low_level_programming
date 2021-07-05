/**
 * _memset - 
 *@s: memory area to return
 *@b: constant byte to fill with
 *@c: number of bytes to fill
 *
 *Return: pointer to value at s
 */
char *_memset(char *s, char b, unsigned int n)
{
        while(n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
