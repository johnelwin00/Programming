$.ajaxSetup( {
    contents: {
        javascript: false
    }
} );

// Acceptable: disable text to javascript promotion (but will break intended manual conversions)
$.ajaxSetup( {
    converters: {
        "test => javascript": false
    }
} );

// Preferred: use a prefilter to be more specific (only crossDomain)
$.ajaxPrefilter( function( s ) {
    if ( s.crossDomain ) {
        s.contents.javascript = false;
    }
} );
