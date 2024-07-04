#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> tokenize(const string& text) {
    vector<string> tokens;
    istringstream iss(text);
    string token;

    while (iss >> token) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    string line;
    vector<string> words;
    ifstream file("input.txt"); // �滻Ϊ��Ҫ��ȡ���ļ���

    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    string tmp;
   
    // ���ж�ȡ�ļ�����
    while (file >> tmp) {
        words.push_back(tmp);
    }

    file.close();

    cout << "Tokens:" << endl;
    for (const string& word : words) {
        cout << "\"" << word << "\"" << " ";
    }

    return 0;
}