
#include <bits/stdc++.h>
using namespace std;


int countTriangles(int b[], int n)
{


	int cnt = 0;


	int pairs = 0;


	for (int i = n - 1; i >= 0; i--) {

		pairs += b[i] / 2;


		if (b[i] % 2 == 1 && pairs > 0) {

			cnt += 1;


			pairs -= 1;
		}
	}


	cnt += (2 * pairs) / 3;
	return cnt;
}


int main()
{
int a;
	scanf("%d",&a);
	int b[a];
	for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }

	int n = sizeof(b) / sizeof(b[0]);
	cout << countTriangles(b, n);

	return 0;
}
