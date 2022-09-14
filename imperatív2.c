#include <stdio.h>
#include <stdbool.h>
char change1 (char karakter);
char change2 (char karakter);
char change3 (char karakter);
char change4 (char karakter);

int
main ()
{
  char bemenet[10];
  char eredmeny[10];
  printf ("KC)rlek add meg a bemenetet: ");
  scanf ("%s", bemenet);
  printf ("\n");
  printf ("for ciklussal: \n");
  printf ("\tchange1-gyel: \n");
  for (int i = 0; bemenet[i] != '\0'; i++)
    {
      eredmeny[i] = change1 (bemenet[i]);
    }
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("\tchange2-gyel: \n");
  for (int i = 0; bemenet[i] != '\0'; i++)
    {
      eredmeny[i] = change2 (bemenet[i]);
    }
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("\tchange3-gyel: \n");
  for (int i = 0; bemenet[i] != '\0'; i++)
    {
      eredmeny[i] = change3 (bemenet[i]);
    }
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("\tchange4-gyel: \n");
  for (int i = 0; bemenet[i] != '\0'; i++)
    {
      eredmeny[i] = change4 (bemenet[i]);
    }
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("while ciklussal: \n");
  int i = 0;
  printf ("\tchange1-gyel: \n");
  while (bemenet[i] != '\0')
    {
      eredmeny[i] = change1 (bemenet[i]);
      i++;
    }
  i = 0;
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("\tchange2-gyel: \n");
  while (bemenet[i] != '\0')
    {
      eredmeny[i] = change2 (bemenet[i]);
      i++;
    }
  i = 0;
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("\tchange3-gyel: \n");
  while (bemenet[i] != '\0')
    {
      eredmeny[i] = change3 (bemenet[i]);
      i++;
    }
  i = 0;
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("\tchange4-gyel: \n");
  while (bemenet[i] != '\0')
    {
      eredmeny[i] = change4 (bemenet[i]);
      i++;
    }
  i = 0;
  printf ("\t\tEredmC)ny: %s\n", eredmeny);

  printf ("do-while ciklussal: \n");
  printf ("\tchange1-gyel: \n");
  do
    {
      eredmeny[i] = change1 (bemenet[i]);
      i++;
    }
  while (bemenet[i + 1] != '\0');
  printf ("\t\tEredmC)ny: %s\n", eredmeny);
  i = 0;

  printf ("\tchange2-gyel: \n");
  do
    {
      eredmeny[i] = change2 (bemenet[i]);
      i++;
    }
  while (bemenet[i + 1] != '\0');
  printf ("\t\tEredmC)ny: %s\n", eredmeny);
  i = 0;

  printf ("\tchange3-gyel: \n");
  do
    {
      eredmeny[i] = change3 (bemenet[i]);
      i++;
    }
  while (bemenet[i + 1] != '\0');
  printf ("\t\tEredmC)ny: %s\n", eredmeny);
  i = 0;

  printf ("\tchange4-gyel: \n");
  do
    {
      eredmeny[i] = change4 (bemenet[i]);
      i++;
    }
  while (bemenet[i + 1] != '\0');
  printf ("\t\tEredmC)ny: %s\n", eredmeny);
  i = 0;

  return 0;
}

char
change1 (char karakter)
{
  if (karakter == 'a')
    {
      return 'e';
    }
  else if (karakter == 'e')
    {
      return 'i';
    }
  else if (karakter == 'i')
    {
      return 'o';
    }
  else if (karakter == 'o')
    {
      return 'u';
    }
  else if (karakter == 'u')
    {
      return 'a';
    }
};

char
change2 (char karakter)
{
  switch (karakter)
    {
    case 'a':
      return 'e';
    case 'e':
      return 'i';
    case 'i':
      return 'o';
    case 'o':
      return 'u';
    case 'u':
      return 'a';
    default:
      return karakter;
    }
};

char
change3 (char karakter)
{
  char from[] = "aeiou";
  char to[] = "eioua";
  for (int i = 0; i < 5; i++)
    {
      if (from[i] == karakter)
	{
	  return to[i];
	}
    }
  return karakter;
};

char
change4 (char karakter)
{
  char vowels[] = "aeiou";
  for (int i = 0; i < 5; i++)
    {
      if (vowels[i] == karakter && i == 4)
	{
	  return vowels[0];
	}
      else if (vowels[i] == karakter)
	{
	  return vowels[i + 1];
	}
    }
  return karakter;
};
