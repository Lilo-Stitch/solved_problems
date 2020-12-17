// passed only 14/18 tests. tried to do this in O(n), but i guess now im not that smart to do that.
// so i'll try to do it in O(n^2)
/*
bool almostIncreasingSequence(vector<int> sequence) {
    if (sequence.size() == 2) return true;
    int count = 0;
    if (sequence[0] >= sequence[1] && (sequence[0] >= sequence[2]))  {count++;  sequence.erase(sequence.begin());}
    for (int i = 1; i < sequence.size() -1; i++) {
        if ((sequence[i] <= sequence[i-1] && sequence[i] <= sequence[i+1]) ||
            (sequence[i] >= sequence[i-1] && sequence[i] >= sequence[i+1])
        ) {
            // if (i == 1 && sequence[i-1] < sequence[i+1]) count--;
            if (sequence[i-1] < sequence[i+1]) {sequence.erase(sequence.begin()+i); i--;}
            count++;
        }
    }
    if (sequence[sequence.size()-1] <= sequence[sequence.size()-2] && (sequence[sequence.size()-1] <= sequence[sequence.size()-3])) {count++; }
    cout << count<< endl;
    if (count > 1) return false;
    else return true;
} */
