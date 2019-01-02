#include <stdio.h>

using namespace std;

int main (void)
{
    int c[5]={5,10,6,0,4};
    int d[5];
    int i=0, j=0;
    printf("Nilai elemen Array A\n");
    for (i=4; i>=0; i--){
        d[i]=c[j];
        printf("%d", c[j]);
        j++;
    }

    printf("\n");
    printf("Nilai elemen array B (salinan dari Array A)\n");
    for (i=4; i>=0; i--)
	{
	    printf("%d", d[i]);
    }
    printf("\n");
    return 0;
}
