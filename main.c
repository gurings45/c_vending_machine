#include <stdio.h>
#include <stdlib.h>

const int MAX_CASH = 10000;
const int MAX_NUMBER = 10;
const int COKE = 1500;
const int CIDER = 1400;
const int FANTA = 1300;

//자판기 정보 구조체 정의
struct machine_info{

    int coke; int cider; int panta; int cash;
    int number; int total; int change;
};

typedef struct machine_info MACHINE;

void input_price(MACHINE *machine);

int total_cash = 0;

int main()
{
    int flag = 0;
    printf("투입 할 금액 : ");
    scanf("%d", &total_cash);

    //최대 입력 금액
    MACHINE machine(MAX_CASH);

    while(!flag){

        printf("1.메뉴선택       \t");
        switch(select){
        case 1:
            printf("콜라를 선택했습니다.\n");
            getchar();
            getchar();
            system("cls");
            break;
        case 2:
            printf("사이다를 선택했습니다.\n");
            getchar();
            getchar();
            system("cls");
            break;
        case 3:
            printf("환타를 선택했습니다.\n");
            getchar();
            getchar();
            system("cls");
            break;
            default:printf("다시 해주세요.\n");
       }//end of while
    }
    printf("메뉴선택 종료 되었음\n.");
    return 0;
}
        printf("2.수량선택       \t");
        printf("3.총 금액출력    \n");
        printf("4.거스름돈 출력  \t");
        printf("5.화면초기화     \t");
        printf("6.나가기         \n");

        switch(menu){
    case 1:
        select_number(machine);
        printf("수량 입력 완료했습니다.");
        getchar();
        getchar();
        system("cls");
        break;
    case 2:
        total_money(machine);
        getchar();
        getchar();
        system("cls");
        break;
    case 3:
        change_money(machine);
        getchar();
        getchar();
        system("cls");
        break;
    case 4:
        system("cls");
        break;
    case 5:
        flag =1; printf("종료 선택함.\n");
        break;
        default: printf("다시 입력해주세요.\n");
        }//end of while
    }
    printf("자판기 종료 되었음.");
    return 0;
}
void input_price(MACHINE *machine){
    int price = 0;
        printf("금액을 입력해주세요 : ");
        scanf("%d", &price);

	if(price<MAX_CASH){
        printf("입력완료.");
	}else{ ("다시입력해주세요");
	}
	return 0;
}
void choice_menu(MACHINE *machine){

	int choice_flag = 0;
	int i = 0;
	int coke = 1500;
	int cider = 1400;
	int fanta = 1300;

        printf("선택 할 메뉴 : ");
        scanf("%s", &menu[i]);

	//찾는 메뉴가 없을 경우 find_flag :0
	if(!choice_flag)
        printf("찾는 메뉴가 없습니다.\n")
		return;
}
void input_number(MACHINE *machine){
	int choice_number = 0;
	int number = 0;
	int i = 0;

        printf("선택 할 수량 : ");
        scanf("%d", &number[i]);

	for(i=0;i<MAX_NUMBER;i++){
	if(i >  MAX_NUMBER){
        printf("수량입력완료");
        break;
	}else{
        printf("다시입력해주세요.");
        continue;
	}
	return;
}
void print_total(MACINE *machine, int result){
	int result = 0;
    int i = 0;
	result[i] = menu[i]*number[i];
	printf("총 금액은 : %d",result[i]);
	return;
}
void print_change(MACHINE *machine){
    int i = 0;

    for(i=0;i<total_cash;i++){
        printf("%d\n",total_cash);
    }
    return;
}
