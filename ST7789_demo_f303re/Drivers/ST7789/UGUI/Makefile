CC = gcc
CXX = g++
AR = ar
LD = g++

CFLAGS = -Wall
#INC = -I/opt/X11/include   // @Ankur_edit: not needed
#LDFLAGS = -L/opt/X11/lib -lX11  //// @Ankur_edit: not needed

DBGCFLAGS = $(CFLAGS) -g

SRCS = ugui.c ugui_button.c ugui_checkbox.c ugui_image.c ugui_textbox.c ugui_progress.c ugui_sim.c #ugui_sim_x11.c  // @Ankur_edit: X11 not needed 
OBJS = $(SRCS:.c=.o)
OUT = ugui_sim#_x11 // @Ankur_edit: X11 not needed so deleted ugui_sim_x11.c in UGUI folder too

BUILDDIR = build
DBGDIR = $(BUILDDIR)/debug
DBGOUT = $(DBGDIR)/$(OUT)

DBGOBJS = $(addprefix $(DBGDIR)/, $(OBJS))

all: clean prep debug run

debug: $(DBGOUT)

$(DBGOUT): $(DBGOBJS)
	$(LD) -o $(DBGOUT) $(DBGOBJS) $(LDFLAGS)

$(DBGDIR)/%.o: %.c
	$(CC) $(CFLAGS_DEBUG) $(INC) -c $< -o $@

prep:
	test -d $(DBGDIR) || mkdir -p $(DBGDIR)

clean:
	rm -rf $(BUILDDIR)

run:
	$(DBGOUT)

.PHONY: all
