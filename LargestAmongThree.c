#include <stdio.h>
#include <stdlib.h>

int main(){
int first, second, third;
printf("Enter three numbers: ");
scanf("%d %d %d", &first, &second, &third);
if(first > second){
    if(first > third){
        printf("Largest: %d", first);
    } else{
        printf("Largest: %d", third);
    }
}else{
    if(second > third){
        printf("Largest: %d", second);
    } else{
    printf("Largest: %d", third);
    }
}
return 0;
}
