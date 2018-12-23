#include <iostream>
using namespace std;
#define mas 7
struct AEROFLOT{
    string punkt;
    int num;
    string type;
};

int main(){
    setlocale(LC_ALL, "rus");
    AEROFLOT *samolet = new AEROFLOT[mas];
    int counter=0;
    for(int i=0; i<mas; i++){
        cout<<"¬ведите пункт назначени€: "; cin.get(); getline(cin, samolet[i].punkt);
        cout<<"¬ведите тип самолета: "; getline(cin, samolet[i].type);
        cout<<"¬ведите номер рейса: "; cin>>samolet[i].num;
        cout<<endl;
    }
    string temp;
    int t;
    for(int j=0; j<mas; j++){
        for(int i=1; i<mas; i++){
            if(samolet[i].num<samolet[i-1].num){
                t=samolet[i].num;
                samolet[i].num=samolet[i-1].num;
                samolet[i-1].num=t;

                temp=samolet[i].punkt;
                samolet[i].punkt=samolet[i-1].punkt;
                samolet[i-1].punkt=temp;

                temp=samolet[i].type;
                samolet[i].type=samolet[i-1].type;
                samolet[i-1].type=temp;
            }
        }
    }

    cout<<"¬ведите пункт назначени€: "; cin.get(); getline(cin, temp);
    for(int i=0; i<mas; i++){
        if(temp==samolet[i].punkt){
            cout<<samolet[i].num<<" "<<samolet[i].type<<endl;
            counter++;
        }
    }
    if(counter==0) cout<<"рейсов не найдено!";
    return 0;
}
