#include <stdio.h>
int main()
{
    int ping,band;
    float pkt;
    printf("enter ping: ,enter packet loss: ,enter bandwidth: ");
    scanf("%d %f %d", &ping, &pkt, &band);

    if(ping<30 && pkt<0.5 && band>1000){
        printf("Route A");
    }
    else if( ping<30 && pkt<0.5){
    printf(" route B");
    }
    else if( pkt<0.5 && band>1000){
    printf(" route C");
    }
    else if( ping<30 && band>1000){
    printf(" route D");
    }
    else if( ping<30 || pkt<0.5 || band>1000){
    printf(" route E");
    }
    else{
        printf(" route F");
    }
    return 0;

}