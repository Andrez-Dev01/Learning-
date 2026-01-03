// There are 8 fundamental data types:
/* String - a sequence of characters enclosed within sing quotes (' ') or double quotes (" ")
    - Allows you to store and manipulate texted-based data. (names, messages, etc)
 * Number
 * Bigint
 * Boolean
 * Undefined
 * Null
 * Symbol
 * Object
*/

// Strings
let message = "Hello, World!";
let name = "Andrez De La Torre";

console.log(message, name);
// While strings values can't be changed we once created we can alter them by adding different operations to existing ones
// String Concatenation - joining two or more strings together to form a single string using operators plus (+) or concatenation assignment operator (+=)
let firstName = "Cyrstal";
let lastName = "Oseguera";
let fullName = firstName + " " + lastName;

let greeting = "Hello, ";

greeting += fullName;

console.log(greeting);

// String method - allow to manipulate and extract information from them
/* Commonly used:
 *length
 * toUpperCase()
 * toLowerCase()
 * charAt()
 * substring()
 * split()
 * indexOf()
*/

let sentence = "This is string method";

//Use one of the different string methods
console.log(sentence.toUpperCase());

// Strings also have special characters you can include that are difficult to type like (\n) or (\t)
let specialCharacters = "This is a stringing containing a newline:\nAnd a tab:\tEnd of string.";
console.log(specialCharacters);