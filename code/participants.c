/**
 * participants.c
 *   A simple C program to print the participants from the class.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int 
main (int argc, char *argv[])
{
  int i = 0;

  printf ("%02d: Kim Tracy\n", ++i);
  printf ("%02d: Justin Williams\n", ++i);
  printf ("%02d: Steven Bertolucci\n", ++i);
  printf ("%02d: Andrew Wolowiec\n", ++i);
  printf ("%02d: Ben Closner\n", ++i); 
  printf ("%02d: Baron Lenardson\n", ++i);
  printf ("%02d: Jordan Gagnon\n", ++i);
  
  printf ("There are %i participants.\n", i);
  return 0;
} // main
