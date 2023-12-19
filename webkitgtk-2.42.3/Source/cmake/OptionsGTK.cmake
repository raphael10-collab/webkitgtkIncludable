include(GNUInstallDirs)
include(VersioningUtils)

WEBKIT_OPTION_BEGIN()

SET_PROJECT_VERSION(2 42 3)

# This is required because we use the DEPFILE argument to add_custom_command().
# Remove after upgrading cmake_minimum_required() to 3.20.
if (${CMAKE_VERSION} VERSION_LESS "3.20" AND NOT ${CMAKE_GENERATOR} STREQUAL "Ninja")
    message(FATAL_ERROR "Building with Makefiles requires CMake 3.20 or newer. Either enable Ninja by passing -GNinja, or upgrade CMake.")
endif ()

set(USER_AGENT_BRANDING "" CACHE STRING "Branding to add to user agent string")

find_package(Cairo 1.16.0 REQUIRED)
find_package(Fontconfig 2.13.0 REQUIRED)
find_package(Freetype 2.9.0 REQUIRED)
find_package(LibGcrypt 1.6.0 REQUIRED)
find_package(HarfBuzz 1.4.2 REQUIRED COMPONENTS ICU)
find_package(ICU 61.2 REQUIRED COMPONENTS data i18n uc)
find_package(JPEG REQUIRED)
find_package(LibEpoxy 1.4.0 REQUIRED)
find_package(LibXml2 2.8.0 REQUIRED)
find_package(PNG REQUIRED)
find_package(SQLite3 REQUIRED)
find_package(Threads REQUIRED)
find_package(Unifdef REQUIRED)
find_package(ZLIB REQUIRED)
find_package(WebP REQUIRED COMPONENTS demux)
find_package(ATSPI 2.5.3)

include(GStreamerDefinitions)

SET_AND_EXPOSE_TO_BUILD(USE_CAIRO TRUE)
SET_AND_EXPOSE_TO_BUILD(USE_GCRYPT TRUE)
SET_AND_EXPOSE_TO_BUILD(USE_LIBEPOXY TRUE)
SET_AND_EXPOSE_TO_BUILD(USE_THEME_ADWAITA TRUE)
SET_AND_EXPOSE_TO_BUILD(USE_XDGMIME TRUE)

if (WTF_CPU_ARM OR WTF_CPU_MIPS)
    SET_AND_EXPOSE_TO_BUILD(USE_CAPSTONE ${DEVELOPER_MODE})
endif ()

# Public options specific to the GTK port. Do not add any options here unless
# there is a strong reason we should support changing the value of the option,
# and the option is not relevant to other WebKit ports.
WEBKIT_OPTION_DEFINE(ENABLE_DOCUMENTATION "Whether to generate documentation." PUBLIC ON)
WEBKIT_OPTION_DEFINE(ENABLE_INTROSPECTION "Whether to enable GObject introspection." PUBLIC ON)
WEBKIT_OPTION_DEFINE(ENABLE_JOURNALD_LOG "Whether to enable journald logging" PUBLIC ON)
WEBKIT_OPTION_DEFINE(ENABLE_QUARTZ_TARGET "Whether to enable support for the Quartz windowing target." PUBLIC ON)
WEBKIT_OPTION_DEFINE(ENABLE_WAYLAND_TARGET "Whether to enable support for the Wayland windowing target." PUBLIC ON)
WEBKIT_OPTION_DEFINE(ENABLE_X11_TARGET "Whether to enable support for the X11 windowing target." PUBLIC ON)
WEBKIT_OPTION_DEFINE(USE_GBM "Whether to enable usage of GBM and libdrm." PUBLIC ON)
WEBKIT_OPTION_DEFINE(USE_GTK4 "Whether to enable usage of GTK4 instead of GTK3." PUBLIC OFF)
WEBKIT_OPTION_DEFINE(USE_LCMS "Whether to enable support for image color management using libcms2." PUBLIC ON)
WEBKIT_OPTION_DEFINE(USE_LIBHYPHEN "Whether to enable the default automatic hyphenation implementation." PUBLIC ON)
WEBKIT_OPTION_DEFINE(USE_LIBSECRET "Whether to enable the persistent credential storage using libsecret." PUBLIC ON)
WEBKIT_OPTION_DEFINE(USE_OPENGL_OR_ES "Whether to use OpenGL or ES." PUBLIC ON)
WEBKIT_OPTION_DEFINE(USE_OPENJPEG "Whether to enable support for JPEG2000 images." PUBLIC ON)
WEBKIT_OPTION_DEFINE(USE_SOUP2 "Whether to enable usage of Soup 2 instead of Soup 3." PUBLIC OFF)
WEBKIT_OPTION_DEFINE(USE_WOFF2 "Whether to enable support for WOFF2 Web Fonts." PUBLIC ON)

WEBKIT_OPTION_DEPEND(ENABLE_DOCUMENTATION ENABLE_INTROSPECTION)
WEBKIT_OPTION_DEPEND(ENABLE_3D_TRANSFORMS USE_OPENGL_OR_ES)
WEBKIT_OPTION_DEPEND(ENABLE_ASYNC_SCROLLING USE_OPENGL_OR_ES)
WEBKIT_OPTION_DEPEND(ENABLE_WEBGL USE_OPENGL_OR_ES)
WEBKIT_OPTION_DEPEND(USE_GBM USE_OPENGL_OR_ES)
WEBKIT_OPTION_DEPEND(USE_GSTREAMER_GL USE_OPENGL_OR_ES)

WEBKIT_OPTION_CONFLICT(USE_GTK4 USE_SOUP2)

# Private options specific to the GTK port. Changing these options is
# completely unsupported. They are intended for use only by WebKit developers.
SET_AND_EXPOSE_TO_BUILD(ENABLE_DEVELOPER_MODE ${DEVELOPER_MODE})
if (DEVELOPER_MODE)
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_API_TESTS PRIVATE ON)
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_LAYOUT_TESTS PRIVATE ON)
else ()
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_API_TESTS PRIVATE OFF)
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_LAYOUT_TESTS PRIVATE OFF)
endif ()

if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_BUBBLEWRAP_SANDBOX PUBLIC ON)
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MEMORY_SAMPLER PRIVATE ON)
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_RESOURCE_USAGE PRIVATE ON)
else ()
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_BUBBLEWRAP_SANDBOX PUBLIC OFF)
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MEMORY_SAMPLER PRIVATE OFF)
    WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_RESOURCE_USAGE PRIVATE OFF)
endif ()

# Public options shared with other WebKit ports. Do not add any options here
# without approval from a GTK reviewer. There must be strong reason to support
# changing the value of the option.
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_DRAG_SUPPORT PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_GAMEPAD PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MINIBROWSER PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_PDFJS PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_SPELLCHECK PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_TOUCH_EVENTS PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_WEB_CRYPTO PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_WEBDRIVER PUBLIC ON)

WEBKIT_OPTION_DEFAULT_PORT_VALUE(USE_AVIF PUBLIC ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(USE_JPEGXL PUBLIC ON)

# Private options shared with other WebKit ports. Add options here when
# we need a value different from the default defined in WebKitFeatures.cmake.
# Changing these options is completely unsupported.
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_ASYNC_SCROLLING PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_AUTOCAPITALIZE PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_CONTENT_EXTENSIONS PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_CSS_CONIC_GRADIENTS PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_CSS_PAINTING_API PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_CURSOR_VISIBILITY PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_DARK_MODE_CSS PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_DATALIST_ELEMENT PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_DOWNLOAD_ATTRIBUTE PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_ENCRYPTED_MEDIA PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_FILTERS_LEVEL_2 PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_FTPDIR PRIVATE OFF)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_GPU_PROCESS PRIVATE OFF)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_INPUT_TYPE_COLOR PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_INPUT_TYPE_DATE PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_INPUT_TYPE_DATETIMELOCAL PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_INPUT_TYPE_MONTH PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_INPUT_TYPE_TIME PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_INPUT_TYPE_WEEK PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_TRACKING_PREVENTION PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_LAYER_BASED_SVG_ENGINE PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MEDIA_RECORDER PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MEDIA_SESSION PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MEDIA_SESSION_PLAYLIST PRIVATE OFF)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MEDIA_STREAM PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MHTML PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MODERN_MEDIA_CONTROLS PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MEDIA_CONTROLS_CONTEXT_MENUS PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_MOUSE_CURSOR_SCALE PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_NETSCAPE_PLUGIN_API PRIVATE OFF)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_NETWORK_CACHE_SPECULATIVE_REVALIDATION PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_NETWORK_CACHE_STALE_WHILE_REVALIDATE PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_OFFSCREEN_CANVAS PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_OFFSCREEN_CANVAS_IN_WORKERS PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_THUNDER PRIVATE ${ENABLE_DEVELOPER_MODE})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_PERIODIC_MEMORY_MONITOR PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_POINTER_LOCK PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_SERVICE_WORKER PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_SHAREABLE_RESOURCE PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_SPEECH_SYNTHESIS PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_VARIATION_FONTS PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_WEB_API_STATISTICS PRIVATE ON)
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_WEB_CODECS PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})
WEBKIT_OPTION_DEFAULT_PORT_VALUE(ENABLE_WEB_RTC PRIVATE ${ENABLE_EXPERIMENTAL_FEATURES})

include(GStreamerDependencies)

# Finalize the value for all options. Do not attempt to use an option before
# this point, and do not attempt to change any option after this point.
WEBKIT_OPTION_END()

if (USE_GTK4)
    set(GTK_MINIMUM_VERSION 4.4.0)
    set(GTK_PC_NAME gtk4)
else ()
    set(GTK_MINIMUM_VERSION 3.22.0)
    set(GTK_PC_NAME gtk+-3.0)
endif ()
find_package(GTK ${GTK_MINIMUM_VERSION} REQUIRED OPTIONAL_COMPONENTS unix-print)

if (ENABLE_QUARTZ_TARGET AND NOT ${GTK_SUPPORTS_QUARTZ})
    set(ENABLE_QUARTZ_TARGET OFF)
endif ()
if (ENABLE_X11_TARGET AND NOT ${GTK_SUPPORTS_X11})
    set(ENABLE_X11_TARGET OFF)
endif ()
if (ENABLE_WAYLAND_TARGET AND NOT ${GTK_SUPPORTS_WAYLAND})
    set(ENABLE_WAYLAND_TARGET OFF)
endif ()

if (USE_SOUP2)
    set(SOUP_MINIMUM_VERSION 2.54.0)
    set(SOUP_API_VERSION 2.4)
else ()
    set(SOUP_MINIMUM_VERSION 3.0.0)
    set(SOUP_API_VERSION 3.0)
    set(ENABLE_SERVER_PRECONNECT ON)
endif ()
find_package(LibSoup ${SOUP_MINIMUM_VERSION})

if (NOT LibSoup_FOUND)
if (USE_SOUP2)
    message(FATAL_ERROR "libsoup is required.")
else ()
    message(FATAL_ERROR "libsoup 3 is required. Enable USE_SOUP2 to use libsoup 2 (disables HTTP/2)")
endif ()
endif ()

if (USE_GTK4)
    set(WEBKITGTK_API_INFIX "")
    set(WEBKITGTK_API_VERSION "6.0")
    SET_AND_EXPOSE_TO_BUILD(ENABLE_2022_GLIB_API ON)
elseif (USE_SOUP2)
    set(WEBKITGTK_API_INFIX "2")
    set(WEBKITGTK_API_VERSION "4.0")
    SET_AND_EXPOSE_TO_BUILD(ENABLE_2022_GLIB_API OFF)
else ()
    set(WEBKITGTK_API_INFIX "2")
    set(WEBKITGTK_API_VERSION "4.1")
    SET_AND_EXPOSE_TO_BUILD(ENABLE_2022_GLIB_API OFF)
endif ()

if (ENABLE_2022_GLIB_API)
    set(GLIB_MINIMUM_VERSION 2.70.0)
else ()
    set(GLIB_MINIMUM_VERSION 2.56.4)
endif ()
find_package(GLIB ${GLIB_MINIMUM_VERSION} REQUIRED COMPONENTS gio gio-unix gobject gthread gmodule)

EXPOSE_STRING_VARIABLE_TO_BUILD(WEBKITGTK_API_INFIX)
EXPOSE_STRING_VARIABLE_TO_BUILD(WEBKITGTK_API_VERSION)

if (WEBKITGTK_API_VERSION VERSION_EQUAL "4.0")
    CALCULATE_LIBRARY_VERSIONS_FROM_LIBTOOL_TRIPLE(WEBKIT 104 6 67)
    CALCULATE_LIBRARY_VERSIONS_FROM_LIBTOOL_TRIPLE(JAVASCRIPTCORE 41 12 23)
elseif (WEBKITGTK_API_VERSION VERSION_EQUAL "4.1")
    CALCULATE_LIBRARY_VERSIONS_FROM_LIBTOOL_TRIPLE(WEBKIT 12 6 12)
    CALCULATE_LIBRARY_VERSIONS_FROM_LIBTOOL_TRIPLE(JAVASCRIPTCORE 4 12 4)
elseif (WEBKITGTK_API_VERSION VERSION_EQUAL "6.0")
    CALCULATE_LIBRARY_VERSIONS_FROM_LIBTOOL_TRIPLE(WEBKIT 8 6 4)
    CALCULATE_LIBRARY_VERSIONS_FROM_LIBTOOL_TRIPLE(JAVASCRIPTCORE 2 12 1)
else ()
    message(FATAL_ERROR "Unhandled API version")
endif ()

set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(bmalloc_LIBRARY_TYPE OBJECT)
set(WTF_LIBRARY_TYPE OBJECT)
set(WebCore_LIBRARY_TYPE OBJECT)

# These are shared variables, but we special case their definition so that we can use the
# CMAKE_INSTALL_* variables that are populated by the GNUInstallDirs macro.
set(LIB_INSTALL_DIR "${CMAKE_INSTALL_FULL_LIBDIR}" CACHE PATH "Absolute path to library installation directory")
set(EXEC_INSTALL_DIR "${CMAKE_INSTALL_FULL_BINDIR}" CACHE PATH "Absolute path to executable installation directory")
set(LIBEXEC_INSTALL_DIR "${CMAKE_INSTALL_FULL_LIBEXECDIR}/webkit${WEBKITGTK_API_INFIX}gtk-${WEBKITGTK_API_VERSION}" CACHE PATH "Absolute path to install executables executed by the library")

set(WEBKITGTK_HEADER_INSTALL_DIR "${CMAKE_INSTALL_INCLUDEDIR}/webkitgtk-${WEBKITGTK_API_VERSION}")
set(INTROSPECTION_INSTALL_GIRDIR "${CMAKE_INSTALL_FULL_DATADIR}/gir-1.0")
set(INTROSPECTION_INSTALL_TYPELIBDIR "${LIB_INSTALL_DIR}/girepository-1.0")

SET_AND_EXPOSE_TO_BUILD(WTF_PLATFORM_QUARTZ ${ENABLE_QUARTZ_TARGET})
SET_AND_EXPOSE_TO_BUILD(WTF_PLATFORM_X11 ${ENABLE_X11_TARGET})
SET_AND_EXPOSE_TO_BUILD(WTF_PLATFORM_WAYLAND ${ENABLE_WAYLAND_TARGET})

SET_AND_EXPOSE_TO_BUILD(ENABLE_PLUGIN_PROCESS FALSE)

add_definitions(-DBUILDING_GTK__=1)
add_definitions(-DGETTEXT_PACKAGE="WebKitGTK-${WEBKITGTK_API_VERSION}")
add_definitions(-DJSC_GLIB_API_ENABLED)

if (USER_AGENT_BRANDING)
    add_definitions(-DUSER_AGENT_BRANDING="${USER_AGENT_BRANDING}")
endif ()

if (NOT EXISTS "${TOOLS_DIR}/glib/apply-build-revision-to-files.py")
    set(BUILD_REVISION "tarball")
endif ()

SET_AND_EXPOSE_TO_BUILD(USE_ATSPI ${ENABLE_ACCESSIBILITY})
SET_AND_EXPOSE_TO_BUILD(HAVE_GTK_UNIX_PRINTING ${GTK_UNIX_PRINT_FOUND})
SET_AND_EXPOSE_TO_BUILD(HAVE_OS_DARK_MODE_SUPPORT 1)

# https://bugs.webkit.org/show_bug.cgi?id=182247
if (ENABLED_COMPILER_SANITIZERS)
    set(ENABLE_INTROSPECTION OFF)
    set(ENABLE_DOCUMENTATION OFF)
endif ()

# GUri is available in GLib since version 2.66, but we only want to use it if version is >= 2.67.1.
if (PC_GLIB_VERSION VERSION_GREATER "2.67.1" OR PC_GLIB_VERSION STREQUAL "2.67.1")
    SET_AND_EXPOSE_TO_BUILD(HAVE_GURI 1)
endif ()

if (ENABLE_GAMEPAD)
    find_package(Manette 0.2.4)
    if (NOT Manette_FOUND)
        message(FATAL_ERROR "libmanette is required for ENABLE_GAMEPAD")
    endif ()
    SET_AND_EXPOSE_TO_BUILD(USE_MANETTE TRUE)
endif ()

if (ENABLE_XSLT)
    find_package(LibXslt 1.1.7 REQUIRED)
endif ()

if (USE_LIBSECRET)
    find_package(Libsecret)
    if (NOT LIBSECRET_FOUND)
        message(FATAL_ERROR "libsecret is needed for USE_LIBSECRET")
    endif ()
endif ()

find_package(GI)
if (ENABLE_INTROSPECTION AND NOT GI_FOUND)
    message(FATAL_ERROR "GObjectIntrospection is needed for ENABLE_INTROSPECTION.")
endif ()

find_package(GIDocgen)
if (ENABLE_DOCUMENTATION AND NOT GIDocgen_FOUND)
    message(FATAL_ERROR "ENABLE_INTROSPECTION is needed for gi-docgen.")
endif ()

if (ENABLE_WEB_CRYPTO)
    find_package(Libtasn1 REQUIRED)
    if (NOT LIBTASN1_FOUND)
        message(FATAL_ERROR "libtasn1 is required to enable Web Crypto API support.")
    endif ()
    if (LibGcrypt_VERSION VERSION_LESS 1.7.0)
        message(FATAL_ERROR "libgcrypt 1.7.0 is required to enable Web Crypto API support.")
    endif ()
endif ()

if (ENABLE_WEBDRIVER)
    SET_AND_EXPOSE_TO_BUILD(ENABLE_WEBDRIVER_KEYBOARD_INTERACTIONS ON)
    SET_AND_EXPOSE_TO_BUILD(ENABLE_WEBDRIVER_MOUSE_INTERACTIONS ON)
    SET_AND_EXPOSE_TO_BUILD(ENABLE_WEBDRIVER_TOUCH_INTERACTIONS OFF)
    SET_AND_EXPOSE_TO_BUILD(ENABLE_WEBDRIVER_WHEEL_INTERACTIONS ON)
endif ()

SET_AND_EXPOSE_TO_BUILD(USE_TEXTURE_MAPPER TRUE)

if (USE_OPENGL_OR_ES)

    SET_AND_EXPOSE_TO_BUILD(USE_TEXTURE_MAPPER_GL ON)
    SET_AND_EXPOSE_TO_BUILD(USE_EGL ON)
    SET_AND_EXPOSE_TO_BUILD(USE_COORDINATED_GRAPHICS ON)
    SET_AND_EXPOSE_TO_BUILD(USE_NICOSIA ON)
    SET_AND_EXPOSE_TO_BUILD(USE_ANGLE ${ENABLE_WEBGL})

    if (ENABLE_WAYLAND_TARGET)
        find_package(WPE 1.3.0)
        if (NOT WPE_FOUND)
            message(FATAL_ERROR "libwpe is required for ENABLE_WAYLAND_TARGET")
        endif ()

        find_package(WPEBackend_fdo 1.6.0)
        if (NOT WPEBACKEND_FDO_FOUND)
            message(FATAL_ERROR "WPEBackend-fdo is required for ENABLE_WAYLAND_TARGET")
        endif ()

        SET_AND_EXPOSE_TO_BUILD(USE_WPE_RENDERER ON)
    endif ()

    if (USE_GBM)
        # ANGLE-backed WebGL depends on DMABuf support, which at the moment is leveraged
        # through libgbm and libdrm dependencies. When libgbm is enabled, make
        # libdrm a requirement and define USE_TEXTURE_MAPPER_DMABUF macros.
        # When not available, ANGLE will be used in slower software-rasterization mode.
        find_package(GBM)
        if (NOT GBM_FOUND)
            message(FATAL_ERROR "GBM is required for USE_GBM")
        endif ()

        find_package(LibDRM)
        if (NOT LIBDRM_FOUND)
            message(FATAL_ERROR "libdrm is required for USE_GBM")
        endif ()

        SET_AND_EXPOSE_TO_BUILD(USE_TEXTURE_MAPPER_DMABUF ON)
    endif ()
endif ()

if (ENABLE_SPEECH_SYNTHESIS)
    find_package(Flite 2.2)
    if (NOT Flite_FOUND)
        message(FATAL_ERROR "Flite is needed for ENABLE_SPEECH_SYNTHESIS")
    endif ()
endif ()

if (ENABLE_SPELLCHECK)
    find_package(Enchant)
    if (NOT PC_ENCHANT_FOUND)
        message(FATAL_ERROR "Enchant is needed for ENABLE_SPELLCHECK")
    endif ()
endif ()

if (ENABLE_QUARTZ_TARGET)
    if (NOT GTK_SUPPORTS_QUARTZ)
        message(FATAL_ERROR "Recompile GTK with Quartz backend to use ENABLE_QUARTZ_TARGET")
    endif ()
endif ()

if (ENABLE_X11_TARGET)
    if (NOT GTK_SUPPORTS_X11)
        message(FATAL_ERROR "Recompile GTK with X11 backend to use ENABLE_X11_TARGET")
    endif ()

    find_package(X11 REQUIRED)
    if (NOT X11_Xcomposite_FOUND)
        message(FATAL_ERROR "libXcomposite is required for ENABLE_X11_TARGET")
    elseif (NOT X11_Xdamage_FOUND)
        message(FATAL_ERROR "libXdamage is required for ENABLE_X11_TARGET")
    elseif (NOT X11_Xrender_FOUND)
        message(FATAL_ERROR "libXrender is required for ENABLE_X11_TARGET")
    elseif (NOT X11_Xt_FOUND)
        message(FATAL_ERROR "libXt is required for ENABLE_X11_TARGET")
    endif ()
endif ()

if (ENABLE_WAYLAND_TARGET)
    if (NOT GTK_SUPPORTS_WAYLAND)
        message(FATAL_ERROR "Recompile GTK with Wayland backend to use ENABLE_WAYLAND_TARGET")
    endif ()

    find_package(Wayland 1.15 REQUIRED)
    find_package(WaylandProtocols 1.15 REQUIRED)
endif ()

if (USE_JPEGXL)
    find_package(JPEGXL 0.7.0)
    if (NOT JPEGXL_FOUND)
        message(FATAL_ERROR "libjxl is required for USE_JPEGXL")
    endif ()
endif ()

if (USE_LIBHYPHEN)
    find_package(Hyphen)
    if (NOT HYPHEN_FOUND)
       message(FATAL_ERROR "libhyphen is needed for USE_LIBHYPHEN.")
    endif ()
endif ()

if (USE_OPENJPEG)
    find_package(OpenJPEG 2.2.0)
    if (NOT OpenJPEG_FOUND)
        message(FATAL_ERROR "libopenjpeg 2.2.0 is required for USE_OPENJPEG.")
    endif ()
endif ()

if (USE_WOFF2)
    find_package(WOFF2 1.0.2 COMPONENTS dec)
    if (NOT WOFF2_FOUND)
       message(FATAL_ERROR "libwoff2dec is needed for USE_WOFF2.")
    endif ()
endif ()

if (USE_AVIF)
    find_package(AVIF 0.9.0)
    if (NOT AVIF_FOUND)
        message(FATAL_ERROR "libavif 0.9.0 is required for USE_AVIF.")
    endif ()
endif ()

if (ENABLE_JOURNALD_LOG)
    find_package(Journald)
    if (NOT Journald_FOUND)
        message(FATAL_ERROR "libsystemd or libelogind are needed for ENABLE_JOURNALD_LOG")
    endif ()
endif ()

if (ENABLE_ENCRYPTED_MEDIA AND ENABLE_THUNDER)
  find_package(Thunder REQUIRED)
endif ()

if (USE_LCMS)
    find_package(LCMS2)
    if (NOT LCMS2_FOUND)
        message(FATAL_ERROR "libcms2 is required for USE_LCMS.")
    endif ()
endif ()

# Override the cached variable, gtk-doc does not really work when building on Mac.
if (APPLE)
    set(ENABLE_GTKDOC OFF)
endif ()

# Using DERIVED_SOURCES_DIR is deprecated
set(DERIVED_SOURCES_DIR "${CMAKE_BINARY_DIR}/DerivedSources")
set(DERIVED_SOURCES_WPETOOLINGBACKENDS_DIR "${CMAKE_BINARY_DIR}/DerivedSources/WPEToolingBackends")

# Using FORWARDING_HEADERS_DIR is deprecated
set(FORWARDING_HEADERS_DIR ${DERIVED_SOURCES_DIR}/ForwardingHeaders)

# FIXME: Remove in https://bugs.webkit.org/show_bug.cgi?id=210891
set(WebKit_FRAMEWORK_HEADERS_DIR ${FORWARDING_HEADERS_DIR})
set(WebKit_PRIVATE_FRAMEWORK_HEADERS_DIR ${FORWARDING_HEADERS_DIR})
set(WebKit_DERIVED_SOURCES_DIR "${CMAKE_BINARY_DIR}/DerivedSources/WebKit")

set(JavaScriptCoreGLib_FRAMEWORK_HEADERS_DIR "${CMAKE_BINARY_DIR}/JavaScriptCoreGLib/Headers")
set(JavaScriptCoreGLib_DERIVED_SOURCES_DIR "${CMAKE_BINARY_DIR}/JavaScriptCoreGLib/DerivedSources")

set(WebKitGTK_FRAMEWORK_HEADERS_DIR "${CMAKE_BINARY_DIR}/WebKitGTK/Headers")
set(WebKitGTK_DERIVED_SOURCES_DIR "${CMAKE_BINARY_DIR}/WebKitGTK/DerivedSources")

set(JavaScriptCore_PKGCONFIG_FILE ${CMAKE_BINARY_DIR}/Source/JavaScriptCore/javascriptcoregtk-${WEBKITGTK_API_VERSION}.pc)
set(WebKitGTK_PKGCONFIG_FILE ${CMAKE_BINARY_DIR}/Source/WebKit/webkit${WEBKITGTK_API_INFIX}gtk-${WEBKITGTK_API_VERSION}.pc)
if (ENABLE_2022_GLIB_API)
    set(WebKitGTKWebProcessExtension_PKGCONFIG_FILE ${CMAKE_BINARY_DIR}/Source/WebKit/webkitgtk-web-process-extension-${WEBKITGTK_API_VERSION}.pc)
else ()
    set(WebKitGTKWebProcessExtension_PKGCONFIG_FILE ${CMAKE_BINARY_DIR}/Source/WebKit/webkit2gtk-web-extension-${WEBKITGTK_API_VERSION}.pc)
endif ()

set(JavaScriptCore_LIBRARY_TYPE SHARED)
set(SHOULD_INSTALL_JS_SHELL ON)

# Add a typelib file to the list of all typelib dependencies. This makes it easy to
# expose a 'gir' target with all gobject-introspection files.
macro(ADD_TYPELIB typelib)
    if (ENABLE_INTROSPECTION)
        get_filename_component(target_name ${typelib} NAME_WE)
        add_custom_target(${target_name}-gir ALL DEPENDS ${typelib})
        list(APPEND GObjectIntrospectionTargets ${target_name}-gir)
        set(GObjectIntrospectionTargets ${GObjectIntrospectionTargets} PARENT_SCOPE)
    endif ()
endmacro()

include(BubblewrapSandboxChecks)
include(GStreamerChecks)