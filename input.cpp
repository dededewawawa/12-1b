#include <iostream>

#include "test.h"

bool input(void)
{
		char ch;
		cout << "どうしますか??？　座標セット:1  座標取得:2  終了:q  ";
		cin >> ch;
		
		if(ch == '1')
		{
			int x,y;
			cout << "x座標を入力してください：";
	        	cin >> x;
			cout << "y座標を入力してください：";
	        	cin >> y;
		
			cs.setx(x);
			cs.sety(y);
			cout << "座標がセットされました\n\n";
		}
		else if(ch == '2')
		{
			cout << "x座標は" << cs.getx() << "です\n";
			cout << "y座標は" << cs.gety() << "です\n\n";	
		}
		else if(ch == 'q')
		{
			return true;
		}
		
		return false;
}