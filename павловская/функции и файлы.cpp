#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>

using namespace std;
#define ESC 27
typedef vector< vector<string> > MY_TEXT;

enum ConsoleColor
{
    Black         = 0,
    Blue          = 1,
    Green         = 2,
    Cyan          = 3,
    Red           = 4,
    Magenta       = 5,
    Brown         = 6,
    LightGray     = 7,
    DarkGray      = 8,
    LightBlue     = 9,
    LightGreen    = 10,
    LightCyan     = 11,
    LightRed      = 12,
    LightMagenta  = 13,
    Yellow        = 14,
    White         = 15
};

// устанавливает цвет текста и подложки в консоли
void SetColor(int text, int background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


void Menu(void)
{
    system("cls");
    cout<<"Меню:"<<endl;
    cout<<"1. Вывод текста"<<endl;
    cout<<"2. Цветное представление"<<endl;
    cout<<"Для выхода нажмите ESC"<<endl;
}

void PrintText(MY_TEXT & text)
{
    int numW=0;
    for (MY_TEXT::iterator it=text.begin(); it<text.end(); it++)
    {
        for (vector<string>::iterator itt=(*it).begin(); itt<(*it).end(); itt++, numW++){
            if(numW%7==0) cout<<endl;
            cout<<" "<<*itt;
        }
    }
}

void PrintText(MY_TEXT & text, int numSentece, int numWord)
{
    int numS=0, numW=0;
    for (MY_TEXT::iterator it=text.begin(); it<text.end(); it++, numS++)
    {
        if (numS==numSentece) SetColor(Yellow,Black);
        for (vector<string>::iterator itt=(*it).begin(); itt<(*it).end(); itt++, numW++)
        {
            if(numW%7==0) cout<<endl;
            cout<<" "<<*itt;
        }
        if (numS==numSentece) SetColor(LightGray,Black);
    }
}


int main()
{
    char *File="file.dat", key=0;
    MY_TEXT text;
    vector<string> sentence;
    char strr[70];
    string str;
    int countWord=0, preb=0;
    int numSentence, numWord;
    setlocale(LC_ALL, "Russian");

    ifstream f(File);
    if (!(f.is_open()))  // проверка наличия файла с тестом
        cout<<"ERROR: not file "<<File;
    else{
        while(!f.eof()){             // чтении из файла
            f>>str;
            sentence.push_back(str);
            if (str[str.length()-1]=='.'||str[str.length()-1]=='!'||str[str.length()-1]=='?'){
                text.push_back(sentence);
                sentence.clear();
            }
        }
    }
    do{
        Menu();
        switch (key)
        {
        case '1':
            PrintText(text);
            break;
        case '2':
            numSentence=0; numWord=0;

            for (MY_TEXT::iterator it=text.begin(); it<text.end();){
                if(preb==4) {preb=1;}
                if(preb==3) {it+=2; numSentence+=2; preb++;}
                if(preb==2) {it+=2; numSentence+=2; preb++;}
                if(preb==1) {it-=1; numSentence-=1; preb++;}
                if(preb==0) {it+=1; numSentence+=1; preb++;}
                    system("cls");
                    PrintText(text, numSentence, numWord);
                    getch();
            }preb=0;
            break;
        }
    }while ((key=getch())!=ESC);
    f.close();
    cout << endl;
    system("PAUSE");
    return 0;
}
