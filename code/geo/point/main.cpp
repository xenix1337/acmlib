/*
 * Opis: Double może być LL, ale nie int. 
 *   p.x oraz p.y nie można zmieniać (to kopie).
 *   Nie tworzyć zmiennych o nazwie "x" lub "y".
 * Użycie: P p = {5, 6}; abs(p) = length; arg(p) = kąt; polar(len, angle); exp(angle)
 */
using Double = long double;
using P = complex<Double>;
#define x real()
#define y imag()

constexpr Double eps = 1e-9;
bool equal(Double a, Double b) {
	return abs(a - b) <= eps;
}
int sign(Double a) {
	return equal(a, 0) ? 0 : a > 0 ? 1 : -1;
}

struct Sortx {
	bool operator()(const P &a, const P &b) const {
		return make_pair(a.x, a.y) < make_pair(b.x, b.y);
	}
};
istream& operator>>(istream &is, P &p) {
	Double a, b;
	is >> a >> b;
	p = P(a, b);
	return is;
}
Double cross(P a, P b) {
	return a.x * b.y - a.y * b.x;
}
Double dot(P a, P b) {
	return a.x * b.x + a.y * b.y;
}
P rotate(P x, P center, Double radians) {
	return (x - center) * exp(P(0, radians)) + center;
}
