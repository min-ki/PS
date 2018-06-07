## Algoritm

 알고리즘 개념을 정리하고 구현한 파일을 모아놓는 폴더

- Graph
    - Depth first search (깊이우선탐색)

        ```c
        void DFS(int v) {
            
            visited[v] = true; 
            cout << "vertex: " << v << '\n';
            
            for(auto next : adj[v]) {
                if (!visited[next])
                    DFS(next);
            }
        }
        ```

- Recursion
    - Memoization
        - Dynamic Programming 에서 주로 사용 
        ```c
        /* 이항계수를 구하는  알고리즘 */
        long long memo[1001][1001]; // Memoization을 위한 메모리 공간

        long long int bino(long long n, long long k) {
            long long sum = 0;
            
            if(k==0 || n == k) return 1;
            if(memo[n][k] != -1) return memo[n][k];
            
            sum = (bino(n-1, k-1)  + bino(n-1,k))% 10007;
            memo[n][k] = sum; // Memoization 사용
            
            return memo[n][k];
        }
        ```
        
- Sort
    - BubbleSort
    - 
        ```c
        void BubbleSort(int testcase[], int len) {
        	int i, j, temp;
        
        	for (i = 1; i <= len - 1; i++) {
        		for (j = 1; j <= len - i; j++) {
        			if (testcase[j - 1] > testcase[j]) {
        				temp = testcase[j];
        				testcase[j] = testcase[j - 1];
        				testcase[j - 1] = temp;
        			}
        		}
        	}
        }
        ```
        
    - SelectionSort
    
        ```c
        int* SelectionSort(int A[], int length) {
        	int i, j, temp;
        	int min;
        	for (i = 0; i <= length - 2; i++) {
        		min = i;
        		for (j = i + 1; j <= length - 1; j++) {
        			if (A[j] < A[min]) {
        				min = j;
        			}
        		}
        		temp = A[i];
        		A[i] = A[min];
        		A[min] = temp;
        	}
        	return A;
        }
        ```
    - MergeSort
    
    - ShellSort
    
        ```c
        int* ShellSort(int A[], int length) {
        	int gap[] = { 5,3,1 };
        	int i, j, k, currentElement;
        	for (i = 0; i < sizeof(gap) / sizeof(int); i++) {
        		for (j = gap[i]; j <= length - 1; j++) {
        			currentElement = A[j];
        			k = j;
        			while (k >= i && A[k - i] > currentElement) {
        				A[k] = A[k - i];
        				k = k - i;
        			}
        			A[k] = currentElement;
        		}
        	}
        	return A;
         }
        ```
    
    - CountingSort
    
        ```c
        memset(count, 0, sizeof(count));
        
        // count 배열에 입력받은 값의 count를 1씩 증가
        // 입력되는 순서는 상관이 없다.
        while(n--) {
            int num;
            cin >> num;
            count[num]++;
        }
        
        // count 배열에 들어있는 숫자만큼 index를 출력시켜주면 된다.
        for(int i=1; i<=10000; ++i) {
            if(count[i]) {
                for(int j=1; j<= count[i]; ++j) 
                    cout << i << '\n';
            }
        }
        ```
        
    - QuickSort
- Search
    - BinarySearch
- 소수
    - 에라토스테네스의 체 
- 최단경로
    - 플로이드 와샬 알고리즘
    
        ```c
        // 경유지 -> 시작점 -> 도착점 순
        for(int k=0; k<n; ++k) {
            for(int i=0; i<n; ++i) {
                for(int j=0; j<n; ++j) {
                    dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
        ```
    
## BOJ

  알고리즘 문제 프로그래밍 사이트인 백준 온라인 져지의 문제들을 풀어서 모아놓는 폴더
  
  - Language: c++, python3
  - 문제 종류   
    - 구현
    - 수학
    - 시뮬레이션
    - 브루트 포스
    - 다이나믹 프로그래밍
    - 백트래킹
    - 문자열 처리
    - 그리디 알고리즘
    - 정렬
    - 탐색
    - 그래프 : DFS, BFS

## STL
c++에서 제공하는 자료구조와 알고리즘 표준 라이브러리 

- Container
    - Stack
    - Queue, Deque, Priority_queue
    - Vector
    - List
    - Map, Multi map
    - Set, Multi set


