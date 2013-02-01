/* 
 * Author: Sandeep Singh
 * Date  : Feb 1, 2013
 * Copyright 2013 Sandeep Singh (sandeepsinghmails@gmail.com)
 *
 * This file is part of DoxygenApp.
 * DoxygenApp is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * DoxygenApp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with DoxygenApp. If not, see <http://www.gnu.org/licenses/>.
 *
 * Compile it as follows:
 * gcc DoxygenApp.c -ansi -Wall -pedantic -o DoxygenApp
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATH_SIZE	150
#define MAX_CMD_SIZE	(50)+(MAX_PATH_SIZE)
#define ERROR_TRACE		{ \
							printf  ("\nFailure:: File: %s, Line: %d\n",  \
												 __FILE__, __LINE__); \
							exit	(EXIT_FAILURE);	\
						}

void find_default_op_directory_path (char *path_buffer);

int main()
{
	char 	path_buffer 	 [MAX_PATH_SIZE];
	char 	user_path_buffer [MAX_PATH_SIZE];	
	char 	cmd_buffer		 [MAX_CMD_SIZE];
	FILE 	*fptr						= NULL;	

	system ("rm -rf 'ConfigFile'");

	if (NULL == (fptr = fopen ("ConfigFile", "w")))
	{
		ERROR_TRACE
	}
	
	fprintf (fptr,
			"DOXYFILE_ENCODING      = UTF-8\n"
			"CREATE_SUBDIRS         = NO\n"
			"OUTPUT_LANGUAGE        = English\n"
			"BRIEF_MEMBER_DESC      = YES\n"
			"REPEAT_BRIEF           = YES\n"
			"ALWAYS_DETAILED_SEC    = YES\n"
			"INLINE_INHERITED_MEMB  = NO\n"
			"FULL_PATH_NAMES        = YES\n"
			"SHORT_NAMES            = NO\n"
			"JAVADOC_AUTOBRIEF      = NO\n"
			"QT_AUTOBRIEF           = NO\n"
			"MULTILINE_CPP_IS_BRIEF = NO\n"
			"INHERIT_DOCS           = YES\n"
			"SEPARATE_MEMBER_PAGES  = NO\n"
			"TAB_SIZE               = 4\n"
			"OPTIMIZE_OUTPUT_FOR_C  = YES\n"
			"OPTIMIZE_OUTPUT_JAVA   = YES\n");

	fprintf (fptr,
			"OPTIMIZE_FOR_FORTRAN   = NO\n"
			"OPTIMIZE_OUTPUT_VHDL   = NO\n"
			"MARKDOWN_SUPPORT       = YES\n"
			"AUTOLINK_SUPPORT       = YES\n"
			"BUILTIN_STL_SUPPORT    = NO\n"
			"CPP_CLI_SUPPORT        = NO\n"
			"SIP_SUPPORT            = NO\n"
			"IDL_PROPERTY_SUPPORT   = YES\n"
			"DISTRIBUTE_GROUP_DOC   = NO\n"
			"SUBGROUPING            = YES\n"
			"INLINE_GROUPED_CLASSES = NO\n"
			"INLINE_SIMPLE_STRUCTS  = NO\n"
			"TYPEDEF_HIDES_STRUCT   = NO\n"
			"SYMBOL_CACHE_SIZE      = 0\n"
			"LOOKUP_CACHE_SIZE      = 0\n"
			"EXTRACT_ALL            = YES\n"
			"EXTRACT_PRIVATE        = NO\n");

	fprintf (fptr,
			"EXTRACT_PACKAGE        = NO\n"
			"EXTRACT_STATIC         = YES\n"
			"EXTRACT_LOCAL_CLASSES  = YES\n"
			"EXTRACT_LOCAL_METHODS  = NO\n"
			"EXTRACT_ANON_NSPACES   = NO\n"
			"HIDE_UNDOC_MEMBERS     = NO\n"
			"HIDE_UNDOC_CLASSES     = NO\n"
			"HIDE_FRIEND_COMPOUNDS  = NO\n"
			"HIDE_IN_BODY_DOCS      = NO\n"
			"INTERNAL_DOCS          = YES\n"
			"CASE_SENSE_NAMES       = YES\n"
			"HIDE_SCOPE_NAMES       = NO\n"
			"SHOW_INCLUDE_FILES     = YES\n"
			"FORCE_LOCAL_INCLUDES   = NO\n"
			"INLINE_INFO            = YES\n"
			"SORT_MEMBER_DOCS       = YES\n"
			"SORT_BRIEF_DOCS        = NO\n");

	fprintf (fptr,
			"SORT_MEMBERS_CTORS_1ST = NO\n"
			"SORT_GROUP_NAMES       = NO\n"
			"SORT_BY_SCOPE_NAME     = NO\n"
			"STRICT_PROTO_MATCHING  = NO\n"
			"GENERATE_TODOLIST      = YES\n"
			"GENERATE_TESTLIST      = YES\n"
			"GENERATE_BUGLIST       = YES\n"
			"GENERATE_DEPRECATEDLIST= YES\n"
			"MAX_INITIALIZER_LINES  = 30\n"
			"SHOW_USED_FILES        = YES\n"
			"SHOW_FILES             = YES\n"
			"SHOW_NAMESPACES        = YES\n"
			"QUIET                  = NO\n"
			"WARNINGS               = YES\n"
			"WARN_IF_UNDOCUMENTED   = YES\n"
			"WARN_IF_DOC_ERROR      = YES\n"
			"WARN_NO_PARAMDOC       = NO\n");

	fprintf (fptr,
			"WARN_FORMAT            = \"$file:$line: $text\"\n"
			"INPUT_ENCODING         = UTF-8\n"
			"RECURSIVE              = YES\n"
			"EXCLUDE_SYMLINKS       = NO\n"
			"EXAMPLE_RECURSIVE      = YES\n"
			"FILTER_SOURCE_FILES    = NO\n"
			"SOURCE_BROWSER         = YES\n"
			"INLINE_SOURCES         = YES\n"
			"STRIP_CODE_COMMENTS    = NO\n"
			"REFERENCED_BY_RELATION = NO\n"
			"REFERENCES_RELATION    = NO\n"
			"REFERENCES_LINK_SOURCE = YES\n"
			"USE_HTAGS              = NO\n"
			"VERBATIM_HEADERS       = YES\n"
			"ALPHABETICAL_INDEX     = YES\n"
			"COLS_IN_ALPHA_INDEX    = 5\n"
			"GENERATE_HTML          = YES\n");

	fprintf (fptr,
			"HTML_OUTPUT            = html\n"
			"HTML_FILE_EXTENSION    = .html\n"
			"HTML_COLORSTYLE_HUE    = 220\n"
			"HTML_COLORSTYLE_SAT    = 100\n"
			"HTML_COLORSTYLE_GAMMA  = 80\n"
			"HTML_TIMESTAMP         = YES\n"
			"HTML_DYNAMIC_SECTIONS  = NO\n"
			"HTML_INDEX_NUM_ENTRIES = 100\n"
			"GENERATE_DOCSET        = NO\n");

	fprintf (fptr,
			"DOCSET_FEEDNAME        = \"Doxygen generated docs\"\n"
			"DOCSET_BUNDLE_ID       = org.doxygen.Project\n"
			"DOCSET_PUBLISHER_ID    = org.doxygen.Publisher\n"
			"DOCSET_PUBLISHER_NAME  = Publisher\n"
			"GENERATE_HTMLHELP      = NO\n"
			"GENERATE_CHI           = NO\n"
			"BINARY_TOC             = NO\n"
			"TOC_EXPAND             = NO\n");

	fprintf (fptr,
			"GENERATE_QHP           = NO\n"
			"QHP_NAMESPACE          = org.doxygen.Project\n"
			"QHP_VIRTUAL_FOLDER     = doc\n"
			"GENERATE_ECLIPSEHELP   = NO\n"
			"ECLIPSE_DOC_ID         = org.doxygen.Project\n"
			"DISABLE_INDEX          = NO\n"
			"GENERATE_TREEVIEW      = YES\n"
			"ENUM_VALUES_PER_LINE   = 4\n"
			"TREEVIEW_WIDTH         = 250\n"
			"EXT_LINKS_IN_WINDOW    = NO\n"
			"FORMULA_FONTSIZE       = 10\n"
			"FORMULA_TRANSPARENT    = YES\n"
			"USE_MATHJAX            = NO\n"
			"MATHJAX_RELPATH        = http://cdn.mathjax.org/mathjax/latest\n");

	fprintf (fptr,
			"SEARCHENGINE           = YES\n"
			"SERVER_BASED_SEARCH    = NO\n"
			"GENERATE_LATEX         = NO\n"
			"LATEX_OUTPUT           = latex\n"
			"LATEX_CMD_NAME         = latex\n"
			"MAKEINDEX_CMD_NAME     = makeindex\n"
			"COMPACT_LATEX          = NO\n"
			"PAPER_TYPE             = a4\n"
			"PDF_HYPERLINKS         = YES\n"
			"USE_PDFLATEX           = YES\n"
			"LATEX_BATCHMODE        = NO\n"
			"LATEX_HIDE_INDICES     = NO\n"
			"LATEX_SOURCE_CODE      = NO\n"
			"LATEX_BIB_STYLE        = plain\n"
			"GENERATE_RTF           = NO\n");

	fprintf (fptr,
			"RTF_OUTPUT             = rtf\n"
			"COMPACT_RTF            = NO\n"
			"RTF_HYPERLINKS         = NO\n"
			"GENERATE_MAN           = NO\n"
			"MAN_OUTPUT             = man\n"
			"MAN_EXTENSION          = .3\n"
			"MAN_LINKS              = NO\n"
			"GENERATE_XML           = NO\n"
			"XML_OUTPUT             = xml\n"
			"XML_PROGRAMLISTING     = YES\n"
			"GENERATE_AUTOGEN_DEF   = NO\n"
			"GENERATE_PERLMOD       = NO\n");

	fprintf (fptr, 
			"PERLMOD_LATEX          = NO\n"
			"PERLMOD_PRETTY         = YES\n"
			"ENABLE_PREPROCESSING   = YES\n"
			"MACRO_EXPANSION        = YES\n"
			"EXPAND_ONLY_PREDEF     = NO\n"
			"SEARCH_INCLUDES        = YES\n"
			"INCLUDE_FILE_PATTERNS  = *.c *.h *.cpp *.java\n"
			"SKIP_FUNCTION_MACROS   = NO\n"
			"ALLEXTERNALS           = NO\n"
			"EXTERNAL_GROUPS        = YES\n"
			"PERL_PATH              = /usr/bin/perl\n"
			"CLASS_DIAGRAMS         = YES\n"
			"HIDE_UNDOC_RELATIONS   = YES\n"
			"HAVE_DOT               = YES\n"
			"DOT_NUM_THREADS        = 0\n"
			"DOT_FONTNAME           = Helvetica\n");

	fprintf (fptr, 
			"DOT_FONTSIZE           = 10\n"
			"CLASS_GRAPH            = YES\n"
			"COLLABORATION_GRAPH    = YES\n"
			"GROUP_GRAPHS           = YES\n"
			"UML_LOOK               = NO\n"
			"UML_LIMIT_NUM_FIELDS   = 10\n"
			"TEMPLATE_RELATIONS     = NO\n"
			"INCLUDE_GRAPH          = YES\n"
			"INCLUDED_BY_GRAPH      = YES\n"
			"CALL_GRAPH             = YES\n");

	fprintf (fptr, 
			"CALLER_GRAPH           = YES\n"
			"GRAPHICAL_HIERARCHY    = YES\n"
			"DIRECTORY_GRAPH        = YES\n"
			"DOT_IMAGE_FORMAT       = png\n"
			"INTERACTIVE_SVG        = NO\n"
			"DOT_GRAPH_MAX_NODES    = 50\n"
			"MAX_DOT_GRAPH_DEPTH    = 0\n"
			"DOT_TRANSPARENT        = NO\n"
			"DOT_MULTI_TARGETS      = NO\n"
			"GENERATE_LEGEND        = YES\n"
			"DOT_CLEANUP            = YES\n");
	

	printf ("\n=============================================================\n");
	printf ("\nWelcome To DoxygenApp (Copyright@2013 Sandeep Singh)\n");
	printf ("\n=============================================================\n");

	printf ("\n####################################################################"
			  "############################\n");
	printf ("\nQ.1: Enter Project Name:\n");
	printf ("\nExample: $ Sample Project\n\n");
	
	fgets  (path_buffer, MAX_PATH_SIZE, stdin);
	path_buffer[strlen(path_buffer)-1] = '\0'; 
	fprintf (fptr, "PROJECT_NAME           = \"%s\"\n", path_buffer);

	printf ("\n####################################################################"
			  "############################\n");
	printf ("\nQ.2: Enter Project Description (Optional):\n");
	printf ("\nExample: $ Sample Description\n\n");
	
	fgets  (path_buffer, MAX_PATH_SIZE, stdin);
	path_buffer[strlen(path_buffer)-1] = '\0'; 
	fprintf (fptr, "PROJECT_BRIEF          = \"%s\"\n", path_buffer);

	printf ("\n####################################################################"
			  "############################\n");
	printf ("\nQ.3: Enter INPUT Directory (Directory containing your Source Files):\n");
	printf ("\nNote: Your Source_Directory may contain Sub-Directories -- No Problem\n");
	printf ("\nSample Directory Structure: ABSOULTE_PATH/Source_Dir/SubDirs_1,2,3,4 ... etc\n");
	printf ("\nYou should Enter here (NO \" or \' Required): ABSOLUTE_PATH/Source_Dir\n\n");
	
	fgets  (path_buffer, MAX_PATH_SIZE, stdin);
	path_buffer[strlen(path_buffer)-1] = '\0'; 
	fprintf (fptr, "INPUT                  = \"%s\"\n", path_buffer);
	fprintf (fptr, "STRIP_FROM_PATH        = \"%s\"\n", path_buffer);
	fprintf (fptr, "STRIP_FROM_INC_PATH    = \"%s\"\n", path_buffer);

	printf ("\n####################################################################"
			  "############################\n");
	printf ("\nQ.4: Enter OUTPUT Directory (for Doxygen Generated O/P)::"
			" or Just Press \"Enter\" to Use the Default OUTPUT Directory Path\n\n");
	find_default_op_directory_path (path_buffer);
	printf ("\nDefault OUTPUT Directory Path::\n%s\n\n", path_buffer);

	fgets  (user_path_buffer, MAX_PATH_SIZE, stdin);
	if (user_path_buffer[0] != '\n')
	{
		user_path_buffer[strlen(user_path_buffer)-1] = '\0'; 
		
		memset  (path_buffer, '\0', sizeof(path_buffer));
		sprintf (path_buffer, "%s", user_path_buffer);

	}

	sprintf (cmd_buffer, "mkdir '%s'", path_buffer);
	system (cmd_buffer);

	fprintf (fptr, "OUTPUT_DIRECTORY       = \"%s\"\n", path_buffer);

	fclose (fptr);

	printf ("\nGenerate Doxygen Documentation\n\n");
	system ("doxygen 'ConfigFile'"); 

	printf ("\n\nSource Code Generation Completed Successfully !\n\n");
	system ("rm -rf 'ConfigFile'");
	
	#ifdef DEBUG_FLAG
	system ("ls 'ConfigFile'"); 
	#endif
    
	/* Open Doxygen Generated Documentation */
	strncpy(path_buffer+strlen(path_buffer), "/html/files.html\0", sizeof("/html/files.html\0"));
	sprintf (cmd_buffer, "firefox \"%s\"", path_buffer); 
	
	#ifdef DEBUG_FLAG
	printf ("\nTrace: Command Buffer:: %s\n\n", cmd_buffer);
	#endif

	if (system (cmd_buffer) == -1)
	{
		ERROR_TRACE
	}


	return 0;
}

void find_default_op_directory_path (char *path_buffer)
{
	char *ptraverse = NULL;

	ptraverse = path_buffer+ strlen(path_buffer)-1;

	while (*ptraverse != '/')
	{
		ptraverse--;
	}

	sprintf (ptraverse+1, "%s", "Reference_Code");

	#ifdef DEBUG_FLAG
	printf ("\n\nFUNCTION: %s, LINE: %d :: path_buffer = %s\n\n", 
			 __FUNCTION__, __LINE__, path_buffer);
	#endif
}
