/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "check_url"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "check_url"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "0.0.4"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * config_file_arg;	/**< @brief The optional configuration file.  */
  char * config_file_orig;	/**< @brief The optional configuration file original value given at command line.  */
  const char *config_file_help; /**< @brief The optional configuration file help description.  */
  unsigned int verbose_min; /**< @brief Show details for command-line debugging (Nagios may truncate output)'s minimum occurreces */
  unsigned int verbose_max; /**< @brief Show details for command-line debugging (Nagios may truncate output)'s maximum occurreces */
  const char *verbose_help; /**< @brief Show details for command-line debugging (Nagios may truncate output) help description.  */
  long timeout_arg;	/**< @brief Seconds before connection times out (default: 10).  */
  char * timeout_orig;	/**< @brief Seconds before connection times out (default: 10) original value given at command line.  */
  const char *timeout_help; /**< @brief Seconds before connection times out (default: 10) help description.  */
  long critical_arg;	/**< @brief Response time to result in critical status (seconds).  */
  char * critical_orig;	/**< @brief Response time to result in critical status (seconds) original value given at command line.  */
  const char *critical_help; /**< @brief Response time to result in critical status (seconds) help description.  */
  long warning_arg;	/**< @brief Response time to result in warning.  */
  char * warning_orig;	/**< @brief Response time to result in warning original value given at command line.  */
  const char *warning_help; /**< @brief Response time to result in warning help description.  */
  char * host_arg;	/**< @brief The host name in a HTTP 1.1 request (virtual host).  */
  char * host_orig;	/**< @brief The host name in a HTTP 1.1 request (virtual host) original value given at command line.  */
  const char *host_help; /**< @brief The host name in a HTTP 1.1 request (virtual host) help description.  */
  char * ip_arg;	/**< @brief The host/IP to check.  */
  char * ip_orig;	/**< @brief The host/IP to check original value given at command line.  */
  const char *ip_help; /**< @brief The host/IP to check help description.  */
  short port_arg;	/**< @brief Port number (default: 80).  */
  char * port_orig;	/**< @brief Port number (default: 80) original value given at command line.  */
  const char *port_help; /**< @brief Port number (default: 80) help description.  */
  char * url_arg;	/**< @brief URL to GET or POST (default: /).  */
  char * url_orig;	/**< @brief URL to GET or POST (default: /) original value given at command line.  */
  const char *url_help; /**< @brief URL to GET or POST (default: /) help description.  */
  char * onredirect_arg;	/**< @brief How to handle redirected pages.  */
  char * onredirect_orig;	/**< @brief How to handle redirected pages original value given at command line.  */
  const char *onredirect_help; /**< @brief How to handle redirected pages help description.  */
  char * authorization_arg;	/**< @brief Username:password on sites with basic authentication.  */
  char * authorization_orig;	/**< @brief Username:password on sites with basic authentication original value given at command line.  */
  const char *authorization_help; /**< @brief Username:password on sites with basic authentication help description.  */
  char * string_arg;	/**< @brief String to expect in the content.  */
  char * string_orig;	/**< @brief String to expect in the content original value given at command line.  */
  const char *string_help; /**< @brief String to expect in the content help description.  */
  const char *ssl_help; /**< @brief Connect via SSL. Port defaults to 443 help description.  */
  char * useragent_arg;	/**< @brief String to be sent in http header as \"User Agent\".  */
  char * useragent_orig;	/**< @brief String to be sent in http header as \"User Agent\" original value given at command line.  */
  const char *useragent_help; /**< @brief String to be sent in http header as \"User Agent\" help description.  */
  const char *no_verify_peer_help; /**< @brief Allow connections to SSL sites without certs (SSL) help description.  */
  const char *no_verify_host_help; /**< @brief Don't verify that the host and the certificate host match (SSL) help description.  */
  char * cacert_arg;	/**< @brief CA certificate to verify peer against (SSL).  */
  char * cacert_orig;	/**< @brief CA certificate to verify peer against (SSL) original value given at command line.  */
  const char *cacert_help; /**< @brief CA certificate to verify peer against (SSL) help description.  */
  char * cert_arg;	/**< @brief Client certificate file and password (SSL).  */
  char * cert_orig;	/**< @brief Client certificate file and password (SSL) original value given at command line.  */
  const char *cert_help; /**< @brief Client certificate file and password (SSL) help description.  */
  char * key_arg;	/**< @brief Private key file name (SSL).  */
  char * key_orig;	/**< @brief Private key file name (SSL) original value given at command line.  */
  const char *key_help; /**< @brief Private key file name (SSL) help description.  */
  char * protocol_arg;	/**< @brief The protocol to use (http, ftp) (default='http').  */
  char * protocol_orig;	/**< @brief The protocol to use (http, ftp) original value given at command line.  */
  const char *protocol_help; /**< @brief The protocol to use (http, ftp) help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int config_file_given ;	/**< @brief Whether config-file was given.  */
  unsigned int verbose_given ;	/**< @brief Whether verbose was given.  */
  unsigned int timeout_given ;	/**< @brief Whether timeout was given.  */
  unsigned int critical_given ;	/**< @brief Whether critical was given.  */
  unsigned int warning_given ;	/**< @brief Whether warning was given.  */
  unsigned int host_given ;	/**< @brief Whether host was given.  */
  unsigned int ip_given ;	/**< @brief Whether ip was given.  */
  unsigned int port_given ;	/**< @brief Whether port was given.  */
  unsigned int url_given ;	/**< @brief Whether url was given.  */
  unsigned int onredirect_given ;	/**< @brief Whether onredirect was given.  */
  unsigned int authorization_given ;	/**< @brief Whether authorization was given.  */
  unsigned int string_given ;	/**< @brief Whether string was given.  */
  unsigned int ssl_given ;	/**< @brief Whether ssl was given.  */
  unsigned int useragent_given ;	/**< @brief Whether useragent was given.  */
  unsigned int no_verify_peer_given ;	/**< @brief Whether no-verify-peer was given.  */
  unsigned int no_verify_host_given ;	/**< @brief Whether no-verify-host was given.  */
  unsigned int cacert_given ;	/**< @brief Whether cacert was given.  */
  unsigned int cert_given ;	/**< @brief Whether cert was given.  */
  unsigned int key_given ;	/**< @brief Whether key was given.  */
  unsigned int protocol_given ;	/**< @brief Whether protocol was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * The config file parser (deprecated version)
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_config_file() instead
 */
int cmdline_parser_configfile (const char *filename,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The config file parser
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_config_file (const char *filename,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_onredirect_values[];  /**< @brief Possible values for onredirect. */
extern const char *cmdline_parser_protocol_values[];  /**< @brief Possible values for protocol. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
