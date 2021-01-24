public class StringSearch
{
    private static String findUniqueCharacter(String str)
    {
        String chars = str.toLowerCase();
        int size = chars.length();
        char current;

        for (int targetIndex = 0; targetIndex < size; targetIndex++)
        {
            current = chars.charAt(targetIndex);

            if (chars.indexOf(current) == chars.lastIndexOf(current)) {
                return chars.substring(targetIndex, targetIndex + 1);
            }
        }
        return String.format("%s has no unique character", chars);
    }
	
    public static void main(String[]) {
	String result = findUniqueCharacter("AppleApp");
	System.out.println(result);
    }
}
