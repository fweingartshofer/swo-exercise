//
// Created by florian on 20.12.20.
//

#pragma once

#include "chessman.h"

namespace chess {
  class rook: public chessman {
  public:
    explicit rook(color c);

    void available_moves(chessman **figure_board, position pos, int size, bool *movement_board) const override;

  private:


  };
}

