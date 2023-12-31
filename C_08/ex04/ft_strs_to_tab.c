#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*d;
	int		len;

	len = ft_strlen(src);
	d = (char *)malloc(len + 1 * sizeof(char));
	return (ft_strcpy(d, src));
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*d;
	int					i;

	d = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		d[i].size = ft_strlen(av[i]);
		d[i].str = av[i];
		d[i].copy = ft_strdup(av[i]);
		i++;
	}
	d[i].str = 0;
	return (d);
}
