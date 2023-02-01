<%@ Page Language="vb" AutoEventWireup="false" CodeBehind="Default.aspx.vb" Inherits="WebApplication5._Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <h1>Главная страница</h1>
            <h1>
                <asp:HyperLink ID="HyperLink1" runat="server" BorderStyle="Solid" Font-Bold="True" Font-Overline="True" ForeColor="#3399FF" NavigateUrl="~/Anketa.aspx" Target="_blank" Width="106px">Анкета</asp:HyperLink>
                <asp:Button ID="Button1" runat="server" Height="33px" PostBackUrl="~/Anketa.aspx" style="margin-left: 22px" Text="Анкета" Width="113px" />
            </h1>
            <p style="font-style: normal; font-size: xx-large; font-family: Impact, Haettenschweiler, 'Arial Narrow Bold', sans-serif; color: #FF0000">Hello, Web!</p>
            
        </div>
        <p style="font-style: normal; font-size: xx-large; font-family: Impact, Haettenschweiler, 'Arial Narrow Bold', sans-serif; color: #FF0000">
            &nbsp;</p>
    </form>
</body>
</html>
