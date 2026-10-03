#include<iostream>
using namespace std;
int main() {
	int a , x;
	char s;
	cout << "请输入生成正方形的边长" << " ";
	cin >> a;
	cout << "实心(0)或者空心(1)" << " ";
	cin >> x;
	cout << "请输入用以生成正方形的字符" << " ";
	cin >> s;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (x == 0)
            {
              
                cout << s;
            }
            else
            {
                
                if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
                    cout << s;
                else
                    cout << " ";
            }
        }
        cout << "\n";
    }
	return 0;
}