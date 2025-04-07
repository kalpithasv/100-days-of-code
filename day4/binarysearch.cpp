// binary search algorithm
// start low = 0, high = n-1
// loop while low <= high
//     mid = (low + high) / 2
//     if arr[mid] == key then return mid
//     else if arr[mid] < key then low = mid + 1
//     else high = mid - 1
// end loop
// return -1
// end function binarySearch
// start function main
// start input n no of elements in array
// start input array of n elements
// start input key element to be searched in array
// call binarySearch function and store result in result variable
// if result != -1 then print "Element found at index: " + result
// else print "Element not found"
// end function main
// end pseudocode
