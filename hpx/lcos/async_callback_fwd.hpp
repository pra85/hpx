//  Copyright (c) 2007-2015 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_LCOS_ASYNC_CALLBACK_FWD_MAR_30_2015_1122AM)
#define HPX_LCOS_ASYNC_CALLBACK_FWD_MAR_30_2015_1122AM

#include <hpx/config.hpp>
#include <hpx/lcos/async_fwd.hpp>
#include <hpx/util/move.hpp>
#include <hpx/util/decay.hpp>

///////////////////////////////////////////////////////////////////////////////
namespace hpx
{
    ///////////////////////////////////////////////////////////////////////////
    namespace detail
    {
        // dispatch point used for async_cb implementations
        template <typename Func, typename Enable = void>
        struct async_cb_dispatch;

        // dispatch point used for async_cb<Action> implementations
        template <typename Action, typename Func, typename Enable = void>
        struct async_cb_action_dispatch;
    }

    ///////////////////////////////////////////////////////////////////////////
    template <typename F, typename ...Ts>
    BOOST_FORCEINLINE
    auto async_cb(F && f, Ts &&... ts)
    ->  decltype(detail::async_cb_dispatch<
                typename util::decay<F>::type
            >::call(std::forward<F>(f), std::forward<Ts>(ts)...));

    template <typename Action, typename F, typename ...Ts>
    BOOST_FORCEINLINE
    auto async_cb(F && f, Ts &&... ts)
    ->  decltype(detail::async_cb_action_dispatch<
                Action, typename util::decay<F>::type
            >::call(std::forward<F>(f), std::forward<Ts>(ts)...));
}

#endif
