#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class Rec{
private:
    double a,b,c,d;
public:
    void sq(double x1,double y1,double x2,double y2){printf("%.2lf",fabs((x2-x1)*(y2-y1))); }
};
int main()
{
    Rec kk;
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    kk.sq(a,b,c,d);
    return 0;
}
