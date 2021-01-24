using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Search
{
    class CharacterSearch
    {
        public static string findUniqueCharacter(string str) {
            string chars = str.ToLower();
            int size = str.Length;
            char current;

            for (int targetIndex = 0; targetIndex < size; targetIndex++) {
                current = chars[targetIndex];

                if (chars.IndexOf(current) == chars.LastIndexOf(current)) {
                    return chars.Substring(targetIndex, 1);
                }
            }
            return chars + " has no unique characters";
        }

        static void Main(string[] args) {
            Console.Write(findUniqueCharacter("Babojujabyou"));
        }
    }
}
