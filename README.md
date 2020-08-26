# Algorithm with C/C++

## 시간 제한 & 메모리 제한

- 컴퓨터는 1초에 대략 3~5억 개 정도의 연산을 처리할 수 있음(연산 종류에 따라 다름)

## Time Complexity & Space Complexity & Big-O Notation

- 입력의 크기와 문제를 해결하는데 걸리는 '시간'의 상관관계(N, N^2, root N, log N...)
- 입력의 크기와 문제를 해결하는데 필요한 '공간'의 상관관계(메모리 제한이 512MB 일 때, int 변수를 대략 1.2억개 정도 선언할 수 있다는 것을 기억해두기! ex) 떠올린 풀이가 크기가 5억인 배열을 필요로 한다면 그 풀이로는 메모리 제한을 만족하지 못함)
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
- 실수는 스트레스 받지 말고 double을 사용할 것(overflow를 피하기 위해)

#### 명심해야 할 것

1. 실수의 저장/연산 과정에서 반드시 오차가 발생할 수 밖에 없다.
2. double에 long long 범위의 정수를 함부로 담으면 안 된다.
3. 실수를 비교할 때는 등호를 사용하면 안 된다.

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
