//
// Created by florian on 09.12.20.
//

#include "char_frequency.h"

namespace huffman {

  char_frequency::char_frequency() {
    this->total = 0;
    this->frequency = 0;
    this->character = '\0';
  }

  char_frequency::char_frequency(const char character, const int frequency, const size_t total) {
    this->total = total;
    this->character = character;
    this->frequency = frequency;
  }

  char_frequency char_frequency::operator+(const char_frequency &freq) const {
    char_frequency new_freq{
            this->character == freq.character
            ? this->character : '\0',
            this->frequency + freq.frequency,
            this->total
    };
    return new_freq;
  }

  bool char_frequency::operator<(const char_frequency &freq) const {
    return this->frequency < freq.frequency;
  }
}