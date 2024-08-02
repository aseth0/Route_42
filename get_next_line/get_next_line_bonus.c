/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:01:02 by ucabanil          #+#    #+#             */
/*   Updated: 2024/02/05 19:31:45 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//
char	*ft_update_stack(char **old_stack)
{
	char	*n_stack;
	int		stack_len;

	if (!*old_stack)
		return (NULL);
	if (!ft_strchr(*old_stack, '\n'))
		return (ft_free(old_stack));
	stack_len = ft_strlen (ft_strchr(*old_stack, '\n'));
	n_stack = malloc((stack_len + 1) * sizeof(char));
	if (!n_stack)
		return (ft_free(old_stack));
	ft_memmove(n_stack, ft_strchr(*old_stack, '\n') + 1, stack_len);
	n_stack[stack_len] = '\0';
	ft_free(old_stack);
	return (n_stack);
}

char	*ft_set_stack(char **stack, char *buffer)
{
	char	*n_stack;
	int		old_stack_len;
	int		buffer_len;

	old_stack_len = ft_strlen(*stack);
	buffer_len = ft_strlen(buffer);
	n_stack = malloc ((old_stack_len + buffer_len + 1) * sizeof(char));
	if (!n_stack)
		return (ft_free(stack));
	if (old_stack_len != 0)
		ft_memmove(n_stack, *stack, old_stack_len);
	if (buffer_len != 0)
		ft_memmove(n_stack + old_stack_len, buffer, buffer_len);
	ft_free(stack);
	n_stack[old_stack_len + buffer_len] = '\0';
	return (n_stack);
}

char	*ft_get_line(char **stack)
{
	char	*line;
	int		i;
	int		eol;

	i = 0;
	while ((*stack)[i] && (*stack)[i] != '\n')
		i++;
	eol = i + ((*stack)[i] == '\n');
	if (!eol)
		return (NULL);
	line = malloc ((eol + 1) * sizeof(char));
	if (!line)
		return (ft_free(stack));
	ft_memmove(line, *stack, eol);
	line[eol] = '\0';
	return (line);
}

char	*ft_fill_stack(int fd, char **stack)
{
	int		n_bytes;
	char	*buffer;

	n_bytes = 1998;
	buffer = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (ft_free(stack));
	while (n_bytes > 0 && !ft_strchr(*stack, '\n'))
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes < 0)
		{
			free (buffer);
			return (ft_free(stack));
		}
		buffer[n_bytes] = '\0';
		*stack = ft_set_stack(stack, buffer);
		if (!*stack)
			return (free(buffer), NULL);
	}
	return (free(buffer), *stack);
}

char	*get_next_line(int fd)
{
	static char			*stack[FD_SETSIZE];
	char				*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	stack[fd] = ft_fill_stack(fd, &stack[fd]);
	if (!stack[fd])
		return (NULL);
	line = ft_get_line(&stack[fd]);
	if (line && !*line)
		return (ft_free(&stack[fd]));
	stack[fd] = ft_update_stack(&stack[fd]);
	return (line);
}
