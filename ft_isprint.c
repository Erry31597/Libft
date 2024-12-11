int	ft_isprint(int	c)
{
	int	a;

	a = 0;
	if(a >= 0 && a <= 31 || a == 127)
	{
		return(0);
	}
	return(1);
}