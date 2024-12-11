char	ft_toupper(char c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}