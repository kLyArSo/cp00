#include "contact.hpp"

class phonebook
{
    private:
        contact     array[8];
    public:
        phonebook();
        contact& get_array(int i)
        {
            return (array[i]);
        }
        ~phonebook();
};

phonebook::phonebook()
{
    //std::cout << "PHONEBOOK CONSTRUCTOR CALLED." << std::endl;
}

phonebook::~phonebook()
{
    //std::cout << "PHONEBOOK DESTRUCTOR CALLED." << std::endl;
}
