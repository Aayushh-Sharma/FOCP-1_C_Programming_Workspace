#include <stdio.h>

int main() {
    int n;
    
printf("Enter Number To Create A Left Angled Inverted Triangle OF : ");

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    {
    for (int j = i; j < n; j++) 
    { printf("*"); }
    printf("\n");
    }
    return 0;
}