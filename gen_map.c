/*
** gen_map.c for roguelike in /home/nathan/Perso/Games/RogueLike
** 
** Made by Nathan
** Login   <nathan.tual@epitech.eu>
** 
** Started on  Mon Oct 31 22:55:54 2016 Nathan
** Last update Mon Oct 31 23:36:01 2016 Nathan
*/

#include <stdio.h>

void	**gen_map(int nb_room)
{
  int	map[nb_room][nb_room];
  int	count;
  int	x;
  int	y;

  count = 0;
  x = 0;
  y = 0;
  while (x < nb_room)
    {
      while (y < nb_room)
	{
	  map[x][y] = 0;
	  y += 1;
	}
      y = 0;
      x += 1;
    }
  y = 0;
  x = 0;
}
