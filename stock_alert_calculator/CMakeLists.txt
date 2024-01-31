project("stock_alert_calculator")

set(SOURCES
    "src/stock_calc.cpp"
    "src/main.cpp"
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)
