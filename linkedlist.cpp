#include <iostream>

using namespace std;


/// linked list works like the stack.
// using the first in last out rule(FILO)
// use pointers

class link{
    public:
        string sname;
        int score;
        link *pnext;

    public:
        link(string n, int s) {
            sname =n;
            score = s;
            pnext = NULL;

        }

        void display() {
            cout<<"{"<<sname<<" "<<score<<"}"<<endl;
        }


};

class linkedlist {

    private:
        link *pfirst;

    public:
        linkedlist() {
            pfirst =NULL;

        }

        void insert(string n, int s) {
            link *pnewlink = new link(n,s);
            pnewlink -> pnext = pfirst;
            pfirst = pnewlink;

        }

        void displaylist() {
            link *pcurrent = pfirst;
            while (pcurrent != NULL) {
                    pcurrent -> display();
                    pcurrent = pcurrent -> pnext;
            }
        }

        void deletelist() {
            pfirst = pfirst -> pnext;
        }
};

int main() {
    linkedlist s1;
    s1.insert("Tom", 80);
    s1.insert("Tiff", 60);
    s1.insert("Trev", 30);
    s1.insert("Ted", 90);
    s1.insert("Mary", 10);
    s1.displaylist();
    cout<<endl;
    s1.deletelist();
    s1.displaylist();

    return 0;
    
}