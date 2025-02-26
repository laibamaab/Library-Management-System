#include"account.h"
void account::create() {
    string s1, s2, s3, s4, s5, s6;
    ifstream file("library.txt");
    for (int i = 0; i < index; i++)
    {
        getline(file, s1, ',');
        getline(file, s2, ',');
        getline(file, s3, ',');
        getline(file, s4, ',');
        getline(file, s5, ',');
        getline(file, s6);
        if (s1 == "B")
        {
            L[i] = new book(s2, stoi(s3), s4, stod(s5), s6);
            isbook[i] = true;

        }
        else
        {
            L[i] = new student(s2, stoi(s3), s4, s5, stod(s6));
            isbook[i] = false;
        }
    }
    file.close();
}

void account::display(int n)
{
    bool studentfound = false, bookfound = false;
    for (int i = 0; i < index; i++)
    {
        if (n == 1)
        {
            L[i]->display();
            bookfound = true;
            studentfound = true;
        }
        else if (n == 2)
        {
            if (isbook[i])
            {
                L[i]->display();
                bookfound = true;
                studentfound = true;
            }
        }
        else if (n == 3)
        {
            if (!isbook[i])
            {
                L[i]->display();
                bookfound = true;
                studentfound = true;
            }
        }
    }
    if (!bookfound)
        cout << "No book is in Library." << endl;
    if (!studentfound)
        cout << "No student is in Library." << endl;
}
void account::searchbyauthor()
{
    bool found = false;
    string n;
    cin.ignore();
    cout << "Enter author: ";
    getline(cin, n);
    for (int i = 0; i < index; i++)
    {
        if (isbook[i])
        {
            if (n == L[i]->tellauthor())
            {
                L[i]->display();
                found = true;
            }
        }
    }
    if (!found)
        cout << "Please... Enter VALID author." << endl;
}
void account::searchbytitle()
{
    bool found = false;
    string n;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, n);
    for (int i = 0; i < index && !found; i++)
    {
        if (n == L[i]->tellname())
        {
            L[i]->display();
            found = true;
        }
    }
    if (!found)
        cout << "Please... Enter VALID Name." << endl;
}
void account::searchbyid()
{
    bool found = false;
    int n;
    cout << "Enter ID: ";
    cin >> n;
    for (int i = 0; i < index && !found; i++)
    {
        if (n == L[i]->tellid())
        {
            L[i]->display();
            found = true;
        }
    }
    if (!found)
        cout << "Please... Enter VALID ID." << endl;
}
void account::update()
{
    bool found = false;
    int n;
    cout << "Enter ID: ";
    cin >> n;
    for (int i = 0; i < index && !found; i++)
    {
        if (n == L[i]->tellid())
        {
            L[i]->display();
            cout << endl << endl;
            L[i]->create();
            found = true;
        }
    }
    if (!found)
        cout << "Please... Enter VALID ID." << endl;
    updatefile();
}
void account::available(int n)
{
    bool bookfound = false, studentfound = false;
    for (int i = 0; i < index; i++)
    {
        if (n == 1)
        {
            if (isbook[i] && L[i]->tellstatus() == "Available")
            {
                L[i]->display();
                bookfound = true;
                studentfound = true;
            }
        }
        else
        {
            if (!isbook[i] && L[i]->tellprice() == 0)
            {
                L[i]->display();
                bookfound = true;
                studentfound = true;
            }
        }
    }
    if (!bookfound)
        cout << "No book available in Library." << endl;
    if (!studentfound)
        cout << "No student who issue books." << endl;
}
void account::notavailable(int n)
{
    bool studentfound = false, bookfound = false;
    for (int i = 0; i < index; i++)
    {
        if (n == 1)
        {
            if (isbook[i] && L[i]->tellstatus() != "Available")
            {
                L[i]->display();
                bookfound = true;
                studentfound = true;
            }
        }
        else
        {
            if (!isbook[i] && L[i]->tellprice() == 1)
            {
                L[i]->display();
                bookfound = true;
                studentfound = true;
            }
        }
    }
    if (!bookfound)
        cout << "All books available in Library." << endl;
    if (!studentfound)
        cout << "All student issue books." << endl;
}
void account::fineamount()
{
    float sum = 0.0;
    for (int i = 0; i < index; i++)
    {
        if (isbook[i])
        {
            sum = sum + L[i]->tellprice();
        }
    }
    cout << "\tFine Amount: " << sum << endl;
}
void account::updatefile()
{
    ofstream file("library.txt");
    for (int i = 0; i < index; i++)
    {
        if (isbook[i])
        {
            file << "B," << L[i]->tellname() << "," << L[i]->tellid() << ","
                << L[i]->tellauthor() << "," << L[i]->tellprice() << ","
                << L[i]->tellstatus() << endl;
        }
        else if (!isbook[i])
        {
            file << "S," << L[i]->tellname() << "," << L[i]->tellid() << ","
                << L[i]->tellstatus() << "," << L[i]->tellauthor() << ","
                << L[i]->tellprice() << endl;
        }
    }
    file.close();
}
void account::storeinfile()
{
    ofstream file("output.txt");
    for (int i = 0; i < index; i++)
    {
        file << "Name: " << L[i]->tellname() << endl;
        file << "ID: " << L[i]->tellid() << endl;
        if (isbook[i])
        {
            file << "Author: " << L[i]->tellauthor() << endl;
            file << "Price: " << L[i]->tellprice() << endl;
            file << "Status: " << L[i]->tellstatus() << endl;
            file << endl << endl;
        }
        else
        {
            file << "Programme: " << L[i]->tellauthor() << endl;
            file << "No of book issued: " << L[i]->tellprice() << endl;
            file << "Book no: " << L[i]->tellstatus() << endl;
            file << endl << endl;
        }
    }
    file.close();
}
void account::deletel(int id)
{
    int foundIndex = -1;

    for (int i = 0; i < index && foundIndex == -1; i++) {
        if (L[i] != nullptr && id == L[i]->tellid()) {
            foundIndex = i;
        }
    }
    if (foundIndex != -1) {
        delete L[foundIndex];
        L[foundIndex] = nullptr;
        for (int i = foundIndex; i < index - 1; i++) {
            L[i] = L[i + 1];
        }
        index--;
        updatefile();
    }
    else {
        cout << "ID not found." << endl;
    }
}
void account::addl(int n)
{
    ofstream ofile("library.txt");
    if (n == 2)
    {
        L[0] = new book();
        isbook[0] = true;
        L[0]->create();
        ofile << "B," << L[0]->tellname() << "," << L[0]->tellid() << ","
            << L[0]->tellauthor() << "," << L[0]->tellprice() << ","
            << L[0]->tellstatus() << endl;
    }
    else
    {
        L[0] = new student();
        L[0]->create();
        isbook[0] = false;
        ofile << "S," << L[0]->tellname() << "," << L[0]->tellid() << ","
            << L[0]->tellstatus() << "," << L[0]->tellauthor() << ","
            << L[0]->tellprice() << endl;

    }
    for (int i = 0; i < 21; i++)
    {
        L[i] = L[i + 1];
        if (isbook[i])
        {
            ofile << "B," << L[i]->tellname() << "," << L[i]->tellid() << ","
                << L[i]->tellauthor() << "," << L[i]->tellprice() << ","
                << L[i]->tellstatus() << endl;
        }
        else if (!isbook[i])
        {
            ofile << "S," << L[i]->tellname() << "," << L[i]->tellid() << ","
                << L[i]->tellstatus() << "," << L[i]->tellauthor() << ","
                << L[i]->tellprice() << endl;
        }
    }
    ofile.close();
}
void account::issuebook()
{
    int id;
    string title;
    cout << "Enter student Id: ";
    cin >> id;
    bool studentFound = false;
    for (int j = 0; j < index && !studentFound; j++)
    {
        if (L[j]->tellid() == id)
        {
            studentFound = true;
            if (!isbook[j])
            {
                if (L[j]->tellprice() == 0)
                {
                    cin.ignore();
                    cout << "Enter book Title: ";
                    getline(cin, title);
                    bool bookFound = false;
                    for (int i = 0; i < index && !bookFound; ++i)
                    {
                        if (isbook[i] && L[i]->tellstatus() == "Available")
                        {
                            if (title == L[i]->tellname())
                            {
                                int n = L[i]->tellid();
                                string t = to_string(n);
                                L[i]->updatestatus("Not available");
                                L[j]->addtoken();
                                L[j]->getbookno(t);
                                bookFound = true;
                                cout << "Book issued successfully." << endl;
                                cout << "Return within 10 days." << endl;
                                updatefile();
                            }
                        }
                    }
                    if (!bookFound)
                        cout << "Book not available or already issued." << endl;
                }
                else
                    cout << "Student has already issued a book." << endl;
            }
            else
                cout << "Student record found but not authorized to issue books." << endl;
        }
    }
    if (!studentFound) {
        cout << "Student with ID " << id << " not found." << endl;
    }
}
void account::returnbook()
{
    int id;
    string title;
    int days;
    cout << "Enter student Id: ";
    cin >> id;
    bool studentFound = false;
    for (int j = 0; j < index && !studentFound; j++)
    {
        if (!isbook[j])
        {
            if (id == L[j]->tellid())
            {
                studentFound = true;
                if (L[j]->tellprice() != 0)
                {
                    cin.ignore();
                    cout << "Enter book Title: ";
                    getline(cin, title);
                    bool bookFound = false;
                    for (int i = 0; i < index && !bookFound; ++i)
                    {
                        if (L[i]->tellname() == title && isbook[i] && L[i]->tellstatus() != "Available")
                        {
                            string n = L[j]->tellstatus();
                            if (L[i]->tellid() == stoi(n))
                            {
                                L[i]->updatestatus("Available");
                                L[j]->resettoken();
                                L[j]->getbookno("0");
                                isbook[i] = true;
                                updatefile();
                                isbook[i] = false;
                                cout << "Enter no of days: ";
                                cin >> days;
                                if (days < 10) {
                                    cout << "Return BOOK Successful..." << endl;
                                }
                                else if (days < 20) {
                                    cout << "Pay Rs.100 fine for late return." << endl;
                                    cout << "Return BOOK Successful..." << endl;
                                }
                                else if (days < 30) {
                                    cout << "Pay Rs.300 fine for late return." << endl;
                                    cout << "Return BOOK Successful..." << endl;
                                }
                                else {
                                    cout << "Pay Rs.500 fine for late return." << endl;
                                    cout << "Return BOOK Successful..." << endl;
                                }
                                bookFound = true;
                            }
                        }
                    }
                    if (!bookFound) {
                        cout << "Book not issued or doesn't match the records." << endl;
                    }
                }
                else {
                    cout << "Student has not issued any books." << endl;
                }
            }
        }
    }
    if (!studentFound)
        cout << "Student has no such Id." << endl;
}