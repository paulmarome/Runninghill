function findUniqueCharacter(str) {
    var chars = str.toLowerCase();
    var size = chars.length;
    var current;

    for (let target_index = 0; target_index < size; target_index++) {
        current = chars.charAt(target_index);

        if (chars.indexOf(current) == chars.lastIndexOf(current)) {
            return chars[target_index]
        }
    }
    return `${chars} has no character`;
}
console.log(findUniqueCharacter("Purple"));