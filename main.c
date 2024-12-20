/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:21:51 by mel-hami          #+#    #+#             */
/*   Updated: 2024/12/14 13:21:53 by mel-hami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <libc.h>

void f()
{
	system("leaks a.out");
}
int main(void)
{
	char *str;
	int fd = open("src.txt", O_CREAT | O_RDONLY, 0644);
	int fd1 = open("src1.txt", O_CREAT | O_RDONLY, 0644);
	int fd2 = open("src2.txt", O_CREAT | O_RDONLY, 0644);
		str = get_next_line(fd);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}

	str = get_next_line(fd1);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}


		str = get_next_line(fd2);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}

		str = get_next_line(fd);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}

	str = get_next_line(fd1);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}


		str = get_next_line(fd2);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}

		str = get_next_line(fd);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}

	str = get_next_line(fd1);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}


		str = get_next_line(fd2);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
		{
			printf("%s", str);
		}
		atexit(f);

	return 0;
}
