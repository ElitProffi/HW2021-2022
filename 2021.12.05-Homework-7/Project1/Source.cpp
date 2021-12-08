#include "myLib.h"

using namespace std;

int main(int argc, char* argv[])
{
    int c = 0;
    int n = 0;
    int R = 0;
    setlocale(LC_ALL, "Russian");
    cout << "Список команд:" << endl;
    cout << "Счет количества шагов до единицы - введите 1" << endl;
    cout << "Нарисовать окружность - введите 2" << endl;
    cin >> c;
    if (c == 1)
    {
        cout << "Введите начальное число:" << endl;
        cin >> n;
        cout << Way_to_one(n, 0);
    }
    if (c == 2)
    {
        cout << "Введите радиус окружности:" << endl;
        cin >> R;
        circle(R);
    }
    return EXIT_SUCCESS;
}