#include<iostream>							//���������� iostream
using namespace std;						//������������ ���

void main()
{
	setlocale(LC_ALL, "Ru");				//������� ��� �������� �����
	/*
	//���� �1 and 2
	cout << "������������ ���" << endl;		//����� � �������

	//���� �3 - Escape ������������������

	 

	// \b �������� ���������� ����������� �������
	// \n ������� �� ������ ����� ������
	// \t ������� � ��������� ������� ���������

	// \\ ������� �������� ����� \
	// \"������� ������� ������� "
	// \'������� ��������� ������� '

	a	������ (��������������)
	\b	Backspace
	\f	������� ��������
	\n	����� ������
	\r	������� �������
	\t	�������������� ���������
	\v	������������ ���������
	\'	��������� �������
	\"	������� �������
	\\	�������� ����� �����
	\?	������� ��������������� �����

	cout << "������������ ���\n\n";		//����� � ������� c ��������� �� ������ ����� ������
	cout << "������������ ���\t" << "���\n\n";		//����� � ������� � ����������

	//�������� ������� �1
	cout << "\t\t\t� \"���� �������� ������,\'\n\t\t\t� ���� ��� �����.\n\t\t\t����� � ����� ��������,\n\t\t\t������ ����.\n";

	//���� �4
	//���� ������ :
	//1)����� � ��������� ������:
	//float - ������ � ������ 4, ��������� ������������ ����� ��������� ��������;
	//double - ������ � ������ 8, ��������� ������������ ����� ������� ��������;

	//2)����� �����:
	//int - ������ � ������ 4, ��������� ����� �����;
	//short - ������ � ������ 2, ��������� �������� ����� �����;
	//long - ������ � ������ 4, ��������� ������� ����� �����;
	//3)���������� ���:
	//char - ������ � ������ 1, ��������� �������;

	//4)���������� ���:
	//bool - ������ � ������ 1, ��������� ����������� �������� "true and false"


	//���� �5 ����������
	int a;				//���������� ���������� *����� ��� ��� int a = 5;
	a = 5;				//��������� ��������
	cout << a << endl;
	a = 10;
	cout << a << endl;

	int c, b, t;
	c = 12;
	b = 5;
	t = 7;
	cout << c << " " << b << " " << t << endl;

	//���� �6 ���������

	const int COUNT_DAYS_IN_WEEK = 7; //��������� "���������� ���� � ������"

	cout << COUNT_DAYS_IN_WEEK << endl;

	// ���� �7 �d�� ������

	int Var, Var2;

	cout << "������� �����:" << endl;
	cin >> Var; // ������������� ����������

	cout << "�� ����� �����:" << Var << endl;

	cout << "������� ������ �����:" << endl;
	cin >> Var;

	cout << "������� ������ �����:" << endl;
	cin >> Var2;

	cout << "����� 1 = " << Var << endl << "����� 2 = " << Var2 << endl;

	cout << "������� 2 �����: ";
	cin >> Var >> Var2;

	cout << "����� 1 = " << Var << endl << "����� 2 = " << Var2 << endl;

	//���� �8 ���������

	//��������, ��������, ���������

	a = 6;
	cout << a << endl;
	a = -a;
	cout << a << endl;

	int g;

	g = a + t;

	cout << g << endl;

	cout << t + b << endl;

	cout << (2 + 2) * 2;

	//�������� ������� � 2
	//������� ��� ����� � �������� �� ����� �������� �����, ������������ � ������� �������������� ���� �����

	int ch, ch1, ch2;

	cout << "\n������� ��� �����:" << endl;
	cin >> ch >> ch1 >> ch2;

	cout << "����� ��� �������� �����:" << ch + ch1 + ch2 << "\n������������ ��� �������� �����:" << ch * ch1 * ch2 << "\n������� �������������� ��� �������� �����:" << (double)(ch + ch1 + ch2) / 3 << endl;



	//���� �9 ��������� � ���������


	a = 2;
	cout << a << endl;

	a++;					//	��������� �������
	cout << a << endl;

	a--;					// ������ �������
	cout << a << endl;

	b = ++a * a;

	//���� �10 ����������� �������������� ����� +=, -= � � �

	a += 20;				// ����������� ������ ��������, ����� �� ���� ���������, ������������ � �������.
	cout << a << endl;


	//���� �11 ���������� ��������.

	//��������� ���������:
	// < - ������
	// > - ������
	// <= - ������ ��� �����
	// >= - ������ ��� �����

	//��������� ���������.
	// == - �����
	// != - �� �����

	// ���������� ��������� � ������������� ��������.
	// && - �
	// || - ���
	// != - ��


	cout << (5 < 3) << endl;
	cout << (5 > 3) << endl;
	cout << (5 >= 3) << endl;
	cout << (5 <= 3) << endl;
	cout << (5 == 3) << endl;
	cout << (5 == 5) << endl;
	cout << (5 != 5) << endl;


	//���� �12
	//����������� ����������� ������ if - else if

	bool isRain = true;

	if (isRain)
	{
		cout << "��� �����, ������ ����" << endl;
	}

	else
	{
		cout << "����� ���, ���" << endl;
	}

	int a;
	cout << "������� �����: ";
	cin >> a;

	if (a >= 5)
	{
		cout << "����� ������ ���� ��� �����" << endl;
	}

	else
	{
		cout << "����� ������ ����" << endl;
	}



	//�������� ������� �3
	//�������� ���������, ����������� �����, ��������� � ���������� �� ��������.

	int a;

	cout << "������� ����� � �� �������� ��� �� ��������: ";
	cin >> a;

	if (a % 2 != 0) // ��� ��� if ( a % 2 ==0)
	{
		cout << "���� ����� �� ������";
	}
	else
	{
		cout << "���� ����� ������";
	}

	//���� �13 �������� �������������� ������ switch.

	switch (���������)
	{
	case ��������1:
		��������;
		break;
	case ��������2:
		��������2;
		break;
	case ��������3:
		��������3;
		break;
	default:
		�������� �� ���������, ���� �� ���������� �� ���� �� �������� ����.
		break;
	}


	//�������� ����������� ����� switch

	int a, b, c;

	cout << "\t\t\t�� ����������� ��������� \"�����������\"" << endl;
	cout << "\t\t������� ��� ����� � �������� ������ �������������� �������" << endl;

	cout << "\n������� ������ ��� �����: ";
	cin >> a >> b;

	cout << "\n�������� ������ �������������� �������: \n1)�������� \n2)��������� \n3)��������� \n4)������� \n5)������� ��������������\n" ;
	cin >> c;

	switch (c)
	{
	case 1:
		cout << "����� �����: " << a + b << endl;
		break;
	case 2:
		cout << "�������� �����: " << a - b << endl;
		break;
	case 3:
		cout << "������������ �����: " << a * b << endl;
		break;
	case 4:
		cout << "������� �����: " << double (a) / b << endl;
		break;
	case 5:
		cout << "������� �������������� �����: " << double (a + b) / 2 << endl;
		break;
	default:
		cout << "������ �������� ������, ������������� ���������" << endl;
			break;
	}
	*/

	//���� �14 ���� while

	/*
	while (�����������)
	{
		�������� ��� ����������;
	}

	int a = 0, b = 0;

	while (a<10)
	{
		cout << "���������� a = " << a << endl;
		a++;
	}

	while (b < 20)
	{
		cout << "���������� b = " << b << endl;
		b++;
	}


	//���� �15 ���� do while

	int a = 1;
	do
	{
		�������� ��� ����������;
	} while (�����������);

	int a = 18;
	do
	{
		cout << "���������� a = " << a << endl;
		a++;
	} while (a<20);

	������ ��(�� ���, ��� ����)
	int symbolCount;
	char sybol;
	int lineType;
	int index = 0;

	cout � "������� ���������� �������� � �����" � endl;
	cin � symbolCount;

	cout � "������ ������" � endl;
	cin � sybol;

	cout � "�������� ��� �����:" � endl
	� "1 - ������������ �����" � endl
	� "2 - �������������� �����" � endl;

	cin � lineType;

	if (lineType!=1 && lineType!=2 )
	{
	cout � "�� ���������� ��� �����!" � endl;
	return;
	}

	while (index < symbolCount)
	{
	if (lineType == 1)
	{
	cout � sybol � endl;
	}

	if (lineType == 2)
	{
	cout � sybol;
	}

	index++;
	}

	cout � endl � endl;
	}


	//1.����������� ���������, ������� ������� �� ����� ����� �� ��������. ����� ��������,
	//����� ������������ ������, � ����� ����� ����� - ������������ ��� ��������������-
	//��������� ������������.

	char sybol;
	int b, sybolCount, index = 0;
	cout << "\t\t    �� ����������� ��������� \"����� �� ��������\"" << endl;
	cout << "\t\t������� ������ � �������� ������ ���������� �����" << endl;

	cout << "\n������� ���������� ������� � �����: ";
	cin >> sybolCount;

	cout << "\n������� ������: ";
	cin >> sybol;

	cout << "\n�������� ������ ���������� �����: \n1)������������ \n2)�������������� \n";
	cin >> b;
	cout << "\n";

	switch (b)
	{
	case 1:
		while (index < sybolCount)
		{
			cout << sybol << endl;
			index++;
		}
		break;
	case 2:
		while (index < sybolCount)
		{
			cout << sybol;
			index++;
		}
		break;
	default:
		cout << "������ �������� ������, ������������� ���������" << endl;
		break;
	}

	cout << "\n";


	//2.�������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� �������������.

	int sum = 0;

	int rangeStart, rangeEnd;

	cout << "������� ������ ���������: ";
	cin >> rangeStart;

	cout << "������� ����� ���������:";
	cin >> rangeEnd;

		do
		{
			if(rangeStart %2 !=0)
			{
				sum += rangeStart;
			}

		rangeStart++;
	} while (rangeStart < rangeEnd);

	cout << "����� ���� ����� �������� ����� � ��������� ���������: " << sum << endl;
	

	//���� �16 ���� for

	//for (int i=0; -�������� �� ��, ����� ���������� ���������������� ���������� �����	
	//i<length; - �������� ������ ���� �������, �, ���� 	true,�� ���� ���������� �������� 		
	//i++ - ���������, ������� ��������� ����������) 

	for (int i = 0; i < 10; i++)
	{
		cout << "���������� i = " << i << endl;
	}

	//���� �17 ����, ����� ����� for 
	
	int i = 0;
	for ( ; i < 5; i++)							//������� ���������
	{
		cout << "���������� ������� ����� i = " << i << endl;
	}
	
	for ( ; i < 15; i++)
	{
		cout << "���������� ������� ����� i = " << i << endl;
	}
	
	for (; ;)
	{
		cout << "��������� ����" << endl;
	}
	
	{
		cout << "���������� i = " << i << endl;
		cout << "���������� j = " << j << endl;
	}
	

	//���� �18 �������� ����� "Brake"

	for (int i = 0; ; i++)
	{
		cout << "���������� i = " << i << endl;
		if (i==5510)
		{
			break;
		}
	}

	cout << "����� �����" << endl;
	
	
	int i = 1;
	while (true)
	{
		cout << "���������� i = " << i << endl;
		i++;
		if (i == 600)
		{
			break;
		}
	}

	
	//���� �19 �������� ����� "continue"
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		cout << "���������� i = " << i << endl;
	}
	*/
	//�������� �������. �������� ���������, ������� ������� �� ����� ������������� �������� *. 
	//������ � ������ ������� �������������.+
	
	int h, b;
	cout << "\t\t�� ����������� ��������� \"�������������\"" << endl;
	cout << "\t\t ������� ������ � ������ ��������������" << endl;

	cout << "\n������� ������ ��������������: ";
	cin >> h;

	cout << "\n������� ������ ��������������: ";
	cin >> b;
	
	cout << endl;

	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < b; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl;
	

	system("PAUSE");
}
