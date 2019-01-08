#include <iostream>
using namespace std;
int main(){
    float x1, x2, a, b, c, dx, F;
	cout<<"Vvedite xn:"; cin>>x1;
	cout<<"Vvedite xk:"; cin>>x2;
	cout<<"Vvedite a:"; cin>>a;
	cout<<"Vvedite b:"; cin>>b;
	cout<<"Vvedite c:"; cin>>c;
	cout<<"Vvedite dx:"; cin>>dx;
	for(int x=x1; x<x2; x+=dx){
        if(c<0 && x!=0){
            F=-a*x-c;
            if((a || b || c)!=0)cout<<F<<" ";
            else cout<<(int)F<<" ";
        }

        if(c>0 && x==0){
            F=(x-a)/(-c);
            if((a || b || c)!=0)cout<<F<<" ";
            else cout<<(int)F<<" ";
        }
        else{
            F=(b*x)/(c-a);
            if((a || b || c)!=0)cout<<F<<" ";
            else cout<<(int)F<<" ";
        }
	}
    return 0;
}
