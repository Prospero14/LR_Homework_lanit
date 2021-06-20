# 1 "c:\\users\\dkame\\desktop\\new folder\\check_emails\\\\combined_check_emails.c"
# 1 "D:\\load\\include/lrun.h" 1
 
 












 











# 103 "D:\\load\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "D:\\load\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "D:\\load\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "D:\\load\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "D:\\load\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "D:\\load\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "D:\\load\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "D:\\load\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "D:\\load\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "D:\\load\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "D:\\load\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "D:\\load\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "D:\\load\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "D:\\load\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "D:\\load\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "D:\\load\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "D:\\load\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "D:\\load\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "D:\\load\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "D:\\load\\include/lrun.h"


# 1075 "D:\\load\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\dkame\\desktop\\new folder\\check_emails\\\\combined_check_emails.c" 2

# 1 "D:\\load\\include/SharedParameter.h" 1



 
 
 
 
# 100 "D:\\load\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\dkame\\desktop\\new folder\\check_emails\\\\combined_check_emails.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\load\\include/web_api.h" 1







# 1 "D:\\load\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "D:\\load\\include/as_web.h"


# 802 "D:\\load\\include/as_web.h"



























# 840 "D:\\load\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "D:\\load\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "D:\\load\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "D:\\load\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"id\":1,\"result\":{\"status\":200}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 

 

char WebSocketReceive1[] = "{\"id\":2,\"result\":{\"status\":200}}";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	 

 

char WebSocketReceive2[] = "{\"id\":3,\"result\":{\"status\":200}}";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	 

 

char WebSocketReceive3[] = "{\"id\":4,\"result\":{\"status\":200}}";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	 

 

char WebSocketReceive4[] = "{\"id\":5,\"result\":{\"status\":200}}";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	 

 

char WebSocketReceive5[] = "{\"method\":\"notice\",\"params\":{\"system\":\"storage\",\"meta\":{\"email\":\""
                        "{LOGIN}@{emailhost}\"},\"events\":[{\"name\":\"change\",\"data\":{\"revision_pre"
                        "v\":57,\"revision_last\":58,\"checksum_prev\":2842383104,\"checksum_last\":40515"
                        "39866}}]}}";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	 

 

char WebSocketReceive6[] = "{\"id\":6,\"result\":{\"status\":200}}";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	 

 

char WebSocketReceive7[] = "{\"id\":7,\"result\":{\"status\":200}}";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	 

 

char WebSocketReceive8[] = "{\"id\":8,\"result\":{\"status\":200}}";
long WebSocketReceiveLen8   = sizeof(WebSocketReceive8) - 1;	 

 

char WebSocketReceive9[] = "{\"method\":\"notice\",\"params\":{\"system\":\"storage\",\"meta\":{\"email\":\""
                        "{LOGIN}@{emailhost}\"},\"events\":[{\"name\":\"change\",\"data\":{\"revision_pre"
                        "v\":58,\"revision_last\":59,\"checksum_prev\":4051539866,\"checksum_last\":40179"
                        "61816}}]}}";
long WebSocketReceiveLen9   = sizeof(WebSocketReceive9) - 1;	 

 

char WebSocketReceive10[] = "{\"method\":\"notice\",\"params\":{\"system\":\"storage\",\"meta\":{\"email\":\""
                        "{LOGIN}@{emailhost}\"},\"events\":[{\"name\":\"change\",\"data\":{\"revision_pre"
                        "v\":59,\"revision_last\":60,\"checksum_prev\":4017961816,\"checksum_last\":56481"
                        "2456}}]}}";
long WebSocketReceiveLen10   = sizeof(WebSocketReceive10) - 1;	 

 

char WebSocketReceive11[] = "{\"id\":9,\"result\":{\"status\":200}}";
long WebSocketReceiveLen11   = sizeof(WebSocketReceive11) - 1;	 

 

char WebSocketReceive12[] = "{\"id\":10,\"result\":{\"status\":200}}";
long WebSocketReceiveLen12   = sizeof(WebSocketReceive12) - 1;	 

 

char WebSocketReceive13[] = "{\"id\":11,\"result\":{\"status\":200}}";
long WebSocketReceiveLen13   = sizeof(WebSocketReceive13) - 1;	 


# 10 "globals.h" 2

# 1 "random.c" 1
int randomNumber(int size){
	return (1 + rand() % size);
}
# 11 "globals.h" 2

# 1 "cookies.c" 1
cookies(){

	web_add_cookie("searchuid=8335520381534777444; DOMAIN={emailhost}");

	web_add_cookie("b=VkkIAKBoCw0AoSibClFWvQupxlgKKZ7FCLkRZAzhSaIIwRZkDMNZpAoHAAAAIUw/TnOE8//niVBq9YwA; DOMAIN={emailhost}");

	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN={emailhost}");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAACAABoJ0AcA; DOMAIN={emailhost}");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN={emailhost}");

	web_add_cookie("s=a=0|octavius=1|fver=0|ww=1536|wh=745|dpr=1.25|rt=1; DOMAIN={emailhost}");

	web_add_cookie("FTID=0; DOMAIN={emailhost}");

	web_add_cookie("tmr_reqNum=875; DOMAIN={emailhost}");

	web_add_cookie("i=AQAkrLBgAwATAAgHAjwJAXseAl0GBQIBAL0HCAQBghUB; DOMAIN={emailhost}");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN={emailhost}");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN={emailhost}");

	web_add_cookie("VID=1su56z1-5FI200000U0yD4o2:::5c7ad75-0-0-5c34c21:CAASECRw_n-P7w4DK-AoMEGlyHYaYKYlG3mwE5CQyZwleppRZ_Bfgc4k3fNMQB4DOrBUAbBS-Ykllq8VsBAzp1Q_U1PoOlWA8VGRfoxesoAOVc-2IYsd2VAa5B9n1RoQXLBpDZKnGh3wpjQ4JUcu1FMdEOFIuQ; DOMAIN={emailhost}");

	web_add_cookie("c=FtCwYAEAAHsTAAAUAAAACQAQ; DOMAIN={emailhost}");
	
	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN=portal.{emailhost}");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAACAABoJ0AcA; DOMAIN=portal.{emailhost}");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN=portal.{emailhost}");

	web_add_cookie("s=a=0|octavius=1|fver=0|ww=1536|wh=745|dpr=1.25|rt=1; DOMAIN=portal.{emailhost}");

	web_add_cookie("FTID=0; DOMAIN=portal.{emailhost}");

	web_add_cookie("tmr_reqNum=879; DOMAIN=portal.{emailhost}");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN=portal.{emailhost}");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN=portal.{emailhost}");

	web_add_cookie("VID=1su56z1-5FI200000U0yD4o2:::5c7ad75-0-0-5c34c21:CAASEF1E2LIQUAGCx2HZ4TlyJz0aYCrMfqy6YRjRsurW68CvPrwUmTLwy66D6auVA36hGNl9NR0ZUdEqY3zLZ3TRpfaWH-Bij-MAwIt9q6d7oRS_i_Gb7HDK1WUuA9pWiQgRI9kkhbCx_vge3MMs3uwjwZgx1Q; DOMAIN=portal.{emailhost}");
	
	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN=ad.{emailhost}");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN=ad.{emailhost}");

	web_add_cookie("FTID=0; DOMAIN=ad.{emailhost}");

	web_add_cookie("tmr_reqNum=885; DOMAIN=ad.{emailhost}");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN=ad.{emailhost}");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN=ad.{emailhost}");
	
	web_add_cookie("tmr_reqNum=897; DOMAIN=ad.{emailhost}");

	web_add_cookie("tmr_reqNum=897; DOMAIN=e.{emailhost}");
	
	web_add_cookie("b=VkkKAKBoCw0AoSibClFWvQupxlgKKZ7FCLkRZAzhSaIIwRZkDMNZpAodNU4LY8zrCwcAAAAhTD9Oc4Tz/+eJUGr1jAAA; DOMAIN=e.{emailhost}");

	web_add_cookie("tmr_reqNum=903; DOMAIN=e.{emailhost}");
	
	web_add_cookie("tmr_detect=0%7C1622200902671; DOMAIN=e.{emailhost}");

	web_add_cookie("tmr_reqNum=908; DOMAIN=e.{emailhost}");

	web_add_cookie("tmr_reqNum=908; DOMAIN=ad.{emailhost}");

	web_add_cookie("tmr_reqNum=908; DOMAIN=portal.{emailhost}");

	web_add_cookie("tmr_reqNum=914; DOMAIN=e.{emailhost}");
	
	web_add_cookie("tmr_reqNum=920; DOMAIN=ad.{emailhost}");
	
	web_add_cookie("tmr_reqNum=920; DOMAIN=e.{emailhost}");
	
	web_add_cookie("tmr_reqNum=885; DOMAIN=portal.{emailhost}");

	web_add_cookie("tmr_lvidTS=1621685089525; DOMAIN=e.{emailhost}");

	web_add_cookie("tmr_lvid=50f534a3d3a1d864ff5faf28d88f458e; DOMAIN=e.{emailhost}");

	web_add_cookie("FTID=0; DOMAIN=e.{emailhost}");

	web_add_cookie("tmr_reqNum=885; DOMAIN=e.{emailhost}");

	web_add_cookie("p=w5QAAKybEAAA; DOMAIN=e.{emailhost}");

	web_add_cookie("mrcu=C99F60A8F35F09ACD819FB54D25B; DOMAIN=e.{emailhost}");

	web_add_cookie("sdcs=VIU9r65oLnzEdjqR; DOMAIN=e.{emailhost}");
	
	web_add_cookie("sdcs=ncIdMHKbWrDFqSia; DOMAIN=e.{emailhost}");
	
	web_add_cookie("tmr_reqNum=914; DOMAIN=ad.{emailhost}");
	
	web_add_cookie("tmr_reqNum=925; DOMAIN=e.{emailhost}");

	web_add_cookie("b=VkkKAKBoCw0AoSibClFWvQupxlgKKZ7FCLkRZAzhSaIIwRZkDMNZpAodNU4L8Q6WCQcAAAAhTD9Oc4Tz/+eJUGr1jAAA; DOMAIN={emailhost}");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAYH0gcA; DOMAIN={emailhost}");

	web_add_cookie("s=a=0|octavius=1|fver=0|ww=1536|wh=745|rt=1|dpr=1.25; DOMAIN={emailhost}");

	web_add_cookie("tmr_reqNum=925; DOMAIN={emailhost}");

	web_add_cookie("i=AQAkrLBgAwATAAgHAjwJAXseAV0GBQIBAL0HCAQBghUB; DOMAIN={emailhost}");

	web_add_cookie("VID=1su56z1-5FI200000U0yD4o2:::5cb2adf-0-0-5c34c21:CAASENuMjQyIVX3MXr9LDH0jmL8aYENRqhcC8zDvEz-FzGP_Z4YPaCTgYpIGhO61cV-GI6jecJqbk-tcQvxZ6kTc63b7nVCpeAz5QhT3SDqp5PwlJga9EkYW6Re4gYDrVlArERntnbJuJ6UseIC_GIodJHmIqg; DOMAIN={emailhost}");

	web_add_cookie("c=RdKwYAIAEHsTAAAUAAAAM811AgAI; DOMAIN={emailhost}");

	web_add_cookie("act={act_token}; DOMAIN={emailhost}");

	web_add_cookie("tmr_detect=1%7C1622200812290; DOMAIN={emailhost}");
	
	web_add_cookie("tmr_reqNum=920; DOMAIN=portal.{emailhost}");
	
	web_add_cookie("tmr_reqNum=925; DOMAIN=portal.{emailhost}");
}
# 12 "globals.h" 2

# 1 "headers.c" 1
headers(){
	
	web_add_auto_header("Origin", 
		"https://{emailhost}");
	
	web_add_auto_header("Origin",
		"{Action}");


}
# 13 "globals.h" 2


 
 


# 3 "c:\\users\\dkame\\desktop\\new folder\\check_emails\\\\combined_check_emails.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{	
	cookies();
	headers();
	lr_start_transaction("UC01_start");

 

	web_reg_save_param_regexp(
		"ParamName=act_token",
		"RegExp=act=(.*?);",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"Scope=COOKIES",
		"RequestUrl=*/{emailhost}/*",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=Action",
		"RegExp==\\ '(.*?)/settings",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/{emailhost}/*",
		"LAST");

	web_url("{emailhost}", 
		"URL=https://{emailhost}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_convert_param("Action_URL2",
		"SourceString={Action}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");


	lr_end_transaction("UC01_start",2);

	lr_start_transaction("UC_login");

	web_submit_data("auth",
		"Action={email_auth}/cgi-bin/auth?from=splash",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://{emailhost}/",
		"Snapshot=t4.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=Domain", "Value={emailhost}", "ENDITEM",
		"Name=Login", "Value={LOGIN}", "ENDITEM",
		"Name=Password", "Value={PASSWORD}", "ENDITEM",
		"Name=new_auth_form", "Value=1", "ENDITEM",
		"Name=FromAccount", "Value=1", "ENDITEM",
		"Name=act_token", "Value={act_token}", "ENDITEM",
		"LAST");
	
	lr_end_transaction("UC_login", 2);

	return 0;
}
# 4 "c:\\users\\dkame\\desktop\\new folder\\check_emails\\\\combined_check_emails.c" 2

# 1 "Action.c" 1
Action()
{	


	int i;
	int totalMsg;
	int randMsg;
	char stringId[20];
	char stringIdMsg[20];
	
	 
	lr_start_transaction("UC_main");	
	web_reg_save_param_regexp(
		"ParamName=token",
		"RegExp=\"token\":\"(.*?)\",",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"RequestUrl=*/inbox/*",
		"LAST");

	web_url("sdc",
		"URL={email_auth}/sdc?from={Action_URL2}%2Fmessages%2Finbox%2F%3Fback%3D1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={Action}/messages/inbox/?back=1",
		"Snapshot=t5.inf",
		"Mode=HTML",
		"LAST");

	web_convert_param("token_URL2",
		"SourceString={token}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");

	web_url("aliases",
		"URL={Action}/api/v1/aliases?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200890463",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/messages/inbox/?back=1",
		"Snapshot=t10.inf",
		"Mode=HTML",
		"LAST");

 


 

	web_reg_save_param_regexp(
		"ParamName=messages_unread",
		"RegExp=\"Входящие\",\"messages_unread\":(.*?),",
		"Ordinal=all",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"RequestUrl=*/smart*",
		"IgnoreRedirections=Yes",
		"LAST");

	web_reg_save_param_regexp(
		"ParamName=id",
		"RegExp=\"id\":\"(1:.*?:0)\",",
		"Ordinal=all",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"RequestUrl=*/smart*",
		"IgnoreRedirections=Yes",
		"LAST");	
		
	web_reg_save_param_regexp(
		"ParamName=id_1",
		"RegExp=\"last\":\"(.*?)\",\"expand\"",
		"Ordinal=all",
		"NotFound=warning",
		"SEARCH_FILTERS",
		"Scope=BODY",
		"RequestUrl=*/smart*",
		"IgnoreRedirections=Yes",
		"LAST");	
		
	web_url("smart",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&pinned_limit=0&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200890478",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/messages/inbox/?back=1",
		"Snapshot=t11.inf",
		"Mode=HTML",
		"LAST");
			
	totalMsg = atoi(lr_eval_string("{messages_unread_1}"));

	lr_output_message("Unread - %d", totalMsg);
	
	if(totalMsg == 0){

		lr_message("No messages left, stop right now, criminal!");

		lr_abort( );
		
		return 0;
	}
	
	randMsg = randomNumber(totalMsg);
	
	sprintf(stringId, "{id_%d}", randMsg);
	
	sprintf(stringIdMsg, "{id_1_%d}", randMsg);
	
	lr_save_string(lr_eval_string(stringId), "id");
	
	lr_save_string(lr_eval_string(stringIdMsg), "id_1");
	
	
	web_convert_param("id_URL2",
		"SourceString={id}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");

	web_submit_data("update",
		"Action={Action}/api/v1/helpers/update",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t18.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=index", "Value=305", "ENDITEM",
		"Name=update", "Value={\"count\":{\"show\":true}}", "ENDITEM",
		"Name=email", "Value={LOGIN}@{emailhost}", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value={token}", "ENDITEM",
		"LAST");

	web_url("requests",
		"URL={Action}/api/v1/messages/search/requests?query=&limit=5&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200899051",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"LAST");

	web_url("security",
		"URL={Action}/api/v1/golang/user/security?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200901790",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"LAST");

	web_url("short",
		"URL={Action}/api/v1/user/short?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200901794",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"LAST");

	web_url("unread",
		"URL={Action}/api/v1/golang/messages/services/cleanmaster/unread?email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200901980",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"LAST");

	lr_start_transaction("UC02_open");

	web_url("smart_3",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200890&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200929275",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t42.inf",
		"Mode=HTML",
		"LAST");

	web_url("srv-st.json",
		"URL={Action}/srv-st.json?_=0.7241460109802967",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"LAST");

	web_url("hash",
		"URL={Action}/api/v1/utils/sota/hash?token={token_URL2}&email={LOGIN}%40{emailhost}&_=0.06565216205244595",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/?back=1",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"LAST");

	web_url("smart_4",
		"URL={Action}/api/v1/messages/replies/smart?id={id_1}&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200931349",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("marks",
		"Action={Action}/api/v1/messages/marks",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t49.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=marks", "Value=[{\"name\":\"unread\",\"unset\":[\"{id_1}\"],\"folder\":0}]", "ENDITEM",
		"Name=email", "Value={LOGIN}@{emailhost}", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value={token}", "ENDITEM",
		"LAST");

	web_url("smart_5",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200890&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200931999",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t50.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("UC02_open",2);

	lr_start_transaction("UC03_read");

	web_url("smart_6",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200932&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200964336",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t55.inf",
		"Mode=HTML",
		"LAST");

	web_url("srv-st.json_2",
		"URL={Action}/srv-st.json?_=0.8656844397856618",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t58.inf",
		"Mode=HTML",
		"LAST");

	web_url("hash_2",
		"URL={Action}/api/v1/utils/sota/hash?token={token_URL2}&email={LOGIN}%40{emailhost}&_=0.7314409393509602",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/{id}/?back=1",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"LAST");

	web_submit_data("move",
		"Action={Action}/api/v1/threads/move",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t62.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=ids", "Value=[\"{id}\"]", "ENDITEM",
		"Name=msg_ids", "Value=[{\"id\":\"{id}\",\"folder\":\"0\"}]", "ENDITEM",
		"Name=folder", "Value=1", "ENDITEM",
		"Name=message_id_last", "Value={\"{id}\":\"{id_1}\"}", "ENDITEM",
		"Name=email", "Value={LOGIN}@{emailhost}", "ENDITEM",
		"Name=htmlencoded", "Value=false", "ENDITEM",
		"Name=token", "Value={token}", "ENDITEM",
		"LAST");
	
	web_url("smart_7",
		"URL={Action}/api/v1/messages/replies/smart?id=16219534431185229338&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200966325",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t63.inf",
		"Mode=HTML",
		"LAST");

	web_url("smart_8",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200932&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200966658",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t65.inf",
		"Mode=HTML",
		"LAST");

	web_url("smart_9",
		"URL={Action}/api/v1/threads/status/smart?folder=0&limit=50&filters=%7B%7D&last_modified=1622200966&force_custom_thread=true&supported_custom_metathreads=[%22tomyself%22]&offset=0&email={LOGIN}%40{emailhost}&htmlencoded=false&token={token}&_=1622200967355",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t68.inf",
		"Mode=HTML",
		"LAST");	

	lr_end_transaction("UC03_read",2);
	
lr_end_transaction("UC_main", 2);

	return 0;
}
# 5 "c:\\users\\dkame\\desktop\\new folder\\check_emails\\\\combined_check_emails.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	lr_start_transaction("UC04_logout");

	web_url("logout",
		"URL={email_auth}/cgi-bin/logout?next=1&lang=ru_RU&page=https%3A%2F%2F{emailhost}%2F%3Ffrom%3Dlogout",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer={Action}/inbox/1:121dc92c89b109ba:0/?back=1",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("UC04_logout",2);

	return 0;
}
# 6 "c:\\users\\dkame\\desktop\\new folder\\check_emails\\\\combined_check_emails.c" 2

