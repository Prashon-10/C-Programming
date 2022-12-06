# include<stdio.h>
int main(){
    int firstNum,secNum, Sum, Cube;
    printf("\nEnter the First Number to Find Cube: ");
    scanf("%d",&firstNum);

    printf("\nEnter the Second Number to Find Cube: ");
    scanf("%d",&secNum);

    Sum = firstNum+secNum;
    Cube = Sum*Sum*Sum;
    printf("\nThe Cube of First and Second Numbers: %d",Cube);

    return 0;
}