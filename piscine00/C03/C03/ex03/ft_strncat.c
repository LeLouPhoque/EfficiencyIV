char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	unsigned int j;
	
	i = 0;
	j = 0;
	while (dest[j])
		j++;
	if (nb == 0)
		return(dest);
	while (src[i] || j < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
