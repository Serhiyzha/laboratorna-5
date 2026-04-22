using Microsoft.VisualBasic;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClassLibrary1;

namespace labC_
{
    public class Proces
    {
        public static void Process(Class1[] array)
        {
            foreach (var obj in array)
            {
                Console.WriteLine(obj.Length());
                Console.WriteLine(obj.Replace());
                Console.WriteLine();
            }
        }
    }
}
