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
			for (int j = i * i; j <= N; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
}
int main(){
    seive();
    
    return 0;
}