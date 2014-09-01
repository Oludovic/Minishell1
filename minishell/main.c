/*
** main.c for main_minishell in /home/ovsepi_l/minishell
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Jul 25 13:21:33 2014 Ludovic Ovsepian
** Last update Tue Jul 29 14:39:40 2014 Ludovic Ovsepian
*/

#include "struct.h"

int	my_env_len(char **env)
{
  int	i;

  i = 0;
  while (env[i])
    i++;
  return (i++);
}

int	full_env(t_sh *sb, char **env)
{
  int	i;
  int	n;

  i = 0;
  n = my_env_len(env);
  if ((sb->en = malloc(n * sizeof(char*))) == NULL)
    {
      my_putstr("Malloc failed\n");
      exit(-1);
    }
  while (env[i])
    {
      sb->en[i] = my_strdup(env[i]);
      i++;
    }
  sb->en[i + 1] = 0;
}

void	my_getpath(t_sh *sb)
{
  int	i;

  i = 0;
  while (my_strncmp(sb->en[i], "PATH=", 5) != 0)
    i++;
  sb->path = my_str_to_wordtab(sb->en[i], ':');
}

void	handle_signal(int signal)
{
  my_putstr("\n");
}

int	main(int ac, char **av, char **env)
{
  t_sh	sb;

  signal(SIGINT, handle_signal);
  if ((sb.buff = malloc(sizeof(char) * 4096)) == NULL)
    return (0);
  if (*env)
    {
      full_env(&sb, env);
      my_getpath(&sb);
      sb.path[0] = &sb.path[0][5];
      recup(&sb, env);
    }
  return (0);
}
