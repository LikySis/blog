#include<stdio.h>


typedef struct{
	int ID;
	char name[10];
	int score[3];
	double aver;
	
}Stu;

int getMaxAver(Stu *student , int num)
{
	int i;
	double maxAver = student[0].aver;
	int mark = 0;
	for(i=1 ; i< num;i++)
	{
		if(maxAver < student[i].aver){
			mark = i;
		}
	}
	
	return mark;
}

int main()
{
	int N = 3;
	Stu student[N];
	
	while(N--)
	{
		scanf("%d%s",&student[N].ID,student[N].name);
		int num;
		int sum = 0;
		for(num = 0 ;num<3;num++){
			scanf("%d",&student[N].score[num]);
			sum +=  student[N].score[num]; 
		}
		student[N].aver = (double)sum / 3.0;
		
	}
	
	N = 3;
	int maxAverMark = getMaxAver(student , N);
//	printf("----%d\n",maxAverMark);
	printf("平均成绩最高的是%s同学：\n",student[maxAverMark].name);

	int num; 
	for(num = 0 ;num<3;num++){
			printf("%d\n",student[maxAverMark].score[num]);
		}
	printf("%.3f\n",student[maxAverMark].aver);
	
	
	return 0;
} 
