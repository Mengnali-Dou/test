#include <stdio.h>
float BMI(float weight,float height)   //用于计算BMI
{
	float bmi;
	bmi=weight/(height*height);
	return bmi;
}
void judge(float bmi)   //用于判断体重是否达标
{
	if(bmi<18.5)
	{
		printf("体重超轻!\n");
	}
	else if(bmi>23.9)
	{
		printf("体重超重!\n");
	}
	else
	{
		printf("体重合格!\n");
	}
}
void main()
{
	float weight,height;
	float bmi;
	printf("请输入体重(kg):");
	scanf("%f",&weight);
	printf("请输入身高(m):");
	scanf("%f",&height);
	bmi=BMI(weight,height);   //调用bmi函数判断体重
	printf("*********************\n");
	printf("身体质量指数BMI=%.2f\n",bmi);
	judge(bmi);   //调用judge函数
	printf("********************\n");
}