#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !phoneNumber.empty())
    {
        return true;
    }
    else
    {
        return false;
    }

}


bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() &&
        pincode.empty() &&
        email.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Contact::isValidPhone() const
{
    bool length = (phoneNumber.length()==10);
    int num=1;
    if (length)
    {
        for( int i=0;i<10;i++)
        {
            if (!isdigit(phoneNumber[i]))
                num=0;
         }
        if(num==1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}
bool Contact::isValidPincode() const
{
   bool length = (pincode.length()==6);
   int flag=1;
   if(length)
   {
       for(int j=0;j<6;j++)
       {
           if (!isdigit(pincode[j]))
                flag=0;
       }
       if(flag==1)
       {
           return true;
       }
       else
       {
           return false;
       }
   }
}
