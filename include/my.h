/*
** my.h for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 16:41:15 2017 ferchaud kevin
** Last update Wed Feb 22 18:39:52 2017 ferchaud kevin
*/

#include <stdlib.h>
#include <unistd.h>

char**returnmap(char **map, char *line, char *match);
int     isexit(char **test);
int	verifplayer3(char *line, char *nbr);
int     main2(char **map, char **av, char **test);
int	checkerror(int ac, char **av);
void	my_putchar(char c);
char    **map1();
char    **map2();
char    **map3();
char    **map4();
char    **map5();
char    **map6();
char    **map7();
char    **map8();
char    **map9();
char    **map10();
char    *my_strdup(char *src);
int     my_strlen(char *str);
char    *my_strcatwoman(char *concat, char *suppr);
char    *my_getline();
void    my_printf(const char *, ...);
char    **ia_turn(char **map, char *nbr, char *a);
int     matchforia(char **map, int line, char *nbr, char *nbr2);
int     checktwobat(char **map, char *nbr2);
int     lineforia(char **map, char *nbr);
char    **do_thestick2(int line, int match, char **map);
int     checkbaton(int line, char **map);
char    **my_turn(char **map, char *nbr, char *v, int opt);
int     verifplayer(char *line, char *match, char **map, char *nbr);
void    my_putstr(char *str);
int     my_getnbr(char *str);
int     isfinished(char **map);
char    **do_thestick(char *line, char *match, char **map);
char    **do_mymap(char **av);
void    printmap(char **map);
int     verifplayer2(char *line, char *match, char **map, char *nbr2);
int	isnum(char *a);
int     lineforia(char **map, char *nbr);
int     checkfollow(int cpt3, int save, char *nbr2);
char	**myexiteu();
