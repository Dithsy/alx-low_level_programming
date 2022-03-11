#include <stdio.h>

void main()

{

        int ch;

        clrscr();

        printf(“Print all uppercase letters followed by all lowercase letters ”);

        /* print uppercase letters */

        for (ch= ‘a’; ch<= ‘z’; ch++)

             putchar(ch);

             putchar (‘\n’ ) ;

             /* print lowercase letters */

             for (ch= ‘A’; ch<= ‘Z’; ch++)

                  putchar(ch);

                  putchar (‘\n’) ;

                  getch();

}
