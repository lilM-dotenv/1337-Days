#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	char	*dest;
	int	size;
	int	i;

	size = ft_strlen(src);
	i = 0;
	dest = malloc(sizeof(char) * (size + 1));
	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main ()
{
	char src[] = "hello";
	printf("%s", ft_strdup(src));
}
