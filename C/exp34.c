#include<stdio.h>
// temperature determination with given input
void hotorcold();

int main(){
    hotorcold();
    return 0;
}

void hotorcold(){
    int temp;
    printf("Enter a temperature in celsius to check for hot or cold: ");
    scanf("%d", &temp);

    if( temp<25){
        printf("The temperature is quite cold");
    }
    else if( temp>30){
        printf("The temperature is quite hot");
    }
    else{
        printf("Temperature is moderate.");
    }
}