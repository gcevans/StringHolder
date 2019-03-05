#ifndef STRINGHOLDER_H
#define STRINGHOLDER_H

#include <string>

class StringHolder {
private:
    std::string *string_;
public:
   StringHolder(const std::string &initial_string);
    
    const char* c_str() const;
    void ChangeString(const char *input_string);
};

#endif //STRINGHOLDER_H