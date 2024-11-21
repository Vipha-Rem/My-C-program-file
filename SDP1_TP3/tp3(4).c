#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, d, e, f, g, h, i, j;
    printf("enter the value of 1st number:"); scanf("%i", &a);
    printf("enter the value of 2nd number:"); scanf("%i", &b);
    printf("enter the value of 3rd number:"); scanf("%i", &c);
    printf("enter the value of 4th number:"); scanf("%i", &d);
    printf("enter the value of 5th number:"); scanf("%i", &e);
    printf("enter the value of 6th number:"); scanf("%i", &f);
    printf("enter the value of 7th number:"); scanf("%i", &g);
    printf("enter the value of 8th number:"); scanf("%i", &h);
    printf("enter the value of 9th number:"); scanf("%i", &i);
    printf("enter the value of 10th number:"); scanf("%i", &j);

    printf("Among this 10 numbers(%i,%i,%i,%i,%i,%i,%i,%i,%i,%i)\n", a, b, c, d, e, f, g, h, i, j);
    //mini part
    if(a<=b && a<=c && a<=d && a<=e && a<=f && a<=g && a<=h && a<=i && a<=j){
        printf("Minimium number is %i\n", a);
    }
    else if(b<=a && b<=c && b<=d && b<=e && b<=f && b<=g && b<=h && b<=i && b<=j){
        printf("Minimium number is %i\n", b);
    }
    else if(c<=a && c<=b && c<=d && c<=e && c<=f && c<=g && c<=h && c<=i && c<=j){
        printf("Minimium number is %i\n", c);
    }
    else if(d<=a && d<=b && d<=c && d<=e && d<=f && d<=g && d<=h && d<=i && d<=j){
        printf("Minimium number is %i\n", d);
    }
    else if(e<=a && e<=b && e<=c && e<=d && e<=f && e<=g && e<=h && e<=i && e<=j){
        printf("Minimium number is %i\n", e);
    }
    else if(f<=a && f<=b && f<=c && f<=d && f<=e && f<=g && f<=h && f<=i && f<=j){
        printf("Minimium number is %i\n", f);
    }
    else if(g<=a && g<=b && g<=c && g<=d && g<=e && g<=f && g<=h && g<=i && g<=j){
        printf("Minimium number is %i\n", g);
    }
    else if(h<=a && h<=b && h<=d && h<=e && h<=f && h<=g && h<=c && h<=i && h<=j){
        printf("Minimium number is %i\n", h);
    }
    else if(i<=a && i<=c && i<=d && i<=e && i<=f && i<=g && i<=h && i<=b && i<=j){
        printf("Minimium number is %i\n", i);
    }
    else if(j<=a && j<=c && j<=d && j<=e && j<=f && j<=g && j<=h && j<=i && j<=b){
        printf("Minimium number is %i\n", j);
    }
    //max part
    if(a>=b && a>=c && a>=d && a>=e && a>=f && a>=g && a>=h && a>=i && a>=j){
        printf("Maximium number is %i\n", a);
    }
    else if(b>=a && b>=c && b>=d && b>=e && b>=f && b>=g && b>=h && b>=i && b>=j){
        printf("Maximium number is %i\n", b);
    }
    else if(c>=a && c>=b && c>=d && c>=e && c>=f && c>=g && c>=h && c>=i && c>=j){
        printf("Maximium number is %i\n", c);
    }
    else if(d>=a && d>=c && d>=b && d>=e && d>=f && d>=g && d>=h && d>=i && d>=j){
        printf("Maximium number is %i\n", d);
    }
    else if(e>=a && e>=b && e>=d && e>=c && e>=f && e>=g && e>=h && e>=i && e>=j){
        printf("Maximium number is %i\n", e);
    }
    else if(f>=a && f>=c && f>=d && f>=e && f>=b && f>=g && f>=h && f>=i && f>=j){
        printf("Maximium number is %i\n", f);
    }
    else if(g>=a && g>=c && g>=d && g>=e && g>=f && g>=b && g>=h && g>=i && g>=j){
        printf("Maximium number is %i\n", g);
    }
    else if(h>=a && h>=c && h>=d && h>=e && h>=f && h>=g && h>=b && h>=i && h>=j){
        printf("Maximium number is %i\n", h);
    }
    else if(i>=a && i>=c && i>=d && i>=e && i>=f && i>=g && i>=h && i>=b && i>=i){
        printf("Maximium number is %i\n", i);
    }
    else if(j>=a && j>=c && j>=d && j>=e && j>=f && j>=g && j>=h && j>=i && j>=b){
        printf("Maximium number is %i\n", j);
    }
}