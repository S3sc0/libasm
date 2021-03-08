/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:38:18 by aamzouar          #+#    #+#             */
/*   Updated: 2021/03/08 10:38:22 by aamzouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1. the program should take arrguments
		for example, the test of a specific function
		or all of them using '*'
*/

#include "libasm.h"

/*
** Framework functions
*/

void	error_func(char	*message)
{
	printf("Error: %s\n", message);
	exit(0);
}

/*
** Test functions
*/

int		ft_strlen_test(void)
{
	int		ret = 0;
	// colorize the tests please, but not now !!

	printf("test: 'Hello World!' \nexpected: %ld\nresult: %ld\n", strlen("Hello World!"), ft_strlen("Hello World!"));

	return (ret);
}

int		ft_strcpy_test(void)
{
	int		ret = 0;
	char	dst[13];

	printf("test: 'Hello World!' \nresult: %s\n", ft_strcpy(dst, "Hello World!"));
	printf("test: 'Hello World!' \nresult: %s\n", dst);
	return (ret);
}

int		ft_strcmp_test(void)
{
	int ret = 0;

	printf("test: 'Hello World!' \nresult: %d\n", ft_strcmp("!d", "!"));
	printf("origin: 'Hello World!' \nresult: %d\n", strcmp("!d", "!"));
	return (ret);
}

int		call_correct_test(char *first_arg)
{
	int		ret;

	ret = 0;

	if (!strcmp("*", first_arg))
		// ret = call_all_test_functions();
		return (0);
	else if (!strcmp("ft_strlen", first_arg))
		ret = ft_strlen_test();
	else if (!strcmp("ft_strcpy", first_arg))
		ret = ft_strcpy_test();
	else if (!strcmp("ft_strcmp", first_arg))
		ret = ft_strcmp_test();
	else
		ret = 1;
	return(ret);
}

int		main(int ac, char *av[])
{
	int		ret;

	ret = 0;
	if (ac != 2)
		error_func("wrong number of arrguments");
	ret = call_correct_test(av[1]);
	return (ret);
}
