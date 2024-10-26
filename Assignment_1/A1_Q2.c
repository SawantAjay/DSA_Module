// Analyze complexity of loops and recursive algorithms

int main()
{
    int n, m, k;
    int a = 0, b = 0;
    
    // Loop with complexity O(n)
    for (int i = 0; i < n; i++) {   
        a = a + rand();
    }
    
    // Loop with complexity O(m)
    for (int j = 0; j < m; j++) {    
        b = b + rand();
    }

    int a = 0, b = 0;
    
    // Nested loop with complexity O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { 
            a = a + j;    
        }
    }

    // Single loop with complexity O(n)
    for (k = 0; k < n; k++) {
        b = b + k;
    }

    int a = 0;
    
    // Nested loop with decreasing inner loop complexity O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            a = a + i + j;       
        }
    }
}

/* Complexity of above program: 

1. O(N + M) for the two independent loops
2. O(N^2) for the nested loops with j increasing with each i
3. O(N^2) for the nested loops with j decreasing with each i */
