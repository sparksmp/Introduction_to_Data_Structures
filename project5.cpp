#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


class Text{

    private:
        string file_string;

    public:
        Text(string filename);
        void show();
        int charNumber();
        int wordNumber();
        int sentenceNumber();
        string reverseText();
        //uses a stack 
};

Text::Text(string filename){
    string line;
    ifstream my_file;
    my_file.open(filename);

    if(my_file.is_open()){
        while(getline(my_file, line)){
        file_string.append(line);
        }
    }
}

void Text::show(){
    cout << file_string << endl;
}

int Text::charNumber(){
    return file_string.length();
}

int Text::wordNumber(){
    int word_count = 1;
    for(int i = 0; i < file_string.length(); i++){
        if (file_string[i] == ' ')
            word_count += 1;
    }
    return word_count;
}

int Text::sentenceNumber(){
    int sentence_count = 0;
    for(int i = 0; i < file_string.length(); i++){
        if(file_string[i] == '.')
            sentence_count += 1;
    }
    return sentence_count;
}

string Text::reverseText(){
    stack <char> s;
    string reverse = "";
    for(int i = 0; i < file_string.length(); i++){
        s.push(file_string[i]);
    }
    for(int i = 0; i < file_string.length(); i++){
        reverse += s.top();
        s.pop();
    }
    return reverse;        
}


int main(){
    Text T("chicago.txt");
    T.show(); 
    //prints the text to screen.
    cout << T.charNumber() << endl;
    // 3614
    cout << T.wordNumber() << endl;
    // 559
    cout << T.sentenceNumber() << endl;
    // 26
    cout << T.reverseText() << endl;
    //prints reversed text to screen.

    return 0;
}
