char	ft_tolower(char c)
{
	while(c >= 'A' && c <= 'Z')
	{
		c + 32;
	}
	return(c);
}