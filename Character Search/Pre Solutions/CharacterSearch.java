public class CharacterSearch
{
    private static String findUniqueCharacter(String str)
    {
        String chars = str.toLowerCase();
        StringBuilder copies = new StringBuilder();

        int size = chars.length();
        int frequency;
        char current;

        for (int targetIndex = 0; targetIndex < size; targetIndex++)
        {
            frequency = 0;
            current = chars.charAt(targetIndex);
            int index = copies.indexOf(String.valueOf(current));

            if ((index >= 0) && (copies.charAt(index) == current)) continue;

            scan:
            {
                for (int next = targetIndex + 1; next < size; next++) {
                    if (current == chars.charAt(next)) {
                        copies.append(current);
                        ++frequency;
                        break scan;
                    }
                }
            }

            if (frequency < 1) return chars.substring(targetIndex, targetIndex + 1);
        }
        return chars.concat(" has no unique character");
    }

    public static void main(String[] args) {
        String result = findUniqueCharacter("PopularStar");
        System.out.println(result);
    }
}
