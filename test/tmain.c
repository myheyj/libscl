/* ************************************************************************* */
/*                                                                           */
/* ************************************************************************* */

#include	<stdio.h>
#include	<string.h>
#include	"tmain.h"


/* ************************************************************************* */
/*                                                                           */
/* ************************************************************************* */

int   main (int argc, char* argv[])
   {
   if (argc == 2)
      {
      if (strcmp(argv[1],"-t") == 0)
        {
        printf ("%s", test_title());
        return 0;
        }
      }

   printf ("\n%s.\n", test_title());
   return test_run();
   }


/* end of file */