/*
** my_strcmp.c for loul in /home/ovsepi_l/rendu/Piscine-C-Jour_06
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Mon Oct  7 13:44:00 2013 Ludovic Ovsepian
** Last update Tue Jul 29 14:42:12 2014 Ludovic Ovsepian
*/

#include "../struct.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      if (s1[i] != s2[i])
	return (-1);
      i++;
    }
  return (0);
}
