// See https://aka.ms/new-console-template for more information

bool flag;

do
{
    try
    {
        Console.Write("Enter a number: ");
        int num = Convert.ToInt32(Console.ReadLine());
        flag = true;
        if (num == 0)
        {
            Console.WriteLine("");
            Console.WriteLine(num);
            Console.WriteLine("");
            System.Environment.Exit(0);
        }
        checkingReminder(num);
    }
    catch (FormatException f_e)
    {
        Console.WriteLine("Not a number! " + f_e.Message + "\n");
        flag = false;
    }

} while (flag == false);

void checkingReminder(int NUM)
{
    int i = 0, j = 0;

    do
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            Console.Write(i + " + ");
            j += i;
        }
        i++;
    } while (i != NUM);

    j += i;

    Console.WriteLine(i + " = " + j);
}
