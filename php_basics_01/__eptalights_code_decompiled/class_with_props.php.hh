

// Class Properties and Constants 
class PHPMailer\PHPMailer\SMTP  { 
	const  (string ) VERSION = '6.9.1' ;
	const  (string ) LE = '\r\n' ;
	const  (long ) DEFAULT_PORT = 25 ;
	const  (long ) DEFAULT_SECURE_PORT = 465 ;
	const  (long ) MAX_LINE_LENGTH = 998 ;
	const  (long ) MAX_REPLY_LENGTH = 512 ;
	const  (long ) DEBUG_OFF = 0 ;
	const  (long ) DEBUG_CLIENT = 1 ;
	const  (long ) DEBUG_SERVER = 2 ;
	const  (long ) DEBUG_CONNECTION = 3 ;
	protected  (string ) last_reply = '' ;
}


PHPMailer\PHPMailer\SMTP :: client_send  ( [unnamed] $data, [unnamed] $command )
{

	<bb 0> :
	nop;
	nop;
	T3 = $this->do_debug;
	T4 = T3 < 4;
	T4 = T4;
	if ( T4 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	@5 = PHPMailer\PHPMailer\in_array  ( $command, '["User & Password","Username","Password"]', 'true' );
	T4 = $$bool  ( @5 );

	<bb 2> :
	if ( T4 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	this->edebug  ( 'CLIENT -> SERVER: [credentials hidden]', 1 );
	goto 'BB_5';

	<bb 4> :
	T7 = 'CLIENT -> SERVER: ' + $data;
	this->edebug  ( T7, 1 );

	<bb 5> :
	T9 = $$fetch_this  (  );
	T10 = $$init_array  ( T9, 'NEXT' );
	T10 = $$add_array_element  ( 'errorHandler', 'NEXT' );
	PHPMailer\PHPMailer\set_error_handler  ( T10 );
	nop;
	@12 = $this->smtp_conn;
	@13 = PHPMailer\PHPMailer\fwrite  ( @12, $data );
	$result = @13;
	PHPMailer\PHPMailer\restore_error_handler  (  );
	return $result;

	<bb 6> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: parseHelloFields  ( [unnamed] $type )
{

	<bb 0> :
	nop;
	$this->server_caps = '{}';
	nop;
	@7 = $this->helo_rply;
	@8 = PHPMailer\PHPMailer\explode  ( '\n', @7 );
	$lines = @8;
	@10 = $$foreach_reset  ( $lines );
	if ( @10 )
		goto <bb 1>;
	else
		goto <bb 21>;

	<bb 1> :
	T11 = $$foreach_fetch  ( @10, $s );
	if ( $s )
		goto <bb 2>;
	else
		goto <bb 21>;

	<bb 2> :
	$n = T11;
	@13 = PHPMailer\PHPMailer\substr  ( $s, 4 );
	@14 = PHPMailer\PHPMailer\trim  ( @13 );
	$s = @14;
	T16 = isset  ( $s );
	if ( T16 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	goto 'BB_1';

	<bb 4> :
	@17 = PHPMailer\PHPMailer\explode  ( ' ', $s );
	$fields = @17;
	T19 = isset  ( $fields );
	T20 = $$bool_not  ( T19 );
	if ( T20 )
		goto <bb 5>;
	else
		goto <bb 20>;

	<bb 5> :
	T21 = $$bool_not  ( $n );
	if ( T21 )
		goto <bb 6>;
	else
		goto <bb 7>;

	<bb 6> :
	$name = $type;
	T23 = $fields[0];
	$fields = T23;
	goto 'BB_19';

	<bb 7> :
	@25 = PHPMailer\PHPMailer\array_shift  ( $fields );
	$name = @25;
	$$switch  ( $name );

	<bb 8> :
	T27 = $name == 'SIZE';
	if ( T27 )
		goto <bb 11>;
	else
		goto <bb 9>;

	<bb 9> :
	T27 = $name == 'AUTH';
	if ( T27 )
		goto <bb 15>;
	else
		goto <bb 10>;

	<bb 10> :
	goto 'BB_18';

	<bb 11> :
	if ( $fields )
		goto <bb 12>;
	else
		goto <bb 13>;

	<bb 12> :
	T28 = $fields[0];
	T29 = T28;
	goto 'BB_14';

	<bb 13> :
	T29 = 0;

	<bb 14> :
	$fields = T29;
	goto 'BB_19';

	<bb 15> :
	@31 = PHPMailer\PHPMailer\is_array  ( $fields );
	T32 = $$bool_not  ( @31 );
	if ( T32 )
		goto <bb 16>;
	else
		goto <bb 17>;

	<bb 16> :
	$fields = '{}';

	<bb 17> :
	goto 'BB_19';

	<bb 18> :
	$fields = 'true';

	<bb 19> :
	@35 = $this->server_caps;
	@35[$name] = $fields;

	<bb 20> :
	goto 'BB_1';

	<bb 21> :
	$$foreach_free  ( @10 );
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: data  ( [unnamed] $msg_data )
{

	<bb 0> :
	nop;
	@10 = this->sendCommand  ( 'DATA', 'DATA', 354 );
	T11 = $$bool_not  ( @10 );
	if ( T11 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	return 'false';

	<bb 2> :
	@12 = PHPMailer\PHPMailer\str_replace  ( '["\\r\\n","\\r"]', '\n', $msg_data );
	@13 = PHPMailer\PHPMailer\explode  ( '\n', @12 );
	$lines = @13;
	nop;
	@15 = $lines[0];
	nop;
	@16 = $lines[0];
	@17 = PHPMailer\PHPMailer\strpos  ( @16, ':' );
	@18 = PHPMailer\PHPMailer\substr  ( @15, 0, @17 );
	$field = @18;
	$in_headers = 'false';
	T21 = isset  ( $field );
	T22 = $$bool_not  ( T21 );
	T22 = T22;
	if ( T22 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	@23 = PHPMailer\PHPMailer\strpos  ( $field, ' ' );
	T24 = $$type_check  ( @23 );
	T22 = $$bool  ( T24 );

	<bb 4> :
	if ( T22 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	$in_headers = 'true';

	<bb 6> :
	@26 = $$foreach_reset  ( $lines );
	if ( @26 )
		goto <bb 7>;
	else
		goto <bb 27>;

	<bb 7> :
	$$foreach_fetch  ( @26, $line );
	if ( $line )
		goto <bb 8>;
	else
		goto <bb 27>;

	<bb 8> :
	$lines_out = '{}';
	T28 = $in_headers;
	if ( T28 )
		goto <bb 9>;
	else
		goto <bb 10>;

	<bb 9> :
	T29 = $line == '';
	T28 = $$bool  ( T29 );

	<bb 10> :
	if ( T28 )
		goto <bb 11>;
	else
		goto <bb 12>;

	<bb 11> :
	$in_headers = 'false';

	<bb 12> :
	goto 'BB_18';

	<bb 13> :
	@31 = PHPMailer\PHPMailer\substr  ( $line, 0, 998 );
	@32 = PHPMailer\PHPMailer\strrpos  ( @31, ' ' );
	$pos = @32;
	T34 = $$bool_not  ( $pos );
	if ( T34 )
		goto <bb 14>;
	else
		goto <bb 15>;

	<bb 14> :
	$pos = 997;
	@37 = PHPMailer\PHPMailer\substr  ( $line, 0, $pos );
	$lines_out = @37;
	@38 = PHPMailer\PHPMailer\substr  ( $line, $pos );
	$line = @38;
	goto 'BB_16';

	<bb 15> :
	@41 = PHPMailer\PHPMailer\substr  ( $line, 0, $pos );
	$lines_out = @41;
	T42 = $pos + 1;
	@43 = PHPMailer\PHPMailer\substr  ( $line, T42 );
	$line = @43;

	<bb 16> :
	if ( $in_headers )
		goto <bb 17>;
	else
		goto <bb 18>;

	<bb 17> :
	T45 = '\t' + $line;
	$line = T45;

	<bb 18> :
	T47 = isset  ( $line, 998 );
	if ( T47 )
		goto <bb 13>;
	else
		goto <bb 19>;

	<bb 19> :
	$lines_out = $line;
	@49 = $$foreach_reset  ( $lines_out );
	if ( @49 )
		goto <bb 20>;
	else
		goto <bb 26>;

	<bb 20> :
	$$foreach_fetch  ( @49, $line_out );
	if ( $line_out )
		goto <bb 21>;
	else
		goto <bb 26>;

	<bb 21> :
	T50 = isset  ( $line_out );
	T51 = $$bool_not  ( T50 );
	T51 = T51;
	if ( T51 )
		goto <bb 22>;
	else
		goto <bb 23>;

	<bb 22> :
	T52 = $line_out[0];
	T53 = T52 == '.';
	T51 = $$bool  ( T53 );

	<bb 23> :
	if ( T51 )
		goto <bb 24>;
	else
		goto <bb 25>;

	<bb 24> :
	T54 = '.' + $line_out;
	$line_out = T54;

	<bb 25> :
	T56 = $$fetch_class_constant  ( 'LE' );
	T57 = $line_out + T56;
	this->client_send  ( T57, 'DATA' );
	goto 'BB_20';

	<bb 26> :
	$$foreach_free  ( @49 );
	goto 'BB_7';

	<bb 27> :
	$$foreach_free  ( @26 );
	T59 = $this->Timelimit;
	$savetimelimit = T59;
	$this->Timelimit = 2;
	@62 = this->sendCommand  ( 'DATA END', '.', 250 );
	$result = @62;
	this->recordLastTransactionID  (  );
	$this->Timelimit = $savetimelimit;
	return $result;

	<bb 28> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: setDebugLevel  ( [unnamed] $level )
{

	<bb 0> :
	nop;
	$this->do_debug = $level;
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: mail  ( [unnamed] $from )
{

	<bb 0> :
	nop;
	T2 = $this->do_verp;
	if ( T2 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	T3 = ' XVERP';
	goto 'BB_3';

	<bb 2> :
	T3 = '';

	<bb 3> :
	$useVerp = T3;
	T5 = 'MAIL FROM:<' + $from;
	T6 = T5 + '>';
	T7 = T6 + $useVerp;
	@8 = this->sendCommand  ( 'MAIL FROM', T7, 250 );
	return @8;

	<bb 4> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getDebugLevel  (  )
{

	<bb 0> :
	T0 = $this->do_debug;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getVerp  (  )
{

	<bb 0> :
	T0 = $this->do_verp;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: quit  ( [unnamed] $close_on_error )
{

	<bb 0> :
	nop;
	@3 = this->sendCommand  ( 'QUIT', 'QUIT', 221 );
	$noerror = @3;
	T5 = $this->error;
	$err = T5;
	T7 = $noerror;
	if ( T7 )
		goto <bb 2>;
	else
		goto <bb 1>;

	<bb 1> :
	T7 = $$bool  ( $close_on_error );

	<bb 2> :
	if ( T7 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	this->close  (  );
	$this->error = $err;

	<bb 4> :
	return $noerror;

	<bb 5> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: recipient  ( [unnamed] $address, [unnamed] $dsn )
{

	<bb 0> :
	nop;
	nop;
	T5 = isset  ( $dsn );
	if ( T5 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	T6 = 'RCPT TO:<' + $address;
	T7 = T6 + '>';
	$rcpt = T7;
	goto 'BB_11';

	<bb 2> :
	@9 = PHPMailer\PHPMailer\strtoupper  ( $dsn );
	$dsn = @9;
	$notify = '{}';
	@12 = PHPMailer\PHPMailer\strpos  ( $dsn, 'NEVER' );
	T13 = $$type_check  ( @12 );
	if ( T13 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	$notify = 'NEVER';
	goto 'BB_10';

	<bb 4> :
	@15 = $$foreach_reset  ( '["SUCCESS","FAILURE","DELAY"]' );
	if ( @15 )
		goto <bb 5>;
	else
		goto <bb 9>;

	<bb 5> :
	$$foreach_fetch  ( @15, $value );
	if ( $value )
		goto <bb 6>;
	else
		goto <bb 9>;

	<bb 6> :
	@16 = PHPMailer\PHPMailer\strpos  ( $dsn, $value );
	T17 = $$type_check  ( @16 );
	if ( T17 )
		goto <bb 7>;
	else
		goto <bb 8>;

	<bb 7> :
	$notify = $value;

	<bb 8> :
	goto 'BB_5';

	<bb 9> :
	$$foreach_free  ( @15 );

	<bb 10> :
	T19 = 'RCPT TO:<' + $address;
	T20 = T19 + '> NOTIFY=';
	@21 = PHPMailer\PHPMailer\implode  ( ',', $notify );
	T22 = T20 + @21;
	$rcpt = T22;

	<bb 11> :
	@24 = this->sendCommand  ( 'RCPT TO', $rcpt, '[250,251]' );
	return @24;

	<bb 12> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: connected  (  )
{

	<bb 0> :
	nop;
	@1 = $this->smtp_conn;
	@2 = PHPMailer\PHPMailer\is_resource  ( @1 );
	if ( @2 )
		goto <bb 1>;
	else
		goto <bb 4>;

	<bb 1> :
	nop;
	@3 = $this->smtp_conn;
	@4 = PHPMailer\PHPMailer\stream_get_meta_data  ( @3 );
	$sock_status = @4;
	T6 = $sock_status['eof'];
	if ( T6 )
		goto <bb 2>;
	else
		goto <bb 3>;

	<bb 2> :
	this->edebug  ( 'SMTP NOTICE: EOF caught while checking if connected', 1 );
	this->close  (  );
	return 'false';

	<bb 3> :
	return 'true';

	<bb 4> :
	return 'false';

	<bb 5> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getDebugOutput  (  )
{

	<bb 0> :
	T0 = $this->Debugoutput;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: startTLS  (  )
{

	<bb 0> :
	@2 = this->sendCommand  ( 'STARTTLS', 'STARTTLS', 220 );
	T3 = $$bool_not  ( @2 );
	if ( T3 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	return 'false';

	<bb 2> :
	T4 = 'PHPMailer\\PHPMailer\\STREAM_CRYPTO_METHOD_TLS_CLIENT';
	$crypto_method = T4;
	@6 = PHPMailer\PHPMailer\defined  ( 'STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT' );
	if ( @6 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	T7 = 'PHPMailer\\PHPMailer\\STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT';
	$crypto_method = $crypto_method | T7;
	T9 = 'PHPMailer\\PHPMailer\\STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT';
	$crypto_method = $crypto_method | T9;

	<bb 4> :
	T11 = $$fetch_this  (  );
	T12 = $$init_array  ( T11, 'NEXT' );
	T12 = $$add_array_element  ( 'errorHandler', 'NEXT' );
	PHPMailer\PHPMailer\set_error_handler  ( T12 );
	nop;
	@14 = $this->smtp_conn;
	@15 = PHPMailer\PHPMailer\stream_socket_enable_crypto  ( @14, 'true', $crypto_method );
	$crypto_ok = @15;
	PHPMailer\PHPMailer\restore_error_handler  (  );
	T18 = $$bool  ( $crypto_ok );
	return T18;

	<bb 5> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: setTimeout  ( [unnamed] $timeout )
{

	<bb 0> :
	nop;
	$this->Timeout = $timeout;
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: errorHandler  ( [unnamed] $errno, [unnamed] $errmsg, [unnamed] $errfile, [unnamed] $errline )
{

	<bb 0> :
	nop;
	nop;
	nop;
	nop;
	$notice = 'Connection failed.';
	T6 = $errno;
	this->setError  ( $notice, $errmsg, T6 );
	T9 = $notice;
	T9 = T9 + ' Error #';
	T9 = T9 + $errno;
	T9 = T9 + ': ';
	T9 = T9 + $errmsg;
	T9 = T9 + ' [';
	T9 = T9 + $errfile;
	T9 = T9 + ' line ';
	T9 = T9 + $errline;
	T8 = T9 + ']';
	this->edebug  ( T8, 3 );
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: turn  (  )
{

	<bb 0> :
	this->setError  ( 'The SMTP TURN command is not implemented' );
	T1 = $this->error;
	T2 = T1['error'];
	T3 = 'SMTP NOTICE: ' + T2;
	this->edebug  ( T3, 1 );
	return 'false';

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getServerExt  ( [unnamed] $name )
{

	<bb 0> :
	nop;
	T1 = $this->server_caps;
	T2 = $$bool_not  ( T1 );
	if ( T2 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	this->setError  ( 'No HELO/EHLO was sent' );
	return 'null';

	<bb 2> :
	nop;
	@4 = $this->server_caps;
	@5 = PHPMailer\PHPMailer\array_key_exists  ( $name, @4 );
	T6 = $$bool_not  ( @5 );
	if ( T6 )
		goto <bb 3>;
	else
		goto <bb 10>;

	<bb 3> :
	T7 = $name == 'HELO';
	if ( T7 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	T8 = $this->server_caps;
	T9 = T8['EHLO'];
	return T9;

	<bb 5> :
	T10 = $name == 'EHLO';
	T10 = T10;
	if ( T10 )
		goto <bb 7>;
	else
		goto <bb 6>;

	<bb 6> :
	nop;
	@11 = $this->server_caps;
	@12 = PHPMailer\PHPMailer\array_key_exists  ( 'EHLO', @11 );
	T10 = $$bool  ( @12 );

	<bb 7> :
	if ( T10 )
		goto <bb 8>;
	else
		goto <bb 9>;

	<bb 8> :
	return 'false';

	<bb 9> :
	this->setError  ( 'HELO handshake was used; No information about server extensions available' );
	return 'null';

	<bb 10> :
	T14 = $this->server_caps;
	T15 = T14[$name];
	return T15;

	<bb 11> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: setVerp  ( [unnamed] $enabled )
{

	<bb 0> :
	nop;
	$this->do_verp = $enabled;
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getServerExtList  (  )
{

	<bb 0> :
	T0 = $this->server_caps;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: xclient  ( [unnamed] $vars )
{

	<bb 0> :
	nop;
	$xclient_options = '';
	@5 = $$foreach_reset  ( $vars );
	if ( @5 )
		goto <bb 1>;
	else
		goto <bb 5>;

	<bb 1> :
	T6 = $$foreach_fetch  ( @5, $value );
	if ( $value )
		goto <bb 2>;
	else
		goto <bb 5>;

	<bb 2> :
	$key = T6;
	nop;
	@8 = 'xclient_allowed_attributes';
	@9 = PHPMailer\PHPMailer\in_array  ( $key, @8 );
	if ( @9 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	T11 = ' ';
	T11 = T11 + $key;
	T11 = T11 + '=';
	T10 = T11 + $value;
	$xclient_options = $xclient_options + T10;

	<bb 4> :
	goto 'BB_1';

	<bb 5> :
	$$foreach_free  ( @5 );
	T14 = $$bool_not  ( $xclient_options );
	if ( T14 )
		goto <bb 6>;
	else
		goto <bb 7>;

	<bb 6> :
	return 'true';

	<bb 7> :
	T15 = 'XCLIENT' + $xclient_options;
	@16 = this->sendCommand  ( 'XCLIENT', T15, 250 );
	return @16;

	<bb 8> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: authenticate  ( [unnamed] $username, [unnamed] $password, [unnamed] $authtype, [unnamed] $OAuth )
{

	<bb 0> :
	nop;
	nop;
	nop;
	nop;
	T8 = $this->server_caps;
	T9 = $$bool_not  ( T8 );
	if ( T9 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	this->setError  ( 'Authentication is not allowed before HELO/EHLO' );
	return 'false';

	<bb 2> :
	nop;
	@11 = $this->server_caps;
	@12 = PHPMailer\PHPMailer\array_key_exists  ( 'EHLO', @11 );
	if ( @12 )
		goto <bb 3>;
	else
		goto <bb 23>;

	<bb 3> :
	nop;
	@13 = $this->server_caps;
	@14 = PHPMailer\PHPMailer\array_key_exists  ( 'AUTH', @13 );
	T15 = $$bool_not  ( @14 );
	if ( T15 )
		goto <bb 4>;
	else
		goto <bb 5>;

	<bb 4> :
	this->setError  ( 'Authentication is not allowed at this stage' );
	return 'false';

	<bb 5> :
	T17 = $authtype;
	if ( T17 )
		goto <bb 6>;
	else
		goto <bb 7>;

	<bb 6> :
	T17 = 'UNSPECIFIED';

	<bb 7> :
	T18 = 'Auth method requested: ' + T17;
	this->edebug  ( T18, 4 );
	nop;
	@20 = $this->server_caps;
	@21 = @20['AUTH'];
	@22 = PHPMailer\PHPMailer\implode  ( ',', @21 );
	T23 = 'Auth methods available on the server: ' + @22;
	this->edebug  ( T23, 4 );
	T25 = $$type_check  ( $authtype );
	T25 = T25;
	if ( T25 )
		goto <bb 8>;
	else
		goto <bb 9>;

	<bb 8> :
	nop;
	@26 = $this->server_caps;
	@27 = @26['AUTH'];
	@28 = PHPMailer\PHPMailer\in_array  ( $authtype, @27, 'true' );
	T29 = $$bool_not  ( @28 );
	T25 = $$bool  ( T29 );

	<bb 9> :
	if ( T25 )
		goto <bb 10>;
	else
		goto <bb 11>;

	<bb 10> :
	T30 = 'Requested auth method not available: ' + $authtype;
	this->edebug  ( T30, 4 );
	$authtype = 'null';

	<bb 11> :
	T33 = isset  ( $authtype );
	if ( T33 )
		goto <bb 12>;
	else
		goto <bb 20>;

	<bb 12> :
	@34 = $$foreach_reset  ( '["CRAM-MD5","LOGIN","PLAIN","XOAUTH2"]' );
	if ( @34 )
		goto <bb 13>;
	else
		goto <bb 17>;

	<bb 13> :
	$$foreach_fetch  ( @34, $method );
	if ( $method )
		goto <bb 14>;
	else
		goto <bb 17>;

	<bb 14> :
	nop;
	@35 = $this->server_caps;
	@36 = @35['AUTH'];
	@37 = PHPMailer\PHPMailer\in_array  ( $method, @36, 'true' );
	if ( @37 )
		goto <bb 15>;
	else
		goto <bb 16>;

	<bb 15> :
	$authtype = $method;
	goto 'BB_17';

	<bb 16> :
	goto 'BB_13';

	<bb 17> :
	$$foreach_free  ( @34 );
	T39 = isset  ( $authtype );
	if ( T39 )
		goto <bb 18>;
	else
		goto <bb 19>;

	<bb 18> :
	this->setError  ( 'No supported authentication methods found' );
	return 'false';

	<bb 19> :
	T41 = 'Auth method selected: ' + $authtype;
	this->edebug  ( T41, 4 );

	<bb 20> :
	nop;
	@43 = $this->server_caps;
	@44 = @43['AUTH'];
	@45 = PHPMailer\PHPMailer\in_array  ( $authtype, @44, 'true' );
	T46 = $$bool_not  ( @45 );
	if ( T46 )
		goto <bb 21>;
	else
		goto <bb 22>;

	<bb 21> :
	T48 = 'The requested authentication method "';
	T48 = T48 + $authtype;
	T47 = T48 + '" is not supported by the server';
	this->setError  ( T47 );
	return 'false';

	<bb 22> :
	goto 'BB_25';

	<bb 23> :
	T51 = isset  ( $authtype );
	if ( T51 )
		goto <bb 24>;
	else
		goto <bb 25>;

	<bb 24> :
	$authtype = 'LOGIN';

	<bb 25> :
	$$switch  ( $authtype );

	<bb 26> :
	T53 = $authtype == 'PLAIN';
	if ( T53 )
		goto <bb 31>;
	else
		goto <bb 27>;

	<bb 27> :
	T53 = $authtype == 'LOGIN';
	if ( T53 )
		goto <bb 36>;
	else
		goto <bb 28>;

	<bb 28> :
	T53 = $authtype == 'CRAM-MD5';
	if ( T53 )
		goto <bb 43>;
	else
		goto <bb 29>;

	<bb 29> :
	T53 = $authtype == 'XOAUTH2';
	if ( T53 )
		goto <bb 46>;
	else
		goto <bb 30>;

	<bb 30> :
	goto 'BB_51';

	<bb 31> :
	@54 = this->sendCommand  ( 'AUTH', 'AUTH PLAIN', 334 );
	T55 = $$bool_not  ( @54 );
	if ( T55 )
		goto <bb 32>;
	else
		goto <bb 33>;

	<bb 32> :
	return 'false';

	<bb 33> :
	T56 = '' + $username;
	T57 = T56 + '';
	T58 = T57 + $password;
	@59 = PHPMailer\PHPMailer\base64_encode  ( T58 );
	@60 = this->sendCommand  ( 'User & Password', @59, 235 );
	T61 = $$bool_not  ( @60 );
	if ( T61 )
		goto <bb 34>;
	else
		goto <bb 35>;

	<bb 34> :
	return 'false';

	<bb 35> :
	goto 'BB_52';

	<bb 36> :
	@62 = this->sendCommand  ( 'AUTH', 'AUTH LOGIN', 334 );
	T63 = $$bool_not  ( @62 );
	if ( T63 )
		goto <bb 37>;
	else
		goto <bb 38>;

	<bb 37> :
	return 'false';

	<bb 38> :
	@64 = PHPMailer\PHPMailer\base64_encode  ( $username );
	@65 = this->sendCommand  ( 'Username', @64, 334 );
	T66 = $$bool_not  ( @65 );
	if ( T66 )
		goto <bb 39>;
	else
		goto <bb 40>;

	<bb 39> :
	return 'false';

	<bb 40> :
	@67 = PHPMailer\PHPMailer\base64_encode  ( $password );
	@68 = this->sendCommand  ( 'Password', @67, 235 );
	T69 = $$bool_not  ( @68 );
	if ( T69 )
		goto <bb 41>;
	else
		goto <bb 42>;

	<bb 41> :
	return 'false';

	<bb 42> :
	goto 'BB_52';

	<bb 43> :
	@70 = this->sendCommand  ( 'AUTH CRAM-MD5', 'AUTH CRAM-MD5', 334 );
	T71 = $$bool_not  ( @70 );
	if ( T71 )
		goto <bb 44>;
	else
		goto <bb 45>;

	<bb 44> :
	return 'false';

	<bb 45> :
	nop;
	@72 = $this->last_reply;
	@73 = PHPMailer\PHPMailer\substr  ( @72, 4 );
	@74 = PHPMailer\PHPMailer\base64_decode  ( @73 );
	$challenge = @74;
	T76 = $username + ' ';
	@77 = this->hmac  ( $challenge, $password );
	T78 = T76 + @77;
	$response = T78;
	@80 = PHPMailer\PHPMailer\base64_encode  ( $response );
	@81 = this->sendCommand  ( 'Username', @80, 235 );
	return @81;

	<bb 46> :
	T82 = $$type_check  ( $OAuth );
	if ( T82 )
		goto <bb 47>;
	else
		goto <bb 48>;

	<bb 47> :
	return 'false';

	<bb 48> :
	@83 = $OAuth->getOauth64  (  );
	$oauth = @83;
	T85 = 'AUTH XOAUTH2 ' + $oauth;
	@86 = this->sendCommand  ( 'AUTH', T85, 235 );
	T87 = $$bool_not  ( @86 );
	if ( T87 )
		goto <bb 49>;
	else
		goto <bb 50>;

	<bb 49> :
	return 'false';

	<bb 50> :
	goto 'BB_52';

	<bb 51> :
	T89 = 'Authentication method "';
	T89 = T89 + $authtype;
	T88 = T89 + '" is not supported';
	this->setError  ( T88 );
	return 'false';

	<bb 52> :
	return 'true';

	<bb 53> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: recordLastTransactionID  (  )
{

	<bb 0> :
	@3 = this->getLastReply  (  );
	$reply = @3;
	T5 = isset  ( $reply );
	if ( T5 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	$this->last_smtp_transaction_id = 'null';
	goto 'BB_8';

	<bb 2> :
	$this->last_smtp_transaction_id = 'false';
	T8 = $this->smtp_transaction_id_patterns;
	@9 = $$foreach_reset  ( T8 );
	if ( @9 )
		goto <bb 3>;
	else
		goto <bb 7>;

	<bb 3> :
	$$foreach_fetch  ( @9, $smtp_transaction_id_pattern );
	if ( $smtp_transaction_id_pattern )
		goto <bb 4>;
	else
		goto <bb 7>;

	<bb 4> :
	$matches = '{}';
	@11 = PHPMailer\PHPMailer\preg_match  ( $smtp_transaction_id_pattern, $reply, $matches );
	if ( @11 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	nop;
	@13 = $matches[1];
	@14 = PHPMailer\PHPMailer\trim  ( @13 );
	$this->last_smtp_transaction_id = @14;
	goto 'BB_7';

	<bb 6> :
	goto 'BB_3';

	<bb 7> :
	$$foreach_free  ( @9 );

	<bb 8> :
	T15 = $this->last_smtp_transaction_id;
	return T15;

	<bb 9> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: close  (  )
{

	<bb 0> :
	$this->server_caps = 'null';
	$this->helo_rply = 'null';
	nop;
	@2 = $this->smtp_conn;
	@3 = PHPMailer\PHPMailer\is_resource  ( @2 );
	if ( @3 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	nop;
	@4 = $this->smtp_conn;
	PHPMailer\PHPMailer\fclose  ( @4 );
	$this->smtp_conn = 'null';
	this->edebug  ( 'Connection: closed', 3 );

	<bb 2> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: setError  ( [unnamed] $message, [unnamed] $detail, [unnamed] $smtp_code, [unnamed] $smtp_code_ex )
{

	<bb 0> :
	nop;
	nop;
	nop;
	nop;
	T5 = $$init_array  ( $message, 'error' );
	T5 = $$add_array_element  ( $detail, 'detail' );
	T5 = $$add_array_element  ( $smtp_code, 'smtp_code' );
	T5 = $$add_array_element  ( $smtp_code_ex, 'smtp_code_ex' );
	$this->error = T5;
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: get_lines  (  )
{

	<bb 0> :
	nop;
	@8 = $this->smtp_conn;
	@9 = PHPMailer\PHPMailer\is_resource  ( @8 );
	T10 = $$bool_not  ( @9 );
	if ( T10 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	return '';

	<bb 2> :
	$data = '';
	$endtime = 0;
	nop;
	@13 = $this->smtp_conn;
	nop;
	@14 = $this->Timeout;
	PHPMailer\PHPMailer\stream_set_timeout  ( @13, @14 );
	T16 = $this->Timelimit;
	T17 = 0 < T16;
	if ( T17 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	@18 = PHPMailer\PHPMailer\time  (  );
	T19 = $this->Timelimit;
	T20 = @18 + T19;
	$endtime = T20;

	<bb 4> :
	T22 = $this->smtp_conn;
	T23 = $$init_array  ( T22, 'NEXT' );
	$selR = T23;
	$selW = 'null';
	goto 'BB_25';

	<bb 5> :
	T26 = $$fetch_this  (  );
	T27 = $$init_array  ( T26, 'NEXT' );
	T27 = $$add_array_element  ( 'errorHandler', 'NEXT' );
	PHPMailer\PHPMailer\set_error_handler  ( T27 );
	nop;
	@29 = $this->Timelimit;
	@30 = PHPMailer\PHPMailer\stream_select  ( $selR, $selW, $selW, @29 );
	$n = @30;
	PHPMailer\PHPMailer\restore_error_handler  (  );
	T33 = $$type_check  ( $n );
	if ( T33 )
		goto <bb 6>;
	else
		goto <bb 9>;

	<bb 6> :
	@34 = this->getError  (  );
	T35 = @34['detail'];
	$message = T35;
	T37 = 'SMTP -> get_lines(): select failed (' + $message;
	T38 = T37 + ')';
	this->edebug  ( T38, 4 );
	@40 = PHPMailer\PHPMailer\stripos  ( $message, 'interrupted system call' );
	T41 = $$type_check  ( @40 );
	if ( T41 )
		goto <bb 7>;
	else
		goto <bb 8>;

	<bb 7> :
	this->edebug  ( 'SMTP -> get_lines(): retrying stream_select', 4 );
	this->setError  ( '' );
	goto 'BB_25';

	<bb 8> :
	goto 'BB_28';

	<bb 9> :
	T44 = $$bool_not  ( $n );
	if ( T44 )
		goto <bb 10>;
	else
		goto <bb 11>;

	<bb 10> :
	T45 = $this->Timelimit;
	T46 = 'SMTP -> get_lines(): select timed-out in (' + T45;
	T47 = T46 + ' sec)';
	this->edebug  ( T47, 4 );
	goto 'BB_28';

	<bb 11> :
	T49 = begin_silence  (  );
	nop;
	@50 = $this->smtp_conn;
	@51 = PHPMailer\PHPMailer\fgets  ( @50, 512 );
	end_silence  ( T49 );
	$str = @51;
	@53 = PHPMailer\PHPMailer\trim  ( $str );
	T54 = 'SMTP INBOUND: "' + @53;
	T55 = T54 + '"';
	this->edebug  ( T55, 4 );
	$data = $data + $str;
	T58 = isset  ( $str, 3 );
	T59 = $$bool_not  ( T58 );
	T59 = T59;
	if ( T59 )
		goto <bb 13>;
	else
		goto <bb 12>;

	<bb 12> :
	T60 = $str[3];
	T61 = T60 == ' ';
	T59 = $$bool  ( T61 );

	<bb 13> :
	T59 = T59;
	if ( T59 )
		goto <bb 15>;
	else
		goto <bb 14>;

	<bb 14> :
	T62 = $str[3];
	T63 = T62 == '\r';
	T59 = $$bool  ( T63 );

	<bb 15> :
	T59 = T59;
	if ( T59 )
		goto <bb 17>;
	else
		goto <bb 16>;

	<bb 16> :
	T64 = $str[3];
	T65 = T64 == '\n';
	T59 = $$bool  ( T65 );

	<bb 17> :
	if ( T59 )
		goto <bb 18>;
	else
		goto <bb 19>;

	<bb 18> :
	goto 'BB_28';

	<bb 19> :
	nop;
	@66 = $this->smtp_conn;
	@67 = PHPMailer\PHPMailer\stream_get_meta_data  ( @66 );
	$info = @67;
	T69 = $info['timed_out'];
	if ( T69 )
		goto <bb 20>;
	else
		goto <bb 21>;

	<bb 20> :
	T70 = $this->Timeout;
	T71 = 'SMTP -> get_lines(): stream timed-out (' + T70;
	T72 = T71 + ' sec)';
	this->edebug  ( T72, 4 );
	goto 'BB_28';

	<bb 21> :
	T74 = $endtime;
	if ( T74 )
		goto <bb 22>;
	else
		goto <bb 23>;

	<bb 22> :
	@75 = PHPMailer\PHPMailer\time  (  );
	T76 = $endtime < @75;
	T74 = $$bool  ( T76 );

	<bb 23> :
	if ( T74 )
		goto <bb 24>;
	else
		goto <bb 25>;

	<bb 24> :
	T77 = $this->Timelimit;
	T78 = 'SMTP -> get_lines(): timelimit reached (' + T77;
	T79 = T78 + ' sec)';
	this->edebug  ( T79, 4 );
	goto 'BB_28';

	<bb 25> :
	nop;
	@81 = $this->smtp_conn;
	@82 = PHPMailer\PHPMailer\is_resource  ( @81 );
	T83 = @82;
	if ( T83 )
		goto <bb 26>;
	else
		goto <bb 27>;

	<bb 26> :
	nop;
	@84 = $this->smtp_conn;
	@85 = PHPMailer\PHPMailer\feof  ( @84 );
	T86 = $$bool_not  ( @85 );
	T83 = $$bool  ( T86 );

	<bb 27> :
	if ( T83 )
		goto <bb 5>;
	else
		goto <bb 28>;

	<bb 28> :
	return $data;

	<bb 29> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getLastReply  (  )
{

	<bb 0> :
	T0 = $this->last_reply;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: sendCommand  ( [unnamed] $command, [unnamed] $commandstring, [unnamed] $expect )
{

	<bb 0> :
	nop;
	nop;
	nop;
	@7 = this->connected  (  );
	T8 = $$bool_not  ( @7 );
	if ( T8 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	T10 = 'Called ';
	T10 = T10 + $command;
	T9 = T10 + ' without being connected';
	this->setError  ( T9 );
	return 'false';

	<bb 2> :
	@13 = PHPMailer\PHPMailer\strpos  ( $commandstring, '\n' );
	T14 = $$type_check  ( @13 );
	T14 = T14;
	if ( T14 )
		goto <bb 4>;
	else
		goto <bb 3>;

	<bb 3> :
	@15 = PHPMailer\PHPMailer\strpos  ( $commandstring, '\r' );
	T16 = $$type_check  ( @15 );
	T14 = $$bool  ( T16 );

	<bb 4> :
	if ( T14 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	T18 = "Command '";
	T18 = T18 + $command;
	T17 = T18 + "' contained line breaks";
	this->setError  ( T17 );
	return 'false';

	<bb 6> :
	T21 = $$fetch_class_constant  ( 'LE' );
	T22 = $commandstring + T21;
	this->client_send  ( T22, $command );
	@25 = this->get_lines  (  );
	$this->last_reply = @25;
	$matches = '{}';
	nop;
	@27 = $this->last_reply;
	@28 = PHPMailer\PHPMailer\preg_match  ( '/^([\\d]{3})[ -](?:([\\d]\\.[\\d]\\.[\\d]{1,2}) )?/', @27, $matches );
	if ( @28 )
		goto <bb 7>;
	else
		goto <bb 14>;

	<bb 7> :
	T29 = $matches[1];
	T30 = T29;
	$code = T30;
	@32 = PHPMailer\PHPMailer\count  ( $matches );
	T33 = 2 < @32;
	if ( T33 )
		goto <bb 8>;
	else
		goto <bb 9>;

	<bb 8> :
	T34 = $matches[2];
	T35 = T34;
	goto 'BB_10';

	<bb 9> :
	T35 = 'null';

	<bb 10> :
	$code_ex = T35;
	T38 = '/';
	T38 = T38 + $code;
	T37 = T38 + '[ -]';
	if ( $code_ex )
		goto <bb 11>;
	else
		goto <bb 12>;

	<bb 11> :
	@40 = PHPMailer\PHPMailer\str_replace  ( '.', '\\.', $code_ex );
	T41 = @40 + ' ';
	T42 = T41;
	goto 'BB_13';

	<bb 12> :
	T42 = '';

	<bb 13> :
	T43 = T37 + T42;
	T44 = T43 + '/m';
	nop;
	@45 = $this->last_reply;
	@46 = PHPMailer\PHPMailer\preg_replace  ( T44, '', @45 );
	$detail = @46;
	goto 'BB_15';

	<bb 14> :
	nop;
	@48 = $this->last_reply;
	@49 = PHPMailer\PHPMailer\substr  ( @48, 0, 3 );
	T50 = @49;
	$code = T50;
	$code_ex = 'null';
	nop;
	@53 = $this->last_reply;
	@54 = PHPMailer\PHPMailer\substr  ( @53, 4 );
	$detail = @54;

	<bb 15> :
	T56 = $this->last_reply;
	T57 = 'SERVER -> CLIENT: ' + T56;
	this->edebug  ( T57, 2 );
	T59 = $expect;
	@60 = PHPMailer\PHPMailer\in_array  ( $code, T59, 'true' );
	T61 = $$bool_not  ( @60 );
	if ( T61 )
		goto <bb 16>;
	else
		goto <bb 17>;

	<bb 16> :
	nop;
	T62 = $command + ' command failed';
	this->setError  ( T62, $detail, $code, $code_ex );
	T64 = $this->error;
	T65 = T64['error'];
	T66 = 'SMTP ERROR: ' + T65;
	T67 = T66 + ': ';
	T68 = $this->last_reply;
	T69 = T67 + T68;
	this->edebug  ( T69, 1 );
	return 'false';

	<bb 17> :
	T71 = $command != 'RSET';
	if ( T71 )
		goto <bb 18>;
	else
		goto <bb 19>;

	<bb 18> :
	this->setError  ( '' );

	<bb 19> :
	return 'true';

	<bb 20> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: sendHello  ( [unnamed] $hello, [unnamed] $host )
{

	<bb 0> :
	nop;
	nop;
	T3 = $hello + ' ';
	T4 = T3 + $host;
	@5 = this->sendCommand  ( $hello, T4, 250 );
	$noerror = @5;
	T8 = $this->last_reply;
	$this->helo_rply = T8;
	if ( $noerror )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	this->parseHelloFields  ( $hello );
	goto 'BB_3';

	<bb 2> :
	$this->server_caps = 'null';

	<bb 3> :
	return $noerror;

	<bb 4> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: hello  ( [unnamed] $host )
{

	<bb 0> :
	nop;
	@1 = this->sendHello  ( 'EHLO', $host );
	if ( @1 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	return 'true';

	<bb 2> :
	nop;
	@2 = $this->helo_rply;
	@3 = PHPMailer\PHPMailer\substr  ( @2, 0, 3 );
	T4 = @3 == 421;
	if ( T4 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	return 'false';

	<bb 4> :
	@5 = this->sendHello  ( 'HELO', $host );
	return @5;

	<bb 5> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getLastTransactionID  (  )
{

	<bb 0> :
	T0 = $this->last_smtp_transaction_id;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getError  (  )
{

	<bb 0> :
	T0 = $this->error;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: setDebugOutput  ( [unnamed] $method )
{

	<bb 0> :
	nop;
	$this->Debugoutput = $method;
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: connect  ( [unnamed] $host, [unnamed] $port, [unnamed] $timeout, [unnamed] $options )
{

	<bb 0> :
	nop;
	nop;
	nop;
	nop;
	this->setError  ( '' );
	@6 = this->connected  (  );
	if ( @6 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	this->setError  ( 'Already connected to a server' );
	return 'false';

	<bb 2> :
	T8 = isset  ( $port );
	if ( T8 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	$port = 25;

	<bb 4> :
	T11 = 'Connection: opening to ';
	T11 = T11 + $host;
	T11 = T11 + ':';
	T11 = T11 + $port;
	T11 = T11 + ', timeout=';
	T11 = T11 + $timeout;
	T10 = T11 + ', options=';
	@15 = PHPMailer\PHPMailer\count  ( $options );
	T16 = 0 < @15;
	if ( T16 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	@17 = PHPMailer\PHPMailer\var_export  ( $options, 'true' );
	T18 = @17;
	goto 'BB_7';

	<bb 6> :
	T18 = 'array()';

	<bb 7> :
	T19 = T10 + T18;
	this->edebug  ( T19, 3 );
	@22 = this->getSMTPConnection  ( $host, $port, $timeout, $options );
	$this->smtp_conn = @22;
	T23 = $this->smtp_conn;
	T24 = $$type_check  ( T23 );
	if ( T24 )
		goto <bb 8>;
	else
		goto <bb 9>;

	<bb 8> :
	return 'false';

	<bb 9> :
	this->edebug  ( 'Connection: opened', 3 );
	@27 = this->get_lines  (  );
	$this->last_reply = @27;
	T28 = $this->last_reply;
	T29 = 'SERVER -> CLIENT: ' + T28;
	this->edebug  ( T29, 2 );
	nop;
	@31 = $this->last_reply;
	@32 = PHPMailer\PHPMailer\substr  ( @31, 0, 3 );
	T33 = @32;
	$responseCode = T33;
	T35 = $responseCode == 220;
	if ( T35 )
		goto <bb 10>;
	else
		goto <bb 11>;

	<bb 10> :
	return 'true';

	<bb 11> :
	T36 = $responseCode == 554;
	if ( T36 )
		goto <bb 12>;
	else
		goto <bb 13>;

	<bb 12> :
	this->quit  (  );

	<bb 13> :
	this->edebug  ( 'Connection: closing due to error', 3 );
	this->close  (  );
	return 'false';

	<bb 14> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: reset  (  )
{

	<bb 0> :
	@0 = this->sendCommand  ( 'RSET', 'RSET', 250 );
	return @0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: hmac  ( [unnamed] $data, [unnamed] $key )
{

	<bb 0> :
	nop;
	nop;
	@7 = PHPMailer\PHPMailer\function_exists  ( 'hash_hmac' );
	if ( @7 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	@8 = PHPMailer\PHPMailer\hash_hmac  ( 'md5', $data, $key );
	return @8;

	<bb 2> :
	$bytelen = 64;
	@10 = PHPMailer\PHPMailer\strlen  ( $key );
	T11 = $bytelen < @10;
	if ( T11 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	@12 = PHPMailer\PHPMailer\md5  ( $key );
	@13 = PHPMailer\PHPMailer\pack  ( 'H*', @12 );
	$key = @13;

	<bb 4> :
	@15 = PHPMailer\PHPMailer\chr  ( 0 );
	@16 = PHPMailer\PHPMailer\str_pad  ( $key, $bytelen, @15 );
	$key = @16;
	@18 = PHPMailer\PHPMailer\chr  ( 54 );
	@19 = PHPMailer\PHPMailer\str_pad  ( '', $bytelen, @18 );
	$ipad = @19;
	@21 = PHPMailer\PHPMailer\chr  ( 92 );
	@22 = PHPMailer\PHPMailer\str_pad  ( '', $bytelen, @21 );
	$opad = @22;
	T24 = $key & $ipad;
	$k_ipad = T24;
	T26 = $key & $opad;
	$k_opad = T26;
	T28 = $k_ipad + $data;
	@29 = PHPMailer\PHPMailer\md5  ( T28 );
	@30 = PHPMailer\PHPMailer\pack  ( 'H*', @29 );
	T31 = $k_opad + @30;
	@32 = PHPMailer\PHPMailer\md5  ( T31 );
	return @32;

	<bb 5> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getTimeout  (  )
{

	<bb 0> :
	T0 = $this->Timeout;
	return T0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: verify  ( [unnamed] $name )
{

	<bb 0> :
	nop;
	nop;
	T1 = 'VRFY ' + $name;
	@2 = this->sendCommand  ( 'VRFY', T1, '[250,251]' );
	return @2;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: sendAndMail  ( [unnamed] $from )
{

	<bb 0> :
	nop;
	nop;
	T1 = 'SAML FROM:' + $from;
	@2 = this->sendCommand  ( 'SAML', T1, 250 );
	return @2;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: edebug  ( [unnamed] $str, [unnamed] $level )
{

	<bb 0> :
	nop;
	nop;
	T2 = $this->do_debug;
	T3 = T2 < $level;
	if ( T3 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	return 'null';

	<bb 2> :
	T4 = $this->Debugoutput;
	T5 = instance_of  ( T4, 'Psr\\Log\\LoggerInterface' );
	if ( T5 )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	T6 = $this->Debugoutput;
	@7 = PHPMailer\PHPMailer\rtrim  ( $str, '\r\n' );
	T6->debug  ( @7 );
	return 'null';

	<bb 4> :
	nop;
	@9 = $this->Debugoutput;
	@10 = PHPMailer\PHPMailer\is_callable  ( @9 );
	T11 = @10;
	if ( T11 )
		goto <bb 5>;
	else
		goto <bb 6>;

	<bb 5> :
	nop;
	@12 = $this->Debugoutput;
	@13 = PHPMailer\PHPMailer\in_array  ( @12, '["error_log","html","echo"]' );
	T14 = $$bool_not  ( @13 );
	T11 = $$bool  ( T14 );

	<bb 6> :
	if ( T11 )
		goto <bb 7>;
	else
		goto <bb 8>;

	<bb 7> :
	nop;
	@15 = $this->Debugoutput;
	PHPMailer\PHPMailer\call_user_func  ( @15, $str, $level );
	return 'null';

	<bb 8> :
	T17 = $this->Debugoutput;
	$$switch  ( T17 );

	<bb 9> :
	T18 = T17 == 'error_log';
	if ( T18 )
		goto <bb 13>;
	else
		goto <bb 10>;

	<bb 10> :
	T18 = T17 == 'html';
	if ( T18 )
		goto <bb 14>;
	else
		goto <bb 11>;

	<bb 11> :
	T18 = T17 == 'echo';
	if ( T18 )
		goto <bb 15>;
	else
		goto <bb 12>;

	<bb 12> :
	goto 'BB_15';

	<bb 13> :
	PHPMailer\PHPMailer\error_log  ( $str );
	goto 'BB_16';

	<bb 14> :
	@20 = PHPMailer\PHPMailer\gmdate  ( 'Y-m-d H:i:s' );
	echo  ( @20 );
	echo  ( ' ' );
	@21 = PHPMailer\PHPMailer\preg_replace  ( '/[\\r\\n]+/', '', $str );
	T22 = 'PHPMailer\\PHPMailer\\ENT_QUOTES';
	@23 = PHPMailer\PHPMailer\htmlentities  ( @21, T22, 'UTF-8' );
	echo  ( @23 );
	echo  ( '<br>\n' );
	goto 'BB_16';

	<bb 15> :
	@24 = PHPMailer\PHPMailer\preg_replace  ( '/\\r\\n|\\r/m', '\n', $str );
	$str = @24;
	@26 = PHPMailer\PHPMailer\gmdate  ( 'Y-m-d H:i:s' );
	echo  ( @26 );
	echo  ( '\t' );
	@27 = PHPMailer\PHPMailer\trim  ( $str );
	@28 = PHPMailer\PHPMailer\str_replace  ( '\n', '\n                   \t                  ', @27 );
	@29 = PHPMailer\PHPMailer\trim  ( @28 );
	echo  ( @29 );
	echo  ( '\n' );

	<bb 16> :
	$$free  ( T17 );
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: noop  (  )
{

	<bb 0> :
	@0 = this->sendCommand  ( 'NOOP', 'NOOP', 250 );
	return @0;

	<bb 1> :
	return 'null';

}

PHPMailer\PHPMailer\SMTP :: getSMTPConnection  ( [unnamed] $host, [unnamed] $port, [unnamed] $timeout, [unnamed] $options )
{

	<bb 0> :
	nop;
	nop;
	nop;
	nop;
	$streamok = $$bind_static  (  );
	T10 = $$type_check  ( $streamok );
	if ( T10 )
		goto <bb 1>;
	else
		goto <bb 2>;

	<bb 1> :
	@11 = PHPMailer\PHPMailer\function_exists  ( 'stream_socket_client' );
	$streamok = @11;

	<bb 2> :
	$errno = 0;
	$errstr = '';
	if ( $streamok )
		goto <bb 3>;
	else
		goto <bb 4>;

	<bb 3> :
	@15 = PHPMailer\PHPMailer\stream_context_create  ( $options );
	$socket_context = @15;
	T17 = $$fetch_this  (  );
	T18 = $$init_array  ( T17, 'NEXT' );
	T18 = $$add_array_element  ( 'errorHandler', 'NEXT' );
	PHPMailer\PHPMailer\set_error_handler  ( T18 );
	T20 = $host + ':';
	T21 = T20 + $port;
	T22 = 'PHPMailer\\PHPMailer\\STREAM_CLIENT_CONNECT';
	@23 = PHPMailer\PHPMailer\stream_socket_client  ( T21, $errno, $errstr, $timeout, T22, $socket_context );
	$connection = @23;
	goto 'BB_5';

	<bb 4> :
	this->edebug  ( 'Connection: stream_socket_client not available, falling back to fsockopen', 3 );
	T26 = $$fetch_this  (  );
	T27 = $$init_array  ( T26, 'NEXT' );
	T27 = $$add_array_element  ( 'errorHandler', 'NEXT' );
	PHPMailer\PHPMailer\set_error_handler  ( T27 );
	@29 = PHPMailer\PHPMailer\fsockopen  ( $host, $port, $errno, $errstr, $timeout );
	$connection = @29;

	<bb 5> :
	PHPMailer\PHPMailer\restore_error_handler  (  );
	@32 = PHPMailer\PHPMailer\is_resource  ( $connection );
	T33 = $$bool_not  ( @32 );
	if ( T33 )
		goto <bb 6>;
	else
		goto <bb 7>;

	<bb 6> :
	T34 = $errno;
	this->setError  ( 'Failed to connect to server', '', T34, $errstr );
	T36 = $this->error;
	T37 = T36['error'];
	T38 = 'SMTP ERROR: ' + T37;
	T40 = ': ';
	T40 = T40 + $errstr;
	T40 = T40 + ' (';
	T40 = T40 + $errno;
	T39 = T40 + ')';
	T43 = T38 + T39;
	this->edebug  ( T43, 1 );
	return 'false';

	<bb 7> :
	T45 = 'PHPMailer\\PHPMailer\\PHP_OS';
	@46 = PHPMailer\PHPMailer\strpos  ( T45, 'WIN' );
	T47 = @46 != 0;
	if ( T47 )
		goto <bb 8>;
	else
		goto <bb 15>;

	<bb 8> :
	@48 = PHPMailer\PHPMailer\ini_get  ( 'max_execution_time' );
	T49 = @48;
	$max = T49;
	T51 = $max != 0;
	T51 = T51;
	if ( T51 )
		goto <bb 9>;
	else
		goto <bb 10>;

	<bb 9> :
	T52 = $max < $timeout;
	T51 = $$bool  ( T52 );

	<bb 10> :
	T51 = T51;
	if ( T51 )
		goto <bb 11>;
	else
		goto <bb 12>;

	<bb 11> :
	@53 = PHPMailer\PHPMailer\ini_get  ( 'disable_functions' );
	@54 = PHPMailer\PHPMailer\strpos  ( @53, 'set_time_limit' );
	T55 = $$type_check  ( @54 );
	T51 = $$bool  ( T55 );

	<bb 12> :
	if ( T51 )
		goto <bb 13>;
	else
		goto <bb 14>;

	<bb 13> :
	T56 = begin_silence  (  );
	PHPMailer\PHPMailer\set_time_limit  ( $timeout );
	end_silence  ( T56 );

	<bb 14> :
	PHPMailer\PHPMailer\stream_set_timeout  ( $connection, $timeout, 0 );

	<bb 15> :
	return $connection;

	<bb 16> :
	return 'null';

}

main  (  )
{

	<bb 0> :
	return 1;

}


