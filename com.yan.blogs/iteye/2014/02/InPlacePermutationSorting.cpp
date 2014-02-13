//In-Place Permutation Sorting

/*solve the problem of sorting numbers in the
range 0 to n^3 in O(n) time*/



#include<iostream>
using namespace std;
void swap(int* a,int p,int q) {
    int temp = a[p];
    a[p] = a[q];
    a[q] = temp;
}

void in_place_permutation_sort(int* a, int p,int q) {
    for(int i=p;i<=q;i++) {
        if(a[i] != i)
           swap(a,i,a[i]);//a[i] should be i,so swap


    }
    
}

int main() {
    int* a= new int[10];
    for(int i=0;i<10;i++) 
       a[i] = 9-i;
    cout<<"==========before sort=========="<<endl;
    for(int i=0;i<10;i++)
       cout<<a[i]<<endl;
    in_place_permutation_sort(a,0,9);
    cout<<"==========after sort=========="<<endl;
    for(int i=0;i<10;i++)
       cout<<a[i]<<endl;
    return 0;
}

