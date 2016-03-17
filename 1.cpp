#include<iostream>
using namespace std;
class tree{
    private:
        int age,year;
    public:
        void grow(int ages,int years);
        void sage();
};
void tree::grow(int ages,int years){
            age=ages;
            year=years;
}
void tree::sage(){cout<<age+year<<endl;}
int main()
{
    tree mytr;
    int a,b;
    cin>>a>>b;
    mytr.grow(a,b);
    mytr.sage();
    return 0;
}
