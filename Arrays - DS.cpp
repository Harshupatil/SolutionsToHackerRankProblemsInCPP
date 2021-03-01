/* Arrays - DS
Sample input:
  4
  1 4 3 2
Sample output:
  2 3 4 1
  
Code:

vector<int> reverseArray(vector<int> a) {
    vector<int> b;
    int n = a.size();
    for(int i=n-1; i>=0; i--)
        b.push_back(a[i]);
    return b;
}

