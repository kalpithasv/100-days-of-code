//linked list playlist question
#include <iostream>
#include <string>
using namespace std;
//song playlist in linked list
class SongNode { // Node class for linked list
public:
    string songName; // Song name
    string artist; // Artist name
    SongNode* next; // Pointer to the next node

    SongNode(string name, string artistName) { // Constructor
        songName = name;
        artist = artistName;
        next = nullptr; // Initialize next pointer to null
    }
};
class Playlist { // Linked list class
public:
    SongNode* head; // Head pointer of the linked list

    Playlist() { // Constructor
        head = nullptr; // Initialize head pointer to null
    }

    void addSong(string name, string artistName) { // Function to add a song to the playlist
        SongNode* newSong = new SongNode(name, artistName); // Create a new song node
        if (head == nullptr) { // If the playlist is empty
            head = newSong; // Set the new song as the head
        } else {
            SongNode* temp = head; // Temporary pointer to traverse the list
            while (temp->next != nullptr) { // Traverse to the end of the list
                temp = temp->next;
            }
            temp->next = newSong; // Add the new song at the end of the list
        }
    }
    void displayPlaylist() { // Function to display the playlist
        SongNode* temp = head; // Temporary pointer to traverse the list
        if (temp == nullptr) { // If the playlist is empty
            cout << "Playlist is empty." << endl;
            return;
        }
        cout << "Playlist:" << endl; // Display header
        while (temp != nullptr) { // Traverse the list
            cout << "Song: " << temp->songName << ", Artist: " << temp->artist << endl; // Display song details
            temp = temp->next; // Move to the next node
        }
    }
    void deletePlaylist() { // Function to delete the entire playlist
        SongNode* temp = head; // Temporary pointer to traverse the list
        while (temp != nullptr) { // Traverse the list
            SongNode* nextSong = temp->next; // Store the next node
            delete temp; // Delete the current node
            temp = nextSong; // Move to the next node
        }
        head = nullptr; // Set head pointer to null
    }
    ~Playlist() { // Destructor
        deletePlaylist(); // Call deletePlaylist to free memory
    }
};
int main() {
    Playlist myPlaylist; // Create a playlist object
    myPlaylist.addSong("Song 1", "Artist 1"); // Add songs to the playlist
    myPlaylist.addSong("Song 2", "Artist 2");
    myPlaylist.addSong("Song 3", "Artist 3");

    myPlaylist.displayPlaylist(); // Display the playlist

    return 0; // Destructor will be called automatically to free memory
}
// This code implements a simple linked list to manage a playlist of songs.
