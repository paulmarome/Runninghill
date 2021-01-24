function findUniqueCharacter(str)
{
    var chars = str.toLowerCase();
    var copies = [];

    var size = chars.length;
    var frequency;
    var current;

    for (let targetIndex = 0; targetIndex < size; targetIndex++)
    {
        frequency = 0;
        current = chars.charAt(targetIndex);
        var index = copies.indexOf(current);

        if (index >= 0) continue;

        scan:
        {
            for (let next = targetIndex + 1; next < size; next++)
            {
                if (current == chars.charAt(next)) {
                    copies.push(current);
                    frequency++;
                    break scan;
                }
            }
        }
        if (frequency < 1) return chars.substring(targetIndex, targetIndex + 1);
    }
    return `${chars} has no unique character`;
}
console.log(findUniqueCharacter("Purple"));