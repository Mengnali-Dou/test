#include <stdio.h>
float BMI(float weight,float height)   //���ڼ���BMI
{
	float bmi;
	bmi=weight/(height*height);
	return bmi;
}
void judge(float bmi)   //�����ж������Ƿ���
{
	if(bmi<18.5)
	{
		printf("���س���!\n");
	}
	else if(bmi>23.9)
	{
		printf("���س���!\n");
	}
	else
	{
		printf("���غϸ�!\n");
	}
}
void main()
{
	float weight,height;
	float bmi;
	printf("����������(kg):");
	scanf("%f",&weight);
	printf("���������(m):");
	scanf("%f",&height);
	bmi=BMI(weight,height);   //����bmi�����ж�����
	printf("*********************\n");
	printf("��������ָ��BMI=%.2f\n",bmi);
	judge(bmi);   //����judge����
	printf("********************\n");
}