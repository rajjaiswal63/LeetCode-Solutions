/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const nums=[];
    let n=arr.length;

    for(let i=0; i<n; i++){
        nums[i]=fn(arr[i],i);
    }
    return nums;
};