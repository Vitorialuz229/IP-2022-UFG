//Exercício 13 - Sistema de Equação Linear (++++)

//Leia os valores dos coeficientes a, b, c, d, e, f 
//Retorne os valores x e y

#include <stdio.h>

void main() { 
    double a, b, c, d, e, f, x, y;
    scanf ("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f); 

//dx + ey = f --> ey = f - dx
//y = (f - dx)/e (substitui o y na outra equação)
//ax + by = c --> ax = c - by 
//x = (c-by)/a (substituir o x na outra equação)

//dx + ey = f
//d(c-by)/a + ey = f (multiplica os dois membros da igualdade por a)
//d*c - d*by + a*ey = a*f
//-d*by + a*ey = d*c + a*f
//y(a*e - d*b) = (d*c - a*f) 
//y = (d*c - a*f)/(a*e - d*b) 

//ax + by = c
//ax + b(f - dx)/e = c 
//e*ax + b*f - b*dx = c*e
//e*ax - b*dx = c*e - b*f
//x(e*a - b*d) = (c*e - b*f)
//(c*e - b*f)/(e*a - b*d)

    y = ((d*c) - (a*f))/((a*e) - (d*b)); 
    x = ((c*e) - b*f)/((e*a) -(b*d));

    printf("O VALOR DE X E = %.2lf", x);
    printf("O VALOR DE Y E = %.2lf", y);

return 0;    
}