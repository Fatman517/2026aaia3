//week10-1.cpp(SOIT108_Advance_002
#include <iostream>
using namespace std;
int isPrime(int N)
{//只被1跟本身整除
	for(int i=2;i<N;i++){
	if (N%i==0)return 0;
	}return 1;
	}
int main()
{
	int a ,b;
	cin >> a >> b;
	//把a...b的每個數字都試一次
	int ans = 0;
	for(int i=a;i<=b;i++){
	//質數2,3,5,7,11,13,17...
	if (isPrime(i) ) ans++; //判斷質數
	}
	cout<<ans<<"\n";
	}
