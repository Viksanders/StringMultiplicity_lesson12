#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Utilities.h"

/*
* ����� ��� �� ������� ����� ���� �������� �������, ������� ��������� ������ � �����, ������ �������������� ��������� ������
* �� ��������� � ������ ���������� ���� �� � ���� �� ���� ������� � ���������, �� ���������� ���, ��� � ������ ������� �������,
* ������� ��������� ������ � ����� ���������. �������, ��� �� ������������.
* � ��������, ��������� �� ������� �������� ����������� � ������ ������ � ��������� ������� � ������ Utilities.h
* ������ ���������� ������� ����������� ���������.
*/

int main()
{
    /*
    std::vector<int> div;
    int number = 300212;
    FindDividers(number,div);

    printArr(div);

    std::vector<int> divAll;
    FindAllDividers(div,divAll);
    printArr(divAll);
    */

    std::string test_1 = "qwertyuiop[]asdfghjkl;'zxcvbnm,./1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./1234567890-=";
    std::string test_2 = "abbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbb";
    std::string test_3 = "abcabcabcabc";
    std::string test_4 = "aaaaaaaaaaaaaaaaa";
    std::string test_5 = "abcabcabcabc1";
    std::string test_6 = "1abcabcabcabc";
    std::string test_7 = "abca1bcabcabc";
    std::string test_8 = "AbCdEF123!?AbCdEF123!?AbCdEF123!?AbCdEF123!?";
    std::string test_9 = "1";
    std::string test_10 = "";

    std::cout << FindKmax(test_1) << "\n";
    std::cout << FindKmax(test_2) << "\n";
    std::cout << FindKmax(test_3) << "\n";
    std::cout << FindKmax(test_4) << "\n";
    std::cout << FindKmax(test_5) << "\n";
    std::cout << FindKmax(test_6) << "\n";
    std::cout << FindKmax(test_7) << "\n";
    std::cout << FindKmax(test_8) << "\n";
    std::cout << FindKmax(test_9) << "\n";
    std::cout << FindKmax(test_10) << "\n";

    return 0;
}
