#include <bits/stdc++.h>
using namespace std;

class Note
{
public:
    string notes[1000];
    int quantityOfNotes;
    void addANote();
    void list();
};

Note::Note(void)
{
    quantityOfNotes = 0;
    for (int i = 0; i < 1000; i++)
    {
        notes[i] = NULL;
    }
    cout << "success";
}

void Note::addANote()
{
    quantityOfNotes += 1;
}

int main()
{

    return 0;
}