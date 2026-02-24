#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int choice,x,key,n;
    do{
        cout<<"\n\n------VECTOR OPERATIONS MENU------";
        cout<<"\n1.Insert Elements";
        cout<<"\n2.Display Elements";
        cout<<"\n3.Sort Elements";
        cout<<"\n4.Search Elements";
        cout<<"\n5.Exit";
        cout<<"\n6.Delete";
        cout<<"\nEnter your choice";
        cin>>choice;
        switch(choice){

            case 1:
            cout<<"Enter number of elements to insert:";
            cin>>n;
            cout<<"Enter elements:\n";
            for(int i=0;i<n;i++){
                cin>>x;
                v.push_back(x);
            }
            break;

            case 2:
            if(v.empty()){
                cout<<"Vector is empty";
            }else{
                cout<<"Vector Elements:";
                for(vector<int>::iterator it=v.begin();it!=v.end();it++){
                    cout<<*it<<"";
                }
            }
            break;
            
            case 3:
            if(v.empty()){
                cout<<"Vector is empty,cannot sort";
            }else{
                sort(v.begin(),v.end());
                cout<<"Vector sorted successfully";
            }
            break;

            case 4:
            if(v.empty()){
                cout<<"Vector is empty,cannot search";
            }else{
                cout<<"Enter element to search:";
                cin>>key;
                vector<int>::iterator pos=find(v.begin(),v.end(),key);
                if(pos!=v.end()){
                    cout<<"Element found at position"<<(pos-v.begin())+1;
                }else{
                    cout<<"Element not found";
                }
            }
            break;

            case 5:
            cout<<"Exiting program";
            break; 
            default:
            cout<<"Invalid choice,please try again";

    }
 }while(choice!=5);

 return 0;
}