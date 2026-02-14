class MatrixAddition
{
  public static void main(String[] args)
{
   int[ ][ ] matrixA = {
   {1,2,3},
   {4,5,6},
   {7,8,9},
 };

 int[ ][ ] matrixB = {
   {9,8,7},
   {6,5,4},
   {3,2,1}
  };
  int rows = matrixA.length;
  int columns = matrixA[0].length;
  int[][] result = new int[rows][columns];
  for(int i = 0; i < rows; i++)
{
  for(int j = 0; j < columns; j++)
{
  result[i][j] = matrixA[i][j] + matrixB[i][j];
   }
 }
 System.out.println("Matrix A:");
 printMatrix(matrixA);
 System.out.println("Matrix B:");
 printMatrix(matrixB);
 System.out.println("MatrixA + Matrix B:");
 printMatrix(result);
}
 class MatrixMultiplication {
  
  public static void main(String[] args) {

   int[][] matrixA = {{1,2,3}, {4,5,6}};
   int[][] matrixB = {{10,11}, {20,21}, {30,31}};

   int rowsA = matrixA.length;
   #include <stdio.h>
int main() 
{
   int i=1;
   int count=0;
   for(i=2;i<=10;i++);
   {
       if(i%2==0)
       {
           count++;
       }
   }
   printf("count=%d\n",count);
   return 0;
}

 
 
 
    


    
    

    
    
    
    


    
    
    
    
