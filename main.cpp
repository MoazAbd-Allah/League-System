#include <iostream>
#include<string>
using namespace std;
class Linked_List
{
    /////////////////////////////////////////FOR TEAM//////////////////////////////////////////////////////
    struct Team
    {
        string id , name , president;
        Team* next;
    };
    Team* head=NULL;

public:
    void Add_Team()
    {
        Team* new_Team=new Team;
        cout<<" \n\tEnter Team ID : ";
        cin>>new_Team->id;
        cout<<" \n\tEnter Team Name : ";
        cin>>new_Team->name;
        cout<<" \n\tEnter Team President : ";
        cin>>new_Team->president;
        new_Team->next=NULL;
        if(head==NULL)
        {
            head=new_Team;
        }
        else
        {
            Team* temp = head;
            while(temp->next!=NULL)
            {
                temp= temp->next;
            }
            temp->next=new_Team;
        }
    }
   void Display_Team()
    {
        int i=0;
        Team * temp=head;
        if (temp==NULL)
        {
            cout<<" \n\t There's No Teams To Display "<<"\n";
            return;
        }
        while(temp!=NULL)
        {
            cout<<" \n\t ******** Team "<<++i<<" ******** "<<" \n\tTeam ID : "<<temp->id<<"  "<<" \n\tTeam Name : "<<temp->name<<"  "<<" \n\tTeam President : "<<temp->president<<" "<<"\n";
            temp=temp->next;
        }

    }
   void Search_Team_ID()
    {
        string idd;
        Team * temp=head;
        if (temp==NULL)
        {
            cout<<" \n\tThere's No Teams To Search For"<<"\n";
            return;
        }

         cout<<" \n\tEnter Team ID : ";
         cin>>idd;

        while(temp!=NULL)
        {
             if(temp->id==idd)
             {
                 cout<<" \n\tTeam ID : "<<temp->id<<"  "<<" \n\tTeam Name : "<<temp->name<<"  "<<" \n\tTeam President : "<<temp->president<<"  "<<"\n";
             }
              temp=temp->next;
        }
        return;

    }
    void Remove_Team ()
    {
        string idd;
        cout<<" \n\tEnter The Team ID To Remove : ";
        cin>>idd;
        Team *temp,*prev;
        prev = temp = head;
        if(temp==NULL)
        {
            cout<<" \n\t Not Found "<<"\n";
            return;
        }
        if(temp->id==idd)
        {
            head=temp->next;
            delete temp;
            cout<<" \n\t Team Removed "<<"\n";
            return;
        }
        while(temp!=NULL && temp->id!=idd)
        {
            prev=temp;
            temp=temp->next;
        }
            prev->next=temp->next;
            delete temp;
            cout<<" \n\t Team Removed "<<"\n";

    }
    void Update_Team()
    {
        string idd,namee,presidentt;
        int pos;
        if(head==NULL)
        {
            cout<<" \n\t There's No Teams To Update "<<"\n";
            return;
        }
           cout<<" \n\t Which Team You Want Update ? (Please Enter Team Number) : ";
           cin>>pos;
           cout<<" \n\tEnter The New Team ID : ";
           cin>>idd;
           cout<<" \n\tEnter The New Team Name : ";
           cin>>namee;
           cout<<" \n\tEnter The New Team President : ";
           cin>>presidentt;
           Team* temp=head;
           if (pos==1)
           {
               head->id=idd;
               head->name=namee;
               head->president=presidentt;
           }
           else
           {
               for(int i=1 ;i<pos;++i)
               {
                   if(temp==NULL)
                   {
                   cout<<" \n\tThere Are Less Than : "<<pos<<" Teams ";
                   return;
                   }
                   temp=temp->next;
               }
               temp->id=idd;
               temp->name=namee;
               temp->president=presidentt;


           }
           cout<<" \n\t Team Updated "<<"\n";


    }
           /////////////////////////////////////////FOR PLAYER//////////////////////////////////////////////////////////
     struct Player
     {
         string id,name,team,position;
         float age,salary;
         Player* next;
     };
     Player* head2=NULL;

     void Add_Player()
    {
        Player* new_Player=new Player;
        cout<<" \n\tEnter Player ID : ";
        cin>>new_Player->id;
        cout<<" \n\tEnter Player Name : ";
        cin>>new_Player->name;
        cout<<" \n\tEnter Player Team : ";
        cin>>new_Player->team;
        cout<<" \n\tEnter Player Position : ";
        cin>>new_Player->position;
        cout<<" \n\tEnter Player Age : ";
        cin>>new_Player->age;
        cout<<" \n\tEnter Player Salary : ";
        cin>>new_Player->salary;
        new_Player->next=NULL;
        if(head2==NULL)
        {
            head2=new_Player;
        }
        else
        {
            Player* temp = head2;
            while(temp->next!=NULL)
            {
                temp= temp->next;
            }
            temp->next=new_Player;
        }
    }
    void Display_Player()
    {
        int i=0;
        Player * temp=head2;
        if (temp==NULL)
        {
            cout<<" \n\t There's No Players To Display "<<"\n";
            return;
        }
        while(temp!=NULL)
        {
            cout<<" \n\t ******** Player "<<++i<<" ******** "<<" \n\tPlayer ID : "<<temp->id<<"  "<<" \n\tPlayer Name : "<<temp->name<<"  "<<" \n\tPlayer Team : "<<temp->team<<"  "<<" \n\tPlayer Position : "<<temp->position<<"  "<<" \n\tPlayer Age : "<<temp->age<<"  "<<" \n\tPlayer Salary : "<<temp->salary<<"$"<<"  "<<"\n";
            temp=temp->next;
        }
    }
    void Search_Player_Name()
    {

        string namee;
        Player * temp=head2;
        if (temp==NULL)
        {
            cout<<" \n\t There's No Players To Search For "<<"\n";
            return;
        }

         cout<<" \n\tEnter Player Name : ";
         cin>>namee;

        while(temp!=NULL)
        {
             if(temp->name==namee)
             {
                 cout<<" \n\tPlayer ID : "<<temp->id<<"  "<<" \n\tPlayer Name : "<<temp->name<<"  "<<" \n\tPlayer Team : "<<temp->team<<"  "<<" \n\tPlayer Position : "<<temp->position<<"  "<<" \n\tPlayer Age : "<<temp->age<<"  "<<" \n\tPlayer Salary : "<<temp->salary<<"$"<<"  "<<"\n";
             }
              temp=temp->next;
        }
        return;

    }
    void Remove_Player ()
    {
        string idd;
        cout<<" \n\tEnter The Player ID To Remove : ";
        cin>>idd;
        Player *temp,*prev;
        prev = temp = head2;
        if(temp==NULL)
        {
            cout<<" \n\t Not Found "<<"\n";
            return;
        }
        if(temp->id==idd)
        {
            head2=temp->next;
            delete temp;
          cout<<" \n\t Player Removed "<<"\n";
            return;
        }
        while(temp!=NULL && temp->id!=idd)
        {
            prev=temp;
            temp=temp->next;
        }
            prev->next=temp->next;
            delete temp;
          cout<<" \n\t Player Removed "<<"\n";



    }
     void Display_Player_Salary()
    {
        int i;
        float Salaryy;
        Player * temp=head2;
        if (temp==NULL)
        {
            cout<<" \n\t There's No Players To Display "<<"\n";
            return;
        }

         cout<<" \n\tEnter Player Salary : ";
         cin>>Salaryy;

        while(temp!=NULL)
        {
             if(temp->salary==Salaryy)
             {
                 cout<<" \n\t ******** Player "<<++i<<" ******** "<<" \n\tPlayer ID : "<<temp->id<<"  "<<" \n\tPlayer Name : "<<temp->name<<"  "<<" \n\tPlayer Team : "<<temp->team<<"  "<<" \n\tPlayer Position : "<<temp->position<<"  "<<" \n\tPlayer Age : "<<temp->age<<"  "<<" \n\tPlayer Salary : "<<temp->salary<<"$"<<"  "<<"\n";
             }
              temp=temp->next;
        }
        return;

    }
     void Display_Team_Age()
     {
         int i;
        float Agee;
        Player * temp=head2;
        if (temp==NULL)
        {
            cout<<" \n\t There's No Teams To Display "<<"\n";
            return;
        }

         cout<<" \n\tEnter Player Age : ";
         cin>>Agee;

        while(temp!=NULL)
        {
             if(temp->age==Agee)
             {
                 cout<<" \n\t ******** Team "<<++i<<" ******** "<<" \n\tTeam : "<<temp->team<<" "<<"\n";
             }
              temp=temp->next;
        }
        return;

     }

};

int main()
{
    Linked_List list;
    int ch;

    while(true)
    {
        cout <<"\n\t***** EGYPTION LEAGUE SYSTEM ******";
		cout <<"\n\t*                                                   *";
		cout <<"\n\t*        1. Add Team                                *";
		cout <<"\n\t*        2. Display Teams                           *";
		cout <<"\n\t*        3. Search For Team By ID                   *";
		cout <<"\n\t*        4. Add Player                              *";
		cout <<"\n\t*        5. Remove Player By ID                     *";
		cout <<"\n\t*        6. Display Players                         *";
		cout <<"\n\t*        7. Search For Player By Name               *";
        cout <<"\n\t-------------- Bonus Functions ----------------------";
		cout <<"\n\t*        8. Remove Team By ID                       *";
		cout <<"\n\t*        9. Update Team                             *";
		cout <<"\n\t*        10. Display Players By Their Salaries      *";
        cout <<"\n\t*        11. Display Teams By Age Of Their Players  *";
		cout <<"\n\t*                                                   *";
		cout << "\n\t******************";
		cout << "\n\t  Please choose an option: ";
         cin>>ch;


    switch (ch)
    {
              ///////////////////////////////////////////FOR TEAM//////////////////////////////////////////////////////////

        case 1:
            list.Add_Team();
            break;
        case 2:
            list.Display_Team();
            break;
        case 3:
            list.Search_Team_ID();
            break;
     ///////////////////////////////////////////FOR PLAYER//////////////////////////////////////////////////////////
        case 4:
            list.Add_Player();
            break;
        case 5:
            list.Remove_Player();
            break;
        case 6:
            list.Display_Player();
            break;
        case 7:
            list.Search_Player_Name();
            break;
        case 8:
            list.Remove_Team();
            break;
        case 9:
            list.Update_Team();
            break;
        case 10:
            list.Display_Player_Salary();
            break;
        case 11:
            list.Display_Team_Age();
            break;


    }
    }

}
