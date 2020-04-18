//#include <iostream>
//using namespace std;
//int k , n ,sum =0;
//int a[100000] ;
//void printResult() {
//    for(int i =1 ; i <=k ; i++) {
//        cout<<a[i]<<" " ;
//     }
//     cout<<endl ;
//}
//void sinh() {
//    // sinh c?u hình d?u tiên
//    for(int i =1 ; i <=k ; i++) {
//        a[i] =1 ;
//    }
//    printResult() ;
//    // sinh cau hình ti?p theo
//     int j = k ;
//    while(a[1]<n) {
//        if(a[j]==n) {
//            j-- ;
//        }
//        a[j]++ ;
//        sum++;
//        printResult() ;
//}
//}
//
//int main(int argc, char** argv) {
//	cout<<"Nhap k va n:";
//	 cin>>k>>n ;
//    if(k<0 || n < 0 ) {
//        cout<<"Loi: k,n >0"<<endl ;
//    }
//    else {
//        sinh() ;
//    }
//    cout<<"tong:"<<sum;
//	return 0;
//}



// #include <iostream>
//#include <stdio.h>
//#include <math.h>
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//#define size 20
//int A[size], n, k;
////---------------------------------//
//void Print(int k){
//   for(int i = 1; i <= k; i++)
//      printf("%d  ", A[i]);
//   printf("\n");
//}
////---------------------------------//
//int Cnk1(int n, int k){
//	if(k == n || k == 0)return 1;
//	else if(k == 1)return n;
//		 else return Cnk1(n - 1, k)+Cnk1(n - 1, k - 1);
//}
//int Cnk(int n, int k){
//	if(k == 0 || k == n) return 1;
//	return Cnk(n - 1, k) + Cnk(n - 1, k -1);
//}
////---------------------------------//
//void C(int n, int k){
//   int i, c, j;
//   for(i = 1; i <= k; i++)A[i]=i;Print(k);
//   for(c = 2; c <= Cnk(n,k); c++){
//      i = k;
//      while(A[i] == n - k + i)i--;
//      A[i] = A[i] + 1;
//      for(j = i + 1; j <= k; j++)A[j] = A[j - 1] + 1;
//      Print(k);
//   }
//}
//
//
////---------------------------------//
//int main(int argc, char** argv) {
//	int code;  
//	do{
//		printf("n=");code = scanf("%d",&n);
//		if(code == 0) return 1;
//		printf("k= ");code = scanf("%d",&k);
//		if(n > 0 && k > 0 && code != 0)C(n,k);
//    }while(code != 0);	
//	return 0;
//}


//#include <iostream>
// 
//using namespace std;
// 
//int a[100000] ;
//int k , n , sum = 0;
// 
//void printResult() { // hàm dùng ð? in m?t c?u h?nh ra ngoài
//    for(int i = 1 ; i <=k ; i++) {
//        cout<<a[i]<<" " ;
//    }
//    cout<<endl ;
//}
//void backtrack(int i ) { // hàm quay lui
//    for(int j = a[i-1]+1 ; j<=n-k+i ; j++ ) { // xét các kh? nãng c?a j
//        a[i] = j ; // ghi nh?n m?t giá tr? c?a j
//        if(i==k) { // n?u c?u h?nh ð? ð? k ph?n t?
//            // in m?t c?u h?nh ra ngoài
//            printResult() ;
//            sum++;
//        }
//        else {
//            backtrack(i+1) ; // quay lui
//        }
// 
//    }
//}
//void toHop() { // hàm li?t kê các t? h?p
//    if(k>=0 && k <=n ) {
//        a[0] = 0 ; // kh?i t?o giá tr? a[0]
//        backtrack(1) ;
//    }
//    else {
//        cout<<"Loi: khong thoa dieu kien 0<=k<=n "<<endl ;
//    }
// 
//}
// 
// 
//int main()
//{
//    cout<<"Nhan k va n: " ;
//    cin>>k>>n ;
//    toHop()  ;
//    cout<<sum;
//    return 0;
//}

#include <iostream>
using namespace std;

void dem() {
	int count;
	for (int i = 1; i <= 10; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= 9; k++) {
				for (int l = 0; l <= 9; l++) {
					if (i + j + k + l == 10) {
						cout << "cam: " << i << " Xoai: " << j << " Quyt: " << k << " Oi: " << l << "\n";
						count++;
					}
				}
			}
		}
	}
	cout << "count: " << count;
	
}

int main() {
	cout << "Cach mua la:\n";
	dem();
	return 0;
}
