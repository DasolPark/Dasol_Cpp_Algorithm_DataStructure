/* 
Q1) N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다.
*/

/*
Q2) 주어진 길의 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을, 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라. arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.
 */

/*
Q3) N이 제곱수이면 1을 반환하고, 제곱수가 아니면 0을 반환하는 함수 func3(int N)을 작성하라. N은 10억 이하의 자연수이다.
*/

/*
Q4) N이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수 func4(int N)을 작성하라. N은 10억 이하의 자연수이다.
*/

#include <cmath>
#include <iostream>

using namespace std;

// Q1 3 || 5
int func1(int N) {
  int result = 0;
  for (int i = 1; i <= N; i++) {
    if (i % 3 == 0 || i % 5 == 0) result += i;
  }

  return result;
}

// Q2 100
int func2(int *arr, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++)
      if (arr[i] + arr[j] == 100) return 1;
  }

  return 0;
}

// Q3 sqrt
int func3(int N) {
  for (int i = 1; i * i <= N; i++) {
    if (i * i == N) return 1;
    // if ((N % i == 0) && (N / i == i)) return 1;
  }
  return 0;
}

// Q4 Max 2^
int func4(int N) {
  int val = 1;
  while (2 * val <= N) val *= 2;
  return val;
  // int i = 1;
  // while (pow(2, i) <= N) i++;
  // return pow(2, i - 1);
}

int main() {
  // Q1
  cout << "Q1" << endl;
  cout << func1(16) << endl;
  cout << func1(34567) << endl;
  cout << func1(27639) << endl;

  // Q2
  cout << "Q2" << endl;
  int arr1[] = {1, 52, 48};
  int arr2[] = {50, 42};
  int arr3[] = {4, 13, 63, 87};

  cout << func2(arr1, 3) << endl;
  cout << func2(arr2, 2) << endl;
  cout << func2(arr3, 4) << endl;

  // Q3
  cout << "Q3" << endl;
  cout << func3(9) << endl;
  cout << func3(693953651) << endl;
  cout << func3(756580036) << endl;

  // Q4
  cout << func4(5) << endl;
  cout << func4(97615282) << endl;
  cout << func4(1024) << endl;

  return 0;
}

/* Time Complexity
  Q1) O(N)
  Q2) O(N^2)
  Q3) O(root N)
  Q4) O(log N)
*/