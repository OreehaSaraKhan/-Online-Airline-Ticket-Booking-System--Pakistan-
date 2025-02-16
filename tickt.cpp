#include <iostream>
#include <string>
using namespace std;

// Simple Online Airline Ticket Booking System in Pakistan

// Function to book a ticket
void bookTicket() {
    string passengerName, departureCity, destinationCity;
    int numberOfTickets;
    double ticketPrice = 15000; // Fixed ticket price for simplicity

    cout << "\nWelcome to Pakistan Airline Ticket Booking System\n";

    // Input passenger details
    cout << "Enter Passenger Name: ";
    cin.ignore();
    getline(cin, passengerName);

    cout << "Enter Departure City: ";
    getline(cin, departureCity);

    cout << "Enter Destination City: ";
    getline(cin, destinationCity);

    cout << "Enter Number of Tickets: ";
    cin >> numberOfTickets;

    // Calculate total price
    double totalPrice = numberOfTickets * ticketPrice;

    // Display booking details
    cout << "\nBooking Details:\n";
    cout << "Passenger Name: " << passengerName << "\n";
    cout << "From: " << departureCity << "\n";
    cout << "To: " << destinationCity << "\n";
    cout << "Number of Tickets: " << numberOfTickets << "\n";
    cout << "Ticket Price (per ticket): PKR " << ticketPrice << "\n";
    cout << "Total Price: PKR " << totalPrice << "\n";

    cout << "\nThank you for booking with Pakistan Airlines!\n";
}

int main() {
    // Run the ticket booking system
    bookTicket();

    return 0;
}
