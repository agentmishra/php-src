/* This is a generated file, edit the .stub.php files instead. */

static const func_info_t func_infos[] = {
    F1("zend_version", MAY_BE_STRING),
    FN("func_get_args", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_ANY),
    F1("get_class_methods", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING),
    F1("get_included_files", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING),
    FN("set_error_handler", MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING|MAY_BE_ARRAY_OF_OBJECT|MAY_BE_OBJECT|MAY_BE_NULL),
    F0("restore_error_handler", MAY_BE_TRUE),
    FN("set_exception_handler", MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING|MAY_BE_ARRAY_OF_OBJECT|MAY_BE_OBJECT|MAY_BE_NULL),
    F0("restore_exception_handler", MAY_BE_TRUE),
    F1("get_declared_classes", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING),
    F1("get_declared_traits", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING),
    F1("get_declared_interfaces", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING),
    F1("get_defined_functions", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_ARRAY),
    F1("get_resource_type", MAY_BE_STRING),
    F1("get_loaded_extensions", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING),
    F1("get_defined_constants", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_ANY),
    F1("debug_backtrace", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_ARRAY),
    F1("get_extension_funcs", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING|MAY_BE_FALSE),
    F1("gc_status", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_LONG),
    F1("class_implements", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_STRING|MAY_BE_FALSE),
    F1("class_parents", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_STRING|MAY_BE_FALSE),
    F1("class_uses", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_STRING|MAY_BE_FALSE),
    F1("spl_classes", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_STRING),
    F1("spl_object_hash", MAY_BE_STRING),
    FN("socket_export_stream", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("dba_popen", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("dba_open", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("bzopen", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("gzopen", MAY_BE_RESOURCE|MAY_BE_FALSE),
#if HAVE_NANOSLEEP
    F1("time_nanosleep", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_STRING|MAY_BE_ARRAY_OF_LONG|MAY_BE_BOOL),
#endif
#if defined(PHP_WIN32) || HAVE_DNS_SEARCH_FUNC
    F1("dns_get_record", MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_ARRAY|MAY_BE_FALSE),
#endif
    FN("opendir", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("popen", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("fopen", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("tmpfile", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("fsockopen", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("pfsockopen", MAY_BE_RESOURCE|MAY_BE_FALSE),
#if defined(PHP_CAN_SUPPORT_PROC_OPEN)
    F1("proc_open", MAY_BE_RESOURCE|MAY_BE_FALSE),
#endif
    F1("stream_context_create", MAY_BE_RESOURCE),
    FN("stream_context_get_default", MAY_BE_RESOURCE),
    FN("stream_context_set_default", MAY_BE_RESOURCE),
    FN("stream_filter_prepend", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("stream_filter_append", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("stream_socket_client", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("stream_socket_server", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("stream_socket_accept", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("zip_open", MAY_BE_RESOURCE|MAY_BE_LONG|MAY_BE_FALSE),
    FN("zip_read", MAY_BE_RESOURCE|MAY_BE_FALSE),
    F1("json_encode", MAY_BE_STRING|MAY_BE_FALSE),
    F1("json_last_error_msg", MAY_BE_STRING),
    FN("oci_new_connect", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("oci_connect", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("oci_pconnect", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("oci_parse", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("oci_get_implicit_resultset", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("oci_password_change", MAY_BE_RESOURCE|MAY_BE_BOOL),
    FN("oci_new_cursor", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_prepare", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_exec", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_connect", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_pconnect", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_tables", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_columns", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_gettypeinfo", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_primarykeys", MAY_BE_RESOURCE|MAY_BE_FALSE),
#if !defined(HAVE_SOLID) && !defined(HAVE_SOLID_30) && !defined(HAVE_SOLID_35)
    FN("odbc_procedurecolumns", MAY_BE_RESOURCE|MAY_BE_FALSE),
#endif
#if !defined(HAVE_SOLID) && !defined(HAVE_SOLID_30) && !defined(HAVE_SOLID_35)
    FN("odbc_procedures", MAY_BE_RESOURCE|MAY_BE_FALSE),
#endif
#if !defined(HAVE_SOLID) && !defined(HAVE_SOLID_30) && !defined(HAVE_SOLID_35)
    FN("odbc_foreignkeys", MAY_BE_RESOURCE|MAY_BE_FALSE),
#endif
    FN("odbc_specialcolumns", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("odbc_statistics", MAY_BE_RESOURCE|MAY_BE_FALSE),
#if !defined(HAVE_DBMAKER) && !defined(HAVE_SOLID) && !defined(HAVE_SOLID_30) &&!defined(HAVE_SOLID_35)
    FN("odbc_tableprivileges", MAY_BE_RESOURCE|MAY_BE_FALSE),
#endif
#if !defined(HAVE_DBMAKER) && !defined(HAVE_SOLID) && !defined(HAVE_SOLID_30) &&!defined(HAVE_SOLID_35)
    FN("odbc_columnprivileges", MAY_BE_RESOURCE|MAY_BE_FALSE),
#endif
    F1("pg_socket", MAY_BE_RESOURCE|MAY_BE_FALSE),
    FN("pcntl_signal_get_handler", MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_ARRAY_KEY_LONG|MAY_BE_ARRAY_OF_STRING|MAY_BE_ARRAY_OF_OBJECT|MAY_BE_OBJECT|MAY_BE_LONG),
};