#include <bits/stdc++.h>
using namespace std;

class Note
{
public:
    Note();
    string notes[1000];
    int quantityOfNotes;
    void addOneNote();
    void listRecentNotes();
};

Note::Note(void)
{
    quantityOfNotes = 0;
}

void Note::addOneNote()
{
    quantityOfNotes += 1;
}

int main()
{
    Note myNote;
    return 0;
}