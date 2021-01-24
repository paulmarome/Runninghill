using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Search
{
    class CharacterSearch
    {
        public static string findUniqueCharacter(string str)
        {
            string chars = str.ToLower();
            StringBuilder copies = new StringBuilder();

            int size = str.Length;
            int frequency;
            char current;

            for (int targetIndex = 0; targetIndex < size; targetIndex++)
            {
                frequency = 0;
                current = chars[targetIndex];
                int index = copies.ToString().IndexOf(current);

                if (index >= 0) {
                    continue;
                }

                for (int next = targetIndex + 1; next < size; next++)   
                {
                    if (current == chars[next]) {
                        copies.Append(current);
                        frequency++;
                        break;    
                    }    
                }

                if (frequency < 1) {
                    return chars.Substring(targetIndex, 1);
                }
            }

            return $"{chars} has no unique character";
        }

        static void Main(string[] args) {
            Console.Write(findUniqueCharacter("PopularStar"));
            Console.ReadKey();
        }
    }
}
