/*
** my_strncmp.c for strncmp in /home/charvo_a/rendu/Piscine-C-Jour_06/ex_06
**
** Made by CHARVOZ Nicolas
** Login   <charvo_a@epitech.net>
**
** Started on  Tue Oct  8 00:53:41 2013 CHARVOZ Nicolas
** Last update Thu Dec 12 23:06:43 2013 Nicolas Charvoz
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int i;
  int j;
  int resultat;

  i = 0;
  j = 0;
  resultat = 0;
  if (n > 0)
    {
      while (s1[i] != '\0' && s2[j] != '\0' && n > 0)
	{
	  if (s1[i] != s2[j])
	    {
	      resultat = (s1[i] - s2[j]);
	      return (resultat);
	    }
	  i = i + 1;
	  j = j + 1;
	  n--;
	}
    }
  else
    return (0);
}
