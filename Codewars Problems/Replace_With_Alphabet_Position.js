function alphabetPosition(text) {
    const filteredChars = text.match(/[a-z]/ig);

    if (!filteredChars) {
        return ""; // Return an empty string if no alphabetic characters found
    }

    const numbers = filteredChars.map((char) => char.toLowerCase().charCodeAt(0) - 96);

    return numbers.join(" ");
}


console.log(alphabetPosition("g[b5,&h&"));

// Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )

