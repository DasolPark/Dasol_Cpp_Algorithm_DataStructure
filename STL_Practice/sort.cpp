// Default
// template <class RandomAccessIterator>
// void sort (RandomAccessIterator first, RandomAccessIterator last);

// Custom
// template <class RandomAccessIterator, class Compare>
// void sort(RandomAccessIterator first, RandomAccessIterator last, Compare comp);

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int arr[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};

  sort(arr, arr + 10);

  for (int i = 0; i < 10; i++)
    cout << arr[i] << ' ';

  return 0;
}

// *With function(descending)
// #include <iostream>
// #include <algorithm>

// using namespace std;

// bool compare(int a, int b){
// 	return a > b;
// }

// int main(void)
// {
//   int arr[10] = {9, 3, 5, 4, 1, 0, 8, 6, 7, 2};

//   sort(arr, arr + 10, compare);

//   for (int i = 0; i < 10; i++)
//     cout << arr[i] << ' ';
//   cout << "\n";

//   return 0;
// }

// *데이터를 묶어서 정렬하는 방법 with Object
// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// class Student
// {
// public:
//   string name;
//   int score;
//   Student(string name, int score)
//   {
//     this->name = name;
//     this->score = score;
//   }

//   // 정렬 기준은 '점수가 작은 순서'
//   bool operator<(Student &student)
//   {
//     return this->score < student.score; // Descending( > )
//   }
// };

// int main(void)
// {
//   Student students[] = {
//       Student("David", 100),
//       Student("Jose", 93),
//       Student("Peter", 80),
//       Student("Pope", 70),
//       Student("Ellie", 55)};

//   sort(students, students + 5);

//   for (int i = 0; i < 5; i++)
//   {
//     cout << students[i].name << ' ';
//     cout << students[i].score << '\n';
//   }

//   return 0;
// }