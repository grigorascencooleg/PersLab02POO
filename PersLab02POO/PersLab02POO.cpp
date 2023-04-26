#include "pch.h"
#include <iostream>
using namespace System; 
using namespace std;
struct Persoana
{
    unsigned vs;
    char nume[20];
    char prenume[20];
};

class Pers
{
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    
    Pers(unsigned vs1, char* num1, char* prenum1)
    {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned arata_vs() { return this->vs; }
    char* arata_nume() { return this->nume; }

};
int main()
{
    unsigned int a1 = 0;
    a1 = 17;
    Persoana p1;
    p1.vs = 20;
    strcpy_s(p1.nume, 5, "Oleg");
    strcpy_s(p1.prenume, 14, "Grigorascenco");
    Console::WriteLine("Hello C++.NET");
    cout << p1.nume << "\t" << p1.prenume << "\t" << p1.vs << endl;
    cout << "Hello C++.NET (cout)" << endl;
    Console::WriteLine("Utilizam clasa Pers");
    Pers p2(20, "John", "Doe");
    Pers* p3 = new Pers(21, "Alice", "Winderton");
    cout << p2.arata_nume() << "\t" << p2.arata_vs() << endl;
    cout << p3->arata_nume() << "\t" << p3->arata_vs() << endl;

    Console::ReadKey();
    return 0;
}
