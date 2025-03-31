#include <bits/stdc++.h>
using namespace std;

class Compare {
private:
	int arr[25]; 
public:
	void takeInput() {
		cout << "Enter Fixed Numbers : \n" << endl;
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
		}
		cout << "Enter Your Numbers : \n" << endl;
		for (int i = 0; i < 20; i++) {
			cin >> arr[i + 5];
		}
	}
	void matchAndPrintNonMatching() {
		cout << "User Defined Numbers that are not present in Fixed Numbers Set : " << endl;
		for (int j = 5; j < 25; j++) {
			bool flag = 0;
			for (int i = 0; i < 5; i++) {
				if (arr[i] == arr[j]) flag = 1;
			}
			if (flag == 0) {
				cout << arr[j] << " ";
			}
		}
		cout << endl;
		cout << endl;
	}

	void compareAndPrintIndexAndFrequency();
};

void Compare::compareAndPrintIndexAndFrequency() {
	cout << "Matching Fixed Numbers and User Defined Numbers :" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Fixed Number " << i + 1 << " : " << arr[i] << endl;
		vector<int> indices;
		int count = 0;
		for (int j = 5; j < 25; j++) {
			if (arr[j] == arr[i]) {
				indices.push_back(j);
				count++;
			}
		}

		cout << "Count : " << count << endl;
		cout << "Indices : ";
		for (auto e : indices) {
			cout << e << " ";
		}
		cout << endl;
		cout << endl;

	}
}

int main() {
	Compare compare;
	compare.takeInput();
	compare.matchAndPrintNonMatching();
	compare.compareAndPrintIndexAndFrequency();
}