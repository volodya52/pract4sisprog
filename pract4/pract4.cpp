// pract4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#define m sin(3*x)
#define b f*(x,y,z)
#define w (x,y)
#define f (x,y,z)
#define z w*b*(x,y)

int main()
{
    int a;
    std::cout << "Select task\n";
    std::cin >> a;
    if (a == 1) 
    {
        printf("Task 1");
        double x, result;
        printf("Enter x\n");
        std::cin >> x;
        result = sqrt((3 * pow(m, 5) + 2) - 2 * pow(m, 3)) / 3 * sqrt(m);
        std::cout << result;
    }
    else if (a == 2)
    {
        printf("Task 2");
        double x = 1.26, y = 3.69,result1=0,result2=0;
        result1 = pow(x, 3) + sqrt(x + y) / (x + pow(y, 2));
        //result2 = pow(3, sqrt(sqrt(x * y) - pow(2, x))) / 1 + pow(z, 2);
    }
    else if (a == 3) {
        double alpha, beta, y = 0;;
        printf("Enter Alpha\n");
        std::cin >> alpha;
        printf("Enter Beta\n");
        std::cin >> beta;
        y = pow(2, sin(-4)) * (alpha - beta / 2) * cos(alpha + beta);
        std::cout << y;
    }
    else if (a > 3) {
        printf("Error");
    }
   
    
    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
