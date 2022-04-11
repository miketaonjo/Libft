#include "libft.h"

char	*ft_itoa(int n)
{
	int	i;
	int	tmp;
	char 	*str;

	i = 0;
	tmp = n;
	if (n == - 2147483648)
		return ("- 2147483648");
	str = (char *)malloc(sizeof(char) * i + 1 );
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n == 0)
		str[0] = '0';
		return (str);
	if (n < 0)
		len += 1;
		nbr *= -1;
		str[0] = '-';
	}
	while (n_tmp)
	{
		n_tmp /= 10;
		len += 1;
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
