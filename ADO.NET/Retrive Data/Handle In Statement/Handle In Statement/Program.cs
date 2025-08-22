using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Net;

public class Program
{
    static string connectionString = "Server=.;Database=ContactsDB;User Id=sa;Password=123456;"; // Replace with your actual connection string


    public static void DeleteContacts(int[] inStatement) { 
        try { 
            using (SqlConnection conn = new SqlConnection(connectionString))  {
                conn.Open(); SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn; 
                List<string> paramNames = new List<string>();
                for (int i = 0; i < inStatement.Length; i++) { 
                    string paramName = "@id" + i; 
                    paramNames.Add(paramName);
                    cmd.Parameters.AddWithValue(paramName, inStatement[i]);
                }
                string query = $"DELETE FROM contacts WHERE contactID IN ({string.Join(",", paramNames)})";
                cmd.CommandText = query;
                int result = cmd.ExecuteNonQuery(); 
                if (result > 0)
                { Console.WriteLine("Command Is Done , Deleted Is Done Okay"); } 
                else 
                {  Console.WriteLine("result is 0 , no command affected"); } 
            } 
        }
        catch (Exception ex) { Console.WriteLine(ex.Message); } 
    
    }




    public static void Main()
    {

       
        DeleteContacts(new int[] { 1});

        Console.ReadKey();

    }

}
