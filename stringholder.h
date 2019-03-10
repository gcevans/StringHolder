#ifndef STRINGHOLDER_H_
#define STRINGHOLDER_H_

#include <string>

class StringHolder {
 private:
    std::string *string_;
 public:
    StringHolder() : string_(nullptr) {};
    ~StringHolder();
    StringHolder(const StringHolder &source);
    StringHolder(StringHolder &&source);
    StringHolder & operator=(const StringHolder &source);
    StringHolder & operator=(StringHolder &&source);
    explicit StringHolder(const std::string &initial_string);
    
    const char* c_str() const noexcept;
    void ChangeString(const char *input_string);
};

#endif // STRINGHOLDER_H_
