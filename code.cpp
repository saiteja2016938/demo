// #include<iostream>
// #include <climits>


// using namespace std;

// int main(){
    
//     int nums[] = {5, 15 , 22, 1, -15, 24};
//     int size = 6;

//     int smallest  = INT_MAX;
//     int smallestindex = 0;
//     int largest = INT_MIN;
//     int largestindex = 0;

//      for(int i = 0 ; i< size ; i++){

//         if(nums[i]< smallest){
//             smallest = nums[i];
//             smallestindex = i;

//         }
//          if(nums[i]> largest){
//             largest = nums[i];
//             largestindex = i;

//         }
//     //     if(nums[i] < smallest){
//     //         smallest = nums[i];
        
//     //    smallest = min(nums[i],smallest);
//     //    largest = max(nums[i],largest);
//      }
//      cout << "smallest number is : "<< smallest << " at the index "<< smalle<< endl;
//      cout << "largest number is : "<< largest << "at the index "<< largestindex<< endl;
//     }

    // int arr[5];
    // int size = 5 ;
    //  for(int i = 0 ;i< size ; i++){
    //     cin >> arr[i] ;

    // }
    

    // for(int i = 0 ;i< size ; i++){
    //     cout << arr[i] << endl;

    // }



    // cout << sizeof(arr)/ sizeof(int)<< endl;
    // cout << arr[0]<< endl;
    // cout << arr[1]<< endl;
    // cout << arr[2]<< endl;
    // cout << arr[3]<< endl;
    // cout << arr[4]<< endl;



// // write a function to reverse an integer n (but we need to make new num of it .)for example if input is n = 125 the new number shoul be 521

// #include<iostream>
// using namespace std;

// int reversenumber(int num){
//     int rev = 0 ;
//     while(num > 0){
//         int dig = num % 10; 
//         rev = rev * 10 + dig;
//         num /= 10;

//     }
// return rev ;
// }

// int main(){
//     int n = 25 ; 
//     int reversed  = reversenumber(n);
//     cout << "reversed number is : "<< reversed << endl;
//     return 0;

// }


// #include<iostream>
// using namespace std;

// bool powerOf2(int n){
//     return (n > 0 )&&((n & (n-1)) == 0);
// }
// int main(){
//     int num = 32;
//     // how to find if a number is power of 2 without any loop 
//     if(powerOf2(num)){
//         cout << num << " is power of 2 "<< endl;
//     }else {
//         cout << num << " is not a power of 2"<< endl;
//     }
// return 0;









//     // if(n % 2 == 0 ){
//     //     cout << true << endl;
//     // }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout << (10 << 2 )<< endl;
//     return 0; 

// }

// #include<iostream>
// using namespace std;
// // int decTobinary(int dec){
// //     int ans = 0;
// //     int pow = 1;

// //     while(dec > 0){
// //         int rem = dec % 2;
// //         dec /= 2;
        
// //         ans += (rem*pow);
// //         pow *= 10;
// //     }
// //     return ans;

// // }

// // binary to decimal function

// int binaryTodecimal(int binarynum){
//     int  ans = 0, pow = 1;
//    while(binarynum >0){
//     int rem = binarynum % 10;
//     ans += rem * pow;
//     binarynum /= 10;
//     pow *= 2;

// }
// return ans;

// }

// int main(){
//     int dec = 101010;
//     cout << binaryTodecimal(dec)<< endl;
//     return 0;

// }


// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     if(n == 0) return 0;
//     if(n == 1) return 1;

//     int a = 0,b= 1, next;

//     for(int i=1 ;i<n; i++){
//         next = a + b;
//         a = b;
//         b = next;
//     }
//     return b;
// }

// int main(){
//     int n = 6;
//     cout << n<<"th fibonacci number is "<<fibonacci(n)<<endl;
// }

// #include<iostream>
// using namespace std;
// // WAF to print all prime numbers form 1 to N 
// bool primeN(int n){

//     if(n<0) return false;

//     for(int i=2 ; i<= n/2; i++){
//         if(n % i == 0){
//            return false;
//         }  
//     }
//     return true;
// }

// int main(){
//     int n = 46;
//     for(int i =1 ; i< n; i++){
//         if(primeN(i)){
//         cout << i <<endl;
//         }
//     }

// }


// #include<iostream>
// using namespace std;
// // write a function to check if a number is prime or not 
// int isprime(int n){
//     for(int i =2 ;i < n; i++){
        
//         if(n % i == 0){
//             return false;
//         }
//     }
//      return true;
// }
// int main(){
//     int n =7;
// if(isprime(7) == true){
//     cout << "prime ";
// }
// else {
//     cout << "non prime";
// }

// }
// // calculate ncr binomial coefficient for n & r f
// int factorial(int n){
//     int fact  = 1;

//     for(int i = 1 ; i<= n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n,int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);

//     return fact_n/(fact_r * fact_nmr);

// }
// int main(){
// int n = 8, r = 2;

// cout << nCr(n,r);
// }
    




// #include<iostream>
// using namespace std;

// int sumOfDigits(int num){
// int digSum =0;

// while(num > 0){
//     int lastDigit = num % 10;
//     num /= 10;
//     digSum += lastDigit;

// }
// return digSum;

// }
// int main(){
//     cout << sumOfDigits(2356)<< endl;
// }
// fun( )
// int main(){
// return 0;

// }

// // function that calculates sum of 2 numbers 
// int sum(int a , int b){
//     int  s = a+b;
//     return s;
// }
// int minOfTwo(int a, int b){
//     if(a<b){
//         return a;
//     }else {
//         return b;
//     }
// }

// void printHello(){
// cout << "hello\n";
// }
//  To calculate the sum of number form 1 to N ;
// int sumN(int n ){

//     int sum = 0;

//     for(int i = 0; i< n; i++){
//         sum += i;
//     }
//     return sum;
// }
//  to claculate n factorial 
// int factorialN(int n){
//     int fact =1;
//     for(int i =1; i<=n ; i++){
//         fact = fact* i;

//     }
//     return fact;
// }

// int k;
// cout << "enter the number :";
// cin >> k ;
// cout << factorialN(k)<< endl;

    // cout << sumN(8)<< endl;


    // cout << min(8,23)<<endl;
//    cout <<  sum(5,7) << endl;
// call function or invoke the function
// printHello();
// printHello();
// printHello();
// printHello();
// printHello();

 






// cout << "hello\n";
 
// int a = 10;
// int b = 5;

// cout <<  "hello\n";





    // funcltion syntax 

    /*
     returntype printhello(){
     cout << hello; 
     } 
    */

    // // butter fly pattern
    // // top 
    // int n = 4;
    // // frist stars
    // for(int i = 0 ; i < n; i++){
    //     for(int j = 0; j<i+1 ; j++){
    //         cout << "*";
    //     }
    //     // space 
    //     for(int j = 0 ; j< 2*(n-1-i);j++){
    //         cout << " ";

    //     }
    //     // last stars 
    //     for(int j = 0 ; j < i+1 ; j++){
    //         cout << "*";
    //     }
    //     cout << endl;

    // }
    // //  bottom

    // for(int i =0 ; i< n; i++){
    //     // stars 
    //     for(int j=n-1 ; j>=i; j--){
    //         cout <<"*";
    //     }
    //     // 
    //     for(int j = 2 ; j< 2*(i+1);j++){
    //         cout << " ";
    //     }
    //      for(int j=n-1 ; j>=i; j--){
    //         cout <<"*";
    //     }

    //    cout << endl;

    // }

    // // top part
    // int n = 4;
    // for(int i = 0; i< n ; i++){
    //     // spaces 
    //     for(int j = 0 ; j< n-i-1; j++){
    //         cout << " ";
    //     }

    //   cout << "*";
    //   if(i != 0 ){ 
    //     // spaces 
    //     for(int j = 0 ; j < 2*i-1 ; j++){
    //         cout << " ";
    //     }

    //     cout << "*";
    // }
    // cout << endl;

    // }
    // // bottom 
    // for(int i =0 ; i< n-1 ;i++){
    //     // spaces 
    //     for(int j = 0 ; j < i+1 ; j++){
    //         cout << " ";
    //     }

    //     cout << "*";

    //     if(i != n-2){

    //         // spaces 
    //         for(int j =0 ; j< 2*(n-i)-5 ;j++ ){
    //             cout << " ";
    //         }
    //       cout << "*";

    //     }
        
    //     cout << endl;

        
    // }

    // int n = 4;
    // for(int i = 0 ; i < n ;i++){
    //     for(int j=0;j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     cout <<"*";
    //     for(int j=0 ; j<=2*i-1; j++){
    //         cout<<" ";
    //     }
    //     if(i != 0){
    //             cout<< "*";
    //         }
    //     cout << endl;
        
    // }
// int n = 6;
// for(int i = 0; i< n; i++){
//     // space : n-i-1
//     for(int j = 0; j< n-i-1; j++){
//         cout << " ";
//     }
//     // num1: i + 1
//     for(int j=1 ; j<=i+1 ; j++){
//         cout << j;
//     }
//     // nums2 : i
//     for(int j = i; j>=1 ;j--){
//         cout << j;
//     }
//     cout  << endl;
// }

    // int n = 4;

    // for(int i = 0 ; i < n; i++){
    //     for(int j = 0 ; j < i ; j++){
    //         cout << " ";
    //         // spaces
    //     }

    //      for(int k =0 ; k < n-i ; k++){
    //         char ch = 'A';
    //         ch = ch + i;
    //         cout << ch;
    //         // numbers  

    //         }
    //         cout << endl;
    // }


    // floids triangle 
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */
// triangle pattern;
//  int n = 5;
//  int num = 1;
//  for( int i = 0 ; i < n ; i++){
//     for(int j = i+1 ; j >= 1 ; j--){
//         cout << j<<" " ;
//     }
//     cout << endl;
   
//  }

    // triangle compation 
    // int n=5;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0 ; j < i+1;j++){
    //         cout << "* ";
           
    //     }
    //     cout << endl;
    // }

    // int n = 3;
    // char ch = 'A';
    
    // for(int i= 1; i <= n; i++){
    //     for(int j = 1 ; j<= n; j++){
    //         cout<< ch << " " ;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
   

//     // squre pattern ;
// int n = 7;

// for(int i = 1; i <= n; i++){
//     char ch = 'A';
//      for(int j = 1; j <= n; j++){
//         cout << ch << " ";
//         ch = ch + 1;
// }
        
//          cout << endl;

// }


    // int n = 7;
    // int count = 1;
    // for(int i=n ; i>=1; i--){
    //   count = count * i;
    // }
    // cout << count << endl;
// sum of all the numbers form 1 to n which are divisible by 3
// int n = 9;
// int count = 0;
// for(int i = 3 ; i <= n; i++){
//     if(i % 3 == 0){
//       count += i;
//     }
// }
// cout << count << endl;
// int n =10;
// for(int i = 1 ; i <= n ; i ++){
// int x = 10;
// for(int j =1; j <= x ; j++){
//     cout << "*"<< " ";
// }
// cout << endl;
// }












// // check if the number is prime or not 

// int n ;
// cout << "enter a number";
// cin >> n;
// bool isprime = true;
// for( int i = 2; i*i <= n ;i++){
//     if(n % i == 0){
//         isprime = false;
//         break;
//     }
// }
// if(isprime == true ){
//     cout << "prime\n";
// }else {
//     cout << "non prime\n";
// }




    // //do while loop ;
    
    // int  n = 10;
    // int i = 1;
    // do{
    //     cout << i << "";
    //     i++;
    // }while(i <= n);
    // cout << endl;

    // // sum of all odd numbers form 1 to n;
    // int n = 8 ;
    // int i ;
    // int sum = 0;
    // for(i = 1; i <= n; i++ ){
    //     if(i % 2 != 0){
    //         sum += i;
    //     }
    // }
    // cout << sum << endl;

    // sum of n numbers using while loop

    // int n;
    // cout << "enter the number :";
    // cin >> n;
    // int sum = 0;
    // int i =1 ;
    // while(i<=n){
    //     sum += i;
    //     i++;
    // }
    // cout << sum << endl;

// //  sum of numbers form 1 to n ; using for loop 
// int n,sum  = 0;
// cout << "enter the number :";
// cin >> n;
// for(int i = 1 ; i<=n ; i++){
//     sum += i;
// }
// cout << sum <<endl;



 // int count = 1;
    // while(count <= 10){
    //     cout << count << " ";
    //     count++;
    // }
    // cout << endl;


// #include<iostream>
// using namespace std;

// int main(){ 


    

// calculator in c++

// int a, b;
// cin >> a ;
// cin >> b ;

// cout << "sum ="<<(a+b)<<endl;
// cout << "diff ="<<(a-b)<<endl;
// cout << "pro ="<<(a*b)<<endl;
// cout << "div ="<<(a/b)<<endl;
// cout << "rem ="<<(a%b)<<endl;


// int a = 10;

// // int b = --a;
// int b = a--;

// cout << "b ="<< b <<endl;
// cout << "a ="<< a <<endl;








// int a = 10;
 
// int b =  ++a;//a++;// kaam ;update


// cout << "b="<< b << endl; //10
// cout <<"a ="<< a << endl; 



//  int a,b,sum;
//  cout<<"enter a :";
//  cin >> a;

//  cout<<"enter b :";
//  cin >> b;

//  sum = a+b;
//  cout << "sum is "<< sum << endl;

// una
// cout << !(3>1)<<endl;
// logical operatiors 
//  AND && , OR || , NOT !

// cout<<(3<5)<< endl;// true ->1;
// cout<<(3>5)<< endl;// false ->0;
// cout<<(3<=3)<< endl;// true ->1;
// cout<<(3==3)<< endl;// true ->1;
// cout<<(3==5)<< endl;// false ->0;
// cout<<(3!=5)<< endl;// true ->0;


/*now Relational operators */
// <, <= , > , >=, == ,!=, =
// 



// int  ans = (5/(double)2);

// cout <<ans << endl;





// int a = 5, b= 10;
// int sum = a + b;
// cout << "sum ="<<(a+b) << endl;
// cout <<"difference ="<<(a-b)<< endl;
// cout << "product"<<(a*b)<< endl;
// cout << "divide"<<(a/b)<< endl;
// cout << "reminder"<<(a%b)<< endl;



    /*
    arthimetic operator + ,-, *, /, % 
    a+b 
    a-b 

     */
    // double price;
    // cout << "enter the price : ";
    // cin >> price;
    // cout << "your price is :"<< price << endl;
    // cout << age << endl;
    // double  price = 100.99; 

    // int newprice = (int)price;
    // cout << newprice << endl;
    // cout << price << endl;
// char grade = 'a'; // A -> 65 ; a -> 97
// int value = grade;
// cout << value <<  endl;

// return 0;
// }











// boiler plate code 
// practice set1 
//    int age = 25;
//    char grade = 'a';
//    float PI = 3.14f;
//    bool issafe = true;
// cout<<issafe<<endl; // true -> 1 & false ->0
