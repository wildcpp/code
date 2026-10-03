#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

// 菜单选项
const string menu[] = {
    "加法",
    "减法",
    "乘法",
    "除法",
    "sin（正弦，输入角度）",
    "cos（余弦，输入角度）",
    "平方根"
};
const int MENU_COUNT = sizeof(menu) / sizeof(menu[0]);

// 清屏函数
void ClearScreen()
{
    system("cls");
}

int main()
{
    int select = 0;
    bool running = true;

    while (running)
    {
        ClearScreen();
        // 标题
        cout << "========== 终端交互式计算器 ==========\n\n";

        // 打印菜单
        for (int i = 0; i < MENU_COUNT; ++i)
        {
            if (i == select)
            {
                cout << "--> " << menu[i] << endl;
            }
            else
            {
                cout << "    " << menu[i] << endl;
            }
        }
        cout << "\n【↑↓切换选项 | 回车确认执行 | ESC退出】\n";

        int key = _getch();

        // 方向键扩展键 0xE0 = 224
        if (key == 224)
        {
            key = _getch();
            switch (key)
            {
            case 72: // ↑上
                if (select > 0) select--;
                break;
            case 80: // ↓下
                if (select < MENU_COUNT - 1) select++;
                break;
            }
        }
        else if (key == 13) // 回车键
        {
            ClearScreen();
            double a, b, res;
            cout << "========== 运算结果 ==========\n\n";
            switch (select)
            {
            case 0: // 加法
                cout << "输入第一个数字："; cin >> a;
                cout << "输入第二个数字："; cin >> b;
                res = a + b;
                cout << a << " + " << b << " = " << res << endl;
                break;
            case 1: // 减法
                cout << "输入第一个数字："; cin >> a;
                cout << "输入第二个数字："; cin >> b;
                res = a - b;
                cout << a << " - " << b << " = " << res << endl;
                break;
            case 2: // 乘法
                cout << "输入第一个数字："; cin >> a;
                cout << "输入第二个数字："; cin >> b;
                res = a * b;
                cout << a << " × " << b << " = " << res << endl;
                break;
            case 3: // 除法
                cout << "输入被除数："; cin >> a;
                cout << "输入除数："; cin >> b;
                if (b == 0)
                {
                    cout << "错误：除数不能为0！\n";
                }
                else
                {
                    res = a / b;
                    cout << a << " ÷ " << b << " = " << res << endl;
                }
                break;
            case 4: // sin 角度转弧度
                cout << "输入角度值："; cin >> a;
                res = sin(a * 3.14 / 180.0);
                cout << "sin(" << a << "°) = " << res << endl;
                break;
            case 5: // cos
                cout << "输入角度值："; cin >> a;
                res = cos(a * 3.14 / 180.0);
                cout << "cos(" << a << "°) = " << res << endl;
                break;
            case 6: // 平方根
                cout << "输入数字："; cin >> a;
                if (a < 0)
                {
                    cout << "错误：负数无法开平方根！\n";
                }
                else
                {
                    res = sqrt(a);
                    cout << "√" << a << " = " << res << endl;
                }
                break;
            }
            cout << "\n按任意键返回菜单...";
            _getch();
        }
        else if (key == 27) // ESC键
        {
            running = false;
        }
    }

    ClearScreen();
    cout << "已退出" << endl;
    return 0;
}