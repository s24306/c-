#include <iostream>
#include <vector>
#include <string>
int main(){
	std::string word;
	std::vector<std::string> wordVector;
	while(std::cin >> word){
		wordVector.push_back(word);
	}
	for(int i = 0; i < wordVector.size(); i++){
		wordVector[i][0] = toupper(wordVector[i][0]);
	}
	return 0;
}
