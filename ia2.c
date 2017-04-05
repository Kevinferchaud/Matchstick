/*
** ia2.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Feb 16 17:50:32 2017 ferchaud kevin
** Last update Wed Feb 22 18:04:54 2017 ferchaud kevin
*/

#include "my.h"

int     lineforia(char **map, char *nbr)
{
  int   line;

  line = 0;
  while (checkbaton(line, map) == 0)
    line = rand() % my_getnbr(nbr) + 1;
  return (line);
}

int     checkfollow(int cpt3, int save, char *nbr2)
{
  if (cpt3 == 1)
    if (save >= my_getnbr(nbr2) + 1)
      return (my_getnbr(nbr2));
    else
      if (save < my_getnbr(nbr2))
	return (save - 1);
  return (0);
}
