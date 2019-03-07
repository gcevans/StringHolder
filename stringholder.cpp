#include "stringholder.h"
#include <utility>


StringHolder::StringHolder(const std::string &initial_string) {
    string_ = new std::string(initial_string);
}

const char * StringHolder::c_str() const noexcept{
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
    if(source.string_ != nullptr) {
        string_ = new std::string( *(source.string_));
    } else {
        string_ = nullptr;
    }
}

StringHolder::StringHolder(StringHolder &&source) {
    string_ = source.string_;
    source.string_ = nullptr;
}

StringHolder & StringHolder::operator=(const StringHolder &source) {
    if(this == &source){
        return *this;
    }
    if(source.string_ != nullptr) {
        delete string_;
        string_ = new std::string( *(source.string_));
    } else {
        string_ = nullptr;
    }
    return *this;
}

StringHolder & StringHolder::operator=(StringHolder &&source) {
    std::swap(string_,source.string_);
    return *this;
}

StringHolder::~StringHolder() {
    delete string_;
}

