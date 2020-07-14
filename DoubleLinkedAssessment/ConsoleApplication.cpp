#include "ConsoleApplication.h"
#include "DLLFunctions.h"
#include <iostream>

using namespace std;


ConsoleApplication::ConsoleApplication()
{
}

ConsoleApplication::~ConsoleApplication()
{
}

void ConsoleApplication::Run()
{
	while (m_quit == false)
	{
		system("cls");
		ProcessMainMenuInput();
        DisplayMainMenu();
	}
}

void ConsoleApplication::ProcessMainMenuInput()
{
    DLLFunctions dl;
   
    int choice;

    //please use this for loop if you want to generate more or less nodes!
    for (int i = 0; i < 5; i++) {
        dl.popFront(rand() % 100);
    }
    DisplayMainMenu();
    while (1)
    {
        cin >> choice;
        if (cin.fail())
        {
            dl.Error();
            continue;
        }
        else if (choice == 1)
        {
            int element;
            cout << "Enter element: ";
            cin >> element;
            if (cin.fail())
            {
                dl.Error();
                continue;
            }
            dl.popFront(element);
            system("cls");
            DisplayMainMenu();
            dl.display_dlist();
        }
        else if (choice == 2)
        {
            int element;
            cout << "Enter element: ";
            cin >> element;
            if (cin.fail())
            {
                dl.Error();
                continue;
            }
            dl.popBack(element);
            system("cls");
            DisplayMainMenu();
            dl.display_dlist();
        }
        else if (choice == 3)
        {
            if (cin.fail())
            {
                dl.Error();
                continue;
            }
            dl.delFirst();
            system("cls");
            DisplayMainMenu();
            dl.display_dlist();
        }
        else if (choice == 4)
        {
            if (cin.fail())
            {
                dl.Error();
                continue;
            }
            dl.delLast();
            system("cls");
            DisplayMainMenu();
            dl.display_dlist();
        }
        else if (choice == 5)
        {
            if (cin.fail())
            {
                dl.Error();
                continue;
            }
            dl.display_dlist();
            system("cls");
            DisplayMainMenu();
            dl.display_dlist();
        }
        else if (choice == 6)
        {
            int element;
            cout << "Enter element to be deleted: ";
            cin >> element;
            if (cin.fail())
            {
                dl.Error();
                continue;
            }
            dl.delNode(element);
            system("pause");
            system("cls");
            DisplayMainMenu();
            dl.display_dlist();
        }
        else if (choice == 7)
        {
            if (cin.fail())
            {
                dl.Error();
                continue;
            }
            dl.Bsort();
            system("cls");
            DisplayMainMenu();
            dl.display_dlist();
        }
        else if (choice == 8)
        {
        if (cin.fail())
        {
            dl.Error();
            continue;
        }
        dl.HowManyNodesExists();
        system("pause");
        system("cls");
        DisplayMainMenu();
        dl.display_dlist();
        }
    }
}

void ConsoleApplication::DisplayMainMenu()
{
    std::cout << "1. PopFront" << std::endl;
    std::cout << "2. PopBack" << std::endl;
    std::cout << "3. Delete First Node" << std::endl;
    std::cout << "4. Delete Last Node" << std::endl;
    std::cout << "5. Display Current Nodes" << std::endl;
    std::cout << "6. Delete A Node" << std::endl;
    std::cout << "7. Sort Nodes (Ascending Order)" << std::endl;
    std::cout << "8. Count Nodes" << std::endl;
}