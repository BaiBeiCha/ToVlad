#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getMode()
{
	cout << "Enter which mode app need to work: \n1\n2\n";
	int mode;
	cin >> mode;
	return mode;
}

string firstMode(int i)
{
	string path = "povelitel ershikov ";
	path.append(to_string(i));
	path.append(".txt");
	return path;
}

string secondMode(int i)
{
	string path = "C:\\Program Files\\povelitel ershikov ";
	path.append(to_string(i));
	path.append(".txt");
	return path;
}


int main()
{
    cout << "Hello World!\n";

	int mode = getMode();

	for (int i = 0; i < INT16_MAX; i++)
	{
		string fileName;

		switch (mode)
		{
		case 1:
			fileName = firstMode(i);
			break;
		case 2:
			fileName = secondMode(i);
			break;
		default:
			cout << "Nu ti i loh >>> mode 2";
			break;
		}

		ofstream file;
		file.open(fileName);
		file << "合肥哦i委屈你和去海南富婆i去海南皮肤；哦i富农课外班否为白佛欧服为北方购入不过为给我换个配合各位韩国而我国和温哥华陪我刚好我俄国和而我国二位好个屁外观和物品IP规划为脾气IP规划IP把那个看来你公婆卡给你改变你货币规划破格就弄屁股琥珀金给老婆皇宫股票别弄不能够破格浓";
		file.close();
	}
}