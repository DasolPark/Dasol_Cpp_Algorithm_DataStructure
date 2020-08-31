/*
Q1) 원형 연결 리스트 내의 임의의 노드 하나가 주어졌을 때 해당 List의 길이를 효율적으로 구하는 방법은?

A) 동일한 노드가 나올 때까지 계속 다음 노드로 이동시키면 된다. 
공간복잡도 O(1), 시간복잡도 O(N)
*/

/*
Q2) 중간에 만나는 두 연결 리스트의 시작점들이 주어졌을 때 만나는 지점을 구하는 방법은?

A) 두 리스트의 길이를 구한다. 더 긴 리스트를 작은 리스트와의 차이만큼 감소시켜 같은 길이로 만들고 교차점이 만날 때까지 노드를 이동하면 된다.
공간복잡도 O(1), 시간복잡도O(A+B)
*/

/*
Q3) 주어진 연결 리스트 안에 사이클이 있는 지 판단하라.

A) Floyd's cycle-finding algorithm, 공간복잡도 O(1), 시간복잡도 O(N)
1칸씩 이동하는 말과 2칸씩 이동하는 말을 계속 반복시켜 이동하다보면 결국 만난다.
*/