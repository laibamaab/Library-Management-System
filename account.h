#pragma once
#include "library.h"
#include "book.h"
#include "student.h"
#include <fstream>
class account {
    int index = 20;
    library* L[20];
    bool isbook[20];
public:
    ~account()
    {
        for (int i = 0; i < index; ++i)
        {
            if (L[i] != 0)
            {
                delete L[i];
                L[i] = 0;
            }
        }
    }
    void notavailable(int n);
    void available(int n);
    void searchbyauthor();
    void create();
    void display(int n);
    void update();
    void updatefile();
    void fineamount();
    void addl(int n);
    void deletel(int id);
    void searchbyid();
    void searchbytitle();
    void issuebook();
    void returnbook();
    void storeinfile();
};