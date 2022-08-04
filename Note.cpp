#include <bits/stdc++.h>
#include <json/json.h>
using namespace std;

string getInput()
{
    string Input, line;
    bool mark = true;
    int lineLength = 0;
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
            Input += line + '\n';
    } while (mark);
    return Input;
}

string getTime()
{
    time_t t = time(0);
    char tmp[18];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S", localtime(&t));
    return tmp;
}

void saveNotes()
{

}

class Note
{
public:
    Note();
    string notes[1000][2];
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
    if (quantityOfNotes < 1000)
    {
        notes[quantityOfNotes][0] = getInput();
        notes[quantityOfNotes][1] = getTime();
        quantityOfNotes += 1;
    }
    else
        cout << "\aYour notebook is full, please delete some useless ones.";
}

void Note::listRecentNotes()
{
    if (!quantityOfNotes)
    {
        cout << "\aYou don't have any notes yet.";
        return;
    }
    else if (quantityOfNotes <= 5)
    {
        for (int i = 0; i < quantityOfNotes; i++)
        {
            cout << i + 1 << '*' << notes[i][0] << endl;
            cout << " *" << notes[i][1] << endl;
        }
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << '*' << notes[i][0] << endl;
            cout << " *" << notes[i][1] << endl;
        }
    }
}

int main()
{
    fstream fileIOStream;
    fileIOStream.open("Notes.dat");
    fileIOStream.close();
    Note myNote;
    myNote.addOneNote();
    myNote.listRecentNotes();
    return 0;
}