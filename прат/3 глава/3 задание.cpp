// ConsoleApplication23.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	float a, b, c;
	cout << " ââåäèòå çíà÷åíèå øèðîòû  â ãðàäóñàõ äëÿ ïåðåìåííîé à";
	cin >> a;
	cout << "ââåäèòå çíà÷åíèå øèðîòû â ìèíóòàõ äëÿ ïåðåìåííîé b ";
	cin >> b;
	cout << " ââåäèòå çíà÷åíèå øèðîòû  â ñåêóíäàõ äëÿ ïåðåìåííîé ñ";
	cin >> c;
	float h = (a + b / 60 + c / 3600);
	cout << h;
    return 0;
}

