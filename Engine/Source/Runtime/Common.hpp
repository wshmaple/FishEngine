#ifndef Common_hpp
#define Common_hpp

#include "FishEngine.hpp"

namespace FishEngine
{

    //========== string ==========//

    //FE_EXPORT std::vector<std::string>  split(const std::string& str, const std::string& separator);

    FE_EXPORT std::string camelCaseToReadable(const std::string& str);

    //void trim(std::string& str);
    //std::string trim(const std::string& str);

    //bool startsWith(const std::string& str, const std::string& str2);

    template<typename T>
    inline T ToEnum(const std::string& s);

    template<typename T>
    inline T ToEnum(const int index);

    template<typename T>
    inline int EnumToIndex(T e);

    template<typename T>
    inline constexpr const char** EnumToCStringArray();

    template<typename T>
    constexpr int EnumCount();

    //template<typename T>
    //inline T TryUpdate()
    //{
    //}

    //FE_EXPORT std::string getFileNameWithoutExtension(const std::string& path);

    // low case
    //FE_EXPORT std::string getExtensionWithoutDot(const std::string& path);

    template<typename KeyType, typename ValueType>
    ValueType getValueOrDefault(const std::map<KeyType, ValueType>& m, const KeyType& key, const ValueType& defaultValue)
    {
        auto it = m.find(key);
        if (it != m.end())
            return it->second;
        return defaultValue;
    };
}

#endif
