void fillMatrix(float** matrix,int size)
 {
     for(int i=0;i<size;i++)
     {
         for(int j=0;j < size;j++)
         {
             cout << "[" << i << "][" << j << "] : ";
             cin >> matrix[i][j];
         }
     }
     return;
 }
 
 void printMatrix(float** matrix, int size)
 {
     for(int i = 0;i<size;i++){
         for(int j =0;j<size;j++){
             cout<<matrix[i][j]<<" ";
             
         }
         cout<<endl;
     }
     return;
 }
 
 float sum(float** matrix,int size){
    float sum = 0;
    
    for(int i=0;i<size;i++)
    {
        for(int j = i + 1;j<size;j++)
        {
            sum += matrix[i][j];
        }
    }
    
    return sum;
}

float findMax(float a,float b)
 {
     if(a > b){
        return a; 
     }
    return b;
 }
 
  void replaceAllNegatives(float** matrix,int size,float value)
 {
     for(int i = 0;i<size;i++)
       {
           for(int j=0;j<size;j++)
           {
               if(matrix[i][j]<0)
               {
                   matrix[i][j] = value;
               }
           }
       }
       return;
 }
 
 