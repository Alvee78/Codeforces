#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 3001;
int prime[430];
vector<bool> isPrime(N, true);
void seive()
{
	int idx = 0;
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= N; i++)
	{
		if (isPrime[i])
		{

			prime[idx] = i;
			idx++;
			if (i * i > N)
				continue;
			if(idx>430)break;
			for (int j = i * i; j <= N; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
}
int main()
{
	seive();
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 6; i <= n; i++)
	{
		int c = 0;
		if (!isPrime[i])
		{
			for (int j = 0; prime[j] <i ; j++)
			{
				if (i % prime[j] == 0)
				{
					c++;
				}
			}
		}
		if(c==2){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
