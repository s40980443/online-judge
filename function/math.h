
//Search maximum
int max(int x , int y) 
{
    if(x>y)
        return x;
    else
        return y;
}

//Search Minimum
int min(int x , int y){ 
    if (x<y)
        return x;
    else
        return y;
}

 //Swap Number
void swap(int * x , int * y){
    int temp = * x;
    * x = * y ;
    * y = temp;
}

//Bubble Sort 
//From Small To Large
void bubbleSort(int arr[], int size){  
    for (int i = 0 ; i<size; i++){
        for (int j = 0 ; j<size-1-i ; j++ ){
            if (arr[j]> arr[j+1]){
                swap(&arr[j] , &arr[j+1]);
            }
        }
    }
}