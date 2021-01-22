# 프로그래밍 환경, 디버깅 및 기본 함수 관련

### 실습의 목표
> 리눅스에서 C 프로그래밍 개발, 디버깅 환경, C 언어 기본 라이브러리 함수에 대한 개념을 학습하는 것을 목표로 함.

### 기본 지식
> 1. gcc, make, svn, git 및 C 언어 프로그래밍에서 디버깅에 대한 이해와 gdb 및 ddd 디버거 사용 환경에 대한 지식
> 2. C 언어 라이브러리 표준 및 기본 라이브러리 함수들에 대한 이해와 지식

---
### 파일 내용
**1. no1**
- 사칙연산 (덧셈 add, 뺄셈 subtract, 곱셈 multiply, 나눗셈 divide) 에 대한 함 수와 이 함수들을 이용하는 예제 프로그램

**2. no2**
- 사칙연산 프로그램에 대하여, C소스 파일들을 목적 파일로 만들고 만든 파일을 이용하여 Makefile을 작성한다. ( 라이브러리 관련 파일들은 서브 디렉토리에 )

**3. no4**
- 사칙연산 프로그램에 대한 GDB와 DDD 테스트

**4. no5**
- perror() 함수 구현
    > 라이브러리 함수인 perror() 함수와 동일하게 동작하는 my_perror() 함수 구현

**5. no6**
- assert() 함수 구현
    > 라이브러리 함수인 assert() 함수와 동일하게 동작하는 my_assert() 함수 구현

**6. no7**
- 사칙연산 프로그램에 대하여 gprof 프로파일링과 Valgrind 메모리 누수 디버깅 적용

**7. no8**
- 두 행렬의 크기를 입력받아서 필요한 만큼의 메모리를 동적으로 할당하여 내용을 저장하고 두 행렬을 더하는 프로그램

**8. no9**
- 학생 수를 입력받은 다음, 학생 이름, 중간 성적, 기말 성적을 기록하는 구조체를 학생 수만큼 동적으로 할당 받아서 이를 트리 구조체를 활용하여 트리 탐색할 수 있는 프로그램
