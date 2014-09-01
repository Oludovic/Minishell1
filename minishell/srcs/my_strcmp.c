/*
** my_strcmp.c for loul in /home/ovsepi_l/rendu/Piscine-C-Jour_06
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Mon Oct  7 13:44:00 2013 Ludovic Ovsepian
** Last update Tue Jul 29 14:42:03 2014 Ludovic Ovsepian
*/

#include "../struct.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
    {
      i = i + 1;
    }
  return (s1[i] - s2[i]);
}
