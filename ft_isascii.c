int	ft_isascii(int	c)
{
	int	a;

	a = 0;
	if(a >= 0 && a <= 127)
	{
		return(1);
	}
	return(0);
}