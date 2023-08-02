//
//  main.cpp
//  GFG
//
//  Created by suraj kumar on 30/07/23.
//

#include <iostream>
#include <vector>

using namespace::std;

// MARK: Recursion problem:---------I believe one day----------------

/// This is related to fibonacci of numebr
/// - Parameter n: number
int fibonacciSeries(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacciSeries(n - 2) + fibonacciSeries(n - 1);
}

/*
 int main() {
     int a = fibonacciSeries(3);
     printf("%d ", a);
 }

 */


/// This is factoral of numebr
/// - Parameter n: number
int fact(int n) {
    //base case
    if(n == 0) {
        return 1;
    }
    int ans = n * fact(n - 1);
    return ans;
    
}
/*
 int main() {
     int n = 5;
     fact(n);
 }

 
 */



/// This function is used for checking the array is sorted or not
/// - Parameters:
///   - arr: array
///   - size: size of Array
bool isSorted(int arr[], int size) {

    if(size == 0 || size == 1) {
        return true;
    }
    if(arr[0] < arr[1] && isSorted(arr + 1, size - 1)) {
        printf("Yes");
        return true;
    }
    return false;
}


/// This function is used for checking the array is sorted or not method 2
/// - Parameters:
///   - arr: array
///   - size: size of Array
bool isSortedTwo(int arr[], int i, int n) {
    
    if(i == n - 1) {
        return true;
    }
    
    if(arr[i] < arr[i + 1] && isSortedTwo(arr, i + 1, n)) {
        return true;
    }
    return false;
}

/*
 int main() {
     int arr[] = {1,2,3,5,4,6};
     int size = sizeof(arr) / sizeof(arr[0]);
     isSorted(arr, size);
 }
 */

/// This method is print the numebr in the form of decreasing order
/// - Parameter N: number
void DecreasingOrder(int N) {
    
    if(N == 0) {
        return;
    }
    printf("%d ", N);
    DecreasingOrder(N - 1);
}


/// This method is print the numebr in the form of IncreasingOrder order
/// - Parameter N: number
void IncreasingOrder(int N) {
    
    if(N == 0) {
        return;
    }
    IncreasingOrder(N - 1);
    printf("%d ", N);
    
}

/*
 int main() {
     int number = 5;
     IncreasingOrder(number);
 }

 */



/// this function is ued for find the power of number
/// - Parameters:
///   - R: base
///   - N: power
int powerOfNumber(int R, int N) {
    
    if(N == 0) {
        return 1;
    }
    return  R * powerOfNumber(R, N - 1);
}

/*
 int main() {
     int a = powerOfNumber(2, 10);
     printf("%d ", a);
 }

 */



/// This is function is to find the how many to paried the combination of people so can go to party
/// - Parameter N: total people
int FriendProblem(int N) {
    
    if(N == 0 || N == 1) {
        return 1;
    } else {
        int count = FriendProblem(N - 1) + (N - 1) * FriendProblem(N - 1);
        return count;
    }
    return 0;
}


/// This function is used for static variable in recursive call
/// - Parameter n: number
int RecursiveFuntionwithStatic(int n) {
    static int x = 0;
    if(n > 0) {
        x++;
        int temp = RecursiveFuntionwithStatic(n - 1) + x;
        return temp;
    }
    return 0;
    
}
/*
 int main() {
     int N = 5;
     int a = RecursiveFuntionwithStatic(N);
     printf("%d ", a);
 }
 */



///Type of Recursion
///1->Tail Recursion


/*
 Note:
 some compiler if any function is check as tail recursion then compiler is converted in
 in to loop to reduce the space complexity
 */


/// this is tail recursion
/// - Parameter n: number
void tailRecursion(int n) {
    if(n > 0) {
        printf("%d ", n);
        tailRecursion(n - 1);
    }
}

///Count the number of Binary string with no consecutive onece that can be formed using Binary string Length N

/// To find the binary string of no consecutive ones
/// - Parameter N: nummber
void BinaryString(int N) {
    
}



