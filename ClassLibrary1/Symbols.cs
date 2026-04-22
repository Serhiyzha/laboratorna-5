using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary1
{
    public class Symbols : Class1
    {
        public Symbols(string v) : base(v)
        {
        }
        public override string Replace()
        {
            string res = "";
            foreach (char c in value)
            {
                if (c == '4')
                    res += "!!";
                else
                    res += c;
            }
            return res;
        }
    }
}