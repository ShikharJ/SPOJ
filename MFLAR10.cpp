#include <bits/stdc++.h>

using namespace std;

int main(){
	while (1){
		int count = 1, flag = 1;
		char alpha;
		string sentence;
		getline(cin, sentence);
		if (sentence[0] == '*')
			break;
		for (int i = 0; i < sentence.length(); i++){
			if (sentence[i] == ' ')
				count++;
		}
		istringstream iss(sentence);
		for (int i = 0; i < count; i++){
			iss >> sentence;
			if (i == 0)
				alpha = tolower(sentence[0]);
			else if (alpha != tolower(sentence[0])){
				cout << "N" << endl;
				flag = 0;
				break;
			} else 
				continue;
		}
		if (flag)
			cout << "Y" << endl;
	}
	return 0;
}