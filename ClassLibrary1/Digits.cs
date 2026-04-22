using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary1
{
    public class Digits : Class1
    {
        public Digits(string v) : base(v) { }

        public override string Replace()
        {
            string res = "";
            foreach (char c in value)
            {
                if (c == '3')
                    res += "11";
                else
                    res += c;
            }
            return res;
        }
    }
}