#include <stdio.h>

int main() {
    int n;

    printf("Enter A Number To Print A Repeated Number Triangle OF : ");

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) 
    {
    for (int j = 1; j <= i; j++) 
    { printf("%d",i); }
    printf("\n");
    }
    return 0;
}