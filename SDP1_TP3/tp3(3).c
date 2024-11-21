#include<stdio.h>
int main(){

    int a,b,c,d,e,f,g;
    printf("Input first value:"); scanf("%i", &a);
    printf("Input second value:"); scanf("%i", &b);
    printf("Input third value:"); scanf("%i", &c);
    printf("Input fourth value:"); scanf("%i", &d);
    printf("Input fifth value:"); scanf("%i", &e);
    printf("Input sixth value:"); scanf("%i", &f);
    printf("Input seventh value:"); scanf("%i", &g);

    if(a<=b && a<=c && a<=d && a<=e && a<=f && a<=g){
        printf("Minimium number is %i", a);
    }
    else if(b<=a && b<=c && b<=d && b<=e && b<=f && b<=g){
        printf("Minimium number is %i", b);
    }
    else if(c<=a && c<=b && c<=d && c<=e && c<=f && c<=g){
        printf("Minimium number is %i", c);
    }
    else if(d<=a && d<=b && d<=c && d<=e && d<=f && d<=g){
        printf("Minimium number is %i", d);
    }
    else if(e<=a && e<=b && e<=c && e<=d && e<=f && e<=g){
        printf("Minimium number is %i", e);
    }
    else if(f<=a && f<=b && f<=c && f<=d && f<=e && f<=g){
        printf("Minimium number is %i", f);
    }
    else if(g<=a && g<=b && g<=c && g<=d && g<=e && g<=f){
        printf("Minimium number is %i", g);
    }

}