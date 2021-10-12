#include <string>
#include <iostream>

class contact
{
    private:
        int             status;//if 1 then full if empty then 0
        std::string     first_name;
        std::string     last_name;
        std::string     nick_name;
        std::string     phone_number;
        std::string     darkest_secret;
    public:
        /*------CONSTRUCTOR AND DESTRUCTOR-----*/
        contact();
        ~contact();
        /*------CONSTRUCTOR AND DESTRUCTOR-----*/

        /*---------GETTERS---------*/
        std::string     get_first_name()
        {
            return this->first_name;
        }
        std::string     get_last_name()
        {
            return this->last_name;
        }
        std::string     get_nick_name()
        {
            return this->nick_name;
        }
        std::string     get_phone_number()
        {
            return this->phone_number;
        }
        std::string     get_darkest_secret()
        {
            return this->darkest_secret;
        }
        int             get_status()
        {
            return (status);
        }
        /*---------GETTERS---------*/

        /*---------SETTERS---------*/
        void    set_first_name(std::string s1)
        {
            this->first_name = s1;
        }
        void    set_last_name(std::string s)
        {
            this->last_name = s;
        }
        void    set_nick_name(std::string s)
        {
            this->nick_name = s;
        }
        void    set_phone_number(std::string s)
        {
            this->phone_number = s;
        }
        void    set_darkest_secret(std::string s)
        {
            this->darkest_secret = s;
        }
        void    set_status(int    status)
        {
            this->status = status;
        }
        /*---------SETTERS---------*/
};

contact::contact()
{
    //std::cout << "CONTACT CONSTRUCTOR CALLED." << std::endl;
    this->first_name = "N/A";
    this->last_name = "N/A";
    this->nick_name = "N/A";
    this->phone_number = "N/A";
    this->darkest_secret = "N/A";
}

contact::~contact()
{
    //std::cout << "CONTACT DESTRUCTOR CALLED." << std::endl;
}