// Copyright (c) 2020 Mario Rosell

#pragma once

#include <string>
#include <vector>

template <typename T>
/**
 * @brief LookupHash is a lightweight solution for hash maps in C++ similar to unordered_map.
 * @author Mario Rosell
 * @file lookup_hash.h
 */
struct LookupHash
{
    // Pairs
    std::vector<std::pair<std::string, T>> pairs;

    // Add a new key-value pair
    void add(const std::string& key, const T& value)
    {
        pairs.emplace_back(key, value);
    }

    // Get value by key
    T get(const std::string& key) const
    {
        for (const auto& pair : pairs)
        {
            if (pair.first == key)
            {
                return pair.second;
            }
        }
        return T();  // Return default-constructed T if key not found
    }

    // Check if a key exists
    bool has(const std::string& key) const
    {
        for (const auto& pair : pairs)
        {
            if (pair.first == key)
            {
                return true;
            }
        }
        return false;
    }

    // Remove a key-value pair
    void remove(const std::string& key)
    {
        for (auto it = pairs.begin(); it != pairs.end(); ++it)
        {
            if (it->first == key)
            {
                pairs.erase(it);
                return;
            }
        }
    }

    // Get number of elements
    size_t size() const
    {
        return pairs.size();
    }
};

/* Example usage:
 *
 * LookupHash<int> my_hash;
 * my_hash.add("key1", 1);
 * my_hash.add("key2", 2);
 * my_hash.add("key3", 3);
 *
 * int value = my_hash.get("key1");
 *
 * if (my_hash.has("key2"))
 * {
 *     std::cout << "key2 exists" << std::endl;
 * }
*/
