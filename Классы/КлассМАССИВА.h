//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//#pragma once
///*class  лассћј——»¬ј
//{
//}*/;    
//
//int main()
//{
//    // - Writing a file
//    std::string line;
//    std::ofstream wf;
//    wf.open("out.txt");
//
//    if (wf.is_open())
//    {
//        std::getline(std::cin, line);
//        wf << line;
//    }
//    else
//    {
//        printf("File is not found");
//    }
//    wf.close();
//
//    // - Reading a file
//    std::ifstream rf;
//    rf.open("out.txt");
//
//    if (rf.is_open())
//    {
//        while (std::getline(rf, line))
//        {
//            printf("%s", line.c_str());
//        }
//    }
//    else
//    {
//        printf("File is not found");
//    }
//    rf.close();
//    std::cout << std::endl;
//
//    // - »спользу€ переменные
//    rf.open("out.txt");
//    int number;
//    std::vector<int> array;
//    if (rf.is_open())
//    {
//        while (rf >> number)
//        {
//            array.push_back(number);
//        }
//    }
//    else
//    {
//        printf("File is not found");
//    }
//
//    for (size_t i = 0; i < array.size(); i++)
//    {
//        printf(" | %i | ", array[i]);
//    }
//    rf.close();
//}