#include <iostream>
#include <vector>

int main()
{
    int a[4][4];
    int b[4][4];
    int c[4][4];

    std::cout << '\n';
    std::cout << "Ввод матрицы" << '\n';

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //std::cout << "Input the number a: ";
            std::cin >> a[i][j];
            //std::cout << "Input the number b: ";
            std::cin >> b[i][j];
        }
    }

    std::cout << '\n';
    std::cout << "Уманажение матрицы" << '\n';

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) 
        {
            int sum = 0;
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    std::cout << '\n';
    std::cout << "Вывод матрицы" << '\n';

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << c[i][j] << " ";
        }
        std::cout << '\n';
    }
}

