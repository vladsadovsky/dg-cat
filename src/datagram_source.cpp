/**
 * Copyright (c) 2024 Samuel J. McKelvie
 *
 * MIT License - See LICENSE file accompanying this package.
 */
#include "dg_cat/datagram_source.hpp"
#include "dg_cat/udp_datagram_source.hpp"
#include "dg_cat/random_datagram_source.hpp"
#include "dg_cat/file_datagram_source.hpp"

std::unique_ptr<DatagramSource> DatagramSource::create(const DgCatConfig& config, const std::string& path)
{
    if (path.compare(0, 6, "udp://") == 0) {
        return UdpDatagramSource::create(config, path);
    } else if (path.compare(0, 9, "random://") == 0) {
        return RandomDatagramSource::create(config, path);
    } else {
        return FileDatagramSource::create(config, path);
    }
}
