#include "stringholder.h"


StringHolder::StringHolder(const std::string &initial_string) {
    string_ = new std::string(initial_string);
}

const char * StringHolder::c_str() const {
    if(string_) {
        return string_->c_str();
    } else {
        return "";
    }
}

void StringHolder::ChangeString(const char *input_string) {
    if(string_) {
        *string_ = input_string;
    } else {
        string_ = new std::string(input_string);
    }
}

