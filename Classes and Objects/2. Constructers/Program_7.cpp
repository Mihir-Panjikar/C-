/*
Define a class GARMENT with the following descriptions:

Private members:

Garment_code                      Integer type
Garment_fabric_type               20 characters
Tag                               20 characters

A member function assigntag() as  per the following Garment_fabric_type

Garment fabric type            Tag

Cotton                         white
Denim                          Blue
Silk                           Yellow

Public members:
· A constructor function to assign garment_code to 0 , Garment_fabric_type to NA and  Tag to NA
· Enter() – A function to read Garment_code, Garment_fabric_type   and call  assigntag()  to assign the tag.
· Display() - A function to view the contents of all the data members

Write main() to create object and call necessary functions.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Garment
{
    int garment_code;
    char garment_fabric_type[20];
    string tag;
    
    string assigntag(char tag[20])
    {
        if(strcmp(garment_fabric_type,"Cotton")==0)
        {
            tag="white";
        }

        else if(strcmp(garment_fabric_type,"Denim")==0)
        {
            tag="Blue";
        }

        else if(strcmp(garment_fabric_type,"Silk")==0)
        {
            tag="Yellow";
        }
        return tag;
    }

    public:

    Garment()
    {
        garment_code=0;
        garment_fabric_type[20]='NA';
        tag="NA";
    }

    int Enter()
    {
        cout<<"Enter garment code,garment fabric type"<<endl;
        cin>>garment_code>>garment_fabric_type;
        cout<<endl<<endl;
        tag=assigntag(garment_fabric_type);       
    }

    int Display()
    {
        cout<<"Garment code: "<<garment_code<<endl;
        cout<<"Garment fabric type: "<<garment_fabric_type<<endl;
        cout<<"Tag: "<<tag<<endl;
    }
};

int main()
{
    Garment G1;

    G1.Enter();
    G1.Display();   
}