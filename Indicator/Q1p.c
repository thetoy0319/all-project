#include<stdio.h>
void swap(int* a, int* b){
    int c = *a;

    *a=*b;
    *b=c;

}


int main (){
    int a,b;

    printf("Enter the value of ;");
    scanf("%d %d",&a,&b);

    printf("after swap the value a = %d  b = %d", a,b);
    swap(&a,&b);

    printf("After swapping  a=%d, b=%d\n",a,b);
    return 0;
}
