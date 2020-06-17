#pragma once
#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

int binarySearch(const int* array, const int len, const int desired);

enum class BinarySearchErrors
{
    NOT_FOUND,
    NULL_LENGTH,
};

#endif // !BINARY_SEARCH_H
