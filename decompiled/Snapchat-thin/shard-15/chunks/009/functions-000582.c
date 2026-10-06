/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd21cac; end: 10bd21d33;  */

void FUN_10bd21cac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  lVar1 = param_1;
  FUN_10bd21c78();
  func_0x000107c31578();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = lVar3;
  _strlen(lVar3);
  FUN_10bcedcb0(lVar1,lVar3,lVar2);
  func_0x00010bd25764();
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  puStack_38 = (undefined1 *)&uStack_40;
  while (unaff_x22 < *(int *)(lVar1 + 0x3c)) {
    FUN_10bd24a90(*(long *)(lVar1 + 0x60) + lVar3,&puStack_38);
    func_0x00010bd25758();
  }
  return;
}



/* Entry: 10bd21d34; end: 10bd21e17;  */

undefined1 * FUN_10bd21d34(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  FUN_10bd238ec();
  if ((int)puVar1 == 10) {
    return (undefined1 *)*param_1;
  }
  FUN_10bdb2a00(auStack_30,&UNK_10f835988,0x37b);
  puVar2 = auStack_30;
  func_0x00010bd16744(puVar2,&UNK_10f835a24);
  func_0x00010bcfd128();
  func_0x00010b4c9df4();
  func_0x00010b4cd4a4();
  puStack_38 = &DAT_10f831a72;
  func_0x00010b4d8320();
  func_0x00010b4c3214();
  func_0x00010b4cd4a4();
  FUN_10bd238ec();
  puStack_40 = (&PTR_DAT_110d9bd68)[(ulong)param_1 & 0xffffffff];
  func_0x00010b4d8320(puVar2,&puStack_40);
  puVar2 = auStack_30;
  func_0x00010ae6c700();
  func_0x00010bd289d8(*(undefined8 *)(puVar2 + 0x18),puVar2);
  return puVar2;
}



/* Entry: 10bd21e18; end: 10bd21ebf;  */

long FUN_10bd21e18(long param_1)

{
  func_0x00010bd289d8(*(undefined8 *)(param_1 + 0x18),param_1);
  return param_1;
}



/* Entry: 10bd21ec0; end: 10bd224c3;  */

void FUN_10bd21ec0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  int iVar12;
  long extraout_x9;
  ulong uVar13;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  undefined8 extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar21;
  undefined8 unaff_x30;
  
  func_0x00010bd24f94();
  do {
    plVar9 = unaff_x19 + -1;
LAB_10bd21ef8:
    uVar10 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    cVar5 = SBORROW8(uVar10,5);
    cVar6 = (long)(uVar10 - 5) < 0;
    switch(uVar10) {
    case 0:
    case 1:
      goto LAB_10bd224b0;
    case 2:
      func_0x00010bd24e94(unaff_x19[-1]);
      if (cVar6 != cVar5) {
        *unaff_x20 = extraout_x8_04;
        unaff_x19[-1] = extraout_x9;
      }
      goto LAB_10bd224b0;
    case 3:
      plVar7 = unaff_x20 + 1;
      func_0x00010bd25770();
      lVar17 = *plVar7;
      lVar11 = *unaff_x20;
      iVar12 = *(int *)(lVar17 + 4);
      iVar2 = *(int *)(lVar11 + 4);
      lVar16 = *plVar9;
      iVar3 = *(int *)(lVar16 + 4);
      if (iVar12 < iVar2) {
        if (iVar3 < iVar12) {
          *unaff_x20 = lVar16;
        }
        else {
          *unaff_x20 = lVar17;
          *plVar7 = lVar11;
          if (iVar2 <= *(int *)(*plVar9 + 4)) {
            return;
          }
          *plVar7 = *plVar9;
        }
        *plVar9 = lVar11;
      }
      else {
        cVar5 = SBORROW4(iVar3,iVar12);
        cVar6 = iVar3 - iVar12 < 0;
        if (iVar3 < iVar12) {
          *plVar7 = lVar16;
          *plVar9 = lVar17;
          func_0x00010bd24e94(*plVar7);
          if (cVar6 != cVar5) {
            *unaff_x20 = extraout_x8_05;
            *plVar7 = extraout_x9_00;
            return;
          }
        }
      }
      return;
    case 4:
      func_0x00010bd25770(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,plVar9);
      func_0x00010bd24f54();
      FUN_10bd224c4();
      func_0x00010bd24e94(*param_3);
      if (cVar6 != cVar5) {
        *plVar9 = extraout_x8_06;
        *param_3 = extraout_x9_01;
        func_0x00010bd24e94(*plVar9);
        if (cVar6 != cVar5) {
          *unaff_x19 = extraout_x8_07;
          *plVar9 = extraout_x9_02;
          func_0x00010bd24e94(*unaff_x19);
          if (cVar6 != cVar5) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_03;
          }
        }
      }
      return;
    case 5:
      plVar7 = plVar9;
      func_0x00010bd25770(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,unaff_x20 + 3);
      func_0x00010bd24f54();
      FUN_10bd2254c();
      func_0x00010bd24e94(*plVar7);
      if (cVar6 != cVar5) {
        *param_3 = extraout_x8_09;
        *plVar7 = extraout_x9_04;
        func_0x00010bd24e94(*param_3);
        if (cVar6 != cVar5) {
          *plVar9 = extraout_x8_10;
          *param_3 = extraout_x9_05;
          func_0x00010bd24e94(*plVar9);
          if (cVar6 != cVar5) {
            *unaff_x19 = extraout_x8_11;
            *plVar9 = extraout_x9_06;
            func_0x00010bd24e94(*unaff_x19);
            if (cVar6 != cVar5) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_07;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar10 < 0x18) {
      if ((param_4 & 1) == 0) {
        plVar9 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            unaff_x20 = unaff_x20 + 1;
            plVar7 = plVar9 + 1;
            if (plVar7 == unaff_x19) break;
            lVar11 = *plVar9;
            lVar17 = plVar9[1];
            iVar12 = *(int *)(lVar17 + 4);
            plVar14 = unaff_x20;
            plVar9 = plVar7;
            if (iVar12 < *(int *)(lVar11 + 4)) {
              do {
                *plVar14 = lVar11;
                lVar11 = plVar14[-2];
                plVar14 = plVar14 + -1;
              } while (iVar12 < *(int *)(lVar11 + 4));
              *plVar14 = lVar17;
            }
          }
        }
        break;
      }
      if (unaff_x20 == unaff_x19) break;
      lVar11 = 8;
      plVar9 = unaff_x20;
      goto LAB_10bd22210;
    }
    if (param_3 == (undefined8 *)0x0) {
      if (unaff_x20 == unaff_x19) break;
      uVar13 = uVar10 - 2 >> 1;
      uVar15 = uVar13;
      goto LAB_10bd2228c;
    }
    plVar7 = unaff_x20 + (uVar10 >> 1);
    if (uVar10 < 0x81) {
      func_0x00010bd25588(plVar7,unaff_x20);
    }
    else {
      func_0x00010bd25588(unaff_x20,plVar7);
      FUN_10bd224c4(unaff_x20 + 1,plVar7 + -1,unaff_x19 + -2);
      FUN_10bd224c4(unaff_x20 + 2,plVar7 + 1,unaff_x19 + -3);
      FUN_10bd224c4(plVar7 + -1,plVar7,plVar7 + 1);
      lVar11 = *unaff_x20;
      *unaff_x20 = *plVar7;
      *plVar7 = lVar11;
    }
    param_3 = (undefined8 *)((long)param_3 + -1);
    lVar11 = *unaff_x20;
    if ((param_4 & 1) == 0) {
      iVar2 = *(int *)(unaff_x20[-1] + 4);
      iVar12 = *(int *)(lVar11 + 4);
      cVar5 = SBORROW4(iVar2,iVar12);
      cVar6 = iVar2 - iVar12 < 0;
      if (iVar12 <= iVar2) {
        func_0x00010bd256d0();
        plVar7 = unaff_x20;
        if (cVar6 == cVar5) {
          lVar11 = extraout_x8;
          plVar14 = unaff_x20 + 1;
          do {
            plVar7 = plVar14;
            cVar5 = SBORROW8((long)plVar7,(long)unaff_x19);
            cVar6 = (long)plVar7 - (long)unaff_x19 < 0;
            if (unaff_x19 <= plVar7) break;
            func_0x00010bd2524c();
            lVar11 = extraout_x8_01;
            plVar14 = extraout_x10;
          } while (cVar6 == cVar5);
        }
        else {
          do {
            plVar7 = plVar7 + 1;
            func_0x00010bd256d0();
            lVar11 = extraout_x8_00;
          } while (cVar6 == cVar5);
        }
        cVar5 = SBORROW8((long)plVar7,(long)unaff_x19);
        cVar6 = (long)plVar7 - (long)unaff_x19 < 0;
        plVar14 = unaff_x19;
        if (plVar7 < unaff_x19) {
          do {
            func_0x00010bd2524c();
            lVar11 = extraout_x8_02;
            plVar14 = extraout_x10_00;
          } while (cVar6 != cVar5);
        }
        while( true ) {
          cVar5 = SBORROW8((long)plVar7,(long)plVar14);
          cVar6 = (long)plVar7 - (long)plVar14 < 0;
          if (plVar14 <= plVar7) break;
          lVar11 = *plVar7;
          *plVar7 = *plVar14;
          *plVar14 = lVar11;
          do {
            plVar7 = plVar7 + 1;
            func_0x00010bd2524c();
          } while (cVar6 == cVar5);
          do {
            func_0x00010bd2524c();
            lVar11 = extraout_x8_03;
            plVar14 = extraout_x10_01;
          } while (cVar6 != cVar5);
        }
        plVar14 = plVar7 + -1;
        if (unaff_x20 != plVar14) {
          *unaff_x20 = *plVar14;
        }
        param_4 = 0;
        *plVar14 = lVar11;
        unaff_x20 = plVar7;
        goto LAB_10bd21ef8;
      }
    }
    else {
      iVar12 = *(int *)(lVar11 + 4);
    }
    lVar17 = 0;
    do {
      lVar16 = *(long *)((long)unaff_x20 + lVar17 + 8);
      lVar17 = lVar17 + 8;
    } while (*(int *)(lVar16 + 4) < iVar12);
    plVar7 = (long *)((long)unaff_x20 + lVar17);
    plVar14 = unaff_x19;
    plVar21 = plVar7;
    if (lVar17 == 8) {
      do {
        plVar8 = plVar14;
        if (plVar14 <= plVar7) break;
        plVar14 = plVar14 + -1;
        plVar8 = plVar14;
      } while (iVar12 <= *(int *)(*plVar14 + 4));
    }
    else {
      do {
        plVar14 = plVar14 + -1;
        plVar8 = plVar14;
      } while (iVar12 <= *(int *)(*plVar14 + 4));
    }
    while (plVar21 < plVar14) {
      *plVar21 = *plVar14;
      *plVar14 = lVar16;
      do {
        plVar21 = plVar21 + 1;
        lVar16 = *plVar21;
      } while (*(int *)(lVar16 + 4) < iVar12);
      do {
        plVar14 = plVar14 + -1;
      } while (iVar12 <= *(int *)(*plVar14 + 4));
    }
    plVar14 = plVar21 + -1;
    if (unaff_x20 != plVar14) {
      *unaff_x20 = *plVar14;
    }
    *plVar14 = lVar11;
    if (plVar7 < plVar8) goto LAB_10bd22090;
    plVar7 = unaff_x20;
    FUN_10bd2263c(unaff_x20,plVar14);
    plVar8 = plVar21;
    FUN_10bd2263c(plVar21,unaff_x19);
    if ((int)plVar8 == 0) goto code_r0x00010bd2208c;
    unaff_x19 = plVar14;
  } while (((ulong)plVar7 & 1) == 0);
  goto LAB_10bd224b0;
LAB_10bd22210:
  if (plVar9 + 1 == unaff_x19) goto LAB_10bd224b0;
  lVar17 = *plVar9;
  lVar16 = plVar9[1];
  iVar12 = *(int *)(lVar16 + 4);
  lVar18 = lVar11;
  if (iVar12 < *(int *)(lVar17 + 4)) {
    do {
      *(long *)((long)unaff_x20 + lVar18) = lVar17;
      lVar4 = lVar18 + -8;
      plVar7 = unaff_x20;
      if (lVar4 == 0) goto LAB_10bd22264;
      lVar17 = *(long *)((long)unaff_x20 + lVar18 + -0x10);
      lVar18 = lVar4;
    } while (iVar12 < *(int *)(lVar17 + 4));
    plVar7 = (long *)((long)unaff_x20 + lVar4);
LAB_10bd22264:
    *plVar7 = lVar16;
  }
  lVar11 = lVar11 + 8;
  plVar9 = plVar9 + 1;
  goto LAB_10bd22210;
code_r0x00010bd2208c:
  unaff_x20 = plVar21;
  if (((ulong)plVar7 & 1) == 0) {
LAB_10bd22090:
    func_0x00010bd256dc();
    FUN_10bd21ec0();
    param_4 = 0;
    unaff_x20 = plVar21;
  }
  goto LAB_10bd21ef8;
LAB_10bd2228c:
  do {
    if ((long)uVar15 <= (long)uVar13) {
      uVar19 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      plVar9 = unaff_x20 + uVar19;
      uVar1 = uVar15 * 2 + 2;
      lVar17 = *plVar9;
      plVar7 = plVar9;
      lVar11 = lVar17;
      uVar20 = uVar19;
      if ((long)uVar1 < (long)uVar10) {
        lVar11 = plVar9[1];
        plVar7 = plVar9 + 1;
        uVar20 = uVar1;
        if (*(int *)(lVar11 + 4) <= *(int *)(lVar17 + 4)) {
          plVar7 = plVar9;
          lVar11 = lVar17;
          uVar20 = uVar19;
        }
      }
      lVar17 = unaff_x20[uVar15];
      iVar12 = *(int *)(lVar17 + 4);
      plVar9 = unaff_x20 + uVar15;
      if (iVar12 <= *(int *)(lVar11 + 4)) {
        do {
          plVar14 = plVar7;
          *plVar9 = lVar11;
          if ((long)uVar13 < (long)uVar20) break;
          uVar19 = uVar20 << 1 | 1;
          plVar9 = unaff_x20 + uVar19;
          uVar1 = uVar20 * 2 + 2;
          lVar16 = *plVar9;
          plVar7 = plVar9;
          lVar11 = lVar16;
          uVar20 = uVar19;
          if ((long)uVar1 < (long)uVar10) {
            lVar11 = plVar9[1];
            plVar7 = plVar9 + 1;
            uVar20 = uVar1;
            if (*(int *)(lVar11 + 4) <= *(int *)(lVar16 + 4)) {
              plVar7 = plVar9;
              lVar11 = lVar16;
              uVar20 = uVar19;
            }
          }
          plVar9 = plVar14;
        } while (iVar12 <= *(int *)(lVar11 + 4));
        *plVar14 = lVar17;
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  for (; 1 < (long)uVar10; uVar10 = uVar10 - 1) {
    lVar11 = *unaff_x20;
    plVar9 = unaff_x20;
    uVar15 = 0;
    do {
      plVar14 = plVar9 + uVar15 + 1;
      lVar16 = *plVar14;
      uVar1 = uVar15 << 1 | 1;
      uVar13 = uVar15 * 2 + 2;
      plVar7 = plVar14;
      lVar17 = lVar16;
      uVar19 = uVar1;
      if ((long)uVar13 < (long)uVar10) {
        lVar17 = plVar9[uVar15 + 2];
        plVar7 = plVar9 + uVar15 + 2;
        uVar19 = uVar13;
        if (*(int *)(lVar17 + 4) <= *(int *)(lVar16 + 4)) {
          plVar7 = plVar14;
          lVar17 = lVar16;
          uVar19 = uVar1;
        }
      }
      *plVar9 = lVar17;
      plVar9 = plVar7;
      uVar15 = uVar19;
    } while ((long)uVar19 <= (long)(uVar10 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (plVar7 == unaff_x19) {
      *plVar7 = lVar11;
    }
    else {
      *plVar7 = *unaff_x19;
      *unaff_x19 = lVar11;
      lVar11 = (long)plVar7 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar11) {
        uVar15 = lVar11 - 2U >> 1;
        lVar17 = unaff_x20[uVar15];
        lVar11 = *plVar7;
        iVar12 = *(int *)(lVar11 + 4);
        plVar9 = unaff_x20 + uVar15;
        if (*(int *)(lVar17 + 4) < iVar12) {
          do {
            plVar14 = plVar9;
            *plVar7 = lVar17;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            lVar17 = unaff_x20[uVar15];
            plVar7 = plVar14;
            plVar9 = unaff_x20 + uVar15;
          } while (*(int *)(lVar17 + 4) < iVar12);
          *plVar14 = lVar11;
        }
      }
    }
  }
LAB_10bd224b0:
  func_0x00010bd25770(unaff_x30);
  return;
}



/* Entry: 10bd224c4; end: 10bd2254b;  */

void FUN_10bd224c4(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x9;
  long lVar8;
  
  lVar7 = *param_2;
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar7 + 4);
  iVar2 = *(int *)(lVar6 + 4);
  lVar8 = *param_3;
  iVar3 = *(int *)(lVar8 + 4);
  if (iVar1 < iVar2) {
    if (iVar3 < iVar1) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar7;
      *param_2 = lVar6;
      if (iVar2 <= *(int *)(*param_3 + 4)) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar6;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    if (iVar3 < iVar1) {
      *param_2 = lVar8;
      *param_3 = lVar7;
      func_0x00010bd24e94(*param_2);
      if (cVar5 != cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd2254c; end: 10bd225b3;  */

void FUN_10bd2254c(void)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010bd24f54();
  FUN_10bd224c4();
  func_0x00010bd24e94(*unaff_x22);
  if (in_NG != in_OV) {
    *unaff_x21 = extraout_x8;
    *unaff_x22 = extraout_x9;
    func_0x00010bd24e94(*unaff_x21);
    if (in_NG != in_OV) {
      *unaff_x19 = extraout_x8_00;
      *unaff_x21 = extraout_x9_00;
      func_0x00010bd24e94(*unaff_x19);
      if (in_NG != in_OV) {
        *unaff_x20 = extraout_x8_01;
        *unaff_x19 = extraout_x9_01;
      }
    }
  }
  return;
}



/* Entry: 10bd225b4; end: 10bd2263b;  */

void FUN_10bd225b4(void)

{
  char in_NG;
  char in_OV;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010bd24f54();
  FUN_10bd2254c();
  func_0x00010bd24e94(*in_x4);
  if (in_NG != in_OV) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    func_0x00010bd24e94(*unaff_x22);
    if (in_NG != in_OV) {
      *unaff_x21 = extraout_x8_00;
      *unaff_x22 = extraout_x9_00;
      func_0x00010bd24e94(*unaff_x21);
      if (in_NG != in_OV) {
        *unaff_x19 = extraout_x8_01;
        *unaff_x21 = extraout_x9_01;
        func_0x00010bd24e94(*unaff_x19);
        if (in_NG != in_OV) {
          *unaff_x20 = extraout_x8_02;
          *unaff_x19 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 10bd2263c; end: 10bd2278b;  */

void FUN_10bd2263c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x9;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar12;
  
  func_0x00010bd2540c();
  lVar6 = param_2 - param_1 >> 3;
  cVar3 = SBORROW8(lVar6,5);
  cVar4 = lVar6 + -5 < 0;
  switch(lVar6) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010bd24e94(unaff_x20[-1],1);
    if (cVar4 != cVar3) {
      *unaff_x19 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
    break;
  case 3:
    FUN_10bd224c4();
    break;
  case 4:
    FUN_10bd2254c();
    break;
  case 5:
    FUN_10bd225b4();
    break;
  default:
    func_0x00010bd25588();
    iVar5 = 0;
    lVar6 = 0x18;
    plVar9 = unaff_x19 + 3;
    plVar12 = unaff_x19 + 2;
    while (plVar7 = plVar9, plVar7 != unaff_x20) {
      lVar8 = *plVar7;
      lVar10 = *plVar12;
      iVar1 = *(int *)(lVar8 + 4);
      lVar11 = lVar6;
      if (iVar1 < *(int *)(lVar10 + 4)) {
        do {
          *(long *)((long)unaff_x19 + lVar11) = lVar10;
          lVar2 = lVar11 + -8;
          plVar9 = unaff_x19;
          if (lVar2 == 0) goto LAB_10bd2273c;
          lVar10 = *(long *)((long)unaff_x19 + lVar11 + -0x10);
          lVar11 = lVar2;
        } while (iVar1 < *(int *)(lVar10 + 4));
        plVar9 = (long *)((long)unaff_x19 + lVar2);
LAB_10bd2273c:
        *plVar9 = lVar8;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return;
        }
      }
      lVar6 = lVar6 + 8;
      plVar12 = plVar7;
      plVar9 = plVar7 + 1;
    }
  }
  return;
}



/* Entry: 10bd2278c; end: 10bd2285f;  */

ulong * FUN_10bd2278c(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((*param_2 & 1) == 0) || (uVar4 = param_2[1], uVar4 == 0)) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
  }
  else {
    piVar1 = (int *)(uVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = 1;
    param_1[1] = uVar4;
    if (1 < *param_2) {
      func_0x00010ae6ff78(param_1,param_2,8);
    }
  }
  return param_1;
}



/* Entry: 10bd22860; end: 10bd2290b;  */

undefined8 * FUN_10bd22860(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  lVar2 = param_2;
  FUN_10bd2b4f4(param_2);
  FUN_10bd2123c(lVar2,param_2,param_3);
  param_1[3] = lVar2;
  func_0x00010bd253a8();
  func_0x00010bd25490();
  if ((bool)in_ZR) {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
  }
  else {
    uVar3 = 0;
  }
  func_0x00010b91adc8(uVar3);
  puVar4 = param_1 + 4;
  FUN_10bd2290c(puVar4,uVar3);
  func_0x00010bd253a8();
  func_0x00010bd25490();
  if ((bool)in_ZR) {
    iVar1 = (int)puVar4[7] + 0x58;
  }
  else {
    iVar1 = 0;
  }
  func_0x00010b91adc8();
  *(int *)(param_1 + 9) = iVar1;
  return param_1;
}



/* Entry: 10bd2290c; end: 10bd22953;  */

void FUN_10bd2290c(undefined8 *param_1,int param_2)

{
  if (*(int *)(param_1 + 3) != param_2) {
    if (*(int *)(param_1 + 3) == 9) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    *(int *)(param_1 + 3) = param_2;
    if (param_2 == 9) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return;
}



/* Entry: 10bd22954; end: 10bd22987;  */

void FUN_10bd22954(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 9) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10bd22988; end: 10bd229df;  */

long * FUN_10bd22988(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010bd2540c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x20;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return unaff_x19;
}



/* Entry: 10bd229e0; end: 10bd22a1f;  */

long * FUN_10bd229e0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bd22a20; end: 10bd23153;  */

void FUN_10bd22a20(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w9;
  long *plVar14;
  long *extraout_x9;
  ulong uVar15;
  long *extraout_x9_00;
  ulong extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  ulong uVar16;
  long lVar17;
  ulong extraout_x11;
  ulong *puVar18;
  ulong *puVar19;
  long extraout_x12;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x30;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  
  plVar11 = param_3;
  func_0x00010bd24f94();
  uVar12 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  do {
    plVar10 = unaff_x19 + -4;
LAB_10bd22a6c:
    uVar13 = (long)unaff_x19 - (long)unaff_x20 >> 5;
    cVar5 = SBORROW8(uVar13,5);
    cVar6 = (long)(uVar13 - 5) < 0;
    uVar7 = uVar13 == 5;
    switch(uVar13) {
    case 0:
    case 1:
      goto LAB_10bd23130;
    case 2:
      plVar10 = unaff_x19 + -4;
      uVar7 = *(int *)(*plVar10 + 4) == *(int *)(*unaff_x20 + 4);
      if (*(int *)(*plVar10 + 4) < *(int *)(*unaff_x20 + 4)) {
        lVar28 = unaff_x20[1];
        lVar17 = *unaff_x20;
        lVar31 = unaff_x20[3];
        lVar29 = unaff_x20[2];
        lVar22 = *plVar10;
        lVar33 = unaff_x19[-1];
        lVar27 = unaff_x19[-2];
        unaff_x20[1] = unaff_x19[-3];
        *unaff_x20 = lVar22;
        unaff_x20[3] = lVar33;
        unaff_x20[2] = lVar27;
        unaff_x19[-3] = lVar28;
        *plVar10 = lVar17;
        unaff_x19[-1] = lVar31;
        unaff_x19[-2] = lVar29;
      }
      goto LAB_10bd23130;
    case 3:
      func_0x00010bd24e00(uVar12);
      if (!(bool)uVar7) goto LAB_10bd23150;
      param_2 = unaff_x20 + 4;
      func_0x00010bd254a0();
      goto code_r0x00010bd23154;
    case 4:
      func_0x00010bd24e00(uVar12);
      if ((bool)uVar7) {
        func_0x00010bd254a0(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,plVar10);
        func_0x00010bd24f54();
        FUN_10bd23154();
        func_0x00010bd25528();
        if (((cVar6 != cVar5) && (func_0x00010bd251c8(), cVar6 != cVar5)) &&
           (func_0x00010bd251a0(), cVar6 != cVar5)) {
          func_0x00010bd256fc();
        }
        return;
      }
      goto LAB_10bd23150;
    case 5:
      func_0x00010bd24e00(uVar12);
      if ((bool)uVar7) {
        func_0x00010bd254a0(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,unaff_x20 + 0xc);
        func_0x00010bd24f54();
        FUN_10bd23214();
        iVar4 = *(int *)(*plVar10 + 4);
        iVar2 = *(int *)(*param_3 + 4);
        cVar5 = SBORROW4(iVar4,iVar2);
        cVar6 = iVar4 - iVar2 < 0;
        if (iVar4 < iVar2) {
          lVar29 = param_3[1];
          lVar28 = *param_3;
          lVar22 = param_3[3];
          lVar17 = param_3[2];
          lVar33 = *plVar10;
          lVar31 = plVar10[3];
          lVar27 = plVar10[2];
          param_3[1] = plVar10[1];
          *param_3 = lVar33;
          param_3[3] = lVar31;
          param_3[2] = lVar27;
          plVar10[1] = lVar29;
          *plVar10 = lVar28;
          plVar10[3] = lVar22;
          plVar10[2] = lVar17;
          func_0x00010bd25528();
          if (((cVar6 != cVar5) && (func_0x00010bd251c8(), cVar6 != cVar5)) &&
             (func_0x00010bd251a0(), cVar6 != cVar5)) {
            func_0x00010bd256fc();
          }
        }
        return;
      }
      goto LAB_10bd23150;
    }
    if ((long)uVar13 < 0x18) {
      uVar7 = unaff_x20 == unaff_x19;
      if ((param_4 & 1) == 0) {
        plVar10 = unaff_x20;
        if (!(bool)uVar7) {
          while( true ) {
            unaff_x20 = unaff_x20 + 4;
            uVar7 = 1;
            if (plVar10 + 4 == unaff_x19) break;
            lVar17 = plVar10[4];
            lVar22 = *plVar10;
            plVar10 = plVar10 + 4;
            if (*(int *)(lVar17 + 4) < *(int *)(lVar22 + 4)) {
              do {
                unaff_x20[1] = unaff_x20[-3];
                *unaff_x20 = unaff_x20[-4];
                unaff_x20[3] = unaff_x20[-1];
                unaff_x20[2] = unaff_x20[-2];
                plVar10 = unaff_x20 + -8;
                unaff_x20 = unaff_x20 + -4;
              } while (*(int *)(lVar17 + 4) < *(int *)(*plVar10 + 4));
              func_0x00010bd254bc();
              plVar10 = extraout_x9_00;
              unaff_x20 = extraout_x8_01;
            }
          }
        }
        break;
      }
      if ((bool)uVar7) break;
      lVar17 = 0;
      plVar10 = unaff_x20;
      goto LAB_10bd22dec;
    }
    if (param_3 == (long *)0x0) {
      uVar7 = 1;
      if (unaff_x20 == unaff_x19) break;
      uVar15 = uVar13 - 2 >> 1;
      uVar16 = uVar15;
      goto LAB_10bd22e84;
    }
    param_1 = unaff_x20 + (uVar13 >> 1) * 4;
    if (uVar13 < 0x81) {
      param_2 = unaff_x20;
      func_0x00010bd25580();
    }
    else {
      func_0x00010bd25580(unaff_x20,param_1);
      plVar8 = param_1 + -4;
      FUN_10bd23154(unaff_x20 + 4,plVar8,unaff_x19 + -8);
      FUN_10bd23154(unaff_x20 + 8,param_1 + 4,unaff_x19 + -0xc);
      plVar11 = param_1 + 4;
      param_2 = param_1;
      FUN_10bd23154();
      lVar28 = unaff_x20[1];
      lVar17 = *unaff_x20;
      lVar33 = unaff_x20[3];
      lVar27 = unaff_x20[2];
      lVar31 = *param_1;
      lVar29 = param_1[3];
      lVar22 = param_1[2];
      unaff_x20[1] = param_1[1];
      *unaff_x20 = lVar31;
      unaff_x20[3] = lVar29;
      unaff_x20[2] = lVar22;
      param_1[1] = lVar28;
      *param_1 = lVar17;
      param_1[3] = lVar33;
      param_1[2] = lVar27;
      param_1 = plVar8;
    }
    param_3 = (long *)((long)param_3 - 1);
    if ((param_4 & 1) == 0) {
      iVar4 = *(int *)(unaff_x20[-4] + 4);
      iVar2 = *(int *)(*unaff_x20 + 4);
      cVar5 = SBORROW4(iVar4,iVar2);
      cVar6 = iVar4 - iVar2 < 0;
      if (iVar2 <= iVar4) {
        func_0x00010bd25690();
        func_0x00010bd256d0();
        plVar8 = unaff_x20;
        if (cVar6 == cVar5) {
          plVar14 = unaff_x20 + 4;
          do {
            plVar8 = plVar14;
            cVar5 = SBORROW8((long)plVar8,(long)unaff_x19);
            cVar6 = (long)plVar8 - (long)unaff_x19 < 0;
            if (unaff_x19 <= plVar8) break;
            func_0x00010bd2524c();
            plVar14 = extraout_x10_00;
          } while (cVar6 == cVar5);
        }
        else {
          do {
            plVar8 = plVar8 + 4;
            func_0x00010bd256d0();
          } while (cVar6 == cVar5);
        }
        cVar5 = SBORROW8((long)plVar8,(long)unaff_x19);
        cVar6 = (long)plVar8 - (long)unaff_x19 < 0;
        plVar14 = unaff_x19;
        if (plVar8 < unaff_x19) {
          do {
            func_0x00010bd2524c();
            plVar14 = extraout_x10_01;
          } while (cVar6 != cVar5);
        }
        while( true ) {
          cVar5 = SBORROW8((long)plVar8,(long)plVar14);
          cVar6 = (long)plVar8 - (long)plVar14 < 0;
          if (plVar14 <= plVar8) break;
          lVar28 = plVar8[1];
          lVar17 = *plVar8;
          lVar31 = plVar8[3];
          lVar29 = plVar8[2];
          lVar22 = *plVar14;
          lVar33 = plVar14[3];
          lVar27 = plVar14[2];
          plVar8[1] = plVar14[1];
          *plVar8 = lVar22;
          plVar8[3] = lVar33;
          plVar8[2] = lVar27;
          plVar14[1] = lVar28;
          *plVar14 = lVar17;
          plVar14[3] = lVar31;
          plVar14[2] = lVar29;
          do {
            plVar8 = plVar8 + 4;
            func_0x00010bd2524c();
          } while (cVar6 == cVar5);
          do {
            func_0x00010bd2524c();
            plVar14 = extraout_x10_02;
          } while (cVar6 != cVar5);
        }
        if (unaff_x20 != plVar8 + -4) {
          lVar17 = plVar8[-4];
          lVar28 = plVar8[-1];
          lVar22 = plVar8[-2];
          unaff_x20[1] = plVar8[-3];
          *unaff_x20 = lVar17;
          unaff_x20[3] = lVar28;
          unaff_x20[2] = lVar22;
        }
        param_4 = 0;
        func_0x00010bd254ec();
        unaff_x20 = plVar8;
        goto LAB_10bd22a6c;
      }
    }
    func_0x00010bd25690();
    lVar17 = extraout_x12;
    do {
      lVar22 = lVar17 + 0x20;
      lVar17 = lVar17 + 0x20;
    } while (*(int *)(*(long *)((long)unaff_x20 + lVar22) + 4) < extraout_w9);
    plVar8 = (long *)((long)unaff_x20 + lVar17);
    plVar14 = unaff_x19;
    if (lVar17 == 0x20) {
      do {
        if (plVar14 <= plVar8) break;
        plVar14 = plVar14 + -4;
      } while (extraout_w9 <= *(int *)(*plVar14 + 4));
    }
    else {
      do {
        plVar14 = plVar14 + -4;
      } while (extraout_w9 <= *(int *)(*plVar14 + 4));
    }
    while (plVar8 < plVar14) {
      lVar28 = plVar8[1];
      lVar17 = *plVar8;
      lVar31 = plVar8[3];
      lVar29 = plVar8[2];
      lVar22 = *plVar14;
      lVar33 = plVar14[3];
      lVar27 = plVar14[2];
      plVar8[1] = plVar14[1];
      *plVar8 = lVar22;
      plVar8[3] = lVar33;
      plVar8[2] = lVar27;
      plVar14[1] = lVar28;
      *plVar14 = lVar17;
      plVar14[3] = lVar31;
      plVar14[2] = lVar29;
      do {
        plVar8 = plVar8 + 4;
      } while (*(int *)(*plVar8 + 4) < *(int *)(extraout_x8 + 4));
      do {
        plVar14 = plVar14 + -4;
      } while (*(int *)(extraout_x8 + 4) <= *(int *)(*plVar14 + 4));
    }
    plVar14 = plVar8 + -4;
    if (unaff_x20 != plVar14) {
      lVar17 = *plVar14;
      lVar28 = plVar8[-1];
      lVar22 = plVar8[-2];
      unaff_x20[1] = plVar8[-3];
      *unaff_x20 = lVar17;
      unaff_x20[3] = lVar28;
      unaff_x20[2] = lVar22;
    }
    func_0x00010bd254ec();
    uVar7 = extraout_x10 == extraout_x11;
    if (extraout_x10 < extraout_x11) goto LAB_10bd22c20;
    plVar9 = unaff_x20;
    FUN_10bd232e0(unaff_x20,plVar14);
    param_1 = plVar8;
    param_2 = unaff_x19;
    FUN_10bd232e0();
    if ((int)param_1 == 0) goto code_r0x00010bd22c1c;
    unaff_x19 = plVar14;
  } while (((ulong)plVar9 & 1) == 0);
  goto LAB_10bd23130;
LAB_10bd22dec:
  plVar8 = plVar10 + 4;
  uVar7 = 1;
  if (plVar8 == unaff_x19) goto LAB_10bd23130;
  lVar22 = plVar10[4];
  if (*(int *)(lVar22 + 4) < *(int *)(*plVar10 + 4)) {
    do {
      puVar1 = (undefined8 *)((long)unaff_x20 + lVar17);
      puVar1[5] = puVar1[1];
      puVar1[4] = *puVar1;
      puVar1[7] = puVar1[3];
      puVar1[6] = puVar1[2];
      if (lVar17 == 0) break;
      lVar17 = lVar17 + -0x20;
    } while (*(int *)(lVar22 + 4) < *(int *)(puVar1[-4] + 4));
    func_0x00010bd254bc();
    lVar17 = extraout_x8_00;
    plVar8 = extraout_x9;
  }
  lVar17 = lVar17 + 0x20;
  plVar10 = plVar8;
  goto LAB_10bd22dec;
code_r0x00010bd22c1c:
  unaff_x20 = plVar8;
  if (((ulong)plVar9 & 1) == 0) {
LAB_10bd22c20:
    func_0x00010bd256dc();
    FUN_10bd22a20();
    param_4 = 0;
    unaff_x20 = plVar8;
  }
  goto LAB_10bd22a6c;
LAB_10bd22e84:
  do {
    if ((long)uVar16 <= (long)uVar15) {
      uVar23 = (uVar16 & 0x3fffffffffffffff) << 1 | 1;
      puVar21 = (ulong *)(unaff_x20 + uVar23 * 4);
      uVar20 = uVar16 * 2 + 2;
      if ((long)uVar20 < (long)uVar13) {
        uVar24 = puVar21[4];
        uVar3 = *(uint *)(uVar24 + 4);
        param_1 = (long *)(ulong)uVar3;
        puVar19 = puVar21 + 4;
        if ((int)uVar3 <= *(int *)(*puVar21 + 4)) {
          puVar19 = puVar21;
          uVar20 = uVar23;
          uVar24 = *puVar21;
        }
      }
      else {
        puVar19 = puVar21;
        uVar20 = uVar23;
        uVar24 = *puVar21;
      }
      puVar21 = (ulong *)(unaff_x20 + uVar16 * 4);
      uVar23 = *puVar21;
      if (*(int *)(uVar23 + 4) <= *(int *)(uVar24 + 4)) {
        uVar30 = puVar21[2];
        uVar25 = puVar21[1];
        uVar24 = puVar21[3];
        do {
          puVar18 = puVar19;
          uVar26 = *puVar18;
          uVar34 = puVar18[3];
          uVar32 = puVar18[2];
          puVar21[1] = puVar18[1];
          *puVar21 = uVar26;
          puVar21[3] = uVar34;
          puVar21[2] = uVar32;
          if ((long)uVar15 < (long)uVar20) break;
          uVar26 = uVar20 << 1 | 1;
          puVar21 = (ulong *)(unaff_x20 + uVar26 * 4);
          uVar20 = uVar20 * 2 + 2;
          if ((long)uVar20 < (long)uVar13) {
            param_1 = (long *)puVar21[4];
            uVar3 = *(uint *)((long)*puVar21 + 4);
            param_2 = (long *)(ulong)uVar3;
            plVar11 = (long *)(ulong)*(uint *)((long)param_1 + 4);
            puVar19 = puVar21 + 4;
            plVar10 = param_1;
            if ((int)*(uint *)((long)param_1 + 4) <= (int)uVar3) {
              puVar19 = puVar21;
              uVar20 = uVar26;
              plVar10 = (long *)*puVar21;
            }
          }
          else {
            puVar19 = puVar21;
            uVar20 = uVar26;
            plVar10 = (long *)*puVar21;
          }
          puVar21 = puVar18;
        } while (*(int *)(uVar23 + 4) <= *(int *)((long)plVar10 + 4));
        *puVar18 = uVar23;
        puVar18[3] = uVar24;
        puVar18[2] = uVar30;
        puVar18[1] = uVar25;
      }
    }
    uVar16 = uVar16 - 1;
  } while (-1 < (long)uVar16);
  while( true ) {
    uVar7 = uVar13 - 2 == 0;
    if ((long)uVar13 < 2) break;
    lVar22 = unaff_x20[1];
    lVar17 = *unaff_x20;
    lVar29 = unaff_x20[3];
    lVar28 = unaff_x20[2];
    plVar10 = unaff_x20;
    uVar16 = 0;
    do {
      uVar20 = uVar16 << 1 | 1;
      uVar15 = uVar16 * 2 + 2;
      plVar8 = plVar10 + uVar16 * 4 + 4;
      uVar23 = uVar20;
      if (((long)uVar15 < (long)uVar13) &&
         (plVar8 = plVar10 + uVar16 * 4 + 8, uVar23 = uVar15,
         *(int *)(plVar10[uVar16 * 4 + 8] + 4) <= *(int *)(plVar10[uVar16 * 4 + 4] + 4))) {
        plVar8 = plVar10 + uVar16 * 4 + 4;
        uVar23 = uVar20;
      }
      lVar27 = *plVar8;
      lVar33 = plVar8[3];
      lVar31 = plVar8[2];
      plVar10[1] = plVar8[1];
      *plVar10 = lVar27;
      plVar10[3] = lVar33;
      plVar10[2] = lVar31;
      plVar10 = plVar8;
      uVar16 = uVar23;
    } while ((long)uVar23 <= (long)(uVar13 - 2 >> 1));
    plVar10 = unaff_x19 + -4;
    if (plVar8 == plVar10) {
      plVar8[1] = lVar22;
      *plVar8 = lVar17;
      plVar8[3] = lVar29;
      plVar8[2] = lVar28;
    }
    else {
      lVar27 = *plVar10;
      lVar33 = unaff_x19[-1];
      lVar31 = unaff_x19[-2];
      plVar8[1] = unaff_x19[-3];
      *plVar8 = lVar27;
      plVar8[3] = lVar33;
      plVar8[2] = lVar31;
      unaff_x19[-3] = lVar22;
      *plVar10 = lVar17;
      unaff_x19[-1] = lVar29;
      unaff_x19[-2] = lVar28;
      lVar17 = (long)plVar8 + (0x20 - (long)unaff_x20) >> 5;
      if (1 < lVar17) {
        uVar16 = lVar17 - 2U >> 1;
        lVar17 = *plVar8;
        if (*(int *)(unaff_x20[uVar16 * 4] + 4) < *(int *)(lVar17 + 4)) {
          lVar29 = plVar8[2];
          lVar28 = plVar8[1];
          lVar22 = plVar8[3];
          plVar14 = unaff_x20 + uVar16 * 4;
          do {
            plVar9 = plVar14;
            lVar27 = *plVar9;
            lVar33 = plVar9[3];
            lVar31 = plVar9[2];
            plVar8[1] = plVar9[1];
            *plVar8 = lVar27;
            plVar8[3] = lVar33;
            plVar8[2] = lVar31;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            plVar8 = plVar9;
            plVar14 = unaff_x20 + uVar16 * 4;
          } while (*(int *)(unaff_x20[uVar16 * 4] + 4) < *(int *)(lVar17 + 4));
          *plVar9 = lVar17;
          plVar9[3] = lVar22;
          plVar9[2] = lVar29;
          plVar9[1] = lVar28;
        }
      }
    }
    uVar13 = uVar13 - 1;
    unaff_x19 = plVar10;
  }
LAB_10bd23130:
  func_0x00010bd24e00(uVar12);
  if ((bool)uVar7) {
    func_0x00010bd254a0(unaff_x30);
    return;
  }
LAB_10bd23150:
  plVar10 = plVar11;
  unaff_x20 = param_1;
  ___stack_chk_fail();
code_r0x00010bd23154:
  iVar4 = *(int *)(*param_2 + 4);
  if (iVar4 < *(int *)(*unaff_x20 + 4)) {
    if (*(int *)(*plVar10 + 4) < iVar4) {
      lVar29 = unaff_x20[1];
      lVar28 = *unaff_x20;
      lVar22 = unaff_x20[3];
      lVar17 = unaff_x20[2];
      lVar33 = *plVar10;
      lVar31 = plVar10[3];
      lVar27 = plVar10[2];
      unaff_x20[1] = plVar10[1];
      *unaff_x20 = lVar33;
      unaff_x20[3] = lVar31;
      unaff_x20[2] = lVar27;
    }
    else {
      lVar29 = unaff_x20[1];
      lVar28 = *unaff_x20;
      lVar22 = unaff_x20[3];
      lVar17 = unaff_x20[2];
      lVar33 = *param_2;
      lVar31 = param_2[3];
      lVar27 = param_2[2];
      unaff_x20[1] = param_2[1];
      *unaff_x20 = lVar33;
      unaff_x20[3] = lVar31;
      unaff_x20[2] = lVar27;
      param_2[1] = lVar29;
      *param_2 = lVar28;
      param_2[3] = lVar22;
      param_2[2] = lVar17;
      if (*(int *)(*param_2 + 4) <= *(int *)(*plVar10 + 4)) {
        return;
      }
      lVar29 = param_2[1];
      lVar28 = *param_2;
      lVar22 = param_2[3];
      lVar17 = param_2[2];
      lVar33 = *plVar10;
      lVar31 = plVar10[3];
      lVar27 = plVar10[2];
      param_2[1] = plVar10[1];
      *param_2 = lVar33;
      param_2[3] = lVar31;
      param_2[2] = lVar27;
    }
    plVar10[1] = lVar29;
    *plVar10 = lVar28;
    plVar10[3] = lVar22;
    plVar10[2] = lVar17;
  }
  else if (*(int *)(*plVar10 + 4) < iVar4) {
    lVar29 = param_2[1];
    lVar28 = *param_2;
    lVar22 = param_2[3];
    lVar17 = param_2[2];
    lVar33 = *plVar10;
    lVar31 = plVar10[3];
    lVar27 = plVar10[2];
    param_2[1] = plVar10[1];
    *param_2 = lVar33;
    param_2[3] = lVar31;
    param_2[2] = lVar27;
    plVar10[1] = lVar29;
    *plVar10 = lVar28;
    plVar10[3] = lVar22;
    plVar10[2] = lVar17;
    if (*(int *)(*param_2 + 4) < *(int *)(*unaff_x20 + 4)) {
      lVar29 = unaff_x20[1];
      lVar28 = *unaff_x20;
      lVar22 = unaff_x20[3];
      lVar17 = unaff_x20[2];
      lVar33 = *param_2;
      lVar31 = param_2[3];
      lVar27 = param_2[2];
      unaff_x20[1] = param_2[1];
      *unaff_x20 = lVar33;
      unaff_x20[3] = lVar31;
      unaff_x20[2] = lVar27;
      param_2[1] = lVar29;
      *param_2 = lVar28;
      param_2[3] = lVar22;
      param_2[2] = lVar17;
    }
  }
  return;
}



/* Entry: 10bd23154; end: 10bd23213;  */

void FUN_10bd23154(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = *(int *)(*param_2 + 4);
  if (iVar1 < *(int *)(*param_1 + 4)) {
    if (*(int *)(*param_3 + 4) < iVar1) {
      lVar5 = param_1[1];
      lVar4 = *param_1;
      lVar3 = param_1[3];
      lVar2 = param_1[2];
      lVar8 = *param_3;
      lVar7 = param_3[3];
      lVar6 = param_3[2];
      param_1[1] = param_3[1];
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
    }
    else {
      lVar5 = param_1[1];
      lVar4 = *param_1;
      lVar3 = param_1[3];
      lVar2 = param_1[2];
      lVar8 = *param_2;
      lVar7 = param_2[3];
      lVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
      param_2[1] = lVar5;
      *param_2 = lVar4;
      param_2[3] = lVar3;
      param_2[2] = lVar2;
      if (*(int *)(*param_2 + 4) <= *(int *)(*param_3 + 4)) {
        return;
      }
      lVar5 = param_2[1];
      lVar4 = *param_2;
      lVar3 = param_2[3];
      lVar2 = param_2[2];
      lVar8 = *param_3;
      lVar7 = param_3[3];
      lVar6 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = lVar8;
      param_2[3] = lVar7;
      param_2[2] = lVar6;
    }
    param_3[1] = lVar5;
    *param_3 = lVar4;
    param_3[3] = lVar3;
    param_3[2] = lVar2;
  }
  else if (*(int *)(*param_3 + 4) < iVar1) {
    lVar5 = param_2[1];
    lVar4 = *param_2;
    lVar3 = param_2[3];
    lVar2 = param_2[2];
    lVar8 = *param_3;
    lVar7 = param_3[3];
    lVar6 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = lVar8;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_3[1] = lVar5;
    *param_3 = lVar4;
    param_3[3] = lVar3;
    param_3[2] = lVar2;
    if (*(int *)(*param_2 + 4) < *(int *)(*param_1 + 4)) {
      lVar5 = param_1[1];
      lVar4 = *param_1;
      lVar3 = param_1[3];
      lVar2 = param_1[2];
      lVar8 = *param_2;
      lVar7 = param_2[3];
      lVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
      param_2[1] = lVar5;
      *param_2 = lVar4;
      param_2[3] = lVar3;
      param_2[2] = lVar2;
    }
  }
  return;
}



/* Entry: 10bd23214; end: 10bd2325f;  */

void FUN_10bd23214(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010bd24f54();
  FUN_10bd23154();
  func_0x00010bd25528();
  if (((in_NG != in_OV) && (func_0x00010bd251c8(), in_NG != in_OV)) &&
     (func_0x00010bd251a0(), in_NG != in_OV)) {
    func_0x00010bd256fc();
  }
  return;
}



/* Entry: 10bd23260; end: 10bd232df;  */

void FUN_10bd23260(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long *in_x4;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd24f54();
  FUN_10bd23214();
  iVar1 = *(int *)(*in_x4 + 4);
  iVar2 = *(int *)(*unaff_x22 + 4);
  cVar3 = SBORROW4(iVar1,iVar2);
  cVar4 = iVar1 - iVar2 < 0;
  if (iVar1 < iVar2) {
    lVar8 = unaff_x22[1];
    lVar7 = *unaff_x22;
    lVar6 = unaff_x22[3];
    lVar5 = unaff_x22[2];
    lVar11 = *in_x4;
    lVar10 = in_x4[3];
    lVar9 = in_x4[2];
    unaff_x22[1] = in_x4[1];
    *unaff_x22 = lVar11;
    unaff_x22[3] = lVar10;
    unaff_x22[2] = lVar9;
    in_x4[1] = lVar8;
    *in_x4 = lVar7;
    in_x4[3] = lVar6;
    in_x4[2] = lVar5;
    func_0x00010bd25528();
    if (((cVar4 != cVar3) && (func_0x00010bd251c8(), cVar4 != cVar3)) &&
       (func_0x00010bd251a0(), cVar4 != cVar3)) {
      func_0x00010bd256fc();
    }
  }
  return;
}



/* Entry: 10bd232e0; end: 10bd2349b;  */

ulong FUN_10bd232e0(long param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  func_0x00010bd2540c();
  uVar3 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2 - param_1 >> 5;
  uVar1 = lVar4 == 5;
  uVar2 = 1;
  switch(lVar4) {
  case 0:
  case 1:
    goto LAB_10bd23468;
  case 2:
    plVar9 = unaff_x20 + -4;
    uVar1 = *(int *)(*plVar9 + 4) == *(int *)(*unaff_x19 + 4);
    if (*(int *)(*plVar9 + 4) < *(int *)(*unaff_x19 + 4)) {
      lVar8 = unaff_x19[1];
      lVar13 = *unaff_x19;
      lVar7 = unaff_x19[3];
      lVar4 = unaff_x19[2];
      lVar14 = *plVar9;
      lVar12 = unaff_x20[-1];
      lVar11 = unaff_x20[-2];
      unaff_x19[1] = unaff_x20[-3];
      *unaff_x19 = lVar14;
      unaff_x19[3] = lVar12;
      unaff_x19[2] = lVar11;
      unaff_x20[-3] = lVar8;
      *plVar9 = lVar13;
      unaff_x20[-1] = lVar7;
      unaff_x20[-2] = lVar4;
    }
    goto LAB_10bd23468;
  case 3:
    FUN_10bd23154();
    break;
  case 4:
    FUN_10bd23214();
    break;
  case 5:
    FUN_10bd23260();
    break;
  default:
    func_0x00010bd25580();
    lVar4 = 0;
    iVar5 = 0;
    plVar9 = unaff_x19 + 0xc;
    plVar10 = unaff_x19 + 8;
    while (plVar6 = plVar9, uVar1 = plVar6 == unaff_x20, !(bool)uVar1) {
      lVar7 = *plVar6;
      if (*(int *)(lVar7 + 4) < *(int *)(*plVar10 + 4)) {
        lVar12 = plVar6[2];
        lVar11 = plVar6[1];
        lVar8 = plVar6[3];
        lVar13 = lVar4;
        do {
          lVar14 = lVar13;
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x68) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x48);
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x60) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x40);
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x78) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x58);
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x70) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x50);
          plVar9 = unaff_x19;
          if (lVar14 == -0x40) goto LAB_10bd23420;
          lVar13 = lVar14 + -0x20;
        } while (*(int *)(lVar7 + 4) < *(int *)(*(long *)((long)unaff_x19 + lVar14 + 0x20) + 4));
        plVar9 = (long *)((long)unaff_x19 + lVar14 + 0x40);
LAB_10bd23420:
        *plVar9 = lVar7;
        plVar9[2] = lVar12;
        plVar9[1] = lVar11;
        plVar9[3] = lVar8;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          uVar1 = plVar6 + 4 == unaff_x20;
          uVar2 = (ulong)(byte)uVar1;
          goto LAB_10bd23468;
        }
      }
      lVar4 = lVar4 + 0x20;
      plVar10 = plVar6;
      plVar9 = plVar6 + 4;
    }
  }
  uVar2 = 1;
LAB_10bd23468:
  func_0x00010bd24e00(uVar3,uVar2);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107c27914(uVar2 + 0x70);
    func_0x00010bd234e0(uVar2 + 0x58);
    FUN_10bd235c0(uVar2 + 0x38);
    FUN_10bd235f8(uVar2 + 0x20);
    FUN_10bd23630(uVar2 + 8);
    return uVar2;
  }
  return uVar2;
}



/* Entry: 10bd2349c; end: 10bd2353f;  */

long FUN_10bd2349c(long param_1)

{
  func_0x000107c27914(param_1 + 0x70);
  func_0x00010bd234e0(param_1 + 0x58);
  FUN_10bd235c0(param_1 + 0x38);
  FUN_10bd235f8(param_1 + 0x20);
  FUN_10bd23630(param_1 + 8);
  return param_1;
}



/* Entry: 10bd23540; end: 10bd23547;  */

void FUN_10bd23540(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd24f94(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    FUN_10bd23588(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10bd23548; end: 10bd23587;  */

void FUN_10bd23548(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd24f94();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    FUN_10bd23588(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10bd23588; end: 10bd235ab;  */

void FUN_10bd23588(void)

{
  func_0x00010bd25088();
  FUN_10bd235ac();
  return;
}



/* Entry: 10bd235ac; end: 10bd235bf;  */

void FUN_10bd235ac(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd235c0; end: 10bd235e3;  */

void FUN_10bd235c0(void)

{
  func_0x00010bd25088();
  FUN_10bd235e4();
  return;
}



/* Entry: 10bd235e4; end: 10bd235f7;  */

void FUN_10bd235e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd235f8; end: 10bd2361b;  */

void FUN_10bd235f8(void)

{
  func_0x00010bd25088();
  FUN_10bd2361c();
  return;
}



/* Entry: 10bd2361c; end: 10bd2362f;  */

void FUN_10bd2361c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd23630; end: 10bd23653;  */

void FUN_10bd23630(void)

{
  func_0x00010bd25088();
  FUN_10bd23654();
  return;
}



/* Entry: 10bd23654; end: 10bd23667;  */

void FUN_10bd23654(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd23668; end: 10bd23693;  */

long * FUN_10bd23668(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bd23694; end: 10bd23867;  */

void FUN_10bd23694(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010bd2540c();
  func_0x00010bd25764();
  while (unaff_x22 < *(int *)(unaff_x20 + 0x80)) {
    FUN_10bd23694();
    func_0x00010bd25758();
  }
  plVar2 = (long *)**(long **)(unaff_x19 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
    if (plVar2[6] != 0) {
      plVar2[8] = unaff_x20;
      lVar3 = 0x70;
      __Znwm();
      func_0x000107c31578();
      FUN_10bd1b818(lVar3);
      func_0x000107c30378(FUN_10bd238d4,lVar3);
      plVar2[7] = lVar3;
    }
  }
  uVar1 = *(uint *)(unaff_x20 + 0x84);
  for (lVar3 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar3 != 0;
      lVar3 = lVar3 + 0x58) {
    plVar2 = *(long **)(unaff_x19 + 8);
    *plVar2 = *(long *)(unaff_x20 + 0x50) + lVar3;
    *(long **)(unaff_x19 + 8) = plVar2 + 1;
  }
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 8;
  *(long *)(unaff_x19 + 0x10) = *(long *)(unaff_x19 + 0x10) + 0x10;
  return;
}



/* Entry: 10bd23868; end: 10bd238d3;  */

void FUN_10bd23868(ulong param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined4 *unaff_x19;
  
  func_0x00010bd25110();
  iVar4 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00010bd25444(), iVar4 == 0)) {
    FUN_10bd21a94(*param_2,param_3 & 1);
    do {
      uVar1 = *unaff_x19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar3) {
        *unaff_x19 = 0xdd;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010bd25730(uVar1);
    if ((bool)in_ZR) {
      func_0x00010bd255ec();
    }
  }
  return;
}



/* Entry: 10bd238d4; end: 10bd238eb;  */

void FUN_10bd238d4(long param_1)

{
  if (param_1 != 0) {
    FUN_10bd1b878();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd238ec; end: 10bd2394f;  */

ulong FUN_10bd238ec(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x19;
  undefined1 auStack_20 [16];
  
  puVar1 = auStack_20;
  if ((*(uint *)(param_1 + 1) != 0) && (*param_1 != 0)) {
    return (ulong)*(uint *)(param_1 + 1);
  }
  FUN_10bdb2a00(auStack_20,&UNK_10f835988,0x327);
  func_0x00010bd16744(auStack_20,&UNK_10f835a24);
  FUN_10bcdad04();
  func_0x00010bd253b0();
  func_0x00010bd24af8();
  if ((int)puVar1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + ((ulong)puVar1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(ulong *)(unaff_x19 + ((ulong)puVar1 & 0xffffffff));
}



/* Entry: 10bd23950; end: 10bd2398b;  */

long FUN_10bd23950(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd2398c; end: 10bd239a7;  */

undefined8 FUN_10bd2398c(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd239a8; end: 10bd239e3;  */

long FUN_10bd239a8(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd239e4; end: 10bd239ff;  */

undefined8 FUN_10bd239e4(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23a00; end: 10bd23a3b;  */

long FUN_10bd23a00(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23a3c; end: 10bd23a57;  */

undefined8 FUN_10bd23a3c(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23a58; end: 10bd23a93;  */

long FUN_10bd23a58(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23a94; end: 10bd23aaf;  */

undefined8 FUN_10bd23a94(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23ab0; end: 10bd23aeb;  */

long FUN_10bd23ab0(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23aec; end: 10bd23b07;  */

undefined8 FUN_10bd23aec(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23b08; end: 10bd23b43;  */

long FUN_10bd23b08(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23b44; end: 10bd23b5f;  */

undefined8 FUN_10bd23b44(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23b60; end: 10bd23b9b;  */

long FUN_10bd23b60(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23b9c; end: 10bd23bb7;  */

undefined8 FUN_10bd23b9c(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23bb8; end: 10bd23bf3;  */

long FUN_10bd23bb8(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23bf4; end: 10bd23c0f;  */

undefined8 FUN_10bd23bf4(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23c10; end: 10bd23c4b;  */

long FUN_10bd23c10(ulong param_1)

{
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00010bd24c40();
  func_0x00010bd24bb4();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23c4c; end: 10bd23c67;  */

undefined8 FUN_10bd23c4c(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24bb4();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 10bd23c68; end: 10bd23cdf;  */

long * FUN_10bd23c68(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == (long *)0x0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24b10();
      func_0x00010bd25074();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 10bd23ce0; end: 10bd23d03;  */

void FUN_10bd23ce0(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd23d04; end: 10bd23d7b;  */

long * FUN_10bd23d04(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == (long *)0x0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24b10();
      func_0x00010bd25074();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 10bd23d7c; end: 10bd23d9f;  */

void FUN_10bd23d7c(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd23da0; end: 10bd23e17;  */

long * FUN_10bd23da0(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == (long *)0x0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24b10();
      func_0x00010bd25074();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 10bd23e18; end: 10bd23e3b;  */

void FUN_10bd23e18(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd23e3c; end: 10bd23eb3;  */

long * FUN_10bd23e3c(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == (long *)0x0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24b10();
      func_0x00010bd25074();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 10bd23eb4; end: 10bd23ed7;  */

void FUN_10bd23eb4(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd23ed8; end: 10bd23f13;  */

ulong * FUN_10bd23ed8(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 10bd23f14; end: 10bd23f37;  */

void FUN_10bd23f14(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd23f38; end: 10bd2401f;  */

undefined1  [16] FUN_10bd23f38(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 0x10;
    puVar3 = param_2;
    for (; param_1 != puVar1; param_1 = param_1 + 1) {
      uVar2 = *param_1;
      *param_1 = *puVar3;
      *puVar3 = uVar2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = puVar1;
    return auVar4;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10bd24020; end: 10bd24137;  */

void FUN_10bd24020(void)

{
  int extraout_w8;
  long alStack_38 [3];
  
  func_0x00010bd24f94();
  func_0x00010bd25710();
  if (extraout_w8 != 0) {
    func_0x000107c303bc(alStack_38);
  }
  func_0x00010bd24ee4();
  func_0x00010bd24070();
  func_0x00010bd25568();
  if (alStack_38[0] != 0) {
    func_0x000107c282b8(alStack_38);
  }
  return;
}



/* Entry: 10bd24138; end: 10bd241a7;  */

void FUN_10bd24138(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_1[2] == 0) {
    puVar2 = param_1;
    func_0x000107c28174();
    puVar1 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar1 = (ulong *)(*param_1 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if (*puVar1 != 0) {
        func_0x00010bd24eb8();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(*param_1 - 1);
      return;
    }
  }
  return;
}



/* Entry: 10bd241a8; end: 10bd24287;  */

undefined4 FUN_10bd241a8(undefined4 *param_1)

{
  func_0x00010bd24da4();
  func_0x00010bd20f0c();
  return *param_1;
}



/* Entry: 10bd24288; end: 10bd24393;  */

long * FUN_10bd24288(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong extraout_x8;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  puVar7 = (undefined8 *)*param_1;
  lVar6 = param_1[2];
  puVar3 = (undefined8 *)*puVar7;
  if (*(undefined8 **)(lVar6 + 0x20) == puVar3) {
    if (*(byte *)(lVar6 + 1) < 0xc0) {
      lVar9 = param_1[1];
      func_0x00010bd24e30();
      if ((int)puVar3 == 10) {
        if ((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) {
          plVar5 = (long *)puVar7[0xb];
          plVar4 = (long *)(lVar9 + (ulong)*(uint *)(puVar7 + 5));
          plVar2 = plVar4;
          func_0x00010b4bf3a0(plVar4,*(undefined4 *)(lVar6 + 4));
          if (plVar2 == (long *)0x0) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = (long *)*plVar2;
            if ((*(byte *)((long)plVar2 + 10) >> 4 & 1) != 0) {
              lVar9 = lVar6;
              FUN_10bcee28c(lVar6);
              (**(code **)(*plVar5 + 0x10))(plVar5,lVar9);
              (**(code **)(*plVar8 + 0x48))(plVar8,plVar5,*plVar4);
              if ((*plVar4 == 0) && ((long *)*plVar2 != (long *)0x0)) {
                (**(code **)(*(long *)*plVar2 + 8))();
              }
            }
            func_0x00010b4c0214(plVar4,*(undefined4 *)(lVar6 + 4));
          }
          return plVar8;
        }
        if (((*(byte *)(lVar6 + 1) >> 5 & 1) == 0) &&
           (func_0x00010bd24f2c(), puVar3 == (undefined8 *)0x0)) {
          puVar3 = puVar7;
          func_0x00010bd24f34();
          FUN_10bd1d3b4();
        }
        func_0x00010bd24f2c();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar7;
          func_0x00010bd24f34();
          iVar1 = (int)puVar3;
          FUN_10bd1bdd4();
          if (iVar1 == 0) {
            return (long *)0x0;
          }
          func_0x00010bd25788(*(undefined8 *)(lVar6 + 0x28));
          *(undefined4 *)(lVar9 + (extraout_x8 & 0xffffffff)) = 0;
        }
        func_0x00010bd24f34();
        func_0x00010bd20e14();
        plVar4 = (long *)*puVar7;
        *puVar7 = 0;
        return plVar4;
      }
      goto LAB_10bd24380;
    }
    func_0x00010bd24f14(puVar3,param_2,&UNK_10f83542e);
  }
  else {
    func_0x00010bd24e70(puVar3,param_2,&UNK_10f83542e);
  }
  func_0x00010bd24e38();
LAB_10bd24380:
  puVar7 = (undefined8 *)*puVar7;
  func_0x00010bd250f8(puVar7,lVar6,&UNK_10f83542e);
  func_0x00010bd24da4();
  FUN_10bd23c68();
  return (long *)*puVar7;
}



/* Entry: 10bd24394; end: 10bd243cb;  */

undefined8 FUN_10bd24394(undefined8 *param_1)

{
  func_0x00010bd24da4();
  FUN_10bd23c68();
  return *param_1;
}



/* Entry: 10bd243cc; end: 10bd243fb;  */

void FUN_10bd243cc(long *param_1)

{
  *(undefined4 *)
   (param_1[1] +
   (ulong)(uint)(*(int *)(*param_1 + 0x2c) +
                (int)((*(long *)(param_1[2] + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_1[2] + 0x28) + 0x10) + 0x40)) / 0x38) * 4)
   ) = 0;
  return;
}



/* Entry: 10bd243fc; end: 10bd2451b;  */

void FUN_10bd243fc(void)

{
  func_0x00010bd24f40();
  FUN_10bd1d8dc();
  return;
}



/* Entry: 10bd2451c; end: 10bd2452f;  */

void FUN_10bd2451c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar14;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar15;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong uVar16;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar2 = (undefined8 *)*param_1;
  uVar15 = param_1[1];
  lVar13 = param_1[2];
  plVar10 = (long *)*puVar2;
  bVar6 = plVar10 <= *(long **)(lVar13 + 0x20);
  if (*(long **)(lVar13 + 0x20) == plVar10) {
    lVar12 = lVar13;
    func_0x00010bd2551c();
    if (bVar6) {
      func_0x00010bd24f14();
      goto LAB_10bd202e0;
    }
    func_0x00010bd24df4();
    if ((int)plVar10 == 10) {
      if ((*(byte *)(lVar13 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24fc4();
        func_0x00010bd25504();
        if (param_2 == 0) goto LAB_10b4bf494;
        plVar9 = plVar10;
        func_0x00010b4c0fe8();
        plVar9[2] = lVar12;
        if ((uVar15 & 1) == 0) {
          if ((*(byte *)((long)plVar9 + 10) >> 4 & 1) != 0) {
            (**(code **)(*(long *)*plVar9 + 0x38))((long *)*plVar9,param_2,*plVar10);
            goto code_r0x00010b4c0200;
          }
          if ((*plVar10 == 0) && (*plVar9 != 0)) {
            func_0x00010b4c5354();
            (*extraout_x8_00)();
          }
        }
        else {
          func_0x00010b4c575c();
        }
        *plVar9 = param_2;
code_r0x00010b4c0200:
        *(byte *)((long)plVar9 + 10) = *(byte *)((long)plVar9 + 10) & 0xf0;
        return;
      }
      func_0x00010bd250a8();
      if (plVar10 == (long *)0x0) {
        func_0x00010bd24c70();
        if (param_2 == 0) {
          FUN_10bd1d3b4();
        }
        else {
          FUN_10bd1cd90();
        }
        func_0x00010bd24c70();
        func_0x00010bd20e14();
        uVar15 = unaff_x21[1];
        if ((uVar15 & 1) != 0) {
          func_0x00010bd25400();
          uVar15 = extraout_x8_07;
        }
        if ((uVar15 == 0) && (*plVar10 != 0)) {
          func_0x00010bd24eb8();
        }
        *plVar10 = param_2;
        return;
      }
      if (param_2 == 0) {
        if ((*(byte *)(lVar13 + 1) >> 4 & 1) == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x28);
        }
        func_0x00010bd24e40();
        puVar3 = (undefined1 *)register0x00000008;
        uVar16 = unaff_x20;
        while( true ) {
          unaff_x20 = uVar15;
          *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
          *(long **)(puVar3 + -0x28) = unaff_x21;
          *(ulong *)(puVar3 + -0x20) = uVar16;
          *(long *)(puVar3 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar3 + -8) = unaff_x30;
          uVar5 = *(int *)(lVar13 + 4) != 0;
          uVar7 = *(int *)(lVar13 + 4) == 1;
          if ((!(bool)uVar7) || ((*(byte *)(*(long *)(lVar13 + 0x30) + 1) >> 1 & 1) == 0)) {
            func_0x00010bd252d8();
            if (*(int *)(unaff_x20 + (extraout_x8_04 & 0xffffffff)) != 0) {
              plVar10 = (long *)*plVar10;
              FUN_10bcee2d0();
              uVar15 = *(ulong *)(unaff_x20 + 8);
              plVar9 = plVar10;
              if ((uVar15 & 1) != 0) {
                func_0x00010bd25400();
                uVar15 = extraout_x8_06;
              }
              if (uVar15 == 0) {
                func_0x00010bd255ac();
                if ((int)plVar9 == 10) {
                  func_0x00010bd24e64();
                  func_0x00010bd20e14();
                  if (*plVar9 != 0) {
                    func_0x00010bd24eb8();
                  }
                }
                else if ((int)plVar9 == 9) {
                  FUN_10bd1bdfc();
                  if ((int)plVar10 == 1) {
                    func_0x00010bd24e64();
                    func_0x00010bd20e14();
                    if (*plVar10 != 0) {
                      func_0x000107c34fe8();
                    }
                    __ZdlPv();
                  }
                  else {
                    func_0x00010bd24e64();
                    FUN_10bd1f51c();
                    func_0x000107c30258();
                  }
                }
              }
              func_0x00010bd252d8();
              *(undefined4 *)(unaff_x20 + (extraout_x8_05 & 0xffffffff)) = 0;
            }
            return;
          }
          func_0x00010bd24e64();
          iVar8 = (int)plVar10;
          uVar1 = *(undefined8 *)(puVar3 + -0x20);
          unaff_x19 = *(long *)(puVar3 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar3 + -0x30);
          unaff_x21 = *(long **)(puVar3 + -0x28);
          register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x50);
          *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
          *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
          *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
          *(long **)(puVar3 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar3 + -0x20) = uVar1;
          *(long *)(puVar3 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
          *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
          func_0x00010bd24b74();
          if (!(bool)uVar7) {
            func_0x00010bd24e70();
            func_0x00010bd24e38();
            *(undefined8 *)(puVar3 + -0x70) = uVar1;
            *(long *)(puVar3 + -0x68) = unaff_x19;
            *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
            *(code **)(puVar3 + -0x58) = FUN_10bd1cd90;
            func_0x00010bd24f94();
            func_0x00010bd24e7c();
            func_0x00010bd1d3e8();
            if (iVar8 != -1) {
              func_0x00010bd25418();
              *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
            }
            return;
          }
          if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) break;
          if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
            func_0x00010b91adc8();
            func_0x00010bd2518c();
            if (!(bool)uVar5 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_02] * 4 + 0x10bd1cb5c))();
              return;
            }
LAB_10bd1cd6c:
            func_0x00010bd25668();
            return;
          }
          lVar13 = unaff_x19;
          FUN_10bcddbd4();
          if (lVar13 == 0) {
            func_0x00010bd24c14();
            iVar8 = (int)lVar13;
            FUN_10bd1c8f0();
            if (iVar8 != 0) {
              func_0x00010bd24c14();
              FUN_10bd1d3b4();
              func_0x00010bd24e30();
              func_0x00010bd2518c();
              if (!(bool)uVar5 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_03] * 4 + 0x10bd1cba0))();
                return;
              }
            }
            goto LAB_10bd1cd6c;
          }
          func_0x00010bd24ba4();
          if ((int)lVar13 == 0) goto LAB_10bd1cd6c;
          if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *(long *)(unaff_x19 + 0x28);
          }
          unaff_x29 = *(undefined8 *)(puVar3 + -0x10);
          unaff_x30 = *(undefined8 *)(puVar3 + -8);
          plVar10 = unaff_x21;
          uVar15 = unaff_x20;
          func_0x00010bd25668();
          puVar3 = puVar3 + -0x50;
          uVar16 = unaff_x20;
        }
        func_0x00010bd250c0();
        plVar10 = (long *)(unaff_x20 + extraout_x8_01);
        unaff_x29 = *(undefined8 *)(puVar3 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar3 + -8);
        func_0x00010bd25668();
LAB_10b4bf494:
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        func_0x00010b4bf3a0();
        if (plVar10 == (long *)0x0) {
          return;
        }
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        bVar4 = *(char *)((long)plVar10 + 9) != '\0';
        bVar6 = *(char *)((long)plVar10 + 9) == '\x01';
        if (bVar6) {
          func_0x00010b4c5260((char)plVar10[1]);
          if (!bVar4 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return;
          }
        }
        else if ((*(byte *)((long)plVar10 + 10) & 1) == 0) {
          if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(plVar10 + 1) * 4) == 10) {
            if ((*(byte *)((long)plVar10 + 10) >> 4 & 1) == 0) {
              pcVar14 = *(code **)(*(long *)*plVar10 + 0x18);
            }
            else {
              pcVar14 = *(code **)(*(long *)*plVar10 + 0x88);
            }
            (*pcVar14)();
          }
          else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(plVar10 + 1) * 4) == 9) {
            func_0x000107c27fa8(*plVar10);
          }
          *(byte *)((long)plVar10 + 10) = *(byte *)((long)plVar10 + 10) & 0xf0 | 1;
        }
        return;
      }
      if ((*(byte *)(lVar13 + 1) >> 4 & 1) == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = *(undefined **)(lVar13 + 0x28);
      }
      func_0x00010bd24e40();
      FUN_10bd1f374();
      func_0x00010bd24c70();
      func_0x00010bd20e14();
      *plVar10 = param_2;
      func_0x00010bd24c70();
      goto FUN_10bd202f4;
    }
  }
  else {
    func_0x00010bd24e70(plVar10,uVar15,&UNK_10f83541a);
LAB_10bd202e0:
    func_0x00010bd2506c();
  }
  plVar10 = (long *)*puVar2;
  puVar11 = &UNK_10f83541a;
  func_0x00010bd24fb8();
FUN_10bd202f4:
  *(undefined4 *)
   (uVar15 + (uint)(*(int *)((long)plVar10 + 0x2c) +
                   (int)((*(long *)(puVar11 + 0x28) -
                         *(long *)(*(long *)(*(long *)(puVar11 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)
   ) = *(undefined4 *)(puVar11 + 4);
  return;
}



/* Entry: 10bd24530; end: 10bd2467f;  */

void FUN_10bd24530(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x21;
  undefined8 unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x00010bd25264();
  if (CONCAT44(uVar2,uVar1) == 0) {
    func_0x00010bd24db4();
    func_0x00010bd20e14();
    *(undefined8 *)CONCAT44(uVar2,uVar1) = unaff_x22;
    func_0x00010bd24db4();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (uVar1 != 0xffffffff) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24db4();
  FUN_10bd1bdd4();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(unaff_x21 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x21 + 0x28);
    }
    func_0x00010bd255e0();
  }
  func_0x00010bd24db4();
  func_0x00010bd20e14();
  *(undefined8 *)CONCAT44(uVar2,uVar1) = unaff_x22;
  func_0x00010bd24db4();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar2,uVar1) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 10bd24680; end: 10bd246a3;  */

void FUN_10bd24680(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd246a4; end: 10bd2471b;  */

long * FUN_10bd246a4(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == (long *)0x0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24b10();
      func_0x00010bd25074();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 10bd2471c; end: 10bd2473f;  */

void FUN_10bd2471c(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd24740; end: 10bd2480f;  */

long FUN_10bd24740(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint extraout_w8;
  uint uVar5;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  func_0x00010bd252a8();
  iVar4 = (int)param_1;
  uVar3 = *(uint *)(lVar2 + (long)iVar4 * 4);
  func_0x00010bd24ef0();
  if (iVar4 - 9U < 4) {
    func_0x00010bd25480();
    uVar5 = extraout_w8;
  }
  else {
    uVar5 = 0x7fffffff;
  }
  return lVar1 + (ulong)(uVar5 & uVar3);
}



/* Entry: 10bd24810; end: 10bd24857;  */

void FUN_10bd24810(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd24858; end: 10bd24893;  */

ulong * FUN_10bd24858(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 10bd24894; end: 10bd248b7;  */

void FUN_10bd24894(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd248b8; end: 10bd248f3;  */

ulong * FUN_10bd248b8(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 10bd248f4; end: 10bd24917;  */

void FUN_10bd248f4(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd24918; end: 10bd24953;  */

ulong * FUN_10bd24918(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 10bd24954; end: 10bd24977;  */

void FUN_10bd24954(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd24978; end: 10bd249b3;  */

ulong * FUN_10bd24978(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 10bd249b4; end: 10bd249d7;  */

void FUN_10bd249b4(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd249d8; end: 10bd24a13;  */

ulong * FUN_10bd249d8(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 10bd24a14; end: 10bd24a8f;  */

void FUN_10bd24a14(void)

{
  func_0x00010bd24b10();
  func_0x00010bd25074();
  return;
}



/* Entry: 10bd24a90; end: 10bd24af7;  */

void FUN_10bd24a90(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010bd24f94();
  func_0x00010bd25764();
  while (unaff_x22 < *(int *)(unaff_x20 + 0x80)) {
    FUN_10bd24a90(*(long *)(unaff_x20 + 0x48) + unaff_x21);
    func_0x00010bd25758();
  }
  FUN_10bd2b90c();
  *(long *)*unaff_x19 = *(long *)*unaff_x19 + 8;
  return;
}



/* Entry: 10bd24af8; end: 10bd257a3;  */

uint FUN_10bd24af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  if (*(int *)(param_1 + 0x44) != -1) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bd252a8(lVar1,param_3);
    return *(uint *)(lVar2 + (long)(int)lVar1 * 4) >> 0x1f;
  }
  return 0;
}



/* Entry: 10bd257a4; end: 10bd25863;  */

undefined **
FUN_10bd257a4(long param_1,undefined **param_2,long param_3,uint param_4,ushort *param_5,
             uint param_6)

{
  undefined **ppuVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_FUN_110d9d220;
  }
  else {
    uVar5 = (ulong)*param_5;
    if (uVar5 != 0) {
      *(uint *)(param_1 + uVar5) = *(uint *)(param_1 + uVar5) | param_6;
    }
    if ((param_4 != 0) && ((param_4 & 7) != 4)) {
      if ((ulong)param_5[1] == 0) {
        ppuVar3 = (undefined **)(ulong)param_4;
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          func_0x00010bd2b26c();
        }
        FUN_10bd36df8(ppuVar3,&stack0xffffffffffffffe8,param_2,param_3);
        return ppuVar3;
      }
      ppuVar4 = (undefined **)(ulong)param_4;
      ppuVar3 = (undefined **)(param_1 + (ulong)param_5[1]);
      puVar2 = (ulong *)(param_1 + 8);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      ppuVar1 = ppuVar3;
      FUN_10bd19228(ppuVar3,param_4 & 7,param_4 >> 3,*(undefined8 *)(param_5 + 0x10),param_3,
                    &uStack_80,&uStack_41);
      if (((ulong)ppuVar1 & 1) == 0) {
        if ((*puVar2 & 1) == 0) {
          func_0x00010bd2b26c(puVar2);
        }
        else {
          puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
        }
        FUN_10bd36dd4(ppuVar4,puVar2,param_2,param_3);
      }
      else {
        FUN_10bd192bc(ppuVar3,param_4 >> 3,uStack_41,&uStack_80,puVar2,param_2,param_3);
        ppuVar4 = ppuVar3;
      }
      return ppuVar4;
    }
    *(uint *)(param_3 + 0x50) = param_4 - 1;
  }
  return param_2;
}



/* Entry: 10bd25864; end: 10bd2597f;  */

undefined **
FUN_10bd25864(undefined **param_1,undefined **param_2,long param_3,uint param_4,ushort *param_5,
             uint param_6)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  undefined8 unaff_x30;
  undefined8 *puStack_168;
  undefined1 auStack_c0 [112];
  
  if (param_2 == (undefined **)0x0) {
    return &PTR_FUN_110d9d220;
  }
  uVar9 = (ulong)*param_5;
  if (uVar9 != 0) {
    *(uint *)((long)param_1 + uVar9) = *(uint *)((long)param_1 + uVar9) | param_6;
  }
  if ((param_4 == 0) || (uVar3 = (param_4 & 7) == 4, (bool)uVar3)) {
    *(uint *)(param_3 + 0x50) = param_4 - 1;
    return param_2;
  }
  ppuVar8 = param_1;
  ppuVar5 = param_2;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(param_1);
  uVar1 = param_4 >> 3;
  ppuVar4 = ppuVar8;
  FUN_10bcee2d0(ppuVar8,uVar1);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = ppuVar8;
    FUN_10bd25980(ppuVar8,uVar1);
    if ((int)ppuVar4 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      ppuVar4 = *(undefined ***)(param_3 + 0x60);
      if (ppuVar4 == (undefined **)0x0) {
        FUN_10bd20c44(ppuVar5,uVar1);
        ppuVar4 = ppuVar5;
      }
      else {
        FUN_10bcedf04(ppuVar4,ppuVar8,uVar1);
      }
    }
  }
  ppuVar8 = (undefined **)(ulong)param_4;
  func_0x00010bd3c95c();
  if (ppuVar4 == (undefined **)0x0) {
LAB_10bd382dc:
    func_0x00010bd3c96c();
    func_0x00010bd1b8b8();
    func_0x00010bd3c86c();
    if ((bool)uVar3) {
      func_0x00010bd3cb2c(ppuVar8,param_1,param_2,param_3);
      FUN_10bd36df8();
      return ppuVar8;
    }
  }
  else {
    param_4 = param_4 & 7;
    ppuVar5 = ppuVar4;
    func_0x00010787827c();
    uVar2 = *(uint *)(&UNK_10e5b4b0c + ((ulong)ppuVar5 & 0xffffffff) * 4) <= param_4;
    uVar3 = param_4 == *(uint *)(&UNK_10e5b4b0c + ((ulong)ppuVar5 & 0xffffffff) * 4);
    if (!(bool)uVar3) {
      FUN_10bcf1590();
      uVar2 = 1 < param_4;
      uVar3 = param_4 == 2;
      param_1 = ppuVar4;
      if ((!(bool)uVar3) || ((int)ppuVar4 == 0)) goto LAB_10bd382dc;
      func_0x00010bd3ce60();
      func_0x00010bd3cb20();
      ppuVar5 = ppuVar4;
      if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bd382b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10e60c17a + extraout_x8_00 * 2) * 4 + 0x10bd382b4))();
        return ppuVar4;
      }
    }
    func_0x00010bd3ce60();
    func_0x00010bd3cb20();
    if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bd38260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60c19e)[extraout_x8] * 4 + 0x10bd38264))();
      return ppuVar5;
    }
    func_0x00010bd3c86c();
    if ((bool)uVar3) {
      ppuVar8 = (undefined **)0x0;
      func_0x00010bd3cb2c(0,unaff_x30);
      return ppuVar8;
    }
  }
  ___stack_chk_fail();
  ppuVar8 = (undefined **)0x367;
  FUN_10bdb2a00(auStack_c0,&UNK_10f83683c,0x367);
  FUN_10bce4100(auStack_c0,&UNK_10f836872);
  puVar6 = auStack_c0;
  func_0x00010ae6c700();
  func_0x00010bd3cda0();
  func_0x00010bd3ca34();
  puVar7 = puVar6;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(puVar6);
  puStack_168 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(puVar7 + 0x20) + 0x53) == '\x01') {
    for (lVar10 = 0; lVar10 < *(int *)(puVar7 + 4); lVar10 = lVar10 + 1) {
      func_0x00010bd3ce84();
    }
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1d54c();
  }
  for (; puStack_168 != (undefined8 *)0x0; puStack_168 = puStack_168 + 1) {
    func_0x00010bd3c978(*puStack_168);
    FUN_10bd38cf0();
  }
  if (*(char *)(*(long *)(puVar7 + 0x20) + 0x50) == '\x01') {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd379b8();
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd377f0();
  }
  func_0x00010bd3ca28();
  return ppuVar8;
}



/* Entry: 10bd25980; end: 10bd2599b;  */

bool FUN_10bd25980(long param_1)

{
  FUN_10bcee900();
  return param_1 != 0;
}



/* Entry: 10bd2599c; end: 10bd2599f;  */

void FUN_10bd2599c(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = param_1;
  uVar5 = param_2;
  uStack_48 = param_2;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(param_1);
  if ((*(byte *)(*(long *)(uVar2 + 0x20) + 0x50) & 1) == 0) {
    do {
      uVar3 = param_3;
      func_0x000107c302ac(param_3,&uStack_48);
      if ((uVar3 & 1) != 0) {
        return;
      }
      func_0x00010bd3ce0c(uStack_48,&uStack_60);
      if (uStack_48 == 0) {
        return;
      }
      if (((uint)uStack_60 == 0) || (((uint)uStack_60 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = (uint)uStack_60 - 1;
        return;
      }
      uVar1 = (uint)uStack_60 >> 3;
      uVar3 = uVar2;
      FUN_10bcee2d0(uVar2,uVar1);
      if (uVar3 == 0) {
        uVar3 = uVar2;
        FUN_10bd25980(uVar2,uVar1);
        if ((int)uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(ulong *)(param_3 + 0x60);
          if (uVar3 == 0) {
            uVar3 = uVar5;
            FUN_10bd20c44(uVar5,uVar1);
          }
          else {
            FUN_10bcedf04(uVar3,uVar2,uVar1);
          }
        }
      }
      uVar4 = param_1;
      FUN_10bd381d8(param_1,uStack_48,param_3,uStack_60 & 0xffffffff,uVar5,uVar3);
      uStack_48 = uVar4;
    } while (uVar4 != 0);
  }
  else {
    uStack_60 = param_1;
    uStack_58 = uVar2;
    uStack_50 = uVar5;
    FUN_10bd37da4(&uStack_60,param_2,param_3);
  }
  return;
}



/* Entry: 10bd259a0; end: 10bd25abf;  */

long FUN_10bd259a0(long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uStack_4c;
  long lStack_48;
  
  uVar2 = *(ushort *)(param_5 + 2);
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  lStack_48 = param_2;
  do {
    uVar3 = param_3;
    func_0x000107c302ac(param_3,&lStack_48);
    if ((uVar3 & 1) != 0) {
      return lStack_48;
    }
    func_0x00010b4c3a44(lStack_48,&uStack_4c,0);
    if (lStack_48 == 0) {
      return 0;
    }
    if (uStack_4c == 0xb) {
      iVar1 = *(int *)(param_3 + 0x58);
      *(int *)(param_3 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) {
        return 0;
      }
      *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
      lVar4 = param_1 + (ulong)uVar2;
      FUN_10bd19bfc(lVar4,lStack_48,uVar5,param_1 + 8,param_3);
      *(ulong *)(param_3 + 0x58) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) + -1,
                    (int)*(undefined8 *)(param_3 + 0x58) + 1);
      iVar1 = *(int *)(param_3 + 0x50);
      *(undefined4 *)(param_3 + 0x50) = 0;
      if (iVar1 != 0xb) {
        return 0;
      }
    }
    else {
      if ((uStack_4c == 0) || ((uStack_4c & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uStack_4c - 1;
        return lStack_48;
      }
      lVar4 = param_1 + (ulong)uVar2;
      FUN_10bd19164();
    }
    lStack_48 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10bd25ac0; end: 10bd25aff;  */

void FUN_10bd25ac0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd2b26c();
  }
  func_0x00010bd37544();
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 0;
  *(long *)(lVar1 + -8) = (long)param_3;
  return;
}



/* Entry: 10bd25b00; end: 10bd25b53;  */

void FUN_10bd25b00(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*puVar1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  FUN_10bd36a90(puVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8)();
  return;
}



/* Entry: 10bd25b54; end: 10bd27193;  */

byte * FUN_10bd25b54(byte *param_1,long param_2,byte *param_3,undefined8 *param_4,long param_5)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  char cVar15;
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  int extraout_w8;
  int extraout_w8_00;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  byte bVar23;
  uint uVar24;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  uint extraout_w9_07;
  uint extraout_w9_08;
  uint extraout_w9_09;
  uint extraout_w9_10;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  byte *pbVar31;
  ulong *puVar32;
  long lVar33;
  ulong uVar34;
  ushort uVar35;
  byte *pbVar36;
  long lVar37;
  uint uVar38;
  byte *pbVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lStack_4f0;
  long lStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  long alStack_490 [2];
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined1 auStack_46e [6];
  long alStack_468 [125];
  undefined8 uStack_80;
  
  uVar20 = uStack_480;
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pbVar31 = param_1 + 8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  pbVar31[0] = 0;
  pbVar31[1] = 0;
  pbVar31[2] = 0;
  pbVar31[3] = 0;
  pbVar31[4] = 0;
  pbVar31[5] = 0;
  pbVar31[6] = 0;
  pbVar31[7] = 0;
  pbVar39 = param_1 + 0x38;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  pbVar39[0] = 0;
  pbVar39[1] = 0;
  pbVar39[2] = 0;
  pbVar39[3] = 0;
  pbVar39[4] = 0;
  pbVar39[5] = 0;
  pbVar39[6] = 0;
  pbVar39[7] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  lVar19 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar19 + 0x53) & 1) == 0) {
    if (param_3[1] == 1) {
      uVar24 = *(uint *)(param_2 + 4);
      uVar27 = (ulong)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU));
      lVar21 = 0x38;
      uVar25 = 0xffffffffffffffff;
      do {
        uVar34 = uVar27;
        if (uVar25 - uVar27 == -1) break;
        plVar14 = (long *)(*(long *)(param_2 + 0x38) + lVar21);
        lVar21 = lVar21 + 0x58;
        uVar34 = uVar25 + 1;
        uVar25 = uVar34;
      } while (*(char *)(*plVar14 + 0x8c) != '\x01');
      if ((long)(int)uVar24 <= (long)uVar34) {
        bVar23 = *param_3 | 0x72;
        goto LAB_10bd25c44;
      }
    }
    bVar23 = 0x74;
  }
  else {
    bVar23 = 0x75;
  }
LAB_10bd25c44:
  *param_1 = bVar23;
  if (*(char *)(lVar19 + 0x50) != '\x01') {
    lVar21 = param_5 << 5;
    lVar19 = lVar21;
    puVar13 = param_4;
    do {
      lVar29 = lVar21;
      puVar26 = param_4;
      pbVar11 = param_1;
      if (lVar19 == 0) goto LAB_10bd25d44;
      pcVar1 = (char *)((long)puVar13 + 0x12);
      puVar13 = puVar13 + 4;
      lVar19 = lVar19 + -0x20;
    } while (*pcVar1 != '\x01');
    pbVar11 = pbVar39;
    FUN_10bd278b4(pbVar39,1);
    puVar22 = *(undefined4 **)pbVar39;
    *puVar22 = 1;
    *(undefined8 *)(puVar22 + 2) = 0;
LAB_10bd25d44:
    do {
      if (lVar29 == 0) goto LAB_10bd25d88;
      pcVar1 = (char *)((long)puVar26 + 0x15);
      lVar29 = lVar29 + -0x20;
      puVar26 = puVar26 + 4;
    } while (*pcVar1 != '\x01');
    pbVar11 = pbVar39;
    FUN_10bd278b4(pbVar39,3);
    lVar19 = *(long *)pbVar39;
    *(undefined4 *)(lVar19 + 0x10) = 2;
    *(undefined8 *)(lVar19 + 0x18) = 0;
    lVar19 = *(long *)pbVar39;
    *(undefined4 *)(lVar19 + 0x20) = 3;
    *(undefined8 *)(lVar19 + 0x28) = 0;
LAB_10bd25d88:
    if (param_3[2] == 1) {
      lVar19 = 0;
      puVar13 = param_4;
      for (lVar29 = lVar21; lVar29 != 0; lVar29 = lVar29 + -0x20) {
        pbVar36 = (byte *)*puVar13;
        func_0x00010bd28094();
        if (((((int)pbVar11 == 0xb) || (func_0x00010bd28094(), (int)pbVar11 == 10)) &&
            (pbVar11 = pbVar36, func_0x00010b91c030(), ((ulong)pbVar11 & 1) == 0)) &&
           ((((*(byte *)(*(long *)(pbVar36 + 0x38) + 0x8c) & 1) == 0 &&
             (FUN_10bd279a0(pbVar36,puVar13), pbVar11 = pbVar36,
             (((uint)pbVar36 | (uint)*(byte *)((long)puVar13 + 0x13)) & 1) == 0)) &&
            (((*(byte *)((long)puVar13 + 0x14) & 1) != 0 &&
             (0.005 <= *(float *)((long)puVar13 + 0xc))))))) {
          lVar19 = lVar19 + 1;
        }
        puVar13 = puVar13 + 4;
      }
    }
    else {
      lVar19 = 0;
    }
    lVar29 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 4;
    FUN_10bd278b4(pbVar39,lVar19 + lVar29);
    lVar30 = 0;
    lStack_4f0 = lVar29;
LAB_10bd25ec8:
    if (lVar21 == lVar30) goto LAB_10bd26630;
    uVar20 = *(ulong *)((long)param_4 + lVar30);
    uVar17 = (undefined4)((ulong *)((long)param_4 + lVar30))[1];
    puVar10 = *(ulong **)(param_1 + 0x28);
    if (puVar10 < *(ulong **)(param_1 + 0x30)) {
      *puVar10 = uVar20;
      *(undefined4 *)(puVar10 + 1) = uVar17;
      *(undefined8 *)((long)puVar10 + 0xc) = 0;
      puVar32 = puVar10 + 3;
      *(undefined1 *)((long)puVar10 + 0x14) = 0;
    }
    else {
      lVar33 = *(long *)(param_1 + 0x20);
      lVar37 = (long)puVar10 - lVar33;
      uVar25 = lVar37 / 0x18 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar25) {
        FUN_10bd27e7c();
        goto LAB_10bd27084;
      }
      uVar34 = ((long)*(ulong **)(param_1 + 0x30) - lVar33) / 0x18;
      uVar27 = uVar34 * 2;
      if (uVar27 < uVar25 || uVar27 - uVar25 == 0) {
        uVar27 = uVar25;
      }
      if (0x555555555555554 < uVar34) {
        uVar27 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar27) goto LAB_10bd2702c;
      lVar12 = uVar27 * 0x18;
      __Znwm();
      puVar10 = (ulong *)(lVar12 + lVar37);
      *puVar10 = uVar20;
      *(undefined4 *)(puVar10 + 1) = uVar17;
      *(undefined8 *)((long)puVar10 + 0xc) = 0;
      *(undefined1 *)((long)puVar10 + 0x14) = 0;
      puVar32 = puVar10 + 3;
      _memcpy(puVar10 + (lVar37 / -0x18) * 3,lVar33,lVar37);
      *(ulong **)(param_1 + 0x20) = puVar10 + (lVar37 / -0x18) * 3;
      *(ulong **)(param_1 + 0x28) = puVar32;
      *(ulong *)(param_1 + 0x30) = lVar12 + uVar27 * 0x18;
      if (lVar33 != 0) {
        __ZdlPv(lVar33);
      }
    }
    *(ulong **)(param_1 + 0x28) = puVar32;
    uVar25 = uVar20;
    func_0x00010bcfd738(uVar20,*param_3);
    *(char *)((long)puVar32 + -4) = (char)uVar25;
    uVar27 = uVar25;
    if ((int)puVar32[-2] < 0) {
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) == 0) {
        uVar27 = uVar20;
        FUN_10bcddbd4();
        uVar35 = 0;
        if (uVar27 != 0) {
          uVar35 = 0x30;
        }
      }
      else {
        uVar35 = 0x20;
      }
    }
    else {
      uVar35 = 0x10;
    }
    iVar7 = (int)uVar27;
    func_0x00010bd28030();
    switch(iVar7) {
    case 1:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) == 0) {
        uVar16 = 0x18c3;
      }
      else {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x18c3;
code_r0x00010bd2631c:
        if (!bVar6) {
          uVar16 = uVar16 + 1;
        }
      }
      break;
    case 2:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1883;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x1883;
      break;
    case 3:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x10c1;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x10c1;
      break;
    case 4:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x8c1;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x8c1;
      break;
    case 5:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1081;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x1081;
      break;
    case 6:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x8c3;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x8c3;
      break;
    case 7:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x883;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x883;
      break;
    case 8:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 1;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 1;
      break;
    case 9:
      if ((int)uVar25 == 2) goto code_r0x00010bd260ac;
      if ((int)uVar25 == 1) {
        uVar16 = 0xa05;
      }
      else {
        uVar16 = 0xc05;
      }
      goto code_r0x00010bd26628;
    case 10:
      func_0x00010bd28038();
      if (*(char *)(extraout_x8 + 0x13) == '\x01') {
        uVar16 = 0x646;
      }
      else if (*(char *)(extraout_x8 + 0x14) == '\x01') {
        uVar16 = 0x446;
      }
      else {
        uVar16 = 0x246;
      }
      goto code_r0x00010bd26628;
    case 0xb:
      uVar25 = uVar20;
      func_0x00010b91c030();
      iVar7 = (int)uVar25;
      if (iVar7 != 0) {
        uVar35 = uVar35 | 7;
        goto LAB_10bd26324;
      }
      uVar25 = uVar20;
      func_0x00010bd28078();
      iVar7 = (int)uVar25;
      if (iVar7 == 0) {
        func_0x00010bd28038();
        if (*(char *)(extraout_x8_01 + 0x13) == '\x01') {
          uVar16 = 0x606;
        }
        else if (*(char *)(extraout_x8_01 + 0x14) == '\x01') {
          uVar16 = 0x406;
        }
        else {
          uVar16 = 0x206;
        }
        goto code_r0x00010bd26628;
      }
      func_0x00010bd28038();
      uVar16 = *(ushort *)(extraout_x8_00 + 0x10);
      if ((uVar16 != 0x200) && (uVar16 != 0x400)) {
        func_0x00010bd28058();
        FUN_10bdb2a88(&uStack_480);
        goto LAB_10bd26ff4;
      }
      uVar35 = uVar35 | uVar16 | 0x86;
      goto LAB_10bd26324;
    case 0xc:
code_r0x00010bd260ac:
      uVar16 = 0x805;
code_r0x00010bd26628:
      uVar35 = uVar35 | uVar16;
      goto LAB_10bd26324;
    case 0xd:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x881;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x881;
      break;
    case 0xe:
      uVar25 = uVar20;
      func_0x00010bd279e8();
      iVar7 = (int)uVar25;
      if (iVar7 == 0) {
        uVar25 = uVar20;
        FUN_10bcefa5c();
        iVar7 = (int)uVar25;
        FUN_10bd27a58();
        if (iVar7 == 0) {
          if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
            func_0x00010bd28020();
            bVar6 = iVar7 == 0;
            uVar16 = 0x1c81;
            goto code_r0x00010bd2631c;
          }
          uVar16 = 0x1c81;
        }
        else {
          if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
            func_0x00010bd28020();
            bVar6 = iVar7 == 0;
            uVar16 = 0x1e81;
            goto code_r0x00010bd2631c;
          }
          uVar16 = 0x1e81;
        }
      }
      else {
        if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
          func_0x00010bd28020();
          bVar6 = iVar7 == 0;
          uVar16 = 0x1881;
          goto code_r0x00010bd2631c;
        }
        uVar16 = 0x1881;
      }
      break;
    case 0xf:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1083;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x1083;
      break;
    case 0x10:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x10c3;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x10c3;
      break;
    case 0x11:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1281;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x1281;
      break;
    case 0x12:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00010bd28020();
        bVar6 = iVar7 == 0;
        uVar16 = 0x12c1;
        goto code_r0x00010bd2631c;
      }
      uVar16 = 0x12c1;
      break;
    default:
      goto LAB_10bd26324;
    }
    uVar35 = uVar16 | uVar35;
LAB_10bd26324:
    func_0x00010bd28030();
    if ((iVar7 == 0xc) || (func_0x00010bd28030(), iVar7 == 9)) {
      uVar25 = uVar20;
      FUN_10bd1bdfc();
      iVar7 = (int)uVar25;
      if (iVar7 == 1) {
        uVar35 = uVar35 | 0x80;
      }
      else {
        uVar35 = (*(byte *)(uVar20 + 1) & 0x20) << 3 | uVar35;
      }
    }
    func_0x00010bd28038();
    *(ushort *)((long)puVar32 + -6) = uVar35 | (*(byte *)(extraout_x8_02 + 0x15) & 1) << 3;
    func_0x00010bd28030();
    if ((iVar7 == 0xb) || (func_0x00010bd28030(), iVar7 == 10)) {
      uVar25 = uVar20;
      func_0x00010b91c030();
      if ((int)uVar25 == 0) {
        if (*(char *)(*(long *)(uVar20 + 0x38) + 0x8c) == '\x01') {
          *(undefined2 *)((long)puVar32 + -6) = 0;
        }
        else {
          uVar25 = uVar20;
          func_0x00010bd28078();
          if ((int)uVar25 == 0) {
            func_0x00010bd28038();
            if ((*(byte *)(extraout_x8_06 + 0x13) & 1) == 0) {
              uVar17 = 4;
              if (*(byte *)(extraout_x8_06 + 0x14) != 0) {
                uVar17 = 5;
              }
              if ((*(byte *)(extraout_x8_06 + 0x14) & param_3[2]) != 0) {
                func_0x00010bd28038(uVar17);
                if (0.005 <= *(float *)(extraout_x8_07 + 0xc)) {
                  puVar22 = (undefined4 *)(*(long *)pbVar39 + lStack_4f0 * 0x10);
                  *puVar22 = 5;
                  *(ulong *)(puVar22 + 2) = uVar20;
                  *(short *)(puVar32 + -1) = (short)lStack_4f0;
                  lStack_4f0 = lStack_4f0 + 1;
                  goto LAB_10bd2661c;
                }
                uVar17 = 5;
              }
            }
            else {
              uVar17 = 6;
            }
            *(short *)(puVar32 + -1) =
                 (short)((uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)) >> 4);
            func_0x00010bd28104(uVar17);
            func_0x00010bd27fe4();
          }
          else if (param_3[1] == 1) {
            func_0x00010bd27ff0();
            func_0x00010bd28104(4);
            func_0x00010bd27fe4();
            func_0x00010bd28038();
            if (*(short *)(extraout_x8_05 + 0x10) == 0x200) {
              func_0x00010bd28104(7);
              func_0x00010bd27fe4();
            }
            else {
              uStack_480 = uStack_480 & 0xffffffff00000000;
              uStack_478 = 0;
              func_0x00010bd27fe4();
            }
          }
          else {
            *(undefined2 *)(puVar32 + -1) = 0xffff;
          }
        }
      }
      else {
        func_0x00010bd27ff0();
        func_0x00010bd28104(0xc);
        func_0x00010bd27fe4();
        if (param_3[1] == 1) {
          FUN_10bcee28c();
          if (*(char *)(*(long *)(uVar20 + 0x20) + 0x53) == '\x01') {
            uVar20 = *(long *)(uVar20 + 0x38) + 0x58;
          }
          else {
            uVar20 = 0;
          }
          uVar25 = uVar20;
          FUN_10bcee28c();
          if (uVar25 == 0) {
            func_0x00010bd280fc();
            if (((int)uVar25 == 0xe) && (uVar25 = uVar20, func_0x00010bcfd6b8(), (uVar25 & 1) == 0))
            {
              uStack_480 = CONCAT44(uStack_480._4_4_,10);
              uStack_478 = uVar20;
              func_0x00010bd27fe4();
            }
          }
          else {
            uStack_480 = CONCAT44(uStack_480._4_4_,0xd);
            uStack_478 = 0;
            func_0x00010bd27fe4();
            *(ulong *)(*(long *)(param_1 + 0x40) + -8) = uVar25;
          }
        }
      }
    }
    else {
      func_0x00010bd28030();
      if (iVar7 == 0xe) {
        uVar25 = uVar20;
        func_0x00010bd279e8();
        iVar7 = (int)uVar25;
        if ((uVar25 & 1) == 0) {
          func_0x00010bd27ff0();
          uStack_480 = uStack_480 & 0xffffffff00000000;
          uStack_478 = 0;
          func_0x00010bd27fe4();
          lVar33 = *(long *)(param_1 + 0x40);
          uVar25 = uVar20;
          FUN_10bcefa5c();
          iVar7 = (int)uVar25;
          FUN_10bd27a58();
          if (iVar7 == 0) {
            *(undefined4 *)(lVar33 + -0x10) = 10;
            *(ulong *)(lVar33 + -8) = uVar20;
          }
          else {
            *(undefined4 *)(lVar33 + -0x10) = 9;
          }
          goto LAB_10bd2661c;
        }
      }
      func_0x00010bd28030();
      if (((iVar7 == 9) || (func_0x00010bd28030(), iVar7 == 0xc)) &&
         (func_0x00010bd28038(), *(char *)(extraout_x8_03 + 0x12) == '\x01')) {
        if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
          func_0x00010bd28044();
          func_0x00010bd280e8(&uStack_480);
          goto LAB_10bd26ff4;
        }
        func_0x00010bd28038();
        uVar17 = *(undefined4 *)(extraout_x8_04 + 0x18);
        func_0x00010bd27ff0();
        uStack_480 = CONCAT44(uStack_480._4_4_,0xb);
        uStack_478 = 0;
        func_0x00010bd27fe4();
        *(undefined4 *)(*(long *)(param_1 + 0x40) + -8) = uVar17;
        *(undefined4 *)((long)puVar32 + -0xc) = uVar17;
      }
    }
LAB_10bd2661c:
    lVar30 = lVar30 + 0x20;
    goto LAB_10bd25ec8;
  }
  uVar5 = param_3[1] == 1;
  if ((bool)uVar5) {
    uStack_480 = CONCAT71(uStack_480._1_7_,'p' - *param_3);
    lVar19 = uStack_480;
    uStack_480._6_2_ = SUB82(uVar20,6);
    uStack_480._0_6_ = (uint6)(ushort)lVar19;
    alStack_468[0] = CONCAT44(alStack_468[0]._4_4_,2);
    lVar19 = param_2;
    func_0x00010bd2809c();
    uStack_480 = CONCAT44(uStack_480._4_4_,8);
    uStack_478 = 0;
    uVar20 = *(ulong *)(param_1 + 0x48);
    puVar10 = *(ulong **)(param_1 + 0x38);
    if (uVar20 - (long)puVar10 < 0x10) {
      if (puVar10 != (ulong *)0x0) {
        *(ulong **)(param_1 + 0x40) = puVar10;
        __ZdlPv();
        uVar20 = 0;
        pbVar39[0] = 0;
        pbVar39[1] = 0;
        pbVar39[2] = 0;
        pbVar39[3] = 0;
        pbVar39[4] = 0;
        pbVar39[5] = 0;
        pbVar39[6] = 0;
        pbVar39[7] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        param_1[0x4e] = 0;
        param_1[0x4f] = 0;
      }
      uVar25 = (long)uVar20 >> 3;
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      uVar5 = uVar20 == 0x7ffffffffffffff0;
      if (0x7fffffffffffffef < uVar20) {
        uVar25 = 0xfffffffffffffff;
      }
      if (uVar25 >> 0x3c != 0) {
        func_0x00010bd27d34();
        goto LAB_10bd27084;
      }
      FUN_10bd27d40();
      *(ulong *)(param_1 + 0x38) = uVar25;
      *(ulong *)(param_1 + 0x40) = uVar25;
      *(ulong *)(param_1 + 0x48) = uVar25 + lVar19 * 0x10;
      func_0x00010bd280d4();
    }
    else {
      uVar20 = (long)*(ulong **)(param_1 + 0x40) - (long)puVar10;
      uVar5 = uVar20 == 0xf;
      if (uVar20 < 0x10) {
        uVar5 = *(ulong **)(param_1 + 0x40) == puVar10;
        if (!(bool)uVar5) {
          func_0x00010bd280e0(puVar10,&uStack_480);
        }
        func_0x00010bd280d4();
      }
      else {
        puVar10[1] = 0;
        *puVar10 = uStack_480;
        *(ulong **)(param_1 + 0x40) = puVar10 + 2;
      }
    }
  }
  else {
    uStack_478 = 0;
    uStack_480 = 0x71;
    alStack_468[0] = 2;
    uStack_470 = 0;
    func_0x00010bd2809c();
  }
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  FUN_10bd27268(&uStack_480,param_4,param_5);
  FUN_10bd2762c(param_1 + 0x50,&uStack_480);
  func_0x00010bd234e0(&uStack_478);
  func_0x00010bd28124();
  FUN_10bd27698(&uStack_480,param_2);
  func_0x000107c3194c(param_1 + 0x70,&uStack_480);
  plVar14 = &uStack_480;
LAB_10bd26f98:
  func_0x000107c27914(plVar14);
  func_0x00010bd28138(uStack_80);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10bd27040:
  func_0x00010bd28058();
  FUN_10bdb2a88(&uStack_480);
LAB_10bd26ff4:
  func_0x00010ae6c700(&uStack_480);
LAB_10bd26ffc:
  func_0x00010bd28044();
  func_0x00010bd280e8(&lStack_4b0);
  goto LAB_10bd2700c;
LAB_10bd26630:
  uStack_480 = lStack_4f0 - lVar29;
  puVar13 = &uStack_480;
  lStack_4b0 = lVar19;
  func_0x00010b4d1b28(puVar13,&lStack_4b0,&UNK_10f835b48);
  if (puVar13 != (undefined8 *)0x0) goto LAB_10bd27040;
  lVar19 = *(long *)(param_2 + 0x18);
  if (lVar19 != 0) {
    lVar29 = 4;
    lVar30 = 0;
    for (lVar21 = 0; lVar21 < *(int *)(lVar19 + 4); lVar21 = lVar21 + 1) {
      lVar37 = *(long *)(lVar19 + 0x38);
      lVar33 = lVar37 + lVar29 + -4;
      func_0x00010bd280fc();
      if (((int)lVar30 == 10) && (FUN_10bcee28c(), lVar30 = lVar33, lVar33 == param_2)) {
        uVar38 = *(uint *)(lVar37 + lVar29);
        uVar24 = (uVar38 & 0x1fffffe0) << 3;
        uVar38 = (uVar38 & 0x1f) << 3 | 4;
        iVar7 = 1;
        goto LAB_10bd26718;
      }
      lVar29 = lVar29 + 0x58;
    }
  }
  uVar38 = 0;
  iVar7 = 0;
  uVar24 = 0;
LAB_10bd26718:
  lVar19 = 0x18;
  do {
    *(undefined4 *)((long)&uStack_480 + lVar19) = 0;
    lVar19 = lVar19 + 0x20;
  } while (lVar19 != 0x418);
  if (iVar7 == 0) {
    uVar20 = 1L << ((ulong)(uint)-(int)LZCOUNT(param_5) & 0x3f);
    if (0x1f < uVar20) {
      uVar20 = 0x20;
    }
  }
  else {
    uVar20 = 0x20;
  }
  uVar28 = (int)uVar20 - 1;
  if ((CONCAT44(iVar7,uVar24) & 0xffffffffffffc000) == 0x100000000) {
    uVar24 = uVar24 | uVar38;
    uVar38 = uVar24;
    if ((uVar24 & 0x3f80) != 0) {
      uVar38 = uVar24 + (uVar24 & 0x3f80) + 0x80;
    }
    uVar8 = uVar28 & uVar38 >> 3;
    uVar25 = (ulong)uVar8;
    uVar5 = 0x6d;
    if (0x7f < uVar24) {
      uVar5 = 0x6e;
    }
    *(undefined4 *)(alStack_468 + uVar25 * 4) = 2;
    *(undefined1 *)(&uStack_480 + uVar25 * 4) = uVar5;
    *(short *)((long)&uStack_480 + uVar25 * 0x20 + 2) = (short)uVar38;
    *(short *)((long)&uStack_480 + uVar25 * 0x20 + 4) = (short)uVar24;
    uVar24 = 1 << (ulong)(uVar8 & 0x1f);
  }
  else {
    uVar24 = 0;
  }
  lVar19 = 0x14;
  puVar13 = param_4;
  for (uVar25 = 0; lVar21 = *(long *)(param_1 + 0x20),
      uVar25 < (ulong)((*(long *)(param_1 + 0x28) - lVar21) / 0x18); uVar25 = uVar25 + 1) {
    lVar29 = lVar21 + lVar19;
    uVar34 = *(ulong *)(lVar29 + -0x14);
    uVar27 = uVar34;
    func_0x00010b91c030();
    if (((((uVar27 & 1) != 0) || (uVar27 = uVar34, FUN_10bcddbd4(), uVar27 != 0)) ||
        ((*(byte *)(*(long *)(uVar34 + 0x38) + 0x8c) & 1) != 0)) ||
       ((((*(byte *)((long)puVar13 + 0x13) & 1) != 0 || ((*(byte *)((long)puVar13 + 0x15) & 1) != 0)
         ) || ((uVar27 = uVar34, func_0x00010bd28078(), (int)uVar27 != 0 && ((param_3[1] & 1) == 0))
              )))) goto LAB_10bd26818;
    uVar27 = uVar34;
    func_0x00010bd28078();
    uVar8 = (uint)uVar27;
    uVar38 = 0;
    if (*(short *)(puVar13 + 2) == 0x400) {
      uVar38 = uVar8;
    }
    if ((uVar38 & 1) != 0) goto LAB_10bd26818;
    uVar38 = (uint)*(ushort *)(lVar21 + lVar19 + -4);
    func_0x00010bd280fc();
    if (uVar8 == 9) {
LAB_10bd268a0:
      iVar7 = *(int *)(*(long *)(uVar34 + 0x38) + 0x80);
      if ((iVar7 != 0) && ((iVar7 != 1 || ((*(byte *)(uVar34 + 1) >> 5 & 1) != 0))))
      goto LAB_10bd26818;
      bVar6 = true;
      func_0x00010bd280c8();
      if (bVar6) {
        if ((*(byte *)(uVar34 + 1) >> 5 & 1) != 0) goto LAB_10bd26ffc;
        uVar38 = *(uint *)(lVar21 + lVar19 + -8);
      }
    }
    else if (uVar8 == 0xe) {
      if (((param_3[1] & 1) == 0) &&
         (uVar27 = uVar34, func_0x00010bd27f68(uVar34,&lStack_4b0), (int)uVar27 == 0))
      goto LAB_10bd26818;
    }
    else if (uVar8 == 0xc) goto LAB_10bd268a0;
    if (((0x1f < *(int *)(lVar21 + lVar19 + -0xc)) || (0xff < (int)uVar38)) ||
       (0x7ff < *(int *)(uVar34 + 4))) goto LAB_10bd26818;
    uVar34 = *(ulong *)(lVar29 + -0x14);
    iVar7 = *(int *)(uVar34 + 4);
    uVar27 = uVar34;
    FUN_10bcf1560();
    iVar9 = (int)uVar27;
    if ((uVar27 & 1) == 0) {
      uVar27 = uVar34;
      func_0x00010787827c();
      iVar9 = (int)uVar27;
      uVar38 = *(uint *)(&UNK_10e5b4b0c + (uVar27 & 0xffffffff) * 4);
    }
    else {
      uVar38 = 2;
    }
    uVar38 = uVar38 | iVar7 << 3;
    if ((uVar38 & 0xffffff80) != 0) {
      uVar38 = uVar38 + (uVar38 & 0xffffff80) + 0x80;
    }
    uVar8 = uVar28 & uVar38 >> 3;
    uVar27 = (ulong)uVar8;
    if (((int)alStack_468[uVar27 * 4] == 2) ||
       (((int)alStack_468[uVar27 * 4] == 1 &&
        (*(float *)((long)puVar13 + 0xc) <= *(float *)((long)alStack_468 + (uVar27 * 8 + -1) * 4))))
       ) goto LAB_10bd26818;
    uStack_4a8 = 0;
    lStack_4b0 = 0;
    pbVar39 = *(byte **)(lVar29 + -0x14);
    uStack_4a0 = (ulong)*(byte *)(lVar21 + lVar19 + -4) << 0x18;
    func_0x00010bd28094();
    bVar6 = iVar9 == 0xc;
    if (bVar6) {
      func_0x00010bd280c8();
      if (bVar6) {
LAB_10bd269e0:
        if ((pbVar39[1] >> 5 & 1) != 0) goto LAB_10bd27014;
        uStack_4a0._0_4_ =
             CONCAT13((char)*(undefined4 *)(lVar21 + lVar19 + -8),(undefined3)uStack_4a0);
      }
    }
    else {
      func_0x00010bd28094();
      if ((iVar9 == 9) && ((*(byte *)((long)puVar13 + 0x12) & 1) != 0)) goto LAB_10bd269e0;
    }
    func_0x00010bd28094();
    iVar7 = iVar9 + -1;
    cVar3 = SBORROW4(iVar7,0x11);
    cVar4 = iVar9 + -0x12 < 0;
    uVar5 = iVar7 == 0x11;
    switch(iVar7) {
    case 0:
    case 5:
    case 0xf:
      func_0x00010bd28028();
      if (iVar9 == 0) {
        func_0x00010bd27fd4();
        if ((extraout_w9 >> 5 & 1) == 0) {
          cVar15 = '%';
        }
        else {
          cVar15 = '\'';
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = ')';
      }
      break;
    case 1:
    case 6:
    case 0xe:
      func_0x00010bd28028();
      if (iVar9 == 0) {
        func_0x00010bd27fd4();
        if ((extraout_w9_00 >> 5 & 1) == 0) {
          cVar15 = '\x1f';
        }
        else {
          cVar15 = '!';
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = '#';
      }
      break;
    case 2:
    case 3:
      func_0x00010bd28028();
      if (iVar9 == 0) {
        func_0x00010bd27fd4();
        if ((extraout_w9_03 >> 5 & 1) == 0) {
          cVar15 = '\r';
        }
        else {
          cVar15 = '\x0f';
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = '\x11';
      }
      break;
    case 4:
    case 0xc:
      func_0x00010bd28028();
      goto code_r0x00010bd26a48;
    case 7:
      func_0x00010bd28028();
      if (iVar9 == 0) {
        func_0x00010bd27fd4();
        if ((extraout_w9_07 >> 5 & 1) == 0) {
          cVar15 = '\x01';
        }
        else {
          cVar15 = '\x03';
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = '\x05';
      }
      break;
    case 8:
      uVar18 = (uint)*(byte *)(lVar21 + lVar19);
      cVar3 = SBORROW4(uVar18,2);
      cVar4 = (int)(uVar18 - 2) < 0;
      uVar5 = true;
      if (uVar18 == 2) goto code_r0x00010bd26af4;
      uVar18 = (uint)*(byte *)(lVar21 + lVar19);
      cVar3 = SBORROW4(uVar18,1);
      cVar4 = (int)(uVar18 - 1) < 0;
      bVar6 = uVar18 == 1;
      if (bVar6) {
        func_0x00010bd280ac();
        if (bVar6) {
          func_0x00010bd28014();
          cVar15 = 'W';
        }
        else {
          func_0x00010bd280c8();
          if (bVar6) {
            func_0x00010bd28014();
            cVar15 = 'Q';
          }
          else {
            func_0x00010bd27fd4();
            if ((extraout_w9_09 >> 5 & 1) == 0) {
              cVar15 = 'G';
            }
            else {
              cVar15 = 'I';
            }
          }
        }
      }
      else {
        if (uVar18 != 0) goto LAB_10bd270a8;
        func_0x00010bd280ac();
        if (bVar6) {
          func_0x00010bd28014();
          cVar15 = 'Y';
        }
        else {
          func_0x00010bd280c8();
          if (bVar6) {
            func_0x00010bd28014();
            cVar15 = 'S';
          }
          else {
            func_0x00010bd27fd4();
            if ((extraout_w9_10 >> 5 & 1) == 0) {
              cVar15 = 'K';
            }
            else {
              cVar15 = 'M';
            }
          }
        }
      }
      break;
    case 9:
      func_0x00010bd28110();
      if ((bool)uVar5) {
        cVar3 = SBORROW4(extraout_w8,0x10);
        cVar4 = extraout_w8 + -0x10 < 0;
        if ((extraout_w9_02 >> 5 & 1) == 0) {
          cVar15 = '_';
        }
        else {
          cVar15 = 'a';
        }
      }
      else {
        cVar3 = SBORROW4(extraout_w8,0x10);
        cVar4 = extraout_w8 + -0x10 < 0;
        if ((extraout_w9_02 >> 5 & 1) == 0) {
          cVar15 = '[';
        }
        else {
          cVar15 = ']';
        }
      }
      break;
    case 10:
      func_0x00010bd28078();
      if ((int)pbVar39 == 0) {
        func_0x00010bd28110();
        if ((bool)uVar5) {
          cVar3 = SBORROW4(extraout_w8_00,0x10);
          cVar4 = extraout_w8_00 + -0x10 < 0;
          if ((extraout_w9_05 >> 5 & 1) == 0) {
            cVar15 = 'g';
          }
          else {
            cVar15 = 'i';
          }
        }
        else {
          cVar3 = SBORROW4(extraout_w8_00,0x10);
          cVar4 = extraout_w8_00 + -0x10 < 0;
          if ((extraout_w9_05 >> 5 & 1) == 0) {
            cVar15 = 'c';
          }
          else {
            cVar15 = 'e';
          }
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = 'k';
      }
      break;
    case 0xb:
code_r0x00010bd26af4:
      func_0x00010bd280ac();
      if ((bool)uVar5) {
        func_0x00010bd28014();
        cVar15 = 'U';
      }
      else {
        func_0x00010bd280c8();
        if ((bool)uVar5) {
          func_0x00010bd28014();
          cVar15 = 'O';
        }
        else {
          func_0x00010bd27fd4();
          if ((extraout_w9_08 >> 5 & 1) == 0) {
            cVar15 = 'C';
          }
          else {
            cVar15 = 'E';
          }
        }
      }
      break;
    case 0xd:
      pbVar11 = pbVar39;
      func_0x00010bd279e8();
      iVar9 = (int)pbVar11;
      if (iVar9 == 0) {
        func_0x00010bd27f68(pbVar39,(long)&uStack_4a0 + 3);
        pbVar31 = pbVar39;
        func_0x00010bd28028();
                    /* WARNING: Could not recover jumptable at 0x00010bd26c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b904)[(ulong)pbVar39 & 0xffffffff] * 4 + 0x10bd26c04))();
        return pbVar31;
      }
      func_0x00010bd28028();
code_r0x00010bd26a48:
      if (iVar9 == 0) {
        func_0x00010bd27fd4();
        if ((extraout_w9_01 >> 5 & 1) == 0) {
          cVar15 = '\a';
        }
        else {
          cVar15 = '\t';
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = '\v';
      }
      break;
    case 0x10:
      func_0x00010bd28028();
      if (iVar9 == 0) {
        func_0x00010bd27fd4();
        if ((extraout_w9_04 >> 5 & 1) == 0) {
          cVar15 = '\x13';
        }
        else {
          cVar15 = '\x15';
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = '\x17';
      }
      break;
    case 0x11:
      func_0x00010bd28028();
      if (iVar9 == 0) {
        func_0x00010bd27fd4();
        if ((extraout_w9_06 >> 5 & 1) == 0) {
          cVar15 = '\x19';
        }
        else {
          cVar15 = '\x1b';
        }
      }
      else {
        func_0x00010bd28014();
        cVar15 = '\x1d';
      }
      break;
    default:
LAB_10bd270a8:
      func_0x00010bd28058();
      FUN_10bdb2a88(alStack_490);
      goto LAB_10bd27024;
    }
    if (cVar4 == cVar3) {
      cVar15 = cVar15 + '\x01';
    }
    lStack_4b0 = CONCAT71(lStack_4b0._1_7_,cVar15);
    fVar40 = *(float *)((long)puVar13 + 0xc);
    uStack_4a0 = CONCAT44(fVar40,(undefined4)uStack_4a0);
    (&uStack_478)[uVar27 * 4] = uStack_4a8;
    (&uStack_480)[uVar27 * 4] = lStack_4b0;
    *(undefined4 *)(alStack_468 + uVar27 * 4) = 1;
    (&uStack_478)[uVar27 * 4] = uVar34;
    alStack_468[uVar27 * 4 + -1] = uStack_4a0;
    *(short *)(alStack_468 + uVar27 * 4 + -1) = (short)uVar38;
    uVar38 = *(uint *)(lVar21 + lVar19 + -0xc);
    if (0x7fffffff < uVar38) {
      uVar38 = 0x3f;
    }
    *(char *)((long)alStack_468 + uVar27 * 0x20 + -6) = (char)uVar38;
    uVar24 = (uint)(0.05 <= fVar40) << (ulong)(uVar8 & 0x1f) | uVar24;
LAB_10bd26818:
    lVar19 = lVar19 + 0x18;
    puVar13 = puVar13 + 4;
  }
  while (1 < uVar20) {
    uVar25 = uVar20 >> 1;
    uVar38 = uVar24 >> (ulong)((uint)uVar25 & 0x1f);
    if ((uVar38 & uVar24) != 0) break;
    uVar28 = 0;
    puVar13 = &uStack_480;
    for (lVar19 = 0; uVar25 * 0x20 - lVar19 != 0; lVar19 = lVar19 + 0x20) {
      if ((uVar24 >> (ulong)(uVar28 & 0x1f) & 1) == 0) {
        puVar26 = puVar13 + uVar25 * 4;
        uVar41 = *puVar26;
        uVar43 = puVar26[3];
        uVar42 = puVar26[2];
        puVar13[1] = puVar26[1];
        *puVar13 = uVar41;
        puVar13[3] = uVar43;
        puVar13[2] = uVar42;
      }
      uVar28 = uVar28 + 1;
      puVar13 = puVar13 + 4;
    }
    uVar24 = uVar38 | uVar24;
    uVar20 = uVar25;
  }
  uVar25 = uVar20 * 0x20;
  lVar19 = *(long *)(param_1 + 8);
  uVar5 = uVar25 - (*(long *)(param_1 + 0x18) - lVar19) == 0;
  if (uVar25 < (ulong)(*(long *)(param_1 + 0x18) - lVar19) || (bool)uVar5) {
    lVar21 = *(long *)(param_1 + 0x10);
    uVar27 = lVar21 - lVar19;
    lVar29 = uVar25 - uVar27;
    uVar5 = lVar29 == 0;
    if (uVar25 < uVar27 || (bool)uVar5) {
      if (uVar20 != 0) {
        func_0x00010bd280e0(lVar19,&uStack_480);
      }
      lVar21 = lVar19 + uVar25;
    }
    else {
      uVar5 = lVar21 == lVar19;
      if (!(bool)uVar5) {
        _memcpy(lVar19,&uStack_480,uVar27);
        lVar21 = *(long *)(param_1 + 0x10);
      }
      _memcpy(lVar21,(long)&uStack_480 + uVar27,lVar29);
      lVar21 = lVar21 + lVar29;
    }
  }
  else {
    FUN_10bd27c18(pbVar31);
    pbVar39 = pbVar31;
    FUN_10bd27c88(pbVar31,uVar20);
    func_0x00010bd27c4c(pbVar31,pbVar39);
    lVar21 = *(long *)(param_1 + 0x10);
    func_0x00010bd280e0(lVar21,&uStack_480);
    lVar21 = lVar21 + uVar25;
  }
  *(long *)(param_1 + 0x10) = lVar21;
  *(int *)(param_1 + 0x88) = 0x3f - (int)LZCOUNT(uVar20);
  FUN_10bd27268(&lStack_4b0,param_4,param_5);
  FUN_10bd2762c(param_1 + 0x50,&lStack_4b0);
  func_0x00010bd234e0(&uStack_4a8);
  lStack_4b0 = (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) / 0x18;
  plVar14 = &lStack_4b0;
  alStack_490[0] = param_5;
  func_0x00010b4d1b28(plVar14,alStack_490,&UNK_10f835b8c);
  if (plVar14 == (long *)0x0) {
    func_0x00010bd28124();
    FUN_10bd27698(&lStack_4b0);
    func_0x000107c3194c(param_1 + 0x70,&lStack_4b0);
    plVar14 = &lStack_4b0;
    goto LAB_10bd26f98;
  }
  func_0x00010bd28058();
  FUN_10bdb2a88(&lStack_4b0);
LAB_10bd2700c:
  func_0x00010ae6c700(&lStack_4b0);
LAB_10bd27014:
  func_0x00010bd28044();
  func_0x00010bd280e8(alStack_490);
LAB_10bd27024:
  func_0x00010ae6c700(alStack_490);
LAB_10bd2702c:
  func_0x000104bd35f4();
LAB_10bd27084:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10bd27088);
  (*pcVar2)();
}



/* Entry: 10bd27194; end: 10bd27267;  */

void FUN_10bd27194(long *param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bd280bc();
  uVar2 = param_3 * 0x20;
  lVar1 = *param_1;
  if (uVar2 < (ulong)(param_1[2] - lVar1) || uVar2 - (param_1[2] - lVar1) == 0) {
    uVar3 = *(long *)(unaff_x19 + 8) - lVar1;
    if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
      if (param_3 != 0) {
        _memmove(lVar1);
      }
      *(ulong *)(unaff_x19 + 8) = lVar1 + uVar2;
      return;
    }
    if (*(long *)(unaff_x19 + 8) != lVar1) {
      _memmove(lVar1);
    }
  }
  else {
    FUN_10bd27c18();
    FUN_10bd27c88();
    func_0x00010bd27c4c();
  }
  FUN_10bd27bf8();
  return;
}



/* Entry: 10bd27268; end: 10bd2762b;  */

void FUN_10bd27268(int *param_1,long param_2,ushort param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ushort uVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  uint auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar20 = 0;
  piVar12 = param_1 + 2;
  piVar12[0] = 0;
  piVar12[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar11 = -1;
  while( true ) {
    if (uVar20 == param_3) {
      *param_1 = iVar11;
      return;
    }
    iVar2 = *(int *)(*(long *)(param_2 + (ulong)uVar20 * 0x20) + 4);
    if (0x20 < iVar2) break;
    iVar11 = (-1 << (ulong)(iVar2 - 1U & 0x1f)) + iVar11;
    uVar20 = uVar20 + 1;
  }
  puVar23 = (uint *)0x0;
  uVar13 = 0;
  puVar17 = (uint *)0x0;
  *param_1 = iVar11;
  bVar5 = true;
  do {
    if (uVar20 == param_3) {
      return;
    }
    uVar3 = *(uint *)(*(long *)(param_2 + (ulong)uVar20 * 0x20) + 4);
    if (uVar3 <= uVar13) {
      func_0x00010ae6a960(uVar3,uVar13,&UNK_10f835bba);
      func_0x00010bd28058();
      FUN_10bdb2a88(auStack_80);
      func_0x00010ae6c700(auStack_80);
LAB_10bd275cc:
      func_0x00010bd27dac();
      goto LAB_10bd275f0;
    }
    if (bVar5 || 0x60 < uVar3 - uVar13) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      auStack_80[0] = uVar3;
      if (puVar23 < *(uint **)(param_1 + 6)) {
        *puVar23 = uVar3;
        puVar23[4] = 0;
        puVar23[5] = 0;
        puVar23[6] = 0;
        puVar23[7] = 0;
        puVar23[2] = 0;
        puVar23[3] = 0;
        puVar23[4] = 0;
        puVar23[5] = 0;
        puVar23[2] = 0;
        puVar23[3] = 0;
        puVar23[6] = 0;
        puVar23[7] = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        puVar23 = puVar23 + 8;
      }
      else {
        puVar17 = *(uint **)piVar12;
        lVar18 = (long)puVar23 - (long)puVar17 >> 5;
        uVar22 = lVar18 + 1;
        if (uVar22 >> 0x3b != 0) {
          func_0x00010bd27da0();
LAB_10bd275f0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10bd275f4);
          (*pcVar6)();
        }
        uVar9 = (long)*(uint **)(param_1 + 6) - (long)puVar17;
        uVar21 = (long)uVar9 >> 4;
        if (uVar21 <= uVar22) {
          uVar21 = uVar22;
        }
        if (0x7fffffffffffffdf < uVar9) {
          uVar21 = 0x7ffffffffffffff;
        }
        if (uVar21 == 0) {
          lVar19 = 0;
        }
        else {
          if (uVar21 >> 0x3b != 0) {
            func_0x000104bd35f4();
            goto LAB_10bd275f0;
          }
          lVar19 = uVar21 << 5;
          __Znwm();
        }
        puVar1 = (uint *)(lVar19 + ((long)puVar23 - (long)puVar17));
        *puVar1 = uVar3;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        puVar7 = puVar1 + lVar18 * -8;
        for (puVar15 = puVar17; puVar16 = puVar17, puVar15 != puVar23; puVar15 = puVar15 + 8) {
          FUN_10bd27d74(puVar7,puVar15);
          puVar7 = puVar7 + 8;
        }
        for (; puVar16 != puVar23; puVar16 = puVar16 + 8) {
          FUN_10bd23588(puVar16 + 2);
        }
        puVar23 = puVar1 + 8;
        *(uint **)(param_1 + 2) = puVar1 + lVar18 * -8;
        *(ulong *)(param_1 + 6) = lVar19 + uVar21 * 0x20;
        if (puVar17 != (uint *)0x0) {
          __ZdlPv(puVar17);
        }
      }
      *(uint **)(param_1 + 4) = puVar23;
      FUN_10bd23588(&uStack_78);
      puVar17 = puVar23 + -8;
    }
    uVar22 = (ulong)(uVar3 - *puVar17 >> 4);
    uVar13 = uVar3 - *puVar17 & 0xf;
    uVar4 = (uint)uVar20 << 0x10 | 0xffff;
    puVar15 = *(uint **)(puVar17 + 4);
    while( true ) {
      lVar18 = *(long *)(puVar17 + 2);
      lVar19 = (long)puVar15 - lVar18;
      uVar21 = lVar19 >> 2;
      if (uVar22 < uVar21) break;
      if (puVar15 < *(uint **)(puVar17 + 6)) {
        puVar7 = puVar15 + 1;
        *puVar15 = uVar4;
      }
      else {
        uVar9 = uVar21 + 1;
        if (uVar9 >> 0x3e != 0) goto LAB_10bd275cc;
        uVar10 = (long)*(uint **)(puVar17 + 6) - lVar18;
        uVar14 = (long)uVar10 >> 1;
        if (uVar14 <= uVar9) {
          uVar14 = uVar9;
        }
        if (0x7ffffffffffffffb < uVar10) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 >> 0x3e != 0) {
          func_0x000104bd35f4();
          goto LAB_10bd275f0;
        }
        lVar8 = uVar14 << 2;
        __Znwm();
        puVar15 = (uint *)(lVar8 + lVar19);
        puVar7 = puVar15 + 1;
        *puVar15 = uVar4;
        _memcpy(puVar15 + -uVar21,lVar18,lVar19);
        *(uint **)(puVar17 + 2) = puVar15 + -uVar21;
        *(uint **)(puVar17 + 4) = puVar7;
        *(ulong *)(puVar17 + 6) = lVar8 + uVar14 * 4;
        if (lVar18 != 0) {
          __ZdlPv(lVar18);
        }
      }
      *(uint **)(puVar17 + 4) = puVar7;
      puVar15 = puVar7;
    }
    bVar5 = false;
    lVar19 = uVar22 * 4;
    *(short *)(lVar18 + lVar19) = *(short *)(lVar18 + lVar19) + (short)(-1 << (ulong)uVar13);
    uVar13 = uVar3 - uVar13;
    uVar20 = uVar20 + 1;
  } while( true );
}


