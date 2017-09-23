#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int maxLength = 0;
int tempLength;
char word[500],temp[500];
int main(){
	for(;;){
		scanf("%s", temp);
		tempLength = strlen(temp);
		if(temp[tempLength - 1] == '.')--tempLength;       
		if(tempLength > maxLength) {
			maxLength = tempLength;
			strncpy(word, temp, tempLength);
			word[maxLength] = '\0';
		}
		if(temp[tempLength] == '.')break;
	}
	cout<<word<<endl;
	return 0;
}
