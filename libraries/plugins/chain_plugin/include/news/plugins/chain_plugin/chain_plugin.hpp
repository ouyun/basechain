//
// Created by boy on 18-6-12.
//

#pragma once

#include <app/application.hpp>
#include <memory>
#include <boost/filesystem.hpp>
#include <fc/string.hpp>
#include <fc/exception/exception.hpp>
#include <news/chain/database.hpp>

#define NEWS_CHAIN_PLUGIN_NAME ("chain_plugin")


using namespace boost::program_options;
using namespace std;
namespace news{
    namespace plugins{
        namespace chain_plugin{

            namespace detail{
                class chain_plugin_impl;
            };

            class chain_plugin : public news::app::plugin<chain_plugin>{
            public:
                chain_plugin();
                virtual  ~chain_plugin();

                NEWSAPP_PLUGIN_REQUIRES();

                static const std::string& name() { static std::string name = NEWS_CHAIN_PLUGIN_NAME; return name; }
                virtual void set_program_options(options_description&, options_description& cfg) override;

            protected:
                virtual void plugin_initialize(const variables_map& options) override;
                virtual void plugin_startup() override;
                virtual void plugin_shutdown() override;
            private:
                std::unique_ptr< detail::chain_plugin_impl> _my;
            };





        }//namespace chain_plugin
    }//namespace plugins
}//namespace news