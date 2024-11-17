if(COMMAND toolchain_save_config)
  return() # prevent recursive call
endif()

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_VERSION 1)
if(NOT DEFINED CMAKE_SYSTEM_PROCESSOR)
  set(CMAKE_SYSTEM_PROCESSOR riscv64)
else()
  #message("CMAKE_SYSTEM_PROCESSOR=${CMAKE_SYSTEM_PROCESSOR}")
endif()

include("${CMAKE_CURRENT_LIST_DIR}/gnu.toolchain.cmake")

if(NOT "x${GCC_COMPILER_VERSION}" STREQUAL "x")
  set(__GCC_VER_SUFFIX "-${GCC_COMPILER_VERSION}")
endif()

if(NOT DEFINED GNU_MACHINE)
  set(GNU_MACHINE riscv64-unknown-linux-gnu CACHE STRING "GNU compiler triple")
endif()

if(NOT DEFINED TOOLCHAIN_COMPILER_LOCATION_HINT)
  set(TOOLCHAIN_COMPILER_LOCATION_HINT PATHS /opt/riscv/bin ENV PATH)
endif()

if(NOT DEFINED CMAKE_C_COMPILER)
  find_program(CMAKE_C_COMPILER NAMES ${GNU_MACHINE}-gcc${__GCC_VER_SUFFIX} PATHS ${TOOLCHAIN_COMPILER_LOCATION_HINT})
else()
  #message(WARNING "CMAKE_C_COMPILER=${CMAKE_C_COMPILER} is defined")
endif()
if(NOT DEFINED CMAKE_CXX_COMPILER)
  find_program(CMAKE_CXX_COMPILER NAMES ${GNU_MACHINE}-g++${__GCC_VER_SUFFIX} PATHS ${TOOLCHAIN_COMPILER_LOCATION_HINT})
else()
  #message(WARNING "CMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER} is defined")
endif()
if(NOT DEFINED CMAKE_LINKER)
  find_program(CMAKE_LINKER NAMES ${GNU_MACHINE}-ld${__GCC_VER_SUFFIX} ${GNU_MACHINE}-ld PATHS ${TOOLCHAIN_COMPILER_LOCATION_HINT})
else()
  #message(WARNING "CMAKE_LINKER=${CMAKE_LINKER} is defined")
endif()
if(NOT DEFINED CMAKE_AR)
  find_program(CMAKE_AR NAMES ${GNU_MACHINE}-ar${__GCC_VER_SUFFIX} ${GNU_MACHINE}-ar PATHS ${TOOLCHAIN_COMPILER_LOCATION_HINT})
else()
  #message(WARNING "CMAKE_AR=${CMAKE_AR} is defined")
endif()

if(NOT DEFINED RISCV_SYSROOT)
  get_filename_component(_base_dir ${CMAKE_C_COMPILER} DIRECTORY)
  get_filename_component(_base_dir ${_base_dir} DIRECTORY)
  set(RISCV_SYSROOT ${_base_dir}/sysroot CACHE PATH "RISC-V sysroot")
endif()

set(CMAKE_SYSROOT "${RISCV_SYSROOT}")
set(CMAKE_FIND_ROOT_PATH ${CMAKE_FIND_ROOT_PATH} ${RISCV_SYSROOT})

set(TOOLCHAIN_CONFIG_VARS ${TOOLCHAIN_CONFIG_VARS}
    RISCV_SYSROOT
)
toolchain_save_config()
