#include <iostream>
#include <string>
#include <conio.h>																						//用于清屏的操作
using namespace std;

#define TEST01 "你听歌的时间比工作学习多吗？                                                "			//问题详情
#define TEST02 "你比较喜欢听……                                                            "
#define TEST02_1 "1.快拍的歌                                                                  "
#define TEST02_2 "2.慢拍的歌                                                                  "
#define TEST03 "你是男生还是女生？                                                          "
#define TEST03_1 "1.男生                                                                      "
#define TEST03_2 "2.女生                                                                      "
#define TEST04 "情歌是你的最爱歌曲类型吗？                                                  "
#define TEST05 "你认为周杰伦的风格？                                                        "
#define TEST05_1 "1.完美好听                                                                  "
#define TEST05_2 "2.受不了                                                                    "
#define TEST06 "听歌的时候，你都会把音响放到尽量大的音量吗？                                "
#define TEST07 "你喜欢听搞笑的歌曲吗？                                                      "
#define TEST08 "你曾经，或现在还是迷恋范晓萱的儿童歌曲吗？                                  "
#define TEST09 "你可以说自己不是五音不全(唱歌走调)吗？                                      "
#define TEST10 "你经常和朋友去唱卡拉ok吗？                                                  "
#define TEST11 "你知道“她扬起爱情胜利的旗帜，你让我选择继续爱你的方式？”是哪首歌曲里的吗？"
#define TEST12 "你听过“哈狗帮”的歌吗？                                                    "
#define TEST13 "英语歌曲中，你喜欢？                                                        "
#define TEST13_1 "1.女歌手的                                                                  "
#define TEST13_2 "2.男歌手的                                                                  "
#define TEST13_3 "3.自己觉得好听的，没有特定性别                                              "
#define TEST13_4 "4.不听英语歌                                                                "
#define TEST14 "你听外语歌的原因是？                                                        "
#define TEST14_1 "1.喜欢歌词                                                                  "
#define TEST14_2 "2.学习外语                                                                  "
#define TEST14_3 "3.听调子                                                                    "
#define TEST14_4 "4.电视剧的插曲，所以喜欢                                                    "
#define TEST15 "你爱听火暴的dj舞曲吗？                                                      "
#define TEST16 "听节奏感很强的歌曲时，你会不由自主地摇摆吗？                                "
#define TEST17 "钢琴曲?你对它的感觉是？                                                     "
#define TEST17_1 "1.幽雅                                                                      "
#define TEST17_2 "2.受不了                                                                    "
#define TEST18 "你听说过《黑色星期天》吗？                                                  "
#define TEST19 "你认为唱歌时穿什么样的衣服比较好？                                          "
#define TEST19_1 "1.暴露的                                                                    "
#define TEST19_2 "2.正常的                                                                    "
#define TEST19_3 "3.古典的                                                                    "
#define TEST20 "你会比较关注新出的音乐专辑吗？                                              "
#define TEST21 "你很怀念从前的老歌吗？                                                      "
#define TEST22 "如果让你创作歌曲，你会写？                                                  "
#define TEST22_1 "1.言情歌曲                                                                  "
#define TEST22_2 "2.民族歌曲                                                                  "
#define TEST22_3 "3.摇滚歌曲                                                                  "

#define NAMEA "类型A.完全消失清纯的感觉                                                    "			//结果类型
#define A_01 "你已经完全不会让人觉得清纯了，即使是你穿上非常可爱的衣服，有著无比天真的眼睛"
#define A_02 "和笑容。不过从你身上散发出来的气质与自信，所有人都会感觉到，清纯绝对不是属於"
#define A_03 "你的感觉。打扮上，你喜欢前卫，喜欢流行，喜欢另类，喜欢性感，有时候也喜欢装扮"
#define A_04 "清纯，仅仅因为好玩而已。不清纯并不是件不好的事情，只是说明你已经彻底的成熟，"
#define A_05 "完全成熟.....                                                               "
#define NAMEB "类型B.消失一半的清纯感觉                                                    "
#define B_01 "你属於非常非常正常的人类,如果你的年龄在15-30岁之间的话，你有的时候会显示出非"
#define B_02 "常清纯的一面，有时候处理事情的时候又显得格外的沈著冷静。你给人一种琢磨不透的"
#define B_03 "感觉，他们会觉得你有时候纯洁的就像一个天使，但有时候他们又觉得你疯狂的像个恶"
#define B_04 "魔。在现在的社会交际圈里，你这种性格是非常的吃得开 的好性格，继续加油哦。   "
#define NAMEC "类型C.仅限外表清纯的人类                                                    "
#define C_01 "说你清纯，不得不说你有天生幸福的外表。在别人见到你的时候会觉得你的灵魂和你的"
#define C_02 "人乾净透明的像一个孩子，甚至被你的那种清纯而吸引。可是实际上，你的心灵只有一"
#define C_03 "种沈著冷静的成熟味道，和你的外表正好成为鲜明的对比。你在人群中很有优势的地方"
#define C_04 "是，你可以扮演任何角色，清纯或者成熟稳重是你自己的选择，看你的想法了哦。    "
#define NAMED "类型D.从里到外都清纯的感觉                                                  "
#define D_01 "你是那种从内心到外表都清纯的人类，因为你从小就把自己保护的很好，不让外界的世"
#define D_02 "俗侵犯了你自己的内心和你自己的性格、人格。与其参与到复杂的人际纷争中去，你宁"
#define D_03 "可自己悄悄的坐在角落里听著流行歌曲。现在人群中你这种性格的人少得不能再少了，"
#define D_04 "所以你将得到很多异性的倾心，想一想，谁不想要一个脱离世俗的伴侣呢。          "

#define CHAR "                      ********************************                      "
#define TITLE "                      *   心理测试：测试你的清纯度   *                      "
#define START "                            按任意键开始测试...                             "
#define LINE "══════════════════════════════════════"
#define FULL "                                                                            "				//令FULL表示76个空格
#define YES "1.yes                                                                       "
#define NO "2.no                                                                        "
#define ERROR "                 ！您输入的不是正确的选项，按任意键跳回该题                 "

class answerType
{
public:
	answerType(string, string, string, string, string, string);											//构造函数，初始化answerType对象
	void typeChangeGrid();																				//修改部分框架内容
private:
	string typeName;																					//类型名称
	string typeDetail[5];																				//类型详情
};

class Test																								//题目类
{
public:
	Test(string, string, string, string, string, int, int, int, int, int);								//构造函数,初始化Test对象
	void testing(Test*,answerType*);																	//答题系统,具体的题目
	void testChangeGrid();																				//修改部分框架内容
private:
	string question;																					//测试问题
	string answerOption[4];																				//回答选项
	int jumpOption[4];																					//跳转选项
	int number;																							//题号
};

string grid[9][3];																						//公用的框架

Test* inputTest();																						//初始化测试题目
answerType* inputType();																				//初始化结果类型
void setGrid();																							//设置框架
void displayGrid();																						//输出框架
void changeGrid();																						//修改部分框架内容
void startInterface();																					//程序初始界面

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

void Test::testChangeGrid()																				//修改部分框架内容
{
	grid[1][1] = question;
	grid[2][1] = FULL;
	grid[3][1] = answerOption[0];
	grid[4][1] = answerOption[1];
	grid[5][1] = answerOption[2];
	grid[6][1] = answerOption[3];
	grid[7][1] = FULL;
}

Test* inputTest()																						//初始化测试题目
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

answerType::answerType(string s, string s1, string s2, string s3, string s4, string s5)					//构造函数，初始化answerType对象
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

answerType* inputType()																					//初始化结果类型
{
	static answerType answer[4] = {
		answerType(NAMEA, A_01, A_02, A_03, A_04, A_05),
		answerType(NAMEB, B_01, B_02, B_03, B_04, FULL),
		answerType(NAMEC, C_01, C_02, C_03, C_04, FULL),
		answerType(NAMED, D_01, D_02, D_03, D_04, FULL)
	};
	return answer;
}

void setGrid()																							//初始化框架
{
	grid[0][0] = "╔";
	grid[8][0] = "╚";
	grid[0][2] = "╗";
	grid[8][2] = "╝";
	grid[0][1] = grid[8][1] = LINE;
	for (int i = 1; i <= 7; i++)
		grid[i][0] = grid[i][2] = "║";
	for (int j = 1; j <= 7; j++)
		grid[j][1] = FULL;
}

void displayGrid()																						//输出框架
{
	for (int i = 0; i <= 8; i++)
	for (int j = 0; j <= 2; j++)
		cout << grid[i][j];
}

void changeGrid()																						//修改部分框架内容
{
	grid[2][1] = CHAR;
	grid[3][1] = TITLE;
	grid[4][1] = CHAR;
	grid[6][1] = START;
}

void startInterface()																					//程序初始界面
{
	setGrid();
	changeGrid();
	displayGrid();
	getch();
	system("cls");
}

void Test::testing(Test*test,answerType*answer)															//答题系统
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
		if (grid[5][1] == FULL)																				//判断有多少个选项
		cout << "请选择1/2,按enter确认:";
		else
		{
			if (grid[6][1] == FULL)
				cout << "请选择1/2/3,按enter确认:";
			else
				cout << "请选择1/2/3/4,按enter确认:";
		}
		cin >> i;
		system("cls");																						//清屏
		if (grid[1][1] == TEST19)																			//最后几题由于要跳转到answerType，单独写switch
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
