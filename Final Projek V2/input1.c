#include<stdio.h>
#include<string.h>

int main() {
    int x=1;
    float f;
    char a=2;
    int x;
    a = x * 2 + 5;
    if(x>a) {
        printf("Test");
        a = x * 2 + 25;
        if(x>a) {
            printf("Test2");
            a = x * 2 + 25;
        }
        else {
            x = a * 2 + 25;
        }
    }
    else {
        x = a * 2 + 25;
    }
}