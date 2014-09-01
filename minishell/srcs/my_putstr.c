/*
** my_putstr.c for my_putstr in /home/ovsepi_l/minishell
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Jul 25 13:43:13 2014 Ludovic Ovsepian
** Last update Tue Jul 29 14:41:51 2014 Ludovic Ovsepian
*/

#include "../struct.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i + 1);
}
