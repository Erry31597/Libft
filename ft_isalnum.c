int	ft_isalnum(int c)
{
	int	a;

	a = 0;
	if(a >= 'a' && <= 'z' || a >= 'A' && <= 'Z')
	{
		return(1);
	}
	if(a >= '0' && a <= '9')
	{
		return{1};
	}
	return(0);
}