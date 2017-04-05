/*
** map2.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 14:41:54 2017 ferchaud kevin
** Last update Mon Feb 13 16:58:02 2017 ferchaud kevin
*/

#include "my.h"

char    **map6()
{
  char  **map;

  map = malloc(sizeof(char *) * 9);
  map[0] = my_strdup("***************\n");
  map[1] = my_strdup("*      |      *\n");
  map[2] = my_strdup("*     |||     *\n");
  map[3] = my_strdup("*    |||||    *\n");
  map[4] = my_strdup("*   |||||||   *\n");
  map[5] = my_strdup("*  |||||||||  *\n");
  map[6] = my_strdup("* ||||||||||| *\n");
  map[7] = my_strdup("***************\n");
  map[8] = NULL;
  return (map);
}

char    **map7()
{
  char  **map;

  map = malloc(sizeof(char *) * 10);
  map[0] = my_strdup("*****************\n");
  map[1] = my_strdup("*       |       *\n");
  map[2] = my_strdup("*      |||      *\n");
  map[3] = my_strdup("*     |||||     *\n");
  map[4] = my_strdup("*    |||||||    *\n");
  map[5] = my_strdup("*   |||||||||   *\n");
  map[6] = my_strdup("*  |||||||||||  *\n");
  map[7] = my_strdup("* ||||||||||||| *\n");
  map[8] = my_strdup("*****************\n");
  map[9] = NULL;
  return (map);
}

char    **map8()
{
  char  **map;

  map = malloc(sizeof(char *) * 11);
  map[0] = my_strdup("*******************\n");
  map[1] = my_strdup("*        |        *\n");
  map[2] = my_strdup("*       |||       *\n");
  map[3] = my_strdup("*      |||||      *\n");
  map[4] = my_strdup("*     |||||||     *\n");
  map[5] = my_strdup("*    |||||||||    *\n");
  map[6] = my_strdup("*   |||||||||||   *\n");
  map[7] = my_strdup("*  |||||||||||||  *\n");
  map[8] = my_strdup("* ||||||||||||||| *\n");
  map[9] = my_strdup("*******************\n");
  map[10] = NULL;
  return (map);
}

char    **map9()
{
  char  **map;

  map = malloc(sizeof(char *) * 12);
  map[0] = my_strdup("*********************\n");
  map[1] = my_strdup("*         |         *\n");
  map[2] = my_strdup("*        |||        *\n");
  map[3] = my_strdup("*       |||||       *\n");
  map[4] = my_strdup("*      |||||||      *\n");
  map[5] = my_strdup("*     |||||||||     *\n");
  map[6] = my_strdup("*    |||||||||||    *\n");
  map[7] = my_strdup("*   |||||||||||||   *\n");
  map[8] = my_strdup("*  |||||||||||||||  *\n");
  map[9] = my_strdup("* ||||||||||||||||| *\n");
  map[10] = my_strdup("*********************\n");
  map[11] = NULL;
  return (map);
}

char    **map10()
{
  char  **map;

  map = malloc(sizeof(char *) * 13);
  map[0] = my_strdup("***********************\n");
  map[1] = my_strdup("*          |          *\n");
  map[2] = my_strdup("*         |||         *\n");
  map[3] = my_strdup("*        |||||        *\n");
  map[4] = my_strdup("*       |||||||       *\n");
  map[5] = my_strdup("*      |||||||||      *\n");
  map[6] = my_strdup("*     |||||||||||     *\n");
  map[7] = my_strdup("*    |||||||||||||    *\n");
  map[8] = my_strdup("*   |||||||||||||||   *\n");
  map[9] = my_strdup("*  |||||||||||||||||  *\n");
  map[10] = my_strdup("* ||||||||||||||||||| *\n");
  map[11] = my_strdup("***********************\n");
  map[12] = NULL;
  return (map);
}
