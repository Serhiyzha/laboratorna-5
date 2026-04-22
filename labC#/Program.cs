using ClassLibrary1;
using Microsoft.VisualBasic;
using System;
using System.Collections.Generic;
using System.Diagnostics;

namespace labC_
{
    class Program
    {
        static void Main()
        {
            Symbols s = new Symbols("a4b44");
            Digits d = new Digits("1335");

            Class1[] array = new Class1[] { s, d };

            Proces.Process(array);
        }
    }
}