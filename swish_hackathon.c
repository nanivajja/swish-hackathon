#include<stdio.h>
#include<math.h>
int main(){
    
    float cost,disc;
    int required=0;
    scanf("%f%f",&cost,&disc);
    while(cost>0){
        required+=cost;
        cost=floor(cost-(cost*(disc/100)));
    }
    printf("%d\n",(int)required);
    return 0;
    
}