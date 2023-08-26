function fibonacci(n, mem = []) {
    if (n < 2) // base case
        return n;
    if (mem[n]) { // base case
        return mem[n];
    }
    mem[n] = (fibonacci(n - 1, mem) + fibonacci(n - 2, mem)); // transition
    return mem[n]; // state
}


console.log(fibonacci(0));
console.log(fibonacci(1));
console.log(fibonacci(5));
console.log(fibonacci(10));
console.log(fibonacci(15));
console.log(fibonacci(20));
console.log(fibonacci(50));
console.log(fibonacci(60));
console.log(fibonacci(70));