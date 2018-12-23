#include <iostream>
#include <ctime>

using namespace std;
int main(){
    srand( time( 0 ) );
    int n=3, sum=1, max=-1000, temp;
    bool flag;
    int A[n][n], s[2*n];
    for(int i=0; i<n; i++){     //составляем матрицу
        for(int j=0; j<n; j++){
            A[i][j]=-5 + rand() % 20;
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){     //находим сумму
            flag=true;
            sum=1;
        for(int j=0; j<n; j++){
            if(A[i][j]>=0) sum*=A[i][j];
            if(A[i][j]<0) flag=false;
        }
    if(!flag) sum=1;
    else cout<<"sum = "<<sum<<endl;
    }

    for (int j=0;j<((n-1)*n);j++)       // находим максимум
        s[j]=0;
    int k=0, t=0,l=1;
    for (int i=0;i<n;i++){
        for (int j=n-1;j>=0;j--){
            if(i!=j && j>i){s[k]+=A[i][j]; k++;}
            if(i!=j && i>j){s[n+t]+=A[i][j]; t++;}
        }
    }
  for (int j=0;j<((n-1)*n);j++) cout<<s[j]<<" ";

  int q=0, it2=0, itelse=0, qelse=((n-1)*n)-1, it3=((n-1)*n)-1;
  for(int it=1; it<=n+1;it++){
    temp=0;
    if(it+it2<=n){
    for (int j=q;j<it+it2;j++){
        temp+=s[j];
        q++;
	}
    it2=q;
    }else if(it3-itelse>=n){
    itelse++;
    for (int j=qelse;j>it3-itelse;j--){
        temp+=s[j];
        qelse--;
    }
    it3=qelse;
    }
      if(max<temp)max=temp;
  }
  cout<<"Max sum "<<max<<endl;
    return 0;
}
