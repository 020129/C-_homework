#include <iostream>
#include"hero.h"
using namespace std;
void jishu()
{
	if (jishashu == 1) //һѪ
	{
		cout << "frist blood����" << endl;
	}
	 if (jishashu == 2) //˫ɱ
	  {
		cout << "double kill����" << endl;
	  }
	  if (jishashu == 3) //��ɱ ��ɱ��ɱ
	   {
		cout << "triple kill����" << endl;
	   }
	   if (jishashu == 4) //��ɱ ɱ������
	    {
		cout << "quatary kill����" << endl;
	    }
	     if (jishashu >= 5) //�������� �Ʋ��ɵ�
	       {
		    cout << "penta kill����" << endl;
		    cout << "����ϲ��ɹ��õ���ɱ��" << endl;
		    cout << "������" << endl;
		    return win();
	       }
}