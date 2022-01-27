#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n){
	for(int i=0; i<n-1; i++){
		int mn = arr[i];
		int mnIdx = i;
		for(int j=i+1; j<n; j++){
			if(mn > arr[j]){
				mn = arr[j];
				mnIdx = j;
			}
		}
		swap(arr[mnIdx], arr[i]);
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

	selectionSort(arr, n);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;
}
