#include <bits/stdc++.h>;

using namespace std;

int main(){
int amount, max1 = -1;
vector <int> numbers;
cin>>amount;
for (int i =0; i<amount; i++)
{
int first, second;
cin>>first>>second;
numbers.push_back(first);
numbers.push_back(second);
max1 = max(max1, second);
}
int *zabor = new int [max1] {};
for (int i = 0; i<amount * 2 - 1; i+=2)
{
for (int j = numbers[i]; j <= numbers[i+1]; j++) zabor[j-1]++;
}
int counter = 0;
for (int i = 0; i < max1; i++) if (zabor[i] > 0) counter++;
cout<<counter;
return 0;
}
