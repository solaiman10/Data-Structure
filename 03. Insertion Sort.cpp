#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n){
	for(int i=0; i<n; i++){
		int j=i;
		int mn = arr[i];

		while(j>0 && mn<arr[j-1]){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = mn;
	}
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin >> arr[i];


	insertionSort(arr, n);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;
}
