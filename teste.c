#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int i, u, soma = 0;
      
    u = n;
    
    while (u>0) {
    i = u % 10;
    soma = soma + i;
    u = u / 10;
    }
    
    printf("%d\n", soma);
    
    return 0;
}
