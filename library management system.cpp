#include"menu.h"
int main()
{
    menu a;
    a.heading();
    int choice;
    do
    {
        cout << "\t\t\t\t\t\t\t MAIN MENU" << endl;
        cout << "\t\t 1: Library information." << endl;
        cout << "\t\t 2: Students information." << endl;
        cout << "\t\t 3: Books information." << endl;
        cout << "\t\t 4: Exit." << endl;
        cout << "Please.. select your option: ";
        cin >> choice;
        if (choice == 1)
            a.librarymenu();
        else if (choice == 2)
            a.studentmenu();
        else if (choice == 3)
            a.bookmenu();
    } while (choice != 4);
}
