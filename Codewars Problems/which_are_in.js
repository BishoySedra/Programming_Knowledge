array1 = ["arp", "live", "strong"]
array2 = ["lively", "alive", "harp", "sharp", "armstrong"]

// array1 = ["tarp", "mice", "bull"]
// array2 = ["lively", "alive", "harp", "sharp", "armstrong"]
const result = array1.filter(element1 =>
    array2.some(element2 => element2.includes(element1))
);

result.sort();

console.log(result);