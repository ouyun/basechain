//
// Created by boy on 18-6-26.
//

#pragma once

#include <news/chain/transaction.hpp>
#include <news/base/types.hpp>
#include <news/base/operation.hpp>
namespace factory{


    using namespace news::chain;
    using namespace news::base;

    class helper{
    public:
        signed_transaction create_account(private_key_type sign_pk, account_name creator, account_name name);
    };



    std::string  string_json_rpc(const std::string &str);

}