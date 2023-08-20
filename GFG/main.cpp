//
//  main.cpp
//  GFG
//
//  Created by suraj kumar on 30/07/23.
//

#include <iostream>
#include <vector>

using namespace::std;

// MARK: Recursion problem:-------------------------

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


/// This is the method is used for getting the power of number
/// - Parameters:
///   - R: base
///   - N: power
int powerOfNumberFast(int R, int N) {
    if(N == 0) {
        return 1;
    }
    int subProb = powerOfNumber(R, N / 2);
    int subProbSq = subProb * subProb;
    
    if(N & 1) {
        return R * subProb;
    }
    return subProbSq;
}



//MARK: Tiling Problem:

int HowManyWayToFillingTheTile(int n) {
    
    if(n <= 3) {
        return 1;
    }
    return HowManyWayToFillingTheTile(n - 1) + HowManyWayToFillingTheTile(n - 4);
    
}

/*
 int main() {
     int a = HowManyWayToFillingTheTile(4);
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
void countStrings(int n, string out, int last_digit) {
    
    if (n == 0)
    {
        cout << out << endl;
        return;
    }
    
    countStrings(n - 1, out + "0", 0);
//    if (last_digit == 0) {
        countStrings(n - 1, out + "1", 1);
//    }
}


/*
 int main() {
     countStrings(2, "", 0);
 }

 */

void findSubset(char *input, char *output, int i, int j) {
    if(input[i] == '\0') {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }
    output[j] = input[i];
    findSubset(input, output, i + 1, j + 1);
    findSubset(input, output, i + 1, j);
}
/*
 int main() {
     char input[100];
     char output[100];
     cin>>input;
     findSubset(input, output, 0, 0);
     
 }

 */


void perm(char S[], int k) {
    static int A[10] = {0};
    static char res[10];
    int i;
    
    if(S[k] == '\0') {
        res[k] = '\0';
        printf("%s ", res);
    } else {
        for(i = 0; S[i] != '\0'; i++) {
            if(A[i] == 0) {
                res[k] = S[i];
                A[i] = 1;
                perm(S, k + 1);
                A[i] = 0;
            }
        }
    }
}

/*
 int main() {
     char str[] = "ABC";
     int k = 0;
     perm(str, k);
 }

 */

void swaping(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

//MARK: Kadane's Algorithm(Brute force)

void kadaneAlgorithm(int arr[], int size) {
    int sum = 0;
    
    int beforSum = INT_MIN;
    
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        
        if(sum > beforSum) {
            beforSum = sum;
        }
    }
    printf("%d ", beforSum);
}

/*
 int main() {
     int arr[] = {-1,-2,-3,-4};
     int size = sizeof(arr) / sizeof(arr[0]);
     kadaneAlgorithm(arr, size);
 }

 */



//MARK: Subarray with given sum:(Array Question)

void subarraySum(int arr[], int n, int target) {
    
    int sum = arr[0];
    int start = 0;
    bool found = false;
    
    for(int i = 1; i < n; i++) {
        
        while (sum > target && start < n - 1) {
            sum = sum - arr[start];
            start++;
            found = true;
        }
        if(sum == target) {
            printf("%d %d", start, i);
            break;
        }
        sum += arr[i];
    }
    if(found == false) {
        printf("not found");
    }
    
}


//MARK: N Queen problem

void printBoard(int n, int baord[][20]) {
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d", baord[i][j]);
        }
    }
}





// MARK: GEEKS FOR GEEKS BASICS QUESTION
// MARK: Binary Search

int BinarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if(mid == key) {
            return mid;
        } else if(arr[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}
/*
 int main() {
     int arr[] = {1, 2, 3, 4, 5};
     int size = sizeof(arr) / sizeof(arr[0]);
     int key = 2;
     BinarySearch(arr, size, key);
 }

 */

// MARK: Recursive Binary Search

int RBinarySearch(int arr[], int left, int right, int key) {
    
    if(right >= left) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] < key) {
            RBinarySearch(arr, mid + 1, right, key);
        } else {
            RBinarySearch(arr, left, mid - 1, key);
        }
    }
    return -1;
}

// MARK: Union of two arrays-


/// Union of two arrays-(this method is not hanlding the duplicate element)
/// - Parameters:
///   - arr1: arr1
///   - arr2: arr2
///   - m: size of arr1
///   - n: size of arr2
void doUnion(int arr1[], int arr2[], int m, int n) {
    int i = 0;
    int j = 0;
    
    while (i < m && j < n) {
        
        if(arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if(arr1[i] > arr2[j]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr2[j]);
            i++;
            j++;
        }
    }
    
    while (i < m) {
        printf("%d", arr1[i++]);
    }
    while (j < n) {
        printf("%d", arr2[j++]);
    }
}

// MARK: Union of two arrays-


void UnionArray(int arr1[], int arr2[], int m, int n) {
    
    
}

int main() {
    int arr1[] = {3, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    UnionArray(arr1, arr2, m, n);
}

