#include <stdio.h>
// int main(){
//     int i, j;
//     for(i=0; i<5; i++){
//         for(j=0; j<=i; j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }

// REVERSE

// int main()
// {
//    int i, j;
//    for (i = 5; i >= 1; i--)
//    {
//       for (j = 1; j <= i; j++)
//       {
//          printf("* ");
//       }
//       printf("\n");
//    }
//    return 0;
// }

// EQUILATERAL

int main()
{
   int i, j;
   for (i = 1; i <= 5; i++)
   {
      for (j = i; j < 5; j++)
      {
         printf(" ");
      }
      for (j = 1; j <= (2 * i - 1); j++) //(2n-1)
      {
         printf(".");
      }

      printf("\n");
   }
   return 0;
}
