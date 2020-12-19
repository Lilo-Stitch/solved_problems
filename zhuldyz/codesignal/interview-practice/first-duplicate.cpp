// using map
int firstDuplicate(vector<int> a) {
    if (a.size() == 1) return -1;
    map<int, int> ans;
    for (int i = 0; i < a.size(); i++) {
        ans[a[i]]++;
        if (ans[a[i]] == 2) return a[i]; 
    }
    return -1;
}
// using no extra memory
int firstDuplicate(vector<int> a) {
for (int k : a) {
  if (a[abs(k) -1] <0) return abs(k);
  a[abs[k]-1] *=-1;
}
return -1;
}
