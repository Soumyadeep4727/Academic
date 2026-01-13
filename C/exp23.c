#include<stdio.h>
// function use

void indian();
void german();

int main(){
    char a;
    printf("Enter 'I' for Indian and 'G' for German: ");
    scanf("%c", &a);
    
    if( a=='I' ) {
        indian();
    }
    else{
        german();
    }
}

void indian() {
    printf("Namaste. Good day");
}

void german() {
    printf("Hallo. Guten Tag");
}