/*风速等级与描述（Wind Speed）*/

#include <stdio.h>
int main(){
    int wind_speed;
    printf("Enter a wind speed:");
scanf("%d",&wind_speed);

if(wind_speed>63){
    printf("Hurricane\n");
}else if(wind_speed>=48){
    printf("Storm\n");
}else if(wind_speed>=28){
    printf("Gale");
}else if(wind_speed>=4){
    printf("Breeze\n");
}else if(wind_speed>=1){
    printf("Light air\n");
}else{
    printf("Calm\n");
}
}

