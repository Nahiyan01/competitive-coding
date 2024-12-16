#include <iostream>
using namespace std;
void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    int count =0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        if(binaryNum[j] == 1){
            count++;
        }
        cout<<count<<endl;
}
int main()
{
    int n;
    cin>>n;
    decToBinary(n);
    return 0;
}
