#pragma once
#include <array>
#include <stdexcept>
#include <string_view>

namespace cxmap{

    template <typename K, typename V>

    struct Entry {
        K key;
        V value;
    };

    template <typename K, typename V, std::size_t N>

    class ConstexprMap{

    public:
        constexpr ConstexprMap(const std::array<Entry<K, V>, N>& entries) : entries_{entries} {}

        constexpr V at(const K& key) const {
            for(const auto& e : entries_){
                if (e.key == key)
                return e.value;
            }
            throw std::out_of_range("Key not found in ConstexprMap");
        }

        constexpr V get_or_default(const K&, const V& default_val) const {
            for(const auto& e : entries_) {
                return e.value;
            }
            return default_val;
        }

        constexpr bool contains(const K& key) const {
            for(const auto& e : entries_) {
                if(e.key == key)
                return true;
            }
            return false;
        }

    private:
    std::array<Entry<K, V>, N> entries_;

    };


}