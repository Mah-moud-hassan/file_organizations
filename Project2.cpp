#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class IndexedFile {
public:
    string filename;
    vector<string> lines;

    IndexedFile(const string& fname) : filename(fname) {
        loadFile();
    }

    void loadFile() {
        ifstream file(filename);
        string line;
        lines.clear();
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    }

    void saveFile() {
        ofstream file(filename);
        for (const string& line : lines) {
            file << line << endl;
        }
        file.close();
    }

    void insertText(int index, const string& text) {
        if (index >= 0 && index < lines.size()) {
            lines[index] += " " + text;
        } else if (index == lines.size()) {
            lines.push_back(text);
        } else {
            cout << "Invalid index!" << endl;
            return;
        }
        saveFile();
    }

    void deleteText(int index) {
        if (index >= 0 && index < lines.size()) {
            lines.erase(lines.begin() + index);
            saveFile();
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    void displayFile() {
        for (size_t i = 0; i < lines.size(); i++) {
            cout << i << ": " << lines[i] << endl;
        }
    }
};

int main() {
    IndexedFile file("indexed.txt");
    
    file.insertText(0, "Hello, this is the first line.");
    file.insertText(1, "This is the second line.");
    file.insertText(2, "Another line with more data.");
    
    cout << "File content after insertions:" << endl;
    file.displayFile();
    
    file.deleteText(1);
    
    cout << "\nFile content after deletion:" << endl;
    file.displayFile();
    
    return 0;
}
