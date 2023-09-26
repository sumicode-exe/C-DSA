#include <stdio.h>

int main(){
    int m;

    printf("Enter marks: ");
    scanf("%d", &m);

    if (m > 75){
        printf("Outstanding");
    } else if ((m >= 60) && (m < 75)){
        printf("Amazing");
    } else if ((m >= 50) && (m < 60)){
        printf("Boomer");
    } else if ((m >= 40) && (m < 50)){
        printf("Join a cult, cult");
    } else {
        printf("Dont study");
    }

    return 0;
}