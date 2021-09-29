##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## description
##

SRC   	=		./initialisation.c					\
				./initialisation_bis.c				\
				./initialisation_bis_bis.c			\
				./event.c							\
				./stock.c							\
				./get_next_line.c					\
				./creation_map.c					\
				./file_menu/creation_menu.c			\
				./file_menu/creation_menu_bis.c		\
				./file_menu/destroy_menu.c			\
				./file_menu/display_menu.c			\
				./file_menu/event_menu.c			\
				./file_menu/event_menu_clic.c		\
				./which_destoy.c					\
				./file_world/creation_world.c		\
				./file_world/creation_world_bis.c	\
				./file_world/destruction_world.c	\
				./file_world/display_world.c		\
				./file_world/event_world.c			\
				./file_world/deplacement.c			\
				./file_world/mouvement.c			\
				./file_world/mouvement_bis.c		\
				./file_world/interaction.c			\
				./file_world/quest.c				\
				./take_dialogue.c					\
				./file_world/item.c					\
				./file_option/creation_media_option.c		\
				./file_option/destroy_media_option.c		\
				./file_option/display_option.c				\
				./file_option/event_option.c				\
				./file_option/sound.c						\
				./file_option/configuration.c				\
				./file_world/stockage_dial.c				\
				./file_save/save_write.c					\
				./file_save/save_read.c						\
				./file_option/display_option_four.c			\
				./file_option/event_option_four.c			\
				./file_end/creation_media_end.c				\
				./file_end/destroy_end.c					\
				./file_end/test_end.c						\
				./file_end/display_end.c					\
				./file_end/event_end.c						\
				./file_save/save_read_bis.c					\
				./file_world/lauch_fight.c					\
				./file_world/valid_quest.c					\
				./file_world/stockage_dial_bis.c			\
				./file_credit/creation_media_credit.c		\
				./file_credit/destroy_credit.c				\
				./file_credit/display_credit.c				\
				file_fights/fight_display.c								\
				file_fights/csfml_functions.c							\
				file_fights/csfml_text_functions.c						\
				file_fights/starter_pack/my_strcat.c					\
				file_fights/starter_pack/my_strcmp.c					\
				file_fights/starter_pack/my_strlen.c					\
				file_fights/starter_pack/my_getnbr.c					\
				file_fights/starter_pack/strn_to_word_array.c			\
				file_fights/starter_pack/int_to_char.c					\
				file_fights/integration.c								\
				./file_credit/event_credit.c							\
				file_inventory/src/inventory/remove_node.c							\
				file_inventory/src/inventory/inventory.c							\
				file_inventory/src/inventory/add_node.c								\
				file_inventory/src/inventory/free.c									\
				file_inventory/src/inventory/stat/weapon_stat.c						\
				file_inventory/src/inventory/stat/atm_stat.c						\
				file_inventory/src/inventory/stat/armor_stat.c						\
				file_inventory/src/inventory/stat/stat_change.c						\
				file_inventory/src/inventory/stat/char_stat.c						\
				file_inventory/src/inventory/init/init_desc.c						\
				file_inventory/src/inventory/init/init_inventory.c					\
				file_inventory/src/inventory/init/init_object.c						\
				file_inventory/src/inventory/csfml/item_sprite_texture.c			\
				file_inventory/src/inventory/csfml/destroy.c						\
				file_inventory/src/inventory/check/check_vreturn.c					\
				file_inventory/src/inventory/check/check_item.c						\
				file_inventory/src/inventory/check/check_vector.c					\
				file_inventory/src/inventory/check/check_char_stat.c				\
				file_inventory/src/inventory/inventory_display/inventory_focus.c	\
				file_inventory/src/inventory/inventory_display/inventory_draw.c		\
				file_inventory/src/inventory/inventory_display/init_display.c		\

SRCLIB     =	./lib/my/my_putchar.c           \
                ./lib/my/my_put_nbr.c           \
				./lib/my/my_putstr.c            \
				./lib/my/my_put_nbr_in_bi.c     \
                ./lib/my/my_put_unsigned_int.c  \
				./lib/my/my_revstr.c            \
                ./lib/my/my_strlen.c            \
				./lib/my/stockage1_my_printf.c  \
				./lib/my/stockage2_my_printf.c  \
                ./lib/my/stockage3_my_printf.c  \
				./lib/my/my_decimal_to_octal.c  \
                ./lib/my/my_put_nbr_in_hex.c    \
				./lib/my/my_atoi.c				\
				./lib/my/my_put_board.c			\
				./lib/my/my_leng_of_int.c		\
				./lib/my/my_strcpy.c			\
				./lib/my/my_getnbr.c			\
				./lib/my/my_splite.c			\
				./lib/my/my_strcat.c			\
				./lib/my/my_strcmpn.c			\
                ./lib/my/my_printf.c			\
				./lib/my/my_int_to_str.c		\
				./lib/my/my_putstra.c			\
				./lib/my/my_puterror.c			\
				./lib/my/my_strdup.c			\

OBJ	=	$(SRC:.c=.o)

OBJLIB =	$(SRCLIB:.c=.o)

NAME	=	my_rpg

NAMELIB		=	libmy.a


princ:	$(NAMELIB) $(NAME)

$(NAMELIB):	$(OBJLIB)
	ar -rc $(NAMELIB) $(OBJLIB)
	rm -f $(OBJLIB)

$(NAME):	$(OBJ)
	gcc -g3 -o $(NAME) $(SRC) main.c $(NAMELIB)  -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system
	rm -f $(OBJ)
	
clean:
	rm -f $(OBJ) $(OBJLIB)

fclean: clean
	rm -f $(NAME) $(NAMELIB)

re: princ