import java.util.Scanner;
class Matrix_use
{
      public static void main(String[] args)
	  {
		  int[][] mat1;
		  int[][] mat2;
		  int[][] mat3;
		  int[][] mat4;
		  int[][] mat5;
		  int r1,c1,r2,c2;
		  Scanner sc=new Scanner(System.in);
		  System.out.println("\nEnter row of first matrix ");
		  r1=sc.nextInt();
		  System.out.println("\nEnter column of first matrix ");
		  c1=sc.nextInt();
		  System.out.println("\nEnter row of second matrix ");
		  r2=sc.nextInt();
		  System.out.println("\nEnter column of second matrix ");
		  c2=sc.nextInt();
		   mat1=new int[r1][c1];
		   mat2=new int[r2][c2];
		   mat3=new int[r1][c2];
		   mat4=new int[r2][c1];
		   mat5=new int[r1][c2];
		   System.out.println("Enter first matrix value");
		   getval(mat1);
		   System.out.println("Enter second matrix value");
		   getval(mat2);
		    if(r1==r2 && c1==c2)
		    {
			 
			  for(int i=0;i<r1;i++)
			  {
				  for(int j=0;j<c1;j++)
				  {
					 mat3[i][j]=mat1[i][j]+mat2[i][j];
				  }
			  }
			  System.out.println("additon of the matrix");
			  display(mat3);
			  System.out.println("substraction of the matrix");
			   for(int i=0;i<r1;i++)
			  {
				  for(int j=0;j<c1;j++)
				  {
					 mat5[i][j]=mat1[i][j]-mat2[i][j];
				  }
			  }
			  display(mat5);
		  }
			 		  
		  else
		  {
			  System.out.println("\nmatrix addtion or substraction is not possible");
		  }
		  
		  System.out.println(r1+" "+r2);
		  if(c1==r2)
		  {
			  for(int i=0;i<r1;i++)
			  {
				  for(int j=0;j<c1;i++)
				  {
					  for(int k=0;k<r2;k++)
					  {
						  mat4[i][j] += mat1[i][k] * mat2[k][j];
						  
					  }
				  }
			  }
			  System.out.println("\nmatrix multiplication");
		      display(mat4);
		  }
	     else
		 {
			 System.out.println("matrix multiplication is not possible");
		 }
           
		  
		  
	  }
	     public static void getval(int[][] mat)
		  {
			  Scanner sc1=new Scanner(System.in);
			 // System.out.println("Enter matrix value");
			  for(int i=0;i<mat.length;i++)
			  {
				  for(int j=0;j<mat[i].length;j++)
				  {
					 mat[i][j]=sc1.nextInt(); 
				  }
			  }
		  }
		  public static void display(int[][] mat)
		  {
			   for(int i=0;i<mat.length;i++)
			  {
				  for(int j=0;j<mat[i].length;j++)
				  {
					System.out.print(mat[i][j]+"\t");
				  }
				  System.out.println();
			  }
			 

		  }
}