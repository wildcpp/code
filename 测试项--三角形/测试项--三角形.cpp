#include<iostream>
using namespace std;
int main() {
	int h;
	char s;
	cout << "请输入生成三角形的高" << " ";
	cin >> h;
	cout << "请输入用以生成三角形的字符" << " ";
	cin >> s;
	for (int i = 1; i <= h; i++)
	{
		cout << "\n";
		for (int j = 1; j <= i; j++)
		{
			cout << s;
		}
	}
	return 0;
}