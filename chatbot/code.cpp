#include<iostream>
#include<string>

using namespace std;

class Chatbot
{
public:
    void startChat()
    {
        string query;

        cout << "=================================\n";
        cout << " Customer Support Chatbot\n";
        cout << " Type 'exit' to end chat\n";
        cout << "=================================\n";

        while (true)
        {
            cout << "\nYou: ";
            getline(cin, query);

            if (query == "exit")
            {
                cout << "Bot: Thank you for contacting us!\n";
                break;
            }

            respond(query);
        }
    }

private:
    void respond(string query)
    {
        if (query == "hello" || query == "hi")
        {
            cout << "Bot: Hello! How can I help you today?\n";
        }
        else if (query == "order status")
        {
            cout << "Bot: Please enter your order ID on our website.\n";
        }
        else if (query == "refund")
        {
            cout << "Bot: Refund requests are processed within 5-7 business days.\n";
        }
        else if (query == "contact support")
        {
            cout << "Bot: You can contact support at support@example.com.\n";
        }
        else
        {
            cout << "Bot: Sorry, I don't understand that query.\n";
        }
    }
};

int main()
{
    Chatbot bot;
    bot.startChat();

    return 0;
}