/**
 * rot13 - encodes a string using rot13
 *
 * @str: the input string
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i = 0, j = 0;
	char *alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *alphrot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j <= 52;  j++)
		{
			if (*(alph + j) == *(str + i))
			{
				*(str + i) = *(alphrot + j);
				break;
			}
		}
	}
	return (str);
}
