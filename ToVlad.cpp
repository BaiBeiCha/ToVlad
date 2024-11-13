#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getMode()
{
	cout << "Enter which mode app need to work: \n1\n2\n";
	int mode;
	std::cin >> mode;
	return mode;
}

string firstMode(int i1, int i2)
{
	string path = "povelitel ershikov ";
	path.append(to_string(i1));
	path.append("-");
	path.append(to_string(i2));
	path.append(".txt");
	return path;
}

string secondMode(int i1, int i2)
{
	string path = "C:\\Program Files\\povelitel ershikov ";
	path.append(to_string(i1));
	path.append("-");
	path.append(to_string(i2));
	path.append(".txt");
	return path;
}


int main()
{
	int mode = getMode();

	int amount;
	cout << "Enter an amount of proccesses: ";
	cin >> amount;
	for (int i1 = 0; i1 < amount; i1++)
	{
		cout << "Procces: " << i1 << endl;
		for (int i2 = 0; i2 < INT16_MAX; i2++) 
		{
			cout << "Modul: " << i2 << endl;
			string fileName;

			switch (mode)
			{
			case 1:
				fileName = firstMode(i1, i2);
				break;
			case 2:
				fileName = secondMode(i1, i2);
				break;
			default:
				cout << "Nu ti i loh >>> mode 2";
				break;
			}

			ofstream file;
			file.open(fileName);
			file << "合肥哦i委屈你和去海南富婆i去海南皮肤；哦i富农课外班否为白佛欧服为北方购入不过为给我换个配合各位韩国而我国和温哥华陪我刚好我俄国和而我国二位好个屁外观和物品IP规划为脾气IP规划IP把那个看来你公婆卡给你改变你货币规划破格就弄屁股琥珀金给老婆皇宫股票别弄不能够破格浓";
			file.close();

			if (i2 % 1000 == 0)
			{
				cout << "Was complite about " << 100.0 * i2 / INT16_MAX << "%!\n";
			}
		}
	}

	cout << "Was complite 100%!\n\nSuccess!\nMade to Vlad" << endl;
	char c;
	std::cin >> c;
}

//TODO сделать больше файлов