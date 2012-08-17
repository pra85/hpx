//  Copyright (c) 2007-2012 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_init.hpp>
#include <hpx/util/ini.hpp>

#include <boost/config.hpp>
#include <boost/scoped_array.hpp>

///////////////////////////////////////////////////////////////////////////////
// Forwarding of hpx_main, if necessary. This has to be in a separate
// translation unit to ensure the linker can pick or ignore this function,
// depending on whether the main executable defines this symbol or not.
int hpx_main()
{
    hpx::util::section const& ini = hpx::get_runtime().get_config();
    std::string cmdline(ini.get_entry("hpx.reconstructed_cmd_line", ""));

    using namespace boost::program_options;
#if defined(BOOST_WINDOWS)
    std::vector<std::string> args = split_winmain(cmdline);
#else
    std::vector<std::string> args = split_unix(cmdline);
#endif

    // Copy all arguments which are not hpx related to a temporary array
    boost::scoped_array<char*> argv(new char*[args.size()]);
    std::size_t argcount = 0;
    for(std::size_t i = 0; i < args.size(); ++i)
    {
        if (0 != args[i].find("--hpx:"))
            argv[argcount++] = const_cast<char*>(args[i].data());
    }

    // Invoke hpx_main
    return hpx_main(static_cast<int>(argcount), argv.get());
}
