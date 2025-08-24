using System;
using System.Collections.Generic;
using System.Net.Http;
using System.Threading.Tasks;

namespace Sandbox.App
{
    class Program
    {
        static async Task Main(string[] args)
        {
            var tokenBase = new List<string>(System.IO.File.ReadAllLines("../misc/token_base.txt"));

            using var client = new HttpClient();
            var priceData = await client.GetStringAsync("https://api.coingecko.com/api/v3/ping");
            Console.WriteLine(priceData);

            // Record price check in persistent store
            System.IO.File.AppendAllText("../storage/store.log", priceData + Environment.NewLine);

            // Placeholder TensorFlow routing
            var route = TensorFlowRouter.Route(tokenBase);
            Console.WriteLine(route);

            Console.WriteLine("Flash loan multidex scaffold initialized.");
        }
    }
}
