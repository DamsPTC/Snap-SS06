/* Pseudo-C reconstruit manuellement depuis ARM64, pour quatre dispatchers dynamiques.
   Ce fichier n’est PAS une nouvelle sortie Ghidra ni du code source original.
   resolve_once est un nom descriptif du chemin d’initialisation ; les variables
   pointer_* et once_* désignent les slots indiqués, sans prétendre être du C compilable.
   Résolveur 0x104957ac8 : ldr x8,[x0]; blr x8; ldr x1,[x19,#8];
   bl 0x10bdbe118 (_dlsym); ldr x8,[x19,#0x10]; str x0,[x8].
   Le descripteur contient factory, nom du symbole, adresse du slot cible.
   Le résultat de dlsym est donc conservé dans le slot utilisé par br x2/x1.
*/

/* Entry: 104957d90; end: 104957dd7; reconstruction ARM64 */
int32_t FUN_104957d90(void *query, void *second_argument)
{
    if (once_11369d1a0 != -1)
        resolve_once(0x11369d1a0, 0x11309eb60, 0x104957ac8);
    return pointer_11369d198(query, second_argument); /* dlsym(..., "SecItemUpdate") */
}
/* Instructions originales :
   0x104957d90: stp x20, x19, [sp, #-0x20]!
   0x104957d94: stp x29, x30, [sp, #0x10]
   0x104957d98: add x29, sp, #0x10
   0x104957d9c: mov x19, x1
   0x104957da0: mov x20, x0
   0x104957da4: adrp x8, #0x11369d000
   0x104957da8: ldr x8, [x8, #0x1a0]
   0x104957dac: cmn x8, #1
   0x104957db0: b.ne #0x104957dd0
   0x104957db4: adrp x8, #0x11369d000
   0x104957db8: ldr x2, [x8, #0x198]
   0x104957dbc: mov x0, x20
   0x104957dc0: mov x1, x19
   0x104957dc4: ldp x29, x30, [sp, #0x10]
   0x104957dc8: ldp x20, x19, [sp], #0x20
   0x104957dcc: br x2
   0x104957dd0: bl #0x10bda8950
   0x104957dd4: b #0x104957db4
*/

/* Entry: 104957dd8; end: 104957e1f; reconstruction ARM64 */
int32_t FUN_104957dd8(void *query, void *second_argument)
{
    if (once_11369d1b0 != -1)
        resolve_once(0x11369d1b0, 0x11309eb78, 0x104957ac8);
    return pointer_11369d1a8(query, second_argument); /* dlsym(..., "SecItemAdd") */
}
/* Instructions originales :
   0x104957dd8: stp x20, x19, [sp, #-0x20]!
   0x104957ddc: stp x29, x30, [sp, #0x10]
   0x104957de0: add x29, sp, #0x10
   0x104957de4: mov x19, x1
   0x104957de8: mov x20, x0
   0x104957dec: adrp x8, #0x11369d000
   0x104957df0: ldr x8, [x8, #0x1b0]
   0x104957df4: cmn x8, #1
   0x104957df8: b.ne #0x104957e18
   0x104957dfc: adrp x8, #0x11369d000
   0x104957e00: ldr x2, [x8, #0x1a8]
   0x104957e04: mov x0, x20
   0x104957e08: mov x1, x19
   0x104957e0c: ldp x29, x30, [sp, #0x10]
   0x104957e10: ldp x20, x19, [sp], #0x20
   0x104957e14: br x2
   0x104957e18: bl #0x10bda896c
   0x104957e1c: b #0x104957dfc
*/

/* Entry: 104957e20; end: 104957e67; reconstruction ARM64 */
int32_t FUN_104957e20(void *query, void *second_argument)
{
    if (once_11369d1c0 != -1)
        resolve_once(0x11369d1c0, 0x11309eb90, 0x104957ac8);
    return pointer_11369d1b8(query, second_argument); /* dlsym(..., "SecItemCopyMatching") */
}
/* Instructions originales :
   0x104957e20: stp x20, x19, [sp, #-0x20]!
   0x104957e24: stp x29, x30, [sp, #0x10]
   0x104957e28: add x29, sp, #0x10
   0x104957e2c: mov x19, x1
   0x104957e30: mov x20, x0
   0x104957e34: adrp x8, #0x11369d000
   0x104957e38: ldr x8, [x8, #0x1c0]
   0x104957e3c: cmn x8, #1
   0x104957e40: b.ne #0x104957e60
   0x104957e44: adrp x8, #0x11369d000
   0x104957e48: ldr x2, [x8, #0x1b8]
   0x104957e4c: mov x0, x20
   0x104957e50: mov x1, x19
   0x104957e54: ldp x29, x30, [sp, #0x10]
   0x104957e58: ldp x20, x19, [sp], #0x20
   0x104957e5c: br x2
   0x104957e60: bl #0x10bda8988
   0x104957e64: b #0x104957e44
*/

/* Entry: 104957e68; end: 104957ea7; reconstruction ARM64 */
int32_t FUN_104957e68(void *query)
{
    if (once_11369d1d0 != -1)
        resolve_once(0x11369d1d0, 0x11309eba8, 0x104957ac8);
    return pointer_11369d1c8(query); /* dlsym(..., "SecItemDelete") */
}
/* Instructions originales :
   0x104957e68: stp x20, x19, [sp, #-0x20]!
   0x104957e6c: stp x29, x30, [sp, #0x10]
   0x104957e70: add x29, sp, #0x10
   0x104957e74: mov x19, x0
   0x104957e78: adrp x8, #0x11369d000
   0x104957e7c: ldr x8, [x8, #0x1d0]
   0x104957e80: cmn x8, #1
   0x104957e84: b.ne #0x104957ea0
   0x104957e88: adrp x8, #0x11369d000
   0x104957e8c: ldr x1, [x8, #0x1c8]
   0x104957e90: mov x0, x19
   0x104957e94: ldp x29, x30, [sp, #0x10]
   0x104957e98: ldp x20, x19, [sp], #0x20
   0x104957e9c: br x1
   0x104957ea0: bl #0x10bda89a4
   0x104957ea4: b #0x104957e88
*/
