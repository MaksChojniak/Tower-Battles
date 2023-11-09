using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts
{
    public static class StringFormatter
    {
        public static string PriceFormat(int price)
        {
            return price.ToString("N0");
        }
    }
}
