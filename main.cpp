#include <iostream>
using namespace std; 




int largerNum(int firstN, int secN){
    int largest;

    if(firstN>secN){
        return firstN;

    }else if(secN>firstN){
        return secN;
    

    }else if(firstN==secN){
        return 0;
    }
    
}

int smallestNum(int firstN, int secN){
    int smallest;

    if(firstN>secN){
        return secN;

    }else if(secN>firstN){
        return firstN;
    

    }else if(firstN==secN){
        return 0;
    }
    
}



int main(){
    int firstNum, secNum, resultL, resultS, result;
    

    cout<<"Enter the first number: ";
    cin>>firstNum;
    cout<<"Enter the first number: ";
    cin>>secNum;



    resultL= largerNum(firstNum, secNum);
    cout<<"The largest number is: "<<resultL<<endl;

    resultS= smallestNum(firstNum, secNum);
    cout<<"The smallest number is: "<<resultS<<endl;





    for(int i = resultS; i<=resultL; i++){
        cout<<i<<endl;
        result= result+i;
    }

    cout<<"The total sum of the numbers in between, "<<firstNum<<" & "<<secNum<<" is "<<result<<endl;
    
    return 0;
    
    }