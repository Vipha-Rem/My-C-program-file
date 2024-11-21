2
#include<stdio.h>
main(){

    int a,b,c,d,e,f,g;
    printf("Input first value:"); scanf("%i", &a);
    printf("Input second value:"); scanf("%i", &b);
    printf("Input third value:"); scanf("%i", &c);
    printf("Input fourth value:"); scanf("%i", &d);
    printf("Input fifth value:"); scanf("%i", &e);
    printf("Input sixth value:"); scanf("%i", &f);
    printf("Input seventh value:"); scanf("%i", &g);

    if(a<(b,c,d,e,f,g)){
        printf("Minimium number is %i", a);
    }
    else if(b<(a,c,d,e,f,g)){
        printf("Minimium number is %i", b);
    }
    else if(c<(b,a,d,e,f,g)){
        printf("Minimium number is %i", c);
    }
    else if(d<(b,c,a,e,f,g)){
        printf("Minimium number is %i", d);
    }
    else if(e<(b,c,d,a,f,g)){
        printf("Minimium number is %i", e);
    }
    else if(f<(b,c,d,e,a,g)){
        printf("Minimium number is %i", f);
    }
    else if(g<(b,c,d,e,f,a)){
        printf("Minimium number is %i", g);
    }

}