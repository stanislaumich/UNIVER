using System;
using Microsoft.Data.Sqlite;
//
// https://metanit.com/sharp/adonetcore/4.2.php
//
namespace HelloApp
{
    class Program
    {
        static void Main(string[] args)
        {
            using (var connection = new SqliteConnection("Data Source=usersdata.db"))
            {
                connection.Open();
                SqliteCommand command = new SqliteCommand();
                command.Connection = connection;
                command.CommandText = "CREATE TABLE IF NOT EXISTS Users(_id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE, Name TEXT NOT NULL)";
                command.ExecuteNonQuery();
                command.CommandText = "INSERT INTO Users (Name) VALUES ('Stas')";
                int number = command.ExecuteNonQuery();

                Console.WriteLine($"В таблицу Users добавлено объектов: {number}");

                string sqlExpression = "SELECT * FROM Users";

                SqliteCommand command1 = new SqliteCommand(sqlExpression, connection);
                using (SqliteDataReader reader = command1.ExecuteReader())
                {
                    if (reader.HasRows) // если есть данные
                    {
                        while (reader.Read())   // построчно считываем данные
                        {
                            var id = reader.GetValue(0);
                            var name = reader.GetValue(1);
                            //var age = reader.GetValue(2);

                            Console.WriteLine($"{id} \t {name} \t ");
                        }
                    }
                }
                command.CommandText = "DELETE FROM Users  where Name='Stas'";
                command.ExecuteNonQuery();
            }
            Console.WriteLine("OKKKK!!!!!");
            Console.Read();
        }
    }
}