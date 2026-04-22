namespace ClassLibrary1
{
    public class Class1
    {
        protected string value;

        public Class1(string v)
        {
            value = v;
        }

        public string GetValue()
        {
            return value;
        }
        public virtual int Length()
        {
            return value.Length;
        }

        public virtual string Replace()
        {
            return value;
        }
    }
}