/**
 * A quick hack to make a sample DOS-formatted file.
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
  int i;
  for (i = 1; i < argc; i++) 
    {
      printf ("%s\r\n", argv[i]);
    } // for
  return 0;
} // main
