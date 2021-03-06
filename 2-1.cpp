#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cctype>
using namespace std;
class Complex
{
public:
    Complex(float n,float m){
        a=n; b=m;
    };
    void add(Complex com){
        a+=com.a; b+=com.b;
    };
    void sub(Complex com){
        a-=com.a; b-=com.b;
    };
    void show(){
        if(b>0) printf("%.1f+%.1fi\n",a,b);
        if(b<0) printf("%.1f%.1fi\n",a,b);
        if(!b) printf("%.1f\n",a);
    };
private:
    float a,b;
};
int main()
{
    char s,m;
    int k=0;
    float a[4]={0},t=1;
    bool n=0;
    while(s=getchar())
    {
        if(isblank(s) && k<4)
        {
            a[k++]/=t;
            n=0;
            t=1;
        }
        if(n) t*=10;
        if(s=='-') t*=-1;
        if(s=='.') n=true;
        if(isdigit(s))
            a[k]=a[k]*10+s-'0';
        if(s=='a' || s=='s') {
            m=s;
            break;
        }
    }
    Complex x(a[0],a[1]);
    Complex y(a[2],a[3]);
    if(m=='a') x.add(y);
    else x.sub(y);
    x.show();
    return 0;
}
