let arr = [23,12,4,5,8]

let minInt = Number.MAX_SAFE_INTEGER

for(let i=0; i<arr.length; i++){
    if(arr[i]<minInt){
        minInt = arr[i];
    }
}

console.log(minInt);