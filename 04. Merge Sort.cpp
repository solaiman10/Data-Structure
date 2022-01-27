#include<bits/stdc++.h>
using namespace std;


void mergee(vector<int> &arr, int l, int m, int r){
	vector<int> left(m-l+1), right(r-m);

	int ls = m-l+1, rs = r-m;

	for(int i=0; i<ls; i++)
		left[i] = arr[i+l];
	for(int i=0; i<rs; i++)
		right[i] = arr[m+1+i];

	int i=0, j=0, k=0;
	while(i<ls && j<rs){
		if(left[i] <= right[j]){
			arr[l+k] = left[i];
			i++; k++;
		}
		else if(left[i] > right[j]){
			arr[l+k] = right[j];
			j++; k++;
		}
	}
	while(i<ls) {
		arr[l+k] = left[i];
		i++; k++;
	}
	while(j<rs){
		arr[l+k] = right[j];
		j++; k++;
	}
}

void mergeSort(vector<int> &arr, int l, int r){
	if(r<=l) return;

	int m = l + (r - l)/2;
	mergeSort(arr, l, m);
	mergeSort(arr, m+1, r);
	mergee(arr, l, m, r);
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin >> arr[i];


	mergeSort(arr, 0, n-1);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;
}
