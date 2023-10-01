using System.Text.RegularExpressions;

internal class Program
{
    private static void Main(string[] args)
    {
        
        var p = "a*****abc";

        while (p.Contains("**")) p = p.Replace("**", "*");

        var res = Regex.IsMatch("abc", p);
            

        Console.WriteLine(res);
    }
}