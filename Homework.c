#include <stdio.h>
int LoopAverage(int N){ 
    int Average = 0;
    int Averageheigt = 0;
    int year , height;
    int groupone = 0, grouptwo = 0;
    for(int i=1;i<=N;i++){
        printf("enter Age is : (%d): ",i);
        scanf("%d",&year);
        printf("enter height is : (%d): ",i);
        scanf("%d",&height);
        if(year, height == 0){
            break;
        }    
        Average = Average + year; 
        Averageheigt = Averageheigt + height;

        if(year >= 16 ){ 
            if(height >=  ){ 
            groupone = groupone + 1;
            }
        }
        if(year >= 15){
            if(height >= 200 ){ 
            grouptwo = grouptwo + 1;
            }
        }
    }
    printf("16 year or height 188 : %d  \n",groupone);
    printf("15 year or height 200 : %d  \n",grouptwo); 
    printf("Average age : %d \n",Average=Average/N);
    printf("Average height : %d ",Averageheigt=Averageheigt/N);
    return 0;
 }

int main()
{
    int L;
    int N = 20; 
    L = LoopAverage(N); 
    return 0;
}
 