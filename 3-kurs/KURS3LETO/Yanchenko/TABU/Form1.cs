using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.DirectoryServices;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Security.AccessControl;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
/*
 * 
 * Q: Как ограничить пользователя определенным перечнем программ разрешенных для запуска.
A: Вариант 1:
Войдите в систему с учетной записью пользователя, которому необходимо установить ограничение 
запуска программ и в реестре в разделе

HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer
параметр DisallowRun
значение 1
создать подраздел с таким же именем, в котором нужно создать строковые параметры, 
свой для каждой программы запрещенной для запуска, именуя их числами по возрастанию.

Например:
Имя параметра: 1
значение: iexplore.exe
Имя параметра: 2
значение: Winword.exe

Обратите внимание, что если вы укажете запрет запуска редактора реестра (Regedit.exe), то Вы сами не сможете больше запустить его в этой учетной записи, а следовательно не сможете отменить запрет.


Также можно использовать запрет запуска всех приложений кроме указанных. Сделать это можно в том же разделе реестра
HKLM\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer
только теперь нужно создать параметр RestrictRun и установить его значение 1.
Далее, как и в прошлом примере, создаем подраздел с тем же именем (RestrictRun) и в нем 
перечисляем приложения разрешенные для запуска.
Например:
Параметр: 1
значение: Regedit.exe
Параметр: 2
значение: Winword.exe
Обратите внимание, что в данном случае достаточно указать имена исполняемых файлов, а полный путь указывать необязательно.
Не забудьте указать файл regedit.exe, иначе вы сами не сможете больше запустить редактор реестра.
 
RegistryKey currentUserKey = Registry.CurrentUser;
RegistryKey helloKey= currentUserKey.CreateSubKey("HelloKey");
helloKey.SetValue("login", "admin");
helloKey.SetValue("password", "12345");
helloKey.Close();

RegistryKey currentUserKey = Registry.CurrentUser;
RegistryKey helloKey= currentUserKey.OpenSubKey("HelloKey", true);
RegistryKey subHelloKey = helloKey.CreateSubKey("SubHelloKey");
subHelloKey.SetValue("val", "23");
subHelloKey.Close();
helloKey.Close();

RegistryKey currentUserKey = Registry.CurrentUser;
RegistryKey helloKey= currentUserKey.OpenSubKey("HelloKey");
 
string login = helloKey.GetValue("login").ToString();
string password = helloKey.GetValue("password").ToString();
helloKey.Close();
 
Console.WriteLine(login);
Console.WriteLine(password);

RegistryKey currentUserKey = Registry.CurrentUser;
RegistryKey helloKey= currentUserKey.OpenSubKey("HelloKey", true);
// удаляем вложенный ключ
helloKey.DeleteSubKey("SubHelloKey");
// удаляем значение из ключа
helloKey.DeleteValue("login");
helloKey.Close();
// удаляем сам ключ
currentUserKey.DeleteSubKey("HelloKey");



 Registry.SetValue(keyName, "DisallowRun", "1", RegistryValueKind.DWord);
            //RegistryKey subHelloKey = helloKey.CreateSubKey("SubHelloKey");
            Registry.SetValue(keyName + "\\" + "DisallowRun", "1", textBox1.Text);
          /*  Registry.SetValue(keyName, "TestLong", 12345678901234,
                RegistryValueKind.QWord);

            
            Registry.SetValue(keyName, "TestExpand", "My path: %path%");
            Registry.SetValue(keyName, "TestExpand2", "My path: %path%",
                RegistryValueKind.ExpandString);

         
            string[] strings = { "One", "Two", "Three" };
            Registry.SetValue(keyName, "TestArray", strings);

           
            string noSuch = (string)Registry.GetValue(keyName,
                "NoSuchName",
                "Return this default if NoSuchName does not exist.");
            Console.WriteLine("\r\nNoSuchName: {0}", noSuch);

            
            int tInteger = (int)Registry.GetValue(keyName, "", -1);
            Console.WriteLine("(Default): {0}", tInteger);
            long tLong = (long)Registry.GetValue(keyName, "TestLong",
                long.MinValue);
            Console.WriteLine("TestLong: {0}", tLong);

         
            string[] tArray = (string[])Registry.GetValue(keyName,
                "TestArray",
                new string[] { "Default if TestArray does not exist." });
            for (int i = 0; i < tArray.Length; i++)
            {
                Console.WriteLine("TestArray({0}): {1}", i, tArray[i]);
            }

           
            string tExpand = (string)Registry.GetValue(keyName,
                 "TestExpand",
                 "Default if TestExpand does not exist.");
            Console.WriteLine("TestExpand: {0}", tExpand);

            
            string tExpand2 = (string)Registry.GetValue(keyName,
                "TestExpand2",
                "Default if TestExpand2 does not exist.");
            Console.WriteLine("TestExpand2: {0}...",
                tExpand2.Substring(0, 40));

            Console.WriteLine("\r\nUse the registry editor to examine the key.");
            Console.WriteLine("Press the Enter key to delete the key.");
            Console.ReadLine();
            Registry.CurrentUser.DeleteSubKey(subkey);



Удалять пользователей и группы можно с помощью команды
ntrights -U “пользователь или группа” -R SeSystemtimePrivilege
меняя “пользователи или группа” на то, что нужно удалить.

В нашем примере нам не нужно, чтобы все пользователи с правами 
администратора могли изменять дату и время, по этому уберем разрешение 
группе администраторов менять время и дату. Вводим команду 
ntrights -U “Администраторы” -R SeSystemtimePrivilege
и нажимаем клавишу Enter.


Чтобы добавить разрешение пользователю на изменение даты и времени – 
нужно воспользоваться командой ntrights -U “пользователь или группа” +R SeSystemtimePrivilege. 
К примеру мы дадим разрешение пользователю Sa менять время и дату на этом компьютере,
для этого вводим команду ntrights -U “Sa” +R SeSystemtimePrivilege и нажимаем клавишу Enter.

Для работы вам понадобится подключить следующие пространства имен:

using System.ComponentModel;
using System.Diagnostics;

Код реализации данной задачи:

ProcessStartInfo processInfo = new ProcessStartInfo(); //создаем новый процесс
processInfo.Verb = "runas"; //в данном случае указываем, что процесс должен быть запущен с правами администратора
processInfo.FileName = ""; //указываем исполняемый файл (программу) для запуска
try
{
Process.Start(processInfo); //пытаемся запустить процесс
}
catch (Win32Exception)
{
//Ничего не делаем, потому что пользователь, возможно, нажал кнопку "Нет" в ответ на вопрос о запуске программы в окне предупреждения UAC (для Windows 7)
}

          */



namespace TABU
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DirectoryEntry localMachine = new DirectoryEntry("WinNT://" + Environment.MachineName);
            foreach (DirectoryEntry child in localMachine.Children)
            {
                if (child.SchemaClassName == "User")
                {
                    listBox1.Items.Add(child.Name + Environment.NewLine);
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            openFileDialog1.FileName = "Yandex.exe";
            if (openFileDialog1.ShowDialog() == DialogResult.Cancel)
                return;
            string filename = openFileDialog1.FileName;
            textBox1.Text = Path.GetFileName(filename);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string s;
            const string userRoot = "HKEY_CURRENT_USER";
            const string subkey = "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer";
            const string keyName = userRoot + "\\" + subkey;
            Registry.SetValue(keyName, "DisallowRun", listBox2.SelectedIndex + 1, RegistryValueKind.DWord);
            Registry.SetValue(keyName + "\\" + "DisallowRun", "1", textBox1.Text);
            listBox2.Items.Clear();
            for (int i = 1; i < 10; i++)
            {
                s = (string)Registry.GetValue("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\DisallowRun",
                     i.ToString(), "Empty");
                listBox2.Items.Add(s + Environment.NewLine);
            }
            MessageBox.Show(
    "Необходимо перезагрузить компьютер, вы помните???",
    "Сообщение",
    MessageBoxButtons.YesNo,
    MessageBoxIcon.Information,
    MessageBoxDefaultButton.Button1,
    MessageBoxOptions.DefaultDesktopOnly);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            string s;
            listBox2.Items.Clear();
            for (int i = 1; i < 10; i++)
            {
                s = (string)Registry.GetValue("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\DisallowRun",
                     i.ToString(), "Empty");
                listBox2.Items.Add(s + Environment.NewLine);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int i;
            string s;

            i = listBox2.SelectedIndex + 1;
            textBox1.Text = i.ToString();
            Registry.SetValue("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\DisallowRun", i.ToString(), "Empty");
            listBox2.Items.Clear();
            for (int j = 1; j < 10; j++)
            {
                s = (string)Registry.GetValue("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\DisallowRun",
                     j.ToString(), "Empty");
                listBox2.Items.Add(s + Environment.NewLine);
            }
            MessageBox.Show(
        "Необходимо перезагрузить компьютер, вы помните???",
        "Сообщение",
        MessageBoxButtons.YesNo,
        MessageBoxIcon.Information,
        MessageBoxDefaultButton.Button1,
        MessageBoxOptions.DefaultDesktopOnly);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (folderBrowserDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox2.Text = folderBrowserDialog1.SelectedPath;
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            try
            {
                string folderPath = textBox2.Text;
                string adminUserName = Environment.UserName;// getting your adminUserName
                DirectorySecurity ds = Directory.GetAccessControl(folderPath);
                FileSystemAccessRule fsa = new FileSystemAccessRule(adminUserName, FileSystemRights.FullControl, AccessControlType.Deny);

ds.AddAccessRule(fsa);
                Directory.SetAccessControl(folderPath, ds);
                MessageBox.Show("Locked");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            try
            {
                string folderPath = textBox2.Text;
                string adminUserName = Environment.UserName;// getting your adminUserName
                DirectorySecurity ds = Directory.GetAccessControl(folderPath);
                FileSystemAccessRule fsa = new FileSystemAccessRule(adminUserName, FileSystemRights.FullControl, AccessControlType.Deny);

ds.RemoveAccessRule(fsa);
                Directory.SetAccessControl(folderPath, ds);
                MessageBox.Show("UnLocked");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
          
                Microsoft.Win32.RegistryKey HKCU = Microsoft.Win32.Registry.CurrentUser;
                Microsoft.Win32.RegistryKey key = HKCU.CreateSubKey(
                @"SoftwareMicrosoftWindowsCurrentVersionPoliciesSystem");
                key.SetValue("DisableTaskMgr", 1,
                Microsoft.Win32.RegistryValueKind.DWord);
            MessageBox.Show(
         "Необходимо перезагрузить компьютер, вы помните???",
         "Сообщение",
         MessageBoxButtons.YesNo,
         MessageBoxIcon.Information,
         MessageBoxDefaultButton.Button1,
         MessageBoxOptions.DefaultDesktopOnly);
        }

        private void button10_Click(object sender, EventArgs e)
        {
            Microsoft.Win32.RegistryKey HKCU = Microsoft.Win32.Registry.CurrentUser;
            Microsoft.Win32.RegistryKey key = HKCU.CreateSubKey(
            @"SoftwareMicrosoftWindowsCurrentVersionPoliciesSystem");
            key.SetValue("DisableTaskMgr", 0,
            Microsoft.Win32.RegistryValueKind.DWord);
            MessageBox.Show(
        "Необходимо перезагрузить компьютер, вы помните???",
        "Сообщение",
        MessageBoxButtons.YesNo,
        MessageBoxIcon.Information,
        MessageBoxDefaultButton.Button1,
        MessageBoxOptions.DefaultDesktopOnly);
        }
    }
}
