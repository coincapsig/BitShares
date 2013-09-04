#include <bts/bitchat/bitchat_message_db.hpp>
#include <fc/reflect/variant.hpp>
#include <fc/exception/exception.hpp>
namespace bts { namespace bitchat {
  
  namespace detail 
  {
     class message_db_impl
     {
       public:

     };

  } // namespace detail

  message_db::message_db()
  :my( new detail::message_db_impl() )
  {
  }

  message_db::~message_db(){}

  void message_db::open( const fc::path& dbdir, const fc::uint512& key, bool create )
  { try {

  } FC_RETHROW_EXCEPTIONS( warn, "", ("dir", dbdir)("key",key)("create",create)) }

  void message_db::store( const decrypted_message& m )
  { try {

  } FC_RETHROW_EXCEPTIONS( warn, "", ("msg",m) ) }
 

  std::vector<message_header>  message_db::fetch_headers( private_message_type t, 
                                              fc::time_point_sec from_time, 
                                              fc::time_point_sec to_time,
                                              fc::optional<fc::ecc::public_key_data> to_key,
                                              fc::optional<fc::ecc::public_key_data> from_key )
  { try {
     std::vector<message_header> headers;

     return headers;
  } FC_RETHROW_EXCEPTIONS( warn, "", ("type",t)("from_time",from_time)("to_time",to_time)("to_key",to_key)("from_key",from_key) ) }
  
  std::vector<char> message_db::fetch_data(  const fc::uint256& digest )
  { try {
     std::vector<char> data;
     return data;
  } FC_RETHROW_EXCEPTIONS( warn, "", ("digest",digest ) ) }


} } // bts::bitchat
