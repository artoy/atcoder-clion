#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define FOR(i, a, b) for (int i = (a), i##_len = (b); i <= i##_len; ++i)
#define REV(i, a, b) for (int i = (a); i >= (b); --i)
#define CLR(a, b) memset((a), (b), sizeof(a))
#define DUMP(x) cout << #x << " = " << (x) << endl;
#define INF 1001001001001001001ll
#define fcout cout << fixed << setprecision(12)

using namespace std;

class CCounting2 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        int N, Q;
        cin >> N >> Q;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A.at(i);
        }

        sort(A.begin(), A.end());

        vector<int> x(Q);
        for (int i = 0; i < Q; i++) {
            cin >> x.at(i);
        }

        for (int i = 0; i < Q; i++) {
            vector<int>::iterator itr;
            itr = lower_bound(A.begin(), A.end(), x.at(i));
            cout << A.size() - distance(A.begin(), itr) << endl;
        }
    }
};