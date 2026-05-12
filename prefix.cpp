First Attempt (Buggy with 0-indexing)
int n; cin >> n;
vector<int> v(n);
for(int i = 0; i < n; i++) cin >> v[i];

vector<int> p(n);
for(int i = 0; i < n; i++) p[i] = v[i] + p[i-1]; 
// Problem when i=0 → p[-1] (invalid!)
Correct Implementation (1-indexed arrays)


int n; cin >> n;
vector<int> v(n+1), p(n+1);
v[0] = p[0] = 0;

for(int i = 1; i <= n; i++) cin >> v[i];
for(int i = 1; i <= n; i++) p[i] = v[i] + p[i-1];

int q; cin >> q;
while(q--){
    int l, r; cin >> l >> r;
    cout << p[r] - p[l-1] << "\n";
}


