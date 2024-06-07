#include<iostream>


struct Element {
    private:
        int key;
        Element* next;
        Element* prev;

    public:
        void append(int key_) {
            Element* last = this->prev;

            Element* e = new Element{};
            e->key = key_;
            e->next = this;
            e->prev = last;

            last->next = e;
            this->prev = e;
        }

        void print() {
            for (Element* current = this->next; current != this; current = current->next) {
                std::cout << current->key << std::endl;
            }
        }

        int get_key(size_t pos) {
            size_t current_pos = 0;
            for (Element* current = this->next; current != this; current = current->next) {
                if (current_pos == pos) {
                    return current->key;
                }
                current_pos++;
            }
            return -1;
        }

        Element() {
            this->key = 0;
            this->next = this;
            this->prev = this;
        }
}; // Ende der Struct-Definition für Element.


int main() {

    // leere Liste erzeugen
    /*
    Element* anchor = new Element{ 0, 0, 0 };
    anchor->next = anchor;
    anchor->prev = anchor;
    */

   Element* anchor = new Element{};

    /*
    {
        // ein Element anhängen
        Element* last = anchor->prev;
        Element* e = new Element{ 42, anchor, last };
        last->next = e;
        anchor->prev = e;
    }
    */
   anchor->append(42);

    /*
    {
        // ein zweites Element anhängen
        Element* last = anchor->prev;
        Element* e = new Element{ 23, anchor, last };
        last->next = e;
        anchor->prev = e;
    }
    */
   anchor->append(23);

    // Ein drittes Element anhängen
    anchor->append(38);

    // Die Liste länger machen
    anchor->append(105);
    anchor->append(77);
    anchor->append(1042);
    anchor->append(16384);

    // Die Liste durchlaufen und die Schlüssel ausgeben.
    /*
    for (Element* current = anchor->next; current != anchor; current = current->next) {
        std::cout << current->key << std::endl;
    }
    */
   anchor->print();

    // Key des Elements an Stelle 4 ausgeben.
   std::cout << anchor->get_key(4) << std::endl; 

   // Folgendes geht nicht, weil Element::key privat ist.
   // std::cout << anchor->key << std::endl;
}