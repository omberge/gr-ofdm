/* -*- c++ -*- */
/* 
 * Copyright 2013 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_OFDM_SYMBOL_RANDOM_SRC_H
#define INCLUDED_OFDM_SYMBOL_RANDOM_SRC_H

#include <ofdm/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace ofdm {

    /*!
     * \brief <+description of block+>
     * \ingroup ofdm
     *
     */
    class OFDM_API symbol_random_src : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<symbol_random_src> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of ofdm::symbol_random_src.
       *
       * To avoid accidental use of raw pointers, ofdm::symbol_random_src's
       * constructor is in a private implementation
       * class. ofdm::symbol_random_src::make is the public interface for
       * creating new instances.
       */
      static sptr make(const std::vector<gr_complex> &symbols, int vlen);
    };

  } // namespace ofdm
} // namespace gr

#endif /* INCLUDED_OFDM_SYMBOL_RANDOM_SRC_H */
