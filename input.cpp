#include <iostream>

#include "test.h"

bool input(void)
{
		char ch;
		cout << "�ǂ����܂���??�H�@���W�Z�b�g:1  ���W�擾:2  �I��:q  ";
		cin >> ch;
		
		if(ch == '1')
		{
			int x,y;
			cout << "x���W����͂��Ă��������F";
	        	cin >> x;
			cout << "y���W����͂��Ă��������F";
	        	cin >> y;
		
			cs.setx(x);
			cs.sety(y);
			cout << "���W���Z�b�g����܂���\n\n";
		}
		else if(ch == '2')
		{
			cout << "x���W��" << cs.getx() << "�ł�\n";
			cout << "y���W��" << cs.gety() << "�ł�\n\n";	
		}
		else if(ch == 'q')
		{
			return true;
		}
		
		return false;
}