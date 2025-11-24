/*
 * Opis: Wydajne odpowiadanie na niełączną operację na przedziale.
*/
struct Query {
    int L, R, i;
};
vector<int> Mo(vector<int>& a, vector<Query>& Q) {
    vector<int> odp(Q.size());

    int b = ceil(sqrt(a.size()));

    sort(Q.begin(), Q.end(), [&](const Query x, const Query y) {
        if (x.L / b != y.L / b) return x.L < y.L;
        return (x.L / b) % 2 ? x.R > y.R : x.R < y.R;
    });

    int l = 0, r = 0;
    int acc = 0;
    for(auto q:Q) {
        int L = q.L, R = q.R, i=q.i;
        while(l > L) mo_add(a[--l], acc);
        while(r <= R) mo_add(a[r++], acc);
        while(l < L) mo_remove(a[l++], acc);
        while(r > R + 1) mo_remove(a[--r], acc);
        odp[i] = acc;
    }
    return odp;
}