/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef BUILTINS_H
#define BUILTINS_H

void refresh_window(Window w, Bool window_update);
void ApplyDefaultFontAndColors(void);
void InitFvwmDecor(FvwmDecor *decor);
void reset_decor_changes(void);
Bool ReadDecorFace(char *s, DecorFace *df, int button, int verbose);
void FreeDecorFace(Display *dpy, DecorFace *df);
void update_fvwm_colorset(int cset);

#endif /* BUILTINS_H */
