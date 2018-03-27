#include "stringholder.h"


StringHolder::StringHolder(const std::string &initial_string) {
    string_ = new std::string(initial_string);
}

const char * StringHolder::c_str() const noexcept {
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

StringHolder::StringHolder(const StringHolder &source) {
    string_ = nullptr;
    if(source.string_) {
        string_ = new std::string(*source.string_);
    }
}

StringHolder::~StringHolder() {
    if(string_){
        delete string_;
    }
}
