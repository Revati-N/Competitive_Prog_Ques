#include <iostream>
#include <deque> 
using namespace std;

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> deck (arr, arr+k);
    
    int max = deck[0];
    for (int i=1; i<k; i++) if (deck[i] > max) max = deck[i];
    cout << max << " ";
    
    for (int i=k; i<n; i++){
        deck.push_back(arr[i]);
        if (deck.front() == max){
            max = deck[1];
            for (int i=2; i<k+1; i++) if (deck[i] > max) max = deck[i];
        }
        else if (deck.back() > max) max = deck.back();
        deck.pop_front();
        cout << max << " ";
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}