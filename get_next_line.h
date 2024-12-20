/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:33:10 by mel-hami          #+#    #+#             */
/*   Updated: 2024/12/20 18:32:45 by mel-hami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	char			*buffer;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstlast(t_list *list);
int		found_new_line(t_list *list);
int		get_length_new_line(t_list *list);
void	ft_lstclear(t_list **list);
void	safe_free(t_list **list, t_list *clean_node);
char	*get_next_line(int fd);
#endif
