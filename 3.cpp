/*#include <iostream>
using namespace std;
int main()
{
    enum weekday{Sunday=1, Monday, Tuesday, Wednesday,
    Thursday , Friday, Saturday};
    
    int A,B,C,D,E,F,G;
    A=C+1;
    D=E+2;
    B=G-3;
    F=4;
    B<F<C||C<F<B;
    cout <<A;
    return 0;


}
*/



#include<iostream>
using namespace std;
 
int main()
{
	void choice(int);
	enum day{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
	int A, B, C, D, E, F, G;
 
	for (A = Sunday; A <= Saturday ; ++A)
	{
		for (B = Sunday; B <= Saturday; ++B)
		{
			for (C = Sunday; C <= Saturday; ++C)
			{
				for (D = Sunday; D <= Saturday; ++D)
				{
					for (E = Sunday; E <= Saturday; ++E)
					{
						for (F = Sunday; F <= Saturday; ++F)
						{
							for (G = Sunday; G <= Saturday; ++G)
							{
								if ((A == (C + 1) % 7) && (D == (E + 2) % 7) && (G == (B + 3) % 7) && (((F > B) && (F < C) && (B != 0)) || ((F > C) && (F < B) && (C != 0))) && (A != B) && (A != C) && (A != D) && (A != E) && (A != F) && (A != G) && (B != C) && (B != D) && (B != E) && (B != F) && (B != G) && (C != D) && (C != E) && (C != F) && (C != G) && (D != E) && (D != F) && (D != G) && (E != F) && (E != G) && (F != G) && (F == 4))
								{
									cout << " A  "; choice(A);
									cout << " B  "; choice(B);
									cout << " C  "; choice(C);
									cout << " D  "; choice(D);
									cout << " E  "; choice(E);
									cout << " F  "; choice(F);
									cout << " G  "; choice(G);
									cout << endl;
								}
							}
						}
					}
				}
			}
		}
	}
 
 
	return 0;
}
 
void choice(int a)
{
	switch (a)
	{
	case 0:cout << "Sunday" << '.' << endl; break;
	case 1:cout << "Monday" << '.' << endl; break;
	case 2:cout << "Tuesday" << '.' << endl; break;
	case 3:cout << "Wednesday" << '.' << endl; break;
	case 4:cout << "Thursday" << '.' << endl; break;
	case 5:cout << "Friday" << '.' << endl; break;
	case 6:cout << "Saturday" << '.' << endl; break;
	}
}
//from CSDN 
//it is so so difficult 