char *ft_strcat(char *dest, char *src)
{
	char *d;
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
