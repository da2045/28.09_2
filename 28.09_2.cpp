//#include <iostream>
//using namespace std;
//
//double average(int array[], int size) {
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += array[i];
//    }
//    return static_cast<double>(sum) / size;
//}
//
//int main() {
//    int size;
//
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    int array[size];
//    cout << "Enter the elements of the array:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cin >> array[i];
//    }
//
//    double avg = average(array, size);
//
//    cout << "The average of the array elements is: " << avg << endl;
//
//    return 0;
//}




//void countElements(int array[], int size, int& positives, int& negatives, int& zeros) {
//    positives = negatives = zeros = 0;
//    for (int i = 0; i < size; ++i) {
//        if (array[i] > 0) {
//            positives++;
//        }
//        else if (array[i] < 0) {
//            negatives++;
//        }
//        else {
//            zeros++;
//        }
//    }
//}
//
//int main() {
//    int size;
//
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    int array[size];
//    cout << "Enter the elements of the array:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cin >> array[i];
//    }
//
//    int positives, negatives, zeros;
//    countElements(array, size, positives, negatives, zeros);
//
//    cout << "Positive elements: " << positives << endl;
//    cout << "Negative elements: " << negatives << endl;
//    cout << "Zero elements: " << zeros << endl;
//
//    return 0;
//}



//
//int gcd(int a, int b) {
//    if (b == 0)
//        return a;
//    else
//        return gcd(b, a % b);
//}
//
//int main() {
//    int num1, num2;
//
//    cout << "Enter the first number: ";
//    cin >> num1;
//    cout << "Enter the second number: ";
//    cin >> num2;
//
//    int result = gcd(num1, num2);
//
//    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << result << endl;
//
//    return 0;
//}
