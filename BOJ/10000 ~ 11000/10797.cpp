#include <cstdio>
#define MAX 5
int main() {
		int Day;
		int Car[MAX];
		int count = 0;

		scanf("%d",&Day);
		for(int i=0; i<5;i++)
		{
				scanf("%d",&Car[i]);
				if(Car[i] == Day) count++;
		}
		printf("%d \n", count);
		return 0;
}