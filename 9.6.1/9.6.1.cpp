// 9.6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "RUS");
    std::string text;
    std::string word;

    //std::cin >> text;

    std::getline(std::cin, text);
   // std::cin.ignore();
   // std::getline(std::cin, word);
    std::cin >> word;

    int end = 0;

    for (int startPos = 0; startPos < text.length(); startPos++)
    {


        bool checkbox = true;
        for (int i = 0; i < word.length(); i++)
        {
            if (i + startPos >= text.length()
                || word[i] != text[i + startPos])
            {
                checkbox = false;
                break;
            }

        }
        if (checkbox) {
            end++;
        }
        // std::cout << end<< '\n';
    }
    if (text.length() == word.length() * end)
    {
        std::cout << "Yeah\n";
    }
    else
    {
        std::cout << "No\n";
    }
    std::cout << end;


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
