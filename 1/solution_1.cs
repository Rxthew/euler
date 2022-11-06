using System;

namespace ConsoleApp6
{
	public class solution_1 {
		
		public static int sumMultiples(){
			const int threshold = 1000;
			int sum = 0;
			for(int i = 0; i < threshold; i++){
				if(i % 3 == 0 | i % 5 == 0){
					sum += i;
				}
			}
			return sum;
		}
		
		public static void Main(string[] args){
			Console.WriteLine(solution_1.sumMultiples());
		}
	}
}