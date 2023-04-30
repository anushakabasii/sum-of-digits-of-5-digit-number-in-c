#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, i,rem,s=0;
    scanf("%d", &n);
    if (10000<=n && n<=99999)
    {
        for (i=0;i<5;i++)
        {
            rem = n%10;
            s=s+rem;
            n=n/10;
        }
        printf("%d",s);
    }
    return 0;
}
