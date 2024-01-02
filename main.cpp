#include <iostream>
#include <vector>
using namespace std ;

class SET{
public:

    vector< vector <int> >set_collection;
    int set_num;
    int data;

    /* SET(){vector<int> a;
        set_collection.push_back(a);} */
    void put_in(int set_num , int data ){
        if(set_num<set_collection.size()){
            if (search(set_num,data)==1) {;}
            else{set_collection[set_num].push_back(data);}}
        else{insert_set(set_num);
         set_collection[set_num].push_back(data);}
         sort(set_num);


    }

    void insert_set(int set_num){
        for (int i = set_collection.size(); i <=set_num; i++)
        {
           vector<int>temp;
            set_collection.push_back(temp);
        }
    }

    int search(int set_num, int data) {
    for (int i = 0; i < set_collection[set_num].size(); i++) {
        if (data == set_collection[set_num][i]) {
            return 1;
        }
    }
    return 0;
}

    void insert1(int set_num,int data){
    if(set_num<set_collection.size()){
        if (search(set_num,data)==1) {cout<<set_collection[set_num].size()<<endl;}
        else{set_collection[set_num].push_back(data);
         cout<<set_collection[set_num].size()<<endl;}}
     else{insert_set(set_num);
         set_collection[set_num].push_back(data);
         cout<<"1"<<endl;}
         sort(set_num);
    }


    void Delete(int set_num , int data){
            for (int i = 0; i < set_collection[set_num].size(); i++){
                if ( data == (set_collection[set_num][i]) ){
                    (set_collection[(set_num)]).erase(set_collection[(set_num)].begin() + i);i--;
                    break;}
                } cout<<set_collection[set_num].size()<<endl;}

    void sort(int set_num){
        int p;
        int temp;
        for (int i = 0; i < set_collection[set_num].size(); i++){
            p = i;
            for (int j = i + 1; j < set_collection[set_num].size(); j++){
                if (set_collection[set_num][j] < set_collection[set_num][p]) {p = j;}}
            temp = set_collection[set_num][p];
            set_collection[set_num][p] = set_collection[set_num][i];
            set_collection[set_num][i] = temp;}

    }

    void Belongs_To(int set_num , int data){
        if (set_num<set_collection.size()&& set_num>=0){
            if(search(set_num ,data)==1){cout<<"1"<<endl;}
            else{cout<<"0"<<endl;}
        }
        else{cout<<"-1"<<endl;}
    }

    void Union(int set_num1 , int set_num2){
        if(set_num1<set_collection.size() && set_num2<set_collection.size()){
            if(set_collection[set_num1].size()==0&&set_collection[set_num2].size()>=0){set_collection[set_num1]=set_collection[set_num2];cout<<set_collection[set_num1].size()<<endl;}
            else if (set_collection[set_num1].size()>=0&&set_collection[set_num2].size()==0){cout<<set_collection[set_num1].size()<<endl;}
            else{
            for (int i = 0; i < set_collection[set_num2].size(); i++)
            {
                if (search(set_num1,set_collection[set_num2][i])==1) {;}
            else{set_collection[set_num1].push_back(set_collection[set_num2][i]);
                 }
            }
            sort(set_num1);
                cout<<set_collection[set_num1].size()<<endl;}}
        else if (set_num1>=set_collection.size() && set_num2<set_collection.size()){
            //vector<int> temp;
            insert_set(set_num1);
            set_collection[set_num1]=set_collection[set_num2];
                 cout<<set_collection[set_num1].size()<<endl;
        }
        else if (set_num1<set_collection.size() && set_num2>=set_collection.size()){
            insert_set(set_num2);
            cout<<set_collection[set_num1].size()<<endl;}
        else {insert_set(set_num1);
        insert_set(set_num2);
        cout<<"0"<<endl;}}

    void intersection(int set_num1 , int set_num2){
    vector<int> temp;

        if (set_num1 < set_collection.size() && set_num2 < set_collection.size()) {
            for (int i = 0; i < set_collection[set_num1].size(); i++){
                for (int j = 0; j < set_collection[set_num2].size(); j++){
                if(set_collection[set_num1][i]==set_collection[set_num2][j]){
                    temp.push_back(set_collection[set_num1][i]);}

                }
            } set_collection[set_num1]=temp;
                cout<<set_collection[set_num1].size()<<endl;}
        else if (set_num1>=set_collection.size() && set_num2<set_collection.size())
                    {
                        insert_set(set_num1);
                    cout<<"0"<<endl;
                    }
        else if (set_num1<set_collection.size() && set_num2>=set_collection.size())
        {    vector <int> temp1;
           insert_set(set_num2);
           set_collection[set_num1]=temp1;
                cout<<"0"<<endl;
        }
        else{
            insert_set(set_num1);
            insert_set(set_num2);
            cout<<"0"<<endl;
        }
        }



void intersection_it(int set_num1 , int set_num2){
    vector<int> temp;

        if (set_num1 < set_collection.size() && set_num2 < set_collection.size()) {
            for (int i = 0; i < set_collection[set_num1].size(); i++){
                for (int j = 0; j < set_collection[set_num2].size(); j++){
                if(set_collection[set_num1][i]==set_collection[set_num2][j]){
                    temp.push_back(set_collection[set_num1][i]);}

                }
            } set_collection[set_num1]=temp;
                }
        else if (set_num1>=set_collection.size() && set_num2<set_collection.size())
                    {
                        insert_set(set_num1);
                    
                    }
        else if (set_num1<set_collection.size() && set_num2>=set_collection.size())
        {    vector <int> temp1;
           insert_set(set_num2);
           
                cout<<"0"<<endl;
        }
        else{
            insert_set(set_num1);
            insert_set(set_num2);
            
        }
        }

    void difference(int set_num1 , int set_num2){
        if(set_num1 < set_collection.size() && set_num2 < set_collection.size()){
            if(set_num1==set_num2){vector<int>temp ; set_collection[set_num1]=temp;
            cout<<"0"<<endl;}
            else if(set_collection[set_num1].size()==0&&set_collection[set_num1].size()==0){cout<<"0"<<endl;}
            else{
        for (int i = 0; i < set_collection[set_num1].size(); i++)
        {
            for (int j = 0; j < set_collection[set_num2].size(); j++)
        {
            if(set_collection[set_num1][i]==set_collection[set_num2][j]){
                (set_collection[set_num1]).erase(set_collection[set_num1].begin()+i);
            }
        }
        }cout<<set_collection[set_num1].size()<<endl;}
        
        }


        else if (set_num1>=set_collection.size() && set_num2<set_collection.size()){
            insert_set(set_num1);
        cout<<"0"<<endl;
        }
        else if(set_num1<set_collection.size() && set_num2>=set_collection.size()){
            insert_set(set_num2);
        cout<<set_collection[set_num1].size()<<endl;
        }
        else{insert_set(set_num1);
            insert_set(set_num2);
            cout<<"0"<<endl;
        }}
        
    void symmetric_difference(int set_num1 , int set_num2){
        vector<int> tem;
        if (set_num1 < set_collection.size() && set_num2 < set_collection.size()){
            if(set_collection[set_num1].size()==0&&set_collection[set_num2].size()!=0){
                set_collection[set_num1]=set_collection[set_num2];
                }
            //else if (set_collection[set_num1].size()!=0&&set_collection[set_num2].size()==0){;}

            else{
            for (int i = 0; i < set_collection[set_num1].size(); i++)
            {
               for (int j = 0; j < set_collection[set_num2].size(); j++)
                {
                if(set_collection[set_num1][i]==set_collection[set_num2][j])
                {
                tem.push_back(set_collection[set_num1][i]);
                }
                }
            }

            for (int i = 0; i < set_collection[set_num1].size(); i++)
            {
               for (int j = 0; j < set_collection[set_num2].size(); j++)
                {
                if(set_collection[set_num1][i]!=set_collection[set_num2][j])
                {
                put_in(set_num1,set_collection[set_num2][j]);
                }
                }
            }
            for (int i = 0; i < set_collection[set_num1].size(); i++)
            {
            for (int j = 0; j < tem.size(); j++)
            {
            if(set_collection[set_num1][i]==tem[j]){
                (set_collection[set_num1]).erase(set_collection[set_num1].begin()+i);
            }
            }
            }}

         cout<<set_collection[set_num1].size()<<endl;
        }
        else if (set_num1>=set_collection.size() && set_num2<set_collection.size()){
            insert_set(set_num1);
            set_collection[set_num1]=set_collection[set_num2];
            cout<<set_collection[set_num1].size()<<endl;
            }
    else if (set_num1<set_collection.size() && set_num2>=set_collection.size()){
            insert_set(set_num2);
            cout<<set_collection[set_num1].size()<<endl;
            }
    else{insert_set(set_num1);
    insert_set(set_num1);
    cout<<"0"<<endl;
    }}

void Size(int set_num){
        if (set_num<set_collection.size())
        {cout<<set_collection[set_num].size()<<endl;}
        else if (set_num>set_collection.size()&& set_num>=0)
        {vector<int> temp;
        set_collection.push_back(temp);
        cout<<"0"<<endl;}
        else{insert_set(set_num);cout<<"0"<<endl;}
    }

    void print(int set_num ){
        if(set_collection[set_num].size()==0){cout<<endl;}
        else if (set_num>=0&& set_num<set_collection.size()){
            for(int i=0; i < (set_collection[set_num].size()); i++){cout<< (set_collection[set_num]).at(i) ;
                if(i < (set_collection[set_num].size()-1)){cout<< ',' ;}}  // make this error clear of commas
        cout<<endl;
        }
        else {cout<<endl;}
       //(set_num>=set_num<set_collection.size())
    }
};

int main()
{
    SET garima ;

    int a;
    int b;
    int c;
    while (cin>>a)
    {

        if (cin.eof()) {
            break;
        }

        switch (a){


    case 1:cin>>b>>c;
    if (b>=0&&b<100001){

        garima.insert1(b,c);}
    else{cout<<"0"<<endl;}
        break;


    case 2:cin>>b>>c;
    if (b>=0&&b<100001){
        if (b<garima.set_collection.size()&& b>=0){garima.Delete(b,c);}
        else{cout<<"-1"<<endl;}}
    else{cout<<"0"<<endl;}
        break;


    case 3:cin>>b>>c;
    if (b>=0&&b<100001){
        garima.Belongs_To(b,c);}
    else{cout<<"0"<<endl;}
        break;

    case 4:cin>>b>>c;
    if (b>=0&&b<100001&&c>=0&&c<100001){
        garima.Union(b,c); }
    else{cout<<"0"<<endl;}
        break;


    case 5:cin>>b>>c;
        if (b>=0&&b<100001&&c>=0&&c<100001){
        garima.intersection(b,c); }
    else{cout<<"0"<<endl;}
        break;


     case 6:cin>>b;

     if (b>=0&&b<100001){
        garima.Size(b);}
    else{cout<<"0"<<endl;}
        break;


    case 7:cin>>b>>c;
        if (b>=0&&b<100001&&c>=0&&c<100001){
        garima.difference(b,c); }
    else{cout<<"0"<<endl;}
        break;


    case 8:cin>>b>>c;
        if (b>=0&&b<100001&&c>=0&&c<100001){
         garima.symmetric_difference(b,c); }
    else{cout<<"0"<<endl;}
        break;


    case 9:cin>>b;
        if (b>=0&&b<100001){
        garima.print(b);}
    else{cout<<"0"<<endl;}
        break;

    default:
        cout<<"0"<<endl;
        break;
    }
    }
  return 0;
}