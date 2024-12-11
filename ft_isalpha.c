int	ft_isalpha(int c)
{
	int	a;

	a = 0;
	if(a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
	{
		return(1);
	}
	return(0);
}