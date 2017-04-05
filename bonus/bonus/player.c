/*
** player.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 20:48:30 2017 ferchaud kevin
** Last update Thu Feb 16 18:02:09 2017 ferchaud kevin
*/

#include "my.h"

int     checkbaton(int line, char **map)
{
  int   cpt;

  cpt = -1;
  while (map[line][++cpt] != '\n')
    if (map[line][cpt] == '|')
      return (1);
  return (0);
}

char    **my_turn(char **map, char *nbr, char *nbr2, int opt)
{
  char  *line;
  char  *match;
  char	**exiteu;

  exiteu = myexiteu();
  if (opt == 0)
    {
      my_putstr("Your turn:\nLine: ");
      line = my_getline();
      if (line == NULL)
	return (exiteu);
      my_putstr("Matches: ");
      match = my_getline();
      if (match == NULL)
	return (exiteu);
      if (verifplayer(line, match, map, nbr) == 1 ||
	  verifplayer2(line, match, map, nbr2) == 1)
	return (NULL);
    }
  else
    {
      map = do_thestick(line, match, map);
      my_printf("Player removed %s match(es) from line %s\n", match, line);
    }
  return (map);
}

int     verifplayer(char *line, char *match, char **map, char *nbr)
{
  int   cpt;
  int   val;

  cpt = -1;
  val = 0;
  if (line == NULL || match == NULL)
    return (1);
  if (my_strlen(line) > 2 && my_getnbr(line) > 100)
    return (1);
  if (my_getnbr(line) < 1 || my_getnbr(line) > my_getnbr(nbr))
    {
      my_putstr("Error: this line is out of range\n");
      return (1);
    }
  while (map[my_getnbr(line)][++cpt] != '\n')
    if (map[my_getnbr(line)][cpt] == '|')
      val++;
  if (val < my_getnbr(match))
    {
      my_putstr("Error: not enough matches on this line\n");
      return (1);
    }
  return (0);
}

int     verifplayer2(char *line, char *match, char **map, char *nbr2)
{
  if (isnum(match) == 1 || my_getnbr(match) < 0)
    {
      my_putstr("Error: invalid input (positive number expected\n");
      return (1);
    }
  if (my_getnbr(match) == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (1);
    }
  if (my_getnbr(match) > my_getnbr(nbr2))
    {
      my_printf("Error: you cannot remove more than ");
      my_printf("%d per turn\n", my_getnbr(nbr2));
      return (1);
    }
  return (0);
}
