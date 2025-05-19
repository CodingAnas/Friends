#include<iostream>
#include<vector>
using namespace std;

class Person{
    string password;
    string name;
    string info;
    vector<Person> frnds; 
    public:
    Person()
    {
        string name;
        cout<<"\nEnter name : ";
        cin>>name;
        this->name = name;
        cout<<"\nEnter the password for person "<<this->name<<": ";
        string password;
        cin>>password;
        this->password = password;
        cout<<"\nEnter his secret info Owo:";
        string info;
        cin>>info;
        this->info = info;
    }
    void addFrnd(Person prsn)
    {
        for (int i=0; i<frnds.size(); i++)
        {
            Person top = frnds.back();
            if(top.name == prsn.name)
            {
                cout<<"\nFrnd alread exist";
                return;
            }
            frnds.push_back(top);
        }
        frnds.push_back(prsn);
    }
};

class Friends{
    vector<Person> peoples;
    vector<Person> friends;
    public:
    Friends()
    {
        cout<<"Welcome to Friends ;D";
    }

    void play()
    {
        bool flag = false;
        while(!flag)
        {
            cout<<"\n1.Add Player\n2.Send Friend Req\n3.View Req\n4.View Info\n5.Exit";
            cout<<endl<<"Choice: ";
            bool flag2 = false;
            while(!flag2)
            {
                int num;
                cin>>num;
                switch(num){
                    case 1:
                        Person prs = Person();
                        peoples.push_back(prs);
                        flag2 = true;                        
                        break;
                    case 2:
                        
                        flag2 = true;
                        break;
                    case 3:

                        flag2=true;
                        break;
                    case 4:
                        
                        flag2 = true;
                        break;
                    case 5:
                        flag = true;
                        flag2 = true;
                        break;
                    default:
                        cout<<"\nEnter a valid choice ;p";
                        break;
            }
            
                    
            }
        }
    }
};

int main()
{
    Friends frnd;
    frnd.play();
    return 0;
}