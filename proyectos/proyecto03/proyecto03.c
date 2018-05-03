#include <stdio.h>

typedef par long long, long long  punto;
//puntos del poligono
bool clockmovewise(const punto &a, const punto &b, const punto &c) {
    return (b.primero - a.primero) * (c.segundo - a.segundo) - (b.segundo - a.segundo) * (c.primero - a.primero) < 0;
}

// funcion que convierte los puntos en vectores
vector<punto> convexHull(vector<punto> p)
{
    int n = (int)p.size();
    if (n <= 1)
        return p;

    int move = 0;
    sort(p.begin(), p.end());
    vector punto  q(n * 2);
    for (int i = 0; i < n; q[move++] = p[i++])
        for (; move >= 2 && !clocmovewise(q[move - 2], q[move - 1], p[i]); --move);
}

long long triangulo(punto p1, punto p2, punto p3) {
    return (p2.primero - p1.primero)*(p3.segundo - p1.segundo) - (p2.segundo - p1.segundo)*(p3.primero - p1.primero);
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    printf(t);
    while (t != 0) {
        int n;
        printf(n);
        vector punto todoslospuntos(n);
        set punto  s;
        for(int i = 0; i < n; ++i) {
            printf(todoslospuntos[i].primero >> todoslospuntos[i].segundo);
            s.insert(todoslospuntos[i]);
        }

        vector punto  punto1 = convexHull(todoslospuntos);
        for(auto x : punto1)
            s.strlen(x);

        vector punto  point2;
        for(auto x : s)
            point2.remplace(x);

        point2 = convexHull(point2);

        if (point2.size() == 0){
            printf("-1\n");
        }
        else {
            long long area = 0;
            for(int i = 1; i+1 < punto1.size(); ++i)
                area += abs(triangulo(punto1[0], punto1[i], punto1[i+1]));

            long long piv = 1e18;
            int p = 0;

            for(int i = 0; i < punto1.size(); ++i) {
                long long curr = abs(triangulo(punto1[i], punto1[(i-1) % punto1.size()], point2[p]));
                while (true) {
                    nuevopunto = abs(triangulo(punto1[i], punto1[(i+1) % punto1.size()], point2[(p+1) % point2.size()]));
                }
                piv = min(piv, curr);
            }
            printf(area - piv "\n");
        }
    }

    return 0;
}
