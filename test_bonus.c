#include "../libft/libft.h"
#include <stdio.h>

int main()
{
	printf("\033[37m__FT_LSTADD_FRONT__\n");
	ft_lstadd_front(NULL, NULL);
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTADD_BACK__\n");
	ft_lstadd_back(NULL, NULL);
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTCLEAR__\n");
	ft_lstclear(NULL, NULL);
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTDELONE__\n");
	ft_lstdelone(NULL, NULL);
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTITER__\n");
	ft_lstiter(NULL, NULL);
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTSIZE__\n");
	ft_lstsize(NULL);
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTLAST__\n");
	free(ft_lstlast(NULL));
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTNEW__\n");
	free(ft_lstnew(NULL));
	printf("\033[32mAll good !\n\n\033[37m");

	printf("__FT_LSTMAP__\n");
	free(ft_lstmap(NULL, NULL, NULL));
	printf("\033[32mAll good !\n\n\033[37m");

	return 0;
}
