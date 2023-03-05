#include <stdio.h>
void  swap(float *x, float *y){
   *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

void shiftright3(float *a, float *b, float *c){
   swap(a,b);
   swap(c,a);
}

int main(void)
{
    int i;
    for (i=1;i<=2;++i){
        float a,b,c;
        printf("A:");
        scanf("%f", &a);
        printf("B:");
        scanf("%f", &b);
        printf("C:");
        scanf("%f", &c);

        shiftright3(&a,&b,&c);
        printf("A:%f; B:%f; C:%f\n",a,b,c);
    }
    return 0;
}
