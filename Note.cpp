#include <bits/stdc++.h>
using namespace std;

string getInput()
{
    string Input, line;
    bool mark = true;
    int lineLength;
    cout << "Type \"eND~\" to end typing.\n";
    do
    {
        cin >> line;
        lineLength = line.size();
        if (lineLength >= 4 && line.substr(lineLength - 4) == "eND~")
        {
            Input += line.substr(0, lineLength - 4);
            mark = false;
        }
        else
            Input += line;
    } while (mark);
    return Input;
}

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
    if(quantityOfNotes < 1000)
    {
        notes[quantityOfNotes] = getInput();
        quantityOfNotes += 1;
    }
    else
        cout << "\aYour notebook is full, please delete some useless ones.";
}

int main()
{
    Note myNote;
    return 0;
}