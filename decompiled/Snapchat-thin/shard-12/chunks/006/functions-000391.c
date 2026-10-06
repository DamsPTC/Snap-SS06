/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092c186c; end: 1092c18e3;  */

void FUN_1092c186c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    FUN_1092a1e58();
    *(ulong *)(param_2 + 0x20) = uVar1;
  }
  *(undefined4 *)(uVar1 + 0x20) = *(undefined4 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(uVar1 + 0x18) = lVar2;
  *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) | 3;
  *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x28) + lVar2;
  return;
}



/* Entry: 1092c18e4; end: 1092c19e3;  */

undefined8 FUN_1092c18e4(undefined8 param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  cVar3 = *(char *)((long)param_2 + 0x17);
  plVar2 = (long *)*param_2;
  if (-1 < (long)cVar3) {
    plVar2 = param_2;
  }
  lVar7 = param_2[1];
  if (-1 < cVar3) {
    lVar7 = (long)cVar3;
  }
  if (lVar7 < 4) {
    return 1;
  }
  piVar1 = (int *)((long)plVar2 + lVar7);
  plVar4 = plVar2;
  lVar6 = lVar7;
  while (_memchr(plVar4,0x2e,lVar6 + -3), plVar5 = plVar2, plVar4 != (long *)0x0) {
    if (*(int *)plVar4 == 0x676e702e) {
      if ((plVar4 != (long *)piVar1) && ((long)plVar4 - (long)plVar2 != -1)) {
        return 3;
      }
      break;
    }
    plVar4 = (long *)((long)plVar4 + 1);
    lVar6 = (long)piVar1 - (long)plVar4;
    if (lVar6 < 4) break;
  }
  while( true ) {
    _memchr(plVar5,0x2e,lVar7 + -3);
    if (plVar5 == (long *)0x0) {
      return 1;
    }
    if (*(int *)plVar5 == 0x67706a2e) break;
    lVar7 = (long)piVar1 - ((long)plVar5 + 1);
    plVar5 = (long *)((long)plVar5 + 1);
    if (lVar7 < 4) {
      return 1;
    }
  }
  if (plVar5 == (long *)piVar1) {
    return 1;
  }
  if ((long)plVar5 - (long)plVar2 == -1) {
    return 1;
  }
  return 3;
}



/* Entry: 1092c19e4; end: 1092c19eb;  */

void FUN_1092c19e4(void)

{
  return;
}



/* Entry: 1092c19ec; end: 1092c2c9f;  */

/* WARNING: Removing unreachable block (ram,0x0001092c21b4) */
/* WARNING: Removing unreachable block (ram,0x0001092c1f34) */
/* WARNING: Removing unreachable block (ram,0x0001092c28b4) */
/* WARNING: Removing unreachable block (ram,0x0001092c1f64) */
/* WARNING: Removing unreachable block (ram,0x0001092c21e8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1092c19ec(char *******param_1,char *******param_2,char *******param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char *******pppppppcVar7;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  ulong uVar10;
  char *******pppppppcVar11;
  char *pcVar12;
  char *******pppppppcVar13;
  char *******pppppppcVar14;
  char *******pppppppcVar15;
  char *******pppppppcVar16;
  char *******pppppppcVar17;
  char *******pppppppcVar18;
  char ******ppppppcVar19;
  char *******pppppppcVar20;
  char *******pppppppcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  char *******pppppppcVar25;
  ulong uVar26;
  ulong uVar27;
  char ******ppppppcVar28;
  char ******ppppppcVar29;
  char *******pppppppcStack_e8;
  char *******pppppppcStack_e0;
  char *******pppppppcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char *******pppppppcStack_c0;
  char *******pppppppcStack_b8;
  char *******pppppppcStack_b0;
  char ******ppppppcStack_a8;
  char *******pppppppcStack_a0;
  char ******ppppppcStack_98;
  char ******ppppppcStack_90;
  char ******ppppppcStack_88;
  char ******ppppppcStack_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  long lStack_68;
  
  pppppppcVar13 = (char *******)&pppppppcStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcStack_c0 = param_2;
  pppppppcStack_b8 = param_1;
  pppppppcVar25 = param_3;
LAB_1092c1a3c:
  pppppppcVar15 = pppppppcStack_b8;
  pppppppcVar7 = pppppppcStack_c0;
  uVar24 = (long)pppppppcStack_c0 - (long)pppppppcStack_b8;
  uVar27 = ((long)uVar24 >> 3) * -0x3333333333333333;
  if (uVar27 - 2 == 0 || (long)uVar27 < 2) {
    if (uVar27 < 2) goto LAB_1092c2c64;
    if (uVar27 == 2) {
      pppppppcVar15 = pppppppcStack_c0 + -5;
      pppppppcVar25 = (char *******)pppppppcStack_c0[-5];
      pppppppcVar7 = (char *******)((long)pppppppcStack_c0[-5] + (long)pppppppcStack_c0[-4]);
      if (-1 < (char)*(byte *)((long)pppppppcStack_c0 + -0x11)) {
        pppppppcVar25 = pppppppcVar15;
        pppppppcVar7 = (char *******)
                       ((long)pppppppcVar15 + (ulong)*(byte *)((long)pppppppcStack_c0 + -0x11));
      }
      pppppppcVar18 = (char *******)((long)*pppppppcStack_b8 + (long)pppppppcStack_b8[1]);
      pppppppcVar11 = (char *******)*pppppppcStack_b8;
      if (-1 < (char)*(byte *)((long)pppppppcStack_b8 + 0x17)) {
        pppppppcVar18 =
             (char *******)
             ((long)pppppppcStack_b8 + (ulong)*(byte *)((long)pppppppcStack_b8 + 0x17));
        pppppppcVar11 = pppppppcStack_b8;
      }
      goto LAB_1092c2260;
    }
  }
  else {
    if (uVar27 == 3) {
      param_3 = pppppppcStack_c0 + -5;
      param_2 = pppppppcStack_b8 + 5;
      param_1 = pppppppcStack_b8;
      pppppppcStack_c0 = param_3;
      FUN_1092c2ca0();
      goto LAB_1092c2c64;
    }
    if (uVar27 == 4) {
      pppppppcStack_c0 = pppppppcStack_c0 + -5;
      param_2 = pppppppcStack_b8 + 5;
      param_3 = pppppppcStack_b8 + 10;
      param_1 = pppppppcStack_b8;
      FUN_1092c2edc();
      goto LAB_1092c2c64;
    }
    if (uVar27 == 5) {
      pppppppcStack_c0 = pppppppcStack_c0 + -5;
      param_2 = pppppppcStack_b8 + 5;
      param_3 = pppppppcStack_b8 + 10;
      param_1 = pppppppcStack_b8;
      func_0x0001092c3090();
      goto LAB_1092c2c64;
    }
  }
  if ((long)uVar24 < 0x3c0) {
    if ((param_4 & 1) == 0) {
      if ((pppppppcStack_b8 != pppppppcStack_c0) && (pppppppcStack_b8 + 5 != pppppppcStack_c0)) {
        pppppppcVar13 = pppppppcStack_b8 + 5;
        pppppppcVar25 = pppppppcStack_b8;
        do {
          pppppppcVar11 = pppppppcVar13;
          pppppppcVar13 = (char *******)pppppppcVar25[5];
          pppppppcVar15 = (char *******)((long)pppppppcVar25[5] + (long)pppppppcVar25[6]);
          if (-1 < (char)*(byte *)((long)pppppppcVar25 + 0x3f)) {
            pppppppcVar13 = pppppppcVar11;
            pppppppcVar15 =
                 (char *******)((long)pppppppcVar11 + (ulong)*(byte *)((long)pppppppcVar25 + 0x3f));
          }
          pppppppcVar9 = (char *******)((long)*pppppppcVar25 + (long)pppppppcVar25[1]);
          pppppppcVar18 = (char *******)*pppppppcVar25;
          if (-1 < (char)*(byte *)((long)pppppppcVar25 + 0x17)) {
            pppppppcVar9 = (char *******)
                           ((long)pppppppcVar25 + (ulong)*(byte *)((long)pppppppcVar25 + 0x17));
            pppppppcVar18 = pppppppcVar25;
          }
          do {
            if (pppppppcVar9 == pppppppcVar18) break;
            if (pppppppcVar15 == pppppppcVar13) {
LAB_1092c2b5c:
              ppppppcStack_90 = pppppppcVar11[2];
              ppppppcStack_98 = pppppppcVar11[1];
              pppppppcStack_a0 = (char *******)*pppppppcVar11;
              pppppppcVar11[1] = (char ******)0x0;
              pppppppcVar11[2] = (char ******)0x0;
              *pppppppcVar11 = (char ******)0x0;
              ppppppcStack_80 = pppppppcVar25[9];
              ppppppcStack_88 = pppppppcVar25[8];
              pppppppcVar13 = pppppppcVar11;
LAB_1092c2b80:
              pppppppcVar15 = pppppppcVar25;
              if (*(char *)((long)pppppppcVar13 + 0x17) < '\0') {
                param_1 = (char *******)*pppppppcVar13;
                __ZdlPv();
              }
              ppppppcVar19 = *pppppppcVar15;
              pppppppcVar13[1] = pppppppcVar15[1];
              *pppppppcVar13 = ppppppcVar19;
              pppppppcVar13[2] = pppppppcVar15[2];
              *(char *)((long)pppppppcVar15 + 0x17) = '\0';
              *(char *)pppppppcVar15 = '\0';
              ppppppcVar19 = pppppppcVar15[3];
              pppppppcVar13[4] = pppppppcVar15[4];
              pppppppcVar13[3] = ppppppcVar19;
              pppppppcVar25 = pppppppcVar15 + -5;
              pppppppcVar18 = pppppppcStack_a0;
              pppppppcVar9 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
              if (-1 < (long)ppppppcStack_90) {
                pppppppcVar18 = (char *******)&pppppppcStack_a0;
                pppppppcVar9 = (char *******)
                               ((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
              }
              pppppppcVar17 = (char *******)((long)*pppppppcVar25 + (long)pppppppcVar15[-4]);
              pppppppcVar14 = (char *******)*pppppppcVar25;
              if (-1 < (char)*(byte *)((long)pppppppcVar15 + -0x11)) {
                pppppppcVar17 =
                     (char *******)
                     ((long)pppppppcVar25 + (ulong)*(byte *)((long)pppppppcVar15 + -0x11));
                pppppppcVar14 = pppppppcVar25;
              }
LAB_1092c2bfc:
              if (pppppppcVar17 == pppppppcVar14) goto LAB_1092c2c30;
              pppppppcVar13 = pppppppcVar15;
              if (pppppppcVar9 != pppppppcVar18) {
                pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
                cVar4 = *(char *)((long)pppppppcVar17 + -1);
                if (cVar4 <= *(char *)pppppppcVar9) goto code_r0x0001092c2c1c;
              }
              goto LAB_1092c2b80;
            }
            pppppppcVar15 = (char *******)((long)pppppppcVar15 + -1);
            cVar4 = *(char *)((long)pppppppcVar9 + -1);
            if (*(char *)pppppppcVar15 < cVar4) goto LAB_1092c2b5c;
            pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
          } while (*(char *)pppppppcVar15 <= cVar4);
LAB_1092c2c58:
          pppppppcVar13 = pppppppcVar11 + 5;
          pppppppcVar25 = pppppppcVar11;
        } while (pppppppcVar11 + 5 != pppppppcVar7);
      }
    }
    else if ((pppppppcStack_b8 != pppppppcStack_c0) && (pppppppcStack_b8 + 5 != pppppppcStack_c0)) {
      pppppppcVar13 = pppppppcStack_b8 + 5;
      pppppppcVar25 = pppppppcStack_b8;
      goto LAB_1092c22e8;
    }
    goto LAB_1092c2c64;
  }
  if (pppppppcVar25 != (char *******)0x0) {
    uVar27 = uVar27 >> 1;
    pppppppcVar7 = pppppppcStack_b8 + uVar27 * 5;
    param_3 = pppppppcStack_c0 + -5;
    if (uVar24 < 0x1401) {
      FUN_1092c2ca0();
    }
    else {
      FUN_1092c2ca0(pppppppcStack_b8);
      pppppppcVar7 = pppppppcStack_c0;
      FUN_1092c2ca0(pppppppcStack_b8 + 5,pppppppcStack_b8 + uVar27 * 5 + -5,pppppppcStack_c0 + -10);
      FUN_1092c2ca0(pppppppcStack_b8 + 10,pppppppcStack_b8 + uVar27 * 5 + 5,pppppppcVar7 + -0xf);
      param_3 = pppppppcStack_b8 + uVar27 * 5 + 5;
      FUN_1092c2ca0(pppppppcStack_b8 + uVar27 * 5 + -5,pppppppcStack_b8 + uVar27 * 5);
      pppppppcStack_a0 = pppppppcStack_b8 + uVar27 * 5;
      pppppppcVar7 = (char *******)&pppppppcStack_b8;
      pppppppcVar15 = (char *******)&pppppppcStack_a0;
      FUN_1092a6b0c();
    }
    pppppppcVar11 = pppppppcStack_b8;
    pppppppcVar25 = (char *******)((long)pppppppcVar25 + -1);
    uStack_78._7_1_ = (undefined1)((ulong)pppppppcStack_c0 >> 0x38);
    uStack_78._0_7_ = SUB87(pppppppcStack_c0,0);
    if ((param_4 & 1) != 0) {
LAB_1092c1b28:
      ppppppcStack_90 = pppppppcStack_b8[2];
      ppppppcStack_98 = pppppppcStack_b8[1];
      pppppppcStack_a0 = (char *******)*pppppppcStack_b8;
      pppppppcStack_b8[1] = (char ******)0x0;
      pppppppcStack_b8[2] = (char ******)0x0;
      *pppppppcStack_b8 = (char ******)0x0;
      ppppppcStack_80 = pppppppcStack_b8[4];
      ppppppcStack_88 = pppppppcStack_b8[3];
      pppppppcVar18 = pppppppcStack_b8;
      pppppppcVar15 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
      pppppppcVar7 = pppppppcStack_a0;
      if (-1 < (long)ppppppcStack_90) {
        pppppppcVar15 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
        pppppppcVar7 = (char *******)&pppppppcStack_a0;
      }
LAB_1092c1b74:
      pppppppcVar8 = pppppppcVar18;
      pppppppcVar18 = pppppppcVar8 + 5;
      pppppppcStack_b0 = pppppppcVar18;
      pppppppcVar14 = (char *******)((long)*pppppppcVar18 + (long)pppppppcVar8[6]);
      pppppppcVar17 = pppppppcVar15;
      pppppppcVar9 = (char *******)*pppppppcVar18;
      if (-1 < (char)*(byte *)((long)pppppppcVar8 + 0x3f)) {
        pppppppcVar14 =
             (char *******)((long)pppppppcVar18 + (ulong)*(byte *)((long)pppppppcVar8 + 0x3f));
        pppppppcVar9 = pppppppcVar18;
      }
LAB_1092c1ba4:
      if (pppppppcVar17 == pppppppcVar7) goto LAB_1092c1bd8;
      if (pppppppcVar14 != pppppppcVar9) {
        cVar4 = *(char *)((long)pppppppcVar14 + -1);
        cVar5 = *(char *)((long)pppppppcVar17 + -1);
        if (cVar5 <= cVar4) goto code_r0x0001092c1bc4;
      }
      goto LAB_1092c1b74;
    }
    pppppppcVar14 = pppppppcStack_b8 + -5;
    pppppppcVar18 = (char *******)*pppppppcVar14;
    pppppppcVar9 = (char *******)((long)*pppppppcVar14 + (long)pppppppcStack_b8[-4]);
    if (-1 < (char)*(byte *)((long)pppppppcStack_b8 + -0x11)) {
      pppppppcVar18 = pppppppcVar14;
      pppppppcVar9 = (char *******)
                     ((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcStack_b8 + -0x11));
    }
    pppppppcVar17 = (char *******)((long)*pppppppcStack_b8 + (long)pppppppcStack_b8[1]);
    pppppppcVar14 = (char *******)*pppppppcStack_b8;
    if (-1 < (char)*(byte *)((long)pppppppcStack_b8 + 0x17)) {
      pppppppcVar17 =
           (char *******)((long)pppppppcStack_b8 + (ulong)*(byte *)((long)pppppppcStack_b8 + 0x17));
      pppppppcVar14 = pppppppcStack_b8;
    }
    do {
      if (pppppppcVar17 == pppppppcVar14) break;
      if (pppppppcVar9 == pppppppcVar18) goto LAB_1092c1b28;
      pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
      cVar4 = *(char *)((long)pppppppcVar17 + -1);
      if (*(char *)pppppppcVar9 < cVar4) goto LAB_1092c1b28;
      pppppppcVar17 = (char *******)((long)pppppppcVar17 + -1);
    } while (*(char *)pppppppcVar9 <= cVar4);
    ppppppcStack_90 = pppppppcStack_b8[2];
    ppppppcStack_98 = pppppppcStack_b8[1];
    pppppppcStack_a0 = (char *******)*pppppppcStack_b8;
    pppppppcStack_b8[1] = (char ******)0x0;
    pppppppcStack_b8[2] = (char ******)0x0;
    *pppppppcStack_b8 = (char ******)0x0;
    ppppppcStack_80 = pppppppcStack_b8[4];
    ppppppcStack_88 = pppppppcStack_b8[3];
    pppppppcVar18 = pppppppcStack_a0;
    pppppppcVar9 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
    if (-1 < (long)ppppppcStack_90) {
      pppppppcVar18 = (char *******)&pppppppcStack_a0;
      pppppppcVar9 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
    }
    uVar27 = (ulong)*(byte *)((long)pppppppcStack_c0 + -0x11);
    pppppppcVar20 = pppppppcStack_c0 + -5;
    pppppppcVar17 = (char *******)*pppppppcVar20;
    ppppppcVar19 = pppppppcStack_c0[-4];
    pppppppcVar8 = (char *******)((long)pppppppcVar17 + (long)ppppppcVar19);
    pppppppcVar16 = pppppppcVar9;
    pppppppcVar14 = pppppppcVar17;
    if (-1 < (char)*(byte *)((long)pppppppcStack_c0 + -0x11)) {
      pppppppcVar8 = (char *******)((long)pppppppcVar20 + uVar27);
      pppppppcVar14 = pppppppcVar20;
    }
    do {
      if (pppppppcVar8 == pppppppcVar14) break;
      pppppppcVar20 = pppppppcStack_b8;
      if (pppppppcVar16 == pppppppcVar18) {
LAB_1092c1fd8:
        do {
          pppppppcStack_b0 = pppppppcVar20 + 5;
          pppppppcVar8 = (char *******)((long)*pppppppcStack_b0 + (long)pppppppcVar20[6]);
          pppppppcVar16 = pppppppcVar9;
          pppppppcVar14 = (char *******)*pppppppcStack_b0;
          if (-1 < (char)*(byte *)((long)pppppppcVar20 + 0x3f)) {
            pppppppcVar8 = (char *******)
                           ((long)pppppppcStack_b0 + (ulong)*(byte *)((long)pppppppcVar20 + 0x3f));
            pppppppcVar14 = pppppppcStack_b0;
          }
          do {
            pppppppcVar20 = pppppppcStack_b0;
            if (pppppppcVar8 == pppppppcVar14) break;
            if (pppppppcVar16 == pppppppcVar18) goto LAB_1092c2034;
            pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
            pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1);
            if (*(char *)pppppppcVar16 < *(char *)pppppppcVar8) goto LAB_1092c2034;
          } while (*(char *)pppppppcVar16 <= *(char *)pppppppcVar8);
        } while( true );
      }
      cVar4 = *(char *)((long)pppppppcVar16 + -1);
      cVar5 = *(char *)((long)pppppppcVar8 + -1);
      if (cVar4 < cVar5) goto LAB_1092c1fd8;
      pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1);
      pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
    } while (cVar4 <= cVar5);
    pppppppcStack_b0 = pppppppcStack_b8 + 5;
    pppppppcVar14 = pppppppcStack_b8;
    pppppppcVar8 = pppppppcStack_b8 + 5;
    while (pppppppcStack_b0 = pppppppcVar8, pppppppcVar8 < pppppppcStack_c0) {
      pppppppcVar20 = (char *******)((long)pppppppcVar14[5] + (long)pppppppcVar14[6]);
      pppppppcVar21 = pppppppcVar9;
      pppppppcVar16 = (char *******)pppppppcVar14[5];
      if (-1 < (char)*(byte *)((long)pppppppcVar14 + 0x3f)) {
        pppppppcVar20 =
             (char *******)((long)pppppppcVar8 + (ulong)*(byte *)((long)pppppppcVar14 + 0x3f));
        pppppppcVar16 = pppppppcVar8;
      }
      do {
        if (pppppppcVar20 == pppppppcVar16) break;
        if (pppppppcVar21 == pppppppcVar18) goto LAB_1092c2034;
        cVar4 = *(char *)((long)pppppppcVar21 + -1);
        cVar5 = *(char *)((long)pppppppcVar20 + -1);
        if (cVar4 < cVar5) goto LAB_1092c2034;
        pppppppcVar20 = (char *******)((long)pppppppcVar20 + -1);
        pppppppcVar21 = (char *******)((long)pppppppcVar21 + -1);
      } while (cVar4 <= cVar5);
      pppppppcStack_b0 = pppppppcVar8 + 5;
      pppppppcVar14 = pppppppcVar8;
      pppppppcVar8 = pppppppcVar8 + 5;
    }
LAB_1092c2034:
    pppppppcVar14 = pppppppcStack_c0;
    pppppppcVar8 = pppppppcStack_c0;
    if (pppppppcStack_b0 < pppppppcStack_c0) {
      do {
        pppppppcVar14 = pppppppcVar8 + -5;
        uStack_78._0_7_ = SUB87(pppppppcVar14,0);
        uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar14 >> 0x38);
        pppppppcVar16 = (char *******)((long)pppppppcVar17 + (long)ppppppcVar19);
        pppppppcVar20 = pppppppcVar9;
        if (-1 < (char)uVar27) {
          pppppppcVar16 = (char *******)((long)pppppppcVar14 + uVar27);
          pppppppcVar17 = pppppppcVar14;
        }
        while( true ) {
          if (pppppppcVar16 == pppppppcVar17) goto LAB_1092c2168;
          if (pppppppcVar20 == pppppppcVar18) break;
          cVar4 = *(char *)((long)pppppppcVar20 + -1);
          cVar5 = *(char *)((long)pppppppcVar16 + -1);
          if (cVar4 < cVar5) break;
          pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
          pppppppcVar20 = (char *******)((long)pppppppcVar20 + -1);
          if (cVar5 < cVar4) goto LAB_1092c2168;
        }
        uVar27 = (ulong)*(byte *)((long)pppppppcVar8 + -0x39);
        pppppppcVar17 = (char *******)pppppppcVar8[-10];
        ppppppcVar19 = pppppppcVar8[-9];
        pppppppcVar8 = pppppppcVar14;
      } while( true );
    }
LAB_1092c2168:
    pppppppcVar17 = pppppppcStack_b0;
    if (pppppppcStack_b0 < pppppppcVar14) {
      pppppppcVar7 = (char *******)&pppppppcStack_b0;
      pppppppcVar15 = (char *******)&uStack_78;
      FUN_1092a6410();
      pppppppcVar14 = pppppppcStack_b0;
      do {
        pppppppcStack_b0 = pppppppcVar14 + 5;
        pppppppcVar8 = (char *******)((long)*pppppppcStack_b0 + (long)pppppppcVar14[6]);
        pppppppcVar16 = pppppppcVar9;
        pppppppcVar17 = (char *******)*pppppppcStack_b0;
        if (-1 < (char)*(byte *)((long)pppppppcVar14 + 0x3f)) {
          pppppppcVar8 = (char *******)
                         ((long)pppppppcStack_b0 + (ulong)*(byte *)((long)pppppppcVar14 + 0x3f));
          pppppppcVar17 = pppppppcStack_b0;
        }
        do {
          pppppppcVar14 = pppppppcStack_b0;
          if (pppppppcVar8 == pppppppcVar17) break;
          if (pppppppcVar16 == pppppppcVar18) {
LAB_1092c210c:
            pppppppcVar17 = (char *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
            goto LAB_1092c2110;
          }
          pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
          pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1);
          if (*(char *)pppppppcVar16 < *(char *)pppppppcVar8) goto LAB_1092c210c;
        } while (*(char *)pppppppcVar16 <= *(char *)pppppppcVar8);
      } while( true );
    }
    pppppppcVar18 = pppppppcStack_b0 + -5;
    if (pppppppcVar18 != pppppppcVar11) {
      if (*(char *)((long)pppppppcVar11 + 0x17) < '\0') {
        pppppppcVar7 = (char *******)*pppppppcVar11;
        __ZdlPv();
      }
      ppppppcVar28 = pppppppcVar17[-4];
      ppppppcVar19 = *pppppppcVar18;
      pppppppcVar11[2] = pppppppcVar17[-3];
      pppppppcVar11[1] = ppppppcVar28;
      *pppppppcVar11 = ppppppcVar19;
      *(char *)((long)pppppppcVar17 + -0x11) = '\0';
      *(char *)(pppppppcVar17 + -5) = '\0';
      ppppppcVar19 = pppppppcVar17[-2];
      pppppppcVar11[4] = pppppppcVar17[-1];
      pppppppcVar11[3] = ppppppcVar19;
    }
    pppppppcStack_b8 = pppppppcVar7;
    pppppppcVar17[-3] = ppppppcStack_90;
    pppppppcVar17[-4] = ppppppcStack_98;
    *pppppppcVar18 = (char ******)pppppppcStack_a0;
    ppppppcStack_90 = (char ******)((ulong)ppppppcStack_90 & 0xffffffffffffff);
    pppppppcStack_a0 = (char *******)((ulong)pppppppcStack_a0 & 0xffffffffffffff00);
    pppppppcVar17[-1] = ppppppcStack_80;
    pppppppcVar17[-2] = ppppppcStack_88;
    pppppppcVar9 = pppppppcStack_b0;
LAB_1092c21f0:
    param_4 = 0;
    param_1 = pppppppcStack_b8;
    param_2 = pppppppcVar15;
LAB_1092c21f4:
    pppppppcStack_b8 = pppppppcVar9;
    goto LAB_1092c1a3c;
  }
  if (pppppppcStack_b8 == pppppppcStack_c0) goto LAB_1092c2c64;
  uVar22 = uVar27 - 2 >> 1;
  uVar10 = uVar22;
  do {
    if ((long)uVar10 <= (long)uVar22) {
      uVar2 = uVar10 << 1 | 1;
      pppppppcVar13 = pppppppcVar15 + uVar2 * 5;
      uVar1 = uVar10 * 2 + 2;
      pppppppcVar25 = pppppppcVar13;
      uVar26 = uVar2;
      if ((long)uVar1 < (long)uVar27) {
        pppppppcVar9 = pppppppcVar13 + 5;
        pppppppcVar11 = (char *******)*pppppppcVar13;
        pppppppcVar18 = (char *******)((long)*pppppppcVar13 + (long)pppppppcVar13[1]);
        if (-1 < (char)*(byte *)((long)pppppppcVar13 + 0x17)) {
          pppppppcVar11 = pppppppcVar13;
          pppppppcVar18 =
               (char *******)((long)pppppppcVar13 + (ulong)*(byte *)((long)pppppppcVar13 + 0x17));
        }
        pppppppcVar17 = (char *******)((long)*pppppppcVar9 + (long)pppppppcVar13[6]);
        pppppppcVar14 = (char *******)*pppppppcVar9;
        if (-1 < (char)*(byte *)((long)pppppppcVar13 + 0x3f)) {
          pppppppcVar17 =
               (char *******)((long)pppppppcVar9 + (ulong)*(byte *)((long)pppppppcVar13 + 0x3f));
          pppppppcVar14 = pppppppcVar9;
        }
        while ((pppppppcVar25 = pppppppcVar13, uVar26 = uVar2, pppppppcVar17 != pppppppcVar14 &&
               (pppppppcVar25 = pppppppcVar9, uVar26 = uVar1, pppppppcVar18 != pppppppcVar11))) {
          pppppppcVar18 = (char *******)((long)pppppppcVar18 + -1);
          cVar4 = *(char *)((long)pppppppcVar17 + -1);
          if ((*(char *)pppppppcVar18 < cVar4) ||
             (pppppppcVar17 = (char *******)((long)pppppppcVar17 + -1),
             pppppppcVar25 = pppppppcVar13, uVar26 = uVar2, cVar4 < *(char *)pppppppcVar18)) break;
        }
      }
      pppppppcVar18 = pppppppcVar15 + uVar10 * 5;
      pppppppcVar13 = (char *******)*pppppppcVar25;
      pppppppcVar11 = (char *******)((long)*pppppppcVar25 + (long)pppppppcVar25[1]);
      if (-1 < (char)*(byte *)((long)pppppppcVar25 + 0x17)) {
        pppppppcVar13 = pppppppcVar25;
        pppppppcVar11 =
             (char *******)((long)pppppppcVar25 + (ulong)*(byte *)((long)pppppppcVar25 + 0x17));
      }
      pppppppcVar14 = (char *******)((long)*pppppppcVar18 + (long)pppppppcVar18[1]);
      pppppppcVar9 = (char *******)*pppppppcVar18;
      if (-1 < (char)*(byte *)((long)pppppppcVar18 + 0x17)) {
        pppppppcVar14 =
             (char *******)((long)pppppppcVar18 + (ulong)*(byte *)((long)pppppppcVar18 + 0x17));
        pppppppcVar9 = pppppppcVar18;
      }
      do {
        if (pppppppcVar14 == pppppppcVar9) break;
        if (pppppppcVar11 == pppppppcVar13) goto LAB_1092c2744;
        pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
        cVar4 = *(char *)((long)pppppppcVar14 + -1);
        if (*(char *)pppppppcVar11 < cVar4) goto LAB_1092c2744;
        pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
      } while (*(char *)pppppppcVar11 <= cVar4);
      ppppppcStack_90 = pppppppcVar18[2];
      ppppppcStack_98 = pppppppcVar18[1];
      pppppppcStack_a0 = (char *******)*pppppppcVar18;
      pppppppcVar18[1] = (char ******)0x0;
      pppppppcVar18[2] = (char ******)0x0;
      *pppppppcVar18 = (char ******)0x0;
      ppppppcStack_80 = pppppppcVar18[4];
      ppppppcStack_88 = pppppppcVar18[3];
      while( true ) {
        pppppppcVar13 = pppppppcVar25;
        ppppppcVar28 = pppppppcVar13[1];
        ppppppcVar19 = *pppppppcVar13;
        pppppppcVar18[2] = pppppppcVar13[2];
        pppppppcVar18[1] = ppppppcVar28;
        *pppppppcVar18 = ppppppcVar19;
        *(char *)((long)pppppppcVar13 + 0x17) = '\0';
        *(char *)pppppppcVar13 = '\0';
        ppppppcVar19 = pppppppcVar13[3];
        pppppppcVar18[4] = pppppppcVar13[4];
        pppppppcVar18[3] = ppppppcVar19;
        if ((long)uVar22 < (long)uVar26) break;
        uVar2 = uVar26 << 1 | 1;
        pppppppcVar11 = pppppppcVar15 + uVar2 * 5;
        uVar1 = uVar26 * 2 + 2;
        pppppppcVar25 = pppppppcVar11;
        uVar26 = uVar2;
        if ((long)uVar1 < (long)uVar27) {
          pppppppcVar14 = pppppppcVar11 + 5;
          pppppppcVar18 = (char *******)*pppppppcVar11;
          pppppppcVar9 = (char *******)((long)*pppppppcVar11 + (long)pppppppcVar11[1]);
          if (-1 < (char)*(byte *)((long)pppppppcVar11 + 0x17)) {
            pppppppcVar18 = pppppppcVar11;
            pppppppcVar9 = (char *******)
                           ((long)pppppppcVar11 + (ulong)*(byte *)((long)pppppppcVar11 + 0x17));
          }
          pppppppcVar8 = (char *******)((long)*pppppppcVar14 + (long)pppppppcVar11[6]);
          pppppppcVar17 = (char *******)*pppppppcVar14;
          if (-1 < (char)*(byte *)((long)pppppppcVar11 + 0x3f)) {
            pppppppcVar8 = (char *******)
                           ((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcVar11 + 0x3f));
            pppppppcVar17 = pppppppcVar14;
          }
          while ((pppppppcVar25 = pppppppcVar11, uVar26 = uVar2, pppppppcVar8 != pppppppcVar17 &&
                 (pppppppcVar25 = pppppppcVar14, uVar26 = uVar1, pppppppcVar9 != pppppppcVar18))) {
            pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
            cVar4 = *(char *)((long)pppppppcVar8 + -1);
            if ((*(char *)pppppppcVar9 < cVar4) ||
               (pppppppcVar25 = pppppppcVar11,
               pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1), uVar26 = uVar2,
               cVar4 < *(char *)pppppppcVar9)) break;
          }
        }
        pppppppcVar11 = (char *******)*pppppppcVar25;
        pppppppcVar18 = (char *******)((long)*pppppppcVar25 + (long)pppppppcVar25[1]);
        if (-1 < (char)*(byte *)((long)pppppppcVar25 + 0x17)) {
          pppppppcVar11 = pppppppcVar25;
          pppppppcVar18 =
               (char *******)((long)pppppppcVar25 + (ulong)*(byte *)((long)pppppppcVar25 + 0x17));
        }
        pppppppcVar14 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
        pppppppcVar9 = pppppppcStack_a0;
        if (-1 < (long)ppppppcStack_90) {
          pppppppcVar14 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38))
          ;
          pppppppcVar9 = (char *******)&pppppppcStack_a0;
        }
        do {
          if (pppppppcVar14 == pppppppcVar9) break;
          if (pppppppcVar18 == pppppppcVar11) goto LAB_1092c2718;
          pppppppcVar18 = (char *******)((long)pppppppcVar18 + -1);
          cVar4 = *(char *)((long)pppppppcVar14 + -1);
          if (*(char *)pppppppcVar18 < cVar4) goto LAB_1092c2718;
          pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
        } while (*(char *)pppppppcVar18 <= cVar4);
        pppppppcVar18 = pppppppcVar13;
        if (*(char *)((long)pppppppcVar13 + 0x17) < '\0') {
          param_1 = (char *******)*pppppppcVar13;
          __ZdlPv();
        }
      }
LAB_1092c2718:
      if (*(char *)((long)pppppppcVar13 + 0x17) < '\0') {
        param_1 = (char *******)*pppppppcVar13;
        __ZdlPv();
      }
      pppppppcVar13[2] = ppppppcStack_90;
      pppppppcVar13[1] = ppppppcStack_98;
      *pppppppcVar13 = (char ******)pppppppcStack_a0;
      pppppppcVar13[4] = ppppppcStack_80;
      pppppppcVar13[3] = ppppppcStack_88;
    }
LAB_1092c2744:
    bVar3 = uVar10 != 0;
    uVar10 = uVar10 - 1;
  } while (bVar3);
  lVar23 = (uVar24 >> 3) * -0x3333333333333333;
LAB_1092c2760:
  ppppppcVar19 = *pppppppcVar15;
  uStack_78._0_7_ = SUB87(pppppppcVar15[1],0);
  uStack_78._7_1_ = (undefined1)*(undefined8 *)((long)pppppppcVar15 + 0xf);
  uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppcVar15 + 0xf) >> 8);
  cVar4 = *(char *)((long)pppppppcVar15 + 0x17);
  *pppppppcVar15 = (char ******)0x0;
  pppppppcVar15[1] = (char ******)0x0;
  pppppppcVar15[2] = (char ******)0x0;
  ppppppcStack_a8 = pppppppcVar15[4];
  pppppppcStack_b0 = (char *******)pppppppcVar15[3];
  uVar27 = 0;
  pppppppcVar25 = pppppppcVar15;
  do {
    pppppppcVar13 = pppppppcVar25 + uVar27 * 5 + 5;
    uVar10 = uVar27 << 1 | 1;
    uVar24 = uVar27 * 2 + 2;
    pppppppcVar11 = pppppppcVar13;
    uVar22 = uVar10;
    if ((long)uVar24 < lVar23) {
      pppppppcVar14 = pppppppcVar25 + uVar27 * 5 + 10;
      bVar6 = *(byte *)((long)pppppppcVar25 + uVar27 * 0x28 + 0x3f);
      pppppppcVar18 = (char *******)pppppppcVar25[uVar27 * 5 + 5];
      pppppppcVar9 = (char *******)
                     ((long)pppppppcVar25[uVar27 * 5 + 5] + (long)pppppppcVar25[uVar27 * 5 + 6]);
      if (-1 < (char)bVar6) {
        pppppppcVar18 = pppppppcVar13;
        pppppppcVar9 = (char *******)((long)pppppppcVar13 + (ulong)bVar6);
      }
      bVar6 = *(byte *)((long)pppppppcVar25 + uVar27 * 0x28 + 0x67);
      pppppppcVar8 = (char *******)((long)*pppppppcVar14 + (long)pppppppcVar25[uVar27 * 5 + 0xb]);
      pppppppcVar17 = (char *******)*pppppppcVar14;
      if (-1 < (char)bVar6) {
        pppppppcVar8 = (char *******)((long)pppppppcVar14 + (ulong)bVar6);
        pppppppcVar17 = pppppppcVar14;
      }
      while ((pppppppcVar11 = pppppppcVar13, uVar22 = uVar10, pppppppcVar8 != pppppppcVar17 &&
             (pppppppcVar11 = pppppppcVar14, uVar22 = uVar24, pppppppcVar9 != pppppppcVar18))) {
        pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
        cVar5 = *(char *)((long)pppppppcVar8 + -1);
        if ((*(char *)pppppppcVar9 < cVar5) ||
           (pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1), pppppppcVar11 = pppppppcVar13,
           uVar22 = uVar10, cVar5 < *(char *)pppppppcVar9)) break;
      }
    }
    if (*(char *)((long)pppppppcVar25 + 0x17) < '\0') {
      param_1 = (char *******)*pppppppcVar25;
      __ZdlPv();
    }
    ppppppcVar29 = pppppppcVar11[1];
    ppppppcVar28 = *pppppppcVar11;
    pppppppcVar25[2] = pppppppcVar11[2];
    pppppppcVar25[1] = ppppppcVar29;
    *pppppppcVar25 = ppppppcVar28;
    *(char *)((long)pppppppcVar11 + 0x17) = '\0';
    *(char *)pppppppcVar11 = '\0';
    ppppppcVar28 = pppppppcVar11[3];
    pppppppcVar25[4] = pppppppcVar11[4];
    pppppppcVar25[3] = ppppppcVar28;
    uVar27 = uVar22;
    pppppppcVar25 = pppppppcVar11;
  } while ((long)uVar22 <= (long)(lVar23 - 2U >> 1));
  pppppppcVar25 = pppppppcVar7 + -5;
  if (pppppppcVar11 == pppppppcVar25) {
    if (*(char *)((long)pppppppcVar11 + 0x17) < '\0') {
      param_1 = (char *******)*pppppppcVar11;
      __ZdlPv();
    }
    *pppppppcVar11 = ppppppcVar19;
    pppppppcVar11[1] = (char ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
    *(ulong *)((long)pppppppcVar11 + 0xf) = CONCAT71(uStack_70,uStack_78._7_1_);
    *(char *)((long)pppppppcVar11 + 0x17) = cVar4;
    pppppppcVar11[4] = ppppppcStack_a8;
    pppppppcVar11[3] = (char ******)pppppppcStack_b0;
  }
  else {
    if (*(char *)((long)pppppppcVar11 + 0x17) < '\0') {
      param_1 = (char *******)*pppppppcVar11;
      __ZdlPv();
    }
    ppppppcVar29 = pppppppcVar7[-4];
    ppppppcVar28 = *pppppppcVar25;
    pppppppcVar11[2] = pppppppcVar7[-3];
    pppppppcVar11[1] = ppppppcVar29;
    *pppppppcVar11 = ppppppcVar28;
    *(char *)((long)pppppppcVar7 + -0x11) = '\0';
    *(char *)(pppppppcVar7 + -5) = '\0';
    ppppppcVar28 = pppppppcVar7[-2];
    pppppppcVar11[4] = pppppppcVar7[-1];
    pppppppcVar11[3] = ppppppcVar28;
    pppppppcVar7[-5] = ppppppcVar19;
    pppppppcVar7[-4] = (char ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
    *(ulong *)((long)pppppppcVar7 + -0x19) = CONCAT71(uStack_70,uStack_78._7_1_);
    *(char *)((long)pppppppcVar7 + -0x11) = cVar4;
    pppppppcVar7[-1] = ppppppcStack_a8;
    pppppppcVar7[-2] = (char ******)pppppppcStack_b0;
    pcVar12 = (char *)((long)pppppppcVar11 + (0x28 - (long)pppppppcVar15));
    if (0x28 < (long)pcVar12) {
      uVar27 = ((ulong)pcVar12 >> 3) * -0x3333333333333333 - 2 >> 1;
      pppppppcVar18 = pppppppcVar15 + uVar27 * 5;
      pppppppcVar13 = (char *******)*pppppppcVar18;
      pppppppcVar7 = (char *******)((long)*pppppppcVar18 + (long)pppppppcVar18[1]);
      if (-1 < (char)*(byte *)((long)pppppppcVar18 + 0x17)) {
        pppppppcVar13 = pppppppcVar18;
        pppppppcVar7 = (char *******)
                       ((long)pppppppcVar18 + (ulong)*(byte *)((long)pppppppcVar18 + 0x17));
      }
      pppppppcVar14 = (char *******)((long)*pppppppcVar11 + (long)pppppppcVar11[1]);
      pppppppcVar9 = (char *******)*pppppppcVar11;
      if (-1 < (char)*(byte *)((long)pppppppcVar11 + 0x17)) {
        pppppppcVar14 =
             (char *******)((long)pppppppcVar11 + (ulong)*(byte *)((long)pppppppcVar11 + 0x17));
        pppppppcVar9 = pppppppcVar11;
      }
      do {
        if (pppppppcVar14 == pppppppcVar9) break;
        if (pppppppcVar7 == pppppppcVar13) {
LAB_1092c29a8:
          ppppppcStack_90 = pppppppcVar11[2];
          ppppppcStack_98 = pppppppcVar11[1];
          pppppppcStack_a0 = (char *******)*pppppppcVar11;
          pppppppcVar11[1] = (char ******)0x0;
          pppppppcVar11[2] = (char ******)0x0;
          *pppppppcVar11 = (char ******)0x0;
          ppppppcStack_80 = pppppppcVar11[4];
          ppppppcStack_88 = pppppppcVar11[3];
          goto LAB_1092c29cc;
        }
        pppppppcVar7 = (char *******)((long)pppppppcVar7 + -1);
        cVar4 = *(char *)((long)pppppppcVar14 + -1);
        if (*(char *)pppppppcVar7 < cVar4) goto LAB_1092c29a8;
        pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
      } while (*(char *)pppppppcVar7 <= cVar4);
    }
  }
  goto LAB_1092c2ab4;
code_r0x0001092c2c1c:
  pppppppcVar17 = (char *******)((long)pppppppcVar17 + -1);
  if (cVar4 < *(char *)pppppppcVar9) {
LAB_1092c2c30:
    if (*(char *)((long)pppppppcVar15 + 0x17) < '\0') {
      param_1 = (char *******)*pppppppcVar15;
      __ZdlPv();
    }
    pppppppcVar15[2] = ppppppcStack_90;
    pppppppcVar15[1] = ppppppcStack_98;
    *pppppppcVar15 = (char ******)pppppppcStack_a0;
    pppppppcVar15[4] = ppppppcStack_80;
    pppppppcVar15[3] = ppppppcStack_88;
    goto LAB_1092c2c58;
  }
  goto LAB_1092c2bfc;
LAB_1092c22e8:
  pppppppcVar18 = pppppppcVar13;
  pppppppcVar13 = (char *******)pppppppcVar25[5];
  pppppppcVar11 = (char *******)((long)pppppppcVar25[5] + (long)pppppppcVar25[6]);
  if (-1 < (char)*(byte *)((long)pppppppcVar25 + 0x3f)) {
    pppppppcVar13 = pppppppcVar18;
    pppppppcVar11 =
         (char *******)((long)pppppppcVar18 + (ulong)*(byte *)((long)pppppppcVar25 + 0x3f));
  }
  pppppppcVar14 = (char *******)((long)*pppppppcVar25 + (long)pppppppcVar25[1]);
  pppppppcVar9 = (char *******)*pppppppcVar25;
  if (-1 < (char)*(byte *)((long)pppppppcVar25 + 0x17)) {
    pppppppcVar14 =
         (char *******)((long)pppppppcVar25 + (ulong)*(byte *)((long)pppppppcVar25 + 0x17));
    pppppppcVar9 = pppppppcVar25;
  }
  do {
    if (pppppppcVar14 == pppppppcVar9) break;
    if (pppppppcVar11 == pppppppcVar13) {
LAB_1092c235c:
      ppppppcStack_90 = pppppppcVar18[2];
      ppppppcStack_98 = pppppppcVar18[1];
      pppppppcStack_a0 = (char *******)*pppppppcVar18;
      pppppppcVar18[1] = (char ******)0x0;
      pppppppcVar18[2] = (char ******)0x0;
      *pppppppcVar18 = (char ******)0x0;
      ppppppcStack_80 = pppppppcVar25[9];
      ppppppcStack_88 = pppppppcVar25[8];
      pppppppcVar13 = pppppppcVar18;
      goto LAB_1092c2380;
    }
    pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
    cVar4 = *(char *)((long)pppppppcVar14 + -1);
    if (*(char *)pppppppcVar11 < cVar4) goto LAB_1092c235c;
    pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
  } while (*(char *)pppppppcVar11 <= cVar4);
  goto LAB_1092c2464;
LAB_1092c2380:
  pppppppcVar11 = pppppppcVar25;
  if (*(char *)((long)pppppppcVar13 + 0x17) < '\0') {
    param_1 = (char *******)*pppppppcVar13;
    __ZdlPv();
  }
  ppppppcVar19 = *pppppppcVar11;
  pppppppcVar13[1] = pppppppcVar11[1];
  *pppppppcVar13 = ppppppcVar19;
  pppppppcVar13[2] = pppppppcVar11[2];
  *(char *)((long)pppppppcVar11 + 0x17) = '\0';
  *(char *)pppppppcVar11 = '\0';
  ppppppcVar19 = pppppppcVar11[3];
  pppppppcVar13[4] = pppppppcVar11[4];
  pppppppcVar13[3] = ppppppcVar19;
  pppppppcVar13 = pppppppcVar15;
  if (pppppppcVar11 != pppppppcVar15) {
    pppppppcVar25 = pppppppcVar11 + -5;
    pppppppcVar9 = pppppppcStack_a0;
    pppppppcVar14 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
    if (-1 < (long)ppppppcStack_90) {
      pppppppcVar9 = (char *******)&pppppppcStack_a0;
      pppppppcVar14 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
    }
    pppppppcVar8 = (char *******)((long)*pppppppcVar25 + (long)pppppppcVar11[-4]);
    pppppppcVar17 = (char *******)*pppppppcVar25;
    if (-1 < (char)*(byte *)((long)pppppppcVar11 + -0x11)) {
      pppppppcVar8 = (char *******)
                     ((long)pppppppcVar25 + (ulong)*(byte *)((long)pppppppcVar11 + -0x11));
      pppppppcVar17 = pppppppcVar25;
    }
    while( true ) {
      pppppppcVar13 = pppppppcVar11;
      if (pppppppcVar8 == pppppppcVar17) goto LAB_1092c243c;
      if (pppppppcVar14 == pppppppcVar9) break;
      pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
      cVar4 = *(char *)((long)pppppppcVar8 + -1);
      if (*(char *)pppppppcVar14 < cVar4) break;
      pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1);
      if (cVar4 < *(char *)pppppppcVar14) goto LAB_1092c243c;
    }
    goto LAB_1092c2380;
  }
LAB_1092c243c:
  if (*(char *)((long)pppppppcVar13 + 0x17) < '\0') {
    param_1 = (char *******)*pppppppcVar13;
    __ZdlPv();
  }
  pppppppcVar13[2] = ppppppcStack_90;
  pppppppcVar13[1] = ppppppcStack_98;
  *pppppppcVar13 = (char ******)pppppppcStack_a0;
  pppppppcVar11[4] = ppppppcStack_80;
  pppppppcVar11[3] = ppppppcStack_88;
LAB_1092c2464:
  pppppppcVar13 = pppppppcVar18 + 5;
  pppppppcVar25 = pppppppcVar18;
  if (pppppppcVar18 + 5 == pppppppcVar7) goto LAB_1092c2c64;
  goto LAB_1092c22e8;
code_r0x0001092c1bc4:
  pppppppcVar14 = (char *******)((long)pppppppcVar14 + -1);
  pppppppcVar17 = (char *******)((long)pppppppcVar17 + -1);
  if (cVar5 < cVar4) {
LAB_1092c1bd8:
    pppppppcVar9 = pppppppcStack_c0;
    if (pppppppcVar8 != pppppppcStack_b8) goto LAB_1092c1be0;
    goto LAB_1092c1e10;
  }
  goto LAB_1092c1ba4;
LAB_1092c1e10:
  pppppppcVar14 = pppppppcVar9;
  if (pppppppcVar18 < pppppppcVar9) {
    pppppppcVar14 = pppppppcVar9 + -5;
    uStack_78._0_7_ = SUB87(pppppppcVar14,0);
    uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar14 >> 0x38);
    pppppppcVar8 = (char *******)((long)pppppppcVar9[-5] + (long)pppppppcVar9[-4]);
    pppppppcVar16 = pppppppcVar15;
    pppppppcVar17 = (char *******)pppppppcVar9[-5];
    if (-1 < (char)*(byte *)((long)pppppppcVar9 + -0x11)) {
      pppppppcVar8 = (char *******)
                     ((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcVar9 + -0x11));
      pppppppcVar17 = pppppppcVar14;
    }
    do {
      pppppppcVar9 = pppppppcVar14;
      if (pppppppcVar16 == pppppppcVar7) break;
      if (pppppppcVar8 == pppppppcVar17) goto LAB_1092c1e18;
      cVar4 = *(char *)((long)pppppppcVar8 + -1);
      cVar5 = *(char *)((long)pppppppcVar16 + -1);
      if (cVar4 < cVar5) goto LAB_1092c1e18;
      pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1);
      pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
    } while (cVar4 <= cVar5);
    goto LAB_1092c1e10;
  }
LAB_1092c1e18:
  pppppppcVar9 = pppppppcVar18;
  if (pppppppcVar18 < pppppppcVar14) {
LAB_1092c1e24:
    FUN_1092a6410(&pppppppcStack_b0,&uStack_78);
    pppppppcVar17 = pppppppcStack_b0;
LAB_1092c1e34:
    pppppppcVar9 = pppppppcVar17 + 5;
    pppppppcStack_b0 = pppppppcVar9;
    pppppppcVar16 = (char *******)((long)*pppppppcVar9 + (long)pppppppcVar17[6]);
    pppppppcVar20 = pppppppcVar15;
    pppppppcVar8 = (char *******)*pppppppcVar9;
    if (-1 < (char)*(byte *)((long)pppppppcVar17 + 0x3f)) {
      pppppppcVar16 =
           (char *******)((long)pppppppcVar9 + (ulong)*(byte *)((long)pppppppcVar17 + 0x3f));
      pppppppcVar8 = pppppppcVar9;
    }
LAB_1092c1e60:
    if (pppppppcVar20 == pppppppcVar7) goto LAB_1092c1e88;
    pppppppcVar17 = pppppppcVar9;
    if (pppppppcVar16 != pppppppcVar8) {
      cVar4 = *(char *)((long)pppppppcVar16 + -1);
      cVar5 = *(char *)((long)pppppppcVar20 + -1);
      if (cVar5 <= cVar4) goto code_r0x0001092c1e80;
    }
    goto LAB_1092c1e34;
  }
LAB_1092c1ef0:
  pppppppcVar15 = pppppppcVar9 + -5;
  pppppppcStack_b0 = pppppppcVar9;
  if (pppppppcVar15 != pppppppcVar11) {
    if (*(char *)((long)pppppppcVar11 + 0x17) < '\0') {
      __ZdlPv(*pppppppcVar11);
    }
    ppppppcVar28 = pppppppcVar9[-4];
    ppppppcVar19 = *pppppppcVar15;
    pppppppcVar11[2] = pppppppcVar9[-3];
    pppppppcVar11[1] = ppppppcVar28;
    *pppppppcVar11 = ppppppcVar19;
    *(char *)((long)pppppppcVar9 + -0x11) = '\0';
    *(char *)(pppppppcVar9 + -5) = '\0';
    ppppppcVar19 = pppppppcVar9[-2];
    pppppppcVar11[4] = pppppppcVar9[-1];
    pppppppcVar11[3] = ppppppcVar19;
  }
  pppppppcVar9[-3] = ppppppcStack_90;
  pppppppcVar9[-4] = ppppppcStack_98;
  *pppppppcVar15 = (char ******)pppppppcStack_a0;
  ppppppcStack_90 = (char ******)((ulong)ppppppcStack_90 & 0xffffffffffffff);
  pppppppcStack_a0 = (char *******)((ulong)pppppppcStack_a0 & 0xffffffffffffff00);
  pppppppcVar9[-1] = ppppppcStack_80;
  pppppppcVar9[-2] = ppppppcStack_88;
  if (pppppppcVar18 < pppppppcVar14) {
LAB_1092c1f80:
    param_3 = pppppppcVar25;
    FUN_1092c19ec();
    goto LAB_1092c21f0;
  }
  pppppppcVar7 = pppppppcStack_b8;
  func_0x0001092c32d0(pppppppcStack_b8,pppppppcVar15);
  param_1 = pppppppcVar9;
  param_2 = pppppppcStack_c0;
  func_0x0001092c32d0();
  if ((int)param_1 == 0) {
    if (((ulong)pppppppcVar7 & 1) == 0) goto LAB_1092c1f80;
    goto LAB_1092c21f4;
  }
  if (((ulong)pppppppcVar7 & 1) != 0) goto LAB_1092c2c64;
  pppppppcStack_c0 = pppppppcVar15;
  goto LAB_1092c1a3c;
LAB_1092c1be0:
  pppppppcVar14 = pppppppcVar9 + -5;
  uStack_78._0_7_ = SUB87(pppppppcVar14,0);
  uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar14 >> 0x38);
  pppppppcVar8 = (char *******)((long)pppppppcVar9[-5] + (long)pppppppcVar9[-4]);
  pppppppcVar16 = pppppppcVar15;
  pppppppcVar17 = (char *******)pppppppcVar9[-5];
  if (-1 < (char)*(byte *)((long)pppppppcVar9 + -0x11)) {
    pppppppcVar8 = (char *******)
                   ((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcVar9 + -0x11));
    pppppppcVar17 = pppppppcVar14;
  }
  do {
    pppppppcVar9 = pppppppcVar14;
    if (pppppppcVar16 == pppppppcVar7) break;
    if (pppppppcVar8 == pppppppcVar17) goto LAB_1092c1e18;
    pppppppcVar8 = (char *******)((long)pppppppcVar8 + -1);
    pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
    if (*(char *)pppppppcVar8 < *(char *)pppppppcVar16) goto LAB_1092c1e18;
  } while (*(char *)pppppppcVar8 <= *(char *)pppppppcVar16);
  goto LAB_1092c1be0;
code_r0x0001092c1e80:
  pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
  pppppppcVar20 = (char *******)((long)pppppppcVar20 + -1);
  if (cVar5 < cVar4) {
LAB_1092c1e88:
    pppppppcVar17 = (char *******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
    goto LAB_1092c1e8c;
  }
  goto LAB_1092c1e60;
LAB_1092c1e8c:
  pppppppcVar21 = pppppppcVar17 + -5;
  uStack_78._0_7_ = SUB87(pppppppcVar21,0);
  uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar21 >> 0x38);
  pppppppcVar16 = (char *******)((long)pppppppcVar17[-5] + (long)pppppppcVar17[-4]);
  pppppppcVar20 = pppppppcVar15;
  pppppppcVar8 = (char *******)pppppppcVar17[-5];
  if (-1 < (char)*(byte *)((long)pppppppcVar17 + -0x11)) {
    pppppppcVar16 =
         (char *******)((long)pppppppcVar21 + (ulong)*(byte *)((long)pppppppcVar17 + -0x11));
    pppppppcVar8 = pppppppcVar21;
  }
  do {
    pppppppcVar17 = pppppppcVar21;
    if (pppppppcVar20 == pppppppcVar7) break;
    if (pppppppcVar16 == pppppppcVar8) {
LAB_1092c1ee8:
      if (pppppppcVar21 <= pppppppcVar9) goto LAB_1092c1ef0;
      goto LAB_1092c1e24;
    }
    pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
    pppppppcVar20 = (char *******)((long)pppppppcVar20 + -1);
    if (*(char *)pppppppcVar16 < *(char *)pppppppcVar20) goto LAB_1092c1ee8;
  } while (*(char *)pppppppcVar16 <= *(char *)pppppppcVar20);
  goto LAB_1092c1e8c;
LAB_1092c2140:
  while( true ) {
    if (pppppppcVar16 == pppppppcVar8) goto LAB_1092c2168;
    pppppppcVar17 = pppppppcVar14;
    if (pppppppcVar20 != pppppppcVar18) break;
LAB_1092c2110:
    pppppppcVar14 = pppppppcVar17 + -5;
    uStack_78._0_7_ = SUB87(pppppppcVar14,0);
    uStack_78._7_1_ = (undefined1)((ulong)pppppppcVar14 >> 0x38);
    pppppppcVar16 = (char *******)((long)pppppppcVar17[-5] + (long)pppppppcVar17[-4]);
    pppppppcVar20 = pppppppcVar9;
    pppppppcVar8 = (char *******)pppppppcVar17[-5];
    if (-1 < (char)*(byte *)((long)pppppppcVar17 + -0x11)) {
      pppppppcVar16 =
           (char *******)((long)pppppppcVar14 + (ulong)*(byte *)((long)pppppppcVar17 + -0x11));
      pppppppcVar8 = pppppppcVar14;
    }
  }
  cVar4 = *(char *)((long)pppppppcVar20 + -1);
  cVar5 = *(char *)((long)pppppppcVar16 + -1);
  if (cVar4 < cVar5) goto LAB_1092c2110;
  pppppppcVar16 = (char *******)((long)pppppppcVar16 + -1);
  pppppppcVar20 = (char *******)((long)pppppppcVar20 + -1);
  if (cVar5 < cVar4) goto LAB_1092c2168;
  goto LAB_1092c2140;
LAB_1092c29cc:
  pppppppcVar13 = pppppppcVar18;
  if (*(char *)((long)pppppppcVar11 + 0x17) < '\0') {
    param_1 = (char *******)*pppppppcVar11;
    __ZdlPv();
  }
  ppppppcVar28 = pppppppcVar13[1];
  ppppppcVar19 = *pppppppcVar13;
  pppppppcVar11[2] = pppppppcVar13[2];
  pppppppcVar11[1] = ppppppcVar28;
  *pppppppcVar11 = ppppppcVar19;
  *(char *)((long)pppppppcVar13 + 0x17) = '\0';
  *(char *)pppppppcVar13 = '\0';
  ppppppcVar19 = pppppppcVar13[3];
  pppppppcVar11[4] = pppppppcVar13[4];
  pppppppcVar11[3] = ppppppcVar19;
  if (uVar27 != 0) {
    uVar27 = uVar27 - 1 >> 1;
    pppppppcVar18 = pppppppcVar15 + uVar27 * 5;
    pppppppcVar7 = (char *******)*pppppppcVar18;
    pppppppcVar9 = (char *******)((long)*pppppppcVar18 + (long)pppppppcVar18[1]);
    if (-1 < (char)*(byte *)((long)pppppppcVar18 + 0x17)) {
      pppppppcVar7 = pppppppcVar18;
      pppppppcVar9 = (char *******)
                     ((long)pppppppcVar18 + (ulong)*(byte *)((long)pppppppcVar18 + 0x17));
    }
    pppppppcVar17 = (char *******)((long)pppppppcStack_a0 + (long)ppppppcStack_98);
    pppppppcVar14 = pppppppcStack_a0;
    if (-1 < (long)ppppppcStack_90) {
      pppppppcVar17 = (char *******)((long)&pppppppcStack_a0 + ((ulong)ppppppcStack_90 >> 0x38));
      pppppppcVar14 = (char *******)&pppppppcStack_a0;
    }
    while( true ) {
      if (pppppppcVar17 == pppppppcVar14) goto LAB_1092c2a88;
      pppppppcVar11 = pppppppcVar13;
      if (pppppppcVar9 == pppppppcVar7) break;
      pppppppcVar9 = (char *******)((long)pppppppcVar9 + -1);
      cVar4 = *(char *)((long)pppppppcVar17 + -1);
      if (*(char *)pppppppcVar9 < cVar4) break;
      pppppppcVar17 = (char *******)((long)pppppppcVar17 + -1);
      if (cVar4 < *(char *)pppppppcVar9) goto LAB_1092c2a88;
    }
    goto LAB_1092c29cc;
  }
LAB_1092c2a88:
  if (*(char *)((long)pppppppcVar13 + 0x17) < '\0') {
    param_1 = (char *******)*pppppppcVar13;
    __ZdlPv();
  }
  pppppppcVar13[2] = ppppppcStack_90;
  pppppppcVar13[1] = ppppppcStack_98;
  *pppppppcVar13 = (char ******)pppppppcStack_a0;
  pppppppcVar13[4] = ppppppcStack_80;
  pppppppcVar13[3] = ppppppcStack_88;
LAB_1092c2ab4:
  bVar3 = lVar23 < 3;
  pppppppcVar7 = pppppppcVar25;
  lVar23 = lVar23 + -1;
  if (bVar3) goto LAB_1092c2c64;
  goto LAB_1092c2760;
LAB_1092c2d8c:
  do {
    if (pppppppcVar13 == pppppppcVar25) break;
    if (pppppppcVar15 == pppppppcVar7) {
LAB_1092c2eb0:
      pppppppcVar25 = (char *******)&pppppppcStack_d8;
      goto LAB_1092c2ebc;
    }
    cVar4 = *(char *)((long)pppppppcVar15 + -1);
    pppppppcVar13 = (char *******)((long)pppppppcVar13 + -1);
    if (cVar4 < *(char *)pppppppcVar13) goto LAB_1092c2eb0;
    pppppppcVar15 = (char *******)((long)pppppppcVar15 + -1);
  } while (cVar4 <= *(char *)pppppppcVar13);
  FUN_1092a6410(&pppppppcStack_d8,&pppppppcStack_e0);
  pppppppcVar25 = (char *******)*pppppppcStack_e8;
  pppppppcVar13 = (char *******)((long)*pppppppcStack_e8 + (long)pppppppcStack_e8[1]);
  if (-1 < (char)*(byte *)((long)pppppppcStack_e8 + 0x17)) {
    pppppppcVar25 = pppppppcStack_e8;
    pppppppcVar13 =
         (char *******)((long)pppppppcStack_e8 + (ulong)*(byte *)((long)pppppppcStack_e8 + 0x17));
  }
  pppppppcVar15 = (char *******)((long)*pppppppcStack_e0 + (long)pppppppcStack_e0[1]);
  pppppppcVar7 = (char *******)*pppppppcStack_e0;
  if (-1 < (char)*(byte *)((long)pppppppcStack_e0 + 0x17)) {
    pppppppcVar15 =
         (char *******)((long)pppppppcStack_e0 + (ulong)*(byte *)((long)pppppppcStack_e0 + 0x17));
    pppppppcVar7 = pppppppcStack_e0;
  }
  while( true ) {
    if (pppppppcVar15 == pppppppcVar7) {
      return;
    }
    if (pppppppcVar13 == pppppppcVar25) break;
    pppppppcVar13 = (char *******)((long)pppppppcVar13 + -1);
    cVar4 = *(char *)((long)pppppppcVar15 + -1);
    if (*(char *)pppppppcVar13 < cVar4) break;
    pppppppcVar15 = (char *******)((long)pppppppcVar15 + -1);
    if (cVar4 < *(char *)pppppppcVar13) {
      return;
    }
  }
  pppppppcVar25 = (char *******)&pppppppcStack_e0;
LAB_1092c2ebc:
  pppppppcVar13 = (char *******)&pppppppcStack_e8;
  goto LAB_1092c2ecc;
LAB_1092c2260:
  do {
    pppppppcStack_c0 = pppppppcVar15;
    if (pppppppcVar18 == pppppppcVar11) break;
    if (pppppppcVar7 == pppppppcVar25) {
LAB_1092c2ac4:
      param_1 = (char *******)&pppppppcStack_b8;
      FUN_1092a6410();
      param_2 = pppppppcVar13;
      break;
    }
    pppppppcVar7 = (char *******)((long)pppppppcVar7 + -1);
    cVar4 = *(char *)((long)pppppppcVar18 + -1);
    if (*(char *)pppppppcVar7 < cVar4) goto LAB_1092c2ac4;
    pppppppcVar18 = (char *******)((long)pppppppcVar18 + -1);
  } while (*(char *)pppppppcVar7 <= cVar4);
LAB_1092c2c64:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1092c2ca0;
  pppppppcVar25 = (char *******)*param_2;
  pppppppcVar13 = (char *******)((long)*param_2 + (long)param_2[1]);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pppppppcVar25 = param_2;
    pppppppcVar13 = (char *******)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
  }
  pppppppcVar15 = (char *******)((long)*param_1 + (long)param_1[1]);
  pppppppcVar11 = pppppppcVar13;
  pppppppcVar7 = (char *******)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    pppppppcVar15 = (char *******)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    pppppppcVar7 = param_1;
  }
  do {
    pppppppcStack_e8 = param_3;
    pppppppcStack_e0 = param_2;
    pppppppcStack_d8 = param_1;
    puStack_d0 = &stack0xfffffffffffffff0;
    if (pppppppcVar15 == pppppppcVar7) break;
    if (pppppppcVar11 == pppppppcVar25) {
LAB_1092c2d6c:
      pppppppcVar15 = (char *******)((long)*param_3 + (long)param_3[1]);
      pppppppcVar7 = (char *******)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        pppppppcVar15 = (char *******)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
        pppppppcVar7 = param_3;
      }
      goto LAB_1092c2d8c;
    }
    cVar4 = *(char *)((long)pppppppcVar11 + -1);
    cVar5 = *(char *)((long)pppppppcVar15 + -1);
    if (cVar4 < cVar5) goto LAB_1092c2d6c;
    pppppppcVar15 = (char *******)((long)pppppppcVar15 + -1);
    pppppppcVar11 = (char *******)((long)pppppppcVar11 + -1);
  } while (cVar4 <= cVar5);
  pppppppcVar15 = (char *******)((long)*param_3 + (long)param_3[1]);
  pppppppcVar7 = (char *******)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    pppppppcVar15 = (char *******)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    pppppppcVar7 = param_3;
  }
  while( true ) {
    if (pppppppcVar13 == pppppppcVar25) {
      return;
    }
    if (pppppppcVar15 == pppppppcVar7) break;
    cVar4 = *(char *)((long)pppppppcVar15 + -1);
    pppppppcVar13 = (char *******)((long)pppppppcVar13 + -1);
    if (cVar4 < *(char *)pppppppcVar13) break;
    pppppppcVar15 = (char *******)((long)pppppppcVar15 + -1);
    if (*(char *)pppppppcVar13 < cVar4) {
      return;
    }
  }
  FUN_1092a6410(&pppppppcStack_e0,&pppppppcStack_e8);
  pppppppcVar25 = (char *******)*pppppppcStack_e0;
  pppppppcVar13 = (char *******)((long)*pppppppcStack_e0 + (long)pppppppcStack_e0[1]);
  if (-1 < (char)*(byte *)((long)pppppppcStack_e0 + 0x17)) {
    pppppppcVar25 = pppppppcStack_e0;
    pppppppcVar13 =
         (char *******)((long)pppppppcStack_e0 + (ulong)*(byte *)((long)pppppppcStack_e0 + 0x17));
  }
  pppppppcVar15 = (char *******)((long)*pppppppcStack_d8 + (long)pppppppcStack_d8[1]);
  pppppppcVar7 = (char *******)*pppppppcStack_d8;
  if (-1 < (char)*(byte *)((long)pppppppcStack_d8 + 0x17)) {
    pppppppcVar15 =
         (char *******)((long)pppppppcStack_d8 + (ulong)*(byte *)((long)pppppppcStack_d8 + 0x17));
    pppppppcVar7 = pppppppcStack_d8;
  }
  while( true ) {
    if (pppppppcVar15 == pppppppcVar7) {
      return;
    }
    if (pppppppcVar13 == pppppppcVar25) break;
    pppppppcVar13 = (char *******)((long)pppppppcVar13 + -1);
    cVar4 = *(char *)((long)pppppppcVar15 + -1);
    if (*(char *)pppppppcVar13 < cVar4) break;
    pppppppcVar15 = (char *******)((long)pppppppcVar15 + -1);
    if (cVar4 < *(char *)pppppppcVar13) {
      return;
    }
  }
  pppppppcVar25 = (char *******)&pppppppcStack_d8;
  pppppppcVar13 = (char *******)&pppppppcStack_e0;
LAB_1092c2ecc:
  FUN_1092a6410(pppppppcVar25,pppppppcVar13);
  return;
}



/* Entry: 1092c2ca0; end: 1092c2edb;  */

void FUN_1092c2ca0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plStack_28;
  long *plStack_20;
  long *plStack_18;
  
  plVar2 = (long *)*param_2;
  plVar7 = (long *)(*param_2 + param_2[1]);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
    plVar7 = (long *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
  }
  plVar8 = (long *)(*param_1 + param_1[1]);
  plVar9 = plVar7;
  plVar1 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar8 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    plVar1 = param_1;
  }
  do {
    plStack_28 = param_3;
    plStack_20 = param_2;
    plStack_18 = param_1;
    if (plVar8 == plVar1) break;
    if (plVar9 == plVar2) {
LAB_1092c2d6c:
      plVar8 = (long *)(*param_3 + param_3[1]);
      plVar1 = (long *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        plVar8 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
        plVar1 = param_3;
      }
      goto LAB_1092c2d8c;
    }
    cVar3 = *(char *)((long)plVar9 + -1);
    cVar4 = *(char *)((long)plVar8 + -1);
    if (cVar3 < cVar4) goto LAB_1092c2d6c;
    plVar8 = (long *)((long)plVar8 + -1);
    plVar9 = (long *)((long)plVar9 + -1);
  } while (cVar3 <= cVar4);
  plVar8 = (long *)(*param_3 + param_3[1]);
  plVar1 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar8 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    plVar1 = param_3;
  }
  while( true ) {
    if (plVar7 == plVar2) {
      return;
    }
    if (plVar8 == plVar1) break;
    cVar3 = *(char *)((long)plVar8 + -1);
    plVar7 = (long *)((long)plVar7 + -1);
    if (cVar3 < *(char *)plVar7) break;
    plVar8 = (long *)((long)plVar8 + -1);
    if (*(char *)plVar7 < cVar3) {
      return;
    }
  }
  FUN_1092a6410(&plStack_20,&plStack_28);
  plVar2 = (long *)*plStack_20;
  plVar7 = (long *)(*plStack_20 + plStack_20[1]);
  if (-1 < (char)*(byte *)((long)plStack_20 + 0x17)) {
    plVar2 = plStack_20;
    plVar7 = (long *)((long)plStack_20 + (ulong)*(byte *)((long)plStack_20 + 0x17));
  }
  plVar8 = (long *)(*plStack_18 + plStack_18[1]);
  plVar1 = (long *)*plStack_18;
  if (-1 < (char)*(byte *)((long)plStack_18 + 0x17)) {
    plVar8 = (long *)((long)plStack_18 + (ulong)*(byte *)((long)plStack_18 + 0x17));
    plVar1 = plStack_18;
  }
  while( true ) {
    if (plVar8 == plVar1) {
      return;
    }
    if (plVar7 == plVar2) break;
    plVar7 = (long *)((long)plVar7 + -1);
    cVar3 = *(char *)((long)plVar8 + -1);
    if (*(char *)plVar7 < cVar3) break;
    plVar8 = (long *)((long)plVar8 + -1);
    if (cVar3 < *(char *)plVar7) {
      return;
    }
  }
  pplVar5 = &plStack_18;
  pplVar6 = &plStack_20;
LAB_1092c2ecc:
  FUN_1092a6410(pplVar5,pplVar6);
  return;
LAB_1092c2d8c:
  do {
    if (plVar7 == plVar2) break;
    if (plVar8 == plVar1) {
LAB_1092c2eb0:
      pplVar5 = &plStack_18;
      goto LAB_1092c2ebc;
    }
    cVar3 = *(char *)((long)plVar8 + -1);
    plVar7 = (long *)((long)plVar7 + -1);
    if (cVar3 < *(char *)plVar7) goto LAB_1092c2eb0;
    plVar8 = (long *)((long)plVar8 + -1);
  } while (cVar3 <= *(char *)plVar7);
  FUN_1092a6410(&plStack_18,&plStack_20);
  plVar2 = (long *)*plStack_28;
  plVar7 = (long *)(*plStack_28 + plStack_28[1]);
  if (-1 < (char)*(byte *)((long)plStack_28 + 0x17)) {
    plVar2 = plStack_28;
    plVar7 = (long *)((long)plStack_28 + (ulong)*(byte *)((long)plStack_28 + 0x17));
  }
  plVar8 = (long *)(*plStack_20 + plStack_20[1]);
  plVar1 = (long *)*plStack_20;
  if (-1 < (char)*(byte *)((long)plStack_20 + 0x17)) {
    plVar8 = (long *)((long)plStack_20 + (ulong)*(byte *)((long)plStack_20 + 0x17));
    plVar1 = plStack_20;
  }
  while( true ) {
    if (plVar8 == plVar1) {
      return;
    }
    if (plVar7 == plVar2) break;
    plVar7 = (long *)((long)plVar7 + -1);
    cVar3 = *(char *)((long)plVar8 + -1);
    if (*(char *)plVar7 < cVar3) break;
    plVar8 = (long *)((long)plVar8 + -1);
    if (cVar3 < *(char *)plVar7) {
      return;
    }
  }
  pplVar5 = &plStack_20;
LAB_1092c2ebc:
  pplVar6 = &plStack_28;
  goto LAB_1092c2ecc;
}



/* Entry: 1092c2edc; end: 1092c308f;  */

void FUN_1092c2edc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_50 = param_4;
  plStack_48 = param_3;
  plStack_40 = param_2;
  plStack_38 = param_1;
  FUN_1092c2ca0();
  plVar2 = (long *)*param_4;
  plVar4 = (long *)(*param_4 + param_4[1]);
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    plVar2 = param_4;
    plVar4 = (long *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x17));
  }
  plVar5 = (long *)(*param_3 + param_3[1]);
  plVar1 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar5 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    plVar1 = param_3;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_48,&plStack_50);
  plVar2 = (long *)*plStack_48;
  plVar4 = (long *)(*plStack_48 + plStack_48[1]);
  if (-1 < (char)*(byte *)((long)plStack_48 + 0x17)) {
    plVar2 = plStack_48;
    plVar4 = (long *)((long)plStack_48 + (ulong)*(byte *)((long)plStack_48 + 0x17));
  }
  plVar5 = (long *)(*param_2 + param_2[1]);
  plVar1 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar5 = (long *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
    plVar1 = param_2;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_40,&plStack_48);
  plVar2 = (long *)*plStack_40;
  plVar4 = (long *)(*plStack_40 + plStack_40[1]);
  if (-1 < (char)*(byte *)((long)plStack_40 + 0x17)) {
    plVar2 = plStack_40;
    plVar4 = (long *)((long)plStack_40 + (ulong)*(byte *)((long)plStack_40 + 0x17));
  }
  plVar5 = (long *)(*param_1 + param_1[1]);
  plVar1 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar5 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    plVar1 = param_1;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_38,&plStack_40);
  return;
}



/* Entry: 1092c3090; end: 1092c35ef;  */

void FUN_1092c3090(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plStack_68 = param_5;
  plStack_60 = param_4;
  plStack_58 = param_3;
  plStack_50 = param_2;
  plStack_48 = param_1;
  FUN_1092c2edc();
  plVar2 = (long *)*param_5;
  plVar4 = (long *)(*param_5 + param_5[1]);
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    plVar2 = param_5;
    plVar4 = (long *)((long)param_5 + (ulong)*(byte *)((long)param_5 + 0x17));
  }
  plVar5 = (long *)(*param_4 + param_4[1]);
  plVar1 = (long *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    plVar5 = (long *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x17));
    plVar1 = param_4;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_60,&plStack_68);
  plVar2 = (long *)*plStack_60;
  plVar4 = (long *)(*plStack_60 + plStack_60[1]);
  if (-1 < (char)*(byte *)((long)plStack_60 + 0x17)) {
    plVar2 = plStack_60;
    plVar4 = (long *)((long)plStack_60 + (ulong)*(byte *)((long)plStack_60 + 0x17));
  }
  plVar5 = (long *)(*param_3 + param_3[1]);
  plVar1 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    plVar5 = (long *)((long)param_3 + (ulong)*(byte *)((long)param_3 + 0x17));
    plVar1 = param_3;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_58,&plStack_60);
  plVar2 = (long *)*plStack_58;
  plVar4 = (long *)(*plStack_58 + plStack_58[1]);
  if (-1 < (char)*(byte *)((long)plStack_58 + 0x17)) {
    plVar2 = plStack_58;
    plVar4 = (long *)((long)plStack_58 + (ulong)*(byte *)((long)plStack_58 + 0x17));
  }
  plVar5 = (long *)(*param_2 + param_2[1]);
  plVar1 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar5 = (long *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x17));
    plVar1 = param_2;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_50,&plStack_58);
  plVar2 = (long *)*plStack_50;
  plVar4 = (long *)(*plStack_50 + plStack_50[1]);
  if (-1 < (char)*(byte *)((long)plStack_50 + 0x17)) {
    plVar2 = plStack_50;
    plVar4 = (long *)((long)plStack_50 + (ulong)*(byte *)((long)plStack_50 + 0x17));
  }
  plVar5 = (long *)(*param_1 + param_1[1]);
  plVar1 = (long *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar5 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
    plVar1 = param_1;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (plVar4 == plVar2) break;
    plVar4 = (long *)((long)plVar4 + -1);
    cVar3 = *(char *)((long)plVar5 + -1);
    if (*(char *)plVar4 < cVar3) break;
    plVar5 = (long *)((long)plVar5 + -1);
    if (cVar3 < *(char *)plVar4) {
      return;
    }
  }
  FUN_1092a6410(&plStack_48,&plStack_50);
  return;
}



/* Entry: 1092c35f0; end: 1092c3637;  */

long * FUN_1092c35f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092c3638; end: 1092c37f7;  */

undefined *** FUN_1092c3638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  byte bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined **appuStack_208 [2];
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined1 auStack_1e8 [56];
  undefined8 uStack_1b0;
  char cStack_199;
  undefined **appuStack_188 [19];
  undefined1 uStack_e9;
  undefined1 auStack_e8 [64];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte abStack_78 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xa54ff53a3c6ef372;
  uStack_98 = 0xbb67ae856a09e667;
  uStack_80 = 0x5be0cd191f83d9ab;
  uStack_88 = 0x9b05688c510e527f;
  FUN_1092c3e44(auStack_e8,param_2,param_3);
  FUN_1092c3ecc(auStack_e8,abStack_78);
  FUN_1092a988c(appuStack_208);
  lVar8 = 0;
  do {
    bVar3 = abStack_78[lVar8];
    *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) =
         *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) & 0xffffffb5 | 8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_1f8,bVar3 >> 4);
    *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) =
         *(uint *)((long)&ppuStack_1f0 + (long)ppuStack_1f8[-3]) & 0xffffffb5 | 8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&ppuStack_1f8,bVar3 & 0xf);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x20);
  FUN_10926dc5c(param_1,&ppuStack_1f0,&uStack_e9);
  appuStack_208[0] = &PTR_SUB_1108a5a38;
  ppuStack_1f8 = &PTR_DAT_1108a5a60;
  appuStack_188[0] = &PTR_DAT_1108a5a88;
  ppuStack_1f0 = &PTR_DAT_11088d7b0;
  if (cStack_199 < '\0') {
    __ZdlPv(uStack_1b0);
  }
  ppuStack_1f0 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1e8);
  iVar6 = 0x108a5aa0;
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_208);
  pppuVar4 = appuStack_188;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x000105673d7c(appuStack_208);
  __Unwind_Resume();
  uVar7 = 0x81113ed5;
  *(undefined4 *)pppuVar4 = 0x81113ed5;
  lVar8 = 1;
  do {
    uVar7 = (int)lVar8 + (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965;
    *(uint *)((long)pppuVar4 + lVar8 * 4) = uVar7;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x270);
  pppuVar4[0x138] = (undefined **)0x0;
  *(undefined2 *)(pppuVar4 + 0x139) = 0xff00;
  pppuVar5 = pppuVar4 + 0x139;
  FUN_1092c3ab4(pppuVar5,pppuVar4,pppuVar4 + 0x139);
  *(char *)((long)pppuVar4 + 0x9ca) = (char)pppuVar5;
  pppuVar4[0x13a] = (undefined **)0x1000;
  ppuVar1 = (undefined **)0x1092c3970;
  if (iVar6 != 1) {
    ppuVar1 = (undefined **)0x1092c3a0c;
  }
  ppuVar2 = (undefined **)FUN_1092c3954;
  if (iVar6 != 0) {
    ppuVar2 = ppuVar1;
  }
  pppuVar4[0x13b] = ppuVar2;
  return pppuVar4;
}



/* Entry: 1092c37f8; end: 1092c389f;  */

undefined4 * FUN_1092c37f8(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = 0x81113ed5;
  *param_1 = 0x81113ed5;
  lVar5 = 1;
  do {
    uVar4 = (int)lVar5 + (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965;
    param_1[lVar5] = uVar4;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined2 *)(param_1 + 0x272) = 0xff00;
  puVar3 = param_1 + 0x272;
  FUN_1092c3ab4(puVar3,param_1,param_1 + 0x272);
  *(char *)((long)param_1 + 0x9ca) = (char)puVar3;
  *(undefined8 *)(param_1 + 0x274) = 0x1000;
  pcVar1 = (code *)0x1092c3970;
  if (param_2 != 1) {
    pcVar1 = (code *)0x1092c3a0c;
  }
  pcVar2 = FUN_1092c3954;
  if (param_2 != 0) {
    pcVar2 = pcVar1;
  }
  *(code **)(param_1 + 0x276) = pcVar2;
  return param_1;
}



/* Entry: 1092c38a0; end: 1092c3953;  */

ulong FUN_1092c38a0(long param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 <= param_5) {
    param_5 = param_3;
  }
  if (param_5 != 0) {
    uVar4 = 0;
    uVar3 = *(ulong *)(param_1 + 0x9d0);
    do {
      uVar1 = param_5 - uVar4;
      if (uVar3 <= param_5 - uVar4) {
        uVar1 = uVar3;
      }
      (**(code **)(param_1 + 0x9d8))
                (param_2 + uVar4,param_4 + uVar4,uVar1,*(undefined1 *)(param_1 + 0x9ca));
      uVar3 = *(long *)(param_1 + 0x9d0) - uVar1;
      *(ulong *)(param_1 + 0x9d0) = uVar3;
      if (uVar3 == 0) {
        lVar2 = param_1 + 0x9c8;
        FUN_1092c3ab4(lVar2,param_1,param_1 + 0x9c8);
        *(char *)(param_1 + 0x9ca) = (char)lVar2;
        *(undefined8 *)(param_1 + 0x9d0) = 0x1000;
        uVar3 = 0x1000;
      }
      uVar4 = uVar1 + uVar4;
    } while (uVar4 < param_5);
  }
  return param_5;
}



/* Entry: 1092c3954; end: 1092c3ab3;  */

void FUN_1092c3954(byte *param_1,byte *param_2,long param_3,byte param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_2 = *param_1 ^ param_4;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 1092c3ab4; end: 1092c3b7f;  */

uint FUN_1092c3ab4(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar7 = (uint)param_3[1];
  iVar5 = (uint)param_3[1] - (uint)*param_3;
  if (iVar5 != 0) {
    uVar2 = iVar5 + 1;
    if (uVar2 == 0) {
      func_0x000107c284a0(param_2);
      uVar7 = (uint)param_2;
    }
    else {
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        uVar7 = 0x80000000;
        do {
          iVar5 = iVar5 + 1;
          uVar1 = uVar7 >> 1;
          uVar7 = uVar7 >> 1;
        } while ((uVar2 & uVar1) == 0);
      }
      lVar3 = 0x1f;
      if (uVar2 << (ulong)(iVar5 + 1U & 0x1f) != 0) {
        lVar3 = 0x20;
      }
      uVar6 = lVar3 - iVar5;
      uVar8 = uVar6 >> 5;
      if ((uVar6 & 0x1f) != 0) {
        uVar8 = uVar8 + 1;
      }
      iVar5 = 0;
      if (uVar8 != 0) {
        iVar5 = (int)(uVar6 / uVar8);
      }
      uVar1 = 0;
      if (uVar8 <= uVar6) {
        uVar1 = 0xffffffff >> (ulong)(-iVar5 & 0x1f);
      }
      do {
        uVar4 = param_2;
        func_0x000107c284a0();
        uVar7 = (uint)uVar4 & uVar1;
      } while (uVar2 <= uVar7);
      uVar7 = *param_3 + uVar7;
    }
  }
  return uVar7 & 0xff;
}



/* Entry: 1092c3b80; end: 1092c3bdb;  */

undefined * FUN_1092c3b80(uint param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int aiStack_138 [48];
  long lStack_78;
  
  if (param_1 < 4) {
    return (undefined *)(ulong)*(uint *)(&UNK_10dfc29a0 + (ulong)param_1 * 4);
  }
  puVar10 = &UNK_10f5642c8;
  func_0x000105688514();
  if ((uint)puVar10 < 3) {
    return puVar10;
  }
  if ((uint)puVar10 == 0xf) {
    return (undefined *)0x3;
  }
  puVar10 = &UNK_10f5642c8;
  func_0x000105688514();
  lVar13 = 0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = CONCAT17(param_2[0x3c],
                        CONCAT16(param_2[0x3d],
                                 CONCAT15(param_2[0x3e],
                                          CONCAT14(param_2[0x3f],
                                                   CONCAT13(param_2[0x38],
                                                            CONCAT12(param_2[0x39],
                                                                     CONCAT11(param_2[0x3a],
                                                                              param_2[0x3b])))))));
  uStack_148 = CONCAT17(param_2[0x34],
                        CONCAT16(param_2[0x35],
                                 CONCAT15(param_2[0x36],
                                          CONCAT14(param_2[0x37],
                                                   CONCAT13(param_2[0x30],
                                                            CONCAT12(param_2[0x31],
                                                                     CONCAT11(param_2[0x32],
                                                                              param_2[0x33])))))));
  uStack_150 = CONCAT17(param_2[0x2c],
                        CONCAT16(param_2[0x2d],
                                 CONCAT15(param_2[0x2e],
                                          CONCAT14(param_2[0x2f],
                                                   CONCAT13(param_2[0x28],
                                                            CONCAT12(param_2[0x29],
                                                                     CONCAT11(param_2[0x2a],
                                                                              param_2[0x2b])))))));
  uStack_158 = CONCAT17(param_2[0x24],
                        CONCAT16(param_2[0x25],
                                 CONCAT15(param_2[0x26],
                                          CONCAT14(param_2[0x27],
                                                   CONCAT13(param_2[0x20],
                                                            CONCAT12(param_2[0x21],
                                                                     CONCAT11(param_2[0x22],
                                                                              param_2[0x23])))))));
  uStack_170 = CONCAT17(param_2[0xc],
                        CONCAT16(param_2[0xd],
                                 CONCAT15(param_2[0xe],
                                          CONCAT14(param_2[0xf],
                                                   CONCAT13(param_2[8],
                                                            CONCAT12(param_2[9],
                                                                     CONCAT11(param_2[10],
                                                                              param_2[0xb])))))));
  uVar16 = CONCAT13(*param_2,CONCAT12(param_2[1],CONCAT11(param_2[2],param_2[3])));
  uStack_178 = CONCAT17(param_2[4],
                        CONCAT16(param_2[5],CONCAT15(param_2[6],CONCAT14(param_2[7],uVar16))));
  uStack_160 = CONCAT17(param_2[0x1c],
                        CONCAT16(param_2[0x1d],
                                 CONCAT15(param_2[0x1e],
                                          CONCAT14(param_2[0x1f],
                                                   CONCAT13(param_2[0x18],
                                                            CONCAT12(param_2[0x19],
                                                                     CONCAT11(param_2[0x1a],
                                                                              param_2[0x1b])))))));
  uStack_168 = CONCAT17(param_2[0x14],
                        CONCAT16(param_2[0x15],
                                 CONCAT15(param_2[0x16],
                                          CONCAT14(param_2[0x17],
                                                   CONCAT13(param_2[0x10],
                                                            CONCAT12(param_2[0x11],
                                                                     CONCAT11(param_2[0x12],
                                                                              param_2[0x13])))))));
  do {
    uVar3 = *(uint *)((long)aiStack_138 + lVar13 + -8);
    iVar2 = *(int *)((long)&uStack_158 + lVar13 + 4) + uVar16;
    uVar16 = *(uint *)((long)&uStack_178 + lVar13 + 4);
    *(uint *)((long)aiStack_138 + lVar13) =
         iVar2 + ((uVar3 >> 0x11 | uVar3 << 0xf) ^ (uVar3 >> 0x13 | uVar3 << 0xd) ^ uVar3 >> 10) +
         ((uVar16 >> 7 | uVar16 << 0x19) ^ (uVar16 >> 0x12 | uVar16 << 0xe) ^ uVar16 >> 3);
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0xc0);
  lVar13 = 0;
  uVar15 = (ulong)*(uint *)(puVar10 + 0x6c);
  uVar18 = (ulong)*(uint *)(puVar10 + 0x68);
  uVar3 = *(uint *)(puVar10 + 0x50);
  uVar16 = *(uint *)(puVar10 + 0x60);
  uVar7 = *(uint *)(puVar10 + 0x54);
  uVar8 = *(uint *)(puVar10 + 100);
  uVar9 = *(uint *)(puVar10 + 0x58);
  uVar6 = *(uint *)(puVar10 + 0x5c);
  do {
    uVar5 = uVar9;
    uVar4 = uVar8;
    uVar9 = uVar7;
    uVar8 = uVar16;
    uVar7 = uVar3;
    uVar12 = uVar18;
    uVar18 = (ulong)uVar4;
    iVar2 = ((uint)uVar12 & (uVar8 ^ 0xffffffff) | uVar8 & uVar4) + (int)uVar15 +
            ((uVar8 >> 6 | uVar8 << 0x1a) ^ (uVar8 >> 0xb | uVar8 << 0x15) ^
            (uVar8 >> 0x19 | uVar8 << 7)) +
            *(int *)(&UNK_10dfc29b0 + lVar13) + *(int *)((long)&uStack_178 + lVar13);
    uVar16 = iVar2 + uVar6;
    uVar3 = ((uVar5 ^ uVar9) & uVar7 ^ uVar5 & uVar9) +
            ((uVar7 >> 2 | uVar7 << 0x1e) ^ (uVar7 >> 0xd | uVar7 << 0x13) ^
            (uVar7 >> 0x16 | uVar7 << 10)) + iVar2;
    lVar13 = lVar13 + 4;
    uVar15 = uVar12;
    uVar6 = uVar5;
  } while (lVar13 != 0x100);
  *(uint *)(puVar10 + 0x50) = uVar3 + *(uint *)(puVar10 + 0x50);
  *(uint *)(puVar10 + 0x54) = uVar7 + *(uint *)(puVar10 + 0x54);
  *(uint *)(puVar10 + 0x58) = uVar9 + *(uint *)(puVar10 + 0x58);
  *(uint *)(puVar10 + 0x5c) = uVar5 + *(uint *)(puVar10 + 0x5c);
  *(uint *)(puVar10 + 0x60) = uVar16 + *(uint *)(puVar10 + 0x60);
  *(uint *)(puVar10 + 100) = uVar8 + *(uint *)(puVar10 + 100);
  *(uint *)(puVar10 + 0x68) = uVar4 + *(uint *)(puVar10 + 0x68);
  *(uint *)(puVar10 + 0x6c) = (uint)uVar12 + *(uint *)(puVar10 + 0x6c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar11 = puVar10;
    if (uVar18 != 0) {
      uVar14 = (ulong)*(uint *)(puVar10 + 0x40);
      uVar15 = 0;
      uVar17 = 1;
      do {
        puVar10[uVar14] = *(undefined1 *)(uVar12 + uVar15);
        uVar16 = *(int *)(puVar10 + 0x40) + 1;
        uVar14 = (ulong)uVar16;
        *(uint *)(puVar10 + 0x40) = uVar16;
        if (uVar16 == 0x40) {
          puVar11 = puVar10;
          FUN_1092c3bdc(puVar10,puVar10);
          uVar14 = 0;
          *(long *)(puVar10 + 0x48) = *(long *)(puVar10 + 0x48) + 0x200;
          *(undefined4 *)(puVar10 + 0x40) = 0;
        }
        bVar1 = uVar17 < uVar18;
        uVar15 = uVar17;
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (bVar1);
    }
    return puVar11;
  }
  return puVar10;
}



/* Entry: 1092c3bdc; end: 1092c3e43;  */

void FUN_1092c3bdc(long param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int aiStack_118 [48];
  long lStack_58;
  
  lVar11 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = CONCAT17(param_2[0x3c],
                        CONCAT16(param_2[0x3d],
                                 CONCAT15(param_2[0x3e],
                                          CONCAT14(param_2[0x3f],
                                                   CONCAT13(param_2[0x38],
                                                            CONCAT12(param_2[0x39],
                                                                     CONCAT11(param_2[0x3a],
                                                                              param_2[0x3b])))))));
  uStack_128 = CONCAT17(param_2[0x34],
                        CONCAT16(param_2[0x35],
                                 CONCAT15(param_2[0x36],
                                          CONCAT14(param_2[0x37],
                                                   CONCAT13(param_2[0x30],
                                                            CONCAT12(param_2[0x31],
                                                                     CONCAT11(param_2[0x32],
                                                                              param_2[0x33])))))));
  uStack_130 = CONCAT17(param_2[0x2c],
                        CONCAT16(param_2[0x2d],
                                 CONCAT15(param_2[0x2e],
                                          CONCAT14(param_2[0x2f],
                                                   CONCAT13(param_2[0x28],
                                                            CONCAT12(param_2[0x29],
                                                                     CONCAT11(param_2[0x2a],
                                                                              param_2[0x2b])))))));
  uStack_138 = CONCAT17(param_2[0x24],
                        CONCAT16(param_2[0x25],
                                 CONCAT15(param_2[0x26],
                                          CONCAT14(param_2[0x27],
                                                   CONCAT13(param_2[0x20],
                                                            CONCAT12(param_2[0x21],
                                                                     CONCAT11(param_2[0x22],
                                                                              param_2[0x23])))))));
  uStack_150 = CONCAT17(param_2[0xc],
                        CONCAT16(param_2[0xd],
                                 CONCAT15(param_2[0xe],
                                          CONCAT14(param_2[0xf],
                                                   CONCAT13(param_2[8],
                                                            CONCAT12(param_2[9],
                                                                     CONCAT11(param_2[10],
                                                                              param_2[0xb])))))));
  uVar14 = CONCAT13(*param_2,CONCAT12(param_2[1],CONCAT11(param_2[2],param_2[3])));
  uStack_158 = CONCAT17(param_2[4],
                        CONCAT16(param_2[5],CONCAT15(param_2[6],CONCAT14(param_2[7],uVar14))));
  uStack_140 = CONCAT17(param_2[0x1c],
                        CONCAT16(param_2[0x1d],
                                 CONCAT15(param_2[0x1e],
                                          CONCAT14(param_2[0x1f],
                                                   CONCAT13(param_2[0x18],
                                                            CONCAT12(param_2[0x19],
                                                                     CONCAT11(param_2[0x1a],
                                                                              param_2[0x1b])))))));
  uStack_148 = CONCAT17(param_2[0x14],
                        CONCAT16(param_2[0x15],
                                 CONCAT15(param_2[0x16],
                                          CONCAT14(param_2[0x17],
                                                   CONCAT13(param_2[0x10],
                                                            CONCAT12(param_2[0x11],
                                                                     CONCAT11(param_2[0x12],
                                                                              param_2[0x13])))))));
  do {
    uVar3 = *(uint *)((long)aiStack_118 + lVar11 + -8);
    iVar2 = *(int *)((long)&uStack_138 + lVar11 + 4) + uVar14;
    uVar14 = *(uint *)((long)&uStack_158 + lVar11 + 4);
    *(uint *)((long)aiStack_118 + lVar11) =
         iVar2 + ((uVar3 >> 0x11 | uVar3 << 0xf) ^ (uVar3 >> 0x13 | uVar3 << 0xd) ^ uVar3 >> 10) +
         ((uVar14 >> 7 | uVar14 << 0x19) ^ (uVar14 >> 0x12 | uVar14 << 0xe) ^ uVar14 >> 3);
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0xc0);
  lVar11 = 0;
  uVar13 = (ulong)*(uint *)(param_1 + 0x6c);
  uVar16 = (ulong)*(uint *)(param_1 + 0x68);
  uVar3 = *(uint *)(param_1 + 0x50);
  uVar14 = *(uint *)(param_1 + 0x60);
  uVar7 = *(uint *)(param_1 + 0x54);
  uVar8 = *(uint *)(param_1 + 100);
  uVar9 = *(uint *)(param_1 + 0x58);
  uVar6 = *(uint *)(param_1 + 0x5c);
  do {
    uVar5 = uVar9;
    uVar4 = uVar8;
    uVar9 = uVar7;
    uVar8 = uVar14;
    uVar7 = uVar3;
    uVar10 = uVar16;
    uVar16 = (ulong)uVar4;
    iVar2 = ((uint)uVar10 & (uVar8 ^ 0xffffffff) | uVar8 & uVar4) + (int)uVar13 +
            ((uVar8 >> 6 | uVar8 << 0x1a) ^ (uVar8 >> 0xb | uVar8 << 0x15) ^
            (uVar8 >> 0x19 | uVar8 << 7)) +
            *(int *)(&UNK_10dfc29b0 + lVar11) + *(int *)((long)&uStack_158 + lVar11);
    uVar14 = iVar2 + uVar6;
    uVar3 = ((uVar5 ^ uVar9) & uVar7 ^ uVar5 & uVar9) +
            ((uVar7 >> 2 | uVar7 << 0x1e) ^ (uVar7 >> 0xd | uVar7 << 0x13) ^
            (uVar7 >> 0x16 | uVar7 << 10)) + iVar2;
    lVar11 = lVar11 + 4;
    uVar13 = uVar10;
    uVar6 = uVar5;
  } while (lVar11 != 0x100);
  *(uint *)(param_1 + 0x50) = uVar3 + *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x54) = uVar7 + *(uint *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x58) = uVar9 + *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x5c) = uVar5 + *(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x60) = uVar14 + *(uint *)(param_1 + 0x60);
  *(uint *)(param_1 + 100) = uVar8 + *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 0x68) = uVar4 + *(uint *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x6c) = (uint)uVar10 + *(uint *)(param_1 + 0x6c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (uVar16 != 0) {
      uVar12 = (ulong)*(uint *)(param_1 + 0x40);
      uVar13 = 0;
      uVar15 = 1;
      do {
        *(undefined1 *)(param_1 + uVar12) = *(undefined1 *)(uVar10 + uVar13);
        uVar14 = *(int *)(param_1 + 0x40) + 1;
        uVar12 = (ulong)uVar14;
        *(uint *)(param_1 + 0x40) = uVar14;
        if (uVar14 == 0x40) {
          FUN_1092c3bdc(param_1,param_1);
          uVar12 = 0;
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x200;
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
        bVar1 = uVar15 < uVar16;
        uVar13 = uVar15;
        uVar15 = (ulong)((int)uVar15 + 1);
      } while (bVar1);
    }
    return;
  }
  return;
}



/* Entry: 1092c3e44; end: 1092c3ecb;  */

void FUN_1092c3e44(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x40);
    uVar4 = 0;
    uVar5 = 1;
    do {
      *(undefined1 *)(param_1 + uVar3) = *(undefined1 *)(param_2 + uVar4);
      uVar2 = *(int *)(param_1 + 0x40) + 1;
      uVar3 = (ulong)uVar2;
      *(uint *)(param_1 + 0x40) = uVar2;
      if (uVar2 == 0x40) {
        FUN_1092c3bdc(param_1,param_1);
        uVar3 = 0;
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x200;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      bVar1 = uVar5 < param_3;
      uVar4 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
  }
  return;
}



/* Entry: 1092c3ecc; end: 1092c4087;  */

void FUN_1092c3ecc(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  puVar1 = (undefined1 *)((long)param_1 + (ulong)uVar2);
  *puVar1 = 0x80;
  if (uVar2 < 0x38) {
    if (uVar2 != 0x37) {
      _bzero(puVar1 + 1,0x37 - (ulong)uVar2);
    }
  }
  else {
    if (uVar2 + 1 < 0x40) {
      _bzero((long)param_1 + (ulong)(uVar2 + 1),(ulong)(0x3e - uVar2) + 1);
    }
    FUN_1092c3bdc(param_1,param_1);
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  lVar3 = param_1[9] + (ulong)(uint)(*(int *)(param_1 + 8) << 3);
  param_1[9] = lVar3;
  *(char *)((long)param_1 + 0x3f) = (char)lVar3;
  *(char *)((long)param_1 + 0x3e) = (char)((ulong)lVar3 >> 8);
  *(char *)((long)param_1 + 0x3d) = (char)((ulong)lVar3 >> 0x10);
  *(char *)((long)param_1 + 0x3c) = (char)((ulong)lVar3 >> 0x18);
  *(char *)((long)param_1 + 0x3b) = (char)((ulong)lVar3 >> 0x20);
  *(char *)((long)param_1 + 0x3a) = (char)((ulong)lVar3 >> 0x28);
  *(char *)((long)param_1 + 0x39) = (char)((ulong)lVar3 >> 0x30);
  *(char *)(param_1 + 7) = (char)((ulong)lVar3 >> 0x38);
  FUN_1092c3bdc(param_1,param_1);
  puVar1 = (undefined1 *)(param_2 + 0x10);
  lVar3 = 0x20;
  do {
    lVar3 = lVar3 + -8;
    uVar2 = (uint)lVar3;
    puVar1[-0x10] = (char)(*(uint *)(param_1 + 10) >> (ulong)(uVar2 & 0x1f));
    puVar1[-0xc] = (char)(*(uint *)((long)param_1 + 0x54) >> (ulong)(uVar2 & 0x1f));
    puVar1[-8] = (char)(*(uint *)(param_1 + 0xb) >> (ulong)(uVar2 & 0x1f));
    puVar1[-4] = (char)(*(uint *)((long)param_1 + 0x5c) >> (ulong)(uVar2 & 0x1f));
    *puVar1 = (char)(*(uint *)(param_1 + 0xc) >> (ulong)(uVar2 & 0x1f));
    puVar1[4] = (char)(*(uint *)((long)param_1 + 100) >> (ulong)(uVar2 & 0x1f));
    puVar1[8] = (char)(*(uint *)(param_1 + 0xd) >> (ulong)(uVar2 & 0x1f));
    puVar1[0xc] = (char)(*(uint *)((long)param_1 + 0x6c) >> (ulong)(uVar2 & 0x1f));
    puVar1 = puVar1 + 1;
  } while (lVar3 != 0);
  return;
}



/* Entry: 1092c4088; end: 1092c4b27;  */

uint FUN_1092c4088(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  char cVar13;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar17;
  
  uVar21 = 0;
  uVar18 = 0;
  bVar5 = *param_1;
  *(int *)(param_1 + 0x9c) =
       (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + (ulong)(bVar5 + 0xc & 0xf) * 4 + 4)) +
       *(int *)(param_1 + ((ulong)bVar5 & 0xf) * 4 + 4);
  pbVar2 = param_1 + 0xa0;
  pbVar22 = param_1 + 0x5e;
  pbVar23 = param_1 + 0x59;
  pbVar24 = param_1 + 0x58;
  do {
    pbVar3 = param_1 + uVar21 * 0x10 + 0x50;
    if (((char)*pbVar3 < 0) && (uVar21 != ((ulong)bVar5 & 3))) goto LAB_1092c4630;
    uVar18 = (int)(char)*pbVar3 + 1;
    *pbVar3 = (byte)uVar18;
    bVar15 = *param_1;
    uVar19 = (ulong)bVar15;
    uVar16 = (uint)bVar15;
    uVar17 = (uint)bVar15;
    if ((bVar15 & 1) == 0) {
      uVar26 = uVar18 & 1;
      uVar12 = 0xd;
      if ((uVar18 & 0x3e) != 0x18) {
        if ((uVar18 & 0x3e) == 0x10) {
          uVar10 = 0;
          uVar25 = uVar26 | 4;
          cVar13 = '\x04';
          do {
            uVar27 = uVar17 - uVar25;
            uVar25 = uVar25 + 1;
            uVar10 = *(int *)(param_1 + (ulong)(uVar27 & 0xf) * 4 + 4) + uVar10;
            cVar13 = cVar13 + -1;
          } while (cVar13 != '\0');
          if (((uVar26 != 0) || (*(uint *)(param_1 + (uVar19 & 0xe) * 4 + 4) == 0)) ||
             (uVar10 * 3 >> 2 < *(uint *)(param_1 + (uVar19 & 0xe) * 4 + 4))) {
            uVar25 = 0;
            uVar26 = uVar26 ^ 1;
            do {
              if (2 < (uVar26 & 0xff)) {
                if ((uVar25 & 0xff) == 0) {
                  bVar6 = pbVar3[9];
                  bVar7 = pbVar3[10];
                  bVar15 = bVar6 >> 1 & 8 | bVar7 >> 2 & 4 | pbVar3[0xb] >> 3 & 2 |
                           pbVar3[0xc] >> 4 & 1;
                  if (bVar15 != 0xf && bVar15 != 0) goto LAB_1092c4628;
                  if (((bVar15 == 0 ^ uVar18) & 1) == 0) {
                    pbVar3[9] = pbVar3[0xc];
                    pbVar3[0xc] = bVar6;
                    pbVar3[10] = pbVar3[0xb];
                    pbVar3[0xb] = bVar7;
                  }
                  uVar17 = 0x1008;
                  if (bVar15 != 0) {
                    uVar17 = 8;
                  }
                  goto LAB_1092c4724;
                }
                break;
              }
              if (uVar10 == 0) {
                uVar27 = 0xffffffff;
              }
              else {
                uVar9 = 0;
                if (uVar10 != 0) {
                  uVar9 = ((*(int *)(param_1 + (ulong)(uVar16 - (uVar26 + 1) & 0xf) * 4 + 4) +
                           *(int *)(param_1 + (ulong)(uVar17 - uVar26 & 0xf) * 4 + 4)) * 0xe | 1U) /
                          uVar10;
                }
                uVar27 = uVar9 + 0x1fd >> 1 & 0xff;
                if ((uVar9 + 0x1fd >> 1 & 0xfc) != 0) {
                  uVar27 = 0xffffffff;
                }
              }
              uVar25 = uVar27 | (uVar25 & 0xff) << 2;
              uVar26 = uVar26 + 1;
            } while ((uVar25 >> 7 & 1) == 0);
          }
        }
        goto LAB_1092c42d8;
      }
      uVar25 = 0;
      uVar16 = uVar26 | 4;
      cVar13 = '\x04';
      do {
        uVar10 = bVar15 - uVar16;
        uVar16 = uVar16 + 1;
        uVar25 = *(int *)(param_1 + (ulong)(uVar10 & 0xf) * 4 + 4) + uVar25;
        cVar13 = cVar13 + -1;
      } while (cVar13 != '\0');
      if (((uVar26 != 0) || (*(uint *)(param_1 + (uVar19 & 0xe) * 4 + 4) == 0)) ||
         (uVar25 * 3 >> 2 < *(uint *)(param_1 + (uVar19 & 0xe) * 4 + 4))) {
        uVar16 = 0;
        uVar10 = uVar26 ^ 1;
LAB_1092c4264:
        if ((uVar10 & 0xff) < 3) break;
        if (((uVar16 & 0xff) == 0) && (bVar15 = pbVar3[0xd], bVar15 != 0xff)) {
          if (uVar26 == 0) {
            uVar16 = bVar15 & 0x10 | pbVar3[9] >> 4 & 1 | pbVar3[10] >> 3 & 2 |
                     (pbVar3[0xe] >> 4 & 1) << 5 | pbVar3[0xb] >> 2 & 4 | pbVar3[0xc] >> 1 & 8;
          }
          else {
            uVar16 = pbVar3[10] & 0x10 | bVar15 >> 3 & 2 | (pbVar3[9] >> 4 & 1) << 5 |
                     pbVar3[0xe] >> 4 & 1 | pbVar3[0xb] >> 1 & 8 | pbVar3[0xc] >> 2 & 4;
          }
          bVar15 = (&UNK_10dfc2ac4)[uVar16 >> 1] & 0xf;
          if ((uVar16 & 1) != 0) {
            bVar15 = (byte)(&UNK_10dfc2ac4)[uVar16 >> 1] >> 4;
          }
          pbVar3[8] = bVar15;
          if (bVar15 != 0xf) {
            if (((uVar16 == 0 ^ uVar18) & 1) == 0) {
              lVar20 = 0;
              pbVar11 = pbVar23;
              do {
                bVar15 = *pbVar11;
                *pbVar11 = pbVar22[lVar20];
                pbVar22[lVar20] = bVar15;
                lVar20 = lVar20 + -1;
                pbVar11 = pbVar11 + 1;
              } while (lVar20 != -3);
            }
            uVar18 = 9;
            if ((uVar16 & 0x20) != 0) {
              uVar18 = uVar12;
            }
            uVar17 = 0x100d;
            if (uVar16 != 0) {
              uVar17 = uVar18;
            }
LAB_1092c4724:
            *pbVar3 = 0xff;
            uVar16 = *(uint *)(param_1 + 0x90);
            uVar18 = uVar17 & 0xd;
            if (((uVar16 == 0) || (uVar18 == uVar16)) &&
               ((uVar26 = *(uint *)(param_1 + 0x94), uVar26 == 0 || (uVar18 == uVar26)))) {
              if (uVar26 == 0 && uVar16 == 0) {
                uVar26 = 0;
                uVar16 = 0;
              }
              else if (((uint)(*(int *)(pbVar3 + 4) * 8) < (uint)(*(int *)(param_1 + 0x98) * 7)) ||
                      ((uint)(*(int *)(param_1 + 0x98) * 9) < (uint)(*(int *)(pbVar3 + 4) << 3)))
              goto LAB_1092c474c;
            }
            else {
LAB_1092c474c:
              uVar26 = 0;
              uVar16 = 0;
              param_1[0x90] = 0;
              param_1[0x91] = 0;
              param_1[0x92] = 0;
              param_1[0x93] = 0;
              param_1[0x94] = 0;
              param_1[0x95] = 0;
              param_1[0x96] = 0;
              param_1[0x97] = 0;
            }
            if (uVar17 < 0x1000) {
              if ((uVar17 == 0xd) || (uVar17 == 8)) {
                uVar19 = (ulong)(uVar17 - 1 >> 1);
                lVar20 = uVar19 + 1;
                pbVar11 = pbVar2 + uVar19;
                pbVar14 = pbVar24 + (uVar17 >> 1);
                do {
                  bVar15 = *pbVar14;
                  if ((uVar16 != 0) && (*pbVar11 != (bVar15 & 0xf))) {
                    uVar16 = 0;
                    param_1[0x90] = 0;
                    param_1[0x91] = 0;
                    param_1[0x92] = 0;
                    param_1[0x93] = 0;
                    param_1[0x94] = 0;
                    param_1[0x95] = 0;
                    param_1[0x96] = 0;
                    param_1[0x97] = 0;
                  }
                  *pbVar11 = bVar15 & 0xf;
                  lVar8 = lVar20 + -1;
                  bVar1 = 0 < lVar20;
                  lVar20 = lVar8;
                  pbVar11 = pbVar11 + -1;
                  pbVar14 = pbVar14 + -1;
                } while (lVar8 != 0 && bVar1);
                *(uint *)(param_1 + 0x90) = uVar17;
                uVar26 = *(uint *)(param_1 + 0x94);
                uVar17 = uVar26 & uVar17;
              }
              else {
                param_1[0xac] = pbVar3[8];
                bVar15 = pbVar3[0xe] & 0xf;
                param_1[0xa0] = 0;
                param_1[0xa1] = 0;
                param_1[0xa2] = pbVar3[9] & 0xf;
                param_1[0xa3] = pbVar3[10] & 0xf;
                if (bVar15 < 3) {
                  param_1[0xa4] = bVar15;
                  param_1[0xa5] = 0;
                  param_1[0xa6] = 0;
                  param_1[0xa7] = 0;
                  param_1[0xa8] = 0;
                  param_1[0xa9] = pbVar3[0xb] & 0xf;
LAB_1092c48b8:
                  param_1[0xaa] = pbVar3[0xc] & 0xf;
LAB_1092c48c4:
                  bVar15 = pbVar3[0xd] & 0xf;
                }
                else {
                  param_1[0xa4] = pbVar3[0xb] & 0xf;
                  if (bVar15 == 3) {
                    param_1[0xa9] = 0;
                    param_1[0xa5] = 0;
                    param_1[0xa6] = 0;
                    param_1[0xa7] = 0;
                    param_1[0xa8] = 0;
                    goto LAB_1092c48b8;
                  }
                  param_1[0xa5] = pbVar3[0xc] & 0xf;
                  if (bVar15 < 5) {
                    param_1[0xaa] = 0;
                    param_1[0xa6] = 0;
                    param_1[0xa7] = 0;
                    param_1[0xa8] = 0;
                    param_1[0xa9] = 0;
                    goto LAB_1092c48c4;
                  }
                  param_1[0xa6] = pbVar3[0xd] & 0xf;
                  param_1[0xa7] = 0;
                  param_1[0xa8] = 0;
                  param_1[0xa9] = 0;
                  param_1[0xaa] = 0;
                }
                param_1[0xab] = bVar15;
              }
            }
            else {
              uVar17 = uVar18 >> 1;
              pbVar11 = param_1 + (ulong)uVar18 + 0x9f;
              do {
                bVar15 = pbVar3[(ulong)uVar17 + 8];
                if ((*(int *)(param_1 + 0x94) != 0) && (*pbVar11 != (bVar15 & 0xf))) {
                  param_1[0x90] = 0;
                  param_1[0x91] = 0;
                  param_1[0x92] = 0;
                  param_1[0x93] = 0;
                  param_1[0x94] = 0;
                  param_1[0x95] = 0;
                  param_1[0x96] = 0;
                  param_1[0x97] = 0;
                }
                *pbVar11 = bVar15 & 0xf;
                uVar17 = uVar17 - 1;
                pbVar11 = pbVar11 + -1;
              } while (uVar17 != 0);
              *(uint *)(param_1 + 0x94) = uVar18;
              uVar17 = *(uint *)(param_1 + 0x90) & uVar18;
              uVar26 = 1;
            }
            *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(pbVar3 + 4);
            uVar18 = uVar17;
            if (uVar17 < 2) {
              uVar18 = 1;
            }
            if ((uVar17 & 0xfffffffb) == 9) {
              uVar19 = 0;
              bVar15 = 0;
              do {
                bVar6 = pbVar2[uVar19] + bVar15;
                bVar15 = bVar6 + pbVar2[uVar19] * '\x02';
                bVar7 = bVar15 - 0x14;
                if (bVar15 < 0x14) {
                  bVar7 = bVar15;
                }
                if ((uVar19 & 1) != 0) {
                  bVar6 = bVar7;
                }
                bVar15 = bVar6 - 10;
                if (bVar6 < 10) {
                  bVar15 = bVar6;
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 != 0xc);
              bVar6 = 0;
              if (bVar15 != 0) {
                bVar6 = 10 - bVar15;
              }
              if (param_1[0xac] == bVar6) goto LAB_1092c494c;
LAB_1092c49bc:
              uVar18 = 0;
              if (uVar26 == 0) {
                param_1[0x94] = 0;
                param_1[0x95] = 0;
                param_1[0x96] = 0;
                param_1[0x97] = 0;
              }
              else {
                param_1[0x90] = 0;
                param_1[0x91] = 0;
                param_1[0x92] = 0;
                param_1[0x93] = 0;
              }
            }
            else {
LAB_1092c494c:
              if (uVar17 == 8) {
                uVar19 = 0;
                bVar15 = 0;
                do {
                  bVar6 = pbVar2[uVar19] + bVar15;
                  bVar15 = bVar6 + pbVar2[uVar19] * '\x02';
                  bVar7 = bVar15 - 0x14;
                  if (bVar15 < 0x14) {
                    bVar7 = bVar15;
                  }
                  if ((uVar19 & 1) == 0) {
                    bVar6 = bVar7;
                  }
                  bVar15 = bVar6 - 10;
                  if (bVar6 < 10) {
                    bVar15 = bVar6;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar19 != 7);
                bVar6 = 0;
                if (bVar15 != 0) {
                  bVar6 = 10 - bVar15;
                }
                if (param_1[0xa7] == bVar6) {
                  uVar18 = 8;
                  goto LAB_1092c4a70;
                }
                goto LAB_1092c49bc;
              }
              if (uVar18 == 9) {
                lVar20 = 0;
                param_1[0xa0] = 0;
                param_1[0xa1] = 0;
                do {
                  param_1[lVar20 + 0xa2] = pbVar23[lVar20] & 0xf;
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 6);
                param_1[0xa8] = pbVar3[8] & 0xf;
                uVar18 = 9;
LAB_1092c4a70:
                param_1[0x50] = 0xff;
                param_1[0x60] = 0xff;
                param_1[0x70] = 0xff;
                param_1[0x80] = 0xff;
LAB_1092c4a80:
                uVar19 = 0;
                if (uVar18 != 0xe) {
                  uVar12 = uVar18;
                }
                if (uVar18 == 9) {
                  uVar12 = 8;
                }
                uVar17 = uVar18;
                if (uVar18 != 0xc) {
                  uVar17 = uVar12;
                }
                uVar4 = 1;
                if (uVar18 != 0xc) {
                  uVar4 = (ulong)(uVar18 == 9);
                }
                do {
                  *(byte *)(*(long *)(param_1 + 0x48) + uVar19) = pbVar2[uVar19 + uVar4] + 0x30;
                  uVar19 = uVar19 + 1;
                } while (uVar17 != uVar19);
                *(uint *)(param_1 + 0x44) = uVar17;
                *(undefined1 *)(*(long *)(param_1 + 0x48) + (ulong)uVar17) = 0;
              }
              else {
                if (uVar18 == 0xd) {
                  if (*pbVar2 == 0) {
                    uVar18 = 0xc;
                  }
                  else if ((*pbVar2 == 9) && (param_1[0xa1] == 7)) {
                    uVar18 = uVar12;
                    if ((param_1[0xa2] & 0xfe) == 8) {
                      uVar18 = 0xe;
                    }
                  }
                  else {
                    uVar18 = 0xd;
                  }
                  goto LAB_1092c4a70;
                }
                param_1[0x50] = 0xff;
                param_1[0x60] = 0xff;
                param_1[0x70] = 0xff;
                param_1[0x80] = 0xff;
                if (1 < uVar18) goto LAB_1092c4a80;
              }
            }
            goto LAB_1092c4630;
          }
        }
      }
LAB_1092c4628:
      uVar18 = 0;
      *pbVar3 = 0xff;
    }
    else {
LAB_1092c42d8:
      uVar26 = uVar18 & 0x3f;
      if (((uVar18 & 3) == 0 && uVar26 < 0x15) && (uVar12 = *(uint *)(param_1 + 0x9c), uVar12 != 0))
      {
        iVar29 = *(int *)(pbVar3 + 4);
        if ((uVar18 & 0xff) == 0) {
          if (5 < uVar12) {
            uVar18 = 0;
            if (uVar12 != 0) {
              uVar18 = ((*(int *)(param_1 + (ulong)(uVar17 + 10 & 0xf) * 4 + 4) +
                        *(int *)(param_1 + (ulong)(uVar16 + 0xb & 0xf) * 4 + 4)) * 0xe | 1U) /
                       uVar12;
            }
            if ((uVar18 + 0x1fd & 0x1fe) == 0) {
              uVar18 = 0;
              if (uVar12 != 0) {
                uVar18 = ((*(int *)(param_1 + (ulong)(uVar17 + 0xc & 0xf) * 4 + 4) +
                          *(int *)(param_1 + (ulong)(uVar16 + 0xb & 0xf) * 4 + 4)) * 0xe | 1U) /
                         uVar12;
              }
              uVar25 = uVar18 + 0x1fd >> 1;
              if ((uVar18 + 0x1fd & 0x1f8) != 0) {
                uVar25 = 0xffffffff;
              }
              if ((bVar15 & 1) == 0) {
                if ((uVar25 & 0xff) == 0) {
                  uVar18 = 0;
                  if (uVar12 != 0) {
                    uVar18 = ((*(int *)(param_1 + (ulong)(uVar17 + 9 & 0xf) * 4 + 4) +
                              *(int *)(param_1 + (ulong)(uVar17 + 10 & 0xf) * 4 + 4)) * 0xe | 1U) /
                             uVar12;
                  }
                  if ((uVar18 + 0x1fd & 0x1fe) == 0) {
                    uVar18 = 0;
                    if (uVar12 != 0) {
                      uVar18 = ((*(int *)(param_1 + (ulong)(uVar17 & 0xe ^ 8) * 4 + 4) +
                                *(int *)(param_1 + (ulong)(uVar17 + 9 & 0xf) * 4 + 4)) * 0xe | 1U) /
                               uVar12;
                    }
                    uVar25 = uVar18 + 0x1fd & 0x1fe;
                    goto joined_r0x0001092c4608;
                  }
                }
              }
              else if ((*(uint *)(param_1 + (ulong)(uVar17 + 9 & 0xe) * 4 + 4) == 0) ||
                      (uVar12 * 3 >> 2 < *(uint *)(param_1 + (ulong)(uVar17 + 9 & 0xe) * 4 + 4))) {
                uVar25 = uVar25 & 0xff;
joined_r0x0001092c4608:
                if (uVar25 == 0) {
                  *pbVar3 = 0;
                  *(uint *)(pbVar3 + 4) = uVar12;
                  if (iVar29 != 0) goto LAB_1092c432c;
                  goto LAB_1092c4618;
                }
              }
            }
          }
          uVar18 = 0;
          *pbVar3 = 0xff;
          *(uint *)(pbVar3 + 4) = uVar12;
        }
        else {
          if (uVar12 * 8 < (uint)(iVar29 * 7) || (uint)(iVar29 * 9) < uVar12 << 3) {
LAB_1092c4618:
            uVar19 = 0xff;
          }
          else {
            *(uint *)(pbVar3 + 4) = uVar12 * 3 + iVar29 >> 2;
LAB_1092c432c:
            if ((bVar15 & 1) == 0) {
              iVar29 = *(int *)(param_1 + (ulong)(uVar17 + 0xd & 0xf) * 4 + 4) +
                       *(int *)(param_1 + (ulong)(uVar16 + 0xe & 0xe) * 4 + 4);
            }
            else {
              iVar29 = *(int *)(param_1 + (ulong)(uVar17 + 0xf & 0xe) * 4 + 4) +
                       *(int *)(param_1 + (uVar19 & 0xf) * 4 + 4);
            }
            if (uVar12 < 6) goto LAB_1092c4618;
            uVar18 = 0;
            if (uVar12 != 0) {
              uVar18 = (iVar29 * 0xe | 1U) / uVar12;
            }
            uVar25 = (uVar18 + 0x1fd) * 2 & 0x3fc;
            if ((uVar18 + 0x1fd >> 1 & 0xfc) != 0) {
              uVar25 = 0xfffffffc;
            }
            uVar18 = 0;
            if (uVar12 != 0) {
              uVar18 = ((*(int *)(param_1 + ((ulong)(uVar16 + 0xe) & 0xf) * 4 + 4) +
                        *(int *)(param_1 + ((ulong)(uVar17 + 0xf) & 0xf) * 4 + 4)) * 0xe | 1U) /
                       uVar12;
            }
            uVar10 = uVar18 + 0x1fd >> 1 & 0xff;
            if ((uVar18 + 0x1fd >> 1 & 0xfc) != 0) {
              uVar10 = 0xffffffff;
            }
            uVar10 = uVar10 | uVar25;
            uVar19 = (ulong)uVar10;
            if ((uVar10 >> 7 & 1) != 0) goto LAB_1092c4618;
            uVar18 = 1 << (ulong)((int)(char)uVar10 & 0x1f);
            if ((uVar18 & 0x660) != 0) {
              iVar29 = *(int *)(param_1 + ((ulong)(uVar17 + 0xf) & 0xf) * 4 + 4);
              uVar17 = uVar17 + 0xd;
              if ((bVar15 & 1) != 0) {
                iVar29 = *(int *)(param_1 + ((ulong)(uVar16 + 0xe) & 0xf) * 4 + 4);
                uVar17 = uVar16;
              }
              iVar28 = 3;
              if ((uVar18 & 0x420) == 0) {
                iVar28 = 4;
              }
              uVar18 = uVar10 >> 1 & 3 | 0x10;
              if ((uint)((*(int *)(param_1 + (ulong)(uVar17 & 0xf) * 4 + 4) + iVar29) * 7) <=
                  iVar28 * uVar12) {
                uVar18 = uVar10;
              }
              uVar19 = (ulong)uVar18;
            }
          }
          if ((uVar26 != 0x10) && (((uint)uVar19 >> 7 & 1) != 0)) goto LAB_1092c4628;
          uVar18 = 0;
          if (((uint)uVar19 >> 7 & 1) == 0) {
            pbVar3[(ulong)(uVar26 >> 2) + 9] = (&UNK_10dfc2ab0)[uVar19 & 0xff];
          }
          else {
            pbVar3[0xd] = 0xff;
          }
        }
      }
      else {
        uVar18 = 0;
      }
    }
LAB_1092c4630:
    uVar21 = uVar21 + 1;
    pbVar22 = pbVar22 + 0x10;
    pbVar23 = pbVar23 + 0x10;
    pbVar24 = pbVar24 + 0x10;
    if (uVar21 == 4) {
      return uVar18;
    }
  } while( true );
  if (uVar25 == 0) {
    uVar27 = 0xffffffff;
  }
  else {
    uVar9 = 0;
    if (uVar25 != 0) {
      uVar9 = ((*(int *)(param_1 + (ulong)(uVar17 - (uVar10 + 1) & 0xf) * 4 + 4) +
               *(int *)(param_1 + (ulong)(uVar17 - uVar10 & 0xf) * 4 + 4)) * 0xe | 1U) / uVar25;
    }
    uVar27 = uVar9 + 0x1fd >> 1 & 0xff;
    if ((uVar9 + 0x1fd >> 1 & 0xfc) != 0) {
      uVar27 = 0xffffffff;
    }
  }
  uVar16 = uVar27 | (uVar16 & 0xff) << 2;
  uVar10 = uVar10 + 1;
  if ((uVar16 >> 7 & 1) != 0) goto LAB_1092c4628;
  goto LAB_1092c4264;
}



/* Entry: 1092c4b28; end: 1092c4c13;  */

undefined8 FUN_1092c4b28(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c31940(auStack_48,uVar2);
  if (param_2 - 8U < 7) {
    uVar3 = *(undefined4 *)(&UNK_10dfc2ae4 + (ulong)(param_2 - 8U) * 4);
  }
  else {
    uVar3 = 2;
  }
  uVar1 = 0x20;
  __Znwm(0x20);
  func_0x000107c31940(auStack_60,uVar2);
  FUN_1092c4f98(uVar1,auStack_60,uVar3);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return uVar1;
}



/* Entry: 1092c4c14; end: 1092c4d9b;  */

undefined4 * FUN_1092c4c14(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  param_1[5] = 4;
  *param_1 = 0;
  param_1[10] = 4;
  puVar1 = (undefined1 *)0xb8;
  __Znwm();
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 0x1c) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  *(undefined8 *)(puVar1 + 0x2c) = 0;
  *(undefined8 *)(puVar1 + 0x24) = 0;
  *(undefined8 *)(puVar1 + 0x3c) = 0;
  *(undefined8 *)(puVar1 + 0x34) = 0;
  *puVar1 = 0;
  puVar1[0x50] = 0xff;
  puVar1[0x60] = 0xff;
  puVar1[0x70] = 0xff;
  puVar1[0x80] = 0xff;
  *(undefined4 *)(puVar1 + 0x9c) = 0;
  *(undefined8 *)(puVar1 + 0x90) = 0;
  uVar2 = 0x20;
  _malloc();
  *(undefined8 *)(puVar1 + 0x48) = uVar2;
  *(undefined1 **)(param_1 + 0xc) = puVar1;
  return param_1;
}



/* Entry: 1092c4d9c; end: 1092c4f97;  */

void FUN_1092c4d9c(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  
  puVar13 = param_1 + 1;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    *(ulong *)(param_1 + 3) = CONCAT44(param_2,param_2);
    *(ulong *)puVar13 = CONCAT44(param_2,param_2);
    uVar10 = 3;
    uVar14 = 2;
  }
  else {
    uVar10 = (ulong)(uVar4 - 1 & 3);
    param_2 = puVar13[uVar10] + ((int)((param_2 - puVar13[uVar10]) * 0x19) >> 5);
    puVar13[(ulong)uVar4 & 3] = param_2;
    uVar14 = (ulong)((uint)((ulong)uVar4 & 3) ^ 2);
  }
  uVar12 = puVar13[uVar10];
  uVar15 = puVar13[uVar14];
  uVar6 = uVar12 - uVar15;
  uVar9 = uVar4 + 1;
  uVar5 = uVar15 - puVar13[uVar9 & 3];
  uVar11 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar11 = uVar6;
  }
  uVar3 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar3 = uVar5;
  }
  if (0x7fffffff < (uVar5 ^ uVar6) || uVar3 <= uVar11) {
    uVar5 = uVar6;
  }
  iVar1 = uVar12 + uVar15 * -2 + puVar13[uVar9 & 3];
  iVar2 = param_2 + uVar12 * -2 + uVar15;
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      if (iVar1 < 1) goto LAB_1092c4f80;
    }
    else if (-1 < iVar1) goto LAB_1092c4f80;
  }
  uVar11 = param_1[10];
  uVar12 = param_1[5];
  uVar15 = uVar12;
  if ((uVar12 < uVar11) && (param_1[8] != 0)) {
    uVar15 = param_1[8] << 3;
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = ((uVar4 * 0x20 - param_1[7]) * uVar11) / uVar15;
    }
    uVar15 = uVar11 - uVar6;
    if ((uVar11 < uVar6 || uVar15 == 0) || uVar15 <= uVar12) {
      param_1[10] = uVar12;
      uVar15 = uVar12;
    }
  }
  uVar4 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  if (uVar15 <= uVar4) {
    uVar11 = param_1[9];
    bVar7 = (int)uVar5 < 0;
    if ((int)uVar11 < 1) {
      bVar7 = 0 < (int)uVar5;
    }
    if (bVar7) {
      if (uVar11 == 0) {
        param_1[6] = 0x30;
        uVar9 = 0x30;
        uVar11 = 0x30;
      }
      else {
        uVar9 = param_1[6];
        uVar11 = uVar9;
        if (param_1[7] != 0) {
          uVar11 = param_1[7];
        }
      }
      param_1[7] = uVar9;
      param_1[8] = uVar9 - uVar11;
      func_0x0001092c402c(*(undefined8 *)(param_1 + 0xc));
      uVar12 = param_1[5];
    }
    else {
      uVar15 = -uVar11;
      if (-1 < (int)uVar11) {
        uVar15 = uVar11;
      }
      if (uVar4 <= uVar15) goto LAB_1092c4f80;
    }
    uVar4 = uVar4 * 0xe + 0x10 >> 5;
    if (uVar4 <= uVar12) {
      uVar4 = uVar12;
    }
    param_1[9] = uVar5;
    param_1[10] = uVar4;
    iVar1 = iVar2 - iVar1;
    iVar8 = 0x10;
    if (iVar1 != 0) {
      iVar8 = 0x20;
    }
    if (iVar1 != 0 && iVar2 != 0) {
      iVar8 = 0;
      if (iVar1 != 0) {
        iVar8 = (int)(iVar2 * 0x20 | 1U) / iVar1;
      }
      iVar8 = 0x20 - iVar8;
    }
    param_1[6] = iVar8 + *param_1 * 0x20;
    uVar9 = *param_1 + 1;
  }
LAB_1092c4f80:
  *param_1 = uVar9;
  return;
}



/* Entry: 1092c4f98; end: 1092c4fe7;  */

undefined8 * FUN_1092c4f98(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined4 *)(param_1 + 3) = param_3;
  return param_1;
}



/* Entry: 1092c4fe8; end: 1092c5037;  */

undefined4 * FUN_1092c4fe8(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x32;
  uVar1 = 0x38;
  __Znwm();
  FUN_1092c4c14();
  *(undefined8 *)(param_1 + 2) = uVar1;
  return param_1;
}



/* Entry: 1092c5038; end: 1092c54cb;  */

void FUN_1092c5038(int *param_1,ulong *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  int *piStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = (uint *)0x18;
  __Znwm();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  piStack_70 = (int *)((ulong)&uStack_b0 | 8);
  iVar10 = *(int *)((long)param_2 + 4);
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_2[7] != 0) {
    piVar8 = (int *)(param_2[7] + 0x14);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    iVar10 = *(int *)((long)param_2 + 4);
  }
  puStack_68 = &uStack_60;
  if (iVar10 < 3) {
    uStack_60 = *(undefined8 *)param_2[9];
    uStack_58 = ((undefined8 *)param_2[9])[1];
  }
  else {
    uStack_b0 = uStack_b0 & 0xffffffff;
    func_0x000109a84868(&uStack_b0,param_2);
  }
  *puVar3 = uStack_a8._4_4_;
  puVar3[1] = (uint)uStack_a8;
  *(ulong *)(puVar3 + 2) = uStack_a0;
  if ((int)uStack_b0._4_4_ < 3) {
    lVar7 = (long)(int)(uint)uStack_a8 * (long)(int)uStack_a8._4_4_;
    if (0 < (int)uStack_b0._4_4_) goto LAB_1092c5134;
    lVar6 = 0;
  }
  else {
    lVar7 = 1;
    piVar8 = piStack_70;
    uVar9 = (ulong)uStack_b0._4_4_;
    do {
      lVar7 = lVar7 * *piVar8;
      uVar9 = uVar9 - 1;
      piVar8 = piVar8 + 1;
    } while (uVar9 != 0);
LAB_1092c5134:
    lVar6 = puStack_68[(ulong)uStack_b0._4_4_ - 1];
  }
  *(long *)(puVar3 + 4) = lVar6 * lVar7;
  if (uStack_78 != 0) {
    piVar8 = (int *)(uStack_78 + 0x14);
    do {
      iVar10 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar10 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  uStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < (int)uStack_b0._4_4_) {
    lVar7 = 0;
    do {
      piStack_70[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  func_0x0001092c4c94(*(undefined8 *)(param_1 + 2));
  func_0x0001092c4c94(*(undefined8 *)(param_1 + 2));
  func_0x0001092c4d20(*(undefined8 *)(param_1 + 2));
  if (0 < (int)puVar3[1]) {
    iVar10 = 0;
    do {
      iVar12 = 0;
      while (iVar12 < (int)*puVar3) {
        puVar4 = *(undefined8 **)(param_1 + 2);
        FUN_1092c4d9c(puVar4,*(undefined1 *)
                              (*(long *)(puVar3 + 2) + (long)(int)(iVar12 + *puVar3 * iVar10)));
        iVar12 = iVar12 + 1;
        if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      puVar5 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      if (puVar5 == (undefined8 *)0x0 || puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4d20();
      if (puVar5 != (undefined8 *)0x0 || puVar4 == (undefined8 *)0x0) {
        puVar4 = puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      iVar12 = *param_1;
      iVar11 = (int)((long)iVar12 + (long)iVar10);
      if ((int)puVar3[1] < iVar11) break;
      uVar13 = *puVar3;
      if (0 < (int)uVar13) {
        lVar7 = (long)(int)uVar13;
        do {
          lVar7 = lVar7 + -1;
          puVar4 = *(undefined8 **)(param_1 + 2);
          FUN_1092c4d9c(puVar4,*(undefined1 *)
                                (*(long *)(puVar3 + 2) +
                                 (long)(int)*puVar3 * ((long)iVar12 + (long)iVar10) + lVar7));
          if (uVar13 < 2) break;
          uVar13 = uVar13 - 1;
        } while (puVar4 == (undefined8 *)0x0);
        if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      puVar5 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      if (puVar5 == (undefined8 *)0x0 || puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4d20();
      if (puVar5 != (undefined8 *)0x0 || puVar4 == (undefined8 *)0x0) {
        puVar4 = puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      iVar10 = *param_1 + iVar11;
    } while (iVar10 < (int)puVar3[1]);
  }
  if (0 < (int)*puVar3) {
    iVar10 = 0;
    do {
      iVar12 = 0;
      while (iVar12 < (int)puVar3[1]) {
        puVar4 = *(undefined8 **)(param_1 + 2);
        FUN_1092c4d9c(puVar4,*(undefined1 *)
                              (*(long *)(puVar3 + 2) + (long)(int)(iVar10 + *puVar3 * iVar12)));
        iVar12 = iVar12 + 1;
        if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      puVar5 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      if (puVar5 == (undefined8 *)0x0 || puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4d20();
      if (puVar5 != (undefined8 *)0x0 || puVar4 == (undefined8 *)0x0) {
        puVar4 = puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      iVar10 = *param_1 + iVar10;
      if ((int)*puVar3 < iVar10) break;
      uVar13 = puVar3[1];
      if (0 < (int)puVar3[1]) {
        do {
          puVar4 = *(undefined8 **)(param_1 + 2);
          FUN_1092c4d9c(puVar4,*(undefined1 *)
                                (*(long *)(puVar3 + 2) +
                                (long)(int)(iVar10 + *puVar3 * (uVar13 - 1))));
          if (uVar13 < 2) break;
          uVar13 = uVar13 - 1;
        } while (puVar4 == (undefined8 *)0x0);
        if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      puVar5 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4c94();
      if (puVar5 == (undefined8 *)0x0 || puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      puVar4 = *(undefined8 **)(param_1 + 2);
      func_0x0001092c4d20();
      if (puVar5 != (undefined8 *)0x0 || puVar4 == (undefined8 *)0x0) {
        puVar4 = puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_1092c5418;
      iVar10 = *param_1 + iVar10;
    } while (iVar10 < (int)*puVar3);
  }
LAB_1092c5490:
  __ZdlPv(puVar3);
  return;
LAB_1092c5418:
  *param_3 = 1;
  *(undefined4 *)(param_3 + 4) = 2;
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_d0,*puVar4,puVar4[1]);
  }
  else {
    uStack_c8 = puVar4[1];
    uStack_d0 = *puVar4;
    uStack_c0 = puVar4[2];
  }
  if ((char)param_3[0x27] < '\0') {
    __ZdlPv(*(undefined8 *)(param_3 + 0x10));
  }
  *(undefined8 *)(param_3 + 0x18) = uStack_c8;
  *(undefined8 *)(param_3 + 0x10) = uStack_d0;
  *(undefined8 *)(param_3 + 0x20) = uStack_c0;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(puVar4 + 3);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    __ZdlPv(*puVar4);
  }
  __ZdlPv(puVar4);
  goto LAB_1092c5490;
}



/* Entry: 1092c54cc; end: 1092c5e23;  */

void FUN_1092c54cc(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long **pplVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  double dVar27;
  double dVar29;
  double dVar30;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1ac [8];
  float fStack_1a4;
  float fStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long **pplStack_160;
  undefined8 uStack_158;
  undefined4 auStack_150 [2];
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long **pplStack_e0;
  long *plStack_d8;
  long lStack_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  double dVar28;
  
  FUN_1092c5e24(&uStack_120);
  lVar11 = lStack_c0;
  lVar5 = lStack_b8 - lStack_c0;
  if ((lVar5 != 0) && (*(int *)((long)param_4 + 0x3c) < 0)) {
    uVar20 = 0;
    puVar23 = (undefined8 *)((ulong)&uStack_120 | 4);
    plVar1 = param_3 + 10;
    uVar21 = (uint)(double)plStack_118;
    dVar30 = (double)uStack_120._4_4_;
    pplVar2 = (long **)(param_4 + 3);
    do {
      uVar3 = *(undefined4 *)(lVar11 + uVar20 * 4);
      uStack_120 = (long *)CONCAT44(uStack_120._4_4_,0x42ff0000);
      puVar23[1] = 0;
      *puVar23 = 0;
      puVar23[3] = 0;
      puVar23[2] = 0;
      puVar23[5] = 0;
      puVar23[4] = 0;
      *(undefined8 *)((long)puVar23 + 0x34) = 0;
      *(undefined8 *)((long)puVar23 + 0x2c) = 0;
      lStack_d0 = 0;
      plStack_138._0_4_ = 0x1010000;
      uStack_128 = 0;
      auStack_150[0] = 0x2010000;
      uStack_140 = 0;
      uStack_168 = uStack_c4;
      uStack_164 = uStack_c4;
      plStack_148 = &uStack_120;
      plStack_130 = (long *)param_2;
      pplStack_e0 = (long **)((ulong)&uStack_120 | 8);
      plStack_d8 = &lStack_d0;
      FUN_109b44a6c(0,0,&plStack_138,auStack_150,&uStack_168,4);
      uStack_128 = 0;
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,0x1010000);
      auStack_150[0] = 0x2010000;
      uStack_140 = 0;
      plStack_148 = &uStack_120;
      plStack_130 = &uStack_120;
      FUN_109b5a14c(0x406fe00000000000,dVar30,&plStack_138,auStack_150,1,0,uVar3);
      if (param_3[7] != 0) {
        piVar18 = (int *)(param_3[7] + 0x14);
        do {
          iVar14 = *piVar18;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar13) {
            *piVar18 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(param_3);
        }
      }
      param_3[7] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      if (0 < *(int *)((long)param_3 + 4)) {
        lVar15 = 0;
        lVar16 = param_3[8];
        do {
          *(undefined4 *)(lVar16 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)((long)param_3 + 4));
      }
      param_3[1] = (long)plStack_118;
      *param_3 = (long)uStack_120;
      param_3[3] = (long)dStack_108;
      param_3[2] = uStack_110;
      param_3[5] = (long)dStack_f8;
      param_3[4] = (long)dStack_100;
      param_3[7] = lStack_e8;
      param_3[6] = (long)dStack_f0;
      plVar17 = (long *)param_3[9];
      iVar14 = uStack_120._4_4_;
      if (plVar17 != plVar1) {
        if (plVar17 != (long *)0x0) {
          _free(plVar17[-1]);
          iVar14 = uStack_120._4_4_;
        }
        param_3[8] = (long)(param_3 + 1);
        param_3[9] = (long)plVar1;
        plVar17 = plVar1;
      }
      if (iVar14 < 3) {
        *plVar17 = *plStack_d8;
        plVar17[1] = plStack_d8[1];
        uStack_120 = (long *)CONCAT44(uStack_120._4_4_,0x42ff0000);
        puVar23[1] = 0;
        *puVar23 = 0;
        puVar23[3] = 0;
        puVar23[2] = 0;
        puVar23[5] = 0;
        puVar23[4] = 0;
        *(undefined8 *)((long)puVar23 + 0x34) = 0;
        *(undefined8 *)((long)puVar23 + 0x2c) = 0;
        if (plStack_d8 != &lStack_d0) {
          _free(plStack_d8[-1]);
        }
      }
      else {
        param_3[8] = (long)pplStack_e0;
        param_3[9] = (long)plStack_d8;
      }
      uStack_120 = (long *)CONCAT44(uStack_120._4_4_,0x42ff0000);
      puVar23[1] = 0;
      *puVar23 = 0;
      puVar23[3] = 0;
      puVar23[2] = 0;
      puVar23[5] = 0;
      puVar23[4] = 0;
      *(undefined8 *)((long)puVar23 + 0x34) = 0;
      *(undefined8 *)((long)puVar23 + 0x2c) = 0;
      lStack_d0 = 0;
      iStack_c8 = 0;
      plStack_138._0_4_ = 0x2010000;
      uStack_128 = 0;
      plStack_130 = &uStack_120;
      pplStack_e0 = &plStack_118;
      plStack_d8 = &lStack_d0;
      FUN_109a479a0(param_3,&plStack_138);
      auStack_150[0] = 0xc3010000;
      uStack_140 = 0;
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,0x8204000c);
      uStack_128 = 0;
      uStack_168 = 0x8203001c;
      uStack_158 = 0;
      lStack_180 = 0;
      pplStack_160 = pplVar2;
      plStack_148 = &uStack_120;
      plStack_130 = param_4;
      FUN_109adf8b0(auStack_150,&plStack_138,&uStack_168,3,2,&lStack_180);
      if (lStack_e8 != 0) {
        piVar18 = (int *)(lStack_e8 + 0x14);
        do {
          iVar14 = *piVar18;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar13) {
            *piVar18 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(&uStack_120);
        }
      }
      lStack_e8 = 0;
      dStack_108 = 0.0;
      uStack_110 = 0;
      dStack_f8 = 0.0;
      dStack_100 = 0.0;
      if (0 < uStack_120._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)((long)pplStack_e0 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_120._4_4_);
      }
      if (plStack_d8 != &lStack_d0 && plStack_d8 != (long *)0x0) {
        _free(plStack_d8[-1]);
      }
      FUN_1092c5e24(&uStack_120,param_1);
      lVar12 = lStack_c0;
      dVar9 = dStack_100;
      dVar8 = dStack_108;
      iVar14 = (int)uStack_110;
      iVar7 = uStack_110._4_4_;
      lStack_180 = 0;
      lStack_178 = 0;
      uStack_170 = 0;
      lVar15 = *param_4;
      lVar16 = param_4[1];
      if (lVar16 != lVar15) {
        uVar24 = 0;
        dVar29 = dStack_100;
        fVar6 = 1e+07;
        do {
          plVar17 = (long *)(lVar15 + uVar24 * 0x18);
          if (((ulong)uVar21 < (ulong)(plVar17[1] - *plVar17 >> 3)) &&
             (*(int *)((long)*pplVar2 + uVar24 * 0x10 + 0xc) != -1)) {
            lStack_198 = 0;
            lStack_190 = 0;
            uStack_188 = 0;
            uStack_110 = 0;
            uStack_120._0_4_ = 0x8103000c;
            plStack_118 = plVar17;
            FUN_109b4131c(&uStack_120,1);
            dVar27 = dVar29 * 0.1;
            uStack_110 = 0;
            uStack_120 = (long *)CONCAT44(uStack_120._4_4_,0x8103000c);
            plStack_138 = (long *)CONCAT44(plStack_138._4_4_,0x8203000c);
            uStack_128 = 0;
            plStack_130 = &lStack_198;
            plStack_118 = plVar17;
            FUN_109ac7338(&uStack_120,&plStack_138,1);
            dVar29 = dVar27;
            if ((lStack_190 - lStack_198 >> 3) - 3U < 2) {
              uStack_110 = 0;
              uStack_120._0_4_ = 0x8103000c;
              plStack_118 = plVar17;
              FUN_109b415b4(&uStack_120,0);
              uStack_110 = 0;
              uStack_120 = (long *)CONCAT44(uStack_120._4_4_,0x8103000c);
              plStack_118 = plVar17;
              FUN_109b408b4(auStack_1ac,&uStack_120);
              fVar26 = ABS(fStack_1a0 / fStack_1a4 + -1.0);
              dVar28 = (double)(ulong)(uint)fVar26;
              dVar29 = dVar28;
              if (fVar26 < fVar6) {
                uStack_110 = 0;
                uStack_120._0_4_ = 0x8103000c;
                plStack_118 = plVar17;
                FUN_109b4131c(&uStack_120,1);
                lStack_1c8 = 0;
                lStack_1c0 = 0;
                uStack_1b8 = 0;
                uStack_110 = 0;
                uStack_120._0_4_ = 0x8103000c;
                plStack_138._0_4_ = 0x82030004;
                uStack_128 = 0;
                plStack_130 = &lStack_1c8;
                plStack_118 = plVar17;
                FUN_109ae2358(&uStack_120,&plStack_138,0,1);
                lStack_1e0 = 0;
                lStack_1d8 = 0;
                uStack_1d0 = 0;
                dVar29 = 0.0;
                uStack_110 = 0;
                uStack_120 = (long *)CONCAT44(uStack_120._4_4_,0x8103000c);
                uStack_128 = 0;
                plStack_138 = (long *)CONCAT44(plStack_138._4_4_,0x81030004);
                auStack_150[0] = 0x8203001c;
                plStack_148 = &lStack_1e0;
                uStack_140 = 0;
                plStack_130 = &lStack_1c8;
                plStack_118 = plVar17;
                FUN_109ae3148(&uStack_120,&plStack_138,auStack_150);
                iVar22 = 0;
                if (lStack_1d8 - lStack_1e0 != 0) {
                  lVar15 = lStack_1d8 - lStack_1e0 >> 4;
                  dVar29 = dVar8 * dVar28;
                  piVar18 = (int *)(lStack_1e0 + 0xc);
                  do {
                    uVar19 = 0;
                    if ((double)*piVar18 <= dVar9 * dVar28) {
                      uVar19 = (uint)(dVar29 <= (double)*piVar18);
                    }
                    iVar22 = iVar22 + uVar19;
                    lVar15 = lVar15 + -1;
                    piVar18 = piVar18 + 4;
                  } while (lVar15 != 0);
                }
                if (iVar14 <= iVar22 && iVar22 <= iVar7) {
                  FUN_1092c5e24(&uStack_120,param_1);
                  lVar15 = lStack_c0;
                  dVar10 = dStack_f0;
                  dVar28 = dStack_f8;
                  uVar19 = *(uint *)((long)*pplVar2 + (long)(int)uVar24 * 0x10 + 0xc);
                  if ((int)uVar19 < 0) {
                    iVar22 = -1;
                  }
                  else {
                    lVar16 = (long)iStack_c8;
                    do {
                      plStack_130 = (long *)(*param_4 + (ulong)uVar19 * 0x18);
                      uStack_120 = (long *)0x0;
                      plStack_118 = (long *)0x0;
                      uStack_110 = 0;
                      uStack_128 = 0;
                      plStack_138._0_4_ = 0x8103000c;
                      auStack_150[0] = 0x8203000c;
                      uStack_140 = 0;
                      plStack_148 = &uStack_120;
                      FUN_109ae2358(&plStack_138,auStack_150,0,1);
                      uStack_128 = 0;
                      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,0x8103000c);
                      plStack_130 = &uStack_120;
                      FUN_109b415b4(&plStack_138,0);
                      uVar25 = (ulong)uVar19;
                      dVar29 = dVar29 / dVar27;
                      bVar13 = false;
                      if ((dVar10 < dVar29) && (bVar13 = false, !NAN(dVar29) && !NAN(dVar28))) {
                        bVar13 = dVar29 < dVar28;
                      }
                      if (bVar13) {
                        plStack_138 = (long *)0x0;
                        plStack_130 = (long *)0x0;
                        uStack_128 = 0;
                        uStack_140 = 0;
                        auStack_150[0] = 0x8103000c;
                        plStack_148 = &uStack_120;
                        FUN_109b4131c(auStack_150,1);
                        dVar29 = dVar29 * 0.1;
                        uStack_140 = 0;
                        auStack_150[0] = 0x8103000c;
                        uStack_168 = 0x8203000c;
                        pplStack_160 = &plStack_138;
                        uStack_158 = 0;
                        plStack_148 = &uStack_120;
                        FUN_109ac7338(auStack_150,&uStack_168,1);
                        bVar13 = (long)plStack_130 - (long)plStack_138 >> 3 != lVar16;
                        if (bVar13) {
                          uVar19 = (uint)plVar17;
                        }
                        plVar17 = (long *)(ulong)uVar19;
                        bVar13 = !bVar13;
                        if (plStack_138 != (long *)0x0) {
                          plStack_130 = plStack_138;
                          __ZdlPv();
                        }
                      }
                      else {
                        bVar13 = false;
                      }
                      iVar22 = (int)plVar17;
                      if (uStack_120 != (long *)0x0) {
                        plStack_118 = uStack_120;
                        __ZdlPv();
                      }
                      if (bVar13) goto LAB_1092c5c0c;
                      uVar19 = *(uint *)((long)*pplVar2 + uVar25 * 0x10 + 0xc);
                    } while (-1 < (int)uVar19);
                    iVar22 = -1;
                  }
LAB_1092c5c0c:
                  if (lVar15 != 0) {
                    __ZdlPv();
                  }
                  if (-1 < iVar22) {
                    *(int *)(param_4 + 7) = (int)uVar24;
                    *(int *)((long)param_4 + 0x3c) = iVar22;
                    param_4[6] = (long)dVar27;
                    FUN_1092c6040(&lStack_180,lStack_198,lStack_190,lStack_190 - lStack_198 >> 3);
                    fVar6 = fVar26;
                  }
                }
                if (lStack_1e0 != 0) {
                  lStack_1d8 = lStack_1e0;
                  __ZdlPv();
                }
                if (lStack_1c8 != 0) {
                  lStack_1c0 = lStack_1c8;
                  __ZdlPv();
                }
              }
            }
            if (lStack_198 != 0) {
              lStack_190 = lStack_198;
              __ZdlPv();
            }
            lVar15 = *param_4;
            lVar16 = param_4[1];
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < (ulong)((lVar16 - lVar15 >> 3) * -0x5555555555555555));
        if (lStack_180 != 0) {
          lStack_178 = lStack_180;
          __ZdlPv();
        }
      }
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      uVar20 = uVar20 + 1;
    } while ((uVar20 < (ulong)(lVar5 >> 2)) && (*(int *)((long)param_4 + 0x3c) < 0));
  }
  if (lVar11 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1092c5e24; end: 1092c5f0f;  */

void FUN_1092c5e24(undefined8 *param_1)

{
  undefined4 uStack_34;
  
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *param_1 = 2;
  param_1[1] = 0x4059000000000000;
  param_1[2] = 0x400000002;
  param_1[4] = 0x4024000000000000;
  param_1[3] = 0x4014000000000000;
  param_1[6] = 0x4006666666666666;
  param_1[5] = 0x400b333333333333;
  param_1[7] = 0x3ff0cccccccccccd;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x700000190;
  param_1[10] = 0x3fc3333333333333;
  uStack_34 = 0xb;
  param_1[0xb] = 0x300000004;
  FUN_1092c5f10(param_1 + 0xc,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 1092c5f10; end: 1092c603f;  */

undefined1  [16]
FUN_1092c5f10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar14;
  undefined8 uVar13;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar6 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  puVar2 = param_1;
  if ((undefined8 *)((long)(uVar6 - (long)puVar11) >> 2) < param_4) {
    puVar1 = param_1;
    puVar7 = param_2;
    puVar5 = param_3;
    puVar10 = param_4;
    if (puVar11 != (undefined8 *)0x0) {
      param_1[1] = puVar11;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar1 = puVar11;
    }
    if ((ulong)param_4 >> 0x3e != 0) {
      FUN_10923f788();
      uVar6 = puVar1[2];
      puVar2 = (undefined8 *)*puVar1;
      if ((undefined8 *)((long)(uVar6 - (long)puVar2) >> 3) < puVar10) {
        puVar11 = puVar7;
        if (puVar2 != (undefined8 *)0x0) {
          puVar1[1] = puVar2;
          __ZdlPv();
          uVar6 = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        if ((ulong)puVar10 >> 0x3d != 0) {
          FUN_1092c6198();
          if ((ulong)puVar11 >> 0x3d == 0) {
            puVar1 = puVar2;
            FUN_1092c61ac();
            *puVar2 = puVar1;
            puVar2[1] = puVar1;
            puVar2[2] = puVar1 + (long)puVar11;
            auVar19._8_8_ = puVar11;
            auVar19._0_8_ = puVar1;
            return auVar19;
          }
          FUN_1092c6198();
          puVar2 = (undefined8 *)&DAT_10f62a4d8;
          func_0x000104c4f6cc();
          if ((ulong)puVar11 >> 0x3d == 0) {
            lVar4 = (long)puVar11 << 3;
            __Znwm(lVar4);
            auVar20._8_8_ = puVar11;
            auVar20._0_8_ = lVar4;
            return auVar20;
          }
          func_0x000104c4f740();
          iVar15 = (int)*puVar2 - (int)puVar2[1];
          iVar16 = (int)*puVar11 - (int)puVar11[1];
          iVar12 = (int)((ulong)*puVar2 >> 0x20) - (int)((ulong)puVar2[1] >> 0x20);
          iVar14 = (int)((ulong)*puVar11 >> 0x20) - (int)((ulong)puVar11[1] >> 0x20);
          uVar13 = NEON_ucvtf(CONCAT44(iVar16 * iVar16 + iVar14 * iVar14,
                                       iVar15 * iVar15 + iVar12 * iVar12),4);
          auVar21._4_4_ = 0;
          auVar21._0_4_ = -(uint)((float)((ulong)uVar13 >> 0x20) < (float)uVar13) & 1;
          auVar21._8_8_ = puVar11;
          return auVar21;
        }
        puVar11 = (undefined8 *)((long)uVar6 >> 2);
        if ((undefined8 *)((long)uVar6 >> 2) <= puVar10) {
          puVar11 = puVar10;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          puVar11 = (undefined8 *)0x1fffffffffffffff;
        }
        puVar2 = puVar1;
        FUN_1092c6160(puVar1,puVar11);
        puVar10 = (undefined8 *)puVar1[1];
        for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
          *puVar10 = *puVar7;
          puVar10 = puVar10 + 1;
        }
        puVar1[1] = puVar10;
        puVar7 = puVar11;
      }
      else {
        puVar11 = (undefined8 *)puVar1[1];
        lVar4 = (long)puVar11 - (long)puVar2;
        puVar9 = puVar7;
        if ((undefined8 *)(lVar4 >> 3) < puVar10) {
          puVar10 = (undefined8 *)((long)puVar7 + lVar4);
          puVar3 = puVar2;
          puVar8 = puVar7;
          puVar9 = puVar11;
          if (puVar11 != puVar2) {
            do {
              puVar2 = puVar3 + 1;
              *puVar3 = *puVar8;
              lVar4 = lVar4 + -8;
              puVar3 = puVar2;
              puVar8 = puVar8 + 1;
            } while (lVar4 != 0);
          }
          for (; puVar10 != puVar5; puVar10 = puVar10 + 1) {
            *puVar11 = *puVar10;
            puVar11 = puVar11 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar1[1] = puVar9;
        }
        else {
          for (; puVar9 != puVar5; puVar9 = puVar9 + 1) {
            *puVar2 = *puVar9;
            puVar2 = puVar2 + 1;
          }
          puVar1[1] = puVar2;
        }
      }
      auVar18._8_8_ = puVar7;
      auVar18._0_8_ = puVar2;
      return auVar18;
    }
    puVar1 = (undefined8 *)((long)uVar6 >> 1);
    if ((undefined8 *)((long)uVar6 >> 1) <= param_4) {
      puVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar6) {
      puVar1 = (undefined8 *)0x3fffffffffffffff;
    }
    FUN_10925b938(param_1,puVar1);
    puVar5 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 4)) {
      *(undefined4 *)puVar5 = *(undefined4 *)param_2;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    }
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    puVar1 = param_2;
    if ((undefined8 *)((long)puVar7 - (long)puVar11 >> 2) < param_4) {
      puVar10 = (undefined8 *)((long)param_2 + ((long)puVar7 - (long)puVar11));
      puVar5 = puVar7;
      if (puVar7 != puVar11) {
        _memmove(puVar11,param_2);
        puVar7 = (undefined8 *)param_1[1];
        puVar5 = puVar7;
        puVar1 = param_2;
        puVar2 = puVar11;
      }
      for (; puVar10 != param_3; puVar10 = (undefined8 *)((long)puVar10 + 4)) {
        *(undefined4 *)puVar7 = *(undefined4 *)puVar10;
        puVar7 = (undefined8 *)((long)puVar7 + 4);
        puVar5 = (undefined8 *)((long)puVar5 + 4);
      }
    }
    else {
      lVar4 = (long)param_3 - (long)param_2;
      if (lVar4 != 0) {
        puVar2 = puVar11;
        _memmove(puVar11,param_2,lVar4);
        puVar1 = param_2;
      }
      puVar5 = (undefined8 *)((long)puVar11 + lVar4);
    }
  }
  param_1[1] = puVar5;
  auVar17._8_8_ = puVar1;
  auVar17._0_8_ = puVar2;
  return auVar17;
}



/* Entry: 1092c6040; end: 1092c615f;  */

undefined1  [16]
FUN_1092c6040(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar11;
  undefined8 uVar10;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar6 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  if ((undefined8 *)((long)(uVar6 - (long)puVar2) >> 3) < param_4) {
    puVar7 = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = puVar2;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((ulong)param_4 >> 0x3d != 0) {
      FUN_1092c6198();
      if ((ulong)puVar7 >> 0x3d == 0) {
        puVar4 = puVar2;
        FUN_1092c61ac();
        *puVar2 = puVar4;
        puVar2[1] = puVar4;
        puVar2[2] = puVar4 + (long)puVar7;
        auVar15._8_8_ = puVar7;
        auVar15._0_8_ = puVar4;
        return auVar15;
      }
      FUN_1092c6198();
      puVar2 = (undefined8 *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if ((ulong)puVar7 >> 0x3d != 0) {
        func_0x000104c4f740();
        iVar12 = (int)*puVar2 - (int)puVar2[1];
        iVar13 = (int)*puVar7 - (int)puVar7[1];
        iVar9 = (int)((ulong)*puVar2 >> 0x20) - (int)((ulong)puVar2[1] >> 0x20);
        iVar11 = (int)((ulong)*puVar7 >> 0x20) - (int)((ulong)puVar7[1] >> 0x20);
        uVar10 = NEON_ucvtf(CONCAT44(iVar13 * iVar13 + iVar11 * iVar11,
                                     iVar12 * iVar12 + iVar9 * iVar9),4);
        auVar17._4_4_ = 0;
        auVar17._0_4_ = -(uint)((float)((ulong)uVar10 >> 0x20) < (float)uVar10) & 1;
        auVar17._8_8_ = puVar7;
        return auVar17;
      }
      lVar5 = (long)puVar7 << 3;
      __Znwm(lVar5);
      auVar16._8_8_ = puVar7;
      auVar16._0_8_ = lVar5;
      return auVar16;
    }
    puVar7 = (undefined8 *)((long)uVar6 >> 2);
    if ((undefined8 *)((long)uVar6 >> 2) <= param_4) {
      puVar7 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      puVar7 = (undefined8 *)0x1fffffffffffffff;
    }
    puVar2 = param_1;
    FUN_1092c6160(param_1,puVar7);
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar4 = *param_2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
    param_2 = puVar7;
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    lVar5 = (long)puVar7 - (long)puVar2;
    puVar4 = param_2;
    if ((undefined8 *)(lVar5 >> 3) < param_4) {
      puVar4 = (undefined8 *)((long)param_2 + lVar5);
      puVar3 = puVar2;
      puVar8 = param_2;
      puVar1 = puVar7;
      if (puVar7 != puVar2) {
        do {
          puVar2 = puVar3 + 1;
          *puVar3 = *puVar8;
          lVar5 = lVar5 + -8;
          puVar3 = puVar2;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
      }
      for (; puVar4 != param_3; puVar4 = puVar4 + 1) {
        *puVar7 = *puVar4;
        puVar7 = puVar7 + 1;
        puVar1 = puVar1 + 1;
      }
      param_1[1] = puVar1;
    }
    else {
      for (; puVar4 != param_3; puVar4 = puVar4 + 1) {
        *puVar2 = *puVar4;
        puVar2 = puVar2 + 1;
      }
      param_1[1] = puVar2;
    }
  }
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = puVar2;
  return auVar14;
}



/* Entry: 1092c6160; end: 1092c6197;  */

undefined1  [16] FUN_1092c6160(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_1092c61ac();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = plVar1;
    return auVar9;
  }
  FUN_1092c6198();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000104c4f740();
  iVar7 = (int)*puVar2 - (int)puVar2[1];
  iVar8 = (int)*param_2 - (int)param_2[1];
  iVar4 = (int)((ulong)*puVar2 >> 0x20) - (int)((ulong)puVar2[1] >> 0x20);
  iVar6 = (int)((ulong)*param_2 >> 0x20) - (int)((ulong)param_2[1] >> 0x20);
  uVar5 = NEON_ucvtf(CONCAT44(iVar8 * iVar8 + iVar6 * iVar6,iVar7 * iVar7 + iVar4 * iVar4),4);
  auVar11._4_4_ = 0;
  auVar11._0_4_ = -(uint)((float)((ulong)uVar5 >> 0x20) < (float)uVar5) & 1;
  auVar11._8_8_ = param_2;
  return auVar11;
}



/* Entry: 1092c6198; end: 1092c61ab;  */

undefined1  [16] FUN_1092c6198(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  func_0x000104c4f740();
  iVar6 = (int)*puVar1 - (int)puVar1[1];
  iVar7 = (int)*param_2 - (int)param_2[1];
  iVar3 = (int)((ulong)*puVar1 >> 0x20) - (int)((ulong)puVar1[1] >> 0x20);
  iVar5 = (int)((ulong)*param_2 >> 0x20) - (int)((ulong)param_2[1] >> 0x20);
  uVar4 = NEON_ucvtf(CONCAT44(iVar7 * iVar7 + iVar5 * iVar5,iVar6 * iVar6 + iVar3 * iVar3),4);
  auVar9._4_4_ = 0;
  auVar9._0_4_ = -(uint)((float)((ulong)uVar4 >> 0x20) < (float)uVar4) & 1;
  auVar9._8_8_ = param_2;
  return auVar9;
}



/* Entry: 1092c61ac; end: 1092c61df;  */

undefined1  [16] FUN_1092c61ac(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000104c4f740();
  iVar5 = (int)*param_1 - (int)param_1[1];
  iVar6 = (int)*param_2 - (int)param_2[1];
  iVar2 = (int)((ulong)*param_1 >> 0x20) - (int)((ulong)param_1[1] >> 0x20);
  iVar4 = (int)((ulong)*param_2 >> 0x20) - (int)((ulong)param_2[1] >> 0x20);
  uVar3 = NEON_ucvtf(CONCAT44(iVar6 * iVar6 + iVar4 * iVar4,iVar5 * iVar5 + iVar2 * iVar2),4);
  auVar8._4_4_ = 0;
  auVar8._0_4_ = -(uint)((float)((ulong)uVar3 >> 0x20) < (float)uVar3) & 1;
  auVar8._8_8_ = param_2;
  return auVar8;
}



/* Entry: 1092c61e0; end: 1092c621f;  */

byte FUN_1092c61e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*param_1 - (int)param_1[1];
  iVar5 = (int)*param_2 - (int)param_2[1];
  iVar1 = (int)((ulong)*param_1 >> 0x20) - (int)((ulong)param_1[1] >> 0x20);
  iVar3 = (int)((ulong)*param_2 >> 0x20) - (int)((ulong)param_2[1] >> 0x20);
  uVar2 = NEON_ucvtf(CONCAT44(iVar5 * iVar5 + iVar3 * iVar3,iVar4 * iVar4 + iVar1 * iVar1),4);
  return -((float)((ulong)uVar2 >> 0x20) < (float)uVar2) & 1;
}



/* Entry: 1092c6220; end: 1092c68db;  */

bool FUN_1092c6220(double param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  code ****ppppcVar4;
  code ****ppppcVar5;
  code ****ppppcVar6;
  code *pcVar7;
  long lVar8;
  int *piVar9;
  code *****pppppcVar10;
  code *****pppppcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  code ***pppcVar27;
  code ***pppcVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  int *piStack_1c0;
  int *piStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  code ***pppcStack_190;
  code ***pppcStack_188;
  undefined8 uStack_180;
  code ****ppppcStack_178;
  code ****ppppcStack_170;
  code ****ppppcStack_168;
  undefined4 auStack_b8 [2];
  int **ppiStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  code ****ppppcStack_98;
  undefined8 uStack_90;
  
  pppcStack_190 = (code ***)0x0;
  pppcStack_188 = (code ***)0x0;
  uStack_180 = 0;
  ppppcStack_168 = (code ****)0x0;
  ppppcStack_178._0_4_ = 0x8103000c;
  iStack_a0 = -0x7dfcfff4;
  uStack_90 = 0;
  ppppcStack_170 = (code ****)param_2;
  ppppcStack_98 = &pppcStack_190;
  FUN_109ae2358(&ppppcStack_178,&iStack_a0,0,1);
  ppppcStack_168 = (code ****)0x0;
  ppppcStack_178._0_4_ = 0x8103000c;
  ppppcStack_170 = &pppcStack_190;
  FUN_109b4131c(&ppppcStack_178,1);
  ppppcStack_178 = (code ****)CONCAT44(ppppcStack_178._4_4_,0x8103000c);
  ppppcStack_170 = &pppcStack_190;
  ppppcStack_168 = (code ****)0x0;
  iStack_a0 = -0x7dfcfff4;
  uStack_90 = 0;
  piVar9 = &iStack_a0;
  ppppcStack_98 = ppppcStack_170;
  FUN_109ac7338(param_1 * 0.005,&ppppcStack_178,piVar9,1);
  uVar12 = (long)pppcStack_188 - (long)pppcStack_190 >> 3;
  uVar20 = uVar12 - 4;
  if (uVar20 < 0x11) {
    if (pppcStack_188 == pppcStack_190) {
      puVar19 = (undefined8 *)0x0;
      puVar17 = (undefined8 *)0x0;
    }
    else {
      puVar17 = (undefined8 *)0x0;
      puVar23 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0x0;
      uVar22 = 0;
      puVar15 = (undefined8 *)0x0;
      do {
        uVar1 = uVar22 + 1;
        lVar21 = 0;
        if (uVar1 != uVar12) {
          lVar21 = uVar22 + 1;
        }
        if (puVar19 < puVar23) {
          pppcVar28 = (code ***)pppcStack_190[uVar22];
          puVar19[1] = pppcStack_190[lVar21];
          *puVar19 = pppcVar28;
          puVar16 = puVar15;
          puVar2 = puVar19;
        }
        else {
          lVar18 = (long)puVar19 - (long)puVar15 >> 4;
          uVar12 = lVar18 + 1;
          if (uVar12 >> 0x3c != 0) {
            FUN_1092c68dc();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1092c681c);
            (*pcVar7)();
          }
          pppcVar28 = (code ***)pppcStack_190[uVar22];
          pppcVar27 = (code ***)pppcStack_190[lVar21];
          uVar22 = (long)puVar23 - (long)puVar15 >> 3;
          if (uVar22 <= uVar12) {
            uVar22 = uVar12;
          }
          if (0x7fffffffffffffef < (ulong)((long)puVar23 - (long)puVar15)) {
            uVar22 = 0xfffffffffffffff;
          }
          if (uVar22 == 0) {
            piVar9 = (int *)0x0;
          }
          else {
            FUN_1092c68f0();
          }
          puVar2 = (undefined8 *)(uVar22 + ((long)puVar19 - (long)puVar15));
          puVar16 = puVar2 + lVar18 * -2;
          puVar2[1] = pppcVar27;
          *puVar2 = pppcVar28;
          puVar23 = puVar16;
          for (puVar17 = puVar15; puVar17 != puVar19; puVar17 = puVar17 + 2) {
            *puVar23 = *puVar17;
            puVar23[1] = puVar17[1];
            puVar23 = puVar23 + 2;
          }
          puVar23 = (undefined8 *)(uVar22 + (long)piVar9 * 0x10);
          puVar17 = puVar16;
          if (puVar15 != (undefined8 *)0x0) {
            __ZdlPv(puVar15);
          }
        }
        puVar19 = puVar2 + 2;
        uVar12 = (long)pppcStack_188 - (long)pppcStack_190 >> 3;
        uVar22 = uVar1;
        puVar15 = puVar16;
      } while (uVar1 < uVar12);
    }
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    FUN_1092c88d4(&lStack_1a8,puVar17,puVar19,(long)puVar19 - (long)puVar17 >> 4);
    lVar8 = lStack_1a0;
    lVar18 = lStack_1a8;
    uVar12 = lStack_1a0 - lStack_1a8;
    ppppcStack_178 = (code ****)FUN_1092c61e0;
    lVar21 = 0;
    if (lStack_1a0 != lStack_1a8) {
      lVar21 = LZCOUNT(lStack_1a0 - lStack_1a8 >> 4) * -2 + 0x7e;
    }
    FUN_1092c6924(lStack_1a8,lStack_1a0,&ppppcStack_178,lVar21,1);
    if (0x40 < uVar12) {
      lStack_1a0 = lVar8 + (lVar18 - lVar8 & 0xfffffffffffffff0U) + 0x40;
    }
    lVar8 = 0x40;
    __Znwm();
    lVar21 = 0;
    do {
      puVar19 = (undefined8 *)(lVar18 + lVar21);
      *(undefined8 *)(lVar8 + lVar21) = *puVar19;
      ((undefined8 *)(lVar8 + lVar21))[1] = puVar19[1];
      lVar21 = lVar21 + 0x10;
    } while (puVar19 + 2 != (undefined8 *)(lVar18 + 0x40));
    if (puVar17 != (undefined8 *)0x0) {
      __ZdlPv(puVar17);
      lVar18 = lStack_1a8;
    }
    if (lVar18 != 0) {
      lStack_1a0 = lVar18;
      __ZdlPv(lVar18);
    }
    iStack_a0 = -0x7efcfff4;
    ppppcStack_98 = &pppcStack_190;
    uStack_90 = 0;
    FUN_109b2f34c(&ppppcStack_178,&iStack_a0,0);
    ppppcVar6 = ppppcStack_168;
    ppppcVar5 = ppppcStack_170;
    ppppcVar4 = ppppcStack_178;
    lStack_1d0 = 0;
    uStack_1c8 = 0;
    lStack_1d8 = 0;
    FUN_1092c88d4(&lStack_1d8,lVar8,lVar8 + lVar21,lVar21 >> 4);
    lVar18 = lStack_1d0;
    lVar21 = lStack_1d8;
    ppppcStack_178 = (code ****)0x0;
    ppppcStack_170 = (code ****)0x0;
    ppppcStack_168 = (code ****)0x0;
    if (lStack_1d0 == lStack_1d8) {
      pppppcVar10 = (code *****)0x0;
    }
    else {
      pppppcVar10 = (code *****)0x0;
      uVar12 = 0;
      piVar9 = (int *)(lStack_1d8 + 8);
      lVar13 = lStack_1d0;
      do {
        lVar14 = lVar21;
        if (lVar13 != lVar21) {
          uVar22 = 0;
          piVar3 = (int *)(lVar21 + uVar12 * 0x10);
          pppppcVar11 = pppppcVar10;
          piVar26 = piVar9;
          do {
            pppppcVar10 = pppppcVar11;
            if (uVar12 < uVar22) {
              iVar24 = *piVar3;
              iVar25 = piVar3[1];
              fVar29 = (float)(*piVar26 - piVar26[-2]);
              fVar30 = (float)(piVar26[1] - piVar26[-1]);
              fVar31 = -((float)(piVar3[3] - iVar25) * fVar29) +
                       fVar30 * (float)(piVar3[2] - iVar24);
              lVar13 = lVar18;
              if (1e-08 <= ABS(fVar31)) {
                fVar31 = (-((float)(piVar26[1] - iVar25) * fVar29) +
                         fVar30 * (float)(*piVar26 - iVar24)) / fVar31;
                iStack_a0 = (int)(fVar31 * (float)(piVar3[2] - iVar24) + (float)iVar24);
                iStack_9c = (int)(fVar31 * (float)(piVar3[3] - iVar25) + (float)iVar25);
                if (pppppcVar11 < ppppcStack_168) {
                  pppppcVar10 = pppppcVar11 + 1;
                  *(int *)pppppcVar11 = iStack_a0;
                  *(int *)((long)pppppcVar11 + 4) = iStack_9c;
                  ppppcStack_170 = (code ****)pppppcVar10;
                }
                else {
                  pppppcVar10 = &ppppcStack_178;
                  FUN_1092c78ec(pppppcVar10,&iStack_a0);
                  ppppcStack_170 = (code ****)pppppcVar10;
                }
              }
            }
            uVar22 = uVar22 + 1;
            piVar26 = piVar26 + 4;
            pppppcVar11 = pppppcVar10;
            lVar14 = lVar13;
          } while (uVar22 < (ulong)(lVar13 - lVar21 >> 4));
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar14;
      } while (uVar12 < (ulong)(lVar14 - lVar21 >> 4));
    }
    iVar24 = (int)((double)ppppcVar5 / (double)ppppcVar4);
    iVar25 = (int)((double)ppppcVar6 / (double)ppppcVar4);
    lVar21 = 0;
    if (pppppcVar10 != (code *****)ppppcStack_178) {
      lVar21 = LZCOUNT((long)pppppcVar10 - (long)ppppcStack_178 >> 3) * -2 + 0x7e;
    }
    iStack_a0 = iVar24;
    iStack_9c = iVar25;
    FUN_1092c7a60(ppppcStack_178,pppppcVar10,&iStack_a0,lVar21,1);
    ppppcVar4 = ppppcStack_178;
    pppppcVar10 = (code *****)0x20;
    __Znwm();
    lVar21 = 0;
    do {
      *(undefined8 *)((long)pppppcVar10 + lVar21) = *(undefined8 *)((long)ppppcVar4 + lVar21);
      lVar21 = lVar21 + 8;
    } while (lVar21 != 0x20);
    if ((code *****)ppppcVar4 != (code *****)0x0) {
      ppppcStack_170 = ppppcVar4;
      __ZdlPv(ppppcVar4);
    }
    piStack_1b8 = (int *)0x0;
    lStack_1b0 = 0;
    piStack_1c0 = (int *)0x0;
    iStack_a0 = -0x7efcfff4;
    ppppcStack_98 = (code ****)&ppppcStack_178;
    uStack_90 = 0;
    auStack_b8[0] = 0x8203000c;
    ppiStack_b0 = &piStack_1c0;
    uStack_a8 = 0;
    ppppcStack_178 = (code ****)pppppcVar10;
    ppppcStack_170 = (code ****)(pppppcVar10 + 4);
    ppppcStack_168 = (code ****)(pppppcVar10 + 4);
    FUN_109ae2358(&iStack_a0,auStack_b8,0,1);
    if ((code *****)ppppcStack_178 != (code *****)0x0) {
      ppppcStack_170 = ppppcStack_178;
      __ZdlPv();
    }
    if (*param_3 != 0) {
      param_3[1] = *param_3;
      __ZdlPv();
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    piVar26 = piStack_1b8;
    piVar9 = piStack_1c0;
    *param_3 = (long)piStack_1c0;
    param_3[2] = lStack_1b0;
    param_3[1] = (long)piStack_1b8;
    piStack_1b8 = (int *)0x0;
    lStack_1b0 = 0;
    piStack_1c0 = (int *)0x0;
    if (lStack_1d8 != 0) {
      __ZdlPv();
      piVar9 = (int *)*param_3;
      piVar26 = (int *)param_3[1];
    }
    for (; piVar9 != piVar26; piVar9 = piVar9 + 2) {
      *piVar9 = (int)(long)(double)(long)((double)(*piVar9 - iVar24) * 1.05) + iVar24;
      piVar9[1] = (int)(long)(double)(long)((double)(piVar9[1] - iVar25) * 1.05) + iVar25;
    }
    __ZdlPv(lVar8);
  }
  if ((code ****)pppcStack_190 != (code ****)0x0) {
    pppcStack_188 = pppcStack_190;
    __ZdlPv();
  }
  return uVar20 < 0x11;
}



/* Entry: 1092c68dc; end: 1092c68ef;  */

void FUN_1092c68dc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  uint param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined4 *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  uint uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar16 = (undefined8 *)&DAT_10f62a4d8;
  uStack_bc = param_5;
  func_0x000104c4f6cc();
  if ((ulong)puVar16 >> 0x3c == 0) {
    __Znwm((long)puVar16 << 4);
    return;
  }
  func_0x000104c4f740();
LAB_1092c6954:
  puVar22 = param_2 + -2;
  puVar19 = puVar16;
LAB_1092c6970:
  while( true ) {
    puVar16 = puVar19;
    uVar28 = (long)param_2 - (long)puVar16 >> 4;
    if (uVar28 - 2 == 0 || (long)uVar28 < 2) {
      if (uVar28 < 2) {
        return;
      }
      if (uVar28 == 2) {
        uStack_a0 = param_2[-2];
        uStack_98 = param_2[-1];
        uStack_a8 = puVar16[1];
        uStack_b0 = *puVar16;
        puVar19 = &uStack_a0;
        (*(code *)*param_3)(puVar19,&uStack_b0);
        if ((int)puVar19 == 0) {
          return;
        }
        uVar35 = puVar16[1];
        uVar34 = *puVar16;
        *puVar16 = param_2[-2];
        puVar16[1] = param_2[-1];
        param_2[-1] = uVar35;
        param_2[-2] = uVar34;
        return;
      }
    }
    else {
      if (uVar28 == 3) {
        FUN_1092c7330(puVar16,puVar16 + 2,puVar22,param_3);
        return;
      }
      if (uVar28 == 4) {
        func_0x0001092c7490(puVar16,puVar16 + 2,puVar16 + 4,puVar22,param_3);
        return;
      }
      if (uVar28 == 5) {
        func_0x0001092c7584(puVar16,puVar16 + 2,puVar16 + 4,puVar16 + 6,puVar22,param_3);
        return;
      }
    }
    if ((long)uVar28 < 0x18) {
      if ((uStack_bc & 1) == 0) {
        if (puVar16 == param_2) {
          return;
        }
        if (puVar16 + 2 == param_2) {
          return;
        }
        puVar26 = (undefined4 *)((long)puVar16 + 0x1c);
        puVar19 = puVar16 + 2;
        do {
          puVar22 = puVar19;
          uStack_98 = puVar16[3];
          uStack_a0 = puVar16[2];
          uStack_a8 = puVar16[1];
          uStack_b0 = *puVar16;
          puVar19 = &uStack_a0;
          (*(code *)*param_3)(puVar19,&uStack_b0);
          if ((int)puVar19 != 0) {
            uVar5 = *(undefined4 *)puVar22;
            uVar3 = *(undefined4 *)((long)puVar16 + 0x14);
            uVar4 = *(undefined4 *)(puVar16 + 3);
            uVar6 = *(undefined4 *)((long)puVar16 + 0x1c);
            uVar34 = puVar16[3];
            puVar14 = puVar26;
            do {
              puVar30 = puVar14;
              *(undefined8 *)(puVar30 + -3) = *(undefined8 *)(puVar30 + -7);
              *(undefined8 *)(puVar30 + -1) = *(undefined8 *)(puVar30 + -5);
              uStack_a0 = CONCAT44(uVar3,uVar5);
              uStack_b0 = *(undefined8 *)(puVar30 + -0xb);
              uStack_a8 = *(undefined8 *)(puVar30 + -9);
              puVar16 = &uStack_a0;
              uStack_98 = uVar34;
              (*(code *)*param_3)(puVar16,&uStack_b0);
              puVar14 = puVar30 + -4;
            } while (((ulong)puVar16 & 1) != 0);
            puVar30[-7] = uVar5;
            puVar30[-6] = uVar3;
            puVar30[-5] = uVar4;
            puVar30[-4] = uVar6;
          }
          puVar26 = puVar26 + 4;
          puVar19 = puVar22 + 2;
          puVar16 = puVar22;
        } while (puVar22 + 2 != param_2);
        return;
      }
      if (puVar16 == param_2) {
        return;
      }
      if (puVar16 + 2 == param_2) {
        return;
      }
      lVar31 = 0;
      puVar19 = puVar16 + 2;
      puVar22 = puVar16;
      goto LAB_1092c6e80;
    }
    if (param_4 == 0) {
      if (puVar16 == param_2) {
        return;
      }
      uVar25 = uVar28 - 2 >> 1;
      uVar27 = uVar25;
      goto LAB_1092c6f3c;
    }
    puVar19 = puVar16 + (uVar28 & 0xfffffffffffffffe);
    if (uVar28 < 0x81) {
      FUN_1092c7330(puVar19,puVar16,puVar22,param_3);
    }
    else {
      FUN_1092c7330(puVar16,puVar19,puVar22,param_3);
      FUN_1092c7330(puVar16 + 2,puVar19 + -2,param_2 + -4,param_3);
      FUN_1092c7330(puVar16 + 4,puVar19 + 2,param_2 + -6,param_3);
      FUN_1092c7330(puVar19 + -2,puVar19,puVar19 + 2,param_3);
      uVar35 = puVar16[1];
      uVar34 = *puVar16;
      uVar36 = *puVar19;
      puVar16[1] = puVar19[1];
      *puVar16 = uVar36;
      puVar19[1] = uVar35;
      *puVar19 = uVar34;
    }
    param_4 = param_4 + -1;
    if ((uStack_bc & 1) != 0) break;
    uStack_a0 = puVar16[-2];
    uStack_98 = puVar16[-1];
    uStack_a8 = puVar16[1];
    uStack_b0 = *puVar16;
    puVar19 = &uStack_a0;
    (*(code *)*param_3)(puVar19,&uStack_b0);
    if (((ulong)puVar19 & 1) != 0) break;
    uVar3 = *(undefined4 *)puVar16;
    uVar5 = *(undefined4 *)((long)puVar16 + 4);
    uVar12 = *puVar16;
    uVar10 = *puVar16;
    uVar8 = *puVar16;
    uVar36 = *puVar16;
    uVar34 = *puVar16;
    uStack_a0 = *puVar16;
    puVar19 = puVar16 + 1;
    uVar4 = *(undefined4 *)puVar19;
    uVar6 = *(undefined4 *)((long)puVar16 + 0xc);
    uVar13 = *puVar19;
    uVar11 = *puVar19;
    uVar9 = *puVar19;
    uVar7 = *puVar19;
    uVar35 = *puVar19;
    uStack_98 = *puVar19;
    uStack_b0 = param_2[-2];
    uStack_a8 = param_2[-1];
    puVar19 = &uStack_a0;
    (*(code *)*param_3)(puVar19,&uStack_b0);
    puVar20 = puVar16;
    if (((ulong)puVar19 & 1) == 0) {
      do {
        puVar19 = puVar20 + 2;
        if (param_2 <= puVar19) break;
        uStack_a8 = puVar20[3];
        uStack_b0 = *puVar19;
        puVar21 = &uStack_a0;
        uStack_a0 = uVar36;
        uStack_98 = uVar7;
        (*(code *)*param_3)(puVar21,&uStack_b0);
        puVar20 = puVar19;
      } while ((int)puVar21 == 0);
    }
    else {
      do {
        puVar19 = puVar20 + 2;
        uStack_a8 = puVar20[3];
        uStack_b0 = *puVar19;
        puVar21 = &uStack_a0;
        uStack_a0 = uVar34;
        uStack_98 = uVar35;
        (*(code *)*param_3)(puVar21,&uStack_b0);
        puVar20 = puVar19;
      } while (((ulong)puVar21 & 1) == 0);
    }
    puVar20 = param_2;
    puVar21 = param_2;
    if (puVar19 < param_2) {
      do {
        puVar20 = puVar21 + -2;
        uStack_b0 = *puVar20;
        uStack_a8 = puVar21[-1];
        puVar18 = &uStack_a0;
        uStack_a0 = uVar8;
        uStack_98 = uVar9;
        (*(code *)*param_3)(puVar18,&uStack_b0);
        puVar21 = puVar20;
      } while (((ulong)puVar18 & 1) != 0);
    }
    while (puVar19 < puVar20) {
      uVar35 = puVar19[1];
      uVar34 = *puVar19;
      *puVar19 = *puVar20;
      puVar19[1] = puVar20[1];
      puVar20[1] = uVar35;
      *puVar20 = uVar34;
      puVar21 = puVar19;
      do {
        puVar19 = puVar21 + 2;
        uStack_a8 = puVar21[3];
        uStack_b0 = *puVar19;
        puVar18 = &uStack_a0;
        uStack_a0 = uVar10;
        uStack_98 = uVar11;
        (*(code *)*param_3)(puVar18,&uStack_b0);
        puVar24 = puVar20;
        puVar21 = puVar19;
      } while ((int)puVar18 == 0);
      do {
        puVar20 = puVar24 + -2;
        uStack_b0 = *puVar20;
        uStack_a8 = puVar24[-1];
        puVar21 = &uStack_a0;
        uStack_a0 = uVar12;
        uStack_98 = uVar13;
        (*(code *)*param_3)(puVar21,&uStack_b0);
        puVar24 = puVar20;
      } while (((ulong)puVar21 & 1) != 0);
    }
    if (puVar19 + -2 != puVar16) {
      *puVar16 = puVar19[-2];
      puVar16[1] = puVar19[-1];
    }
    uStack_bc = 0;
    *(undefined4 *)(puVar19 + -2) = uVar3;
    *(undefined4 *)((long)puVar19 + -0xc) = uVar5;
    *(undefined4 *)(puVar19 + -1) = uVar4;
    *(undefined4 *)((long)puVar19 + -4) = uVar6;
  }
  lVar31 = 0;
  uVar3 = *(undefined4 *)puVar16;
  uVar5 = *(undefined4 *)((long)puVar16 + 4);
  uVar12 = *puVar16;
  uVar10 = *puVar16;
  uVar8 = *puVar16;
  uVar36 = *puVar16;
  uVar34 = *puVar16;
  puVar19 = puVar16 + 1;
  uVar4 = *(undefined4 *)puVar19;
  uVar6 = *(undefined4 *)((long)puVar16 + 0xc);
  uVar13 = *puVar19;
  uVar11 = *puVar19;
  uVar9 = *puVar19;
  uVar7 = *puVar19;
  uVar35 = *puVar19;
  do {
    uStack_98 = *(undefined8 *)((long)puVar16 + lVar31 + 0x18);
    uStack_a0 = *(undefined8 *)((long)puVar16 + lVar31 + 0x10);
    puVar19 = &uStack_a0;
    uStack_b0 = uVar34;
    uStack_a8 = uVar35;
    (*(code *)*param_3)(puVar19,&uStack_b0);
    lVar31 = lVar31 + 0x10;
  } while (((ulong)puVar19 & 1) != 0);
  puVar20 = (undefined8 *)((long)puVar16 + lVar31);
  puVar19 = param_2;
  if (lVar31 == 0x10) {
    do {
      puVar21 = puVar19;
      if (puVar19 <= puVar20) break;
      puVar21 = puVar19 + -2;
      uStack_a0 = *puVar21;
      uStack_98 = puVar19[-1];
      puVar18 = &uStack_a0;
      uStack_b0 = uVar8;
      uStack_a8 = uVar9;
      (*(code *)*param_3)(puVar18,&uStack_b0);
      puVar19 = puVar21;
    } while (((ulong)puVar18 & 1) == 0);
  }
  else {
    do {
      puVar21 = puVar19 + -2;
      uStack_a0 = *puVar21;
      uStack_98 = puVar19[-1];
      puVar18 = &uStack_a0;
      uStack_b0 = uVar36;
      uStack_a8 = uVar7;
      (*(code *)*param_3)(puVar18,&uStack_b0);
      puVar19 = puVar21;
    } while ((int)puVar18 == 0);
  }
  puVar19 = puVar20;
  puVar18 = puVar20;
  puVar24 = puVar21;
  if (puVar20 < puVar21) {
    do {
      uVar35 = puVar18[1];
      uVar34 = *puVar18;
      *puVar18 = *puVar24;
      puVar18[1] = puVar24[1];
      puVar24[1] = uVar35;
      *puVar24 = uVar34;
      do {
        puVar19 = puVar18 + 2;
        uStack_98 = puVar18[3];
        uStack_a0 = *puVar19;
        puVar17 = &uStack_a0;
        uStack_b0 = uVar10;
        uStack_a8 = uVar11;
        (*(code *)*param_3)(puVar17,&uStack_b0);
        puVar18 = puVar19;
      } while (((ulong)puVar17 & 1) != 0);
      do {
        puVar33 = puVar24 + -2;
        uStack_a0 = *puVar33;
        uStack_98 = puVar24[-1];
        puVar17 = &uStack_a0;
        uStack_b0 = uVar12;
        uStack_a8 = uVar13;
        (*(code *)*param_3)(puVar17,&uStack_b0);
        puVar24 = puVar33;
      } while ((int)puVar17 == 0);
    } while (puVar19 < puVar33);
  }
  puVar18 = puVar19 + -2;
  if (puVar18 != puVar16) {
    *puVar16 = puVar19[-2];
    puVar16[1] = puVar19[-1];
  }
  *(undefined4 *)(puVar19 + -2) = uVar3;
  *(undefined4 *)((long)puVar19 + -0xc) = uVar5;
  *(undefined4 *)(puVar19 + -1) = uVar4;
  *(undefined4 *)((long)puVar19 + -4) = uVar6;
  if (puVar21 <= puVar20) {
    puVar20 = puVar16;
    FUN_1092c76b4(puVar16,puVar18,param_3);
    puVar21 = puVar19;
    FUN_1092c76b4(puVar19,param_2,param_3);
    if ((int)puVar21 != 0) goto LAB_1092c6db4;
    if (((ulong)puVar20 & 1) != 0) goto LAB_1092c6970;
  }
  FUN_1092c6924(puVar16,puVar18,param_3,param_4,uStack_bc & 1);
  uStack_bc = 0;
  goto LAB_1092c6970;
LAB_1092c6e80:
  puVar20 = puVar19;
  uStack_98 = puVar22[3];
  uStack_a0 = puVar22[2];
  uStack_a8 = puVar22[1];
  uStack_b0 = *puVar22;
  puVar19 = &uStack_a0;
  (*(code *)*param_3)(puVar19,&uStack_b0);
  if ((int)puVar19 != 0) {
    uVar5 = *(undefined4 *)puVar20;
    uVar3 = *(undefined4 *)((long)puVar22 + 0x14);
    uVar4 = *(undefined4 *)(puVar22 + 3);
    uVar6 = *(undefined4 *)((long)puVar22 + 0x1c);
    uVar34 = puVar22[3];
    lVar15 = lVar31;
    do {
      lVar32 = lVar15;
      puVar19 = (undefined8 *)((long)puVar16 + lVar32);
      puVar19[2] = *puVar19;
      puVar19[3] = puVar19[1];
      puVar22 = puVar16;
      if (lVar32 == 0) goto LAB_1092c6f08;
      uStack_a0 = CONCAT44(uVar3,uVar5);
      uStack_b0 = puVar19[-2];
      uStack_a8 = puVar19[-1];
      puVar19 = &uStack_a0;
      uStack_98 = uVar34;
      (*(code *)*param_3)(puVar19,&uStack_b0);
      lVar15 = lVar32 + -0x10;
    } while (((ulong)puVar19 & 1) != 0);
    puVar22 = (undefined8 *)((long)puVar16 + lVar32);
LAB_1092c6f08:
    *(undefined4 *)puVar22 = uVar5;
    *(undefined4 *)((long)puVar22 + 4) = uVar3;
    *(undefined4 *)(puVar22 + 1) = uVar4;
    *(undefined4 *)((long)puVar22 + 0xc) = uVar6;
  }
  lVar31 = lVar31 + 0x10;
  puVar19 = puVar20 + 2;
  puVar22 = puVar20;
  if (puVar20 + 2 == param_2) {
    return;
  }
  goto LAB_1092c6e80;
LAB_1092c6f3c:
  do {
    if ((long)uVar27 <= (long)uVar25) {
      uVar23 = uVar27 << 1 | 1;
      puVar19 = puVar16 + uVar23 * 2;
      uVar1 = uVar27 * 2 + 2;
      puVar22 = puVar19;
      uVar29 = uVar23;
      if ((long)uVar1 < (long)uVar28) {
        uStack_a0 = *puVar19;
        uStack_98 = puVar19[1];
        uStack_b0 = puVar19[2];
        uStack_a8 = puVar19[3];
        puVar20 = &uStack_a0;
        (*(code *)*param_3)(puVar20,&uStack_b0);
        puVar22 = puVar19 + 2;
        uVar29 = uVar1;
        if ((int)puVar20 == 0) {
          puVar22 = puVar19;
          uVar29 = uVar23;
        }
      }
      puVar20 = puVar16 + uVar27 * 2;
      uStack_98 = puVar22[1];
      uStack_a0 = *puVar22;
      uStack_b0 = *puVar20;
      uStack_a8 = puVar20[1];
      puVar19 = &uStack_a0;
      (*(code *)*param_3)(puVar19,&uStack_b0);
      if (((ulong)puVar19 & 1) == 0) {
        uVar3 = *(undefined4 *)puVar20;
        uVar5 = *(undefined4 *)((long)puVar20 + 4);
        uVar34 = *puVar20;
        uVar4 = *(undefined4 *)(puVar20 + 1);
        uVar6 = *(undefined4 *)((long)puVar20 + 0xc);
        uVar35 = puVar20[1];
        do {
          puVar19 = puVar22;
          *puVar20 = *puVar19;
          puVar20[1] = puVar19[1];
          if ((long)uVar25 < (long)uVar29) break;
          uVar23 = uVar29 << 1 | 1;
          puVar20 = puVar16 + uVar23 * 2;
          uVar1 = uVar29 * 2 + 2;
          puVar22 = puVar20;
          uVar29 = uVar23;
          if ((long)uVar1 < (long)uVar28) {
            uStack_a0 = *puVar20;
            uStack_98 = puVar20[1];
            uStack_b0 = puVar20[2];
            uStack_a8 = puVar20[3];
            puVar21 = &uStack_a0;
            (*(code *)*param_3)(puVar21,&uStack_b0);
            puVar22 = puVar20 + 2;
            uVar29 = uVar1;
            if ((int)puVar21 == 0) {
              puVar22 = puVar20;
              uVar29 = uVar23;
            }
          }
          uStack_98 = puVar22[1];
          uStack_a0 = *puVar22;
          puVar21 = &uStack_a0;
          uStack_b0 = uVar34;
          uStack_a8 = uVar35;
          (*(code *)*param_3)(puVar21,&uStack_b0);
          puVar20 = puVar19;
        } while ((int)puVar21 == 0);
        *(undefined4 *)puVar19 = uVar3;
        *(undefined4 *)((long)puVar19 + 4) = uVar5;
        *(undefined4 *)(puVar19 + 1) = uVar4;
        *(undefined4 *)((long)puVar19 + 0xc) = uVar6;
      }
    }
    bVar2 = uVar27 != 0;
    uVar27 = uVar27 - 1;
  } while (bVar2);
  do {
    uVar3 = *(undefined4 *)puVar16;
    uVar5 = *(undefined4 *)((long)puVar16 + 4);
    uVar4 = *(undefined4 *)(puVar16 + 1);
    uVar6 = *(undefined4 *)((long)puVar16 + 0xc);
    uVar27 = 0;
    puVar19 = puVar16;
    do {
      uVar1 = uVar27 << 1 | 1;
      uVar25 = uVar27 * 2 + 2;
      uVar23 = uVar1;
      puVar22 = puVar19 + uVar27 * 2 + 2;
      if ((long)uVar25 < (long)uVar28) {
        uStack_a0 = puVar19[uVar27 * 2 + 2];
        uStack_98 = puVar19[uVar27 * 2 + 3];
        uStack_b0 = puVar19[uVar27 * 2 + 4];
        uStack_a8 = puVar19[uVar27 * 2 + 5];
        puVar20 = &uStack_a0;
        (*(code *)*param_3)(puVar20,&uStack_b0);
        uVar23 = uVar25;
        puVar22 = puVar19 + uVar27 * 2 + 4;
        if ((int)puVar20 == 0) {
          uVar23 = uVar1;
          puVar22 = puVar19 + uVar27 * 2 + 2;
        }
      }
      *puVar19 = *puVar22;
      puVar19[1] = puVar22[1];
      uVar27 = uVar23;
      puVar19 = puVar22;
    } while ((long)uVar23 <= (long)(uVar28 - 2 >> 1));
    if (puVar22 == param_2 + -2) {
      *(undefined4 *)puVar22 = uVar3;
      *(undefined4 *)((long)puVar22 + 4) = uVar5;
      *(undefined4 *)(puVar22 + 1) = uVar4;
      *(undefined4 *)((long)puVar22 + 0xc) = uVar6;
    }
    else {
      *puVar22 = param_2[-2];
      puVar22[1] = param_2[-1];
      *(undefined4 *)(param_2 + -2) = uVar3;
      *(undefined4 *)((long)param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -1) = uVar4;
      *(undefined4 *)((long)param_2 + -4) = uVar6;
      lVar31 = (long)((long)puVar22 + (0x10 - (long)puVar16)) >> 4;
      if (1 < lVar31) {
        uVar27 = lVar31 - 2U >> 1;
        puVar20 = puVar16 + uVar27 * 2;
        uStack_a0 = *puVar20;
        uStack_98 = puVar20[1];
        uStack_a8 = puVar22[1];
        uStack_b0 = *puVar22;
        puVar19 = &uStack_a0;
        (*(code *)*param_3)(puVar19,&uStack_b0);
        if ((int)puVar19 != 0) {
          uVar3 = *(undefined4 *)puVar22;
          uVar5 = *(undefined4 *)((long)puVar22 + 4);
          uVar34 = *puVar22;
          uVar4 = *(undefined4 *)(puVar22 + 1);
          uVar6 = *(undefined4 *)((long)puVar22 + 0xc);
          uVar35 = puVar22[1];
          do {
            puVar19 = puVar20;
            *puVar22 = *puVar19;
            puVar22[1] = puVar19[1];
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1 >> 1;
            puVar20 = puVar16 + uVar27 * 2;
            uStack_a0 = *puVar20;
            uStack_98 = puVar20[1];
            puVar21 = &uStack_a0;
            uStack_b0 = uVar34;
            uStack_a8 = uVar35;
            (*(code *)*param_3)(puVar21,&uStack_b0);
            puVar22 = puVar19;
          } while (((ulong)puVar21 & 1) != 0);
          *(undefined4 *)puVar19 = uVar3;
          *(undefined4 *)((long)puVar19 + 4) = uVar5;
          *(undefined4 *)(puVar19 + 1) = uVar4;
          *(undefined4 *)((long)puVar19 + 0xc) = uVar6;
        }
      }
    }
    bVar2 = (long)uVar28 < 3;
    uVar28 = uVar28 - 1;
    param_2 = param_2 + -2;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_1092c6db4:
  param_2 = puVar18;
  if (((ulong)puVar20 & 1) != 0) {
    return;
  }
  goto LAB_1092c6954;
}



/* Entry: 1092c68f0; end: 1092c6923;  */

void FUN_1092c68f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  uint param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined4 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  uint uStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  uStack_ac = param_5;
  func_0x000104c4f740();
LAB_1092c6954:
  puVar21 = param_2 + -2;
  puVar18 = param_1;
LAB_1092c6970:
  while( true ) {
    param_1 = puVar18;
    uVar27 = (long)param_2 - (long)param_1 >> 4;
    if (uVar27 - 2 == 0 || (long)uVar27 < 2) {
      if (uVar27 < 2) {
        return;
      }
      if (uVar27 == 2) {
        uStack_90 = param_2[-2];
        uStack_88 = param_2[-1];
        uStack_98 = param_1[1];
        uStack_a0 = *param_1;
        puVar18 = &uStack_90;
        (*(code *)*param_3)(puVar18,&uStack_a0);
        if ((int)puVar18 == 0) {
          return;
        }
        uVar34 = param_1[1];
        uVar33 = *param_1;
        *param_1 = param_2[-2];
        param_1[1] = param_2[-1];
        param_2[-1] = uVar34;
        param_2[-2] = uVar33;
        return;
      }
    }
    else {
      if (uVar27 == 3) {
        FUN_1092c7330(param_1,param_1 + 2,puVar21,param_3);
        return;
      }
      if (uVar27 == 4) {
        func_0x0001092c7490(param_1,param_1 + 2,param_1 + 4,puVar21,param_3);
        return;
      }
      if (uVar27 == 5) {
        func_0x0001092c7584(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar21,param_3);
        return;
      }
    }
    if ((long)uVar27 < 0x18) {
      if ((uStack_ac & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 2 == param_2) {
          return;
        }
        puVar25 = (undefined4 *)((long)param_1 + 0x1c);
        puVar18 = param_1 + 2;
        do {
          puVar21 = puVar18;
          uStack_88 = param_1[3];
          uStack_90 = param_1[2];
          uStack_98 = param_1[1];
          uStack_a0 = *param_1;
          puVar18 = &uStack_90;
          (*(code *)*param_3)(puVar18,&uStack_a0);
          if ((int)puVar18 != 0) {
            uVar5 = *(undefined4 *)puVar21;
            uVar3 = *(undefined4 *)((long)param_1 + 0x14);
            uVar4 = *(undefined4 *)(param_1 + 3);
            uVar6 = *(undefined4 *)((long)param_1 + 0x1c);
            uVar33 = param_1[3];
            puVar14 = puVar25;
            do {
              puVar29 = puVar14;
              *(undefined8 *)(puVar29 + -3) = *(undefined8 *)(puVar29 + -7);
              *(undefined8 *)(puVar29 + -1) = *(undefined8 *)(puVar29 + -5);
              uStack_90 = CONCAT44(uVar3,uVar5);
              uStack_a0 = *(undefined8 *)(puVar29 + -0xb);
              uStack_98 = *(undefined8 *)(puVar29 + -9);
              puVar18 = &uStack_90;
              uStack_88 = uVar33;
              (*(code *)*param_3)(puVar18,&uStack_a0);
              puVar14 = puVar29 + -4;
            } while (((ulong)puVar18 & 1) != 0);
            puVar29[-7] = uVar5;
            puVar29[-6] = uVar3;
            puVar29[-5] = uVar4;
            puVar29[-4] = uVar6;
          }
          puVar25 = puVar25 + 4;
          puVar18 = puVar21 + 2;
          param_1 = puVar21;
        } while (puVar21 + 2 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar30 = 0;
      puVar18 = param_1 + 2;
      puVar21 = param_1;
      goto LAB_1092c6e80;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar24 = uVar27 - 2 >> 1;
      uVar26 = uVar24;
      goto LAB_1092c6f3c;
    }
    puVar18 = param_1 + (uVar27 & 0xfffffffffffffffe);
    if (uVar27 < 0x81) {
      FUN_1092c7330(puVar18,param_1,puVar21,param_3);
    }
    else {
      FUN_1092c7330(param_1,puVar18,puVar21,param_3);
      FUN_1092c7330(param_1 + 2,puVar18 + -2,param_2 + -4,param_3);
      FUN_1092c7330(param_1 + 4,puVar18 + 2,param_2 + -6,param_3);
      FUN_1092c7330(puVar18 + -2,puVar18,puVar18 + 2,param_3);
      uVar34 = param_1[1];
      uVar33 = *param_1;
      uVar35 = *puVar18;
      param_1[1] = puVar18[1];
      *param_1 = uVar35;
      puVar18[1] = uVar34;
      *puVar18 = uVar33;
    }
    param_4 = param_4 + -1;
    if ((uStack_ac & 1) != 0) break;
    uStack_90 = param_1[-2];
    uStack_88 = param_1[-1];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    puVar18 = &uStack_90;
    (*(code *)*param_3)(puVar18,&uStack_a0);
    if (((ulong)puVar18 & 1) != 0) break;
    uVar3 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)((long)param_1 + 4);
    uVar12 = *param_1;
    uVar10 = *param_1;
    uVar8 = *param_1;
    uVar35 = *param_1;
    uVar33 = *param_1;
    uStack_90 = *param_1;
    puVar18 = param_1 + 1;
    uVar4 = *(undefined4 *)puVar18;
    uVar6 = *(undefined4 *)((long)param_1 + 0xc);
    uVar13 = *puVar18;
    uVar11 = *puVar18;
    uVar9 = *puVar18;
    uVar7 = *puVar18;
    uVar34 = *puVar18;
    uStack_88 = *puVar18;
    uStack_a0 = param_2[-2];
    uStack_98 = param_2[-1];
    puVar18 = &uStack_90;
    (*(code *)*param_3)(puVar18,&uStack_a0);
    puVar19 = param_1;
    if (((ulong)puVar18 & 1) == 0) {
      do {
        puVar18 = puVar19 + 2;
        if (param_2 <= puVar18) break;
        uStack_98 = puVar19[3];
        uStack_a0 = *puVar18;
        puVar20 = &uStack_90;
        uStack_90 = uVar35;
        uStack_88 = uVar7;
        (*(code *)*param_3)(puVar20,&uStack_a0);
        puVar19 = puVar18;
      } while ((int)puVar20 == 0);
    }
    else {
      do {
        puVar18 = puVar19 + 2;
        uStack_98 = puVar19[3];
        uStack_a0 = *puVar18;
        puVar20 = &uStack_90;
        uStack_90 = uVar33;
        uStack_88 = uVar34;
        (*(code *)*param_3)(puVar20,&uStack_a0);
        puVar19 = puVar18;
      } while (((ulong)puVar20 & 1) == 0);
    }
    puVar19 = param_2;
    puVar20 = param_2;
    if (puVar18 < param_2) {
      do {
        puVar19 = puVar20 + -2;
        uStack_a0 = *puVar19;
        uStack_98 = puVar20[-1];
        puVar17 = &uStack_90;
        uStack_90 = uVar8;
        uStack_88 = uVar9;
        (*(code *)*param_3)(puVar17,&uStack_a0);
        puVar20 = puVar19;
      } while (((ulong)puVar17 & 1) != 0);
    }
    while (puVar18 < puVar19) {
      uVar34 = puVar18[1];
      uVar33 = *puVar18;
      *puVar18 = *puVar19;
      puVar18[1] = puVar19[1];
      puVar19[1] = uVar34;
      *puVar19 = uVar33;
      puVar20 = puVar18;
      do {
        puVar18 = puVar20 + 2;
        uStack_98 = puVar20[3];
        uStack_a0 = *puVar18;
        puVar17 = &uStack_90;
        uStack_90 = uVar10;
        uStack_88 = uVar11;
        (*(code *)*param_3)(puVar17,&uStack_a0);
        puVar23 = puVar19;
        puVar20 = puVar18;
      } while ((int)puVar17 == 0);
      do {
        puVar19 = puVar23 + -2;
        uStack_a0 = *puVar19;
        uStack_98 = puVar23[-1];
        puVar20 = &uStack_90;
        uStack_90 = uVar12;
        uStack_88 = uVar13;
        (*(code *)*param_3)(puVar20,&uStack_a0);
        puVar23 = puVar19;
      } while (((ulong)puVar20 & 1) != 0);
    }
    if (puVar18 + -2 != param_1) {
      *param_1 = puVar18[-2];
      param_1[1] = puVar18[-1];
    }
    uStack_ac = 0;
    *(undefined4 *)(puVar18 + -2) = uVar3;
    *(undefined4 *)((long)puVar18 + -0xc) = uVar5;
    *(undefined4 *)(puVar18 + -1) = uVar4;
    *(undefined4 *)((long)puVar18 + -4) = uVar6;
  }
  lVar30 = 0;
  uVar3 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)((long)param_1 + 4);
  uVar12 = *param_1;
  uVar10 = *param_1;
  uVar8 = *param_1;
  uVar35 = *param_1;
  uVar33 = *param_1;
  puVar18 = param_1 + 1;
  uVar4 = *(undefined4 *)puVar18;
  uVar6 = *(undefined4 *)((long)param_1 + 0xc);
  uVar13 = *puVar18;
  uVar11 = *puVar18;
  uVar9 = *puVar18;
  uVar7 = *puVar18;
  uVar34 = *puVar18;
  do {
    uStack_88 = *(undefined8 *)((long)param_1 + lVar30 + 0x18);
    uStack_90 = *(undefined8 *)((long)param_1 + lVar30 + 0x10);
    puVar18 = &uStack_90;
    uStack_a0 = uVar33;
    uStack_98 = uVar34;
    (*(code *)*param_3)(puVar18,&uStack_a0);
    lVar30 = lVar30 + 0x10;
  } while (((ulong)puVar18 & 1) != 0);
  puVar19 = (undefined8 *)((long)param_1 + lVar30);
  puVar18 = param_2;
  if (lVar30 == 0x10) {
    do {
      puVar20 = puVar18;
      if (puVar18 <= puVar19) break;
      puVar20 = puVar18 + -2;
      uStack_90 = *puVar20;
      uStack_88 = puVar18[-1];
      puVar17 = &uStack_90;
      uStack_a0 = uVar8;
      uStack_98 = uVar9;
      (*(code *)*param_3)(puVar17,&uStack_a0);
      puVar18 = puVar20;
    } while (((ulong)puVar17 & 1) == 0);
  }
  else {
    do {
      puVar20 = puVar18 + -2;
      uStack_90 = *puVar20;
      uStack_88 = puVar18[-1];
      puVar17 = &uStack_90;
      uStack_a0 = uVar35;
      uStack_98 = uVar7;
      (*(code *)*param_3)(puVar17,&uStack_a0);
      puVar18 = puVar20;
    } while ((int)puVar17 == 0);
  }
  puVar18 = puVar19;
  puVar17 = puVar19;
  puVar23 = puVar20;
  if (puVar19 < puVar20) {
    do {
      uVar34 = puVar17[1];
      uVar33 = *puVar17;
      *puVar17 = *puVar23;
      puVar17[1] = puVar23[1];
      puVar23[1] = uVar34;
      *puVar23 = uVar33;
      do {
        puVar18 = puVar17 + 2;
        uStack_88 = puVar17[3];
        uStack_90 = *puVar18;
        puVar16 = &uStack_90;
        uStack_a0 = uVar10;
        uStack_98 = uVar11;
        (*(code *)*param_3)(puVar16,&uStack_a0);
        puVar17 = puVar18;
      } while (((ulong)puVar16 & 1) != 0);
      do {
        puVar32 = puVar23 + -2;
        uStack_90 = *puVar32;
        uStack_88 = puVar23[-1];
        puVar16 = &uStack_90;
        uStack_a0 = uVar12;
        uStack_98 = uVar13;
        (*(code *)*param_3)(puVar16,&uStack_a0);
        puVar23 = puVar32;
      } while ((int)puVar16 == 0);
    } while (puVar18 < puVar32);
  }
  puVar17 = puVar18 + -2;
  if (puVar17 != param_1) {
    *param_1 = puVar18[-2];
    param_1[1] = puVar18[-1];
  }
  *(undefined4 *)(puVar18 + -2) = uVar3;
  *(undefined4 *)((long)puVar18 - 0xc) = uVar5;
  *(undefined4 *)(puVar18 + -1) = uVar4;
  *(undefined4 *)((long)puVar18 - 4) = uVar6;
  if (puVar20 <= puVar19) {
    puVar19 = param_1;
    FUN_1092c76b4(param_1,puVar17,param_3);
    puVar20 = puVar18;
    FUN_1092c76b4(puVar18,param_2,param_3);
    if ((int)puVar20 != 0) goto LAB_1092c6db4;
    if (((ulong)puVar19 & 1) != 0) goto LAB_1092c6970;
  }
  FUN_1092c6924(param_1,puVar17,param_3,param_4,uStack_ac & 1);
  uStack_ac = 0;
  goto LAB_1092c6970;
LAB_1092c6e80:
  puVar19 = puVar18;
  uStack_88 = puVar21[3];
  uStack_90 = puVar21[2];
  uStack_98 = puVar21[1];
  uStack_a0 = *puVar21;
  puVar18 = &uStack_90;
  (*(code *)*param_3)(puVar18,&uStack_a0);
  if ((int)puVar18 != 0) {
    uVar5 = *(undefined4 *)puVar19;
    uVar3 = *(undefined4 *)((long)puVar21 + 0x14);
    uVar4 = *(undefined4 *)(puVar21 + 3);
    uVar6 = *(undefined4 *)((long)puVar21 + 0x1c);
    uVar33 = puVar21[3];
    lVar15 = lVar30;
    do {
      lVar31 = lVar15;
      puVar18 = (undefined8 *)((long)param_1 + lVar31);
      puVar18[2] = *puVar18;
      puVar18[3] = puVar18[1];
      puVar21 = param_1;
      if (lVar31 == 0) goto LAB_1092c6f08;
      uStack_90 = CONCAT44(uVar3,uVar5);
      uStack_a0 = puVar18[-2];
      uStack_98 = puVar18[-1];
      puVar18 = &uStack_90;
      uStack_88 = uVar33;
      (*(code *)*param_3)(puVar18,&uStack_a0);
      lVar15 = lVar31 + -0x10;
    } while (((ulong)puVar18 & 1) != 0);
    puVar21 = (undefined8 *)((long)param_1 + lVar31);
LAB_1092c6f08:
    *(undefined4 *)puVar21 = uVar5;
    *(undefined4 *)((long)puVar21 + 4) = uVar3;
    *(undefined4 *)(puVar21 + 1) = uVar4;
    *(undefined4 *)((long)puVar21 + 0xc) = uVar6;
  }
  lVar30 = lVar30 + 0x10;
  puVar18 = puVar19 + 2;
  puVar21 = puVar19;
  if (puVar19 + 2 == param_2) {
    return;
  }
  goto LAB_1092c6e80;
LAB_1092c6f3c:
  do {
    if ((long)uVar26 <= (long)uVar24) {
      uVar22 = uVar26 << 1 | 1;
      puVar18 = param_1 + uVar22 * 2;
      uVar1 = uVar26 * 2 + 2;
      puVar21 = puVar18;
      uVar28 = uVar22;
      if ((long)uVar1 < (long)uVar27) {
        uStack_90 = *puVar18;
        uStack_88 = puVar18[1];
        uStack_a0 = puVar18[2];
        uStack_98 = puVar18[3];
        puVar19 = &uStack_90;
        (*(code *)*param_3)(puVar19,&uStack_a0);
        puVar21 = puVar18 + 2;
        uVar28 = uVar1;
        if ((int)puVar19 == 0) {
          puVar21 = puVar18;
          uVar28 = uVar22;
        }
      }
      puVar19 = param_1 + uVar26 * 2;
      uStack_88 = puVar21[1];
      uStack_90 = *puVar21;
      uStack_a0 = *puVar19;
      uStack_98 = puVar19[1];
      puVar18 = &uStack_90;
      (*(code *)*param_3)(puVar18,&uStack_a0);
      if (((ulong)puVar18 & 1) == 0) {
        uVar3 = *(undefined4 *)puVar19;
        uVar5 = *(undefined4 *)((long)puVar19 + 4);
        uVar33 = *puVar19;
        uVar4 = *(undefined4 *)(puVar19 + 1);
        uVar6 = *(undefined4 *)((long)puVar19 + 0xc);
        uVar34 = puVar19[1];
        do {
          puVar18 = puVar21;
          *puVar19 = *puVar18;
          puVar19[1] = puVar18[1];
          if ((long)uVar24 < (long)uVar28) break;
          uVar22 = uVar28 << 1 | 1;
          puVar19 = param_1 + uVar22 * 2;
          uVar1 = uVar28 * 2 + 2;
          puVar21 = puVar19;
          uVar28 = uVar22;
          if ((long)uVar1 < (long)uVar27) {
            uStack_90 = *puVar19;
            uStack_88 = puVar19[1];
            uStack_a0 = puVar19[2];
            uStack_98 = puVar19[3];
            puVar20 = &uStack_90;
            (*(code *)*param_3)(puVar20,&uStack_a0);
            puVar21 = puVar19 + 2;
            uVar28 = uVar1;
            if ((int)puVar20 == 0) {
              puVar21 = puVar19;
              uVar28 = uVar22;
            }
          }
          uStack_88 = puVar21[1];
          uStack_90 = *puVar21;
          puVar20 = &uStack_90;
          uStack_a0 = uVar33;
          uStack_98 = uVar34;
          (*(code *)*param_3)(puVar20,&uStack_a0);
          puVar19 = puVar18;
        } while ((int)puVar20 == 0);
        *(undefined4 *)puVar18 = uVar3;
        *(undefined4 *)((long)puVar18 + 4) = uVar5;
        *(undefined4 *)(puVar18 + 1) = uVar4;
        *(undefined4 *)((long)puVar18 + 0xc) = uVar6;
      }
    }
    bVar2 = uVar26 != 0;
    uVar26 = uVar26 - 1;
  } while (bVar2);
  do {
    uVar3 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)((long)param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 1);
    uVar6 = *(undefined4 *)((long)param_1 + 0xc);
    uVar26 = 0;
    puVar18 = param_1;
    do {
      uVar1 = uVar26 << 1 | 1;
      uVar24 = uVar26 * 2 + 2;
      uVar22 = uVar1;
      puVar21 = puVar18 + uVar26 * 2 + 2;
      if ((long)uVar24 < (long)uVar27) {
        uStack_90 = puVar18[uVar26 * 2 + 2];
        uStack_88 = puVar18[uVar26 * 2 + 3];
        uStack_a0 = puVar18[uVar26 * 2 + 4];
        uStack_98 = puVar18[uVar26 * 2 + 5];
        puVar19 = &uStack_90;
        (*(code *)*param_3)(puVar19,&uStack_a0);
        uVar22 = uVar24;
        puVar21 = puVar18 + uVar26 * 2 + 4;
        if ((int)puVar19 == 0) {
          uVar22 = uVar1;
          puVar21 = puVar18 + uVar26 * 2 + 2;
        }
      }
      *puVar18 = *puVar21;
      puVar18[1] = puVar21[1];
      uVar26 = uVar22;
      puVar18 = puVar21;
    } while ((long)uVar22 <= (long)(uVar27 - 2 >> 1));
    if (puVar21 == param_2 + -2) {
      *(undefined4 *)puVar21 = uVar3;
      *(undefined4 *)((long)puVar21 + 4) = uVar5;
      *(undefined4 *)(puVar21 + 1) = uVar4;
      *(undefined4 *)((long)puVar21 + 0xc) = uVar6;
    }
    else {
      *puVar21 = param_2[-2];
      puVar21[1] = param_2[-1];
      *(undefined4 *)(param_2 + -2) = uVar3;
      *(undefined4 *)((long)param_2 - 0xc) = uVar5;
      *(undefined4 *)(param_2 + -1) = uVar4;
      *(undefined4 *)((long)param_2 - 4) = uVar6;
      lVar30 = (long)puVar21 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar30) {
        uVar26 = lVar30 - 2U >> 1;
        puVar19 = param_1 + uVar26 * 2;
        uStack_90 = *puVar19;
        uStack_88 = puVar19[1];
        uStack_98 = puVar21[1];
        uStack_a0 = *puVar21;
        puVar18 = &uStack_90;
        (*(code *)*param_3)(puVar18,&uStack_a0);
        if ((int)puVar18 != 0) {
          uVar3 = *(undefined4 *)puVar21;
          uVar5 = *(undefined4 *)((long)puVar21 + 4);
          uVar33 = *puVar21;
          uVar4 = *(undefined4 *)(puVar21 + 1);
          uVar6 = *(undefined4 *)((long)puVar21 + 0xc);
          uVar34 = puVar21[1];
          do {
            puVar18 = puVar19;
            *puVar21 = *puVar18;
            puVar21[1] = puVar18[1];
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1 >> 1;
            puVar19 = param_1 + uVar26 * 2;
            uStack_90 = *puVar19;
            uStack_88 = puVar19[1];
            puVar20 = &uStack_90;
            uStack_a0 = uVar33;
            uStack_98 = uVar34;
            (*(code *)*param_3)(puVar20,&uStack_a0);
            puVar21 = puVar18;
          } while (((ulong)puVar20 & 1) != 0);
          *(undefined4 *)puVar18 = uVar3;
          *(undefined4 *)((long)puVar18 + 4) = uVar5;
          *(undefined4 *)(puVar18 + 1) = uVar4;
          *(undefined4 *)((long)puVar18 + 0xc) = uVar6;
        }
      }
    }
    bVar2 = (long)uVar27 < 3;
    uVar27 = uVar27 - 1;
    param_2 = param_2 + -2;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_1092c6db4:
  param_2 = puVar17;
  if (((ulong)puVar19 & 1) != 0) {
    return;
  }
  goto LAB_1092c6954;
}



/* Entry: 1092c6924; end: 1092c732f;  */

void FUN_1092c6924(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  uint param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined4 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  uint uStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_8c = param_5;
LAB_1092c6954:
  puVar21 = param_2 + -2;
  puVar18 = param_1;
LAB_1092c6970:
  while( true ) {
    param_1 = puVar18;
    uVar27 = (long)param_2 - (long)param_1 >> 4;
    if (uVar27 - 2 == 0 || (long)uVar27 < 2) {
      if (uVar27 < 2) {
        return;
      }
      if (uVar27 == 2) {
        uStack_70 = param_2[-2];
        uStack_68 = param_2[-1];
        uStack_78 = param_1[1];
        uStack_80 = *param_1;
        puVar18 = &uStack_70;
        (*(code *)*param_3)(puVar18,&uStack_80);
        if ((int)puVar18 == 0) {
          return;
        }
        uVar34 = param_1[1];
        uVar33 = *param_1;
        *param_1 = param_2[-2];
        param_1[1] = param_2[-1];
        param_2[-1] = uVar34;
        param_2[-2] = uVar33;
        return;
      }
    }
    else {
      if (uVar27 == 3) {
        FUN_1092c7330(param_1,param_1 + 2,puVar21,param_3);
        return;
      }
      if (uVar27 == 4) {
        func_0x0001092c7490(param_1,param_1 + 2,param_1 + 4,puVar21,param_3);
        return;
      }
      if (uVar27 == 5) {
        func_0x0001092c7584(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar21,param_3);
        return;
      }
    }
    if ((long)uVar27 < 0x18) {
      if ((uStack_8c & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 2 == param_2) {
          return;
        }
        puVar25 = (undefined4 *)((long)param_1 + 0x1c);
        puVar18 = param_1 + 2;
        do {
          puVar21 = puVar18;
          uStack_68 = param_1[3];
          uStack_70 = param_1[2];
          uStack_78 = param_1[1];
          uStack_80 = *param_1;
          puVar18 = &uStack_70;
          (*(code *)*param_3)(puVar18,&uStack_80);
          if ((int)puVar18 != 0) {
            uVar5 = *(undefined4 *)puVar21;
            uVar3 = *(undefined4 *)((long)param_1 + 0x14);
            uVar4 = *(undefined4 *)(param_1 + 3);
            uVar6 = *(undefined4 *)((long)param_1 + 0x1c);
            uVar33 = param_1[3];
            puVar14 = puVar25;
            do {
              puVar29 = puVar14;
              *(undefined8 *)(puVar29 + -3) = *(undefined8 *)(puVar29 + -7);
              *(undefined8 *)(puVar29 + -1) = *(undefined8 *)(puVar29 + -5);
              uStack_70 = CONCAT44(uVar3,uVar5);
              uStack_80 = *(undefined8 *)(puVar29 + -0xb);
              uStack_78 = *(undefined8 *)(puVar29 + -9);
              puVar18 = &uStack_70;
              uStack_68 = uVar33;
              (*(code *)*param_3)(puVar18,&uStack_80);
              puVar14 = puVar29 + -4;
            } while (((ulong)puVar18 & 1) != 0);
            puVar29[-7] = uVar5;
            puVar29[-6] = uVar3;
            puVar29[-5] = uVar4;
            puVar29[-4] = uVar6;
          }
          puVar25 = puVar25 + 4;
          puVar18 = puVar21 + 2;
          param_1 = puVar21;
        } while (puVar21 + 2 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar30 = 0;
      puVar18 = param_1 + 2;
      puVar21 = param_1;
      goto LAB_1092c6e80;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar24 = uVar27 - 2 >> 1;
      uVar26 = uVar24;
      goto LAB_1092c6f3c;
    }
    puVar18 = param_1 + (uVar27 & 0xfffffffffffffffe);
    if (uVar27 < 0x81) {
      FUN_1092c7330(puVar18,param_1,puVar21,param_3);
    }
    else {
      FUN_1092c7330(param_1,puVar18,puVar21,param_3);
      FUN_1092c7330(param_1 + 2,puVar18 + -2,param_2 + -4,param_3);
      FUN_1092c7330(param_1 + 4,puVar18 + 2,param_2 + -6,param_3);
      FUN_1092c7330(puVar18 + -2,puVar18,puVar18 + 2,param_3);
      uVar34 = param_1[1];
      uVar33 = *param_1;
      uVar35 = *puVar18;
      param_1[1] = puVar18[1];
      *param_1 = uVar35;
      puVar18[1] = uVar34;
      *puVar18 = uVar33;
    }
    param_4 = param_4 + -1;
    if ((uStack_8c & 1) != 0) break;
    uStack_70 = param_1[-2];
    uStack_68 = param_1[-1];
    uStack_78 = param_1[1];
    uStack_80 = *param_1;
    puVar18 = &uStack_70;
    (*(code *)*param_3)(puVar18,&uStack_80);
    if (((ulong)puVar18 & 1) != 0) break;
    uVar3 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)((long)param_1 + 4);
    uVar12 = *param_1;
    uVar10 = *param_1;
    uVar8 = *param_1;
    uVar35 = *param_1;
    uVar33 = *param_1;
    uStack_70 = *param_1;
    puVar18 = param_1 + 1;
    uVar4 = *(undefined4 *)puVar18;
    uVar6 = *(undefined4 *)((long)param_1 + 0xc);
    uVar13 = *puVar18;
    uVar11 = *puVar18;
    uVar9 = *puVar18;
    uVar7 = *puVar18;
    uVar34 = *puVar18;
    uStack_68 = *puVar18;
    uStack_80 = param_2[-2];
    uStack_78 = param_2[-1];
    puVar18 = &uStack_70;
    (*(code *)*param_3)(puVar18,&uStack_80);
    puVar19 = param_1;
    if (((ulong)puVar18 & 1) == 0) {
      do {
        puVar18 = puVar19 + 2;
        if (param_2 <= puVar18) break;
        uStack_78 = puVar19[3];
        uStack_80 = *puVar18;
        puVar20 = &uStack_70;
        uStack_70 = uVar35;
        uStack_68 = uVar7;
        (*(code *)*param_3)(puVar20,&uStack_80);
        puVar19 = puVar18;
      } while ((int)puVar20 == 0);
    }
    else {
      do {
        puVar18 = puVar19 + 2;
        uStack_78 = puVar19[3];
        uStack_80 = *puVar18;
        puVar20 = &uStack_70;
        uStack_70 = uVar33;
        uStack_68 = uVar34;
        (*(code *)*param_3)(puVar20,&uStack_80);
        puVar19 = puVar18;
      } while (((ulong)puVar20 & 1) == 0);
    }
    puVar19 = param_2;
    puVar20 = param_2;
    if (puVar18 < param_2) {
      do {
        puVar19 = puVar20 + -2;
        uStack_80 = *puVar19;
        uStack_78 = puVar20[-1];
        puVar17 = &uStack_70;
        uStack_70 = uVar8;
        uStack_68 = uVar9;
        (*(code *)*param_3)(puVar17,&uStack_80);
        puVar20 = puVar19;
      } while (((ulong)puVar17 & 1) != 0);
    }
    while (puVar18 < puVar19) {
      uVar34 = puVar18[1];
      uVar33 = *puVar18;
      *puVar18 = *puVar19;
      puVar18[1] = puVar19[1];
      puVar19[1] = uVar34;
      *puVar19 = uVar33;
      puVar20 = puVar18;
      do {
        puVar18 = puVar20 + 2;
        uStack_78 = puVar20[3];
        uStack_80 = *puVar18;
        puVar17 = &uStack_70;
        uStack_70 = uVar10;
        uStack_68 = uVar11;
        (*(code *)*param_3)(puVar17,&uStack_80);
        puVar23 = puVar19;
        puVar20 = puVar18;
      } while ((int)puVar17 == 0);
      do {
        puVar19 = puVar23 + -2;
        uStack_80 = *puVar19;
        uStack_78 = puVar23[-1];
        puVar20 = &uStack_70;
        uStack_70 = uVar12;
        uStack_68 = uVar13;
        (*(code *)*param_3)(puVar20,&uStack_80);
        puVar23 = puVar19;
      } while (((ulong)puVar20 & 1) != 0);
    }
    if (puVar18 + -2 != param_1) {
      *param_1 = puVar18[-2];
      param_1[1] = puVar18[-1];
    }
    uStack_8c = 0;
    *(undefined4 *)(puVar18 + -2) = uVar3;
    *(undefined4 *)((long)puVar18 + -0xc) = uVar5;
    *(undefined4 *)(puVar18 + -1) = uVar4;
    *(undefined4 *)((long)puVar18 + -4) = uVar6;
  }
  lVar30 = 0;
  uVar3 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)((long)param_1 + 4);
  uVar12 = *param_1;
  uVar10 = *param_1;
  uVar8 = *param_1;
  uVar35 = *param_1;
  uVar33 = *param_1;
  puVar18 = param_1 + 1;
  uVar4 = *(undefined4 *)puVar18;
  uVar6 = *(undefined4 *)((long)param_1 + 0xc);
  uVar13 = *puVar18;
  uVar11 = *puVar18;
  uVar9 = *puVar18;
  uVar7 = *puVar18;
  uVar34 = *puVar18;
  do {
    uStack_68 = *(undefined8 *)((long)param_1 + lVar30 + 0x18);
    uStack_70 = *(undefined8 *)((long)param_1 + lVar30 + 0x10);
    puVar18 = &uStack_70;
    uStack_80 = uVar33;
    uStack_78 = uVar34;
    (*(code *)*param_3)(puVar18,&uStack_80);
    lVar30 = lVar30 + 0x10;
  } while (((ulong)puVar18 & 1) != 0);
  puVar19 = (undefined8 *)((long)param_1 + lVar30);
  puVar18 = param_2;
  if (lVar30 == 0x10) {
    do {
      puVar20 = puVar18;
      if (puVar18 <= puVar19) break;
      puVar20 = puVar18 + -2;
      uStack_70 = *puVar20;
      uStack_68 = puVar18[-1];
      puVar17 = &uStack_70;
      uStack_80 = uVar8;
      uStack_78 = uVar9;
      (*(code *)*param_3)(puVar17,&uStack_80);
      puVar18 = puVar20;
    } while (((ulong)puVar17 & 1) == 0);
  }
  else {
    do {
      puVar20 = puVar18 + -2;
      uStack_70 = *puVar20;
      uStack_68 = puVar18[-1];
      puVar17 = &uStack_70;
      uStack_80 = uVar35;
      uStack_78 = uVar7;
      (*(code *)*param_3)(puVar17,&uStack_80);
      puVar18 = puVar20;
    } while ((int)puVar17 == 0);
  }
  puVar18 = puVar19;
  puVar17 = puVar19;
  puVar23 = puVar20;
  if (puVar19 < puVar20) {
    do {
      uVar34 = puVar17[1];
      uVar33 = *puVar17;
      *puVar17 = *puVar23;
      puVar17[1] = puVar23[1];
      puVar23[1] = uVar34;
      *puVar23 = uVar33;
      do {
        puVar18 = puVar17 + 2;
        uStack_68 = puVar17[3];
        uStack_70 = *puVar18;
        puVar16 = &uStack_70;
        uStack_80 = uVar10;
        uStack_78 = uVar11;
        (*(code *)*param_3)(puVar16,&uStack_80);
        puVar17 = puVar18;
      } while (((ulong)puVar16 & 1) != 0);
      do {
        puVar32 = puVar23 + -2;
        uStack_70 = *puVar32;
        uStack_68 = puVar23[-1];
        puVar16 = &uStack_70;
        uStack_80 = uVar12;
        uStack_78 = uVar13;
        (*(code *)*param_3)(puVar16,&uStack_80);
        puVar23 = puVar32;
      } while ((int)puVar16 == 0);
    } while (puVar18 < puVar32);
  }
  puVar17 = puVar18 + -2;
  if (puVar17 != param_1) {
    *param_1 = puVar18[-2];
    param_1[1] = puVar18[-1];
  }
  *(undefined4 *)(puVar18 + -2) = uVar3;
  *(undefined4 *)((long)puVar18 - 0xc) = uVar5;
  *(undefined4 *)(puVar18 + -1) = uVar4;
  *(undefined4 *)((long)puVar18 - 4) = uVar6;
  if (puVar20 <= puVar19) {
    puVar19 = param_1;
    FUN_1092c76b4(param_1,puVar17,param_3);
    puVar20 = puVar18;
    FUN_1092c76b4(puVar18,param_2,param_3);
    if ((int)puVar20 != 0) goto LAB_1092c6db4;
    if (((ulong)puVar19 & 1) != 0) goto LAB_1092c6970;
  }
  FUN_1092c6924(param_1,puVar17,param_3,param_4,uStack_8c & 1);
  uStack_8c = 0;
  goto LAB_1092c6970;
LAB_1092c6e80:
  puVar19 = puVar18;
  uStack_68 = puVar21[3];
  uStack_70 = puVar21[2];
  uStack_78 = puVar21[1];
  uStack_80 = *puVar21;
  puVar18 = &uStack_70;
  (*(code *)*param_3)(puVar18,&uStack_80);
  if ((int)puVar18 != 0) {
    uVar5 = *(undefined4 *)puVar19;
    uVar3 = *(undefined4 *)((long)puVar21 + 0x14);
    uVar4 = *(undefined4 *)(puVar21 + 3);
    uVar6 = *(undefined4 *)((long)puVar21 + 0x1c);
    uVar33 = puVar21[3];
    lVar15 = lVar30;
    do {
      lVar31 = lVar15;
      puVar18 = (undefined8 *)((long)param_1 + lVar31);
      puVar18[2] = *puVar18;
      puVar18[3] = puVar18[1];
      puVar21 = param_1;
      if (lVar31 == 0) goto LAB_1092c6f08;
      uStack_70 = CONCAT44(uVar3,uVar5);
      uStack_80 = puVar18[-2];
      uStack_78 = puVar18[-1];
      puVar18 = &uStack_70;
      uStack_68 = uVar33;
      (*(code *)*param_3)(puVar18,&uStack_80);
      lVar15 = lVar31 + -0x10;
    } while (((ulong)puVar18 & 1) != 0);
    puVar21 = (undefined8 *)((long)param_1 + lVar31);
LAB_1092c6f08:
    *(undefined4 *)puVar21 = uVar5;
    *(undefined4 *)((long)puVar21 + 4) = uVar3;
    *(undefined4 *)(puVar21 + 1) = uVar4;
    *(undefined4 *)((long)puVar21 + 0xc) = uVar6;
  }
  lVar30 = lVar30 + 0x10;
  puVar18 = puVar19 + 2;
  puVar21 = puVar19;
  if (puVar19 + 2 == param_2) {
    return;
  }
  goto LAB_1092c6e80;
LAB_1092c6f3c:
  do {
    if ((long)uVar26 <= (long)uVar24) {
      uVar22 = uVar26 << 1 | 1;
      puVar18 = param_1 + uVar22 * 2;
      uVar1 = uVar26 * 2 + 2;
      puVar21 = puVar18;
      uVar28 = uVar22;
      if ((long)uVar1 < (long)uVar27) {
        uStack_70 = *puVar18;
        uStack_68 = puVar18[1];
        uStack_80 = puVar18[2];
        uStack_78 = puVar18[3];
        puVar19 = &uStack_70;
        (*(code *)*param_3)(puVar19,&uStack_80);
        puVar21 = puVar18 + 2;
        uVar28 = uVar1;
        if ((int)puVar19 == 0) {
          puVar21 = puVar18;
          uVar28 = uVar22;
        }
      }
      puVar19 = param_1 + uVar26 * 2;
      uStack_68 = puVar21[1];
      uStack_70 = *puVar21;
      uStack_80 = *puVar19;
      uStack_78 = puVar19[1];
      puVar18 = &uStack_70;
      (*(code *)*param_3)(puVar18,&uStack_80);
      if (((ulong)puVar18 & 1) == 0) {
        uVar3 = *(undefined4 *)puVar19;
        uVar5 = *(undefined4 *)((long)puVar19 + 4);
        uVar33 = *puVar19;
        uVar4 = *(undefined4 *)(puVar19 + 1);
        uVar6 = *(undefined4 *)((long)puVar19 + 0xc);
        uVar34 = puVar19[1];
        do {
          puVar18 = puVar21;
          *puVar19 = *puVar18;
          puVar19[1] = puVar18[1];
          if ((long)uVar24 < (long)uVar28) break;
          uVar22 = uVar28 << 1 | 1;
          puVar19 = param_1 + uVar22 * 2;
          uVar1 = uVar28 * 2 + 2;
          puVar21 = puVar19;
          uVar28 = uVar22;
          if ((long)uVar1 < (long)uVar27) {
            uStack_70 = *puVar19;
            uStack_68 = puVar19[1];
            uStack_80 = puVar19[2];
            uStack_78 = puVar19[3];
            puVar20 = &uStack_70;
            (*(code *)*param_3)(puVar20,&uStack_80);
            puVar21 = puVar19 + 2;
            uVar28 = uVar1;
            if ((int)puVar20 == 0) {
              puVar21 = puVar19;
              uVar28 = uVar22;
            }
          }
          uStack_68 = puVar21[1];
          uStack_70 = *puVar21;
          puVar20 = &uStack_70;
          uStack_80 = uVar33;
          uStack_78 = uVar34;
          (*(code *)*param_3)(puVar20,&uStack_80);
          puVar19 = puVar18;
        } while ((int)puVar20 == 0);
        *(undefined4 *)puVar18 = uVar3;
        *(undefined4 *)((long)puVar18 + 4) = uVar5;
        *(undefined4 *)(puVar18 + 1) = uVar4;
        *(undefined4 *)((long)puVar18 + 0xc) = uVar6;
      }
    }
    bVar2 = uVar26 != 0;
    uVar26 = uVar26 - 1;
  } while (bVar2);
  do {
    uVar3 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)((long)param_1 + 4);
    uVar4 = *(undefined4 *)(param_1 + 1);
    uVar6 = *(undefined4 *)((long)param_1 + 0xc);
    uVar26 = 0;
    puVar18 = param_1;
    do {
      uVar1 = uVar26 << 1 | 1;
      uVar24 = uVar26 * 2 + 2;
      uVar22 = uVar1;
      puVar21 = puVar18 + uVar26 * 2 + 2;
      if ((long)uVar24 < (long)uVar27) {
        uStack_70 = puVar18[uVar26 * 2 + 2];
        uStack_68 = puVar18[uVar26 * 2 + 3];
        uStack_80 = puVar18[uVar26 * 2 + 4];
        uStack_78 = puVar18[uVar26 * 2 + 5];
        puVar19 = &uStack_70;
        (*(code *)*param_3)(puVar19,&uStack_80);
        uVar22 = uVar24;
        puVar21 = puVar18 + uVar26 * 2 + 4;
        if ((int)puVar19 == 0) {
          uVar22 = uVar1;
          puVar21 = puVar18 + uVar26 * 2 + 2;
        }
      }
      *puVar18 = *puVar21;
      puVar18[1] = puVar21[1];
      uVar26 = uVar22;
      puVar18 = puVar21;
    } while ((long)uVar22 <= (long)(uVar27 - 2 >> 1));
    if (puVar21 == param_2 + -2) {
      *(undefined4 *)puVar21 = uVar3;
      *(undefined4 *)((long)puVar21 + 4) = uVar5;
      *(undefined4 *)(puVar21 + 1) = uVar4;
      *(undefined4 *)((long)puVar21 + 0xc) = uVar6;
    }
    else {
      *puVar21 = param_2[-2];
      puVar21[1] = param_2[-1];
      *(undefined4 *)(param_2 + -2) = uVar3;
      *(undefined4 *)((long)param_2 - 0xc) = uVar5;
      *(undefined4 *)(param_2 + -1) = uVar4;
      *(undefined4 *)((long)param_2 - 4) = uVar6;
      lVar30 = (long)puVar21 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar30) {
        uVar26 = lVar30 - 2U >> 1;
        puVar19 = param_1 + uVar26 * 2;
        uStack_70 = *puVar19;
        uStack_68 = puVar19[1];
        uStack_78 = puVar21[1];
        uStack_80 = *puVar21;
        puVar18 = &uStack_70;
        (*(code *)*param_3)(puVar18,&uStack_80);
        if ((int)puVar18 != 0) {
          uVar3 = *(undefined4 *)puVar21;
          uVar5 = *(undefined4 *)((long)puVar21 + 4);
          uVar33 = *puVar21;
          uVar4 = *(undefined4 *)(puVar21 + 1);
          uVar6 = *(undefined4 *)((long)puVar21 + 0xc);
          uVar34 = puVar21[1];
          do {
            puVar18 = puVar19;
            *puVar21 = *puVar18;
            puVar21[1] = puVar18[1];
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1 >> 1;
            puVar19 = param_1 + uVar26 * 2;
            uStack_70 = *puVar19;
            uStack_68 = puVar19[1];
            puVar20 = &uStack_70;
            uStack_80 = uVar33;
            uStack_78 = uVar34;
            (*(code *)*param_3)(puVar20,&uStack_80);
            puVar21 = puVar18;
          } while (((ulong)puVar20 & 1) != 0);
          *(undefined4 *)puVar18 = uVar3;
          *(undefined4 *)((long)puVar18 + 4) = uVar5;
          *(undefined4 *)(puVar18 + 1) = uVar4;
          *(undefined4 *)((long)puVar18 + 0xc) = uVar6;
        }
      }
    }
    bVar2 = (long)uVar27 < 3;
    uVar27 = uVar27 - 1;
    param_2 = param_2 + -2;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_1092c6db4:
  param_2 = puVar17;
  if (((ulong)puVar19 & 1) != 0) {
    return;
  }
  goto LAB_1092c6954;
}



/* Entry: 1092c7330; end: 1092c748f;  */

void FUN_1092c7330(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar5 = &uStack_40;
  (*(code *)*param_4)(puVar5,&uStack_50);
  if (((ulong)puVar5 & 1) == 0) {
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    puVar5 = &uStack_40;
    (*(code *)*param_4)(puVar5,&uStack_50);
    if ((int)puVar5 != 0) {
      uVar7 = param_2[1];
      uVar6 = *param_2;
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_3[1] = uVar7;
      *param_3 = uVar6;
      uStack_38 = param_2[1];
      uStack_40 = *param_2;
      uStack_48 = param_1[1];
      uStack_50 = *param_1;
      puVar5 = &uStack_40;
      (*(code *)*param_4)(puVar5,&uStack_50);
      if ((int)puVar5 != 0) {
        uVar7 = param_1[1];
        uVar6 = *param_1;
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_2[1] = uVar7;
        *param_2 = uVar6;
      }
    }
  }
  else {
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    puVar5 = &uStack_40;
    (*(code *)*param_4)(puVar5,&uStack_50);
    uVar1 = *(undefined4 *)param_1;
    uVar3 = *(undefined4 *)((long)param_1 + 4);
    uStack_50 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar4 = *(undefined4 *)((long)param_1 + 0xc);
    uStack_48 = param_1[1];
    if ((int)puVar5 == 0) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      *(undefined4 *)param_2 = uVar1;
      *(undefined4 *)((long)param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 1) = uVar2;
      *(undefined4 *)((long)param_2 + 0xc) = uVar4;
      uStack_38 = param_3[1];
      uStack_40 = *param_3;
      puVar5 = &uStack_40;
      (*(code *)*param_4)(puVar5,&uStack_50);
      if ((int)puVar5 != 0) {
        uVar7 = param_2[1];
        uVar6 = *param_2;
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_3[1] = uVar7;
        *param_3 = uVar6;
      }
    }
    else {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      *(undefined4 *)param_3 = uVar1;
      *(undefined4 *)((long)param_3 + 4) = uVar3;
      *(undefined4 *)(param_3 + 1) = uVar2;
      *(undefined4 *)((long)param_3 + 0xc) = uVar4;
    }
  }
  return;
}



/* Entry: 1092c7490; end: 1092c76b3;  */

void FUN_1092c7490(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1092c7330();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  puVar1 = &uStack_50;
  (*(code *)*param_5)(puVar1,&uStack_60);
  if ((int)puVar1 != 0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    param_4[1] = uVar3;
    *param_4 = uVar2;
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    puVar1 = &uStack_50;
    (*(code *)*param_5)(puVar1,&uStack_60);
    if ((int)puVar1 != 0) {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_3[1] = uVar3;
      *param_3 = uVar2;
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      uStack_58 = param_1[1];
      uStack_60 = *param_1;
      puVar1 = &uStack_50;
      (*(code *)*param_5)(puVar1,&uStack_60);
      if ((int)puVar1 != 0) {
        uVar3 = param_1[1];
        uVar2 = *param_1;
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_2[1] = uVar3;
        *param_2 = uVar2;
      }
    }
  }
  return;
}



/* Entry: 1092c76b4; end: 1092c78af;  */

bool FUN_1092c76b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      uStack_68 = param_2[-1];
      uStack_70 = param_2[-2];
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      puVar7 = &uStack_70;
      (*(code *)*param_3)(puVar7,&uStack_80);
      if ((int)puVar7 == 0) {
        return true;
      }
      uVar14 = param_1[1];
      uVar13 = *param_1;
      *param_1 = param_2[-2];
      param_1[1] = param_2[-1];
      param_2[-1] = uVar14;
      param_2[-2] = uVar13;
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      FUN_1092c7330(param_1,param_1 + 2,param_2 + -2,param_3);
      return true;
    }
    if (uVar8 == 4) {
      func_0x0001092c7490(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
      return true;
    }
    if (uVar8 == 5) {
      func_0x0001092c7584(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  FUN_1092c7330(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar9 = 0;
    iVar12 = 0;
    puVar7 = param_1 + 4;
    puVar10 = param_1 + 6;
    do {
      uStack_68 = puVar10[1];
      uStack_70 = *puVar10;
      uStack_78 = puVar7[1];
      uStack_80 = *puVar7;
      puVar7 = &uStack_70;
      (*(code *)*param_3)(puVar7,&uStack_80);
      if ((int)puVar7 != 0) {
        uVar2 = *(undefined4 *)puVar10;
        uVar4 = *(undefined4 *)((long)puVar10 + 4);
        uVar13 = *puVar10;
        uVar3 = *(undefined4 *)(puVar10 + 1);
        uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
        uVar14 = puVar10[1];
        lVar6 = lVar9;
        do {
          lVar11 = lVar6;
          *(undefined8 *)((long)param_1 + lVar11 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x20);
          *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x28);
          puVar7 = param_1;
          if (lVar11 == -0x20) goto LAB_1092c7834;
          uStack_80 = *(undefined8 *)((long)param_1 + lVar11 + 0x10);
          uStack_78 = *(undefined8 *)((long)param_1 + lVar11 + 0x18);
          puVar7 = &uStack_70;
          uStack_70 = uVar13;
          uStack_68 = uVar14;
          (*(code *)*param_3)(puVar7,&uStack_80);
          lVar6 = lVar11 + -0x10;
        } while (((ulong)puVar7 & 1) != 0);
        puVar7 = (undefined8 *)((long)param_1 + lVar11 + 0x20);
LAB_1092c7834:
        *(undefined4 *)puVar7 = uVar2;
        *(undefined4 *)((long)puVar7 + 4) = uVar4;
        *(undefined4 *)(puVar7 + 1) = uVar3;
        *(undefined4 *)((long)puVar7 + 0xc) = uVar5;
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          return puVar10 + 2 == param_2;
        }
      }
      puVar1 = puVar10 + 2;
      lVar9 = lVar9 + 0x10;
      puVar7 = puVar10;
      puVar10 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}



/* Entry: 1092c78b0; end: 1092c78eb;  */

ulong * FUN_1092c78b0(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar9 = param_2;
    FUN_1092c68f0();
    *param_1 = (ulong)param_2;
    param_1[1] = (ulong)param_2;
    param_1[2] = (ulong)(param_2 + (long)puVar9 * 2);
    return param_2;
  }
  FUN_1092c68dc();
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 3) + 1;
  if (uVar7 >> 0x3d == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    puVar9 = param_1;
    puStack_58 = param_1;
    FUN_1092c61ac();
    puStack_70 = (ulong *)((long)puVar9 + lVar10);
    puStack_60 = puVar9 + uVar6;
    puStack_68 = puStack_70 + 1;
    *puStack_70 = *param_2;
    puStack_78 = puVar9;
    FUN_1092c79f4(param_1,&puStack_78);
    puVar9 = (ulong *)param_1[1];
    if (puStack_68 != puStack_70) {
      puStack_68 = (ulong *)((long)puStack_68 +
                            ((long)puStack_70 + (7 - (long)puStack_68) & 0xfffffffffffffff8U));
    }
    if (puStack_78 != (ulong *)0x0) {
      __ZdlPv();
    }
    return puVar9;
  }
  FUN_1092c6198();
  if (puStack_68 != puStack_70) {
    puStack_68 = (ulong *)((long)puStack_68 +
                          (((long)puStack_70 - (long)puStack_68) + 7U & 0xfffffffffffffff8));
  }
  if (puStack_78 != (ulong *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar8 = puVar2; puVar3 != puVar8; puVar8 = puVar8 + 1) {
    *puVar4 = *puVar8;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = (ulong)puVar1;
  uVar7 = *param_1;
  *param_1 = (ulong)puVar1;
  param_1[1] = (ulong)puVar2;
  param_2[1] = uVar7;
  uVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar7;
  uVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar7;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 1092c78ec; end: 1092c79f3;  */

long * FUN_1092c78ec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar9 = param_1;
    plStack_38 = param_1;
    FUN_1092c61ac();
    puStack_50 = (undefined8 *)((long)plVar9 + lVar10);
    plStack_40 = plVar9 + uVar7;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *param_2;
    plStack_58 = plVar9;
    FUN_1092c79f4(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined8 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_1092c6198();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined8 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar4));
  puVar5 = puVar2;
  for (puVar8 = puVar3; puVar4 != puVar8; puVar8 = puVar8 + 1) {
    *puVar5 = *puVar8;
    puVar5 = puVar5 + 1;
  }
  param_2[1] = puVar2;
  lVar10 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 1092c79f4; end: 1092c7a5f;  */

void FUN_1092c79f4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar6 = puVar2; puVar3 != puVar6; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1092c7a60; end: 1092c83cb;  */

void FUN_1092c7a60(int *param_1,int *param_2,int *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  double dVar30;
  
LAB_1092c7a94:
  piVar13 = param_2 + -2;
  piVar19 = param_1;
LAB_1092c7aa8:
  while( true ) {
    param_1 = piVar19;
    uVar12 = (long)param_2 - (long)param_1 >> 3;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        iVar16 = param_2[-1];
        iVar25 = *param_1;
        iVar21 = param_1[1];
        iVar14 = param_2[-2] - *param_3;
        iVar24 = iVar16 - param_3[1];
        iVar6 = iVar25 - *param_3;
        iVar7 = iVar21 - param_3[1];
        if ((uint)(iVar6 * iVar6 + iVar7 * iVar7) <= (uint)(iVar14 * iVar14 + iVar24 * iVar24)) {
          return;
        }
        *param_1 = param_2[-2];
        param_1[1] = iVar16;
        param_2[-2] = iVar25;
        param_2[-1] = iVar21;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        piVar19 = param_1 + 2;
        iVar25 = *piVar19;
        iVar24 = param_1[3];
        iVar16 = *param_1;
        iVar6 = param_1[1];
        iVar21 = *param_3;
        iVar7 = param_3[1];
        uVar4 = (iVar25 - iVar21) * (iVar25 - iVar21) + (iVar24 - iVar7) * (iVar24 - iVar7);
        iVar14 = *piVar13;
        iVar8 = param_2[-1];
        uVar5 = (iVar14 - iVar21) * (iVar14 - iVar21) + (iVar8 - iVar7) * (iVar8 - iVar7);
        if (uVar4 < (uint)((iVar16 - iVar21) * (iVar16 - iVar21) + (iVar6 - iVar7) * (iVar6 - iVar7)
                          )) {
          if (uVar5 < uVar4) {
            *param_1 = iVar14;
            param_1[1] = iVar8;
          }
          else {
            *param_1 = iVar25;
            param_1[1] = iVar24;
            *piVar19 = iVar16;
            param_1[3] = iVar6;
            iVar25 = param_2[-1];
            iVar21 = *piVar13 - *param_3;
            iVar14 = iVar25 - param_3[1];
            iVar24 = iVar16 - *param_3;
            iVar7 = iVar6 - param_3[1];
            if ((uint)(iVar24 * iVar24 + iVar7 * iVar7) <= (uint)(iVar21 * iVar21 + iVar14 * iVar14)
               ) {
              return;
            }
            *piVar19 = *piVar13;
            param_1[3] = iVar25;
          }
          *piVar13 = iVar16;
          param_2[-1] = iVar6;
        }
        else if (uVar5 < uVar4) {
          *piVar19 = iVar14;
          param_1[3] = iVar8;
          *piVar13 = iVar25;
          param_2[-1] = iVar24;
          iVar25 = *param_1;
          iVar16 = param_1[1];
          iVar21 = *piVar19 - *param_3;
          iVar14 = param_1[3] - param_3[1];
          iVar24 = iVar25 - *param_3;
          iVar6 = iVar16 - param_3[1];
          if ((uint)(iVar21 * iVar21 + iVar14 * iVar14) < (uint)(iVar24 * iVar24 + iVar6 * iVar6)) {
            *param_1 = *piVar19;
            param_1[1] = param_1[3];
            *piVar19 = iVar25;
            param_1[3] = iVar16;
            return;
          }
        }
        return;
      }
      if (uVar12 == 4) {
        piVar19 = param_1 + 2;
        piVar10 = param_1 + 4;
        FUN_1092c83cc();
        iVar16 = param_2[-1];
        iVar25 = *piVar10;
        iVar21 = param_1[5];
        iVar14 = *piVar13 - *param_3;
        iVar24 = iVar16 - param_3[1];
        iVar6 = iVar25 - *param_3;
        iVar7 = iVar21 - param_3[1];
        if ((uint)(iVar14 * iVar14 + iVar24 * iVar24) < (uint)(iVar6 * iVar6 + iVar7 * iVar7)) {
          *piVar10 = *piVar13;
          param_1[5] = iVar16;
          *piVar13 = iVar25;
          param_2[-1] = iVar21;
          iVar25 = *piVar19;
          iVar16 = param_1[3];
          iVar21 = *piVar10 - *param_3;
          iVar14 = param_1[5] - param_3[1];
          iVar24 = iVar25 - *param_3;
          iVar6 = iVar16 - param_3[1];
          if ((uint)(iVar21 * iVar21 + iVar14 * iVar14) < (uint)(iVar24 * iVar24 + iVar6 * iVar6)) {
            *piVar19 = *piVar10;
            param_1[3] = param_1[5];
            *piVar10 = iVar25;
            param_1[5] = iVar16;
            iVar25 = *param_1;
            iVar16 = param_1[1];
            iVar21 = *piVar19 - *param_3;
            iVar14 = param_1[3] - param_3[1];
            iVar24 = iVar25 - *param_3;
            iVar6 = iVar16 - param_3[1];
            if ((uint)(iVar21 * iVar21 + iVar14 * iVar14) < (uint)(iVar24 * iVar24 + iVar6 * iVar6))
            {
              *param_1 = *piVar19;
              param_1[1] = param_1[3];
              *piVar19 = iVar25;
              param_1[3] = iVar16;
            }
          }
        }
        return;
      }
      if (uVar12 == 5) {
        piVar19 = param_1 + 2;
        piVar10 = param_1 + 4;
        piVar11 = param_1 + 6;
        FUN_1092c84b8();
        iVar16 = param_2[-1];
        iVar25 = *piVar11;
        iVar21 = param_1[7];
        iVar14 = *piVar13 - *param_3;
        iVar24 = iVar16 - param_3[1];
        iVar6 = iVar25 - *param_3;
        iVar7 = iVar21 - param_3[1];
        if ((uint)(iVar14 * iVar14 + iVar24 * iVar24) < (uint)(iVar6 * iVar6 + iVar7 * iVar7)) {
          *piVar11 = *piVar13;
          param_1[7] = iVar16;
          *piVar13 = iVar25;
          param_2[-1] = iVar21;
          iVar25 = *piVar10;
          iVar16 = param_1[5];
          iVar21 = *piVar11 - *param_3;
          iVar14 = param_1[7] - param_3[1];
          iVar24 = iVar25 - *param_3;
          iVar6 = iVar16 - param_3[1];
          if ((uint)(iVar21 * iVar21 + iVar14 * iVar14) < (uint)(iVar24 * iVar24 + iVar6 * iVar6)) {
            *piVar10 = *piVar11;
            param_1[5] = param_1[7];
            *piVar11 = iVar25;
            param_1[7] = iVar16;
            iVar25 = *piVar19;
            iVar16 = param_1[3];
            iVar21 = *piVar10 - *param_3;
            iVar14 = param_1[5] - param_3[1];
            iVar24 = iVar25 - *param_3;
            iVar6 = iVar16 - param_3[1];
            if ((uint)(iVar21 * iVar21 + iVar14 * iVar14) < (uint)(iVar24 * iVar24 + iVar6 * iVar6))
            {
              *piVar19 = *piVar10;
              param_1[3] = param_1[5];
              *piVar10 = iVar25;
              param_1[5] = iVar16;
              iVar25 = *param_1;
              iVar16 = param_1[1];
              iVar21 = *piVar19 - *param_3;
              iVar14 = param_1[3] - param_3[1];
              iVar24 = iVar25 - *param_3;
              iVar6 = iVar16 - param_3[1];
              if ((uint)(iVar21 * iVar21 + iVar14 * iVar14) <
                  (uint)(iVar24 * iVar24 + iVar6 * iVar6)) {
                *param_1 = *piVar19;
                param_1[1] = param_1[3];
                *piVar19 = iVar25;
                param_1[3] = iVar16;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar12 < 0x18) {
      piVar19 = param_1 + 2;
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2 || piVar19 == param_2) {
          return;
        }
        iVar25 = *param_3;
        piVar13 = param_1 + 3;
        do {
          piVar10 = piVar19;
          iVar16 = param_1[2];
          iVar14 = param_1[3];
          iVar21 = *param_1;
          iVar24 = iVar14 - param_3[1];
          iVar6 = param_1[1] - param_3[1];
          piVar19 = piVar13;
          if ((uint)((iVar16 - iVar25) * (iVar16 - iVar25) + iVar24 * iVar24) <
              (uint)((iVar21 - iVar25) * (iVar21 - iVar25) + iVar6 * iVar6)) {
            do {
              piVar11 = piVar19;
              piVar11[-1] = iVar21;
              *piVar11 = piVar11[-2];
              iVar21 = piVar11[-5];
              iVar25 = iVar16 - *param_3;
              iVar24 = iVar14 - param_3[1];
              iVar6 = iVar21 - *param_3;
              iVar7 = piVar11[-4] - param_3[1];
              piVar19 = piVar11 + -2;
            } while ((uint)(iVar25 * iVar25 + iVar24 * iVar24) <
                     (uint)(iVar6 * iVar6 + iVar7 * iVar7));
            piVar11[-3] = iVar16;
            piVar11[-2] = iVar14;
            iVar25 = *param_3;
          }
          piVar19 = piVar10 + 2;
          piVar13 = piVar13 + 2;
          param_1 = piVar10;
        } while (piVar19 != param_2);
        return;
      }
      if (param_1 == param_2 || piVar19 == param_2) {
        return;
      }
      lVar27 = 0;
      iVar25 = *param_3;
      piVar13 = param_1;
      goto LAB_1092c7fa8;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar15 = uVar12 - 2 >> 1;
      uVar22 = uVar15;
      goto LAB_1092c8064;
    }
    piVar19 = param_1 + (uVar12 & 0xfffffffffffffffe);
    if (uVar12 < 0x81) {
      FUN_1092c83cc(piVar19,param_1,piVar13,param_3);
    }
    else {
      FUN_1092c83cc(param_1,piVar19,piVar13,param_3);
      FUN_1092c83cc(param_1 + 2,piVar19 + -2,param_2 + -4,param_3);
      FUN_1092c83cc(param_1 + 4,piVar19 + 2,param_2 + -6,param_3);
      FUN_1092c83cc(piVar19 + -2,piVar19,piVar19 + 2,param_3);
      uVar29 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)piVar19;
      *(undefined8 *)piVar19 = uVar29;
    }
    param_4 = param_4 + -1;
    iVar25 = *param_1;
    if ((param_5 & 1) != 0) break;
    iVar14 = param_1[1];
    iVar16 = *param_3;
    iVar21 = param_3[1];
    dVar30 = (double)(uint)((iVar25 - iVar16) * (iVar25 - iVar16) +
                           (iVar14 - iVar21) * (iVar14 - iVar21));
    if ((double)(uint)((param_1[-2] - iVar16) * (param_1[-2] - iVar16) +
                      (param_1[-1] - iVar21) * (param_1[-1] - iVar21)) < dVar30) goto LAB_1092c7be4;
    piVar10 = param_1;
    if ((double)(uint)((param_2[-2] - iVar16) * (param_2[-2] - iVar16) +
                      (param_2[-1] - iVar21) * (param_2[-1] - iVar21)) <= dVar30) {
      do {
        piVar19 = piVar10 + 2;
        if (param_2 <= piVar19) break;
        piVar11 = piVar10 + 3;
        piVar10 = piVar19;
      } while ((double)(uint)((*piVar19 - iVar16) * (*piVar19 - iVar16) +
                             (*piVar11 - iVar21) * (*piVar11 - iVar21)) <= dVar30);
    }
    else {
      do {
        piVar19 = piVar10 + 2;
        piVar11 = piVar10 + 3;
        piVar10 = piVar19;
      } while ((double)(uint)((*piVar19 - iVar16) * (*piVar19 - iVar16) +
                             (*piVar11 - iVar21) * (*piVar11 - iVar21)) <= dVar30);
    }
    piVar10 = param_2;
    piVar11 = param_2;
    if (piVar19 < param_2) {
      do {
        piVar10 = piVar11 + -2;
        piVar17 = piVar11 + -1;
        piVar11 = piVar10;
      } while (dVar30 < (double)(uint)((*piVar10 - iVar16) * (*piVar10 - iVar16) +
                                      (*piVar17 - iVar21) * (*piVar17 - iVar21)));
    }
    if (piVar19 < piVar10) {
      iVar16 = *piVar19;
      iVar21 = *piVar10;
      do {
        iVar24 = piVar19[1];
        iVar6 = piVar10[1];
        *piVar19 = iVar21;
        piVar19[1] = iVar6;
        *piVar10 = iVar16;
        piVar10[1] = iVar24;
        iVar24 = *param_3;
        iVar6 = param_3[1];
        uVar4 = (iVar25 - iVar24) * (iVar25 - iVar24) + (iVar14 - iVar6) * (iVar14 - iVar6);
        piVar11 = piVar19;
        do {
          piVar19 = piVar11 + 2;
          iVar16 = *piVar19;
          piVar17 = piVar11 + 3;
          piVar23 = piVar10;
          piVar11 = piVar19;
        } while ((uint)((iVar16 - iVar24) * (iVar16 - iVar24) +
                       (*piVar17 - iVar6) * (*piVar17 - iVar6)) <= uVar4);
        do {
          piVar10 = piVar23 + -2;
          iVar21 = *piVar10;
          piVar11 = piVar23 + -1;
          piVar23 = piVar10;
        } while (uVar4 < (uint)((iVar21 - iVar24) * (iVar21 - iVar24) +
                               (*piVar11 - iVar6) * (*piVar11 - iVar6)));
      } while (piVar19 < piVar10);
    }
    if (piVar19 + -2 != param_1) {
      *(undefined8 *)param_1 = *(undefined8 *)(piVar19 + -2);
    }
    param_5 = 0;
    piVar19[-2] = iVar25;
    piVar19[-1] = iVar14;
  }
  iVar14 = param_1[1];
  iVar16 = *param_3;
  iVar21 = param_3[1];
  dVar30 = (double)(uint)((iVar25 - iVar16) * (iVar25 - iVar16) +
                         (iVar14 - iVar21) * (iVar14 - iVar21));
LAB_1092c7be4:
  lVar27 = 0;
  do {
    iVar24 = *(int *)((long)param_1 + lVar27 + 8);
    iVar6 = *(int *)((long)param_1 + lVar27 + 0xc) - iVar21;
    lVar27 = lVar27 + 8;
  } while ((double)(uint)((iVar24 - iVar16) * (iVar24 - iVar16) + iVar6 * iVar6) < dVar30);
  piVar10 = (int *)((long)param_1 + lVar27);
  piVar19 = param_2;
  if (lVar27 == 8) {
    do {
      piVar11 = piVar19;
      if (piVar19 <= piVar10) break;
      piVar11 = piVar19 + -2;
      piVar17 = piVar19 + -1;
      piVar19 = piVar11;
    } while (dVar30 <= (double)(uint)((*piVar11 - iVar16) * (*piVar11 - iVar16) +
                                     (*piVar17 - iVar21) * (*piVar17 - iVar21)));
  }
  else {
    do {
      piVar11 = piVar19 + -2;
      piVar17 = piVar19 + -1;
      piVar19 = piVar11;
    } while (dVar30 <= (double)(uint)((*piVar11 - iVar16) * (*piVar11 - iVar16) +
                                     (*piVar17 - iVar21) * (*piVar17 - iVar21)));
  }
  piVar19 = piVar10;
  if (piVar10 < piVar11) {
    iVar16 = *piVar11;
    piVar17 = piVar11;
    do {
      iVar21 = piVar19[1];
      iVar6 = piVar17[1];
      *piVar19 = iVar16;
      piVar19[1] = iVar6;
      *piVar17 = iVar24;
      piVar17[1] = iVar21;
      iVar21 = *param_3;
      iVar6 = param_3[1];
      uVar4 = (iVar25 - iVar21) * (iVar25 - iVar21) + (iVar14 - iVar6) * (iVar14 - iVar6);
      piVar23 = piVar19;
      do {
        piVar19 = piVar23 + 2;
        iVar24 = *piVar19;
        piVar3 = piVar23 + 3;
        piVar18 = piVar17;
        piVar23 = piVar19;
      } while ((uint)((iVar24 - iVar21) * (iVar24 - iVar21) + (*piVar3 - iVar6) * (*piVar3 - iVar6))
               < uVar4);
      do {
        piVar17 = piVar18 + -2;
        iVar16 = *piVar17;
        piVar23 = piVar18 + -1;
        piVar18 = piVar17;
      } while (uVar4 <= (uint)((iVar16 - iVar21) * (iVar16 - iVar21) +
                              (*piVar23 - iVar6) * (*piVar23 - iVar6)));
    } while (piVar19 < piVar17);
  }
  piVar17 = piVar19 + -2;
  if (piVar17 != param_1) {
    *(undefined8 *)param_1 = *(undefined8 *)piVar17;
  }
  piVar19[-2] = iVar25;
  piVar19[-1] = iVar14;
  if (piVar11 <= piVar10) {
    piVar10 = param_1;
    FUN_1092c86e8(param_1,piVar17,param_3);
    piVar11 = piVar19;
    FUN_1092c86e8(piVar19,param_2,param_3);
    if ((int)piVar11 != 0) goto LAB_1092c7e9c;
    if (((ulong)piVar10 & 1) != 0) goto LAB_1092c7aa8;
  }
  FUN_1092c7a60(param_1,piVar17,param_3,param_4,param_5 & 1);
  param_5 = 0;
  goto LAB_1092c7aa8;
LAB_1092c7fa8:
  iVar16 = piVar13[2];
  iVar14 = piVar13[3];
  iVar21 = *piVar13;
  iVar24 = iVar14 - param_3[1];
  iVar6 = piVar13[1] - param_3[1];
  lVar9 = lVar27;
  if ((uint)((iVar16 - iVar25) * (iVar16 - iVar25) + iVar24 * iVar24) <
      (uint)((iVar21 - iVar25) * (iVar21 - iVar25) + iVar6 * iVar6)) {
    do {
      lVar20 = lVar9;
      *(int *)((long)param_1 + lVar20 + 8) = iVar21;
      *(undefined4 *)((long)param_1 + lVar20 + 0xc) = *(undefined4 *)((long)param_1 + lVar20 + 4);
      piVar13 = param_1;
      if (lVar20 == 0) goto LAB_1092c8038;
      iVar21 = *(int *)((long)param_1 + lVar20 + -8);
      iVar25 = iVar16 - *param_3;
      iVar24 = iVar14 - param_3[1];
      iVar6 = iVar21 - *param_3;
      iVar7 = *(int *)((long)param_1 + lVar20 + -4) - param_3[1];
      lVar9 = lVar20 + -8;
    } while ((uint)(iVar25 * iVar25 + iVar24 * iVar24) < (uint)(iVar6 * iVar6 + iVar7 * iVar7));
    piVar13 = (int *)((long)param_1 + lVar20);
LAB_1092c8038:
    *piVar13 = iVar16;
    piVar13[1] = iVar14;
    iVar25 = *param_3;
  }
  piVar10 = piVar19 + 2;
  lVar27 = lVar27 + 8;
  piVar13 = piVar19;
  piVar19 = piVar10;
  if (piVar10 == param_2) {
    return;
  }
  goto LAB_1092c7fa8;
LAB_1092c8064:
  do {
    if ((long)uVar22 <= (long)uVar15) {
      uVar26 = uVar22 << 1 | 1;
      piVar19 = param_1 + uVar26 * 2;
      uVar28 = uVar22 * 2 + 2;
      iVar25 = *param_3;
      if ((long)uVar28 < (long)uVar12) {
        iVar16 = param_3[1];
        iVar21 = piVar19[2] - iVar25;
        piVar13 = piVar19 + 2;
        if ((uint)(iVar21 * iVar21 + (piVar19[3] - iVar16) * (piVar19[3] - iVar16)) <=
            (uint)((*piVar19 - iVar25) * (*piVar19 - iVar25) +
                  (piVar19[1] - iVar16) * (piVar19[1] - iVar16))) {
          piVar13 = piVar19;
          uVar28 = uVar26;
        }
      }
      else {
        iVar16 = param_3[1];
        piVar13 = piVar19;
        uVar28 = uVar26;
      }
      piVar19 = param_1 + uVar22 * 2;
      iVar21 = *piVar13;
      iVar24 = piVar13[1];
      iVar14 = *piVar19;
      iVar6 = piVar19[1];
      if ((uint)((iVar14 - iVar25) * (iVar14 - iVar25) + (iVar6 - iVar16) * (iVar6 - iVar16)) <=
          (uint)((iVar21 - iVar25) * (iVar21 - iVar25) + (iVar24 - iVar16) * (iVar24 - iVar16))) {
        do {
          piVar10 = piVar13;
          *piVar19 = iVar21;
          piVar19[1] = iVar24;
          if ((long)uVar15 < (long)uVar28) break;
          uVar1 = uVar28 << 1 | 1;
          piVar19 = param_1 + uVar1 * 2;
          uVar26 = uVar28 * 2 + 2;
          iVar25 = *param_3;
          iVar16 = param_3[1];
          piVar13 = piVar19;
          uVar28 = uVar1;
          if (((long)uVar26 < (long)uVar12) &&
             (iVar21 = piVar19[2] - iVar25, piVar13 = piVar19 + 2, uVar28 = uVar26,
             (uint)(iVar21 * iVar21 + (piVar19[3] - iVar16) * (piVar19[3] - iVar16)) <=
             (uint)((*piVar19 - iVar25) * (*piVar19 - iVar25) +
                   (piVar19[1] - iVar16) * (piVar19[1] - iVar16)))) {
            piVar13 = piVar19;
            uVar28 = uVar1;
          }
          iVar21 = *piVar13;
          iVar24 = piVar13[1];
          piVar19 = piVar10;
        } while ((uint)((iVar14 - iVar25) * (iVar14 - iVar25) + (iVar6 - iVar16) * (iVar6 - iVar16))
                 <= (uint)((iVar21 - iVar25) * (iVar21 - iVar25) +
                          (iVar24 - iVar16) * (iVar24 - iVar16)));
        *piVar10 = iVar14;
        piVar10[1] = iVar6;
      }
    }
    bVar2 = uVar22 != 0;
    uVar22 = uVar22 - 1;
  } while (bVar2);
  do {
    iVar25 = *param_1;
    iVar16 = param_1[1];
    piVar19 = param_1;
    uVar22 = 0;
    do {
      uVar28 = uVar22 << 1 | 1;
      uVar15 = uVar22 * 2 + 2;
      piVar13 = piVar19 + uVar22 * 2 + 2;
      uVar26 = uVar28;
      if (((long)uVar15 < (long)uVar12) &&
         (iVar21 = piVar19[uVar22 * 2 + 2] - *param_3, iVar14 = piVar19[uVar22 * 2 + 3] - param_3[1]
         , iVar24 = piVar19[uVar22 * 2 + 4] - *param_3, iVar6 = piVar19[uVar22 * 2 + 5] - param_3[1]
         , piVar13 = piVar19 + uVar22 * 2 + 4, uVar26 = uVar15,
         (uint)(iVar24 * iVar24 + iVar6 * iVar6) <= (uint)(iVar21 * iVar21 + iVar14 * iVar14))) {
        piVar13 = piVar19 + uVar22 * 2 + 2;
        uVar26 = uVar28;
      }
      *(undefined8 *)piVar19 = *(undefined8 *)piVar13;
      piVar19 = piVar13;
      uVar22 = uVar26;
    } while ((long)uVar26 <= (long)(uVar12 - 2 >> 1));
    if (piVar13 == param_2 + -2) {
      *piVar13 = iVar25;
      piVar13[1] = iVar16;
    }
    else {
      *(undefined8 *)piVar13 = *(undefined8 *)(param_2 + -2);
      param_2[-2] = iVar25;
      param_2[-1] = iVar16;
      lVar27 = (long)piVar13 + (8 - (long)param_1) >> 3;
      if (1 < lVar27) {
        uVar22 = lVar27 - 2U >> 1;
        piVar19 = param_1 + uVar22 * 2;
        iVar25 = *piVar19;
        iVar21 = piVar19[1];
        iVar16 = *piVar13;
        iVar14 = piVar13[1];
        iVar24 = iVar25 - *param_3;
        iVar6 = iVar21 - param_3[1];
        iVar7 = iVar16 - *param_3;
        iVar8 = iVar14 - param_3[1];
        if ((uint)(iVar24 * iVar24 + iVar6 * iVar6) < (uint)(iVar7 * iVar7 + iVar8 * iVar8)) {
          do {
            piVar10 = piVar19;
            *piVar13 = iVar25;
            piVar13[1] = iVar21;
            if (uVar22 == 0) break;
            uVar22 = uVar22 - 1 >> 1;
            piVar19 = param_1 + uVar22 * 2;
            iVar25 = *piVar19;
            iVar21 = piVar19[1];
            iVar24 = iVar25 - *param_3;
            iVar6 = iVar21 - param_3[1];
            iVar7 = iVar16 - *param_3;
            iVar8 = iVar14 - param_3[1];
            piVar13 = piVar10;
          } while ((uint)(iVar24 * iVar24 + iVar6 * iVar6) < (uint)(iVar7 * iVar7 + iVar8 * iVar8));
          *piVar10 = iVar16;
          piVar10[1] = iVar14;
        }
      }
    }
    bVar2 = (long)uVar12 < 3;
    uVar12 = uVar12 - 1;
    param_2 = param_2 + -2;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_1092c7e9c:
  param_2 = piVar17;
  if (((ulong)piVar10 & 1) != 0) {
    return;
  }
  goto LAB_1092c7a94;
}



/* Entry: 1092c83cc; end: 1092c84b7;  */

void FUN_1092c83cc(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar1 = *param_2;
  iVar5 = param_2[1];
  iVar2 = *param_1;
  iVar6 = param_1[1];
  iVar3 = *param_4;
  iVar7 = param_4[1];
  uVar9 = (iVar1 - iVar3) * (iVar1 - iVar3) + (iVar5 - iVar7) * (iVar5 - iVar7);
  iVar4 = *param_3;
  iVar8 = param_3[1];
  uVar10 = (iVar4 - iVar3) * (iVar4 - iVar3) + (iVar8 - iVar7) * (iVar8 - iVar7);
  if (uVar9 < (uint)((iVar2 - iVar3) * (iVar2 - iVar3) + (iVar6 - iVar7) * (iVar6 - iVar7))) {
    if (uVar10 < uVar9) {
      *param_1 = iVar4;
      param_1[1] = iVar8;
    }
    else {
      *param_1 = iVar1;
      param_1[1] = iVar5;
      *param_2 = iVar2;
      param_2[1] = iVar6;
      iVar1 = param_3[1];
      iVar3 = *param_3 - *param_4;
      iVar4 = iVar1 - param_4[1];
      iVar5 = iVar2 - *param_4;
      iVar7 = iVar6 - param_4[1];
      if ((uint)(iVar5 * iVar5 + iVar7 * iVar7) <= (uint)(iVar3 * iVar3 + iVar4 * iVar4)) {
        return;
      }
      *param_2 = *param_3;
      param_2[1] = iVar1;
    }
    *param_3 = iVar2;
    param_3[1] = iVar6;
  }
  else if (uVar10 < uVar9) {
    *param_2 = iVar4;
    param_2[1] = iVar8;
    *param_3 = iVar1;
    param_3[1] = iVar5;
    iVar2 = param_2[1];
    iVar1 = *param_1;
    iVar3 = param_1[1];
    iVar4 = *param_2 - *param_4;
    iVar5 = iVar2 - param_4[1];
    iVar6 = iVar1 - *param_4;
    iVar7 = iVar3 - param_4[1];
    if ((uint)(iVar4 * iVar4 + iVar5 * iVar5) < (uint)(iVar6 * iVar6 + iVar7 * iVar7)) {
      *param_1 = *param_2;
      param_1[1] = iVar2;
      *param_2 = iVar1;
      param_2[1] = iVar3;
      return;
    }
  }
  return;
}



/* Entry: 1092c84b8; end: 1092c86e7;  */

void FUN_1092c84b8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_1092c83cc();
  iVar2 = param_4[1];
  iVar1 = *param_3;
  iVar3 = param_3[1];
  iVar4 = *param_4 - *param_5;
  iVar5 = iVar2 - param_5[1];
  iVar6 = iVar1 - *param_5;
  iVar7 = iVar3 - param_5[1];
  if ((uint)(iVar4 * iVar4 + iVar5 * iVar5) < (uint)(iVar6 * iVar6 + iVar7 * iVar7)) {
    *param_3 = *param_4;
    param_3[1] = iVar2;
    *param_4 = iVar1;
    param_4[1] = iVar3;
    iVar2 = param_3[1];
    iVar1 = *param_2;
    iVar3 = param_2[1];
    iVar4 = *param_3 - *param_5;
    iVar5 = iVar2 - param_5[1];
    iVar6 = iVar1 - *param_5;
    iVar7 = iVar3 - param_5[1];
    if ((uint)(iVar4 * iVar4 + iVar5 * iVar5) < (uint)(iVar6 * iVar6 + iVar7 * iVar7)) {
      *param_2 = *param_3;
      param_2[1] = iVar2;
      *param_3 = iVar1;
      param_3[1] = iVar3;
      iVar2 = param_2[1];
      iVar1 = *param_1;
      iVar3 = param_1[1];
      iVar4 = *param_2 - *param_5;
      iVar5 = iVar2 - param_5[1];
      iVar6 = iVar1 - *param_5;
      iVar7 = iVar3 - param_5[1];
      if ((uint)(iVar4 * iVar4 + iVar5 * iVar5) < (uint)(iVar6 * iVar6 + iVar7 * iVar7)) {
        *param_1 = *param_2;
        param_1[1] = iVar2;
        *param_2 = iVar1;
        param_2[1] = iVar3;
      }
    }
  }
  return;
}



/* Entry: 1092c86e8; end: 1092c88d3;  */

bool FUN_1092c86e8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  
  uVar8 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      iVar1 = param_2[-1];
      iVar11 = *param_1;
      iVar12 = param_1[1];
      iVar2 = param_2[-2] - *param_3;
      iVar3 = iVar1 - param_3[1];
      iVar4 = iVar11 - *param_3;
      iVar5 = iVar12 - param_3[1];
      if ((uint)(iVar4 * iVar4 + iVar5 * iVar5) <= (uint)(iVar2 * iVar2 + iVar3 * iVar3)) {
        return true;
      }
      *param_1 = param_2[-2];
      param_1[1] = iVar1;
      param_2[-2] = iVar11;
      param_2[-1] = iVar12;
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      FUN_1092c83cc(param_1,param_1 + 2,param_2 + -2,param_3);
      return true;
    }
    if (uVar8 == 4) {
      func_0x0001092c84b8(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
      return true;
    }
    if (uVar8 == 5) {
      func_0x0001092c85b0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  FUN_1092c83cc(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    piVar13 = param_1 + 6;
    piVar15 = param_1 + 4;
    do {
      piVar9 = piVar13;
      iVar1 = *piVar9;
      iVar2 = piVar9[1];
      iVar12 = *piVar15;
      iVar3 = iVar1 - *param_3;
      iVar4 = iVar2 - param_3[1];
      iVar5 = iVar12 - *param_3;
      iVar6 = piVar15[1] - param_3[1];
      lVar7 = lVar10;
      if ((uint)(iVar3 * iVar3 + iVar4 * iVar4) < (uint)(iVar5 * iVar5 + iVar6 * iVar6)) {
        do {
          lVar14 = lVar7;
          *(int *)((long)param_1 + lVar14 + 0x18) = iVar12;
          *(undefined4 *)((long)param_1 + lVar14 + 0x1c) =
               *(undefined4 *)((long)param_1 + lVar14 + 0x14);
          piVar13 = param_1;
          if (lVar14 == -0x10) goto LAB_1092c8870;
          iVar12 = *(int *)((long)param_1 + lVar14 + 8);
          iVar3 = iVar1 - *param_3;
          iVar4 = iVar2 - param_3[1];
          iVar5 = iVar12 - *param_3;
          iVar6 = *(int *)((long)param_1 + lVar14 + 0xc) - param_3[1];
          lVar7 = lVar14 + -8;
        } while ((uint)(iVar3 * iVar3 + iVar4 * iVar4) < (uint)(iVar5 * iVar5 + iVar6 * iVar6));
        piVar13 = (int *)((long)param_1 + lVar14 + 0x10);
LAB_1092c8870:
        *piVar13 = iVar1;
        piVar13[1] = iVar2;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return piVar9 + 2 == param_2;
        }
      }
      lVar10 = lVar10 + 8;
      piVar13 = piVar9 + 2;
      piVar15 = piVar9;
    } while (piVar9 + 2 != param_2);
  }
  return true;
}



/* Entry: 1092c88d4; end: 1092c8953;  */

void FUN_1092c88d4(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_1092c78b0(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092c8954; end: 1092c8a27;  */

void FUN_1092c8954(double ***param_1,long *param_2,double ****param_3)

{
  ulong *puVar1;
  int *piVar2;
  double ***pppdVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  double ****ppppdVar9;
  double ****ppppdVar10;
  long lVar11;
  double ****extraout_x8;
  double ***pppdVar12;
  ulong uVar13;
  long *extraout_x8_00;
  int iVar14;
  long lVar15;
  double ***pppdVar16;
  double ***pppdVar17;
  long *plVar18;
  long lVar19;
  double ****ppppdVar20;
  double ***pppdVar21;
  double ***pppdVar22;
  double **ppdVar23;
  undefined4 auStack_1a0 [4];
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  double ***pppdStack_180;
  long lStack_178;
  double **ppdStack_170;
  double **ppdStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  double ***pppdStack_150;
  double **ppdStack_148;
  double **ppdStack_140;
  undefined8 uStack_138;
  double **ppdStack_130;
  undefined8 uStack_128;
  double ***pppdStack_120;
  double ***pppdStack_118;
  double ***pppdStack_110;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  float fStack_f8;
  float fStack_f4;
  double **ppdStack_f0;
  double ***pppdStack_e8;
  double ***pppdStack_e0;
  double **ppdStack_d8;
  long *plStack_d0;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  lVar11 = *param_2;
  if ((double ****)(param_2[2] - lVar11 >> 3) < param_3) {
    if ((ulong)param_3 >> 0x3d != 0) {
      FUN_1092c6198();
      if (lStack_38 != lStack_40) {
        lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      pcStack_58 = FUN_1092c8a28;
      pppdVar21 = *param_3;
      pppdVar17 = param_3[1];
      pppdVar16 = (double ***)((long)pppdVar17 - (long)pppdVar21 >> 3);
      extraout_x8[1] = (double ***)0x0;
      extraout_x8[2] = (double ***)0x0;
      *extraout_x8 = (double ***)0x0;
      lVar11 = *param_2;
      ppppdVar10 = param_3;
      ppdStack_148 = (double **)pppdVar16;
      puStack_60 = &stack0xfffffffffffffff0;
      if ((double ***)(param_2[2] - lVar11 >> 4) < pppdVar16) {
        if ((ulong)pppdVar16 >> 0x3c != 0) {
          FUN_1092c8fcc();
          if ((double ****)pppdStack_120 != (double ****)0x0) {
            pppdStack_118 = pppdStack_120;
            __ZdlPv();
          }
          if (*pppdStack_150 != (double **)0x0) {
            pppdStack_150[1] = *pppdStack_150;
            __ZdlPv();
          }
          pppdVar21 = pppdVar16;
          __Unwind_Resume(pppdVar16);
          pcStack_158 = FUN_1092c8e7c;
          *extraout_x8_00 = 0;
          extraout_x8_00[1] = 0;
          extraout_x8_00[2] = 0;
          lStack_178 = 0;
          uStack_188 = 0x8103000c;
          auStack_1a0[0] = 0x8203000c;
          uStack_190 = 0;
          pppdStack_180 = (double ***)param_3;
          ppdStack_170 = (double **)pppdVar16;
          ppdStack_168 = (double **)pppdVar17;
          ppuStack_160 = &puStack_60;
          FUN_109ae2358(&uStack_188,auStack_1a0,0,1);
          uVar13 = extraout_x8_00[1] - *extraout_x8_00;
          while (0x20 < uVar13) {
            FUN_1092c8a28(&uStack_188,pppdVar21,extraout_x8_00);
            if (*extraout_x8_00 != 0) {
              extraout_x8_00[1] = *extraout_x8_00;
              __ZdlPv();
            }
            *extraout_x8_00 = CONCAT44(uStack_184,uStack_188);
            extraout_x8_00[2] = lStack_178;
            extraout_x8_00[1] = (long)pppdStack_180;
            uVar13 = (long)pppdStack_180 - CONCAT44(uStack_184,uStack_188);
          }
          return;
        }
        lVar15 = param_2[1];
        plStack_d0 = param_2;
        FUN_1092c8fe0();
        pppdStack_e8 = (double ***)((long)pppdVar16 + (lVar15 - lVar11));
        ppdStack_d8 = (double **)(pppdVar16 + (long)ppppdVar10 * 2);
        ppppdVar10 = (double ****)&ppdStack_f0;
        ppdStack_f0 = (double **)pppdVar16;
        pppdStack_e0 = pppdStack_e8;
        FUN_1092c8f50(param_2);
        if ((double ***)ppdStack_f0 != (double ***)0x0) {
          __ZdlPv();
        }
      }
      if (pppdVar17 != pppdVar21) {
        pppdVar21 = (double ***)0x0;
        pppdVar17 = (double ***)ppdStack_148;
        pppdVar16 = (double ***)0x7ff0000000000000;
        pppdStack_150 = (double ***)extraout_x8;
        do {
          plVar18 = (long *)*param_2;
          param_2[1] = (long)plVar18;
          plVar8 = plVar18;
          pppdVar22 = param_1;
          if ((long)param_3[1] - (long)*param_3 != 0) {
            lVar11 = 0;
            lVar15 = (long)param_3[1] - (long)*param_3 >> 3;
            do {
              pppdVar12 = *param_3;
              lVar4 = 0;
              if (lVar15 + -1 != lVar11) {
                lVar4 = lVar11 + 1;
              }
              if (plVar8 < (long *)param_2[2]) {
                pppdVar22 = (double ***)pppdVar12[lVar4];
                ppdVar23 = pppdVar12[lVar11];
                plVar18 = plVar8 + 2;
                plVar8[1] = (long)pppdVar22;
                *plVar8 = (long)ppdVar23;
              }
              else {
                lVar19 = (long)plVar8 - *param_2;
                pppdVar22 = (double ***)((lVar19 >> 4) + 1);
                if ((ulong)pppdVar22 >> 0x3c != 0) {
                  FUN_1092c8fcc();
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1092c8e28);
                  (*pcVar7)();
                }
                ppdStack_130 = pppdVar12[lVar11];
                uStack_128 = 0;
                ppdStack_140 = pppdVar12[lVar4];
                uStack_138 = 0;
                uVar13 = param_2[2] - *param_2;
                pppdVar12 = (double ***)((long)uVar13 >> 3);
                if (pppdVar12 <= pppdVar22) {
                  pppdVar12 = pppdVar22;
                }
                if (0x7fffffffffffffef < uVar13) {
                  pppdVar12 = (double ***)0xfffffffffffffff;
                }
                if (pppdVar12 == (double ***)0x0) {
                  ppppdVar10 = (double ****)0x0;
                  plStack_d0 = param_2;
                }
                else {
                  plStack_d0 = param_2;
                  FUN_1092c8fe0();
                }
                pppdStack_e8 = (double ***)((long)pppdVar12 + lVar19);
                ppdStack_d8 = (double **)(pppdVar12 + (long)ppppdVar10 * 2);
                pppdStack_e0 = pppdStack_e8 + 2;
                pppdStack_e8[1] = ppdStack_140;
                *pppdStack_e8 = ppdStack_130;
                ppppdVar10 = (double ****)&ppdStack_f0;
                pppdVar22 = (double ***)ppdStack_130;
                ppdStack_f0 = (double **)pppdVar12;
                FUN_1092c8f50(param_2);
                plVar18 = (long *)param_2[1];
                if ((double ***)ppdStack_f0 != (double ***)0x0) {
                  __ZdlPv();
                }
              }
              lVar11 = lVar11 + 1;
              param_2[1] = (long)plVar18;
              plVar8 = plVar18;
            } while (lVar15 != lVar11);
            plVar8 = (long *)*param_2;
          }
          lVar11 = ((long)pppdVar21 << 0x20) + 0x100000000;
          pppdVar12 = (double ***)((long)plVar18 - (long)plVar8 >> 4);
          iVar14 = 0;
          if (pppdVar12 != (double ***)0x0) {
            iVar14 = (int)((ulong)(lVar11 >> 0x20) / (ulong)pppdVar12);
          }
          pppdVar3 = pppdVar12;
          if ((int)pppdVar21 != 0) {
            pppdVar3 = pppdVar21;
          }
          lVar15 = ((long)pppdVar3 << 0x20) + -0x100000000;
          puVar1 = (ulong *)((long)plVar8 + (lVar15 >> 0x1c));
          piVar2 = (int *)((long)plVar8 +
                          ((long)((ulong)(uint)((int)((ulong)lVar11 >> 0x20) -
                                               iVar14 * (int)pppdVar12) << 0x20) >> 0x1c));
          if ((piVar2[1] - piVar2[3]) * ((int)*puVar1 - (int)puVar1[1]) ==
              (*piVar2 - piVar2[2]) * (*(int *)((long)puVar1 + 4) - *(int *)((long)puVar1 + 0xc))) {
            pppdStack_120 = (double ***)0x0;
            pppdStack_118 = (double ***)0x0;
            pppdStack_110 = (double ***)0x0;
            ppppdVar10 = (double ****)*param_3;
            FUN_1092c9014(&pppdStack_120,ppppdVar10,param_3[1],
                          (long)param_3[1] - (long)ppppdVar10 >> 3);
          }
          else {
            lVar15 = lVar15 >> 0x20;
            iStack_108 = *piVar2;
            iStack_104 = piVar2[1];
            iStack_100 = piVar2[2];
            iStack_fc = piVar2[3];
            ppdStack_f0 = (double **)*puVar1;
            pppdStack_e8 = (double ***)puVar1[1];
            func_0x0001092e2f04(&fStack_f8,&ppdStack_f0,&iStack_108);
            pppdVar17 = (double ***)ppdStack_148;
            pppdVar22 = (double ***)(ulong)(uint)(int)fStack_f4;
            iVar14 = (int)(long)(float)(int)fStack_f4;
            *(int *)(plVar8 + lVar15 * 2 + 1) = (int)(long)(float)(int)fStack_f8;
            *(int *)((long)plVar8 + lVar15 * 0x10 + 0xc) = iVar14;
            *piVar2 = (int)(long)(float)(int)fStack_f8;
            piVar2[1] = iVar14;
            plVar5 = (long *)((long)plVar8 + (((long)pppdVar21 << 0x20) >> 0x1c));
            while (plVar6 = plVar5 + 2, plVar6 != plVar18) {
              pppdVar22 = (double ***)*plVar6;
              plVar6[-2] = (long)pppdVar22;
              plVar6[-1] = plVar6[1];
              plVar5 = plVar6;
            }
            param_2[1] = (long)plVar5;
            pppdStack_118 = (double ***)0x0;
            pppdStack_110 = (double ***)0x0;
            pppdStack_120 = (double ***)0x0;
            ppppdVar20 = (double ****)((long)plVar5 - (long)plVar8 >> 4);
            ppppdVar10 = ppppdVar20;
            FUN_1092c8954(&pppdStack_120);
            if (plVar5 != plVar8) {
              lVar11 = 0;
              do {
                if (pppdStack_118 < pppdStack_110) {
                  pppdVar22 = *(double ****)(*param_2 + lVar11);
                  ppppdVar9 = (double ****)(pppdStack_118 + 1);
                  *pppdStack_118 = (double **)pppdVar22;
                }
                else {
                  ppppdVar9 = &pppdStack_120;
                  ppppdVar10 = (double ****)(*param_2 + lVar11);
                  FUN_1092c78ec();
                }
                lVar11 = lVar11 + 0x10;
                ppppdVar20 = (double ****)((long)ppppdVar20 + -1);
                pppdStack_118 = (double ***)ppppdVar9;
              } while (ppppdVar20 != (double ****)0x0);
            }
          }
          param_1 = pppdVar22;
          pppdVar12 = pppdVar16;
          if ((long)pppdStack_118 - (long)pppdStack_120 != (long)param_3[1] - (long)*param_3) {
            pppdStack_e0 = (double ***)0x0;
            ppdStack_f0 = (double **)CONCAT44(ppdStack_f0._4_4_,0x8103000c);
            uVar13 = 0;
            pppdStack_e8 = (double ***)&pppdStack_120;
            FUN_109ae38fc();
            param_1 = pppdVar22;
            if ((uVar13 & 1) != 0) {
              pppdStack_e0 = (double ***)0x0;
              ppdStack_f0 = (double **)CONCAT44(ppdStack_f0._4_4_,0x8103000c);
              ppppdVar10 = (double ****)0x0;
              pppdStack_e8 = (double ***)&pppdStack_120;
              FUN_109b415b4(&ppdStack_f0);
              param_1 = pppdVar16;
              if ((double)pppdVar22 < (double)pppdVar16) {
                param_1 = pppdVar22;
              }
              pppdVar12 = param_1;
              if ((&pppdStack_120 != (double ****)pppdStack_150) &&
                 ((double)pppdVar22 < (double)pppdVar16)) {
                ppppdVar10 = (double ****)pppdStack_120;
                FUN_1092c6040(pppdStack_150,pppdStack_120,pppdStack_118,
                              (long)pppdStack_118 - (long)pppdStack_120 >> 3);
                pppdVar12 = pppdVar22;
              }
            }
          }
          if ((double ****)pppdStack_120 != (double ****)0x0) {
            pppdStack_118 = pppdStack_120;
            __ZdlPv();
          }
          pppdVar21 = (double ***)((long)pppdVar21 + 1);
          pppdVar16 = pppdVar12;
        } while (pppdVar21 != pppdVar17);
      }
      return;
    }
    lVar15 = param_2[1];
    plVar8 = param_2;
    plStack_28 = param_2;
    FUN_1092c61ac();
    lStack_40 = (long)plVar8 + (lVar15 - lVar11);
    plStack_30 = plVar8 + (long)param_3;
    plStack_48 = plVar8;
    lStack_38 = lStack_40;
    FUN_1092c79f4(param_2,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1092c8a28; end: 1092c8e7b;  */

void FUN_1092c8a28(double ****param_1,double ***param_2,long *param_3,double ****param_4)

{
  ulong *puVar1;
  int *piVar2;
  double ***pppdVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  double ****ppppdVar8;
  double ****ppppdVar9;
  long lVar10;
  double ***pppdVar11;
  ulong uVar12;
  long *extraout_x8;
  int iVar13;
  long lVar14;
  double ***pppdVar15;
  double ***pppdVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  double ****ppppdVar20;
  double ***pppdVar21;
  double ***pppdVar22;
  double **ppdVar23;
  undefined4 auStack_150 [4];
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double ***pppdStack_130;
  long lStack_128;
  double **ppdStack_120;
  double **ppdStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  double ***pppdStack_100;
  double **ppdStack_f8;
  double **ppdStack_f0;
  undefined8 uStack_e8;
  double **ppdStack_e0;
  undefined8 uStack_d8;
  double ***pppdStack_d0;
  double ***pppdStack_c8;
  double ***pppdStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  float fStack_a8;
  float fStack_a4;
  double **ppdStack_a0;
  double ***pppdStack_98;
  double ***pppdStack_90;
  double **ppdStack_88;
  long *plStack_80;
  
  pppdVar21 = *param_4;
  pppdVar16 = param_4[1];
  pppdVar15 = (double ***)((long)pppdVar16 - (long)pppdVar21 >> 3);
  param_1[1] = (double ***)0x0;
  param_1[2] = (double ***)0x0;
  *param_1 = (double ***)0x0;
  lVar10 = *param_3;
  ppppdVar9 = param_4;
  ppdStack_f8 = (double **)pppdVar15;
  if ((double ***)(param_3[2] - lVar10 >> 4) < pppdVar15) {
    if ((ulong)pppdVar15 >> 0x3c != 0) {
      FUN_1092c8fcc();
      if ((double ****)pppdStack_d0 != (double ****)0x0) {
        pppdStack_c8 = pppdStack_d0;
        __ZdlPv();
      }
      if (*pppdStack_100 != (double **)0x0) {
        pppdStack_100[1] = *pppdStack_100;
        __ZdlPv();
      }
      pppdVar21 = pppdVar15;
      __Unwind_Resume(pppdVar15);
      pcStack_108 = FUN_1092c8e7c;
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      lStack_128 = 0;
      uStack_138 = 0x8103000c;
      auStack_150[0] = 0x8203000c;
      uStack_140 = 0;
      pppdStack_130 = (double ***)param_4;
      ppdStack_120 = (double **)pppdVar15;
      ppdStack_118 = (double **)pppdVar16;
      puStack_110 = &stack0xfffffffffffffff0;
      FUN_109ae2358(&uStack_138,auStack_150,0,1);
      uVar12 = extraout_x8[1] - *extraout_x8;
      while (0x20 < uVar12) {
        FUN_1092c8a28(&uStack_138,pppdVar21,extraout_x8);
        if (*extraout_x8 != 0) {
          extraout_x8[1] = *extraout_x8;
          __ZdlPv();
        }
        *extraout_x8 = CONCAT44(uStack_134,uStack_138);
        extraout_x8[2] = lStack_128;
        extraout_x8[1] = (long)pppdStack_130;
        uVar12 = (long)pppdStack_130 - CONCAT44(uStack_134,uStack_138);
      }
      return;
    }
    lVar14 = param_3[1];
    plStack_80 = param_3;
    FUN_1092c8fe0();
    pppdStack_98 = (double ***)((long)pppdVar15 + (lVar14 - lVar10));
    ppdStack_88 = (double **)(pppdVar15 + (long)ppppdVar9 * 2);
    ppppdVar9 = (double ****)&ppdStack_a0;
    ppdStack_a0 = (double **)pppdVar15;
    pppdStack_90 = pppdStack_98;
    FUN_1092c8f50(param_3);
    if ((double ***)ppdStack_a0 != (double ***)0x0) {
      __ZdlPv();
    }
  }
  if (pppdVar16 != pppdVar21) {
    pppdVar21 = (double ***)0x0;
    pppdVar16 = (double ***)ppdStack_f8;
    pppdVar15 = (double ***)0x7ff0000000000000;
    pppdStack_100 = (double ***)param_1;
    do {
      plVar17 = (long *)*param_3;
      param_3[1] = (long)plVar17;
      plVar18 = plVar17;
      pppdVar22 = param_2;
      if ((long)param_4[1] - (long)*param_4 != 0) {
        lVar10 = 0;
        lVar14 = (long)param_4[1] - (long)*param_4 >> 3;
        do {
          pppdVar11 = *param_4;
          lVar4 = 0;
          if (lVar14 + -1 != lVar10) {
            lVar4 = lVar10 + 1;
          }
          if (plVar18 < (long *)param_3[2]) {
            pppdVar22 = (double ***)pppdVar11[lVar4];
            ppdVar23 = pppdVar11[lVar10];
            plVar17 = plVar18 + 2;
            plVar18[1] = (long)pppdVar22;
            *plVar18 = (long)ppdVar23;
          }
          else {
            lVar19 = (long)plVar18 - *param_3;
            pppdVar22 = (double ***)((lVar19 >> 4) + 1);
            if ((ulong)pppdVar22 >> 0x3c != 0) {
              FUN_1092c8fcc();
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1092c8e28);
              (*pcVar7)();
            }
            ppdStack_e0 = pppdVar11[lVar10];
            uStack_d8 = 0;
            ppdStack_f0 = pppdVar11[lVar4];
            uStack_e8 = 0;
            uVar12 = param_3[2] - *param_3;
            pppdVar11 = (double ***)((long)uVar12 >> 3);
            if (pppdVar11 <= pppdVar22) {
              pppdVar11 = pppdVar22;
            }
            if (0x7fffffffffffffef < uVar12) {
              pppdVar11 = (double ***)0xfffffffffffffff;
            }
            if (pppdVar11 == (double ***)0x0) {
              ppppdVar9 = (double ****)0x0;
              plStack_80 = param_3;
            }
            else {
              plStack_80 = param_3;
              FUN_1092c8fe0();
            }
            pppdStack_98 = (double ***)((long)pppdVar11 + lVar19);
            ppdStack_88 = (double **)(pppdVar11 + (long)ppppdVar9 * 2);
            pppdStack_90 = pppdStack_98 + 2;
            pppdStack_98[1] = ppdStack_f0;
            *pppdStack_98 = ppdStack_e0;
            ppppdVar9 = (double ****)&ppdStack_a0;
            pppdVar22 = (double ***)ppdStack_e0;
            ppdStack_a0 = (double **)pppdVar11;
            FUN_1092c8f50(param_3);
            plVar17 = (long *)param_3[1];
            if ((double ***)ppdStack_a0 != (double ***)0x0) {
              __ZdlPv();
            }
          }
          lVar10 = lVar10 + 1;
          param_3[1] = (long)plVar17;
          plVar18 = plVar17;
        } while (lVar14 != lVar10);
        plVar18 = (long *)*param_3;
      }
      lVar10 = ((long)pppdVar21 << 0x20) + 0x100000000;
      pppdVar11 = (double ***)((long)plVar17 - (long)plVar18 >> 4);
      iVar13 = 0;
      if (pppdVar11 != (double ***)0x0) {
        iVar13 = (int)((ulong)(lVar10 >> 0x20) / (ulong)pppdVar11);
      }
      pppdVar3 = pppdVar11;
      if ((int)pppdVar21 != 0) {
        pppdVar3 = pppdVar21;
      }
      lVar14 = ((long)pppdVar3 << 0x20) + -0x100000000;
      puVar1 = (ulong *)((long)plVar18 + (lVar14 >> 0x1c));
      piVar2 = (int *)((long)plVar18 +
                      ((long)((ulong)(uint)((int)((ulong)lVar10 >> 0x20) - iVar13 * (int)pppdVar11)
                             << 0x20) >> 0x1c));
      if ((piVar2[1] - piVar2[3]) * ((int)*puVar1 - (int)puVar1[1]) ==
          (*piVar2 - piVar2[2]) * (*(int *)((long)puVar1 + 4) - *(int *)((long)puVar1 + 0xc))) {
        pppdStack_d0 = (double ***)0x0;
        pppdStack_c8 = (double ***)0x0;
        pppdStack_c0 = (double ***)0x0;
        ppppdVar9 = (double ****)*param_4;
        FUN_1092c9014(&pppdStack_d0,ppppdVar9,param_4[1],(long)param_4[1] - (long)ppppdVar9 >> 3);
      }
      else {
        lVar14 = lVar14 >> 0x20;
        iStack_b8 = *piVar2;
        iStack_b4 = piVar2[1];
        iStack_b0 = piVar2[2];
        iStack_ac = piVar2[3];
        ppdStack_a0 = (double **)*puVar1;
        pppdStack_98 = (double ***)puVar1[1];
        func_0x0001092e2f04(&fStack_a8,&ppdStack_a0,&iStack_b8);
        pppdVar16 = (double ***)ppdStack_f8;
        pppdVar22 = (double ***)(ulong)(uint)(int)fStack_a4;
        iVar13 = (int)(long)(float)(int)fStack_a4;
        *(int *)(plVar18 + lVar14 * 2 + 1) = (int)(long)(float)(int)fStack_a8;
        *(int *)((long)plVar18 + lVar14 * 0x10 + 0xc) = iVar13;
        *piVar2 = (int)(long)(float)(int)fStack_a8;
        piVar2[1] = iVar13;
        plVar5 = (long *)((long)plVar18 + (((long)pppdVar21 << 0x20) >> 0x1c));
        while (plVar6 = plVar5 + 2, plVar6 != plVar17) {
          pppdVar22 = (double ***)*plVar6;
          plVar6[-2] = (long)pppdVar22;
          plVar6[-1] = plVar6[1];
          plVar5 = plVar6;
        }
        param_3[1] = (long)plVar5;
        pppdStack_c8 = (double ***)0x0;
        pppdStack_c0 = (double ***)0x0;
        pppdStack_d0 = (double ***)0x0;
        ppppdVar20 = (double ****)((long)plVar5 - (long)plVar18 >> 4);
        ppppdVar9 = ppppdVar20;
        FUN_1092c8954(&pppdStack_d0);
        if (plVar5 != plVar18) {
          lVar10 = 0;
          do {
            if (pppdStack_c8 < pppdStack_c0) {
              pppdVar22 = *(double ****)(*param_3 + lVar10);
              ppppdVar8 = (double ****)(pppdStack_c8 + 1);
              *pppdStack_c8 = (double **)pppdVar22;
            }
            else {
              ppppdVar8 = &pppdStack_d0;
              ppppdVar9 = (double ****)(*param_3 + lVar10);
              FUN_1092c78ec();
            }
            lVar10 = lVar10 + 0x10;
            ppppdVar20 = (double ****)((long)ppppdVar20 + -1);
            pppdStack_c8 = (double ***)ppppdVar8;
          } while (ppppdVar20 != (double ****)0x0);
        }
      }
      param_2 = pppdVar22;
      pppdVar11 = pppdVar15;
      if ((long)pppdStack_c8 - (long)pppdStack_d0 != (long)param_4[1] - (long)*param_4) {
        pppdStack_90 = (double ***)0x0;
        ppdStack_a0 = (double **)CONCAT44(ppdStack_a0._4_4_,0x8103000c);
        uVar12 = 0;
        pppdStack_98 = (double ***)&pppdStack_d0;
        FUN_109ae38fc();
        param_2 = pppdVar22;
        if ((uVar12 & 1) != 0) {
          pppdStack_90 = (double ***)0x0;
          ppdStack_a0 = (double **)CONCAT44(ppdStack_a0._4_4_,0x8103000c);
          ppppdVar9 = (double ****)0x0;
          pppdStack_98 = (double ***)&pppdStack_d0;
          FUN_109b415b4(&ppdStack_a0);
          param_2 = pppdVar15;
          if ((double)pppdVar22 < (double)pppdVar15) {
            param_2 = pppdVar22;
          }
          pppdVar11 = param_2;
          if ((&pppdStack_d0 != (double ****)pppdStack_100) &&
             ((double)pppdVar22 < (double)pppdVar15)) {
            ppppdVar9 = (double ****)pppdStack_d0;
            FUN_1092c6040(pppdStack_100,pppdStack_d0,pppdStack_c8,
                          (long)pppdStack_c8 - (long)pppdStack_d0 >> 3);
            pppdVar11 = pppdVar22;
          }
        }
      }
      if ((double ****)pppdStack_d0 != (double ****)0x0) {
        pppdStack_c8 = pppdStack_d0;
        __ZdlPv();
      }
      pppdVar21 = (double ***)((long)pppdVar21 + 1);
      pppdVar15 = pppdVar11;
    } while (pppdVar21 != pppdVar16);
  }
  return;
}



/* Entry: 1092c8e7c; end: 1092c8f4f;  */

void FUN_1092c8e7c(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 auStack_50 [2];
  long *plStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  long lStack_30;
  long lStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_28 = 0;
  uStack_38 = 0x8103000c;
  auStack_50[0] = 0x8203000c;
  uStack_40 = 0;
  plStack_48 = param_1;
  lStack_30 = param_3;
  FUN_109ae2358(&uStack_38,auStack_50,0,1);
  uVar1 = param_1[1] - *param_1;
  while (0x20 < uVar1) {
    FUN_1092c8a28(&uStack_38,param_2,param_1);
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *param_1 = CONCAT44(uStack_34,uStack_38);
    param_1[2] = lStack_28;
    param_1[1] = lStack_30;
    uVar1 = lStack_30 - CONCAT44(uStack_34,uStack_38);
  }
  return;
}



/* Entry: 1092c8f50; end: 1092c8fcb;  */

void FUN_1092c8f50(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar4 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar5));
  puVar2 = puVar3;
  for (puVar1 = puVar4; puVar5 != puVar1; puVar1 = puVar1 + 2) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2 = puVar2 + 2;
  }
  param_2[1] = puVar3;
  lVar6 = *param_1;
  *param_1 = (long)puVar3;
  param_1[1] = (long)puVar4;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1092c8fcc; end: 1092c8fdf;  */

void FUN_1092c8fcc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3c == 0) {
    __Znwm((long)puVar1 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1092c6160();
    puVar2 = *(undefined8 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 1092c8fe0; end: 1092c9013;  */

void FUN_1092c8fe0(ulong param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1092c6160();
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092c9014; end: 1092c9083;  */

void FUN_1092c9014(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_1092c6160(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1092c9084; end: 1092c90c3;  */

void FUN_1092c9084(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    _strlen();
    lVar1 = param_1 + 1;
    __Znam();
    _strncpy();
    *(undefined1 *)(lVar1 + param_1) = 0;
  }
  return;
}



/* Entry: 1092c90c4; end: 1092c9177;  */

void FUN_1092c90c4(long param_1,undefined8 param_2)

{
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  auStack_58[0] = 0x1010000;
  auStack_70[0] = 0x2010000;
  uStack_60 = 0;
  uStack_38 = 0x700000007;
  uStack_48 = 0;
  uStack_40 = 0xffffffffffffffff;
  uStack_68 = param_2;
  uStack_50 = param_2;
  FUN_109b437c0(auStack_58,auStack_70,0xffffffff,&uStack_38,&uStack_40,1,4);
  uStack_48 = 0;
  auStack_58[0] = 0x1010000;
  auStack_70[0] = 0x2010000;
  uStack_60 = 0;
  uStack_68 = param_2;
  uStack_50 = param_2;
  FUN_109b5a14c(0x406fe00000000000,0x4010000000000000,auStack_58,auStack_70,
                *(undefined4 *)(param_1 + 0x50),0,*(undefined4 *)(param_1 + 0x54));
  return;
}



/* Entry: 1092c9178; end: 1092c93ef;  */

void FUN_1092c9178(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  double dVar11;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 auStack_a0 [2];
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  iVar7 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 0xc);
  *(undefined4 *)param_1 = 0x42ff0000;
  piVar10 = (int *)((long)param_1 + 4);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar10[0] = 0;
  piVar10[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  puVar6 = param_1 + 10;
  *puVar6 = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = puVar6;
  param_1[0xb] = 0;
  uStack_e0 = 0;
  uStack_f0 = 0x1010000;
  iStack_88 = 0x2010000;
  uStack_78 = 0;
  puStack_e8 = (undefined8 *)param_3;
  uStack_80 = param_1;
  FUN_109ac9fc8(&uStack_f0,&iStack_88,7,0);
  dVar11 = (double)iVar7 / (double)iVar2;
  iStack_8c = (int)(dVar11 * (double)iRam0000000113732aa4);
  uStack_e0 = 0;
  uStack_f0 = 0x1010000;
  iStack_88 = 0x2010000;
  uStack_78 = 0;
  iStack_90 = iRam0000000113732aa4;
  puStack_e8 = param_1;
  uStack_80 = param_1;
  FUN_109b0f718(0,0,&uStack_f0,&iStack_88,&iStack_90,1);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    iVar7 = (int)(dVar11 * (double)iRam0000000113732aac);
    iStack_84 = (int)((double)(*(int *)(param_1 + 1) - iVar7) / 2.0);
    iStack_88 = (int)((double)(*(int *)((long)param_1 + 0xc) - iRam0000000113732aac) / 2.0);
    uStack_80 = (undefined8 *)CONCAT44(iStack_84 + iVar7,iRam0000000113732aac + iStack_88);
    FUN_109a852c8(&uStack_f0,param_1,&iStack_88);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        func_0x000109a848d4(param_1);
      }
    }
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar5 = 0;
      lVar8 = param_1[8];
      do {
        *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *piVar10);
    }
    param_1[1] = puStack_e8;
    *param_1 = CONCAT44(iStack_ec,uStack_f0);
    param_1[3] = uStack_d8;
    param_1[2] = uStack_e0;
    param_1[5] = uStack_c8;
    param_1[4] = uStack_d0;
    param_1[7] = uStack_b8;
    param_1[6] = uStack_c0;
    puVar9 = (undefined8 *)param_1[9];
    if (puVar9 != puVar6) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar6;
      puVar9 = puVar6;
    }
    if (iStack_ec < 3) {
      puVar6 = (undefined8 *)((ulong)&uStack_f0 | 4);
      *puVar9 = *puStack_a8;
      puVar9[1] = puStack_a8[1];
      uStack_f0 = 0x42ff0000;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      if (puStack_a8 != auStack_a0) {
        _free(puStack_a8[-1]);
      }
    }
    else {
      param_1[8] = uStack_b0;
      param_1[9] = puStack_a8;
    }
  }
  return;
}



/* Entry: 1092c93f0; end: 1092c9803;  */

void FUN_1092c93f0(undefined4 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  double *pdVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 *puStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined1 auStack_378 [8];
  long *plStack_370;
  undefined4 *puStack_368;
  undefined4 *puStack_360;
  undefined8 uStack_358;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined4 auStack_2c8 [2];
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  double dStack_2b0;
  undefined4 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 auStack_290 [2];
  double *pdStack_288;
  undefined8 uStack_280;
  undefined4 auStack_278 [2];
  undefined1 *puStack_270;
  undefined8 uStack_268;
  undefined4 auStack_260 [2];
  undefined1 *puStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [4];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long lStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [4];
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  long lStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [12];
  undefined8 uStack_164;
  long alStack_158 [18];
  long alStack_c8 [12];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_1e8._0_4_ = 0x42ff0000;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  stack0xfffffffffffffe1c = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  puStack_1a8 = auStack_1e0;
  uStack_1bc = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  lStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  auStack_188._0_4_ = 0x2010000;
  auStack_178 = (undefined1  [8])0x0;
  puStack_1a0 = &uStack_198;
  auStack_180 = (undefined1  [8])auStack_1e8;
  FUN_109a479a0(param_3,auStack_188);
  auStack_248._0_4_ = 0x42ff0000;
  puStack_208 = auStack_240;
  uStack_23c = 0;
  uStack_238 = 0;
  stack0xfffffffffffffdbc = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_21c = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  lStack_210 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_250 = 0;
  auStack_260[0] = 0x1010000;
  auStack_188 = (undefined1  [8])(double)*(int *)(param_2 + 0x70);
  auStack_178 = (undefined1  [8])0x0;
  auStack_170._0_8_ = 0;
  auStack_180 = (undefined1  [8])0x0;
  auStack_278[0] = 0xc1020006;
  uStack_268 = 0x400000001;
  dStack_2b0 = (double)*(int *)(param_2 + 0x74);
  uStack_2a0 = 0x406fe00000000000;
  puStack_2a8 = (undefined4 *)0x406fe00000000000;
  uStack_298 = 0;
  auStack_290[0] = 0xc1020006;
  pdStack_288 = &dStack_2b0;
  uStack_280 = 0x400000001;
  auStack_2c8[0] = 0x2010000;
  uStack_2b8 = 0;
  puStack_2c0 = auStack_248;
  puStack_270 = auStack_188;
  puStack_258 = auStack_1e8;
  puStack_200 = &uStack_1f8;
  FUN_109a2c428(auStack_260,auStack_278,auStack_290,auStack_2c8);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  lVar10 = 0;
  do {
    *(undefined4 *)(auStack_188 + lVar10) = 0x42ff0000;
    *(undefined8 *)(auStack_180 + lVar10 + 4) = 0;
    *(undefined8 *)(auStack_188 + lVar10 + 4) = 0;
    *(undefined8 *)(auStack_170 + lVar10 + 4) = 0;
    *(undefined8 *)(auStack_178 + lVar10 + 4) = 0;
    *(undefined8 *)(&stack0xfffffffffffffea4 + lVar10) = 0;
    *(undefined8 *)((long)&uStack_164 + lVar10) = 0;
    puVar13 = (undefined8 *)((long)alStack_158 + lVar10 + 0x20);
    *puVar13 = 0;
    *(undefined8 *)((long)alStack_158 + lVar10 + 8) = 0;
    *(undefined8 *)((long)alStack_158 + lVar10) = 0;
    *(undefined1 **)((long)alStack_158 + lVar10 + 0x10) = auStack_180 + lVar10;
    *(undefined8 **)((long)alStack_158 + lVar10 + 0x18) = puVar13;
    lVar12 = lVar10 + 0x60;
    *(undefined8 *)((long)alStack_158 + lVar10 + 0x28) = 0;
    lVar10 = lVar12;
  } while (lVar12 != 0x120);
  FUN_109a3d9cc(auStack_1e8,auStack_188);
  dStack_2b0 = (double)CONCAT44(dStack_2b0._4_4_,0x2010000);
  uStack_2a0 = 0;
  auStack_260[0] = 0x1010000;
  puStack_258 = auStack_248;
  uStack_250 = 0;
  plVar5 = alStack_c8;
  pdVar7 = &dStack_2b0;
  puVar9 = auStack_260;
  puStack_2a8 = param_1;
  FUN_109a4813c();
  plVar6 = &lStack_68;
  do {
    plVar8 = plVar6 + -0xc;
    if (plVar6[-5] != 0) {
      piVar1 = (int *)(plVar6[-5] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        plVar5 = plVar8;
        func_0x000109a848d4();
      }
    }
    plVar6[-5] = 0;
    plVar6[-9] = 0;
    plVar6[-10] = 0;
    plVar6[-7] = 0;
    plVar6[-8] = 0;
    if (0 < *(int *)((long)plVar6 + -0x5c)) {
      lVar10 = 0;
      lVar12 = plVar6[-4];
      do {
        *(undefined4 *)(lVar12 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((long)plVar6 + -0x5c));
    }
    plVar11 = (long *)plVar6[-3];
    if (plVar11 != plVar6 + -2 && plVar11 != (long *)0x0) {
      plVar5 = (long *)plVar11[-1];
      _free();
    }
    plVar6 = plVar8;
  } while (plVar8 != (long *)auStack_188);
  if (lStack_210 != 0) {
    piVar1 = (int *)(lStack_210 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      plVar5 = (long *)auStack_248;
      func_0x000109a848d4();
    }
  }
  lStack_210 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  if (0 < (int)auStack_248._4_4_) {
    lVar10 = 0;
    do {
      *(undefined4 *)(puStack_208 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)auStack_248._4_4_);
  }
  if (puStack_200 != &uStack_1f8 && puStack_200 != (undefined8 *)0x0) {
    plVar5 = (long *)puStack_200[-1];
    _free();
  }
  if (lStack_1b0 != 0) {
    piVar1 = (int *)(lStack_1b0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      plVar5 = (long *)auStack_1e8;
      func_0x000109a848d4();
    }
  }
  lStack_1b0 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  if (0 < (int)auStack_1e8._4_4_) {
    lVar10 = 0;
    do {
      *(undefined4 *)(puStack_1a8 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)auStack_1e8._4_4_);
  }
  if (puStack_1a0 != &uStack_198 && puStack_1a0 != (undefined8 *)0x0) {
    plVar5 = (long *)puStack_1a0[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pdVar7 == 0) {
    __Unwind_Resume(plVar5);
  }
  plVar6 = plVar5;
  func_0x000104bd46a0();
  pcStack_2d8 = FUN_1092c9804;
  dStack_328 = pdVar7[5];
  dStack_330 = pdVar7[4];
  dStack_318 = pdVar7[7];
  dStack_320 = pdVar7[6];
  dStack_308 = pdVar7[9];
  dStack_310 = pdVar7[8];
  dStack_348 = pdVar7[1];
  dStack_350 = *pdVar7;
  dStack_338 = pdVar7[3];
  dStack_340 = pdVar7[2];
  puStack_368 = (undefined4 *)0x0;
  puStack_360 = (undefined4 *)0x0;
  uStack_358 = 0;
  pdVar7 = &dStack_350;
  puStack_300 = &uStack_1f8;
  puStack_2f8 = &uStack_198;
  plStack_2f0 = plVar5;
  plStack_2e8 = plVar8;
  puStack_2e0 = &stack0xfffffffffffffff0;
  FUN_109b88eac(auStack_378,pdVar7);
  uStack_388 = 0;
  uStack_398 = 0x1010000;
  puStack_390 = puVar9;
  FUN_109a91d90();
  (**(code **)(*plStack_370 + 0x40))(plStack_370,&uStack_398,&puStack_368,pdVar7);
  puVar9 = puStack_360;
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  if (puStack_368 != puStack_360) {
    plVar5 = (long *)0x0;
    puVar14 = puStack_368;
    do {
      uStack_398 = *puVar14;
      uStack_394 = puVar14[1];
      uStack_388 = *(undefined8 *)(puVar14 + 4);
      puStack_390 = *(undefined4 **)(puVar14 + 2);
      uStack_380 = puVar14[6];
      if (plVar5 < (long *)plVar6[2]) {
        plVar8 = plVar5 + 1;
        *(undefined4 *)plVar5 = uStack_398;
        *(undefined4 *)((long)plVar5 + 4) = uStack_394;
      }
      else {
        plVar8 = plVar6;
        FUN_1092cbf20(plVar6,&uStack_398);
      }
      plVar6[1] = (long)plVar8;
      puVar14 = puVar14 + 7;
      plVar5 = plVar8;
    } while (puVar14 != puVar9);
  }
  FUN_1092cc454(auStack_378);
  if (puStack_368 != (undefined4 *)0x0) {
    puStack_360 = puStack_368;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092c9804; end: 1092c994f;  */

void FUN_1092c9804(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  puStack_98 = (undefined4 *)0x0;
  puStack_90 = (undefined4 *)0x0;
  uStack_88 = 0;
  puVar2 = &uStack_80;
  FUN_109b88eac(auStack_a8,puVar2);
  uStack_b8 = 0;
  uStack_c8 = 0x1010000;
  uStack_c0 = param_3;
  FUN_109a91d90();
  (**(code **)(*plStack_a0 + 0x40))(plStack_a0,&uStack_c8,&puStack_98,puVar2);
  puVar1 = puStack_90;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puStack_98 != puStack_90) {
    puVar2 = (undefined8 *)0x0;
    puVar4 = puStack_98;
    do {
      uStack_c8 = *puVar4;
      uStack_c4 = puVar4[1];
      uStack_b8 = *(undefined8 *)(puVar4 + 4);
      uStack_c0 = *(undefined8 *)(puVar4 + 2);
      uStack_b0 = puVar4[6];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar3 = puVar2 + 1;
        *(undefined4 *)puVar2 = uStack_c8;
        *(undefined4 *)((long)puVar2 + 4) = uStack_c4;
      }
      else {
        puVar3 = param_1;
        FUN_1092cbf20(param_1,&uStack_c8);
      }
      param_1[1] = puVar3;
      puVar4 = puVar4 + 7;
      puVar2 = puVar3;
    } while (puVar4 != puVar1);
  }
  FUN_1092cc454(auStack_a8);
  if (puStack_98 != (undefined4 *)0x0) {
    puStack_90 = puStack_98;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092c9950; end: 1092c999f;  */

void FUN_1092c9950(undefined8 *param_1,long *param_2)

{
  undefined1 uStack_21;
  
  __ZNSt3__16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_(*param_2,param_2[1],&uStack_21);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092cc0dc(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
  return;
}



/* Entry: 1092c99a0; end: 1092c9a3f;  */

void FUN_1092c99a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uStack_50 = *param_2;
    FUN_1092c9a40(&lStack_48,(ulong)&uStack_50 | 4);
  }
  FUN_1092c9950(param_1,&lStack_48);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092c9a40; end: 1092c9b03;  */

void FUN_1092c9a40(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *(undefined4 *)param_2;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_1092cc18c();
      lStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0;
      for (; param_2 != param_3; param_2 = param_2 + 1) {
        uStack_80 = *param_2;
        FUN_1092c9a40(&lStack_78,&uStack_80);
      }
      FUN_1092c9950(param_1,&lStack_78);
      if (lStack_78 != 0) {
        lStack_70 = lStack_78;
        __ZdlPv();
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_1092cc1a0();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)((long)plVar4 + lVar8);
    lVar7 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = *(undefined4 *)param_2;
    _memcpy(lVar7,lVar3);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)plVar4 + uVar6 * 4;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 1092c9b04; end: 1092c9b9f;  */

void FUN_1092c9b04(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uStack_50 = *param_2;
    FUN_1092c9a40(&lStack_48,&uStack_50);
  }
  FUN_1092c9950(param_1,&lStack_48);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 1092c9ba0; end: 1092c9f8b;  */

undefined8 * FUN_1092c9ba0(undefined4 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 **ppuVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  int *piVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar35;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined4 auStack_150 [2];
  undefined4 *puStack_148;
  undefined8 uStack_140;
  undefined4 auStack_138 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float *pfStack_118;
  float *pfStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *apuStack_a0 [5];
  float fStack_78;
  float fStack_74;
  long *plStack_70;
  undefined8 uStack_68;
  float fStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = (float *)0x0;
  pfStack_118 = (float *)0x0;
  pfStack_110 = (float *)0x0;
  uStack_68 = 0;
  fStack_78 = -2.4060934e-38;
  apuStack_a0[0] = (undefined8 *)CONCAT44(apuStack_a0[0]._4_4_,0x8203000c);
  apuStack_a0[1] = &uStack_120;
  apuStack_a0[2] = (undefined8 *)0x0;
  plStack_70 = param_4;
  FUN_109ae2358(&fStack_78,apuStack_a0,0,1);
  if (uStack_120 == pfStack_118) {
    fVar27 = 0.0;
    fVar29 = 0.0;
  }
  else {
    fVar27 = 0.0;
    fVar29 = 0.0;
    pfVar16 = uStack_120;
    do {
      pfVar10 = pfVar16 + 2;
      uVar33 = NEON_scvtf(*(undefined8 *)pfVar16,4);
      fVar27 = fVar27 + (float)uVar33;
      fVar29 = fVar29 + (float)((ulong)uVar33 >> 0x20);
      pfVar16 = pfVar10;
    } while (pfVar10 != pfStack_118);
    uVar33 = NEON_fmov(0x3e800000,4);
    fVar27 = fVar27 * (float)uVar33;
    fVar29 = fVar29 * (float)((ulong)uVar33 >> 0x20);
  }
  iVar28 = 0;
  do {
    fVar2 = *uStack_120;
    fVar3 = uStack_120[1];
    uVar33 = *(undefined8 *)uStack_120;
    fVar31 = (float)(int)fVar3;
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
    if (fVar27 <= (float)(int)fVar2) {
      bVar7 = false;
      bVar8 = false;
      bVar9 = true;
      if (!NAN(fVar29) && !NAN(fVar31)) {
        bVar7 = fVar29 < fVar31;
        bVar8 = fVar29 == fVar31;
        bVar9 = false;
      }
    }
    pfVar16 = uStack_120;
    if (bVar8 || bVar7 != bVar9) break;
    while (pfVar10 = pfVar16 + 2, pfVar10 != pfStack_118) {
      *(undefined8 *)(pfVar10 + -2) = *(undefined8 *)pfVar10;
      pfVar16 = pfVar10;
    }
    fStack_78 = fVar2;
    fStack_74 = fVar3;
    if (pfVar16 < pfStack_110) {
      pfVar10 = pfVar16 + 2;
      *(undefined8 *)pfVar16 = uVar33;
    }
    else {
      pfVar10 = (float *)&uStack_120;
      pfStack_118 = pfVar16;
      FUN_1092c78ec(pfVar10,&fStack_78);
    }
    iVar28 = iVar28 + 1;
    pfStack_118 = pfVar10;
  } while (iVar28 != 5);
  if (&uStack_120 != param_4) {
    FUN_1092c6040(param_4,uStack_120,pfStack_118,(long)pfStack_118 - (long)uStack_120 >> 3);
  }
  if (uStack_120 != (float *)0x0) {
    pfStack_118 = uStack_120;
    __ZdlPv(uStack_120);
  }
  puVar17 = (undefined8 *)*param_4;
  fVar27 = *(float *)(param_2 + 0x68) + -1.0;
  iVar32 = (int)*puVar17;
  iVar34 = (int)puVar17[2];
  iVar26 = (int)((ulong)*puVar17 >> 0x20);
  iVar35 = (int)((ulong)puVar17[2] >> 0x20);
  uVar33 = NEON_scvtf(CONCAT44((iVar26 - iVar35) / 2,(iVar32 - iVar34) / 2),4);
  iVar28 = (int)((float)uVar33 * fVar27);
  iVar30 = (int)((float)((ulong)uVar33 >> 0x20) * fVar27);
  puVar17[1] = CONCAT44((int)((ulong)puVar17[1] >> 0x20) + iVar30,(int)puVar17[1] - iVar28);
  *puVar17 = CONCAT44(iVar26 + iVar30,iVar32 + iVar28);
  puVar17[3] = CONCAT44((int)((ulong)puVar17[3] >> 0x20) - iVar30,(int)puVar17[3] + iVar28);
  puVar17[2] = CONCAT44(iVar35 - iVar30,iVar34 - iVar28);
  fStack_78 = (float)iRam0000000113732ab4;
  plStack_70 = (long *)((ulong)(uint)fStack_78 << 0x20);
  uStack_68 = 0;
  uStack_5c = 0;
  apuStack_a0[1] = (undefined8 *)0x0;
  apuStack_a0[0] = (undefined8 *)0x0;
  apuStack_a0[3] = (undefined8 *)0x0;
  apuStack_a0[2] = (undefined8 *)0x0;
  puVar20 = (undefined8 *)param_4[1];
  fStack_74 = fStack_78;
  fStack_60 = fStack_78;
  if (puVar17 != puVar20) {
    ppuVar21 = apuStack_a0;
    do {
      puVar18 = puVar17 + 1;
      puVar17 = (undefined8 *)NEON_scvtf(*puVar17,4);
      *ppuVar21 = puVar17;
      puVar17 = puVar18;
      ppuVar21 = ppuVar21 + 1;
    } while (puVar18 != puVar20);
  }
  FUN_109b1f670(&uStack_120,apuStack_a0,&fStack_78);
  iVar28 = iRam0000000113732ab4;
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_c0 = CONCAT44(iVar28,iVar28);
  FUN_109a83fd0(param_1,2,&uStack_c0,0x10);
  uStack_128 = 0;
  auStack_138[0] = 0x1010000;
  auStack_150[0] = 0x2010000;
  uStack_140 = 0;
  uStack_158 = 0;
  auStack_168[0] = 0x1010000;
  puStack_160 = &uStack_120;
  uStack_170 = NEON_rev64(**(undefined8 **)(param_1 + 0x10),4);
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  puVar17 = (undefined8 *)auStack_138;
  plVar13 = (long *)auStack_150;
  puStack_148 = param_1;
  uStack_130 = param_3;
  FUN_109b1eb58(puVar17,plVar13,auStack_168,&uStack_170,1,0,&uStack_c0);
  if (lStack_e8 != 0) {
    piVar25 = (int *)(lStack_e8 + 0x14);
    do {
      iVar28 = *piVar25;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
      if (bVar7) {
        *piVar25 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      puVar17 = &uStack_120;
      func_0x000109a848d4();
    }
  }
  lStack_e8 = 0;
  uStack_108 = 0;
  pfStack_110 = (float *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (0 < uStack_120._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_e0 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_120._4_4_);
  }
  if (puStack_d8 != auStack_d0 && puStack_d8 != (undefined1 *)0x0) {
    puVar17 = *(undefined8 **)(puStack_d8 + -8);
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar17;
  }
  ___stack_chk_fail();
  if (((int)plVar13 != 0) && (func_0x000104bd46a0(), uStack_120 != (float *)0x0)) {
    pfStack_118 = uStack_120;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar11 = plVar13;
  (**(code **)(*plVar13 + 0x10))();
  iVar28 = *(int *)(puVar17 + 1);
  iVar30 = *(int *)((long)puVar17 + 0xc);
  (**(code **)(*plVar13 + 0x38))(&lStack_1d8,plVar13);
  iVar26 = (int)plVar11;
  iVar32 = iVar26 + -1;
  if (iVar26 < 1) {
    iVar35 = 0;
    iVar34 = 0;
  }
  else {
    uVar22 = 0;
    iVar34 = 0;
    iVar35 = 0;
    lVar19 = 0;
    iVar5 = 0;
    if (iVar32 != 0) {
      iVar5 = iVar30 / iVar32;
    }
    pbVar23 = (byte *)puVar17[2];
    uVar24 = (ulong)plVar11 & 0xffffffff;
    iVar30 = 0;
    if (iVar32 != 0) {
      iVar30 = iVar28 / iVar32;
    }
    do {
      pbVar12 = pbVar23;
      uVar14 = uVar24;
      piVar25 = (int *)(lStack_1d8 + (long)(int)lVar19 * 4);
      do {
        bVar4 = *pbVar12;
        pbVar12 = pbVar12 + iVar5;
        iVar28 = iVar35;
        if (*piVar25 == 0 && bVar4 < 0xb) {
          iVar28 = iVar35 + 1;
        }
        if (*piVar25 == 1 && 0x1e < bVar4) {
          iVar34 = iVar34 + 1;
          iVar28 = iVar35;
        }
        iVar35 = iVar28;
        uVar14 = uVar14 - 1;
        piVar25 = piVar25 + 1;
      } while (uVar14 != 0);
      lVar19 = (long)(int)lVar19 + uVar24;
      uVar22 = uVar22 + 1;
      pbVar23 = pbVar23 + *(long *)puVar17[9] * (long)iVar30;
    } while (uVar22 != uVar24);
  }
  uVar15 = (uint)(iVar34 - 0x1eU < 0xdd && iVar35 - 0x1eU < 0x79);
  if (iVar26 != 0x12) {
    uVar15 = 0;
  }
  uVar1 = (uint)(iVar34 - 5U < 0xf6 && iVar35 - 5U < 0x92);
  if (iVar26 != 10) {
    uVar1 = uVar15;
  }
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  return (undefined8 *)(ulong)uVar1;
}



/* Entry: 1092c9f8c; end: 1092ca0e3;  */

bool FUN_1092c9f8c(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  long lStack_58;
  long lStack_50;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x10))();
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  (**(code **)(*param_2 + 0x38))(&lStack_58,param_2);
  iVar17 = (int)plVar7;
  iVar6 = iVar17 + -1;
  if (iVar17 < 1) {
    iVar10 = 0;
    iVar11 = 0;
  }
  else {
    uVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
    lVar15 = 0;
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar5 = iVar3 / iVar6;
    }
    pbVar13 = *(byte **)(param_1 + 0x10);
    uVar14 = (ulong)plVar7 & 0xffffffff;
    iVar3 = 0;
    if (iVar6 != 0) {
      iVar3 = iVar2 / iVar6;
    }
    do {
      pbVar8 = pbVar13;
      uVar9 = uVar14;
      piVar16 = (int *)(lStack_58 + (long)(int)lVar15 * 4);
      do {
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + iVar5;
        iVar2 = iVar10;
        if (*piVar16 == 0 && bVar4 < 0xb) {
          iVar2 = iVar10 + 1;
        }
        if (*piVar16 == 1 && 0x1e < bVar4) {
          iVar11 = iVar11 + 1;
          iVar2 = iVar10;
        }
        iVar10 = iVar2;
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 1;
      } while (uVar9 != 0);
      lVar15 = (long)(int)lVar15 + uVar14;
      uVar12 = uVar12 + 1;
      pbVar13 = pbVar13 + **(long **)(param_1 + 0x48) * (long)iVar3;
    } while (uVar12 != uVar14);
  }
  bVar1 = iVar11 - 5U < 0xf6 && iVar10 - 5U < 0x92;
  if (iVar17 != 10) {
    bVar1 = iVar17 == 0x12 && (iVar11 - 0x1eU < 0xdd && iVar10 - 0x1eU < 0x79);
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return bVar1;
}



/* Entry: 1092ca0e4; end: 1092ca8ab;  */

undefined8 FUN_1092ca0e4(long param_1,float *param_2,float *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  bool bVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int *piStack_1a0;
  int *piStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  undefined4 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 auStack_120 [2];
  undefined4 *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long alStack_88 [3];
  
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x10))();
  if ((int)plVar4 != 0x12) {
    return 0;
  }
  uStack_d8 = 0x42ff0000;
  puStack_100 = &uStack_d8;
  iStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  lStack_98 = (long)&uStack_d4 + 4;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  lStack_a0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  uStack_e0 = 0;
  uStack_f0 = 0x1010000;
  uStack_108 = 0x2010000;
  uStack_f8 = 0;
  uStack_180 = 0x42ff0000;
  puStack_118 = &uStack_180;
  puStack_140 = &uStack_178;
  iStack_174 = 0;
  uStack_170 = 0;
  iStack_17c = 0;
  uStack_178 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_154 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  auStack_120[0] = 0x1010000;
  piStack_198 = (int *)0x7fefffffffffffff;
  piStack_1a0 = (int *)0x7fefffffffffffff;
  uStack_188 = 0x7fefffffffffffff;
  uStack_190 = 0x7fefffffffffffff;
  alStack_88[2] = 0xffffffffffffffff;
  puStack_138 = &uStack_130;
  lStack_e8 = param_1;
  plStack_90 = alStack_88;
  FUN_109b32fd4(0,&uStack_f0,&uStack_108,auStack_120,alStack_88 + 2,2,0,&piStack_1a0);
  if (lStack_148 != 0) {
    piVar12 = (int *)(lStack_148 + 0x14);
    do {
      iVar7 = *piVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar2) {
        *piVar12 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(&uStack_180);
    }
  }
  lStack_148 = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  if (0 < iStack_17c) {
    lVar10 = 0;
    do {
      puStack_140[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_17c);
  }
  if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
    _free(puStack_138[-1]);
  }
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x10))();
  fVar20 = *param_3;
  fVar19 = param_3[1];
  fVar22 = *param_2;
  fVar21 = param_2[1];
  (**(code **)(*param_4 + 0x38))(&uStack_f0,param_4);
  plVar5 = param_4;
  (**(code **)(*param_4 + 0x40))(param_4);
  func_0x00010737fadc(&uStack_108,(long)(int)plVar5);
  if ((int)plVar4 < 1) {
    iVar7 = 0;
  }
  else {
    uVar11 = 0;
    iVar7 = 0;
    fVar3 = (float)((int)plVar4 + -1);
    lVar10 = CONCAT44(uStack_ec,uStack_f0);
    do {
      uVar14 = 0;
      fVar18 = *param_2;
      uVar15 = (uint)(param_2[1] + (float)(uVar11 & 0xffffffff) * ((fVar19 - fVar21) / fVar3));
      do {
        if (*(int *)(lVar10 + uVar14 * 4) != 0) {
          if (((((int)uVar15 < 0) || (uStack_d4._4_4_ <= (int)uVar15)) ||
              (uVar6 = (uint)(fVar18 + (float)(uVar14 & 0xffffffff) * ((fVar20 - fVar22) / fVar3)),
              (int)uVar6 < 0)) || (iStack_cc <= (int)uVar6)) {
            puVar8 = (ulong *)(CONCAT44(uStack_104,uStack_108) + ((ulong)(long)iVar7 >> 6) * 8);
            uVar9 = 1L << ((long)iVar7 & 0x3fU);
LAB_1092ca380:
            uVar9 = *puVar8 & (uVar9 ^ 0xffffffffffffffff);
          }
          else {
            puVar8 = (ulong *)(CONCAT44(uStack_104,uStack_108) + ((ulong)(long)iVar7 >> 6) * 8);
            uVar9 = 1L << ((long)iVar7 & 0x3fU);
            if (0x7e < *(byte *)(CONCAT44(uStack_c4,uStack_c8) + *plStack_90 * (ulong)uVar15 +
                                (ulong)uVar6)) goto LAB_1092ca380;
            uVar9 = *puVar8 | uVar9;
          }
          iVar7 = iVar7 + 1;
          *puVar8 = uVar9;
        }
        uVar14 = uVar14 + 1;
      } while (((ulong)plVar4 & 0xffffffff) != uVar14);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + ((ulong)plVar4 & 0xffffffff) * 4;
    } while (uVar11 != ((ulong)plVar4 & 0xffffffff));
  }
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x40))();
  if (iVar7 != (int)plVar4) goto LAB_1092ca760;
  (**(code **)(*param_4 + 0xb8))(&uStack_180,param_4,0);
  lVar10 = CONCAT44(iStack_17c,uStack_180);
  uVar14 = CONCAT44(iStack_174,uStack_178) - lVar10 >> 2;
  uVar11 = uVar14 - 4;
  if (uVar14 < 4) {
    if (lVar10 != 0) {
      uStack_178 = uStack_180;
      iStack_174 = iStack_17c;
      __ZdlPv();
    }
  }
  else {
    iVar7 = 0;
    do {
      uVar9 = (ulong)*(int *)(lVar10 + uVar11 * 4);
      iVar7 = ((uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) + (uVar9 >> 6) * 8) >>
                     (uVar9 & 0x3f)) & 1) + iVar7;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar14);
    uStack_178 = uStack_180;
    iStack_174 = iStack_17c;
    __ZdlPv();
    if (iVar7 == 4) {
      (**(code **)(*param_4 + 0xb8))(&uStack_180,param_4,0);
      lVar10 = 0;
      iVar7 = 0;
      bVar2 = true;
      do {
        bVar13 = bVar2;
        uVar11 = (ulong)*(int *)(CONCAT44(iStack_17c,uStack_180) + lVar10 * 4);
        iVar7 = ((uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) + (uVar11 >> 6) * 8) >>
                       (uVar11 & 0x3f)) & 1) + iVar7;
        lVar10 = 1;
        bVar2 = false;
      } while (bVar13);
      iVar17 = 1;
      do {
        (**(code **)(*param_4 + 0xb8))(&piStack_1a0,param_4,iVar17);
        if ((long)piStack_198 - (long)piStack_1a0 == 0) {
          if (piStack_198 != (int *)0x0) goto LAB_1092ca4f8;
        }
        else {
          lVar10 = (long)piStack_198 - (long)piStack_1a0 >> 2;
          piVar12 = piStack_1a0;
          do {
            iVar7 = ((uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) +
                                       ((ulong)(long)*piVar12 >> 6) * 8) >> ((long)*piVar12 & 0x3fU)
                           ) & 1) + iVar7;
            lVar10 = lVar10 + -1;
            piVar12 = piVar12 + 1;
          } while (lVar10 != 0);
LAB_1092ca4f8:
          piStack_198 = piStack_1a0;
          __ZdlPv();
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 != 6);
      (**(code **)(*param_4 + 0xb8))(&piStack_1a0,param_4,6);
      uVar11 = (long)piStack_198 - (long)piStack_1a0 >> 2;
      if (uVar11 < 2) {
        if (piStack_1a0 != (int *)0x0) goto LAB_1092ca584;
      }
      else {
        lVar10 = uVar11 - 1;
        piVar12 = piStack_1a0;
        do {
          piVar12 = piVar12 + 1;
          iVar7 = ((uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) +
                                     ((ulong)(long)*piVar12 >> 6) * 8) >> ((long)*piVar12 & 0x3fU))
                  & 1) + iVar7;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
LAB_1092ca584:
        piStack_198 = piStack_1a0;
        __ZdlPv();
      }
      if (CONCAT44(iStack_17c,uStack_180) != 0) {
        uStack_178 = uStack_180;
        iStack_174 = iStack_17c;
        __ZdlPv();
      }
      if (0xffffffea < iVar7 - 0x1fU) {
        iVar17 = 0;
        iVar7 = 0x16;
        do {
          (**(code **)(*param_4 + 0xb8))(&uStack_180,param_4,iVar7);
          lVar10 = CONCAT44(iStack_174,uStack_178) - (long)CONCAT44(iStack_17c,uStack_180);
          if (lVar10 == 0) {
            if (CONCAT44(iStack_174,uStack_178) != 0) goto LAB_1092ca60c;
          }
          else {
            lVar10 = lVar10 >> 2;
            piVar12 = (int *)CONCAT44(iStack_17c,uStack_180);
            do {
              iVar17 = ((uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) +
                                          ((ulong)(long)*piVar12 >> 6) * 8) >>
                              ((long)*piVar12 & 0x3fU)) & 1) + iVar17;
              lVar10 = lVar10 + -1;
              piVar12 = piVar12 + 1;
            } while (lVar10 != 0);
LAB_1092ca60c:
            uStack_178 = uStack_180;
            iStack_174 = iStack_17c;
            __ZdlPv();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0x1c);
        if (0xffffffec < iVar17 - 0x1cU) {
          (**(code **)(*param_4 + 0xb8))(&uStack_180,param_4,6);
          uVar15 = (uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) +
                                     ((ulong)(long)*(int *)CONCAT44(iStack_17c,uStack_180) >> 6) * 8
                                     ) >> ((long)*(int *)CONCAT44(iStack_17c,uStack_180) & 0x3fU)) &
                   1;
          iVar7 = 7;
          do {
            (**(code **)(*param_4 + 0xb8))(&piStack_1a0,param_4,iVar7);
            if ((long)piStack_198 - (long)piStack_1a0 == 0) {
              if (piStack_198 != (int *)0x0) goto LAB_1092ca6c4;
            }
            else {
              lVar10 = (long)piStack_198 - (long)piStack_1a0 >> 2;
              piVar12 = piStack_1a0;
              do {
                uVar15 = ((uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) +
                                            ((ulong)(long)*piVar12 >> 6) * 8) >>
                                ((long)*piVar12 & 0x3fU)) & 1) + uVar15;
                lVar10 = lVar10 + -1;
                piVar12 = piVar12 + 1;
              } while (lVar10 != 0);
LAB_1092ca6c4:
              piStack_198 = piStack_1a0;
              __ZdlPv();
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x15);
          (**(code **)(*param_4 + 0xb8))(&piStack_1a0,param_4,0x15);
          uVar11 = (long)piStack_198 - (long)piStack_1a0 >> 2;
          if (uVar11 < 2) {
            if (piStack_1a0 != (int *)0x0) goto LAB_1092ca73c;
          }
          else {
            lVar10 = uVar11 - 1;
            piVar12 = piStack_1a0;
            do {
              piVar12 = piVar12 + 1;
              uVar15 = ((uint)(~*(ulong *)(CONCAT44(uStack_104,uStack_108) +
                                          ((ulong)(long)*piVar12 >> 6) * 8) >>
                              ((long)*piVar12 & 0x3fU)) & 1) + uVar15;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
LAB_1092ca73c:
            piStack_198 = piStack_1a0;
            __ZdlPv();
          }
          if (CONCAT44(iStack_17c,uStack_180) != 0) {
            uStack_178 = uStack_180;
            iStack_174 = iStack_17c;
            __ZdlPv();
          }
          if (uVar15 - 0x22 < 0x1e) goto LAB_1092ca578;
        }
      }
LAB_1092ca760:
      uVar16 = 1;
      goto LAB_1092ca764;
    }
  }
LAB_1092ca578:
  uVar16 = 0;
LAB_1092ca764:
  if (CONCAT44(uStack_104,uStack_108) != 0) {
    __ZdlPv();
  }
  if (CONCAT44(uStack_ec,uStack_f0) != 0) {
    lStack_e8 = CONCAT44(uStack_ec,uStack_f0);
    __ZdlPv();
  }
  if (lStack_a0 != 0) {
    piVar12 = (int *)(lStack_a0 + 0x14);
    do {
      iVar7 = *piVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar2) {
        *piVar12 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(&uStack_d8);
    }
  }
  lStack_a0 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (0 < (int)uStack_d4) {
    lVar10 = 0;
    do {
      *(undefined4 *)(lStack_98 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_d4);
  }
  if (plStack_90 != alStack_88 && plStack_90 != (long *)0x0) {
    _free(plStack_90[-1]);
  }
  return uVar16;
}



/* Entry: 1092ca8ac; end: 1092cb827;  */

/* WARNING: Removing unreachable block (ram,0x0001092cab14) */
/* WARNING: Removing unreachable block (ram,0x0001092cab18) */
/* WARNING: Removing unreachable block (ram,0x0001092cab20) */
/* WARNING: Removing unreachable block (ram,0x0001092cab28) */
/* WARNING: Removing unreachable block (ram,0x0001092cab2c) */
/* WARNING: Removing unreachable block (ram,0x0001092cab4c) */
/* WARNING: Removing unreachable block (ram,0x0001092cab54) */
/* WARNING: Removing unreachable block (ram,0x0001092cab68) */
/* WARNING: Removing unreachable block (ram,0x0001092cab78) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1092ca8ac(long param_1,long param_2,char *param_3,long *param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long **pplVar7;
  float *pfVar8;
  undefined8 **ppuVar9;
  undefined8 *******pppppppuVar10;
  long *plVar11;
  long *plVar12;
  float *******pppppppfVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  long *plVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  int iVar23;
  undefined8 *puVar24;
  bool bVar25;
  long *plVar26;
  bool bVar27;
  float *pfVar28;
  int iVar29;
  float fVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 ******ppppppuVar33;
  float fVar34;
  double dVar35;
  undefined8 *******pppppppuStack_3f0;
  undefined8 *******pppppppuStack_3e8;
  undefined8 *******pppppppuStack_3e0;
  undefined1 auStack_3d8 [4];
  int iStack_3d4;
  int iStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a0;
  long lStack_398;
  undefined1 *puStack_390;
  undefined1 auStack_388 [16];
  long *plStack_378;
  long *plStack_370;
  undefined4 uStack_360;
  int iStack_35c;
  undefined4 uStack_358;
  int iStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  undefined4 *puStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  int iStack_2fc;
  undefined4 uStack_2f8;
  int iStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 auStack_2b0 [2];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 *puStack_260;
  undefined8 **ppuStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 *puStack_220;
  undefined8 uStack_218;
  undefined4 auStack_210 [2];
  undefined4 *puStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [2];
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 *puStack_1e0;
  undefined4 *puStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float *******pppppppfStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [16];
  float *******pppppppfStack_150;
  float *******pppppppfStack_148;
  float *******pppppppfStack_140;
  float ******ppppppfStack_138;
  float ******ppppppfStack_130;
  float *pfStack_120;
  float *pfStack_118;
  float *pfStack_108;
  float *pfStack_100;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 *apuStack_a0 [4];
  undefined8 *******pppppppuVar20;
  
  dVar31 = *(double *)(param_1 + 0x60);
  iRam0000000113732aa4 = (int)(dVar31 * 1000.0);
  iRam0000000113732aa8 = (int)(dVar31 * 600.0);
  iRam0000000113732aac = (int)(dVar31 * 500.0);
  iRam0000000113732ab0 = (int)(dVar31 * 300.0);
  iRam0000000113732ab4 = (int)(dVar31 * 400.0);
  lVar15 = param_1 + 0x90;
  FUN_1092cb828(param_1,param_2,lVar15);
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_2a0._0_4_ = 2.3693558e-38;
  uStack_f0 = 0x2010000;
  uStack_e0 = 0;
  puStack_e8 = (undefined8 *)(param_1 + 0xf0);
  uStack_298 = (float **)lVar15;
  FUN_109ac9fc8(&uStack_2a0,&uStack_f0,0x29,0);
  FUN_1092c93f0(&uStack_300,param_1,(undefined8 *)(param_1 + 0xf0));
  uStack_360 = 0x42ff0000;
  puStack_320 = &uStack_358;
  iStack_354 = 0;
  uStack_350 = 0;
  iStack_35c = 0;
  uStack_358 = 0;
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_34c = 0;
  uStack_348 = 0;
  uStack_334 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  puStack_318 = &uStack_310;
  if (param_5 == 0) {
    if (lStack_2c8 != 0) {
      piVar1 = (int *)(lStack_2c8 + 0x14);
      do {
        cVar4 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_328 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    uStack_360 = uStack_300;
    if (iStack_2fc < 3) {
      iStack_35c = iStack_2fc;
      uStack_358 = uStack_2f8;
      iStack_354 = iStack_2f4;
      uStack_310 = *puStack_2b8;
      uStack_308 = puStack_2b8[1];
    }
    else {
      func_0x000109a84868(&uStack_360,&uStack_300);
    }
    uStack_348 = (undefined4)uStack_2e8;
    uStack_344 = (undefined4)((ulong)uStack_2e8 >> 0x20);
    uStack_350 = (undefined4)uStack_2f0;
    uStack_34c = (undefined4)((ulong)uStack_2f0 >> 0x20);
    uStack_338 = (undefined4)uStack_2d8;
    uStack_334 = (undefined4)((ulong)uStack_2d8 >> 0x20);
    uStack_340 = (undefined4)uStack_2e0;
    uStack_33c = (undefined4)((ulong)uStack_2e0 >> 0x20);
    uStack_330 = (undefined4)uStack_2d0;
    uStack_32c = (undefined4)((ulong)uStack_2d0 >> 0x20);
    lStack_328 = lStack_2c8;
  }
  else {
    uStack_2a0._0_4_ = 127.5;
    puVar24 = (undefined8 *)((ulong)&uStack_2a0 | 8);
    uStack_298._4_4_ = 0;
    uStack_290 = 0;
    uStack_2a0._4_4_ = 0.0;
    uStack_298._0_4_ = 0;
    uStack_284 = 0;
    uStack_280 = 0;
    uStack_28c = 0;
    uStack_288 = 0;
    uStack_274 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_248 = 0;
    puStack_250 = (undefined8 *)0x0;
    puStack_260 = puVar24;
    ppuStack_258 = &puStack_250;
    FUN_1092cba30(&uStack_f0,lVar15);
    if (CONCAT44(uStack_264,uStack_268) != 0) {
      piVar1 = (int *)(CONCAT44(uStack_264,uStack_268) + 0x14);
      do {
        iVar23 = *piVar1;
        cVar4 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar23 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_2a0);
      }
    }
    if (0 < (int)uStack_2a0._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)((long)puStack_260 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)uStack_2a0._4_4_);
    }
    uStack_298._0_4_ = SUB84(puStack_e8,0);
    uStack_298._4_4_ = (undefined4)((ulong)puStack_e8 >> 0x20);
    uStack_2a0._0_4_ = (float)uStack_f0;
    uStack_2a0._4_4_ = fStack_ec;
    uStack_288 = (undefined4)uStack_d8;
    uStack_284 = (undefined4)((ulong)uStack_d8 >> 0x20);
    uStack_290 = (undefined4)uStack_e0;
    uStack_28c = (undefined4)((ulong)uStack_e0 >> 0x20);
    uStack_278 = (undefined4)uStack_c8;
    uStack_274 = (undefined4)((ulong)uStack_c8 >> 0x20);
    uStack_280 = (undefined4)uStack_d0;
    uStack_27c = (undefined4)((ulong)uStack_d0 >> 0x20);
    uStack_268 = (undefined4)lStack_b8;
    uStack_264 = (undefined4)((ulong)lStack_b8 >> 0x20);
    uStack_270 = (undefined4)uStack_c0;
    uStack_26c = (undefined4)((ulong)uStack_c0 >> 0x20);
    puVar3 = puStack_260;
    ppuVar9 = ppuStack_258;
    if ((ppuStack_258 != &puStack_250) &&
       (puVar3 = puVar24, ppuVar9 = &puStack_250, ppuStack_258 != (undefined8 **)0x0)) {
      _free(ppuStack_258[-1]);
    }
    ppuStack_258 = ppuVar9;
    puStack_260 = puVar3;
    ppuVar9 = ppuStack_a8;
    if ((int)fStack_ec < 3) {
      puVar24 = (undefined8 *)((ulong)&uStack_f0 | 4);
      *ppuStack_258 = *ppuStack_a8;
      ppuStack_258[1] = ppuVar9[1];
      uStack_f0 = 0x42ff0000;
      puVar24[1] = 0;
      *puVar24 = 0;
      puVar24[3] = 0;
      puVar24[2] = 0;
      puVar24[5] = 0;
      puVar24[4] = 0;
      *(undefined8 *)((long)puVar24 + 0x34) = 0;
      *(undefined8 *)((long)puVar24 + 0x2c) = 0;
      if (ppuVar9 != apuStack_a0) {
        _free(ppuVar9[-1]);
      }
    }
    else {
      ppuStack_258 = ppuStack_a8;
      puStack_260 = puStack_b0;
    }
    uStack_f0 = 0x1010000;
    puStack_1a8 = &uStack_2a0;
    uStack_e0 = 0;
    uStack_1b0 = 0x2010000;
    uStack_1a0 = 0;
    puStack_e8 = puStack_1a8;
    FUN_109ac9fc8(&uStack_f0,&uStack_1b0,7,0);
    func_0x000109a29358(&uStack_300,&uStack_2a0,&uStack_360);
    if (CONCAT44(uStack_264,uStack_268) != 0) {
      piVar1 = (int *)(CONCAT44(uStack_264,uStack_268) + 0x14);
      do {
        iVar23 = *piVar1;
        cVar4 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar25) {
          *piVar1 = iVar23 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_2a0);
      }
    }
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    if (0 < (int)uStack_2a0._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)((long)puStack_260 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)uStack_2a0._4_4_);
    }
    if (ppuStack_258 != &puStack_250 && ppuStack_258 != (undefined8 **)0x0) {
      _free(ppuStack_258[-1]);
    }
  }
  FUN_1092e31e0(&plStack_378,&uStack_2a0,&uStack_360,param_4);
  FUN_1092c9178(auStack_3d8,param_1,param_2);
  plVar18 = (long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x80) = *plVar18;
  if (plStack_378 == plStack_370) {
    uVar32 = 0;
  }
  else {
    iVar23 = 0;
    fVar30 = (float)iStack_3cc;
    plVar26 = plStack_378;
    do {
      if (iVar23 == 6) break;
      pppppppuStack_3f0 = (undefined8 *******)0x0;
      pppppppuStack_3e8 = (undefined8 *******)0x0;
      pppppppuStack_3e0 = (undefined8 *******)0x0;
      puVar3 = (undefined8 *)plVar26[1];
      for (puVar24 = (undefined8 *)*plVar26; puVar24 != puVar3; puVar24 = puVar24 + 1) {
        uVar32 = NEON_scvtf(*puVar24,4);
        uStack_2a0._0_4_ = (float)(long)((float)uVar32 * (fVar30 / (float)iStack_2f4));
        uStack_2a0._4_4_ =
             (float)(long)((float)((ulong)uVar32 >> 0x20) * (fVar30 / (float)iStack_2f4));
        if (pppppppuStack_3e8 < pppppppuStack_3e0) {
          pppppppuVar10 = pppppppuStack_3e8 + 1;
          *pppppppuStack_3e8 = (undefined8 ******)CONCAT44(uStack_2a0._4_4_,(float)uStack_2a0);
        }
        else {
          pppppppuVar10 = &pppppppuStack_3f0;
          FUN_1092c78ec(pppppppuVar10,&uStack_2a0);
        }
        pppppppuStack_3e8 = pppppppuVar10;
      }
      plVar11 = param_4;
      (**(code **)(*param_4 + 0x10))();
      plVar12 = param_4;
      (**(code **)(*param_4 + 200))();
      if ((int)plVar12 == 0) {
LAB_1092cae84:
        FUN_1092c9ba0(&uStack_f0,param_1,auStack_3d8,&pppppppuStack_3f0);
        FUN_1092c90c4(param_1,&uStack_f0);
        bVar25 = false;
        iVar29 = 0;
        fVar34 = (float)((int)plVar11 + -1);
        do {
          FUN_1092c9804(&pfStack_108,param_1,&uStack_f0);
          if ((ulong)((long)pfStack_100 - (long)pfStack_108) < 0x50) {
            bVar27 = false;
            bVar25 = false;
          }
          else {
            FUN_1092c99a0(&pfStack_120);
            pppppppfVar13 = &ppppppfStack_138;
            FUN_1092c9b04(pppppppfVar13,pfStack_108,pfStack_100);
            pfVar8 = pfStack_100;
            if (((long)pfStack_118 - (long)pfStack_120 == 0) ||
               (ppppppfStack_130 == ppppppfStack_138)) {
              bVar27 = false;
              bVar25 = false;
            }
            else {
              pppppppfStack_148 = (float *******)0x0;
              pppppppfStack_150 = (float *******)0x0;
              pppppppfStack_140 = (float *******)0x0;
              if (pfStack_108 != pfStack_100) {
                dVar31 = (double)((*(float *)((long)pfStack_120 +
                                             ((long)pfStack_118 - (long)pfStack_120) + -4) -
                                  *pfStack_120) / fVar34);
                dVar35 = (double)((*(float *)((long)ppppppfStack_130 + -4) -
                                  *(float *)ppppppfStack_138) / fVar34);
                pfVar28 = pfStack_108;
                do {
                  uStack_2a0._0_4_ =
                       (float)((double)*(float *)ppppppfStack_138 +
                              dVar35 * (double)(long)((double)(*pfVar28 - *(float *)ppppppfStack_138
                                                              ) / dVar35));
                  uStack_2a0._4_4_ =
                       (float)((double)*pfStack_120 +
                              dVar31 * (double)(long)((double)(pfVar28[1] - *pfStack_120) / dVar31))
                  ;
                  if (pppppppfStack_148 < pppppppfStack_140) {
                    pppppppfVar13 = pppppppfStack_148 + 1;
                    *(float *)pppppppfStack_148 = (float)uStack_2a0;
                    *(float *)((long)pppppppfStack_148 + 4) = uStack_2a0._4_4_;
                  }
                  else {
                    pppppppfVar13 = (float *******)&pppppppfStack_150;
                    FUN_1092cbf20(pppppppfVar13,&uStack_2a0);
                  }
                  pfVar28 = pfVar28 + 2;
                  pppppppfStack_148 = pppppppfVar13;
                } while (pfVar28 != pfVar8);
              }
              uStack_290 = 0;
              uStack_28c = 0;
              uStack_2a0._0_4_ = -2.4060936e-38;
              uStack_298 = &pfStack_108;
              uStack_1b8 = 0;
              uStack_1c8 = 0x8103000d;
              pppppppfStack_1c0 = (float *******)&pppppppfStack_150;
              FUN_109a91d90();
              FUN_109b93554(&uStack_1b0,0x4008000000000000,0x3fefd70a3d70a3d7,&uStack_2a0,
                            &uStack_1c8,4,pppppppfVar13,2000);
              FUN_1092c99a0(&uStack_1c8,pppppppfStack_150,pppppppfStack_148);
              FUN_1092c9b04(&puStack_1e0,pppppppfStack_150,pppppppfStack_148);
              uStack_1e8 = 0;
              auStack_1f8[0] = 0x1010000;
              auStack_210[0] = 0x2010000;
              uStack_200 = 0;
              uStack_218 = 0;
              uStack_228 = 0x1010000;
              uStack_230 = NEON_rev64(*puStack_b0,4);
              uStack_298._0_4_ = 0;
              uStack_298._4_4_ = 0;
              uStack_2a0._0_4_ = 0.0;
              uStack_2a0._4_4_ = 0.0;
              uStack_288 = 0;
              uStack_284 = 0;
              uStack_290 = 0;
              uStack_28c = 0;
              puStack_220 = &uStack_1b0;
              puStack_208 = &uStack_f0;
              puStack_1f0 = &uStack_f0;
              FUN_109b1eb58(auStack_1f8,auStack_210,&uStack_228,&uStack_230,1,0,&uStack_2a0);
              uStack_2a0._0_4_ = 6.888103e-29;
              uStack_2a0._4_4_ = 1.4013e-45;
              uStack_298._0_4_ = 0x42ff0000;
              uStack_28c = 0;
              uStack_288 = 0;
              uStack_298._4_4_ = 0;
              uStack_290 = 0;
              uStack_27c = 0;
              uStack_278 = 0;
              uStack_284 = 0;
              uStack_280 = 0;
              uStack_26c = 0;
              uStack_274 = 0;
              uStack_270 = 0;
              puStack_260 = (undefined8 *)0x0;
              uStack_268 = 0;
              uStack_264 = 0;
              uStack_248 = 0;
              uStack_240 = 0;
              uStack_228 = *puStack_1e0;
              uStack_224 = *(undefined4 *)CONCAT44(uStack_1c4,uStack_1c8);
              uStack_230 = CONCAT44(*(undefined4 *)((long)pppppppfStack_1c0 + -4),puStack_1d8[-1]);
              ppuStack_258 = (undefined8 **)&uStack_290;
              puStack_250 = &uStack_248;
              if (param_6 == 0) {
LAB_1092cb1b4:
                FUN_1092dc284(&uStack_2a0,&uStack_f0,param_4,param_3,&uStack_228,&uStack_230);
                if (*param_3 == '\x01') {
                  bVar27 = false;
                  uVar6 = iVar29 * 3 & 3;
                  bVar25 = true;
                  if ((uVar6 != 0) &&
                     (pppppppuVar10 =
                           (undefined8 *******)((long)pppppppuStack_3f0 + (ulong)(uVar6 << 3)),
                     pppppppuVar10 != pppppppuStack_3e8)) {
                    ppppppuVar33 = *pppppppuStack_3f0;
                    *pppppppuStack_3f0 = *pppppppuVar10;
                    pppppppuVar19 = pppppppuVar10;
                    pppppppuVar21 = pppppppuStack_3f0;
                    while( true ) {
                      pppppppuVar21 = pppppppuVar21 + 1;
                      pppppppuVar20 = pppppppuVar19 + 1;
                      *pppppppuVar19 = ppppppuVar33;
                      if (pppppppuVar20 == pppppppuStack_3e8) break;
                      pppppppuVar19 = pppppppuVar20;
                      if (pppppppuVar21 != pppppppuVar10) {
                        pppppppuVar19 = pppppppuVar10;
                      }
                      ppppppuVar33 = *pppppppuVar21;
                      *pppppppuVar21 = *pppppppuVar20;
                      pppppppuVar10 = pppppppuVar19;
                      pppppppuVar19 = pppppppuVar20;
                    }
                    pppppppuVar19 = pppppppuVar10;
                    if (pppppppuVar21 != pppppppuVar10) {
                      do {
                        while( true ) {
                          pppppppuVar17 = pppppppuVar19;
                          pppppppuVar20 = pppppppuVar21 + 1;
                          ppppppuVar33 = *pppppppuVar21;
                          pppppppuVar22 = pppppppuVar21 + 1;
                          *pppppppuVar21 = *pppppppuVar10;
                          pppppppuVar19 = pppppppuVar10 + 1;
                          *pppppppuVar10 = ppppppuVar33;
                          if (pppppppuVar19 == pppppppuStack_3e8) break;
                          pppppppuVar10 = pppppppuVar19;
                          pppppppuVar21 = pppppppuVar20;
                          if (pppppppuVar22 != pppppppuVar17) {
                            pppppppuVar19 = pppppppuVar17;
                          }
                        }
                        pppppppuVar10 = pppppppuVar17;
                        pppppppuVar21 = pppppppuVar22;
                        pppppppuVar19 = pppppppuVar17;
                      } while (pppppppuVar22 != pppppppuVar17);
                    }
                    bVar27 = false;
                    bVar25 = true;
                  }
                }
                else {
                  if (iVar29 != 3) {
                    uStack_1e8 = 0;
                    auStack_1f8[0] = 0x1010000;
                    auStack_210[0] = 0x2010000;
                    uStack_200 = 0;
                    puStack_208 = &uStack_f0;
                    puStack_1f0 = &uStack_f0;
                    FUN_109a895d0(auStack_1f8,auStack_210);
                    uStack_1e8 = 0;
                    auStack_1f8[0] = 0x1010000;
                    auStack_210[0] = 0x2010000;
                    uStack_200 = 0;
                    puStack_208 = &uStack_f0;
                    puStack_1f0 = &uStack_f0;
                    FUN_109a491e0(auStack_1f8,auStack_210,1);
                  }
                  bVar27 = true;
                }
              }
              else {
                puVar14 = &uStack_f0;
                FUN_1092ca0e4(puVar14,&uStack_228,&uStack_230,param_4);
                if (((ulong)puVar14 & 1) == 0) goto LAB_1092cb1b4;
                bVar27 = false;
                bVar25 = false;
              }
              FUN_1092cc1d4(&uStack_2a0);
              if (puStack_1e0 != (undefined4 *)0x0) {
                puStack_1d8 = puStack_1e0;
                __ZdlPv();
              }
              if ((float *******)CONCAT44(uStack_1c4,uStack_1c8) != (float *******)0x0) {
                pppppppfStack_1c0 = (float *******)CONCAT44(uStack_1c4,uStack_1c8);
                __ZdlPv();
              }
              if (lStack_178 != 0) {
                piVar1 = (int *)(lStack_178 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1b0);
                }
              }
              lStack_178 = 0;
              uStack_198 = 0;
              uStack_1a0 = 0;
              uStack_188 = 0;
              uStack_190 = 0;
              if (0 < iStack_1ac) {
                lVar15 = 0;
                do {
                  *(undefined4 *)(lStack_170 + lVar15 * 4) = 0;
                  lVar15 = lVar15 + 1;
                } while (lVar15 < iStack_1ac);
              }
              if (puStack_168 != auStack_160 && puStack_168 != (undefined1 *)0x0) {
                _free(*(undefined8 *)(puStack_168 + -8));
              }
              if (pppppppfStack_150 != (float *******)0x0) {
                pppppppfStack_148 = pppppppfStack_150;
                __ZdlPv();
              }
            }
            if (ppppppfStack_138 != (float ******)0x0) {
              ppppppfStack_130 = ppppppfStack_138;
              __ZdlPv(ppppppfStack_138);
            }
            if (pfStack_120 != (float *)0x0) {
              pfStack_118 = pfStack_120;
              __ZdlPv();
            }
          }
          if (pfStack_108 != (float *)0x0) {
            pfStack_100 = pfStack_108;
            __ZdlPv(pfStack_108);
          }
          if (!bVar27) goto LAB_1092cb3ac;
          iVar29 = iVar29 + 1;
        } while (iVar29 != 4);
        bVar25 = false;
LAB_1092cb3ac:
        if (lStack_b8 != 0) {
          piVar1 = (int *)(lStack_b8 + 0x14);
          do {
            iVar29 = *piVar1;
            cVar4 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar27) {
              *piVar1 = iVar29 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_f0);
          }
        }
        lStack_b8 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        if (0 < (int)fStack_ec) {
          lVar15 = 0;
          do {
            *(undefined4 *)((long)puStack_b0 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < (int)fStack_ec);
        }
        if (ppuStack_a8 != apuStack_a0 && ppuStack_a8 != (undefined8 **)0x0) {
          _free(ppuStack_a8[-1]);
        }
        if (bVar25) {
          if ((long)pppppppuStack_3e8 - (long)pppppppuStack_3f0 == 0x20) {
            FUN_1092cbef0(plVar18,4);
            lVar15 = 0;
            lVar16 = *plVar18;
            fVar30 = (float)*(int *)(param_2 + 0xc) / (float)iStack_3cc;
            do {
              uVar32 = NEON_scvtf(pppppppuStack_3f0[*(int *)(&UNK_10dfc2b50 + lVar15 * 4)],4);
              *(ulong *)(lVar16 + lVar15 * 8) =
                   CONCAT44((int)((float)((ulong)uVar32 >> 0x20) * fVar30),
                            (int)((float)uVar32 * fVar30));
              lVar15 = lVar15 + 1;
            } while (lVar15 != 4);
          }
          else {
            *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
            if (pppppppuStack_3f0 == (undefined8 *******)0x0) goto LAB_1092cb500;
          }
          pppppppuStack_3e8 = pppppppuStack_3f0;
          __ZdlPv();
LAB_1092cb500:
          uVar32 = 1;
          goto LAB_1092cb504;
        }
      }
      else {
        FUN_1092c9ba0(&uStack_2a0,param_1,&uStack_300,plVar26);
        puVar24 = &uStack_2a0;
        FUN_1092c9f8c(puVar24,param_4);
        if (CONCAT44(uStack_264,uStack_268) != 0) {
          piVar1 = (int *)(CONCAT44(uStack_264,uStack_268) + 0x14);
          do {
            iVar29 = *piVar1;
            cVar4 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar25) {
              *piVar1 = iVar29 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar29 + -1 == 0) {
            func_0x000109a848d4(&uStack_2a0);
          }
        }
        uStack_268 = 0;
        uStack_264 = 0;
        uStack_284 = 0;
        uStack_288 = 0;
        uStack_28c = 0;
        uStack_290 = 0;
        uStack_274 = 0;
        uStack_278 = 0;
        uStack_27c = 0;
        uStack_280 = 0;
        if (0 < (int)uStack_2a0._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)((long)puStack_260 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < (int)uStack_2a0._4_4_);
        }
        if (ppuStack_258 != &puStack_250 && ppuStack_258 != (undefined8 **)0x0) {
          _free(ppuStack_258[-1]);
        }
        if (((ulong)puVar24 & 1) != 0) goto LAB_1092cae84;
      }
      if (pppppppuStack_3f0 != (undefined8 *******)0x0) {
        pppppppuStack_3e8 = pppppppuStack_3f0;
        __ZdlPv();
      }
      iVar23 = iVar23 + 1;
      plVar26 = plVar26 + 3;
    } while (plVar26 != plStack_370);
    uVar32 = 0;
  }
LAB_1092cb504:
  if (lStack_3a0 != 0) {
    piVar1 = (int *)(lStack_3a0 + 0x14);
    do {
      iVar23 = *piVar1;
      cVar4 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar25) {
        *piVar1 = iVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(auStack_3d8);
    }
  }
  lStack_3a0 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  if (0 < iStack_3d4) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_398 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iStack_3d4);
  }
  if (puStack_390 != auStack_388 && puStack_390 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_390 + -8));
  }
  uStack_2a0 = &plStack_378;
  FUN_1092cc3c0(&uStack_2a0);
  pplVar7 = uStack_2a0;
  lVar15 = (long)uStack_298;
  if (lStack_328 != 0) {
    piVar1 = (int *)(lStack_328 + 0x14);
    do {
      iVar23 = *piVar1;
      cVar4 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar25) {
        *piVar1 = iVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_360);
      pplVar7 = uStack_2a0;
      lVar15 = (long)uStack_298;
    }
  }
  lStack_328 = 0;
  uStack_348 = 0;
  uStack_344 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  if (0 < iStack_35c) {
    lVar16 = 0;
    do {
      puStack_320[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_35c);
  }
  uStack_2a0 = pplVar7;
  uStack_298 = (float **)lVar15;
  if (puStack_318 != &uStack_310 && puStack_318 != (undefined8 *)0x0) {
    _free(puStack_318[-1]);
  }
  if (lStack_2c8 != 0) {
    piVar1 = (int *)(lStack_2c8 + 0x14);
    do {
      iVar23 = *piVar1;
      cVar4 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar25) {
        *piVar1 = iVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_300);
    }
  }
  lStack_2c8 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  if (0 < iStack_2fc) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_2c0 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iStack_2fc);
  }
  if (puStack_2b8 != auStack_2b0 && puStack_2b8 != (undefined8 *)0x0) {
    _free(puStack_2b8[-1]);
  }
  return uVar32;
}



/* Entry: 1092cb828; end: 1092cba2f;  */

void FUN_1092cb828(long param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined4 uStack_c0;
  int iStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 auStack_70 [2];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar9 = (double)*(int *)(param_2 + 8) / (double)*(int *)(param_2 + 0xc);
  uStack_b0 = 0;
  uStack_c0 = 0x1010000;
  uStack_48 = 0;
  iStack_5c = (int)(dVar9 * (double)iRam0000000113732aa8);
  iStack_60 = iRam0000000113732aa8;
  iStack_58 = 0x2010000;
  lStack_b8 = param_2;
  uStack_50 = param_3;
  FUN_109b0f718(0,0,&uStack_c0,&iStack_58,&iStack_60,0);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    iVar6 = (int)(dVar9 * (double)iRam0000000113732ab0);
    iStack_54 = (int)((double)(*(int *)(param_3 + 1) - iVar6) / 2.0);
    iStack_58 = (int)((double)(*(int *)((long)param_3 + 0xc) - iRam0000000113732ab0) / 2.0);
    uStack_50 = (undefined8 *)CONCAT44(iStack_54 + iVar6,iRam0000000113732ab0 + iStack_58);
    FUN_109a852c8(&uStack_c0,param_3,&iStack_58);
    if (param_3[7] != 0) {
      piVar1 = (int *)(param_3[7] + 0x14);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(param_3);
      }
    }
    param_3[7] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    if (0 < *(int *)((long)param_3 + 4)) {
      lVar4 = 0;
      lVar7 = param_3[8];
      do {
        *(undefined4 *)(lVar7 + lVar4 * 4) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)((long)param_3 + 4));
    }
    param_3[1] = lStack_b8;
    *param_3 = CONCAT44(iStack_bc,uStack_c0);
    param_3[3] = uStack_a8;
    param_3[2] = uStack_b0;
    param_3[5] = uStack_98;
    param_3[4] = uStack_a0;
    param_3[7] = uStack_88;
    param_3[6] = uStack_90;
    puVar8 = (undefined8 *)param_3[9];
    puVar5 = param_3 + 10;
    if (puVar8 != puVar5) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
      }
      param_3[8] = param_3 + 1;
      param_3[9] = puVar5;
      puVar8 = puVar5;
    }
    if (iStack_bc < 3) {
      puVar5 = (undefined8 *)((ulong)&uStack_c0 | 4);
      *puVar8 = *puStack_78;
      puVar8[1] = puStack_78[1];
      uStack_c0 = 0x42ff0000;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      *(undefined8 *)((long)puVar5 + 0x34) = 0;
      *(undefined8 *)((long)puVar5 + 0x2c) = 0;
      if (puStack_78 != auStack_70) {
        _free(puStack_78[-1]);
      }
    }
    else {
      param_3[8] = uStack_80;
      param_3[9] = puStack_78;
    }
  }
  return;
}



/* Entry: 1092cba30; end: 1092cbeef;  */

void FUN_1092cba30(long **param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long **pplVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined4 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long **pplStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_d0 = 0x42ff0000;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_90 = (long)&uStack_cc + 4;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_2e0 = 0;
  plStack_2f0._0_4_ = 0x1010000;
  uStack_160 = 0x2010000;
  uStack_150 = 0;
  uStack_14c = 0;
  puStack_2e8 = (undefined4 *)param_2;
  puStack_88 = &uStack_80;
  uStack_158 = &uStack_d0;
  FUN_109ac9fc8(&plStack_2f0,&uStack_160,7,0);
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_160 = 0x42ff0000;
  puStack_120 = &uStack_158;
  uStack_158._4_4_ = 0;
  uStack_150 = 0;
  iStack_15c = 0;
  uStack_158._0_4_ = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_2e0 = 0;
  plStack_2f0._0_4_ = 0x1010000;
  uStack_178._0_4_ = 0x2010000;
  uStack_168 = 0;
  uStack_190 = 0x300000003;
  uStack_308 = 0xffffffffffffffff;
  puStack_2e8 = &uStack_d0;
  pplStack_170 = (long **)&uStack_d0;
  puStack_118 = &uStack_110;
  FUN_109b437c0(&plStack_2f0,&uStack_178,0xffffffff,&uStack_190,&uStack_308,1,4);
  plStack_2f0._0_4_ = 0x1010000;
  puStack_2e8 = &uStack_d0;
  uStack_2e0 = 0;
  uStack_178._0_4_ = 0x2010000;
  uStack_168 = 0;
  pplStack_170 = (long **)&uStack_160;
  FUN_109ac8f38(0x4059000000000000,0x4069000000000000,&plStack_2f0,&uStack_178,3,0);
  plStack_2f0 = (long *)CONCAT44(plStack_2f0._4_4_,0x3010000);
  uStack_2e0 = 0;
  uStack_178 = CONCAT44(uStack_178._4_4_,0x8204000c);
  pplStack_170 = (long **)&lStack_e8;
  uStack_168 = 0;
  uStack_190 = CONCAT44(uStack_190._4_4_,0x8203001c);
  plStack_188 = &lStack_100;
  uStack_180 = 0;
  uStack_308 = 0;
  puStack_2e8 = &uStack_160;
  FUN_109adf8b0(&plStack_2f0,&uStack_178,&uStack_190,1,2,&uStack_308);
  uStack_178 = NEON_rev64(*puStack_120,4);
  FUN_109a829e8(&plStack_2f0,&uStack_178,0x10);
  *(undefined4 *)param_1 = 0x42ff0000;
  param_1[7] = (long *)0x0;
  param_1[6] = (long *)0x0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  param_1[10] = (long *)0x0;
  param_1[8] = (long *)(param_1 + 1);
  param_1[9] = (long *)(param_1 + 10);
  param_1[0xb] = (long *)0x0;
  (**(code **)(*plStack_2f0 + 0x18))(plStack_2f0,&plStack_2f0,param_1,0xffffffff);
  pplVar5 = &plStack_2f0;
  FUN_10918eb6c(pplVar5);
  puStack_2e8 = (undefined4 *)0x406fe00000000000;
  plStack_2f0 = (long *)0x406fe00000000000;
  uStack_2d8 = 0;
  uStack_2e0 = 0x406fe00000000000;
  uStack_178 = CONCAT44(uStack_178._4_4_,0xc1020006);
  uStack_168 = 0x400000001;
  pplStack_170 = &plStack_2f0;
  FUN_109a91d90();
  FUN_109a48a40(param_1,&uStack_178,pplVar5);
  if (lStack_e0 != lStack_e8) {
    uVar7 = 0;
    do {
      puStack_2e8 = (undefined4 *)0x0;
      plStack_2f0 = (long *)0x0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_178 = CONCAT44(uStack_178._4_4_,0x3010000);
      uStack_168 = 0;
      uStack_180 = 0;
      uStack_190 = CONCAT44(uStack_190._4_4_,0x8104000c);
      uStack_2f8 = 0;
      uStack_308 = CONCAT44(uStack_308._4_4_,0x8103001c);
      uStack_310 = 0;
      plStack_300 = &lStack_100;
      plStack_188 = &lStack_e8;
      pplStack_170 = param_1;
      FUN_109af08e8(&uStack_178,&uStack_190,uVar7,&plStack_2f0,2,8,&uStack_308,0,&uStack_310);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)((lStack_e0 - lStack_e8 >> 3) * -0x5555555555555555));
  }
  if (lStack_128 != 0) {
    piVar1 = (int *)(lStack_128 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_160);
    }
  }
  lStack_128 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  if (0 < iStack_15c) {
    lVar6 = 0;
    do {
      *(undefined4 *)((long)puStack_120 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_15c);
  }
  if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
    _free(puStack_118[-1]);
  }
  if (lStack_100 != 0) {
    lStack_f8 = lStack_100;
    __ZdlPv();
  }
  plStack_2f0 = &lStack_e8;
  FUN_1092cc3c0(&plStack_2f0);
  if (lStack_98 != 0) {
    piVar1 = (int *)(lStack_98 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (0 < (int)uStack_cc) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_cc);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  return;
}



/* Entry: 1092cbef0; end: 1092cbf1f;  */

void FUN_1092cbef0(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar3 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar3) {
    if (param_2 < uVar3) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  param_2 = param_2 - uVar3;
  lVar5 = param_1[1];
  if ((ulong)(param_1[2] - lVar5 >> 3) < param_2) {
    lVar5 = lVar5 - *param_1;
    uVar3 = param_2 + (lVar5 >> 3);
    if (uVar3 >> 0x3d != 0) {
      FUN_1092c6198();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      if (*(long *)*param_1 != 0) {
        FUN_1092cc400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
        return;
      }
      return;
    }
    uVar2 = param_1[2] - *param_1;
    uVar4 = (long)uVar2 >> 2;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar4 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1092c61ac();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4;
    plStack_58 = plVar1;
    lStack_50 = lVar5;
    _bzero(lVar5,param_2 * 8);
    lStack_48 = lVar5 + param_2 * 8;
    FUN_1092c79f4(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar5,param_2 * 8);
      lVar5 = lVar5 + param_2 * 8;
    }
    param_1[1] = lVar5;
  }
  return;
}



/* Entry: 1092cbf20; end: 1092cc027;  */

long * FUN_1092cbf20(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar9 = param_1;
    plStack_38 = param_1;
    FUN_1092cc0a8();
    puStack_50 = (undefined8 *)((long)plVar9 + lVar10);
    plStack_40 = plVar9 + uVar7;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *param_2;
    plStack_58 = plVar9;
    FUN_1092cc028(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined8 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_1092cc094();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined8 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar4));
  puVar5 = puVar2;
  for (puVar8 = puVar3; puVar4 != puVar8; puVar8 = puVar8 + 1) {
    *puVar5 = *puVar8;
    puVar5 = puVar5 + 1;
  }
  param_2[1] = puVar2;
  lVar10 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 1092cc028; end: 1092cc093;  */

void FUN_1092cc028(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar6 = puVar2; puVar3 != puVar6; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1092cc094; end: 1092cc0a7;  */

void FUN_1092cc094(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10f5642f5;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1092cc154();
    lVar2 = *(long *)(puVar1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    *(long *)(puVar1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 1092cc0a8; end: 1092cc0db;  */

void FUN_1092cc0a8(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_1092cc154();
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1092cc0dc; end: 1092cc153;  */

void FUN_1092cc0dc(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1092cc154(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1092cc154; end: 1092cc18b;  */

undefined1  [16] FUN_1092cc154(long *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 >> 0x3e == 0) {
    plVar5 = param_1;
    FUN_1092cc1a0();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)plVar5 + param_2 * 4;
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = plVar5;
    return auVar10;
  }
  FUN_1092cc18c();
  puVar6 = (undefined8 *)&UNK_10f5642f5;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e == 0) {
    lVar7 = param_2 << 2;
    __Znwm(lVar7);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar7;
    return auVar11;
  }
  func_0x000104c4f740();
  *puVar6 = &PTR_FUN_110aea258;
  if (puVar6[8] != 0) {
    piVar1 = (int *)(puVar6[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar6 + 1);
    }
  }
  puVar6[8] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  if (0 < *(int *)((long)puVar6 + 0xc)) {
    lVar7 = 0;
    lVar9 = puVar6[9];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)puVar6 + 0xc));
  }
  puVar8 = (undefined8 *)puVar6[10];
  if (puVar8 != puVar6 + 0xb && puVar8 != (undefined8 *)0x0) {
    _free(puVar8[-1]);
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = puVar6;
  return auVar12;
}



/* Entry: 1092cc18c; end: 1092cc19f;  */

undefined1  [16] FUN_1092cc18c(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar5 = (undefined8 *)&UNK_10f5642f5;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e == 0) {
    lVar6 = param_2 << 2;
    __Znwm(lVar6);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar6;
    return auVar9;
  }
  func_0x000104c4f740();
  *puVar5 = &PTR_FUN_110aea258;
  if (puVar5[8] != 0) {
    piVar1 = (int *)(puVar5[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar5 + 1);
    }
  }
  puVar5[8] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  if (0 < *(int *)((long)puVar5 + 0xc)) {
    lVar6 = 0;
    lVar8 = puVar5[9];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0xc));
  }
  puVar7 = (undefined8 *)puVar5[10];
  if (puVar7 != puVar5 + 0xb && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar5;
  return auVar10;
}



/* Entry: 1092cc1a0; end: 1092cc1d3;  */

undefined1  [16] FUN_1092cc1a0(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar5 = param_2 << 2;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000104c4f740();
  *param_1 = &PTR_FUN_110aea258;
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 1092cc1d4; end: 1092cc27f;  */

undefined8 * FUN_1092cc1d4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110aea258;
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 1092cc280; end: 1092cc3bf;  */

void FUN_1092cc280(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1];
  if ((ulong)(param_1[2] - lVar5 >> 3) < param_2) {
    lVar5 = lVar5 - *param_1;
    uVar1 = param_2 + (lVar5 >> 3);
    if (uVar1 >> 0x3d != 0) {
      FUN_1092c6198();
      if (lStack_48 != lStack_50) {
        lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
      }
      if (plStack_58 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      if (*(long *)*param_1 != 0) {
        FUN_1092cc400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
        return;
      }
      return;
    }
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1092c61ac();
    }
    lVar5 = (long)plVar2 + lVar5;
    plStack_40 = plVar2 + uVar4;
    plStack_58 = plVar2;
    lStack_50 = lVar5;
    _bzero(lVar5,param_2 << 3);
    lStack_48 = lVar5 + param_2 * 8;
    FUN_1092c79f4(param_1,&plStack_58);
    if (lStack_48 != lStack_50) {
      lStack_48 = lStack_48 + ((lStack_50 - lStack_48) + 7U & 0xfffffffffffffff8);
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar5,param_2 << 3);
      lVar5 = lVar5 + param_2 * 8;
    }
    param_1[1] = lVar5;
  }
  return;
}



/* Entry: 1092cc3c0; end: 1092cc3ff;  */

void FUN_1092cc3c0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_1092cc400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1092cc400; end: 1092cc453;  */

void FUN_1092cc400(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1092cc454; end: 1092cc4a7;  */

long * FUN_1092cc454(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 1092cc4a8; end: 1092cc587;  */

/* WARNING: Possible PIC construction at 0x0001092cc540: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092cc544) */

void FUN_1092cc4a8(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xfffffffffffffff0;
  if ((bRam0000000113829bd8 & 1) == 0) {
    iVar2 = 0x13829bd8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)0x60;
      __Znwm();
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR_FUN_110ae99a8;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[10] = 0x1300000010;
      *(undefined4 *)(puVar3 + 0xb) = 1;
      *(undefined1 *)((long)puVar3 + 0x5c) = 0;
      plVar4 = (long *)0x113829bd0;
      puRam0000000113829bd0 = (undefined8 *)0x0;
      unaff_x30 = 0x1092cc544;
      goto SUB_1092ccfdc;
    }
  }
  *param_1 = 0;
  puVar1 = (undefined1 *)register0x00000008;
  plVar4 = param_1;
  puVar3 = puRam0000000113829bd0;
  param_1 = unaff_x19;
  puVar6 = unaff_x29;
SUB_1092ccfdc:
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar6;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  plVar5 = (long *)*plVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
    (**(code **)(*plVar5 + 8))();
  }
  *plVar4 = (long)puVar3;
  return;
}



/* Entry: 1092cc588; end: 1092cc5d7;  */

long * FUN_1092cc588(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1092cc5d8; end: 1092cc963;  */

void FUN_1092cc5d8(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  undefined **ppuStack_60;
  undefined4 uStack_58;
  long *plStack_50;
  undefined4 uStack_44;
  
  func_0x000108a5942c(param_1 + 0x10,(long)*(int *)(param_1 + 0x50));
  func_0x000108a5942c(param_1 + 0x28,(long)*(int *)(param_1 + 0x50));
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x10);
    uVar7 = 1;
    do {
      *(uint *)(lVar5 + lVar6 * 4) = uVar7;
      uVar7 = uVar7 * 2;
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 <= (int)uVar7) {
        uVar7 = (*(uint *)(param_1 + 0x54) ^ uVar7) & iVar1 - 1U;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    if (1 < iVar1) {
      lVar6 = 0;
      lVar8 = *(long *)(param_1 + 0x28);
      do {
        *(int *)(lVar8 + (long)*(int *)(lVar5 + lVar6 * 4) * 4) = (int)lVar6;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)*(int *)(param_1 + 0x50) + -1);
    }
  }
  plVar2 = (long *)0x30;
  __Znwm();
  plVar3 = (long *)0x28;
  __Znwm();
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)&PTR_DAT_110ae9a28;
  uStack_44 = 0;
  FUN_1092cd11c(plVar3 + 2,1,&uStack_44);
  uStack_58 = 0;
  ppuStack_60 = &PTR_FUN_110ae99f0;
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  plStack_50 = plVar3;
  FUN_1092cd1f8(plVar2,param_1,&ppuStack_60);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))();
  }
  *(long **)(param_1 + 0x40) = plVar2;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x28);
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  *(undefined4 *)plVar2[2] = 0;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)0x30;
  __Znwm();
  plVar3 = (long *)0x28;
  __Znwm();
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)&PTR_DAT_110ae9a28;
  uStack_44 = 0;
  FUN_1092cd11c(plVar3 + 2,1,&uStack_44);
  uStack_70 = 0;
  ppuStack_78 = &PTR_FUN_110ae99f0;
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  plStack_68 = plVar3;
  FUN_1092cd1f8(plVar2,param_1,&ppuStack_78);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x48);
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))();
  }
  *(long **)(param_1 + 0x48) = plVar2;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x48) + 0x28);
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  *(undefined4 *)plVar2[2] = 1;
  iVar1 = (int)plVar2[1] + -1;
  *(int *)(plVar2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return;
}



/* Entry: 1092cc964; end: 1092cca3b;  */

undefined8 * FUN_1092cc964(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae99f0;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  param_1[2] = 0;
  return param_1;
}



/* Entry: 1092cca3c; end: 1092ccc43;  */

long * FUN_1092cca3c(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuVar6;
  code *pcVar7;
  int iVar8;
  long *unaff_x19;
  int iVar9;
  undefined4 uStack_44;
  
  if ((*(byte *)(param_2 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(param_2);
  }
  if (-1 < param_3) {
    if ((int)param_4 != 0) {
      plVar2 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar2 + 1) = 0;
      *plVar2 = (long)&PTR_DAT_110ae9a28;
      uStack_44 = 0;
      FUN_1092cd11c(plVar2 + 2,param_3 + 1,&uStack_44);
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      *(int *)plVar2[2] = (int)param_4;
      plVar3 = (long *)0x30;
      __Znwm();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      plVar4 = plVar3;
      FUN_1092cd1f8();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      *param_1 = (long)plVar3;
      iVar8 = (int)plVar2[1] + -1;
      *(int *)(plVar2 + 1) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        plVar4 = plVar2;
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar8 = (int)plVar2[1];
      }
      *(int *)(plVar2 + 1) = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))(plVar2);
        plVar4 = plVar2;
      }
      return plVar4;
    }
    *param_1 = 0;
    lVar5 = *(long *)(param_2 + 0x40);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    }
    plVar4 = (long *)*param_1;
    if ((plVar4 != (long *)0x0) &&
       (iVar8 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar8, iVar8 == 0)) {
      *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
      (**(code **)(*plVar4 + 8))();
    }
    *param_1 = lVar5;
    return plVar4;
  }
  lVar5 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092cf4c4();
  ppuVar6 = &PTR_DAT_110ae9b38;
  ___cxa_throw();
  iVar8 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x19 + 8))();
  }
  __ZdlPv(param_4);
  iVar8 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x19 + 8))();
  }
  __Unwind_Resume();
  if ((*(byte *)(lVar5 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar5);
  }
  if ((-1 < (int)ppuVar6) && ((int)ppuVar6 < *(int *)(lVar5 + 0x50))) {
    return (long *)(ulong)*(uint *)(*(long *)(lVar5 + 0x10) + ((ulong)ppuVar6 & 0xffffffff) * 4);
  }
  lVar5 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092cf4c4();
  ppuVar6 = &PTR_DAT_110ae9b38;
  ___cxa_throw();
  if ((*(byte *)(lVar5 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar5);
  }
  iVar8 = (int)ppuVar6;
  if (iVar8 == 0) {
    lVar5 = 0x10;
    ___cxa_allocate_exception();
  }
  else {
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar5 + 0x50))) {
      return (long *)(ulong)*(uint *)(*(long *)(lVar5 + 0x28) + ((ulong)ppuVar6 & 0xffffffff) * 4);
    }
    lVar5 = 0x10;
    ___cxa_allocate_exception();
  }
  FUN_1092cf4c4();
  ppuVar6 = &PTR_DAT_110ae9b38;
  ___cxa_throw();
  if ((*(byte *)(lVar5 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar5);
  }
  iVar8 = (int)ppuVar6;
  if (iVar8 == 0) {
    lVar5 = 0x10;
    ___cxa_allocate_exception();
  }
  else {
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar5 + 0x50))) {
      return (long *)(ulong)*(uint *)(*(long *)(lVar5 + 0x10) +
                                     (long)(int)(*(int *)(lVar5 + 0x50) +
                                                ~*(uint *)(*(long *)(lVar5 + 0x28) +
                                                          ((ulong)ppuVar6 & 0xffffffff) * 4)) * 4);
    }
    lVar5 = 0x10;
    ___cxa_allocate_exception();
  }
  FUN_1092cf4c4();
  ppuVar6 = &PTR_DAT_110ae9b38;
  pcVar7 = FUN_1092cf500;
  ___cxa_throw();
  if ((*(byte *)(lVar5 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar5);
  }
  plVar4 = (long *)0x0;
  iVar8 = (int)ppuVar6;
  if ((iVar8 != 0) && (iVar9 = (int)pcVar7, iVar9 != 0)) {
    if ((iVar8 < 0) ||
       (((iVar1 = *(int *)(lVar5 + 0x50), iVar1 <= iVar9 || (iVar9 < 0)) || (iVar1 <= iVar8)))) {
      plVar4 = (long *)0x10;
      ___cxa_allocate_exception();
      FUN_1092cf4c4();
      ___cxa_throw();
      *plVar4 = (long)&PTR_FUN_110ae99a8;
      plVar3 = (long *)plVar4[9];
      if ((plVar3 != (long *)0x0) &&
         (iVar8 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar8, iVar8 == 0)) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = (long *)plVar4[8];
      if ((plVar3 != (long *)0x0) &&
         (iVar8 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar8, iVar8 == 0)) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4[5] != 0) {
        plVar4[6] = plVar4[5];
        __ZdlPv();
      }
      if (plVar4[2] != 0) {
        plVar4[3] = plVar4[2];
        __ZdlPv();
      }
      return plVar4;
    }
    iVar8 = *(int *)(*(long *)(lVar5 + 0x28) + ((ulong)pcVar7 & 0xffffffff) * 4) +
            *(int *)(*(long *)(lVar5 + 0x28) + ((ulong)ppuVar6 & 0xffffffff) * 4);
    iVar1 = iVar1 + -1;
    iVar9 = 0;
    if (iVar1 != 0) {
      iVar9 = iVar8 / iVar1;
    }
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(lVar5 + 0x10) + (long)(iVar8 - iVar9 * iVar1) * 4);
  }
  return plVar4;
}



/* Entry: 1092ccc44; end: 1092ccdd3;  */

undefined8 * FUN_1092ccc44(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined **ppuVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(param_1);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x50))) {
    return (undefined8 *)(ulong)*(uint *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4);
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092cf4c4();
  ppuVar5 = &PTR_DAT_110ae9b38;
  ___cxa_throw();
  if ((*(byte *)(lVar2 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar2);
  }
  iVar7 = (int)ppuVar5;
  if (iVar7 == 0) {
    lVar2 = 0x10;
    ___cxa_allocate_exception();
  }
  else {
    if ((-1 < iVar7) && (iVar7 < *(int *)(lVar2 + 0x50))) {
      return (undefined8 *)
             (ulong)*(uint *)(*(long *)(lVar2 + 0x28) + ((ulong)ppuVar5 & 0xffffffff) * 4);
    }
    lVar2 = 0x10;
    ___cxa_allocate_exception();
  }
  FUN_1092cf4c4();
  ppuVar5 = &PTR_DAT_110ae9b38;
  ___cxa_throw();
  if ((*(byte *)(lVar2 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar2);
  }
  iVar7 = (int)ppuVar5;
  if (iVar7 == 0) {
    lVar2 = 0x10;
    ___cxa_allocate_exception();
  }
  else {
    if ((-1 < iVar7) && (iVar7 < *(int *)(lVar2 + 0x50))) {
      return (undefined8 *)
             (ulong)*(uint *)(*(long *)(lVar2 + 0x10) +
                             (long)(int)(*(int *)(lVar2 + 0x50) +
                                        ~*(uint *)(*(long *)(lVar2 + 0x28) +
                                                  ((ulong)ppuVar5 & 0xffffffff) * 4)) * 4);
    }
    lVar2 = 0x10;
    ___cxa_allocate_exception();
  }
  FUN_1092cf4c4();
  ppuVar5 = &PTR_DAT_110ae9b38;
  pcVar6 = FUN_1092cf500;
  ___cxa_throw();
  if ((*(byte *)(lVar2 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar2);
  }
  puVar3 = (undefined8 *)0x0;
  iVar7 = (int)ppuVar5;
  if ((iVar7 != 0) && (iVar8 = (int)pcVar6, iVar8 != 0)) {
    if ((iVar7 < 0) ||
       (((iVar1 = *(int *)(lVar2 + 0x50), iVar1 <= iVar8 || (iVar8 < 0)) || (iVar1 <= iVar7)))) {
      puVar3 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      FUN_1092cf4c4();
      ___cxa_throw();
      *puVar3 = &PTR_FUN_110ae99a8;
      plVar4 = (long *)puVar3[9];
      if ((plVar4 != (long *)0x0) &&
         (iVar7 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar7, iVar7 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = (long *)puVar3[8];
      if ((plVar4 != (long *)0x0) &&
         (iVar7 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar7, iVar7 == 0)) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      if (puVar3[5] != 0) {
        puVar3[6] = puVar3[5];
        __ZdlPv();
      }
      if (puVar3[2] != 0) {
        puVar3[3] = puVar3[2];
        __ZdlPv();
      }
      return puVar3;
    }
    iVar7 = *(int *)(*(long *)(lVar2 + 0x28) + ((ulong)pcVar6 & 0xffffffff) * 4) +
            *(int *)(*(long *)(lVar2 + 0x28) + ((ulong)ppuVar5 & 0xffffffff) * 4);
    iVar1 = iVar1 + -1;
    iVar8 = 0;
    if (iVar1 != 0) {
      iVar8 = iVar7 / iVar1;
    }
    puVar3 = (undefined8 *)
             (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + (long)(iVar7 - iVar8 * iVar1) * 4);
  }
  return puVar3;
}



/* Entry: 1092ccdd4; end: 1092cce83;  */

undefined8 * FUN_1092ccdd4(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(param_1);
  }
  puVar4 = (undefined8 *)0x0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (((int)param_2 < 0) ||
       (((iVar2 = *(int *)(param_1 + 0x50), iVar2 <= (int)param_3 || ((int)param_3 < 0)) ||
        (iVar2 <= (int)param_2)))) {
      puVar4 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      FUN_1092cf4c4();
      ___cxa_throw();
      *puVar4 = &PTR_FUN_110ae99a8;
      plVar5 = (long *)puVar4[9];
      if ((plVar5 != (long *)0x0) &&
         (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
        *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
        (**(code **)(*plVar5 + 8))();
      }
      plVar5 = (long *)puVar4[8];
      if ((plVar5 != (long *)0x0) &&
         (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
        *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
        (**(code **)(*plVar5 + 8))();
      }
      if (puVar4[5] != 0) {
        puVar4[6] = puVar4[5];
        __ZdlPv();
      }
      if (puVar4[2] != 0) {
        puVar4[3] = puVar4[2];
        __ZdlPv();
      }
      return puVar4;
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x28) + (ulong)param_3 * 4) +
            *(int *)(*(long *)(param_1 + 0x28) + (ulong)param_2 * 4);
    iVar2 = iVar2 + -1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    puVar4 = (undefined8 *)
             (ulong)*(uint *)(*(long *)(param_1 + 0x10) + (long)(iVar1 - iVar3 * iVar2) * 4);
  }
  return puVar4;
}



/* Entry: 1092cce84; end: 1092cd11b;  */

undefined8 * FUN_1092cce84(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae99a8;
  plVar2 = (long *)param_1[9];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092cd11c; end: 1092cd19b;  */

undefined8 * FUN_1092cd11c(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10925b938(param_1);
    puVar2 = (undefined4 *)param_1[1];
    lVar4 = param_2 << 2;
    uVar1 = *param_3;
    puVar3 = puVar2;
    do {
      *puVar3 = uVar1;
      lVar4 = lVar4 + -4;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    param_1[1] = puVar2 + param_2;
  }
  return param_1;
}



/* Entry: 1092cd19c; end: 1092cd1f7;  */

void FUN_1092cd19c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae99f0;
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1092cd1f8; end: 1092cd527;  */

undefined8 * FUN_1092cd1f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plStack_50;
  undefined4 uStack_44;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ae9a60;
  param_1[2] = param_2;
  param_1[3] = &PTR_FUN_110ae99f0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  lVar5 = *(long *)(param_3 + 0x10);
  piVar1 = *(int **)(lVar5 + 0x10);
  uVar9 = *(long *)(lVar5 + 0x18) - (long)piVar1;
  uVar7 = uVar9 >> 2;
  iVar6 = (int)uVar7;
  if (iVar6 == 0) {
    ___cxa_allocate_exception(0x10);
    FUN_1092cf480();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1092cd460);
    (*pcVar2)();
  }
  if ((iVar6 < 2) || (*piVar1 != 0)) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    param_1[5] = lVar5;
  }
  else {
    lVar5 = uVar7 << 0x20;
    uVar7 = 4;
    do {
      iVar6 = iVar6 + -1;
      lVar5 = lVar5 + -0x100000000;
      if (*(int *)((long)piVar1 + uVar7) != 0) {
        if (iVar6 != 0) {
          plVar10 = (long *)0x28;
          __Znwm();
          *(undefined4 *)(plVar10 + 1) = 0;
          *plVar10 = (long)&PTR_DAT_110ae9a28;
          uStack_44 = 0;
          FUN_1092cd11c(plVar10 + 2,lVar5 >> 0x20,&uStack_44);
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 2;
          plVar3 = (long *)param_1[5];
          if ((plVar3 != (long *)0x0) &&
             (iVar6 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar6, iVar6 == 0)) {
            *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
            (**(code **)(*plVar3 + 8))();
          }
          param_1[5] = plVar10;
          iVar6 = (int)plVar10[1] + -1;
          *(int *)(plVar10 + 1) = iVar6;
          if (iVar6 == 0) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
            (**(code **)(*plVar10 + 8))(plVar10);
            plVar10 = (long *)param_1[5];
          }
          uVar9 = plVar10[3] - plVar10[2];
          if ((int)(uVar9 >> 2) < 1) {
            return param_1;
          }
          uVar9 = uVar9 >> 2 & 0x7fffffff;
          puVar4 = (undefined4 *)plVar10[2];
          puVar8 = (undefined4 *)(*(long *)(*(long *)(param_3 + 0x10) + 0x10) + uVar7);
          do {
            *puVar4 = *puVar8;
            uVar9 = uVar9 - 1;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar9 != 0);
          return param_1;
        }
        break;
      }
      uVar7 = uVar7 + 4;
    } while ((uVar9 & 0x1fffffffc) != uVar7);
    func_0x0001092cc9c4(&plStack_50,param_2);
    plVar10 = (long *)plStack_50[5];
    if (plVar10 != (long *)0x0) {
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    }
    func_0x0001092cea00(param_1 + 3,plVar10);
    if ((plVar10 != (long *)0x0) &&
       (iVar6 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar6, iVar6 == 0)) {
      *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    if ((plStack_50 != (long *)0x0) &&
       (iVar6 = (int)plStack_50[1] + -1, *(int *)(plStack_50 + 1) = iVar6, iVar6 == 0)) {
      *(undefined4 *)(plStack_50 + 1) = 0xdeadf001;
      (**(code **)(*plStack_50 + 8))();
    }
  }
  return param_1;
}



/* Entry: 1092cd528; end: 1092cd5eb;  */

uint FUN_1092cd528(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  puVar3 = *(uint **)(*(long *)(param_1 + 0x28) + 0x10);
  uVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18) - (long)puVar3;
  if ((int)param_2 == 0) {
    uVar2 = puVar3[(long)(uVar4 * 0x40000000 + -0x100000000) >> 0x20];
  }
  else {
    iVar5 = (int)(uVar4 >> 2);
    if ((int)param_2 == 1) {
      if (iVar5 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        uVar4 = uVar4 >> 2 & 0x7fffffff;
        do {
          uVar2 = *puVar3 ^ uVar2;
          uVar4 = uVar4 - 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
      }
    }
    else {
      uVar2 = *puVar3;
      if (1 < iVar5) {
        uVar6 = 1;
        do {
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          FUN_1092ccdd4(uVar1,param_2);
          uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + uVar6 * 4) ^ (uint)uVar1;
          uVar6 = uVar6 + 1;
        } while ((uVar4 >> 2 & 0x7fffffff) != uVar6);
      }
    }
  }
  return uVar2;
}



/* Entry: 1092cd5ec; end: 1092cd9db;  */

void FUN_1092cd5ec(long *param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  int *piVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long *unaff_x19;
  long *plVar17;
  ulong uVar18;
  long *unaff_x20;
  long *plVar19;
  ulong uVar20;
  long *unaff_x23;
  long *plVar21;
  undefined4 unaff_w25;
  long *plVar22;
  ulong uVar23;
  undefined8 ****ppppuVar24;
  code *pcVar25;
  undefined4 uStack_154;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  long *plStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  long *plStack_e0;
  undefined4 uStack_d4;
  undefined8 ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  long *plStack_60;
  undefined4 uStack_54;
  
  lVar8 = *param_3;
  if (*(long *)(param_2 + 0x10) == *(long *)(lVar8 + 0x10)) {
    plVar21 = *(long **)(param_2 + 0x28);
    piVar7 = (int *)plVar21[2];
    if (*piVar7 == 0) {
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      *param_1 = lVar8;
    }
    else {
      plVar17 = *(long **)(lVar8 + 0x28);
      piVar9 = (int *)plVar17[2];
      if (*piVar9 == 0) {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        *param_1 = param_2;
      }
      else {
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        plVar22 = plVar21;
        if ((int)((ulong)(plVar17[3] - (long)piVar9) >> 2) <
            (int)((ulong)(plVar21[3] - (long)piVar7) >> 2)) {
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          iVar13 = (int)plVar21[1];
          *(int *)(plVar21 + 1) = iVar13 + -1;
          if (iVar13 + -1 == 0) {
            *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
            (**(code **)(*plVar21 + 8))(plVar21);
            iVar13 = (int)plVar21[1] + 1;
          }
          *(int *)(plVar21 + 1) = iVar13;
          iVar13 = (int)plVar17[1] + -1;
          *(int *)(plVar17 + 1) = iVar13;
          if (iVar13 == 0) {
            *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
            (**(code **)(*plVar17 + 8))(plVar17);
          }
          iVar13 = (int)plVar21[1] + -1;
          *(int *)(plVar21 + 1) = iVar13;
          plVar22 = plVar17;
          plVar17 = plVar21;
          if (iVar13 == 0) {
            *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
            (**(code **)(*plVar21 + 8))(plVar21);
          }
        }
        plVar21 = (long *)0x28;
        __Znwm();
        lVar8 = plVar17[2];
        lVar12 = plVar17[3];
        *(undefined4 *)(plVar21 + 1) = 0;
        *plVar21 = (long)&PTR_DAT_110ae9a28;
        uStack_54 = 0;
        FUN_1092cd11c(plVar21 + 2,(lVar12 - lVar8) * 0x40000000 >> 0x20,&uStack_54);
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        puVar1 = (undefined4 *)plVar17[2];
        lVar8 = plVar17[3];
        puVar10 = (uint *)plVar22[2];
        iVar13 = (int)((ulong)(plVar22[3] - (long)puVar10) >> 2);
        uVar3 = (int)((ulong)(lVar8 - (long)puVar1) >> 2) - iVar13;
        uVar11 = (ulong)uVar3;
        if (0 < (int)uVar3) {
          puVar15 = (undefined4 *)plVar21[2];
          puVar16 = puVar1;
          do {
            *puVar15 = *puVar16;
            uVar11 = uVar11 - 1;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar11 != 0);
        }
        if (0 < iVar13) {
          lVar12 = (long)(int)uVar3;
          lVar14 = plVar21[2];
          do {
            *(uint *)(lVar14 + lVar12 * 4) = puVar1[lVar12] ^ *puVar10;
            lVar12 = lVar12 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar12 < (lVar8 - (long)puVar1) * 0x40000000 >> 0x20);
        }
        lVar8 = 0x30;
        __Znwm();
        uStack_68 = 0;
        ppuStack_70 = &PTR_FUN_110ae99f0;
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        plStack_60 = plVar21;
        FUN_1092cd1f8();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        *param_1 = lVar8;
        iVar13 = (int)plVar21[1] + -1;
        *(int *)(plVar21 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
          iVar13 = (int)plVar21[1];
        }
        *(int *)(plVar21 + 1) = iVar13 + -1;
        if (iVar13 + -1 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
        }
        iVar13 = (int)plVar17[1] + -1;
        *(int *)(plVar17 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
          (**(code **)(*plVar17 + 8))(plVar17);
        }
        iVar13 = (int)plVar22[1] + -1;
        *(int *)(plVar22 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar22 + 1) = 0xdeadf001;
          (**(code **)(*plVar22 + 8))(plVar22);
        }
      }
    }
    return;
  }
  plVar21 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_1092cf4c4();
  ppuVar6 = &PTR_DAT_110ae9b38;
  ___cxa_throw();
  iVar13 = (int)unaff_x23[1] + -1;
  *(int *)(unaff_x23 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x23 + 1) = unaff_w25;
    (**(code **)(*unaff_x23 + 8))();
  }
  __ZdlPv();
  iVar13 = (int)unaff_x23[1] + -1;
  *(int *)(unaff_x23 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x23 + 1) = unaff_w25;
    (**(code **)(*unaff_x23 + 8))();
  }
  iVar13 = (int)unaff_x20[1] + -1;
  *(int *)(unaff_x20 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x20 + 1) = unaff_w25;
    (**(code **)(*unaff_x20 + 8))();
  }
  iVar13 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar13;
  if (iVar13 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = unaff_w25;
    (**(code **)(*unaff_x19 + 8))();
  }
  plVar17 = plVar21;
  __Unwind_Resume();
  pppuVar4 = (undefined ***)auStack_110;
  pppuStack_80 = (undefined8 ***)&stack0xfffffffffffffff0;
  pcStack_78 = FUN_1092cd9dc;
  ppppuVar24 = &pppuStack_80;
  lVar8 = plVar17[2];
  if (lVar8 == *(long *)(*ppuVar6 + 0x10)) {
    plVar22 = (long *)plVar17[5];
    piVar7 = (int *)plVar22[2];
    plVar21 = extraout_x8;
    ppppuVar24 = (undefined8 ****)pppuStack_80;
    pcVar25 = pcStack_78;
    pppuVar4 = &ppuStack_70;
    if (*piVar7 != 0) {
      plVar19 = *(long **)(*ppuVar6 + 0x28);
      piVar9 = (int *)plVar19[2];
      pppuVar4 = &ppuStack_70;
      if (*piVar9 != 0) {
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        lVar8 = plVar22[3];
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        lVar12 = plVar19[3];
        plVar21 = (long *)0x28;
        __Znwm();
        uVar11 = lVar8 - (long)piVar7;
        uVar20 = lVar12 - (long)piVar9;
        uStack_f8 = uVar20 >> 2;
        iVar13 = (int)(uVar11 >> 2);
        *(undefined4 *)(plVar21 + 1) = 0;
        *plVar21 = (long)&PTR_DAT_110ae9a28;
        uStack_d4 = 0;
        plStack_108 = extraout_x8;
        plStack_100 = plVar22;
        FUN_1092cd11c(plVar21 + 2,(long)((int)uStack_f8 + iVar13 + -1),&uStack_d4);
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        if (0 < iVar13) {
          lVar8 = 0;
          uVar23 = 0;
          do {
            if (0 < (int)uStack_f8) {
              uVar18 = 0;
              uVar2 = *(undefined4 *)(plStack_100[2] + uVar23 * 4);
              lVar12 = plVar21[2];
              do {
                uVar3 = *(uint *)(lVar12 + lVar8 + uVar18 * 4);
                lVar14 = plVar17[2];
                FUN_1092ccdd4(lVar14,uVar2,*(undefined4 *)(plVar19[2] + uVar18 * 4));
                lVar12 = plVar21[2];
                *(uint *)(lVar12 + lVar8 + uVar18 * 4) = (uint)lVar14 ^ uVar3;
                uVar18 = uVar18 + 1;
              } while ((uVar20 >> 2 & 0x7fffffff) != uVar18);
            }
            uVar23 = uVar23 + 1;
            lVar8 = lVar8 + 4;
          } while (uVar23 != (uVar11 >> 2 & 0x7fffffff));
        }
        lVar8 = 0x30;
        __Znwm();
        uStack_e8 = 0;
        ppuStack_f0 = &PTR_FUN_110ae99f0;
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        plStack_e0 = plVar21;
        FUN_1092cd1f8();
        plVar17 = plStack_100;
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        *plStack_108 = lVar8;
        iVar13 = (int)plVar21[1] + -1;
        *(int *)(plVar21 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
          iVar13 = (int)plVar21[1];
        }
        *(int *)(plVar21 + 1) = iVar13 + -1;
        if (iVar13 + -1 == 0) {
          *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
          (**(code **)(*plVar21 + 8))(plVar21);
        }
        iVar13 = (int)plVar19[1] + -1;
        *(int *)(plVar19 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar19 + 1) = 0xdeadf001;
          (**(code **)(*plVar19 + 8))(plVar19);
        }
        iVar13 = (int)plVar17[1] + -1;
        *(int *)(plVar17 + 1) = iVar13;
        if (iVar13 == 0) {
          *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
          (**(code **)(*plVar17 + 8))(plVar17);
        }
        return;
      }
    }
  }
  else {
    lVar8 = 0x10;
    ___cxa_allocate_exception();
    FUN_1092cf4c4();
    ppuVar6 = &PTR_DAT_110ae9b38;
    ___cxa_throw();
    iVar13 = (int)plVar21[1] + -1;
    *(int *)(plVar21 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
      (**(code **)(*plVar21 + 8))(plVar21);
    }
    __ZdlPv();
    iVar13 = (int)plVar21[1] + -1;
    *(int *)(plVar21 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
      (**(code **)(*plVar21 + 8))(plVar21);
    }
    iVar13 = (int)unaff_x20[1] + -1;
    *(int *)(unaff_x20 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(unaff_x20 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x20 + 8))();
    }
    iVar13 = (int)plStack_100[1] + -1;
    *(int *)(plStack_100 + 1) = iVar13;
    if (iVar13 == 0) {
      *(undefined4 *)(plStack_100 + 1) = 0xdeadf001;
      (**(code **)(*plStack_100 + 8))(plStack_100);
    }
    __Unwind_Resume();
    pcStack_118 = FUN_1092cdd74;
    plVar21 = extraout_x8_00;
    if ((int)ppuVar6 == 1) {
      *extraout_x8_00 = 0;
      goto SUB_1092cd040;
    }
    if ((int)ppuVar6 != 0) {
      uVar11 = *(long *)(*(long *)(lVar8 + 0x28) + 0x18) - *(long *)(*(long *)(lVar8 + 0x28) + 0x10)
      ;
      plVar21 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar21 + 1) = 0;
      *plVar21 = (long)&PTR_DAT_110ae9a28;
      uStack_154 = 0;
      FUN_1092cd11c(plVar21 + 2,(long)(uVar11 * 0x40000000) >> 0x20,&uStack_154);
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      if (0 < (int)(uVar11 >> 2)) {
        uVar20 = 0;
        do {
          uVar5 = *(undefined8 *)(lVar8 + 0x10);
          FUN_1092ccdd4(uVar5,*(undefined4 *)
                               (*(long *)(*(long *)(lVar8 + 0x28) + 0x10) + uVar20 * 4),ppuVar6);
          *(int *)(plVar21[2] + uVar20 * 4) = (int)uVar5;
          uVar20 = uVar20 + 1;
        } while ((uVar11 >> 2 & 0x7fffffff) != uVar20);
      }
      lVar8 = 0x30;
      __Znwm();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      FUN_1092cd1f8();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      *extraout_x8_00 = lVar8;
      iVar13 = (int)plVar21[1] + -1;
      *(int *)(plVar21 + 1) = iVar13;
      if (iVar13 == 0) {
        *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
        (**(code **)(*plVar21 + 8))(plVar21);
        iVar13 = (int)plVar21[1];
      }
      *(int *)(plVar21 + 1) = iVar13 + -1;
      if (iVar13 + -1 == 0) {
        *(undefined4 *)(plVar21 + 1) = 0xdeadf001;
        (**(code **)(*plVar21 + 8))(plVar21);
      }
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    pcVar25 = FUN_1092cdd74;
    pppuVar4 = (undefined ***)auStack_110;
  }
  *(long **)((long)pppuVar4 + -0x20) = unaff_x20;
  *(long **)((long)pppuVar4 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)pppuVar4 + -0x10) = ppppuVar24;
  *(code **)((long)pppuVar4 + -8) = pcVar25;
  if ((*(byte *)(lVar8 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar8);
  }
  *plVar21 = 0;
  lVar8 = *(long *)(lVar8 + 0x40);
  ppppuVar24 = *(undefined8 *****)((long)pppuVar4 + -0x10);
  pcStack_118 = *(code **)((long)pppuVar4 + -8);
  unaff_x20 = *(long **)((long)pppuVar4 + -0x20);
  unaff_x19 = *(long **)((long)pppuVar4 + -0x18);
SUB_1092cd040:
  *(long **)((long)pppuVar4 + -0x20) = unaff_x20;
  *(long **)((long)pppuVar4 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)pppuVar4 + -0x10) = ppppuVar24;
  *(code **)((long)pppuVar4 + -8) = pcStack_118;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  plVar17 = (long *)*plVar21;
  if ((plVar17 != (long *)0x0) &&
     (iVar13 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar13, iVar13 == 0)) {
    *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
    (**(code **)(*plVar17 + 8))();
  }
  *plVar21 = lVar8;
  return;
}



/* Entry: 1092cd9dc; end: 1092cdd73;  */

void FUN_1092cd9dc(long *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long *extraout_x8;
  undefined8 unaff_x19;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long *plVar11;
  long *unaff_x21;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uStack_e4;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long *plStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  long *plStack_70;
  undefined4 uStack_64;
  
  puVar3 = auStack_a0;
  puVar18 = &stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == *(long *)(*param_3 + 0x10)) {
    plVar16 = *(long **)(param_2 + 0x28);
    piVar8 = (int *)plVar16[2];
    puVar3 = (undefined1 *)register0x00000008;
    if (*piVar8 != 0) {
      plVar11 = *(long **)(*param_3 + 0x28);
      piVar12 = (int *)plVar11[2];
      if (*piVar12 != 0) {
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        lVar4 = plVar16[3];
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        lVar15 = plVar11[3];
        plVar5 = (long *)0x28;
        __Znwm();
        uVar9 = lVar4 - (long)piVar8;
        uVar13 = lVar15 - (long)piVar12;
        uStack_88 = uVar13 >> 2;
        iVar14 = (int)(uVar9 >> 2);
        *(undefined4 *)(plVar5 + 1) = 0;
        *plVar5 = (long)&PTR_DAT_110ae9a28;
        uStack_64 = 0;
        plStack_98 = param_1;
        plStack_90 = plVar16;
        FUN_1092cd11c(plVar5 + 2,(long)((int)uStack_88 + iVar14 + -1),&uStack_64);
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        if (0 < iVar14) {
          lVar4 = 0;
          uVar17 = 0;
          do {
            if (0 < (int)uStack_88) {
              uVar10 = 0;
              uVar1 = *(undefined4 *)(plStack_90[2] + uVar17 * 4);
              lVar15 = plVar5[2];
              do {
                uVar2 = *(uint *)(lVar15 + lVar4 + uVar10 * 4);
                uVar6 = *(undefined8 *)(param_2 + 0x10);
                FUN_1092ccdd4(uVar6,uVar1,*(undefined4 *)(plVar11[2] + uVar10 * 4));
                lVar15 = plVar5[2];
                *(uint *)(lVar15 + lVar4 + uVar10 * 4) = (uint)uVar6 ^ uVar2;
                uVar10 = uVar10 + 1;
              } while ((uVar13 >> 2 & 0x7fffffff) != uVar10);
            }
            uVar17 = uVar17 + 1;
            lVar4 = lVar4 + 4;
          } while (uVar17 != (uVar9 >> 2 & 0x7fffffff));
        }
        lVar4 = 0x30;
        __Znwm();
        uStack_78 = 0;
        ppuStack_80 = &PTR_FUN_110ae99f0;
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        plStack_70 = plVar5;
        FUN_1092cd1f8();
        plVar16 = plStack_90;
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        *plStack_98 = lVar4;
        iVar14 = (int)plVar5[1] + -1;
        *(int *)(plVar5 + 1) = iVar14;
        if (iVar14 == 0) {
          *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
          (**(code **)(*plVar5 + 8))(plVar5);
          iVar14 = (int)plVar5[1];
        }
        *(int *)(plVar5 + 1) = iVar14 + -1;
        if (iVar14 + -1 == 0) {
          *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        iVar14 = (int)plVar11[1] + -1;
        *(int *)(plVar11 + 1) = iVar14;
        if (iVar14 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        iVar14 = (int)plVar16[1] + -1;
        *(int *)(plVar16 + 1) = iVar14;
        if (iVar14 == 0) {
          *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
          (**(code **)(*plVar16 + 8))(plVar16);
        }
        return;
      }
    }
  }
  else {
    lVar4 = 0x10;
    ___cxa_allocate_exception();
    FUN_1092cf4c4();
    ppuVar7 = &PTR_DAT_110ae9b38;
    ___cxa_throw();
    iVar14 = (int)unaff_x21[1] + -1;
    *(int *)(unaff_x21 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(unaff_x21 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x21 + 8))();
    }
    __ZdlPv();
    iVar14 = (int)unaff_x21[1] + -1;
    *(int *)(unaff_x21 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(unaff_x21 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x21 + 8))();
    }
    iVar14 = (int)unaff_x20[1] + -1;
    *(int *)(unaff_x20 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(unaff_x20 + 1) = 0xdeadf001;
      (**(code **)(*unaff_x20 + 8))();
    }
    iVar14 = (int)plStack_90[1] + -1;
    *(int *)(plStack_90 + 1) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(plStack_90 + 1) = 0xdeadf001;
      (**(code **)(*plStack_90 + 8))(plStack_90);
    }
    __Unwind_Resume();
    pcStack_a8 = FUN_1092cdd74;
    param_1 = extraout_x8;
    if ((int)ppuVar7 == 1) {
      *extraout_x8 = 0;
      goto SUB_1092cd040;
    }
    if ((int)ppuVar7 != 0) {
      uVar9 = *(long *)(*(long *)(lVar4 + 0x28) + 0x18) - *(long *)(*(long *)(lVar4 + 0x28) + 0x10);
      plVar16 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar16 + 1) = 0;
      *plVar16 = (long)&PTR_DAT_110ae9a28;
      uStack_e4 = 0;
      FUN_1092cd11c(plVar16 + 2,(long)(uVar9 * 0x40000000) >> 0x20,&uStack_e4);
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      if (0 < (int)(uVar9 >> 2)) {
        uVar13 = 0;
        do {
          uVar6 = *(undefined8 *)(lVar4 + 0x10);
          FUN_1092ccdd4(uVar6,*(undefined4 *)
                               (*(long *)(*(long *)(lVar4 + 0x28) + 0x10) + uVar13 * 4),ppuVar7);
          *(int *)(plVar16[2] + uVar13 * 4) = (int)uVar6;
          uVar13 = uVar13 + 1;
        } while ((uVar9 >> 2 & 0x7fffffff) != uVar13);
      }
      lVar4 = 0x30;
      __Znwm();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      FUN_1092cd1f8();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      *extraout_x8 = lVar4;
      iVar14 = (int)plVar16[1] + -1;
      *(int *)(plVar16 + 1) = iVar14;
      if (iVar14 == 0) {
        *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
        (**(code **)(*plVar16 + 8))(plVar16);
        iVar14 = (int)plVar16[1];
      }
      *(int *)(plVar16 + 1) = iVar14 + -1;
      if (iVar14 + -1 == 0) {
        *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      return;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    unaff_x30 = FUN_1092cdd74;
    unaff_x29 = puVar18;
    puVar3 = auStack_a0;
  }
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(code **)(puVar3 + -8) = unaff_x30;
  if ((*(byte *)(lVar4 + 0x5c) & 1) == 0) {
    FUN_1092cc5d8(lVar4);
  }
  *param_1 = 0;
  lVar4 = *(long *)(lVar4 + 0x40);
  puVar18 = *(undefined1 **)(puVar3 + -0x10);
  pcStack_a8 = *(code **)(puVar3 + -8);
  unaff_x20 = *(long **)(puVar3 + -0x20);
  unaff_x19 = *(undefined8 *)(puVar3 + -0x18);
SUB_1092cd040:
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(code **)(puVar3 + -8) = pcStack_a8;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar16 = (long *)*param_1;
  if ((plVar16 != (long *)0x0) &&
     (iVar14 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar14, iVar14 == 0)) {
    *(undefined4 *)(plVar16 + 1) = 0xdeadf001;
    (**(code **)(*plVar16 + 8))();
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1092cdd74; end: 1092cdfab;  */

void FUN_1092cdd74(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uStack_44;
  
  if ((int)param_3 == 1) {
    *param_1 = 0;
  }
  else {
    if ((int)param_3 != 0) {
      uVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x18) -
              *(long *)(*(long *)(param_2 + 0x28) + 0x10);
      plVar1 = (long *)0x28;
      __Znwm();
      *(undefined4 *)(plVar1 + 1) = 0;
      *plVar1 = (long)&PTR_DAT_110ae9a28;
      uStack_44 = 0;
      FUN_1092cd11c(plVar1 + 2,(long)(uVar5 * 0x40000000) >> 0x20,&uStack_44);
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      if (0 < (int)(uVar5 >> 2)) {
        uVar6 = 0;
        do {
          uVar3 = *(undefined8 *)(param_2 + 0x10);
          FUN_1092ccdd4(uVar3,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0x28) + 0x10) + uVar6 * 4),param_3);
          *(int *)(plVar1[2] + uVar6 * 4) = (int)uVar3;
          uVar6 = uVar6 + 1;
        } while ((uVar5 >> 2 & 0x7fffffff) != uVar6);
      }
      lVar2 = 0x30;
      __Znwm();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      FUN_1092cd1f8();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      *param_1 = lVar2;
      iVar4 = (int)plVar1[1] + -1;
      *(int *)(plVar1 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
        (**(code **)(*plVar1 + 8))(plVar1);
        iVar4 = (int)plVar1[1];
      }
      *(int *)(plVar1 + 1) = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if ((*(byte *)(lVar2 + 0x5c) & 1) == 0) {
      FUN_1092cc5d8(lVar2);
    }
    *param_1 = 0;
    param_2 = *(long *)(lVar2 + 0x40);
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) &&
     (iVar4 = (int)plVar1[1] + -1, *(int *)(plVar1 + 1) = iVar4, iVar4 == 0)) {
    *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1092cdfac; end: 1092ce1f7;  */

/* WARNING: Possible PIC construction at 0x0001092ce25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092ce8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092ce260) */
/* WARNING: Removing unreachable block (ram,0x0001092ce2c0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce2c8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce510) */
/* WARNING: Removing unreachable block (ram,0x0001092ce2d4) */
/* WARNING: Removing unreachable block (ram,0x0001092ce318) */
/* WARNING: Removing unreachable block (ram,0x0001092ce324) */
/* WARNING: Removing unreachable block (ram,0x0001092ce340) */
/* WARNING: Removing unreachable block (ram,0x0001092ce34c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce354) */
/* WARNING: Removing unreachable block (ram,0x0001092ce364) */
/* WARNING: Removing unreachable block (ram,0x0001092ce374) */
/* WARNING: Removing unreachable block (ram,0x0001092ce37c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce3b8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce38c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce390) */
/* WARNING: Removing unreachable block (ram,0x0001092ce3a0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce3d0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce3d8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce3e4) */
/* WARNING: Removing unreachable block (ram,0x0001092ce400) */
/* WARNING: Removing unreachable block (ram,0x0001092ce40c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce424) */
/* WARNING: Removing unreachable block (ram,0x0001092ce41c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce43c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce478) */
/* WARNING: Removing unreachable block (ram,0x0001092ce420) */
/* WARNING: Removing unreachable block (ram,0x0001092ce44c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce450) */
/* WARNING: Removing unreachable block (ram,0x0001092ce460) */
/* WARNING: Removing unreachable block (ram,0x0001092ce490) */
/* WARNING: Removing unreachable block (ram,0x0001092ce498) */
/* WARNING: Removing unreachable block (ram,0x0001092ce4a8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce4b8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce4c0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce4d0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce4e0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce50c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce2b8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce514) */
/* WARNING: Removing unreachable block (ram,0x0001092ce548) */
/* WARNING: Removing unreachable block (ram,0x0001092ce554) */
/* WARNING: Removing unreachable block (ram,0x0001092ce57c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce588) */
/* WARNING: Removing unreachable block (ram,0x0001092ce5ec) */
/* WARNING: Removing unreachable block (ram,0x0001092ce62c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce654) */
/* WARNING: Removing unreachable block (ram,0x0001092ce668) */
/* WARNING: Removing unreachable block (ram,0x0001092ce678) */
/* WARNING: Removing unreachable block (ram,0x0001092ce688) */
/* WARNING: Removing unreachable block (ram,0x0001092ce698) */
/* WARNING: Removing unreachable block (ram,0x0001092ce69c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce6ac) */
/* WARNING: Removing unreachable block (ram,0x0001092ce6c0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce6c8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce6d8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce6e8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce700) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8b4) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8c0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8c8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8d8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8f4) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8fc) */
/* WARNING: Removing unreachable block (ram,0x0001092ce90c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce924) */

undefined *** FUN_1092cdfac(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long *extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_160 [32];
  long alStack_140 [7];
  undefined **appuStack_108 [3];
  undefined **ppuStack_f0;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  undefined ***pppuStack_60;
  undefined4 uStack_54;
  
  if (-1 < param_3) {
    if ((int)param_4 != 0) {
      uVar10 = *(long *)(*(long *)(param_2 + 0x28) + 0x18) -
               *(long *)(*(long *)(param_2 + 0x28) + 0x10);
      pppuVar2 = (undefined ***)0x28;
      __Znwm();
      iVar11 = (int)(uVar10 >> 2);
      *(undefined4 *)(pppuVar2 + 1) = 0;
      *pppuVar2 = &PTR_DAT_110ae9a28;
      uStack_54 = 0;
      FUN_1092cd11c(pppuVar2 + 2,(long)(param_3 + iVar11),&uStack_54);
      *(int *)(pppuVar2 + 1) = *(int *)(pppuVar2 + 1) + 1;
      if (0 < iVar11) {
        uVar9 = 0;
        do {
          uVar3 = *(undefined8 *)(param_2 + 0x10);
          FUN_1092ccdd4(uVar3,*(undefined4 *)
                               (*(long *)(*(long *)(param_2 + 0x28) + 0x10) + uVar9 * 4),param_4);
          *(int *)((long)pppuVar2[2] + uVar9 * 4) = (int)uVar3;
          uVar9 = uVar9 + 1;
        } while ((uVar10 >> 2 & 0x7fffffff) != uVar9);
      }
      pppuVar4 = (undefined ***)0x30;
      __Znwm();
      uStack_68 = 0;
      ppuStack_70 = &PTR_FUN_110ae99f0;
      *(int *)(pppuVar2 + 1) = *(int *)(pppuVar2 + 1) + 1;
      pppuVar5 = pppuVar4;
      pppuStack_60 = pppuVar2;
      FUN_1092cd1f8();
      *(int *)(pppuVar4 + 1) = *(int *)(pppuVar4 + 1) + 1;
      *param_1 = (long)pppuVar4;
      iVar11 = *(int *)(pppuVar2 + 1) + -1;
      *(int *)(pppuVar2 + 1) = iVar11;
      if (iVar11 == 0) {
        *(undefined4 *)(pppuVar2 + 1) = 0xdeadf001;
        pppuVar5 = pppuVar2;
        (*(code *)(*pppuVar2)[1])(pppuVar2);
        iVar11 = *(int *)(pppuVar2 + 1);
      }
      *(int *)(pppuVar2 + 1) = iVar11 + -1;
      if (iVar11 + -1 == 0) {
        *(undefined4 *)(pppuVar2 + 1) = 0xdeadf001;
        (*(code *)(*pppuVar2)[1])(pppuVar2);
        pppuVar5 = pppuVar2;
      }
      return pppuVar5;
    }
    lVar6 = *(long *)(param_2 + 0x10);
    puVar1 = (undefined1 *)register0x00000008;
SUB_1092cc9c4:
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    if ((*(byte *)(lVar6 + 0x5c) & 1) == 0) {
      FUN_1092cc5d8(lVar6);
    }
    *param_1 = 0;
    lVar7 = *(long *)(lVar6 + 0x40);
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    pppuVar2 = (undefined ***)*param_1;
    if ((pppuVar2 != (undefined ***)0x0) &&
       (iVar11 = *(int *)(pppuVar2 + 1), *(int *)(pppuVar2 + 1) = iVar11 + -1, iVar11 + -1 == 0)) {
      *(undefined4 *)(pppuVar2 + 1) = 0xdeadf001;
      (*(code *)(*pppuVar2)[1])();
    }
    *param_1 = lVar7;
    return pppuVar2;
  }
  unaff_x20 = 0x10;
  ___cxa_allocate_exception();
  FUN_1092cf4c4();
  ppuVar8 = &PTR_DAT_110ae9b38;
  ___cxa_throw();
  iVar11 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar11;
  if (iVar11 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x19 + 8))();
  }
  __ZdlPv();
  iVar11 = (int)unaff_x19[1] + -1;
  *(int *)(unaff_x19 + 1) = iVar11;
  if (iVar11 == 0) {
    *(undefined4 *)(unaff_x19 + 1) = 0xdeadf001;
    (**(code **)(*unaff_x19 + 8))();
  }
  lVar7 = unaff_x20;
  __Unwind_Resume();
  puVar1 = auStack_160;
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_1092ce1f8;
  unaff_x29 = &puStack_80;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == *(long *)(*ppuVar8 + 0x10)) {
    if (**(int **)(*(long *)(*ppuVar8 + 0x28) + 0x10) != 0) {
      param_1 = alStack_140;
      unaff_x30 = 0x1092ce260;
      unaff_x19 = extraout_x8;
      goto SUB_1092cc9c4;
    }
    ___cxa_allocate_exception(0x10);
  }
  else {
    ___cxa_allocate_exception(0x10);
  }
  FUN_1092cf4c4();
  ___cxa_throw();
  ___stack_chk_fail();
  FUN_1092ceb80();
  __ZdlPv(lVar7);
  appuStack_108[0] = &PTR_FUN_110ae9a60;
  ppuStack_f0 = &PTR_FUN_110ae99f0;
  if ((plStack_e0 != (long *)0x0) &&
     (iVar11 = (int)plStack_e0[1] + -1, *(int *)(plStack_e0 + 1) = iVar11, iVar11 == 0)) {
    *(undefined4 *)(plStack_e0 + 1) = 0xdeadf001;
    (**(code **)(*plStack_e0 + 8))();
  }
  return appuStack_108;
}



/* Entry: 1092ce1f8; end: 1092ce92b;  */

/* WARNING: Possible PIC construction at 0x0001092ce8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092ce8b4) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8c0) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8c8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8d8) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8f4) */
/* WARNING: Removing unreachable block (ram,0x0001092ce8fc) */
/* WARNING: Removing unreachable block (ram,0x0001092ce90c) */
/* WARNING: Removing unreachable block (ram,0x0001092ce924) */

undefined *** FUN_1092ce1f8(undefined8 *param_1,undefined ***param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined ***pppuVar9;
  int *piVar10;
  undefined8 unaff_x22;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined **ppuStack_f0;
  long *plStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  undefined ***pppuStack_d0;
  undefined **ppuStack_c8;
  undefined4 auStack_c0 [2];
  undefined **appuStack_b8 [2];
  undefined4 uStack_a8;
  undefined **appuStack_a0 [2];
  undefined4 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2[2] == *(undefined ***)(*param_3 + 0x10)) {
    if (**(int **)(*(long *)(*param_3 + 0x28) + 0x10) != 0) {
      func_0x0001092cc9c4(&pppuStack_d0);
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
      ppuVar4 = param_2[2];
      func_0x0001092ccd3c(ppuVar4,**(undefined4 **)(*(long *)(*param_3 + 0x28) + 0x10));
      piVar10 = (int *)param_2[5][2];
      uVar11 = (ulong)((long)param_2[5][3] - (long)piVar10) >> 2;
      uVar12 = (ulong)(*(long *)(*(long *)(*param_3 + 0x28) + 0x18) -
                      *(long *)(*(long *)(*param_3 + 0x28) + 0x10)) >> 2;
      pppuVar9 = param_2;
      if ((int)uVar12 <= (int)uVar11) {
        do {
          if (*piVar10 == 0) break;
          ppuVar5 = param_2[2];
          FUN_1092ccdd4(ppuVar5,*piVar10,ppuVar4);
          iVar2 = (int)uVar11 - (int)uVar12;
          FUN_1092cdfac(&ppuStack_c8,*param_3,iVar2,ppuVar5);
          FUN_1092cca3c(&plStack_d8,param_2[2],iVar2,ppuVar5);
          plVar8 = plStack_d8;
          if (plStack_d8 != (long *)0x0) {
            *(int *)(plStack_d8 + 1) = (int)plStack_d8[1] + 1;
          }
          plStack_e8 = plStack_d8;
          FUN_1092cd5ec(&pppuStack_e0,pppuStack_d0,&plStack_e8);
          pppuVar3 = pppuStack_e0;
          if (pppuStack_e0 != (undefined ***)0x0) {
            *(int *)(pppuStack_e0 + 1) = *(int *)(pppuStack_e0 + 1) + 1;
          }
          if ((pppuStack_d0 != (undefined ***)0x0) &&
             (iVar2 = *(int *)(pppuStack_d0 + 1), *(int *)(pppuStack_d0 + 1) = iVar2 + -1,
             iVar2 + -1 == 0)) {
            *(undefined4 *)(pppuStack_d0 + 1) = 0xdeadf001;
            (*(code *)(*pppuStack_d0)[1])();
          }
          pppuStack_d0 = pppuVar3;
          if ((pppuVar3 != (undefined ***)0x0) &&
             (iVar2 = *(int *)(pppuVar3 + 1), *(int *)(pppuVar3 + 1) = iVar2 + -1, iVar2 + -1 == 0))
          {
            *(undefined4 *)(pppuVar3 + 1) = 0xdeadf001;
            (*(code *)(*pppuVar3)[1])(pppuVar3);
          }
          if ((plVar8 != (long *)0x0) &&
             (iVar2 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar2, iVar2 == 0)) {
            *(undefined4 *)(plVar8 + 1) = 0xdeadf001;
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          ppuVar5 = ppuStack_c8;
          if (ppuStack_c8 != (undefined **)0x0) {
            *(int *)(ppuStack_c8 + 1) = *(int *)(ppuStack_c8 + 1) + 1;
          }
          ppuStack_f0 = ppuStack_c8;
          FUN_1092cd5ec(&pppuStack_e0,pppuVar9,&ppuStack_f0);
          pppuVar3 = pppuStack_e0;
          if (pppuStack_e0 != (undefined ***)0x0) {
            *(int *)(pppuStack_e0 + 1) = *(int *)(pppuStack_e0 + 1) + 1;
          }
          iVar2 = *(int *)(pppuVar9 + 1);
          *(int *)(pppuVar9 + 1) = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            *(undefined4 *)(pppuVar9 + 1) = 0xdeadf001;
            (*(code *)(*pppuVar9)[1])(pppuVar9);
          }
          if ((pppuVar3 != (undefined ***)0x0) &&
             (iVar2 = *(int *)(pppuVar3 + 1), *(int *)(pppuVar3 + 1) = iVar2 + -1, iVar2 + -1 == 0))
          {
            *(undefined4 *)(pppuVar3 + 1) = 0xdeadf001;
            (*(code *)(*pppuVar3)[1])(pppuVar3);
          }
          if ((ppuVar5 != (undefined **)0x0) &&
             (iVar2 = *(int *)(ppuVar5 + 1), *(int *)(ppuVar5 + 1) = iVar2 + -1, iVar2 + -1 == 0)) {
            *(undefined4 *)(ppuVar5 + 1) = 0xdeadf001;
            (**(code **)(*ppuVar5 + 8))(ppuVar5);
          }
          if ((plStack_d8 != (long *)0x0) &&
             (iVar2 = (int)plStack_d8[1] + -1, *(int *)(plStack_d8 + 1) = iVar2, iVar2 == 0)) {
            *(undefined4 *)(plStack_d8 + 1) = 0xdeadf001;
            (**(code **)(*plStack_d8 + 8))();
          }
          if ((ppuStack_c8 != (undefined **)0x0) &&
             (iVar2 = *(int *)(ppuStack_c8 + 1), *(int *)(ppuStack_c8 + 1) = iVar2 + -1,
             iVar2 + -1 == 0)) {
            *(undefined4 *)(ppuStack_c8 + 1) = 0xdeadf001;
            (**(code **)(*ppuStack_c8 + 8))();
          }
          piVar10 = (int *)pppuVar3[5][2];
          uVar11 = (ulong)((long)pppuVar3[5][3] - (long)piVar10) >> 2;
          uVar12 = (ulong)(*(long *)(*(long *)(*param_3 + 0x28) + 0x18) -
                          *(long *)(*(long *)(*param_3 + 0x28) + 0x10)) >> 2;
          pppuVar9 = pppuVar3;
        } while ((int)uVar12 <= (int)uVar11);
      }
      auStack_c0[0] = *(undefined4 *)(pppuStack_d0 + 1);
      ppuStack_c8 = &PTR_FUN_110ae9a60;
      appuStack_b8[0] = pppuStack_d0[2];
      uStack_a8 = 0;
      appuStack_b8[1] = &PTR_FUN_110ae99f0;
      appuStack_a0[0] = pppuStack_d0[5];
      if (appuStack_a0[0] != (undefined **)0x0) {
        *(int *)(appuStack_a0[0] + 1) = *(int *)(appuStack_a0[0] + 1) + 1;
      }
      uStack_90 = *(undefined4 *)(pppuVar9 + 1);
      appuStack_a0[1] = &PTR_FUN_110ae9a60;
      ppuStack_88 = pppuVar9[2];
      uStack_78 = 0;
      ppuStack_80 = &PTR_FUN_110ae99f0;
      ppuStack_70 = pppuVar9[5];
      if (ppuStack_70 != (undefined **)0x0) {
        *(int *)(ppuStack_70 + 1) = *(int *)(ppuStack_70 + 1) + 1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = &PTR_DAT_110ae9a98;
      param_1[2] = 0;
      puVar6 = (undefined8 *)0x28;
      __Znwm();
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR_DAT_110ae9ad0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      lVar7 = 0x60;
      __Znwm();
      lVar13 = 0;
      puVar6[2] = lVar7;
      puVar6[3] = lVar7;
      puVar6[4] = lVar7 + 0x60;
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar13);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((long)auStack_c0 + lVar13);
        *puVar1 = &PTR_FUN_110ae9a60;
        puVar1[2] = *(undefined8 *)((long)appuStack_b8 + lVar13);
        *(undefined4 *)(puVar1 + 4) = 0;
        puVar1[3] = &PTR_FUN_110ae99f0;
        puVar1[5] = 0;
        func_0x0001092cea00(puVar1 + 3,*(undefined8 *)((long)appuStack_a0 + lVar13));
        lVar13 = lVar13 + 0x30;
      } while (lVar13 != 0x60);
      lVar13 = 0;
      puVar6[3] = lVar7 + 0x60;
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      param_1[2] = puVar6;
      do {
        param_2 = (undefined ***)((long)auStack_c0 + lVar13 + -8);
        *(undefined ***)((long)appuStack_a0 + lVar13 + 8) = &PTR_FUN_110ae9a60;
        *(undefined ***)((long)&ppuStack_80 + lVar13) = &PTR_FUN_110ae99f0;
        plVar8 = *(long **)((long)&ppuStack_70 + lVar13);
        if ((plVar8 != (long *)0x0) &&
           (iVar2 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar2, iVar2 == 0)) {
          *(undefined4 *)(plVar8 + 1) = 0xdeadf001;
          (**(code **)(*plVar8 + 8))();
        }
        *(undefined8 *)((long)&ppuStack_70 + lVar13) = 0;
        lVar13 = lVar13 + -0x30;
      } while (lVar13 != -0x60);
      if ((pppuVar9 != (undefined ***)0x0) &&
         (iVar2 = *(int *)(pppuVar9 + 1), *(int *)(pppuVar9 + 1) = iVar2 + -1, iVar2 + -1 == 0)) {
        *(undefined4 *)(pppuVar9 + 1) = 0xdeadf001;
        (*(code *)(*pppuVar9)[1])(pppuVar9);
      }
      pppuVar9 = pppuStack_d0;
      if ((pppuStack_d0 != (undefined ***)0x0) &&
         (iVar2 = *(int *)(pppuStack_d0 + 1), *(int *)(pppuStack_d0 + 1) = iVar2 + -1,
         iVar2 + -1 == 0)) {
        *(undefined4 *)(pppuStack_d0 + 1) = 0xdeadf001;
        (*(code *)(*pppuStack_d0)[1])();
      }
      unaff_x22 = 0xffffffffffffffa0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return pppuVar9;
      }
      goto LAB_1092ce75c;
    }
    ___cxa_allocate_exception(0x10);
  }
  else {
    ___cxa_allocate_exception(0x10);
  }
  FUN_1092cf4c4();
  ___cxa_throw();
LAB_1092ce75c:
  ___stack_chk_fail();
  FUN_1092ceb80(unaff_x22);
  __ZdlPv(param_2);
  appuStack_a0[1] = &PTR_FUN_110ae9a60;
  ppuStack_80 = &PTR_FUN_110ae99f0;
  if ((ppuStack_70 != (undefined **)0x0) &&
     (iVar2 = *(int *)(ppuStack_70 + 1), *(int *)(ppuStack_70 + 1) = iVar2 + -1, iVar2 + -1 == 0)) {
    *(undefined4 *)(ppuStack_70 + 1) = 0xdeadf001;
    (**(code **)(*ppuStack_70 + 8))();
  }
  return appuStack_a0 + 1;
}


