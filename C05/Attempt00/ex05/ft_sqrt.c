int ft_sqrt_r(int start, int end, int nb)
{
	int mid;

	mid = (start + end)/2;
	if (mid * mid == nb)
		return mid;
	if (mid * mid < nb)
		return ft_sqrt_r(mid + 1, end, nb);
	return ft_sqrt_r(start, mid - 1, nb);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_r(0, nb, nb));
}