#include <iostream>
#include <string>
#include <conio.h>																						//���������Ĳ���
using namespace std;

#define TEST01 "�������ʱ��ȹ���ѧϰ����                                                "			//��������
#define TEST02 "��Ƚ�ϲ��������                                                            "
#define TEST02_1 "1.���ĵĸ�                                                                  "
#define TEST02_2 "2.���ĵĸ�                                                                  "
#define TEST03 "������������Ů����                                                          "
#define TEST03_1 "1.����                                                                      "
#define TEST03_2 "2.Ů��                                                                      "
#define TEST04 "�������������������                                                  "
#define TEST05 "����Ϊ�ܽ��׵ķ��                                                        "
#define TEST05_1 "1.��������                                                                  "
#define TEST05_2 "2.�ܲ���                                                                    "
#define TEST06 "�����ʱ���㶼�������ŵ��������������                                "
#define TEST07 "��ϲ������Ц�ĸ�����                                                      "
#define TEST08 "�������������ڻ�������������Ķ�ͯ������                                  "
#define TEST09 "�����˵�Լ�����������ȫ(�����ߵ�)��                                      "
#define TEST10 "�㾭��������ȥ������ok��                                                  "
#define TEST11 "��֪������������ʤ�������ģ�������ѡ���������ķ�ʽ���������׸��������"
#define TEST12 "��������������ĸ���                                                    "
#define TEST13 "Ӣ������У���ϲ����                                                        "
#define TEST13_1 "1.Ů���ֵ�                                                                  "
#define TEST13_2 "2.�и��ֵ�                                                                  "
#define TEST13_3 "3.�Լ����ú����ģ�û���ض��Ա�                                              "
#define TEST13_4 "4.����Ӣ���                                                                "
#define TEST14 "����������ԭ���ǣ�                                                        "
#define TEST14_1 "1.ϲ�����                                                                  "
#define TEST14_2 "2.ѧϰ����                                                                  "
#define TEST14_3 "3.������                                                                    "
#define TEST14_4 "4.���Ӿ�Ĳ���������ϲ��                                                    "
#define TEST15 "�㰮���𱩵�dj������                                                      "
#define TEST16 "������к�ǿ�ĸ���ʱ����᲻��������ҡ����                                "
#define TEST17 "������?������ĸо��ǣ�                                                     "
#define TEST17_1 "1.����                                                                      "
#define TEST17_2 "2.�ܲ���                                                                    "
#define TEST18 "����˵������ɫ�����졷��                                                  "
#define TEST19 "����Ϊ����ʱ��ʲô�����·��ȽϺã�                                          "
#define TEST19_1 "1.��¶��                                                                    "
#define TEST19_2 "2.������                                                                    "
#define TEST19_3 "3.�ŵ��                                                                    "
#define TEST20 "���ȽϹ�ע�³�������ר����                                              "
#define TEST21 "��ܻ����ǰ���ϸ���                                                      "
#define TEST22 "������㴴�����������д��                                                  "
#define TEST22_1 "1.�������                                                                  "
#define TEST22_2 "2.�������                                                                  "
#define TEST22_3 "3.ҡ������                                                                  "

#define NAMEA "����A.��ȫ��ʧ�崿�ĸо�                                                    "			//�������
#define A_01 "���Ѿ���ȫ�������˾����崿�ˣ���ʹ���㴩�Ϸǳ��ɰ����·��������ޱ�������۾�"
#define A_02 "��Ц�ݡ�������������ɢ�����������������ţ������˶���о������崿���Բ������"
#define A_03 "��ĸо�������ϣ���ϲ��ǰ����ϲ�����У�ϲ�����࣬ϲ���ԸУ���ʱ��Ҳϲ��װ��"
#define A_04 "�崿��������Ϊ������ѡ����崿�����Ǽ����õ����飬ֻ��˵�����Ѿ����׵ĳ��죬"
#define A_05 "��ȫ����.....                                                               "
#define NAMEB "����B.��ʧһ����崿�о�                                                    "
#define B_01 "����춷ǳ��ǳ�����������,������������15-30��֮��Ļ������е�ʱ�����ʾ����"
#define B_02 "���崿��һ�棬��ʱ���������ʱ�����Եø���������侲�������һ����ĥ��͸��"
#define B_03 "�о������ǻ��������ʱ�򴿽�ľ���һ����ʹ������ʱ�������־�������������"
#define B_04 "ħ�������ڵ���ύ��Ȧ��������Ը��Ƿǳ��ĳԵÿ� �ĺ��Ը񣬼�������Ŷ��   "
#define NAMEC "����C.��������崿������                                                    "
#define C_01 "˵���崿�����ò�˵���������Ҹ�������ڱ��˼������ʱ����������������"
#define C_02 "��Ǭ��͸������һ�����ӣ���������������崿������������ʵ���ϣ��������ֻ��һ"
#define C_03 "�������侲�ĳ���ζ���������������ó�Ϊ�����ĶԱȡ�������Ⱥ�к������Ƶĵط�"
#define C_04 "�ǣ�����԰����κν�ɫ���崿���߳������������Լ���ѡ�񣬿�����뷨��Ŷ��    "
#define NAMED "����D.���ﵽ�ⶼ�崿�ĸо�                                                  "
#define D_01 "�������ִ����ĵ�����崿�����࣬��Ϊ���С�Ͱ��Լ������ĺܺã�����������"
#define D_02 "���ַ������Լ������ĺ����Լ����Ը��˸�������뵽���ӵ��˼ʷ�����ȥ������"
#define D_03 "���Լ����ĵ����ڽ������������и�����������Ⱥ���������Ը�����ٵò��������ˣ�"
#define D_04 "�����㽫�õ��ܶ����Ե����ģ���һ�룬˭����Ҫһ���������׵İ����ء�          "

#define CHAR "                      ********************************                      "
#define TITLE "                      *   ������ԣ���������崿��   *                      "
#define START "                            ���������ʼ����...                             "
#define LINE "�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T"
#define FULL "                                                                            "				//��FULL��ʾ76���ո�
#define YES "1.yes                                                                       "
#define NO "2.no                                                                        "
#define ERROR "                 ��������Ĳ�����ȷ��ѡ�����������ظ���                 "

class answerType
{
public:
	answerType(string, string, string, string, string, string);											//���캯������ʼ��answerType����
	void typeChangeGrid();																				//�޸Ĳ��ֿ������
private:
	string typeName;																					//��������
	string typeDetail[5];																				//��������
};

class Test																								//��Ŀ��
{
public:
	Test(string, string, string, string, string, int, int, int, int, int);								//���캯��,��ʼ��Test����
	void testing(Test*,answerType*);																	//����ϵͳ,�������Ŀ
	void testChangeGrid();																				//�޸Ĳ��ֿ������
private:
	string question;																					//��������
	string answerOption[4];																				//�ش�ѡ��
	int jumpOption[4];																					//��תѡ��
	int number;																							//���
};

string grid[9][3];																						//���õĿ��

Test* inputTest();																						//��ʼ��������Ŀ
answerType* inputType();																				//��ʼ���������
void setGrid();																							//���ÿ��
void displayGrid();																						//������
void changeGrid();																						//�޸Ĳ��ֿ������
void startInterface();																					//�����ʼ����

int main()
{
	Test*test = inputTest();
	answerType*answer = inputType();
	startInterface();
	test[1].testing(test,answer);
	getch();
	return 0;
}

Test::Test(string s, string s1, string s2, string s3, string s4, int i1, int i2, int i3, int i4, int i5)
{
	question = s;
	answerOption[0] = s1;
	answerOption[1] = s2;
	answerOption[2] = s3;
	answerOption[3] = s4;
	jumpOption[0] = i1;
	jumpOption[1] = i2;
	jumpOption[2] = i3;
	jumpOption[3] = i4;
	number = i5;
}

void Test::testChangeGrid()																				//�޸Ĳ��ֿ������
{
	grid[1][1] = question;
	grid[2][1] = FULL;
	grid[3][1] = answerOption[0];
	grid[4][1] = answerOption[1];
	grid[5][1] = answerOption[2];
	grid[6][1] = answerOption[3];
	grid[7][1] = FULL;
}

Test* inputTest()																						//��ʼ��������Ŀ
{
	static Test test[23] = {
		Test(FULL, FULL, ERROR, FULL, FULL, 0, 0, 0, 0, 0),
		Test(TEST01, YES, NO, FULL, FULL, 2, 3, 1, 1, 1),
		Test(TEST02, TEST02_1, TEST02_2, FULL, FULL, 5, 4, 2, 2, 2),
		Test(TEST03, TEST03_1, TEST03_2, FULL, FULL, 7, 4, 3, 3, 3),
		Test(TEST04, YES, NO, FULL, FULL, 7, 6, 4, 4, 4),
		Test(TEST05, TEST05_1, TEST05_2, FULL, FULL, 6, 8, 5, 5, 5),
		Test(TEST06, YES, NO, FULL, FULL, 10, 9, 6, 6, 6),
		Test(TEST07, YES, NO, FULL, FULL, 8, 9, 7, 7, 7),
		Test(TEST08, YES, NO, FULL, FULL, 13, 10, 8, 8, 8),
		Test(TEST09, YES, NO, FULL, FULL, 11, 13, 9, 9, 9),
		Test(TEST10, YES, NO, FULL, FULL, 12, 11, 10, 10, 10),
		Test(TEST11, YES, NO, FULL, FULL, 18, 12, 11, 11, 11),
		Test(TEST12, YES, NO, FULL, FULL, 13, 16, 12, 12, 12),
		Test(TEST13, TEST13_1, TEST13_2, TEST13_3, TEST13_4, 14, 16, 17, 15, 13),
		Test(TEST14, TEST14_1, TEST14_2, TEST14_3, TEST14_4, 17, 18, 16, 19, 14),
		Test(TEST15, YES, NO, FULL, FULL, 16, 17, 15, 15, 15),
		Test(TEST16, YES, NO, FULL, FULL, 19, 18, 16, 16, 16),
		Test(TEST17, TEST17_1, TEST17_2, FULL, FULL, 21, 20, 17, 17, 17),
		Test(TEST18, YES, NO, FULL, FULL, 22, 19, 18, 18, 18),
		Test(TEST19, TEST19_1, TEST19_2, TEST19_3, FULL, 19, 19, 20, 19 ,19),
		Test(TEST20, YES, NO, FULL, FULL, 20, 20, 20, 20, 20),
		Test(TEST21, YES, NO, FULL, FULL, 21, 22, 21, 21, 21),
		Test(TEST22, TEST22_1, TEST22_2, TEST22_3, FULL, 22, 22, 22, 22, 22)
	};
	return test;
}

answerType::answerType(string s, string s1, string s2, string s3, string s4, string s5)					//���캯������ʼ��answerType����
{
	typeName = s;
	typeDetail[0] = s1;
	typeDetail[1] = s2;
	typeDetail[2] = s3;
	typeDetail[3] = s4;
	typeDetail[4] = s5;
}

void answerType::typeChangeGrid()
{
	grid[1][1] = typeName;
	grid[2][1] = FULL;
	grid[3][1] = typeDetail[0];
	grid[4][1] = typeDetail[1];
	grid[5][1] = typeDetail[2];
	grid[6][1] = typeDetail[3];
	grid[7][1] = typeDetail[4];
}

answerType* inputType()																					//��ʼ���������
{
	static answerType answer[4] = {
		answerType(NAMEA, A_01, A_02, A_03, A_04, A_05),
		answerType(NAMEB, B_01, B_02, B_03, B_04, FULL),
		answerType(NAMEC, C_01, C_02, C_03, C_04, FULL),
		answerType(NAMED, D_01, D_02, D_03, D_04, FULL)
	};
	return answer;
}

void setGrid()																							//��ʼ�����
{
	grid[0][0] = "�X";
	grid[8][0] = "�^";
	grid[0][2] = "�[";
	grid[8][2] = "�a";
	grid[0][1] = grid[8][1] = LINE;
	for (int i = 1; i <= 7; i++)
		grid[i][0] = grid[i][2] = "�U";
	for (int j = 1; j <= 7; j++)
		grid[j][1] = FULL;
}

void displayGrid()																						//������
{
	for (int i = 0; i <= 8; i++)
	for (int j = 0; j <= 2; j++)
		cout << grid[i][j];
}

void changeGrid()																						//�޸Ĳ��ֿ������
{
	grid[2][1] = CHAR;
	grid[3][1] = TITLE;
	grid[4][1] = CHAR;
	grid[6][1] = START;
}

void startInterface()																					//�����ʼ����
{
	setGrid();
	changeGrid();
	displayGrid();
	getch();
	system("cls");
}

void Test::testing(Test*test,answerType*answer)															//����ϵͳ
{
	testChangeGrid();
	displayGrid();
	int i;
	if (grid[4][1] == ERROR)
	{
		getch();
		system("cls");
	}
	else
	{
		if (grid[5][1] == FULL)																				//�ж��ж��ٸ�ѡ��
		cout << "��ѡ��1/2,��enterȷ��:";
		else
		{
			if (grid[6][1] == FULL)
				cout << "��ѡ��1/2/3,��enterȷ��:";
			else
				cout << "��ѡ��1/2/3/4,��enterȷ��:";
		}
		cin >> i;
		system("cls");																						//����
		if (grid[1][1] == TEST19)																			//���������Ҫ��ת��answerType������дswitch
		{
			switch (i)
			{
				case 1:answer[0].typeChangeGrid(); displayGrid();break;
				case 2:answer[2].typeChangeGrid(); displayGrid();break;
				case 3:test[jumpOption[2]].testing(test,answer);break;
				default:test[0].testing(test,answer);
			}
		}
		else if (grid[1][1] == TEST20)
		{
			switch (i)
			{
				case 1:answer[1].typeChangeGrid(); displayGrid();break;
				case 2:answer[2].typeChangeGrid(); displayGrid();break;
				default:test[0].testing(test,answer);test[number].testing(test,answer);
			}
		}
		else if (grid[1][1] == TEST21)
		{
			switch (i)
			{
				case 1:answer[3].typeChangeGrid(); displayGrid();break;
				case 2:test[jumpOption[1]].testing(test, answer);break;
				default:test[0].testing(test,answer);test[number].testing(test,answer);
			}
		}
		else if (grid[1][1] == TEST22)
		{
			switch (i)
			{
				case 1:answer[1].typeChangeGrid(); displayGrid();break;
				case 2:answer[3].typeChangeGrid(); displayGrid();break;
				case 3:answer[2].typeChangeGrid(); displayGrid();break;
				default:test[0].testing(test,answer);test[number].testing(test,answer);
			}
		}
		else
		{
			switch (i)
			{
				case 1:test[jumpOption[0]].testing(test,answer);break;
				case 2:test[jumpOption[1]].testing(test,answer);break;
				case 3:if(jumpOption[2] == number)
					   {
						   test[0].testing(test,answer);test[number].testing(test,answer);break;
					   }
					   else
					   {
						   test[jumpOption[2]].testing(test,answer);break;
					   }
				case 4:if(jumpOption[2] == number)
					   {
						   test[0].testing(test,answer);test[number].testing(test,answer);break;
					   }
					   else
					   {
						   test[jumpOption[3]].testing(test,answer);break;
					   }
				default:test[0].testing(test,answer);test[number].testing(test,answer);
			}
		}
	}
}
