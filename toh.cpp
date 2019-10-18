#include<iostream>
using namespace std;

int toh(int n,int s,int d,int h)
{
    if(n==0)
    {
        return 1 ;
    }
   toh(n - 1, s, h, d); 
   cout<<"["<<s<<"-"<<d<<"]"<<n<<endl; 
   toh(n - 1, h, d, s);
}

int main(int argc,char** argv)
{
    int disc=3;
    int res= toh(3,1,2,3);//function call
    cout<<res;

}
