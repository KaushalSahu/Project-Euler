#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a = 1, b = 2, c = 0, even_sum = 2;
	while(c <= 4000000){
		c = a + b;
		a = b;
		b = c;
		if(c % 2 == 0)
			even_sum += c;
	}
	cout << even_sum;
}
