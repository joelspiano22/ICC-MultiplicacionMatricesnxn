#include<iostream>
using namespace std;
const int FIL = 100; //Establecer un límite en las filas
const int COL = 100; //Establecer un límite en las columnas
//Prototipos
void entradaDatos(float MATRIZ[FIL][COL], int fil, int col);
void multiplicacionMatrices(float A[FIL][COL], int FILa, int COLa, float B[FIL][COL], int
	FILb, int COLb, float P[FIL][COL]);
void imprimirMatriz(float MATRIZ[FIL][COL], int fil, int col);
int main()
{
	float A[FIL][COL];
	float B[FIL][COL];
	float P[FIL][COL];
	int n, filA, colA, filB, colB;
	cout << "Ingresar el orden de la matriz:";
	cin >> n;
	cout << "\n";
	cout << "MATRIZ MULTIPLICANDO:" << "\n";
	cout << "Como la matriz es cuadrada, su orden es " << n << " x " << n << "\n";
	filA = n;
	colA = n;
	entradaDatos(A, filA, colA);
	cout << "\n";
	cout << "MATRIZ MULTIPLICADOR:" << "\n";
	//cout << "Para que se puedan multiplicar, la segunda matriz debe tener el mismo orden:
		cout<<n<<" x "<<n<<endl;
		filB = n;
	colB = n;
	entradaDatos(B, filB, colB);
	multiplicacionMatrices(A, filA, colA, B, filB, colB, P);
	cout << "\n";
	cout << "MATRIZ MULTIPLICANDO:" << "\n";
	imprimirMatriz(A, filA, colA);
	cout << "\n";
	cout << "MATRIZ MULTIPLICADOR:" << "\n";
	imprimirMatriz(B, filB, colB);
	cout << "\n";
	cout << "PRODUCTO DE MATRICES:" << "\n";
	imprimirMatriz(P, filA, colB);
}
void entradaDatos(float MATRIZ[FIL][COL], int fil, int col)
{
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Ingresar el dato(" << i << ")(" << j << "):";
			cin >> MATRIZ[i][j];
		}
	}
}
void multiplicacionMatrices(float A[FIL][COL], int FILa, int COLa, float B[FIL][COL], int
	FILb, int COLb, float P[FIL][COL])
{
	for (int i = 0; i < FILa; i++)
	{
		for (int j = 0; j < COLb; j++)
		{
			P[i][j] = 0;
			for (int k = 0; k < COLa; k++)
			{
				P[i][j] += A[i][k] * B[k][j]; //P[i][j]=P[i][j]+A[i][k]*B[k][j]
			}
		}
	}
}
void imprimirMatriz(float MATRIZ[FIL][COL], int fil, int col)
{
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << MATRIZ[i][j] << "\t|";
		}
		cout << "\n";
	}
}
