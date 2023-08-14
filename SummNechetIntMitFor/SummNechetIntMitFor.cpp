#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");
    int n, s = 0;
    cout << "Введите верхнюю границу слагаемых чисел: ";
    cin >> n;
    for (int k = 0;k <= n;k++) {
        if (k % 2 != 0) {
            s += k;
        }
    }
    cout << "Сумма натуральных нечётных чисел от 0 до " << n << ": " << s << endl;
    // Задержка окна консоли:
    system("pause > nul");
    return 0;
}
