/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturella <dturella@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:42:51 by dturella          #+#    #+#             */
/*   Updated: 2024/08/28 16:42:51 by dturella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif 

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_list
{
    char            *str_buf;
    struct s_list   *next;
}                t_list;

void    dealloc(t_list **list, t_list *clean_node, char *buf);
t_list  *find_last_node(t_list *list);
void    polish_list(t_list **list);
void    copy_str(t_list *list, char *str);
int     len_to_newline(t_list *list);
char    *get_line(t_list *list);
void    append(t_list **list, char *buf);
int     found_newline(t_list *list);
void    create_list(t_list **list, int fd);
char    *get_next_line(int fd);

#endif