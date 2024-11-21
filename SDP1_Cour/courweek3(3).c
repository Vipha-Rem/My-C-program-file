#include<stdio.h>
main(){

    int a,b,c,d,e,f,g,h;
    printf("Input first value:"); scanf("%i", &a);
    printf("Input second value:"); scanf("%i", &b);
    printf("Input third value:"); scanf("%i", &c);
    printf("Input fourth value:"); scanf("%i", &d);
    printf("Input fifth value:"); scanf("%i", &e);
    printf("Input sixth value:"); scanf("%i", &f);
    printf("Input seventh value:"); scanf("%i", &g);
    printf("Input eighth value:"); scanf("%i", &h);

    if(a>(b,c,d,e,f,g,h)){

        printf("Maximium number is %i", a);
    }
    else if(b>(a,c,d,e,f,g,h)){

        printf("Maximium number is %i", b);
    }
    else if(c>(b,a,d,e,f,g,h)){

        printf("Maximium number is %i", c);
    }
    else if(d>(b,c,a,e,f,g,h)){
        printf("Maximium number is %i", d);
    }
    else if(e>(b,c,d,a,f,g,h)){
        printf("Maximium number is %i", e);
    }
    else if(f>(b,c,d,e,a,g,h)){
        printf("Maximium number is %i", f);
    }
    else if(g>(b,c,d,e,f,a,h)){
        printf("Maximium number is %i", g);
    }
    else if(h>(b,c,d,e,f,g,a)){
        printf("Maximium number is %i", h);
    }


}