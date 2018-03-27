#ifndef STRINGHOLDER_H
#define STRINGHOLDER_H

#include <string>

class StringHolder {
private:
    std::string *string_;
public:
    StringHolder() : string_(nullptr) {};
    StringHolder(const std::string &initial_string);
    StringHolder(const StringHolder &source);
    ~StringHolder();
    
    const char* c_str() const noexcept;
    void ChangeString(const char *input_string);
};

#endif //STRINGHOLDER_H