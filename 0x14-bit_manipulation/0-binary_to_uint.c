/**
 * binary_to_uint - Converts binary number to unsigned int.
 * @b: string of binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		dec_val <<= 1;
		dec_val += b[i] - '0';
		i++;
	}
	return (dec_val);
}
