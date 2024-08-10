#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define entf cout << endl
#define ent cout << "\n"
#define REPN(n) for(int i = 0; i < n; ++i)
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)
#define MOD 1000000007


void merge(vector<int>& arr, int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;

	vector<int> L(n1), R(n2);

	for(int i = 0; i < n1; ++i) {
		L[i] = arr[l + i];
	}

	for(int i = 0; i < n2; ++i) {
		R[i] = arr[m + 1 + i];
	}

	int i = 0, j = 0, k = l;

	while(i < n1 && j < n2) {
		if(L[i] <= R[j]) {
			arr[k] = L[i];
			++i;
		} else {
			arr[k] = R[j];
			++j;
		}
		++k;
	}

	while(i < n1) {
		arr[k] = L[i];
		++i;
		++k;
	}

	while(j < n2) {
		arr[k] = R[j];
		++j;
		++k;
	}
}

void mergeSort(vector<int>& arr, int l, int r) {
	if(l >= r) return; 

	int m = l + (r - l) / 2;
	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);
	merge(arr, l, m, r);
}


void solve() {
	int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main() {
	solve(); 
	return 0; 
}
