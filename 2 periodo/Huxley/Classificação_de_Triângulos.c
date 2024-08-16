//https://www.thehuxley.com/problem/49

#include <stdio.h>

int main() {
    
    int a, b ,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && b == c)
        printf("equilatero");
    else if(a != b && a != c && b != c)
        printf("escaleno");
    else
        printf("isosceles");
	return 0;
}
