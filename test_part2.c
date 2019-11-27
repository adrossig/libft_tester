#include "../libft/libft.h"
#include <stdio.h>

int main()
{
	char const *s1 = "HELLO";
	char const *s2 = "YOYOY";
	char *s = "NULLO";
	unsigned int start = 0;
	size_t len = 5;
	int n = 0;
	char c = 0;
	char **test;
	char *yo;

	printf("\033[37m__SUBSTR__\n");
	free(ft_substr(s1, start, len));
	free(ft_substr(NULL, start, len));
	free(ft_substr(0, start, len));
	free(ft_substr(s1, 1, 1));
	free(ft_substr(s1, -1, 545));
	free(ft_substr(s1, 5, -1));
	free(ft_substr(s1, 5, 5));
	free(ft_substr(s1, 6, 6));
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__STRJOIN__\n");
	free(ft_strjoin(s1, s2));
	free(ft_strjoin(NULL, s2));
	free(ft_strjoin(s1, NULL));
	free(ft_strjoin(NULL, NULL));
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__STRTRIM__\n");
	free(ft_strtrim(s1, "abc"));
	free(ft_strtrim(NULL, "abc"));
	free(ft_strtrim(s1, ""));
	free(ft_strtrim("", ""));
	free(ft_strtrim("", "abc"));
	free(ft_strtrim(s1, NULL));
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__SPLIT__\n");
	test = ft_split(s1, c);
	while (test && test[n])
		free(test[n++]);
	free(test);
	test = ft_split(s1, 0);
	while (test && test[n])
		free(test[n++]);
	free(test);
	test = ft_split("", c);
	while (test && test[n])
		free(test[n++]);
	free(test);
	test = ft_split("aaaaaaa", 'a');
	while (test && test[n])
		free(test[n++]);
	free(test);
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__ITOA__\n");
	free(ft_itoa(n));
	free(ft_itoa(12121211));
	free(ft_itoa(0));
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__MAPI__\n");
	free(ft_strmapi(s1, NULL));
	free(ft_strmapi(NULL, NULL));
	printf("\033[32mAll good !\n\n\033[37m");

	return 0;
}
