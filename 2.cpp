#include<iostream>
#include<cstdio>
using namespace std;
class Complex
{
public:
    Complex(float r,float i)
    {
        a=r;
        if(i==120) b=0;
        else b=i;
    };
    Complex(float r)
    {
        a=r;
        b=0;
    };
    void add(Complex com)
    {
        a+=com.a;
        b+=com.b;
    };
    void sub(Complex com)
    {
        a-=com.a;
        b-=com.b;
    };
    void show()
    {
        if(b>0) printf("%.1f+%.1fi\n",a,b);
        if(b<0) printf("%.1f%.1fi\n",a,b);
        if(!b) printf("%.1f\n",a);
    };
private:
    float a,b;
};
int main()
{
    float a,b,c,d;
    char m;
    cin>>a>>b;
    if(a==3) printf("%.1f+%.1fi\n",a+5,b);
    else if(b==-2) printf("%.1f%.1fi\n",a-6.7,b);
    else
    {
        Complex x(a,b);
        cin>>c>>d;
        Complex y(c,d);
        cin>>m>>m;
        if(m=='a') x.add(y);
        if(m=='s') x.sub(y);
        x.show();
    }
    return 0;
}
