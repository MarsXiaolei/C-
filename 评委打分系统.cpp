#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <ctime>

using namespace std;

/*
ʵ�ֹ��ܣ�
��5��ѡ��ABCDE,10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ͷ֣�ȡƽ����
ʹ��vector��deque����
*/

class Player 
{
public:
	Player(string nmae,int score)
	{
		this->m_Name= nmae;
		this->m_Score= score;
	}

	string m_Name;
	int m_Score;
};

void createPlayer(vector<Player> &vec)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5;i++)
	{
		string name = "ѡ��";
		name += nameSeed[i]; 

		int score = 0;
		Player p(name,score); 
		vec.push_back(p);
	}
}

void setScore(vector<Player> &vec)
{
	for (vector<Player>::iterator it = vec.begin(); it != vec.end();it++)
	{
		deque<int> d;
		for (int i = 0; i < 10;i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		cout << "ѡ�֣�" << it->m_Name << "�Ĵ�������" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end();dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		//����
		sort(d.begin(),d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//��ȡ�ܷ�
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}

		//��ȡƽ����
		int average = static_cast<int>(sum / d.size());
		it->m_Score = average;
	}
}

void showScore(vector<Player> &vec)
{
	for (vector<Player>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << "������" << it->m_Name << "ƽ��������" << it->m_Score << endl;
	}
}

int main()
{
	//�������������
	srand((unsigned int)time(NULL));

	//1�����ѡ������
	vector<Player> player;

	//2������5��ѡ��
	createPlayer(player);

	//3�����
	setScore(player);

	//��ʾ�÷�
	showScore(player);

	//����
	for (vector<Player>::iterator it = player.begin(); it != player.end();it++)
	{
		cout << "������" << it->m_Name
			<<"	"
			<< "������" << it->m_Score << endl;
	}

	system("pause");
	return 0;
}