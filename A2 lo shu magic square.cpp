using namespace std;
const int ROWS = 3; 
const int COLS = 3; 
const int MIN = 1; 
const int MAX = 9; 

int main() {
	int first[COLS];
	int second[COLS];
	int third[COLS];
	cout << "nhap hang thu nhat: ";
	cin >> first[0] >> first[1] >> first[2];
	cout << "nhap hang thu hai: ";
	cin >> second[0] >> second[1] >> second[2];
	cout << "nhap hang thu ba: ";
	cin >> third[0] >> third[1] >> third[2];
	
	
	for (int i = 0; i < 3; i++) {
		if (first[i] < MIN || first[i] > MAX ||
			second[i] < MIN || second[i] > MAX ||
			third[i] < MIN || third[i] > MAX) {
				cout << "nhap sai";
				return 0;
		}
	}
	int sum = first[0] + first[1] + first[2];
	
	int horSum[ROWS], verSum[COLS], diagSum1 = 0, diagSum2 = 0;
	for (int i = 0; i < ROWS; i++) {
		horSum[i] = verSum[i] = 0;
	}
	
	for (int i = 0; i < COLS; i++) {
		horSum[0] += first[i];
		horSum[1] += second[i];
		horSum[2] += third[i];
	}
	for (int i = 0; i < COLS; i++) {
		verSum[i] = first[i] + second[i] + third[i];
	}
	diagSum1 = first[0] + second[1] + third[2];
	diagSum2 = first[2] + second[1] + third[0];
	bool correct = true;
	for (int i = 0; i < ROWS; i++)
		if (horSum[i] != sum) correct = false;
	for (int i = 0; i < COLS; i++)
		if (verSum[i] != sum) correct = false;
	if (diagSum1 != sum || diagSum2 != sum) 
	correct = false;
	
	if (correct)
		cout << "It is a lo shu magic square";
	else
		cout << "Not a lo shu magic square";
}
