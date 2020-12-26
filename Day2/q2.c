#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
	int mod = k % n;
	for (int i = 0; i < n; i++)
		cout << (arr[(mod + i) % n]) << " ";
    cout << "\n";
}

int main()
{
	int n;
    int k;
    printf("Enter no. of Element:- ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Elements:- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nHow many time Rotate Array?");
	scanf("%d",&k);
	leftRotate(arr, n, k);
	return 0;
}