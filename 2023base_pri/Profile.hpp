/*
    Profile.hpp

    Copyright © 2023 MSAD Mode 2P. All rights reserved.
*/
#ifndef Profile_hpp
#define Profile_hpp

#include <string>
#include <unordered_map>

#ifndef ENUMPAIR_TYPE_DEFINED
#define ENUMPAIR_TYPE_DEFINED
typedef struct { const char *name; int num; } EnumPair;
#endif

class Profile {
public:
  Profile(const std::string& path);
  std::string getValueAsStr(const std::string& key);
  double getValueAsNum(const std::string& key);
  int getValueAsNumFromEnum(const std::string& key, const EnumPair *enum_data);
private:
  std::unordered_map<std::string, std::string> profile;
};

extern Profile*     prof;

#endif /* Profile_hpp */
