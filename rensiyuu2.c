#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	enum {DAIKICHI = 1, CHUKICHI, KICHI, KYO};

	printf("‚ ‚È‚½‚Ì‰^¨‚ğè‚¢‚Ü‚·\n");
	srand((unsigned)time(0UL));
	int fortune = rand() % 4 + 1;

	switch (fortune) {
	case DAIKICHI:
		printf("‘å‹g\n");
		break;
	case CHUKICHI:
		printf("’†‹g\n");
		break;
	case KICHI:
		printf("‹g\n");
		break;
	default:
		printf("‹¥\n");
	}
	return 0;
}