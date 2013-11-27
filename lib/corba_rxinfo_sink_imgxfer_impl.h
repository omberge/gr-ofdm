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

#ifndef INCLUDED_OFDM_CORBA_RXINFO_SINK_IMGXFER_IMPL_H
#define INCLUDED_OFDM_CORBA_RXINFO_SINK_IMGXFER_IMPL_H

#include <ofdm/corba_rxinfo_sink_imgxfer.h>

#include <ofdm/corba_push_supplier_wrapper.h>

namespace gr {
  namespace ofdm {

    class corba_rxinfo_sink_imgxfer_impl : public corba_rxinfo_sink_imgxfer
    {
     private:
        std::string   d_sevent_channel;
        std::string   d_snameservice_ip;
        std::string   d_snameservice_port;
        int           d_vlen;
        int			  d_vlen_sc;
        long          d_station_id;

        ofdm_imgtransfer_sink_sptr d_imgxfer;

        boost::shared_ptr<corba_push_supplier_wrapper> d_supplier;

     public:
      corba_rxinfo_sink_imgxfer_impl(std::string sevent_channel, std::string snameservice_ip, std::string snameservice_port, int vlen, int vlen_sc, long station_id, ofdm_imgtransfer_sink_sptr imgxfer);
      ~corba_rxinfo_sink_imgxfer_impl();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);

      virtual bool start();
      virtual bool stop();
    };

  } // namespace ofdm
} // namespace gr

#endif /* INCLUDED_OFDM_CORBA_RXINFO_SINK_IMGXFER_IMPL_H */
