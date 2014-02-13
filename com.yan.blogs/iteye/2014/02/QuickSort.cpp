/*

快速排序
*/


#include<iostream>

using namespace std;

void swap(int a[],int p,int q) {
    int temp = a[p];
    a[p] = a[q];
    a[q] = temp;
}
int partition(int a[],int p,int q) {
    int i = p-1;
    //j = p+1; //error
    int j = p;
    int pivot = a[q];
    for(;j<q;j++) {
        if(a[j] < pivot) {
            i++;
            swap(a,i,j);
        }
           
    }
    i++;
    swap(a,i,q);
    return i;
}

void quicksort(int a[] ,int p,int q) {
    if(p<q) {
    int r = partition(a,p,q);
    quicksort(a,p,r-1);
    quicksort(a,r+1,q);
    }
}
int main() {
    int a[] ={5,4,3,2,1};
    cout<<"before sort............"<<endl;
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    quicksort(a,0,4);

    cout<<"after sort............"<<endl;
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;

    
}


