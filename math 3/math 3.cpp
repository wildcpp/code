#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int s, z, un, pw, ui, pi;
	double a, b;
	un = 12345;
	pw = 54321;

	cout << "-----MATH 3-----" << "\n";
	cout << "指令表：" << "\n";
	cout << "0 加法" << "\n";
	cout << "1 减法" << "\n";
	cout << "2 乘法" << "\n";
	cout << "3 除法" << "\n";
	cout << "4 sin" << "\n";
	cout << "5 cos" << "\n";
	cout << "6 exp" << "\n";
	cout << "7 log" << "\n";
	cout << "8 平方根" << "\n";
	cout << "9 退出" << "\n";
	cout << "请登录" << "\n";
	cout << "用户名" << " ";
	cin >> ui;
	cout << "\n";
	cout << "密码" << " ";
	cin >> pi;
	cout << "\n";
	if (ui == un && pi == pw)
	{
		cout << "登录成功" << "\n";
		while (true)
		{
			cout << "请输入指令" << " ";
			cin >> s;
			if (s == 0)
			{
				cout << "加法" << "\n";
				cin >> a >> b;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << a << "+" << b << "=" << a + b << "\n";
				}
			}
			if (s == 1)
			{
				cout << "减法" << "\n";
				cin >> a >> b;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << a << "-" << b << "=" << a - b << "\n";
				}
			}
			if (s == 2)
			{
				cout << "乘法" << "\n";
				cin >> a >> b;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << a << "*" << b << "=" << a * b << "\n";
				}
			}
			if (s == 3)
			{
				cout << "除法" << "\n";
				cin >> a >> b;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << a << "/" << b << "=" << a / b;
				}
			}
			if (s == 4)
			{
				cout << "sin" << "\n";
				cin >> a;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << "sin(" << a << ")=" << sin(a);
				}
			}
			if (s == 5)
			{
				cout << "cos" << "\n";
				cin >> a;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << "cos(" << a << ")=" << cos(a);
				}
			}
			if (s == 6)
			{
				cout << "exp" << "\n";
				cin >> a;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << "exp(" << a << ")=" << exp(a);
				}
			}
			if (s == 7)
			{
				cout << "log" << "\n";
				cin >> a;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << "log(" << a << ")=" << log(a);
				}
			}
			if (s == 8)
			{
				cout << "平方根" << "\n";
				cin >> a;
				cout << "输入 0 确认" << " ";
				cin >> z;
				if (z == 0)
				{
					cout << "结果为" << sqrt(a);
				}
			}
			if (s == 9)
			{
				cout << "确认退出？" << "\n";
				cin >> z;
				if (z == 0)
				{
					goto end_loop;
				}
			}
		}

	}
	else
	{
		cout << "登录失败" << "\n";
	}
end_loop:
	cout << "已退出";
	return 0;
}