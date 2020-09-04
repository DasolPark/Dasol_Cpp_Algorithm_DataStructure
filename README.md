# Algorithm with C/C++

## 시간 제한 & 메모리 제한

- 컴퓨터는 1초에 대략 3~5억 개 정도의 연산을 처리할 수 있음(연산 종류에 따라 다름)

## Time Complexity & Space Complexity & Big-O Notation

- 입력의 크기와 문제를 해결하는데 걸리는 '시간'의 상관관계(N, N^2, root N, log N...)
- 입력의 크기와 문제를 해결하는데 필요한 '공간'의 상관관계(메모리 제한이 512MB 일 때, int 변수를 대략 1.2억개 정도 선언할 수 있다는 것을 기억해두기! ex) 떠올린 풀이에서 크기가 5억인 배열을 필요로 한다면 그 풀이로는 메모리 제한을 만족하지 못함)
- 주어진 식에서 가장 값이 큰 대표항만 남겨서 나타내는 방법

## Data Types

### Char

- char: 1byte, -128 ~ 127
- unsigned char: 0 ~ 255

### Integer 정수

- int: 4byte, 대략 +-21억까지 저장 가능
- long long: 8byte (마음 편히 쓰려면 이것만 써도 된다)
- unsigned long long을 벗어나는 문제가 나오면 string을 활용해야한다. but, Python or JavaScript로 해결하는 게 마음 편하다.
- overflow 조심

### Float 실수

- float: 4byte(s1/e8/f23), 유효숫자 6자리(상대 오차 10^-6까지 안전)
- double: 8byte(s1/e11/f52), 유효숫자 15자리(상대 오차 10^-15까지 안전)
- 원래 참 값이 1이라고 할 때, 1-10^-15 ~ 1+10^-15 사이의 값을 가진다는 것을 보장
- 오차가 생기는 것을 막을 수는 없지만, 오차가 어느 정도인지는 알 수 있음
- 실수는 스트레스 받지 말고 **double**을 사용할 것(overflow를 피하기 위해)

#### 명심해야 할 것

1. 실수의 저장/연산 과정에서 반드시 오차가 발생할 수 밖에 없다.
2. double에 long long 범위의 정수를 함부로 담으면 안 된다.
3. 실수를 비교할 때는 등호를 사용하면 안 된다.

## STL(Standard Template Library)과 함수 인자

### 함수 인자

- C++에는 참조자(Reference)가 있다. ex) int &a
- struct는 값을 복사하여 사용하기 때문에 참조할 수 없다(Call by value)

### STL

- vector: 가변 배열
- vector 또한 call by value. 따라서, Reference를 사용해야 한다.(O(N)을 O(1)로 만들 수 있는 경우가 있다 ex)크기 비교 로직)

## 표준 입출력

### printf/scanf | cout/cin | getline | endl

- printf/scanf(C++ string X, char * 이용해야함) or **cout/cin**(추천)
- **getline** 이용 권유(C++ string만 가능): scanf/cin 모두 공백을 포함한 문자열을 입력받을 때 다루기 불편하다(공백 앞까지만 입력을 받기 때문) 
- 즉, 공백을 포함한 문자열을 입력 받을 때, 단순하게 scanf/cin 사용하지 말 것!
- **endl: 개행하고 버퍼를 비우는 명령어(절대 쓰지 말 것)**
 
### Stream Sync & Buffer

- **ios::sync_with_stdio(0 | false), cin.tie(0 | nullptr)**
- 입출력으로 인한 시간초과를 막히 위해 사용(양이 많을 때)
- 전자는 C/C++ Stream 동기화 유무(0이므로 C++ Stream만 사용하겠다 - 수행시간 절약)
- 후자는 cin 명령을 수행하기 전에 cout 버퍼를 비우지 않게 하는 명령어(기본적으로는 cin 명령 수행 전에 비움)
- 이유: Judging site에서는 값만 비교하기 때문에 출력 순서가 바뀌어도 상관 없다
- 결론: 위 설정 후에는 cin/cout만 사용하라

## 코드 작성 팁

- 코딩테스트와 개발은 다르다
- 출력 가장 마지막에 공백 혹은 줄바꿈이 있어도 정답처리에 문제 없다(예외처리할 필요 없다)
- 디버거는 굳이 사용하지 않아도 된다(cout을 권장 - 늪에 빠질 수가 있다)

## 배열 & Vector
- range-based for loop(since c++11) 사용하여 전체 순회 가능

### 배열(Array)

- 메모리 상에 원소를 연속하게 배치한 자료구조
- O(1)에 k번째 원소를 확인/변경 가능(단, 임의의 위치에 원소를 추가/제거는 O(N))
- 추가적으로 소모되는 메모리의 양(=overhead)이 거의 없음
- Cache hit rate가 높음
- 메모리 상에 연속한 구간을 잡아야 하기 때문에 할당에 제약이 걸림

#### 배열 초기화
- memset()은 실수할 여지가 많으니 비추천
- **fill()** 추천(algorithm header)
  
### Vector

- 배열의 거의 동일한 기능을 수행하는 구조 But, 크기를 자유자재로 늘이거나 줄일 수 있다
- STL iterator 기능을 알면 이해하기 더 좋다(why? v.begin() + x)
- push_back, pop_back은 제일 끝에 원소를 추가하거나 빼는 것이니 O(1)
- push_front, pop_front는 가장 앞에 원소를 추가하거나 빼는 것이니 O(N)
- '='를 사용하면 deep copy(v1 = v2)
- vector의 size()는 unsigned int를 반환(unsigned int overflow 발생 가능)

## 연결리스트(Linked List)

- k번째 원소를 확인/변경하기 위해서는 O(k)가 필요함
- 임의의 위치 원소 추가/제거는 O(1)
- 원소들이 메모리 상에 연속하게 있지 않아 Cache hit rate이 낮지만, 할당이 다소 쉬움
- Singly Linked List, Doubly Linked List, Circular Linked List
- list(STL - Doubly Linked List)

### Array VS Linked List

|               항목               | 배열  | 연결 리스트 |
| :------------------------------: | :---: | :---------: |
|        k번째 원소에 접근         | O(1)  |    O(k)     |
|    임의 위치에 원소 추가/제거    | O(N)  |    O(1)     |
|         메모리 상의 배치         | 연속  |   불연속    |
| 추가적으로 필요한 공간(overhead) |   X   |    O(N)     |

- Overhead: 배열은 길이 정보를 저장할 int 1개 정도, 하지만 연결리스트는 각 원소가 이전 노드와 다음 노드의 주소를 가지고 있어야 한다(컴퓨터마다 32Bit=4Byte or 64Bit=16Byte 추가적으로 필요. N에 비례하는 만큼 메모리 추가적으로 필요)
- 텍스트 에디터에서 쓰일 수 있다
- 배열과 연결리스트 모두 선형 자료구조
- 연결리스트 문제는 딱히 응용해서 낼 만한 게 없고, 원소들을 이동하다가 삭제/삽입하는 문제들이 대부분

## Sort

- [x] Selection Sort( O(n^2) )
- [x] Bubble Sort( O(n^2) )
- [x] Insertion Sort( O(n^2) )
- [x] Quick Sort( O(n log n) worst O(n^2) )
- [x] Merge Sort( Guaranteed O(n log n) )
- [ ] Heap Sort ( O(n log n) )

# Data Structure With C/C++

- [x] Linked List
- [ ] Tree
- [ ] Graph

# How to use C/C++ in VSC

- https://code.visualstudio.com/docs/cpp/config-mingw
- Do not use 'Bash shell' with C/C++

## Extensions

- 'C/C++' from Microsoft
- 'Code Runner' from Jun Han(check 'Run in terminal' for user input)

## MinGW

- Mingw-w64
