#include <iostream>
#include <iomanip>
#define _USE__MATH_DEFINES
#include <cmath>
#include <8lab.h>
using namespace std;

int main()
 {
     float** A;
     float** B;
     float** C;
     
     int n;
     
     cout << "N : ";
     cin >> n;
     
     A = new float*[n];
     B = new float*[n];
     C = new float*[n];
    
    for(int i=0;i<n;i++)
    {
        A[i] = new float[n];
        B[i] = new float[n];
        C[i] = new float[n];
    }
    
    cout << "Filling matrix A:\n";
    fillMatrix(A,n);
    
    cout << "Filling matrix B:\n";
    fillMatrix(B,n);
    
    cout << "Filling matrix C:\n";
    fillMatrix(C,n);
    
    cout << "\nMatrix A:\n";
    printMatrix(A,n);
    
    cout << "\nMatrix B:\n";
    printMatrix(B,n);
    
    cout << "\nMatrix C:\n";
    printMatrix(C,n);
    
    float sumA = sum(A,n);
    float sumB = sum(B,n);
    float sumC = sum(C,n);
    
    float max = findMax(sumA, findMax(sumB,sumC));
    
    if (sumA == max)
    {
    replaceAllNegatives(A,n,max);
    cout << "\nResult Matrix A:\n";
    printMatrix(A,n);
    }
    if (sumB == max)
    {
    replaceAllNegatives(B,n,max);
    cout << "\nResult Matrix B:\n";
    printMatrix(B,n);
    }
    if (sumC == max)
    {
    replaceAllNegatives(C,n,max);
    cout << "\nResult Matrix C:\n";
    printMatrix(C,n);
    }


    
    delete[] A, B, C;
    return 0;
    
    
}