#include <stdio.h>
int mul(int A1[5][2],int A2[2][3],int A3[3][4],int A4[4][3],int A5[3][2],int A6[2][3]);
int main()
{
	int i, j, A1[5][2], A2[2][3], A3[3][4], A4[4][3], A5[3][2], A6[2][3];
	printf("Each matrix has all value of 1(preposition)\n\n");
	printf("A1�迭(5X2)\n=========\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			A1[i][j] = 1;//�������ǿ� ����!
			printf("%2d", A1[i][j]);
		}
		if (j = 1)
		{
			puts("");
			puts("");
		}
	}
	puts("");
	printf("A2�迭(2X3)\n=========\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A2[i][j] = 1;//�������ǿ� ����!
			printf("%2d", A2[i][j]);
		}
		if (j = 2)
		{
			puts("");
			puts("");
		}
	}
	puts("");
	
	printf("A3�迭(3X4)\n=========\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A3[i][j] = 1;//�������ǿ� ����!
			printf("%2d", A3[i][j]);
		}
		if (j = 3)
		{
			puts("");
			puts("");
		}
	}
    puts("");

	printf("A4�迭(4X3)\n=========\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A4[i][j] = 1;//�������ǿ� ����!
			printf("%2d", A4[i][j]);
		}
		if (j = 2)
		{
			puts("");
			puts("");
		}
	}
	puts("");
	
	printf("A5�迭(3X2)\n=========\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			A5[i][j] = 1;//�������ǿ� ����!
			printf("%2d", A5[i][j]);
		}
		if (j = 1)
		{
			puts("");
			puts("");
		}
	}
	puts("");
	printf("A6�迭(2X3)\n=========\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A6[i][j] = 1;//�������ǿ� ����!
			printf("%2d", A6[i][j]);
		}
		if (j = 2)
		{
			puts("");
		}puts("");
	}
	//�迭 ���� �Լ� ȣ��
	mul(A1, A2, A3, A4, A5, A6);
}
//�迭 ���� �Լ� ����
int mul(int A1[5][2], int A2[2][3], int A3[3][4], int A4[4][3], int A5[3][2], int A6[2][3])
{
     int result1=0, result2=0, result3=0, result4=0, result5=0,r,i,j;
	 for (i = 0; i < 5; i++)
	 {
		 for (j = 0; j < 3; j++)
		 {
			 result1 = 0;//�ʱ�ȭ�� �ʼ�!!
			 for (r = 0; r < 2; r++)
			 {
				 result1 += A1[i][r] * A2[r][j];
				 //A1xA2;
			 }
		 }
	
	 }


	 for (i = 0; i < 3; i++)
	 {
		 for (j = 0; j < 3; j++)
		 {
			 result2 = 0;//�ʱ�ȭ�� �ʼ�!!
			 for (r = 0; r < 4; r++)
			 {
				 result2 += A3[i][r] * A4[r][j];
				
				 //A3xA4;
			 }
		 }
		
	 }
	
	 
	 for (i = 0; i < 3; i++)
	 {
		 for (j = 0; j < 3; j++)
		 {
			 result3 = 0;//�ʱ�ȭ�� �ʼ�!!
			 for (r = 0; r < 2; r++)
			 {
				 result3 += A5[i][r] * A6[r][j];
				 //A5XA6;
			 } 
		 }
		
	 }

	 for (i = 0; i < 5; i++)//A1xA2xA3xA4
	 {
		 for (j = 0; j < 3; j++)
		 {
			 result4 = 0;//�ʱ�ȭ�� �ʼ�!!
			 for (r = 0; r < 3; r++)
			 {
				 result4 += result1*result2;
			 }
		 }
	 }
	 
	 for (i = 0; i < 5; i++)//A1xA2xA3xA4xA5xA6
	 {
		 for (j = 0; j < 3; j++)
		 {
			 result5 = 0;//�ʱ�ȭ�� �ʼ�!!
			 for (r = 0; r < 3; r++)
			 {
				 result5 += result4*result3;
			 }
		 }
	
	 }
	 printf("����� ���� ���(A1xA2xA3xA4xA5xA6)\n===================================\n");
	 for (i = 0; i < 5; i++)//A1xA2xA3xA4xA5xA6
	 {
		 for (j = 0; j < 3; j++)
		 {
			 printf("%5d", result5);
			 
		 }
		 if (r = 2)
		 {
			 puts("");
			 puts("");
		 }
		    
	 }
	
		
	


	
	 return result5;
}