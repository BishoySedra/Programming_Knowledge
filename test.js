let string = "   space WALK   ";
let re = /\w{3,}/gi;
let ans = string.replaceAll(re, function (match) {
  return match[0].toUpperCase() + match.slice(1).toLowerCase();
});
console.log(ans);
