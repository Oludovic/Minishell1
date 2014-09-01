/*
** my_strcocat.c for minishell in /home/ovsepi_l/minishell/srcs
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Mon Jul 28 15:26:27 2014 Ludovic Ovsepian
** Last update Mon Jul 28 15:29:55 2014 Ludovic Ovsepian
*/

#include "../struct.h"

char	*my_strcocat(char *str1, char *str2)
{
  char	*tmp;
  int	i;
  int	j;

  i = -1;
  j = 0;
  tmp = malloc((my_strlen(str1) + my_strlen(str2) + 1) * sizeof(*tmp));
  while (str1[++j])
    tmp[i] = str1[i];
  while (str2[j])
    tmp[i++] = str2[j++];
  tmp[i] = 0;
  return (tmp);
}
