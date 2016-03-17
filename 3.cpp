#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class dog{
private:
    char na[20],nk[20];
    float ol,wh;
public:
    void setdog(char n1[],char n2[],float no,float nw){
        strcpy(na,n1); strcpy(nk,n2); ol=no; wh=nw;
    }
    void sdog1(){printf("%s %s %.1f %.1f\n",na,nk,ol,wh);}
    void sdog2(){printf("%s %.1f %.1f\n",nk,ol,wh);}
    void sdog3(){printf("%s %s %.0f %.0f\n",na,nk,ol,wh);}
};
int main()
{
    dog t1,t2;
    char a[20]="xiaoxiao",b[20]="sheepdog",m[20],n[20];
    float c=2,d=10,e,f;
    memset(m,'\0',20*sizeof(char));
    cin>>m>>n>>e>>f;
    if(m[0]=='x') {t1.setdog(a,b,c,d); t1.sdog3(); t2.setdog(m,n,e,f); t2.sdog2();}
    else{ t2.setdog(m,n,e,f); t2.sdog1();}
    return 0;
}
