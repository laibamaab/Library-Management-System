#include"account.h"
class menu {
    account a;
public:
    void heading()
    {
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << "\n\n\t\t\t\t\t\t\t\t\t\tLIBRARY MANAGEMENT SYSTEM" << endl << endl << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        a.create();
    }
    void librarymenu()
    {
        int c;
        do
        {
            cout << "\n\t\t\t 1: Display all information." << endl;
            cout << "\t\t\t 2: Issue book." << endl;
            cout << "\t\t\t 3: Available books." << endl;
            cout << "\t\t\t 4: Not Available books." << endl;
            cout << "\t\t\t 5: Student information who not issued books." << endl;
            cout << "\t\t\t 6: Student information who have issue books." << endl;
            cout << "\t\t\t 7: Return book." << endl;
            cout << "\t\t\t 8: Total amount of all Books." << endl;
            cout << "\t\t\t 9: Store information in file." << endl;
            cout << "\t\t\t 10: Main Menu." << endl;
            cout << "Please.. select your option: ";
            cin >> c;
            if (c == 1)
            {
                cout << endl << endl << endl;
                cout << "\nDisplay information of all Books and Students." << endl;
                a.display(1);
            }
            else if (c == 2)
            {
                cout << endl << endl << endl;
                cout << "BOOK issue." << endl;
                a.issuebook();
            }
            else if (c == 3)
            {
                cout << endl << endl << endl;
                cout << "Available books." << endl;
                a.available(1);
            }
            else if (c == 4)
            {
                cout << endl << endl << endl;
                cout << "Not Available books." << endl;
                a.notavailable(1);
            }
            else if (c == 5)
            {
                cout << endl << endl << endl;
                cout << "Student information who not issued books." << endl;
                a.available(2);
            }
            else if (c == 6)
            {
                cout << endl << endl << endl;
                cout << "Student information who issued books." << endl;
                a.notavailable(2);
            }
            else if (c == 7)
            {
                cout << endl << endl << endl;
                cout << "Return Book." << endl;
                a.returnbook();

            }
            else if (c == 8)
            {
                cout << endl << endl << endl;
                cout << "Price of all Books in the library." << endl;
                a.fineamount();
            }
            else if (c == 9)
            {
                cout << endl << endl << endl;
                cout << "File created successful." << endl;
                a.storeinfile();
            }
        } while (c != 10);
    }

    void studentmenu()
    {
        int c;
        do
        {
            cout << "\n\t\t\t 1: Display all information." << endl;
            cout << "\t\t\t 2: Search by ID." << endl;
            cout << "\t\t\t 3: Search by Name." << endl;
            cout << "\t\t\t 4: Update information." << endl;
            cout << "\t\t\t 5: Delete information." << endl;
            cout << "\t\t\t 6: Add student." << endl;
            cout << "\t\t\t 7: Main Menu." << endl;
            cout << "Please.. select your option: ";
            cin >> c;
            if (c == 1)
            {
                cout << endl << endl << endl;
                cout << "Information of all Students." << endl;
                a.display(3);
            }
            else if (c == 2)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbyid();
            }
            else if (c == 3)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbytitle();

            }
            else if (c == 4)
            {
                cout << endl << endl << endl;
                cout << "Update information." << endl;
                a.update();
            }
            else if (c == 5)
            {
                int n;
                cout << endl << endl << endl;
                cout << "Delete information." << endl;
                cout << "Enter Student Id: ";
                cin >> n;
                a.deletel(n);
            }
            else if (c == 6)
            {
                cout << endl << endl << endl;
                cout << "Add student information." << endl;
                a.addl(3);
            }
        } while (c != 7);
    }
    void bookmenu()
    {
        int c;
        do
        {
            cout << "\n\t\t\t 1: Display all information." << endl;
            cout << "\t\t\t 2: Search by ID." << endl;
            cout << "\t\t\t 3: Search by title." << endl;
            cout << "\t\t\t 4: Search by author." << endl;
            cout << "\t\t\t 5: Update information." << endl;
            cout << "\t\t\t 6: Delete information." << endl;
            cout << "\t\t\t 7: Add book." << endl;
            cout << "\t\t\t 8: Main Menu." << endl;
            cout << "Enter choice: ";
            cin >> c;
            if (c == 1)
            {
                cout << endl << endl << endl;
                cout << "Information of all Books." << endl;
                a.display(2);
            }
            else if (c == 2)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbyid();
            }
            else if (c == 3)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbytitle();
            }
            else if (c == 4)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbyauthor();
            }
            else if (c == 5)
            {
                cout << endl << endl << endl;
                cout << "Update information." << endl;
                a.update();
            }
            else if (c == 6)
            {
                int n;
                cout << endl << endl << endl;
                cout << "Delete information." << endl;
                cout << "Enter Book Id: ";
                cin >> n;
                a.deletel(n);
            }
            else if (c == 7)
            {

                cout << endl << endl << endl;
                cout << "Add information." << endl;
                a.addl(2);
            }
        } while (c != 8);
    }
};
