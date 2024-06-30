#include <stdio.h>

int countOnes(int num){
    int count=0;
    while(num > 0){
        if(num % 2 == 1){
            count++;
        }
        num /= 2;
    }
    return count;
}

void printStars(int count){
    for(int i=0;i<count;i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    int number;

    printf("Please enter an integer number: ");
    scanf("%d",&number);

    int result = countOnes(number);
    printStars(result);
    system("pause");
    return 0;
}