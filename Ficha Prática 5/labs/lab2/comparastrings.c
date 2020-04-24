#include <stdio.h>
#include <string.h>

int main(void)
{
   char s1[] = "Ola", s2[] = "Ola";

   //print strings addresses
   printf("%p\n", (void *) &s1);
   printf("%p\n", (void *) &s2);

   if (s1 == s2)
      printf("Ponteiros que apontam para o mesmo sitio\n");
   else
      printf("Ponteiros diferentes\n");

   if (strcmp(s1, s2) == 0)
      printf("As strings sao iguais\n");
      
   return 0;
}

