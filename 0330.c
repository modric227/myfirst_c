// 20230330 실습

/* Chap.4 교재 Programming 연습문제*/

// 05. 면적의 단위인 평을 제곱미터로 환산하는 프로그램을 작성하라.
//     1평은 3.3m^2, 변수들의 자료형을 선택, 기호 상수를 이용하라.

#define _ CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 0

#define TRANS_TO_PYEONG_1 3.3058
int main() {

	// 기호 상수?
	// 기호 상수와 리터럴 상수가 있음
	// 리터럴 상수는 일반적인 숫자나 문자, 문자열의 형태 ex) 정수 3, 실수 2.5, 문자열 "ABC"
	// 기호 상수는 상수를 다른 문자로 치환하는 것을 말함


	// 기호 상수 사용하기
	const double TRANS_TO_PYEONG = 3.3058;

	double num = 0;
	
	printf("평을 입력하세요: ");
	scanf("%lf", &num);         // %lf: double 형 입력받기

	printf("%lf 평방미터입니다. \n", num * TRANS_TO_PYEONG);
	printf("%lf 평방미터입니다. \n", num * TRANS_TO_PYEONG_1);


	return 0;
}

#endif

// 08. 사용자가 아스키코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력하는 프로그램??,,

#if 0

int main() {

	int input = 0;

	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &input);

	//printf("%%c : %c 입니다.\n", input);
	//printf("%%d : %d 입니다.\n", input);
	 
	// 'a' + 1
	int num = 0;
	scanf("%d", &num);
	num + 1;
	printf("%c", num);

	return 0;
}
#endif

// 10. 다음과 같이 화면에 출력하는 프로그램을 작성하라
//     "ASCII code", 'A', 'B', 'C'
//     \t \a \n

#if 0

int main() {

	printf("\"ASCII\", 'A', 'B', 'C'\n);
		printf("\\t \\a \\n");

	return 0;
}
#endif

// 12. 정수형 변수 실습

#if 0

int main() {

	int i = 255;

	printf("%%d: %d \n", i);
	printf("%%o: %o \n", i);
	printf("%%x: %x \n", i);

	printf("---------------\n");

	i = -1;

	printf("%%d: %d \n", i);
	printf("%%o: %o \n", i);
	printf("%%x: %x \n", i); // 0xfffffff --> 4bytes 전부 사용

	// 255 ---> 0000 0000 .... 1111 1111
	// -1  ---> 1111 1111 .... 1111 1111

	// 1111 1111 .... 1111
	// 1000 0000 .... 0000 ==> toogle
	// 1000 0000 .... 0001 ==> 2's complement



	printf("---------------\n");

	return 0;
}
#endif

/* Chap. 5 수식과 연산자*/

// 5.2 산술연산자
// +, -, *, /, %

// 초단위의 시간을 받아서 몇 분 볓 초 인지 계산하는 프로그램
// 나머지 연산자를 활용하는 문제

#if 0

int main() {

	int input = 0;
	int minute = 0;
	int hour = 0;

	printf(" 초를 입력하시오: ");
	scanf("d", &input);
	minute = input / SEC_PER_, MINUTE;
	minute = input % SEC_PER_, MINUTE;

	printf("d 초는 %dqns %d초 입니다.". input, minute, second);
	// 1000 -> (16분) 960초 + 40초

	return 0;
}
#endif

//증강 연산자

// ++기호나 -- 기호를 사용하여 변수의 값을 1만큼 증가시키거나 감소시킴

// 증감 연산자는 단항 연산자로서 하나의 피연선자만을 가진다.

// ++x ---> x = x + 1과 같은의미
// --x ---> x = x - 1과 같은의미

// ++x, x++, --x, x--

// 변수 x의 값을 증가시킬 목적이라면 동일하게 동착
// 그러나, 증감 연산자를 적용한 하웨 그 연산의 값을 사용할 목적이라면 ㅜ부 필요

// ++x는 x의 값을 먼저 증가시키고, 증가된 x의 값을 수식에 사용
// x++은 x 이전 값을 수식에 사용한 후에 x의 값을 증가시키게 됨

#if 1

int main() {

	int x = 10;
	int y = 10;

	printf("x=%d\n", x);
	printf("++x의 값 =%d\n", ++x);
	printf("x=%d\n\n", x);

	printf("y=%d\n", y);
	printf("y++의 값 =%d\n", y++);
	printf("y=%d\n\n", y);

	int x1 = 10;
	int y1 = 20;
	y1 = (1 + ++x1) + 10;

	printf("-------------\n");
	printf("x1: %d\n", x1);
	printf("y1: %d\n\n", y1);

	int x2 = 10;
	int y2 = 20;
	y2 = (1 + x2++) + 10;

	printf("x2: %d\n", x2);
	printf("y2: %d\n\n", y2);


	return 0;
}
#endif

// 거스름돈 계산하는 프로그램

#if 0

int main() {

	int user = 0;
	int change = 0;

	int price, c5000, c1000, c500, c100;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price);

	printf("사용자가 낸 돈:");
	scanf("%d", &user);
	
	change = user - price;

	c5000 = change / 5000;  // 몫 연산자를 사용해서 5000원권의 개수를 계산
	change = change % 5000; // 나머지 연산자를 사용해서 남은 잔돈을 계산
	
	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change & 100;

	printf("오천원권   : %d장\n", c5000);
	printf("천원권     : %d장\n", c1000);
	printf("오백원 동전: %d장\n", c500);
	printf("백원동전   : %d장\n", 100);
	
	return 0;

}
#endif

// OJ 1315

//시급 7530원을 받고 있는데,
//8시간을 채울 때 마다 보너스로 1000원씩 더 받는다.
//일한 시간(> 0)이 입력되면 임금을 출력하는 프로그램을 작성하시오.

#if 0 

#include <stdio.h>

int main() {

	int work_hour = 0;
	int wage = 0;

	scanf("%d", &work_hour);

	wage = work_hour * 7530;

	wage = wage + (work_hour / 8) * 1000;

	printf("%d", wage);


	return 0;
}
}
#endif

//OJ 1327

//입력된 1개의 정수 ( > 9) n에 대해서, n의 십의 자리 숫자를 출력
//하시오.

#if 1
#include <stdio.h>

int main() {
	
	int num = 0;

	scanf("%d", &num);

	// 24 -> 2, 572 -> 7

	num = num % 100; // 512 -> 12, 1682 -> 82
	num = num / 10;  // 20 -> 2 40 -> 4, 85 ->8. 512 -> 51(x) 1(o)

	printf("%d", num % 10);


	return 0;
}
#endif