//#include <stdio.h>
//#include <stdlib.h>
//#define n 6
//int main(){
//    int arr[n] = {9, 8, 7, 2, 4, 3};
//    int temp;
//    for(int i = 0; i<n/2; i++){
//        temp = arr[i];
//        arr[i] = arr[n-i-1];
//        arr[n-i-1] = temp;
//    }
//    for(int i = 0; i < n; i++){
//        printf("%d,", arr[i]);
//    }
//}

// wap to reverse wsinh while loop
#include <stdio.h>

int main()
{
    int i, j, tempVar;
    int arr[5] = {1, 2, 3, 4, 5};
    i = 0;
    j = 4;
    while (i < j)
    {
        tempVar = arr[i];
        arr[i] = arr[j];
        arr[j] = tempVar;
        i++;
        j--;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
