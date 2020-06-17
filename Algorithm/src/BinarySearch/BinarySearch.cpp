#include "BinarySearch.h"

int binarySearch(const int* array, const int len, const int desired)
{
    if (len == 0)
        throw BinarySearchErrors::NULL_LENGTH;

    int high = len;
    int low = 0;
    int desiredIndex = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] == desired)
        {
            desiredIndex = mid;
            break;
        }

        if (array[mid] < desired)
        {
            low = mid + 1;
            continue;
        }

        if (array[mid] > desired)
        {
            high = mid - 1;
            continue;
        }
    }

    return desiredIndex;
}
