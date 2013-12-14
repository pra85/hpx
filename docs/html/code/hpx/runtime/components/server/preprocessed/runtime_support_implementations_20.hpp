// Copyright (c) 2007-2013 Hartmut Kaiser
// Copyright (c) 2012-2013 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx { namespace components { namespace server
{
    
    
    template <typename Component
       >
    struct create_component_action0
      : ::hpx::actions::result_action0<
            naming::gid_type (runtime_support::*)()
          , &runtime_support::create_component0<
                Component >
          , create_component_action0<
                Component > >
    {};
    template <typename Component
       >
    struct create_component_direct_action0
      : ::hpx::actions::direct_result_action0<
            naming::gid_type (runtime_support::*)()
          , &runtime_support::create_component0<
                Component >
          , create_component_direct_action0<
                Component > >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0>
    naming::gid_type runtime_support::create_component1(
        A0 a0)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor1<
                    typename Component::wrapping_type,
                    A0>(
                        boost::forward<A0>( a0 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0>
    struct create_component_action1
      : ::hpx::actions::result_action1<
            naming::gid_type (runtime_support::*)(A0)
          , &runtime_support::create_component1<
                Component , A0>
          , create_component_action1<
                Component , A0> >
    {};
    template <typename Component
      , typename A0>
    struct create_component_direct_action1
      : ::hpx::actions::direct_result_action1<
            naming::gid_type (runtime_support::*)(A0)
          , &runtime_support::create_component1<
                Component , A0>
          , create_component_direct_action1<
                Component , A0> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1>
    naming::gid_type runtime_support::create_component2(
        A0 a0 , A1 a1)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor2<
                    typename Component::wrapping_type,
                    A0 , A1>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1>
    struct create_component_action2
      : ::hpx::actions::result_action2<
            naming::gid_type (runtime_support::*)(A0 , A1)
          , &runtime_support::create_component2<
                Component , A0 , A1>
          , create_component_action2<
                Component , A0 , A1> >
    {};
    template <typename Component
      , typename A0 , typename A1>
    struct create_component_direct_action2
      : ::hpx::actions::direct_result_action2<
            naming::gid_type (runtime_support::*)(A0 , A1)
          , &runtime_support::create_component2<
                Component , A0 , A1>
          , create_component_direct_action2<
                Component , A0 , A1> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2>
    naming::gid_type runtime_support::create_component3(
        A0 a0 , A1 a1 , A2 a2)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor3<
                    typename Component::wrapping_type,
                    A0 , A1 , A2>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2>
    struct create_component_action3
      : ::hpx::actions::result_action3<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2)
          , &runtime_support::create_component3<
                Component , A0 , A1 , A2>
          , create_component_action3<
                Component , A0 , A1 , A2> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2>
    struct create_component_direct_action3
      : ::hpx::actions::direct_result_action3<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2)
          , &runtime_support::create_component3<
                Component , A0 , A1 , A2>
          , create_component_direct_action3<
                Component , A0 , A1 , A2> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3>
    naming::gid_type runtime_support::create_component4(
        A0 a0 , A1 a1 , A2 a2 , A3 a3)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor4<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3>
    struct create_component_action4
      : ::hpx::actions::result_action4<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3)
          , &runtime_support::create_component4<
                Component , A0 , A1 , A2 , A3>
          , create_component_action4<
                Component , A0 , A1 , A2 , A3> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3>
    struct create_component_direct_action4
      : ::hpx::actions::direct_result_action4<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3)
          , &runtime_support::create_component4<
                Component , A0 , A1 , A2 , A3>
          , create_component_direct_action4<
                Component , A0 , A1 , A2 , A3> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    naming::gid_type runtime_support::create_component5(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor5<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    struct create_component_action5
      : ::hpx::actions::result_action5<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4)
          , &runtime_support::create_component5<
                Component , A0 , A1 , A2 , A3 , A4>
          , create_component_action5<
                Component , A0 , A1 , A2 , A3 , A4> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    struct create_component_direct_action5
      : ::hpx::actions::direct_result_action5<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4)
          , &runtime_support::create_component5<
                Component , A0 , A1 , A2 , A3 , A4>
          , create_component_direct_action5<
                Component , A0 , A1 , A2 , A3 , A4> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    naming::gid_type runtime_support::create_component6(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor6<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    struct create_component_action6
      : ::hpx::actions::result_action6<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5)
          , &runtime_support::create_component6<
                Component , A0 , A1 , A2 , A3 , A4 , A5>
          , create_component_action6<
                Component , A0 , A1 , A2 , A3 , A4 , A5> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    struct create_component_direct_action6
      : ::hpx::actions::direct_result_action6<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5)
          , &runtime_support::create_component6<
                Component , A0 , A1 , A2 , A3 , A4 , A5>
          , create_component_direct_action6<
                Component , A0 , A1 , A2 , A3 , A4 , A5> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    naming::gid_type runtime_support::create_component7(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor7<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    struct create_component_action7
      : ::hpx::actions::result_action7<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6)
          , &runtime_support::create_component7<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6>
          , create_component_action7<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    struct create_component_direct_action7
      : ::hpx::actions::direct_result_action7<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6)
          , &runtime_support::create_component7<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6>
          , create_component_direct_action7<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    naming::gid_type runtime_support::create_component8(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor8<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    struct create_component_action8
      : ::hpx::actions::result_action8<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7)
          , &runtime_support::create_component8<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7>
          , create_component_action8<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    struct create_component_direct_action8
      : ::hpx::actions::direct_result_action8<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7)
          , &runtime_support::create_component8<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7>
          , create_component_direct_action8<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
    naming::gid_type runtime_support::create_component9(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor9<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
    struct create_component_action9
      : ::hpx::actions::result_action9<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8)
          , &runtime_support::create_component9<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8>
          , create_component_action9<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
    struct create_component_direct_action9
      : ::hpx::actions::direct_result_action9<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8)
          , &runtime_support::create_component9<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8>
          , create_component_direct_action9<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
    naming::gid_type runtime_support::create_component10(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor10<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
    struct create_component_action10
      : ::hpx::actions::result_action10<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9)
          , &runtime_support::create_component10<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9>
          , create_component_action10<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
    struct create_component_direct_action10
      : ::hpx::actions::direct_result_action10<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9)
          , &runtime_support::create_component10<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9>
          , create_component_direct_action10<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
    naming::gid_type runtime_support::create_component11(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor11<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
    struct create_component_action11
      : ::hpx::actions::result_action11<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10)
          , &runtime_support::create_component11<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10>
          , create_component_action11<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
    struct create_component_direct_action11
      : ::hpx::actions::direct_result_action11<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10)
          , &runtime_support::create_component11<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10>
          , create_component_direct_action11<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
    naming::gid_type runtime_support::create_component12(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor12<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
    struct create_component_action12
      : ::hpx::actions::result_action12<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11)
          , &runtime_support::create_component12<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11>
          , create_component_action12<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
    struct create_component_direct_action12
      : ::hpx::actions::direct_result_action12<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11)
          , &runtime_support::create_component12<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11>
          , create_component_direct_action12<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
    naming::gid_type runtime_support::create_component13(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor13<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
    struct create_component_action13
      : ::hpx::actions::result_action13<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12)
          , &runtime_support::create_component13<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12>
          , create_component_action13<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
    struct create_component_direct_action13
      : ::hpx::actions::direct_result_action13<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12)
          , &runtime_support::create_component13<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12>
          , create_component_direct_action13<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13>
    naming::gid_type runtime_support::create_component14(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12 , A13 a13)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor14<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13>
    struct create_component_action14
      : ::hpx::actions::result_action14<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13)
          , &runtime_support::create_component14<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13>
          , create_component_action14<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13>
    struct create_component_direct_action14
      : ::hpx::actions::direct_result_action14<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13)
          , &runtime_support::create_component14<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13>
          , create_component_direct_action14<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14>
    naming::gid_type runtime_support::create_component15(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12 , A13 a13 , A14 a14)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor15<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14>
    struct create_component_action15
      : ::hpx::actions::result_action15<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14)
          , &runtime_support::create_component15<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14>
          , create_component_action15<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14>
    struct create_component_direct_action15
      : ::hpx::actions::direct_result_action15<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14)
          , &runtime_support::create_component15<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14>
          , create_component_direct_action15<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15>
    naming::gid_type runtime_support::create_component16(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12 , A13 a13 , A14 a14 , A15 a15)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor16<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15>
    struct create_component_action16
      : ::hpx::actions::result_action16<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15)
          , &runtime_support::create_component16<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15>
          , create_component_action16<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15>
    struct create_component_direct_action16
      : ::hpx::actions::direct_result_action16<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15)
          , &runtime_support::create_component16<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15>
          , create_component_direct_action16<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16>
    naming::gid_type runtime_support::create_component17(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12 , A13 a13 , A14 a14 , A15 a15 , A16 a16)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor17<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16>
    struct create_component_action17
      : ::hpx::actions::result_action17<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16)
          , &runtime_support::create_component17<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16>
          , create_component_action17<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16>
    struct create_component_direct_action17
      : ::hpx::actions::direct_result_action17<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16)
          , &runtime_support::create_component17<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16>
          , create_component_direct_action17<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17>
    naming::gid_type runtime_support::create_component18(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12 , A13 a13 , A14 a14 , A15 a15 , A16 a16 , A17 a17)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor18<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17>
    struct create_component_action18
      : ::hpx::actions::result_action18<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17)
          , &runtime_support::create_component18<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17>
          , create_component_action18<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17>
    struct create_component_direct_action18
      : ::hpx::actions::direct_result_action18<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17)
          , &runtime_support::create_component18<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17>
          , create_component_direct_action18<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18>
    naming::gid_type runtime_support::create_component19(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12 , A13 a13 , A14 a14 , A15 a15 , A16 a16 , A17 a17 , A18 a18)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor19<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18>
    struct create_component_action19
      : ::hpx::actions::result_action19<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18)
          , &runtime_support::create_component19<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18>
          , create_component_action19<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18>
    struct create_component_direct_action19
      : ::hpx::actions::direct_result_action19<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18)
          , &runtime_support::create_component19<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18>
          , create_component_direct_action19<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18> >
    {};
}}}
namespace hpx { namespace components { namespace server
{
    template <typename Component, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19>
    naming::gid_type runtime_support::create_component20(
        A0 a0 , A1 a1 , A2 a2 , A3 a3 , A4 a4 , A5 a5 , A6 a6 , A7 a7 , A8 a8 , A9 a9 , A10 a10 , A11 a11 , A12 a12 , A13 a13 , A14 a14 , A15 a15 , A16 a16 , A17 a17 , A18 a18 , A19 a19)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();
        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }
        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create_with_args(
                component_constructor_functor20<
                    typename Component::wrapping_type,
                    A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19>(
                        boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ) , boost::forward<A8>( a8 ) , boost::forward<A9>( a9 ) , boost::forward<A10>( a10 ) , boost::forward<A11>( a11 ) , boost::forward<A12>( a12 ) , boost::forward<A13>( a13 ) , boost::forward<A14>( a14 ) , boost::forward<A15>( a15 ) , boost::forward<A16>( a16 ) , boost::forward<A17>( a17 ) , boost::forward<A18>( a18 ) , boost::forward<A19>( a19 )));
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);
        return id;
    }
    
    
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19>
    struct create_component_action20
      : ::hpx::actions::result_action20<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19)
          , &runtime_support::create_component20<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19>
          , create_component_action20<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19> >
    {};
    template <typename Component
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19>
    struct create_component_direct_action20
      : ::hpx::actions::direct_result_action20<
            naming::gid_type (runtime_support::*)(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19)
          , &runtime_support::create_component20<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19>
          , create_component_direct_action20<
                Component , A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19> >
    {};
}}}