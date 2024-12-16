#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int CountOccurrences(char* str, char* word)
{
	int count = 0;
	int strLen  = strlen(str);
	int wordLen = strlen(word);
	int j;

	for(int i=0; i <= strLen; i++)
	{
		for(j=0; j< wordLen; j++)
		{
			if(str[i + j] != word[j])
			{
				break;
			}
		}
		if(j == wordLen)
		{
            count++;
		}
		if(count == 0){
            return -1;
		}
	}
	return count;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
	char sentence[10001];
	char word[2];
	cin>>sentence;
	cin>>word;
	int count = CountOccurrences(sentence,word);
	if(count == -1){
        cout<<'word'<<"is not present"<<endl;
	}
	else{
	cout << "Occurrences of "<< 'word'<<"in"<<'sentence' <<"= "<< CountOccurrences(sentence, word);
	}
    }
	return 0;
}
