NAME = ptr_and_ref
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
MAGENTA=\033[0;35m
MAGENTA_BOLD=\033[1;35m
BRANCO_BOLD=\033[1;37m
NC=\033[0m
SRCS = main.cpp
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -s -o $(NAME) $(OBJS)
	@echo "\n$(MAGENTA_BOLD)- Compilation of all files is complete -$(NC)\n"


$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\n$(BRANCO_BOLD)- Cleaned all program files -$(NC)\n"

fclean: clean
	@rm -f $(NAME)
	@echo "\n$(BRANCO_BOLD)- ALL files have been cleaned -$(NC)\n"

re: fclean all
	@make -s

.PHONY: all clean fclean re