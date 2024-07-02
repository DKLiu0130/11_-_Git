#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct StringCount{  
    string word;
    int num;
// add contents if needed.
};

class Text{
	vector<StringCount> data;
	Balancedtree tree;
	
	Text(){}
	bool splitWords(ifstream& ifs, bool flag){
		//return succeed or failed.
		//first achieve English Version. (flag == false)
		//add Chinese version later(flag == true)
	}
	bool createBalencedTree(){
		//return succeed or failed.
	}
	double calculateSimilarity(Text& other, vector<StringCount>& samewords){
		//return the similarity rate, and the same string information.
	}
	void keyWordsAnalysis(vector<StringCount>& keywords){
		//return highest of the samewords, but delete the ones such as function words.
	}
	
};

class Balancedtree{
	//add information according to the textbook.
};

class GraphicalInterface{
	// add information according to your wishes.
	GraphicalInterface(/*the params needed*/){
		//initial part
	}
	//...
};

int main(){
	ifstream ifs1, ifs2;
	ifs1.open("text1.txt", ios::in);
	ifs2.open("text2.txt", ios::in);//这个后期可以想办法调整输入命名.
	
	//看最后大家决定用什么形式进行输出. 
	return 0;
}
 
