//check the given values are eqaul or not
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the no.:");
    scanf("%d",&a);
    printf("Enter the no.:");
    scanf("%d",&b);
    if(a==b){
        printf("Entered values rae equal");
    }
    else{
        printf("Entered values are not equal");
    }
    return 0;
}