/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108909f40; end: 108909fe3;  */

undefined8 * FUN_108909f40(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010890af0c();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_FUN_110a910a0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010890add0();
  }
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = unaff_x20;
  FUN_10890a95c(puVar1 + 2,unaff_x19 + 0x10);
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[6] = *(undefined8 *)(unaff_x19 + 0x30);
  return puVar1;
}



/* Entry: 108909fe4; end: 10890a06b;  */

undefined8 * FUN_108909fe4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010890af0c();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_DAT_110a90f10;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010890add0();
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  puVar1[2] = lVar2;
  lVar2 = unaff_x19 + 0x18;
  func_0x000107c2809c();
  puVar1[3] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return puVar1;
}



/* Entry: 10890a06c; end: 10890a5a3;  */

void FUN_10890a06c(undefined8 param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar19;
  undefined8 unaff_x30;
  
  puVar5 = param_3;
  func_0x000107c34994();
LAB_10890a094:
  puVar6 = unaff_x20 + -2;
  puVar7 = unaff_x19;
LAB_10890a0a4:
  unaff_x19 = puVar7;
  uVar19 = (long)unaff_x20 - (long)unaff_x19 >> 4;
  switch(uVar19) {
  case 0:
  case 1:
    goto LAB_10890a590;
  case 2:
    if (unaff_x20[-2] < *unaff_x19) {
      func_0x00010890afd4();
    }
    goto LAB_10890a590;
  case 3:
    puVar5 = unaff_x19 + 2;
    func_0x00010890b020();
    uVar8 = *puVar5;
    uVar19 = *unaff_x19;
    uVar10 = *puVar6;
    if (uVar8 < uVar19) {
      if (uVar10 < uVar8) {
        uVar8 = unaff_x19[1];
        uVar13 = puVar6[1];
        *unaff_x19 = uVar10;
        unaff_x19[1] = uVar13;
        *puVar6 = uVar19;
        puVar6[1] = uVar8;
        return;
      }
      uVar10 = unaff_x19[1];
      uVar13 = puVar5[1];
      *unaff_x19 = uVar8;
      unaff_x19[1] = uVar13;
      *puVar5 = uVar19;
      puVar5[1] = uVar10;
      if (*puVar6 < uVar19) {
        uVar8 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar8;
        *puVar6 = uVar19;
        puVar6[1] = uVar10;
      }
    }
    else if (uVar10 < uVar8) {
      *puVar5 = uVar10;
      *puVar6 = uVar8;
      uVar19 = *puVar5;
      uVar8 = puVar5[1];
      puVar5[1] = puVar6[1];
      puVar6[1] = uVar8;
      uVar8 = *unaff_x19;
      if (uVar19 < uVar8) {
        uVar10 = unaff_x19[1];
        uVar13 = puVar5[1];
        *unaff_x19 = uVar19;
        unaff_x19[1] = uVar13;
        *puVar5 = uVar8;
        puVar5[1] = uVar10;
        return;
      }
    }
    return;
  case 4:
    func_0x00010890afc8();
    func_0x00010890b020(unaff_x19);
    func_0x00010890af0c();
    FUN_10890a5a4();
    bVar2 = *puVar5 <= *puVar6;
    if (((!bVar2) && (func_0x00010890ae2c(), !bVar2)) && (func_0x00010890ae50(), !bVar2)) {
      func_0x00010890afb4();
    }
    return;
  case 5:
    func_0x00010890afc8();
    puVar7 = unaff_x19 + 6;
    func_0x00010890b020(unaff_x19);
    func_0x00010890af0c();
    FUN_10890a640();
    uVar19 = *puVar7;
    if (*puVar6 < uVar19) {
      *puVar7 = *puVar6;
      *puVar6 = uVar19;
      uVar19 = *puVar7;
      uVar8 = puVar7[1];
      puVar7[1] = puVar6[1];
      puVar6[1] = uVar8;
      bVar2 = *puVar5 <= uVar19;
      if (((!bVar2) && (func_0x00010890ae2c(), !bVar2)) && (func_0x00010890ae50(), !bVar2)) {
        func_0x00010890afb4();
      }
    }
    return;
  }
  if ((long)uVar19 < 0x18) {
    if ((param_4 & 1) == 0) {
      if (unaff_x19 != unaff_x20) {
        puVar5 = unaff_x19 + 3;
        while (unaff_x19 + 2 != unaff_x20) {
          uVar19 = unaff_x19[2];
          uVar8 = *unaff_x19;
          if (uVar19 < uVar8) {
            uVar10 = unaff_x19[3];
            puVar7 = puVar5;
            do {
              puVar6 = puVar7;
              puVar6[-1] = uVar8;
              *puVar6 = puVar6[-2];
              uVar8 = puVar6[-5];
              puVar7 = puVar6 + -2;
            } while (uVar19 < uVar8);
            puVar6[-3] = uVar19;
            puVar6[-2] = uVar10;
          }
          puVar5 = puVar5 + 2;
          unaff_x19 = unaff_x19 + 2;
        }
      }
      goto LAB_10890a590;
    }
    if (unaff_x19 == unaff_x20) goto LAB_10890a590;
    lVar11 = 0;
    puVar5 = unaff_x19;
    goto LAB_10890a3a4;
  }
  if (param_3 != (ulong *)0x0) {
    puVar7 = unaff_x19 + (uVar19 & 0xfffffffffffffffe);
    if (uVar19 < 0x81) {
      func_0x00010890afa0(puVar7,unaff_x19);
    }
    else {
      func_0x00010890afa0(unaff_x19,puVar7);
      FUN_10890a5a4(unaff_x19 + 2,puVar7 + -2,unaff_x20 + -4);
      FUN_10890a5a4(unaff_x19 + 4,puVar7 + 2,unaff_x20 + -6);
      puVar5 = puVar7 + 2;
      FUN_10890a5a4(puVar7 + -2,puVar7);
      uVar19 = *unaff_x19;
      uVar8 = unaff_x19[1];
      uVar10 = puVar7[1];
      *unaff_x19 = *puVar7;
      unaff_x19[1] = uVar10;
      *puVar7 = uVar19;
      puVar7[1] = uVar8;
    }
    param_3 = (ulong *)((long)param_3 + -1);
    uVar19 = *unaff_x19;
    if (((param_4 & 1) != 0) || (unaff_x19[-2] < uVar19)) {
      lVar11 = 0;
      uVar8 = unaff_x19[1];
      do {
        uVar10 = *(ulong *)((long)unaff_x19 + lVar11 + 0x10);
        lVar11 = lVar11 + 0x10;
      } while (uVar10 < uVar19);
      puVar3 = (ulong *)((long)unaff_x19 + lVar11);
      puVar9 = unaff_x20;
      puVar7 = puVar3;
      if (lVar11 == 0x10) {
        do {
          puVar4 = puVar9;
          if (puVar9 <= puVar3) break;
          puVar9 = puVar9 + -2;
          puVar4 = puVar9;
        } while (uVar19 <= *puVar9);
      }
      else {
        do {
          puVar9 = puVar9 + -2;
          puVar4 = puVar9;
        } while (uVar19 <= *puVar9);
      }
      while (puVar7 < puVar9) {
        uVar14 = puVar7[1];
        uVar13 = puVar9[1];
        *puVar7 = *puVar9;
        puVar7[1] = uVar13;
        *puVar9 = uVar10;
        puVar9[1] = uVar14;
        do {
          puVar7 = puVar7 + 2;
          uVar10 = *puVar7;
        } while (uVar10 < uVar19);
        do {
          puVar9 = puVar9 + -2;
        } while (uVar19 <= *puVar9);
      }
      puVar9 = puVar7 + -2;
      if (unaff_x19 != puVar9) {
        uVar10 = puVar7[-1];
        *unaff_x19 = puVar7[-2];
        unaff_x19[1] = uVar10;
      }
      puVar7[-2] = uVar19;
      puVar7[-1] = uVar8;
      if (puVar4 <= puVar3) {
        puVar3 = unaff_x19;
        FUN_10890a704(unaff_x19,puVar9);
        puVar4 = puVar7;
        FUN_10890a704(puVar7,unaff_x20);
        if ((int)puVar4 != 0) goto LAB_10890a2f0;
        if (((ulong)puVar3 & 1) != 0) goto LAB_10890a0a4;
      }
      puVar5 = param_3;
      FUN_10890a06c(unaff_x19,puVar9,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_10890a0a4;
    }
    puVar7 = unaff_x19;
    if (uVar19 < *puVar6) {
      do {
        puVar7 = puVar7 + 2;
      } while (*puVar7 <= uVar19);
    }
    else {
      do {
        puVar7 = puVar7 + 2;
        if (unaff_x20 <= puVar7) break;
      } while (*puVar7 <= uVar19);
    }
    puVar3 = unaff_x20;
    if (puVar7 < unaff_x20) {
      do {
        puVar3 = puVar3 + -2;
      } while (uVar19 < *puVar3);
    }
    uVar8 = unaff_x19[1];
    while (puVar7 < puVar3) {
      uVar10 = *puVar7;
      uVar13 = puVar7[1];
      uVar14 = puVar3[1];
      *puVar7 = *puVar3;
      puVar7[1] = uVar14;
      *puVar3 = uVar10;
      puVar3[1] = uVar13;
      do {
        puVar7 = puVar7 + 2;
      } while (*puVar7 <= uVar19);
      do {
        puVar3 = puVar3 + -2;
      } while (uVar19 < *puVar3);
    }
    if (unaff_x19 != puVar7 + -2) {
      uVar10 = puVar7[-1];
      *unaff_x19 = puVar7[-2];
      unaff_x19[1] = uVar10;
    }
    param_4 = 0;
    puVar7[-2] = uVar19;
    puVar7[-1] = uVar8;
    goto LAB_10890a0a4;
  }
  if (unaff_x19 == unaff_x20) goto LAB_10890a590;
  uVar8 = uVar19 - 2 >> 1;
  puVar5 = unaff_x19 + uVar8 * 2;
  do {
    FUN_10890a850(unaff_x19,uVar19,puVar5);
    uVar8 = uVar8 - 1;
    puVar5 = puVar5 + -2;
  } while (-1 < (long)uVar8);
  do {
    if ((long)uVar19 < 2) goto LAB_10890a590;
    uVar13 = 0;
    uVar8 = *unaff_x19;
    uVar10 = unaff_x19[1];
    puVar5 = unaff_x19;
    do {
      puVar7 = puVar5 + uVar13 * 2 + 2;
      uVar15 = uVar13 << 1 | 1;
      uVar14 = uVar13 * 2 + 2;
      if ((long)uVar14 < (long)uVar19) {
        uVar16 = puVar5[uVar13 * 2 + 4];
        uVar18 = puVar5[uVar13 * 2 + 2];
        uVar17 = uVar18;
        if (uVar18 <= uVar16) {
          uVar17 = uVar16;
        }
        puVar6 = puVar5 + uVar13 * 2 + 4;
        uVar13 = uVar14;
        if (uVar16 <= uVar18) {
          puVar6 = puVar7;
          uVar13 = uVar15;
        }
      }
      else {
        uVar17 = *puVar7;
        puVar6 = puVar7;
        uVar13 = uVar15;
      }
      uVar14 = puVar6[1];
      *puVar5 = uVar17;
      puVar5[1] = uVar14;
      puVar5 = puVar6;
    } while ((long)uVar13 <= (long)(uVar19 - 2 >> 1));
    if (puVar6 == unaff_x20 + -2) {
      *puVar6 = uVar8;
      puVar6[1] = uVar10;
    }
    else {
      uVar13 = unaff_x20[-1];
      *puVar6 = unaff_x20[-2];
      puVar6[1] = uVar13;
      unaff_x20[-2] = uVar8;
      unaff_x20[-1] = uVar10;
      lVar11 = (long)puVar6 + (0x10 - (long)unaff_x19) >> 4;
      if (1 < lVar11) {
        uVar8 = lVar11 - 2U >> 1;
        uVar13 = unaff_x19[uVar8 * 2];
        uVar10 = *puVar6;
        if (uVar13 < uVar10) {
          uVar14 = puVar6[1];
          puVar5 = unaff_x19 + uVar8 * 2;
          do {
            puVar7 = puVar5;
            uVar15 = puVar7[1];
            *puVar6 = uVar13;
            puVar6[1] = uVar15;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1 >> 1;
            uVar13 = unaff_x19[uVar8 * 2];
            puVar6 = puVar7;
            puVar5 = unaff_x19 + uVar8 * 2;
          } while (uVar13 < uVar10);
          *puVar7 = uVar10;
          puVar7[1] = uVar14;
        }
      }
    }
    uVar19 = uVar19 - 1;
    unaff_x20 = unaff_x20 + -2;
  } while( true );
LAB_10890a3a4:
  if (puVar5 + 2 == unaff_x20) {
LAB_10890a590:
    func_0x00010890b020(unaff_x30);
    return;
  }
  uVar19 = puVar5[2];
  uVar8 = *puVar5;
  if (uVar19 < uVar8) {
    uVar10 = puVar5[3];
    lVar1 = lVar11;
    do {
      lVar12 = lVar1;
      *(ulong *)((long)unaff_x19 + lVar12 + 0x10) = uVar8;
      *(undefined8 *)((long)unaff_x19 + lVar12 + 0x18) =
           *(undefined8 *)((long)unaff_x19 + lVar12 + 8);
      puVar7 = unaff_x19;
      if (lVar12 == 0) goto LAB_10890a3f8;
      uVar8 = *(ulong *)((long)unaff_x19 + lVar12 + -0x10);
      lVar1 = lVar12 + -0x10;
    } while (uVar19 < uVar8);
    puVar7 = (ulong *)((long)unaff_x19 + lVar12);
LAB_10890a3f8:
    *puVar7 = uVar19;
    puVar7[1] = uVar10;
  }
  lVar11 = lVar11 + 0x10;
  puVar5 = puVar5 + 2;
  goto LAB_10890a3a4;
LAB_10890a2f0:
  unaff_x20 = puVar9;
  if (((ulong)puVar3 & 1) != 0) goto LAB_10890a590;
  goto LAB_10890a094;
}



/* Entry: 10890a5a4; end: 10890a63f;  */

void FUN_10890a5a4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  uVar3 = *param_3;
  if (uVar2 < uVar1) {
    if (uVar3 < uVar2) {
      uVar2 = param_1[1];
      uVar4 = param_3[1];
      *param_1 = uVar3;
      param_1[1] = uVar4;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      return;
    }
    uVar3 = param_1[1];
    uVar4 = param_2[1];
    *param_1 = uVar2;
    param_1[1] = uVar4;
    *param_2 = uVar1;
    param_2[1] = uVar3;
    if (*param_3 < uVar1) {
      uVar2 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar2;
      *param_3 = uVar1;
      param_3[1] = uVar3;
    }
  }
  else if (uVar3 < uVar2) {
    *param_2 = uVar3;
    *param_3 = uVar2;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar2;
    uVar2 = *param_1;
    if (uVar1 < uVar2) {
      uVar3 = param_1[1];
      uVar4 = param_2[1];
      *param_1 = uVar1;
      param_1[1] = uVar4;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      return;
    }
  }
  return;
}



/* Entry: 10890a640; end: 10890a68b;  */

void FUN_10890a640(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  
  func_0x00010890af0c();
  FUN_10890a5a4();
  bVar1 = *param_3 <= *param_4;
  if (((!bVar1) && (func_0x00010890ae2c(), !bVar1)) && (func_0x00010890ae50(), !bVar1)) {
    func_0x00010890afb4();
  }
  return;
}



/* Entry: 10890a68c; end: 10890a703;  */

void FUN_10890a68c(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,
                  ulong *param_5)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  
  func_0x00010890af0c();
  FUN_10890a640();
  uVar3 = *param_4;
  if (*param_5 < uVar3) {
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar3 = *param_4;
    uVar1 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = uVar1;
    bVar2 = *param_3 <= uVar3;
    if (((!bVar2) && (func_0x00010890ae2c(), !bVar2)) && (func_0x00010890ae50(), !bVar2)) {
      func_0x00010890afb4();
    }
  }
  return;
}



/* Entry: 10890a704; end: 10890a84f;  */

void FUN_10890a704(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar10;
  
  func_0x000107c34994();
  switch(param_2 - param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (unaff_x20[-2] < *unaff_x19) {
      func_0x00010890afd4();
    }
    break;
  case 3:
    FUN_10890a5a4();
    break;
  case 4:
    func_0x00010890afc8(1);
    FUN_10890a640();
    break;
  case 5:
    func_0x00010890afc8(1);
    FUN_10890a68c();
    break;
  default:
    func_0x00010890afa0();
    lVar2 = 0;
    iVar3 = 0;
    puVar8 = unaff_x19 + 6;
    puVar10 = unaff_x19 + 4;
    while (puVar4 = puVar8, puVar4 != unaff_x20) {
      uVar5 = *puVar4;
      uVar7 = *puVar10;
      if (uVar5 < uVar7) {
        uVar6 = puVar4[1];
        lVar1 = lVar2;
        do {
          lVar9 = lVar1;
          *(ulong *)((long)unaff_x19 + lVar9 + 0x30) = uVar7;
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x38) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x28);
          puVar8 = unaff_x19;
          if (lVar9 == -0x20) goto LAB_10890a7fc;
          uVar7 = *(ulong *)((long)unaff_x19 + lVar9 + 0x10);
          lVar1 = lVar9 + -0x10;
        } while (uVar5 < uVar7);
        puVar8 = (ulong *)((long)unaff_x19 + lVar9 + 0x20);
LAB_10890a7fc:
        *puVar8 = uVar5;
        puVar8[1] = uVar6;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return;
        }
      }
      lVar2 = lVar2 + 0x10;
      puVar10 = puVar4;
      puVar8 = puVar4 + 2;
    }
  }
  return;
}



/* Entry: 10890a850; end: 10890a91f;  */

void FUN_10890a850(long param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (1 < param_2) {
    uVar2 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 4 <= (long)uVar2) {
      lVar6 = (long)param_3 - param_1 >> 3;
      uVar7 = lVar6 + 1;
      puVar3 = (ulong *)(param_1 + uVar7 * 0x10);
      uVar5 = lVar6 + 2;
      if ((long)uVar5 < param_2) {
        uVar8 = *puVar3;
        uVar9 = puVar3[2];
        uVar11 = uVar8;
        if (uVar8 <= uVar9) {
          uVar11 = uVar9;
        }
        puVar4 = puVar3 + 2;
        if (uVar9 <= uVar8) {
          puVar4 = puVar3;
          uVar5 = uVar7;
        }
      }
      else {
        uVar11 = *puVar3;
        puVar4 = puVar3;
        uVar5 = uVar7;
      }
      uVar7 = *param_3;
      if (uVar7 <= uVar11) {
        uVar8 = param_3[1];
        do {
          puVar3 = puVar4;
          uVar9 = puVar3[1];
          *param_3 = uVar11;
          param_3[1] = uVar9;
          if ((long)uVar2 < (long)uVar5) break;
          uVar9 = uVar5 << 1 | 1;
          puVar1 = (ulong *)(param_1 + uVar9 * 0x10);
          uVar5 = uVar5 * 2 + 2;
          if ((long)uVar5 < param_2) {
            uVar10 = *puVar1;
            uVar12 = puVar1[2];
            uVar11 = uVar10;
            if (uVar10 <= uVar12) {
              uVar11 = uVar12;
            }
            puVar4 = puVar1 + 2;
            if (uVar12 <= uVar10) {
              puVar4 = puVar1;
              uVar5 = uVar9;
            }
          }
          else {
            uVar11 = *puVar1;
            puVar4 = puVar1;
            uVar5 = uVar9;
          }
          param_3 = puVar3;
        } while (uVar7 <= uVar11);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
      }
    }
  }
  return;
}



/* Entry: 10890a920; end: 10890a95b;  */

void FUN_10890a920(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010890af30();
  uVar3 = *param_2;
  pbVar2 = (byte *)(ulong)(uint)((int)param_1 << 3);
  func_0x000107c280a8(pbVar2,uVar1);
  for (; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *pbVar2 = (byte)uVar3 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar3;
  return;
}



/* Entry: 10890a95c; end: 10890aa47;  */

void FUN_10890a95c(int ****param_1,int ****param_2)

{
  int ***pppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ***pppiVar4;
  int ***apppiStack_58 [3];
  
  ppppiVar2 = apppiStack_58;
  func_0x00010564c19c();
  while (pppiVar1 = apppiStack_58[0], (int ****)apppiStack_58[0] != (int ****)0x0) {
    func_0x00010890aea8();
    if (ppppiVar2 == (int ****)0x0) {
      ppppiVar3 = (int ****)(ulong)(*(int *)param_1 + 1);
      ppppiVar2 = param_1;
      FUN_10890aad4(param_1,ppppiVar3);
      if ((int)ppppiVar2 != 0) {
        func_0x00010890aea8();
        param_2 = ppppiVar3;
      }
      ppppiVar2 = param_1;
      func_0x000107c27d64(param_1,0x30);
      pppiVar4 = param_1[3];
      ppppiVar2[1] = (int ***)pppiVar1[1];
      ppppiVar2[2] = (int ***)&PTR_FUN_110a90fb0;
      ppppiVar2[3] = pppiVar4;
      ppppiVar2[4] = (int ***)&DAT_11383d918;
      ppppiVar2[5] = (int ***)0x0;
      FUN_10890ab64(param_1,param_2,ppppiVar2);
      *(int *)param_1 = *(int *)param_1 + 1;
    }
    if ((int ****)pppiVar1 != ppppiVar2) {
      FUN_108909774(ppppiVar2 + 2);
      param_2 = (int ****)(pppiVar1 + 2);
      FUN_108909894(ppppiVar2 + 2);
    }
    ppppiVar2 = apppiStack_58;
    func_0x000107c27d54();
  }
  return;
}



/* Entry: 10890aa48; end: 10890aad3;  */

void FUN_10890aa48(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = param_1;
  func_0x0001053aba88();
  puVar2 = *(ulong **)(*(long *)(param_1 + 0x10) + (uVar1 & 0xffffffff) * 8);
  if ((puVar2 == (ulong *)0x0) || (((ulong)puVar2 & 1) != 0)) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b4cf928(param_1,uVar1 & 0xffffffff,0,param_2,param_3);
    }
  }
  else {
    do {
      if (puVar2[1] == param_2) {
        return;
      }
      puVar2 = (ulong *)*puVar2;
    } while (puVar2 != (ulong *)0x0);
  }
  return;
}



/* Entry: 10890aad4; end: 10890ab63;  */

undefined8 FUN_10890aad4(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = ((ulong)uVar1 & 0xfffffffe) - ((ulong)(uVar1 >> 2) & 0x3ffffffc);
  if (uVar3 < param_2) {
    if (-1 < (int)uVar1) {
      uVar2 = uVar1 << 1;
LAB_10890ab4c:
      FUN_10890abf8(param_1,uVar2);
      return 1;
    }
  }
  else if (2 < uVar1 && param_2 <= uVar3 >> 2) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
    } while ((param_2 * 5 >> 2) + 1 << (uVar4 & 0x3f) < uVar3);
    uVar2 = uVar1 >> (ulong)((uint)uVar4 & 0x1f);
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if (uVar2 != uVar1) goto LAB_10890ab4c;
  }
  return 0;
}



/* Entry: 10890ab64; end: 10890abf7;  */

void FUN_10890ab64(ulong param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_60;
  ulong uStack_58;
  undefined8 *puStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar4 = *(ulong *)(lVar2 + (param_2 & 0xffffffff) * 8);
  if (uVar4 == 0) {
    *param_3 = 0;
    *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8) = param_3;
    uVar1 = (uint)param_2;
    if (*(uint *)(param_1 + 0xc) <= (uint)param_2) {
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  else {
    if (((uVar4 & 1) != 0) ||
       (uVar4 = param_1, func_0x0001053abc1c(param_1,param_2), (uVar4 & 1) != 0)) {
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
      uVar4 = uVar5;
      puStack_48 = param_3;
      if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
        uVar4 = param_1;
        func_0x00010b4cf740(param_1,uVar5,FUN_10890ad10);
        *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = uVar4;
      }
      FUN_10890ad10();
      func_0x00010b4d122c(&lStack_60);
      if (lStack_60 != **(long **)(uVar4 - 1) || (uStack_58 & 0xffffffff) != 0) {
        func_0x00010b4cf5a8(lStack_60,uStack_58);
        func_0x00010b4d1160();
        **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
      }
      func_0x00010b4cf834(lStack_60,uStack_58,1);
      if (*(long *)(uVar4 + 0xf) == lStack_60 &&
          (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar4 + 0xf) + 10)) {
        uVar3 = 0;
      }
      else {
        func_0x00010b4d1160();
        uVar3 = *(undefined8 *)(extraout_x8_00 + 0x20);
      }
      *puStack_48 = uVar3;
      return;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *param_3 = *(undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 8);
    *(undefined8 **)(lVar2 + (param_2 & 0xffffffff) * 8) = param_3;
  }
  return;
}



/* Entry: 10890abf8; end: 10890accf;  */

void FUN_10890abf8(long param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar8 = (ulong)*(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 4) = 2;
    lVar7 = param_1;
    func_0x000107c27d6c(param_1,2);
    *(long *)(param_1 + 0x10) = lVar7;
    lVar7 = param_1;
    func_0x000104c610b8();
    *(int *)(param_1 + 8) = (int)lVar7;
    return;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = param_2;
  lVar7 = param_1;
  func_0x000107c27d6c();
  *(long *)(param_1 + 0x10) = lVar7;
  uVar1 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  for (uVar10 = (ulong)uVar1; uVar10 < uVar8; uVar10 = uVar10 + 1) {
    uVar5 = puVar9[uVar10];
    if ((uVar5 == 0) || ((uVar5 & 1) != 0)) {
      if ((uVar5 & 1) != 0) {
        func_0x00010b4cf860(param_1,uVar5 - 1,FUN_10890ad10);
      }
    }
    else {
      FUN_10890acd0(param_1);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar3[1] == (undefined *)*extraout_x8) {
      lVar7 = (uVar8 & 0xffffffff) * 8;
      puVar4 = ppuVar3[2];
      uVar10 = 0x3b - LZCOUNT(lVar7);
      bVar2 = puVar4[0x50];
      if (uVar10 < bVar2) {
        lVar7 = *(long *)(puVar4 + 0x58);
        *puVar9 = *(undefined8 *)(lVar7 + uVar10 * 8);
        *(undefined8 **)(lVar7 + uVar10 * 8) = puVar9;
      }
      else {
        if (bVar2 == 0) {
          lVar6 = 0;
        }
        else {
          _memmove(puVar9,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
          lVar6 = (ulong)(byte)puVar4[0x50] << 3;
        }
        uVar8 = uVar8 & 0xffffffff;
        if (0 < lVar7 - lVar6) {
          _bzero((long)puVar9 + lVar6);
        }
        *(undefined8 **)(puVar4 + 0x58) = puVar9;
        if (0x3f < uVar8) {
          uVar8 = 0x40;
        }
        puVar4[0x50] = (char)uVar8;
      }
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar9);
  return;
}



/* Entry: 10890acd0; end: 10890ad0f;  */

void FUN_10890acd0(void)

{
  long *unaff_x20;
  
  func_0x000107c34994();
  do {
    unaff_x20 = (long *)*unaff_x20;
    func_0x0001053aba88();
    FUN_10890ab64();
  } while (unaff_x20 != (long *)0x0);
  return;
}



/* Entry: 10890ad10; end: 10890b037;  */

undefined1  [16] FUN_10890ad10(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(param_1 + 8);
  return auVar1 << 0x40;
}



/* Entry: 10890b038; end: 10890b063;  */

undefined8 FUN_10890b038(undefined8 param_1)

{
  func_0x000107c349c4();
  FUN_10890b064(param_1);
  return param_1;
}



/* Entry: 10890b064; end: 10890b077;  */

void FUN_10890b064(long param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(uint *)(param_1 + 0x24) < 6 &&
        (1 << (ulong)(*(uint *)(param_1 + 0x24) & 0x1f) & 0x26U) != 0) {
      func_0x0001089128c0();
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  return;
}



/* Entry: 10890b078; end: 10890b08b;  */

void FUN_10890b078(void)

{
  FUN_10890b038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890b08c; end: 10890b0cb;  */

void FUN_10890b08c(long param_1)

{
  if (*(uint *)(param_1 + 0x24) < 6 && (1 << (ulong)(*(uint *)(param_1 + 0x24) & 0x1f) & 0x26U) != 0
     ) {
    func_0x0001089128c0();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10890b0cc; end: 10890b0d7;  */

undefined ** FUN_10890b0cc(void)

{
  return &PTR_DAT_110a922b0;
}



/* Entry: 10890b0d8; end: 10890b10f;  */

void FUN_10890b0d8(long param_1)

{
  ulong *puVar1;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10890b08c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10890b110; end: 10890b263;  */

long * FUN_10890b110(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  int iVar6;
  
  plVar4 = param_3;
  func_0x000107c34a04();
  if (*(int *)((long)param_1 + 0x24) == 2) {
    plVar4 = (long *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)plVar4 + 0x17);
    plVar1 = plVar4;
    if (lVar3 < 0) {
      lVar3 = plVar4[1];
      plVar1 = (long *)*plVar4;
    }
    func_0x000107c303d4(plVar1,lVar3,1,&UNK_10f4ec331);
    uVar2 = 2;
  }
  else {
    if (*(int *)((long)param_1 + 0x24) != 1) goto LAB_10890b194;
    plVar4 = (long *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    uVar2 = 1;
  }
  param_1 = param_3;
  func_0x000107c280a0(param_3,uVar2);
  unaff_x21 = param_1;
LAB_10890b194:
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    func_0x000108912ad0();
    func_0x000108912aa4();
    func_0x00010891256c();
    unaff_x21 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x000108912ad0();
    unaff_x21 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x0001089125d8();
  }
  plVar1 = unaff_x21;
  if (*(int *)(unaff_x20 + 0x24) == 5) {
    plVar4 = (long *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)plVar4 + 0x17);
    plVar1 = plVar4;
    if (lVar3 < 0) {
      lVar3 = plVar4[1];
      plVar1 = (long *)*plVar4;
    }
    func_0x000107c303d4(plVar1,lVar3,1,&UNK_10f4ec374);
    plVar1 = param_3;
    func_0x000107c280a0(param_3,5,plVar4,unaff_x21);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
    if ((long)plVar4 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)plVar4) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar5 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar6;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar5);
    }
    _memcpy(plVar1,lVar3,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)plVar4);
  }
  return plVar1;
}



/* Entry: 10890b264; end: 10890b2e3;  */

void FUN_10890b264(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000108912750();
  iVar1 = *(int *)(lVar2 + 0x24);
  if ((iVar1 == 5) || (iVar1 == 2)) {
    func_0x000107c282a0(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  }
  else {
    if (iVar1 != 1) goto LAB_10890b2bc;
    func_0x000107c28098(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  }
  func_0x0001089127e0();
LAB_10890b2bc:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000108912b78();
  }
  func_0x000108912b04();
  return;
}



/* Entry: 10890b2e4; end: 10890b2e7;  */

void FUN_10890b2e4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x14) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10890b08c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (((iVar1 == 5) || (iVar1 == 2)) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 3;
      func_0x000107c30248();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b2e8; end: 10890b3af;  */

void FUN_10890b2e8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x14) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10890b08c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (((iVar1 == 5) || (iVar1 == 2)) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 3;
      func_0x000107c30248();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b3b0; end: 10890b427;  */

void FUN_10890b3b0(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c349e0();
  FUN_10890b0d8();
  func_0x000108912854();
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x14) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10890b08c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if (((iVar1 == 5) || (iVar1 == 2)) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 3;
      func_0x000107c30248();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b428; end: 10890b437;  */

long FUN_10890b428(long param_1)

{
  func_0x000100690ae4();
  func_0x000100690f84(param_1 + 0x10);
  return param_1;
}



/* Entry: 10890b438; end: 10890b46b;  */

void FUN_10890b438(long param_1)

{
  ulong *puVar1;
  
  FUN_108904f28(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10890b46c; end: 10890b4d7;  */

long * FUN_10890b46c(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  func_0x000108912874();
  while (unaff_w22 != unaff_w21) {
    func_0x0001089124ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001089125f4();
    func_0x0001089128e0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10890b4d8; end: 10890b527;  */

void FUN_10890b4d8(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000108912488();
  while (unaff_x22 != 0) {
    func_0x000108903050(*unaff_x21);
    func_0x000108912990();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108912b78();
  }
  func_0x000108912a40();
  return;
}



/* Entry: 10890b528; end: 10890b557;  */

void FUN_10890b528(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c349e0();
  FUN_10890b438();
  func_0x000108912854();
  func_0x00010068f8c8();
  func_0x00010068f90c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c349b4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b558; end: 10890b573;  */

undefined1  [16] FUN_10890b558(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  func_0x000108912a14();
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar5;
}



/* Entry: 10890b574; end: 10890b587;  */

void FUN_10890b574(void)

{
  func_0x000107c2a4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890b588; end: 10890b5a7;  */

undefined ** FUN_10890b588(void)

{
  return &PTR_DAT_110a92360;
}



/* Entry: 10890b5a8; end: 10890b60b;  */

long * FUN_10890b5a8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((char)param_1[2] == '\x01') {
    func_0x000108912508();
    func_0x0001089127f8();
    func_0x0001089125d8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108912728();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10890b60c; end: 10890b63b;  */

long FUN_10890b60c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10890b63c; end: 10890b683;  */

void FUN_10890b63c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107c349e8();
  func_0x000107c34a08(&PTR_FUN_110a920e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912534();
  }
  FUN_108911158(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 10890b684; end: 10890b6af;  */

long FUN_10890b684(long param_1)

{
  func_0x000107c349c4();
  FUN_108911178(param_1 + 0x10);
  return param_1;
}



/* Entry: 10890b6b0; end: 10890b6b3;  */

long FUN_10890b6b0(long param_1)

{
  func_0x000107c349c4();
  FUN_108911178(param_1 + 0x10);
  return param_1;
}



/* Entry: 10890b6b4; end: 10890b6c7;  */

void FUN_10890b6b4(void)

{
  FUN_10890b684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890b6c8; end: 10890b6d3;  */

undefined ** FUN_10890b6c8(void)

{
  return &PTR_DAT_110a923b0;
}



/* Entry: 10890b6d4; end: 10890b713;  */

void FUN_10890b6d4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10890b714; end: 10890b77f;  */

long * FUN_10890b714(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  func_0x000108912874();
  while (unaff_w22 != unaff_w21) {
    func_0x0001089124ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001089125f4();
    func_0x0001089128e0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10890b780; end: 10890b7cf;  */

void FUN_10890b780(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000108912488();
  while (unaff_x22 != 0) {
    FUN_10890b7d0(*unaff_x21);
    func_0x000108912990();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108912b78();
  }
  func_0x000108912a40();
  return;
}



/* Entry: 10890b7d0; end: 10890b7eb;  */

long FUN_10890b7d0(long param_1)

{
  long extraout_x8;
  
  FUN_10890d9bc();
  FUN_108912460();
  return param_1 + extraout_x8;
}



/* Entry: 10890b7ec; end: 10890b7ef;  */

void FUN_10890b7ec(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000107c349b8();
  FUN_10890b820();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912658();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b7f0; end: 10890b81f;  */

void FUN_10890b7f0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000107c349b8();
  FUN_10890b820();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912658();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b820; end: 10890b82f;  */

void FUN_10890b820(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10890b830; end: 10890b85f;  */

void FUN_10890b830(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c349e0();
  FUN_10890b6d4();
  func_0x000108912854();
  func_0x000107c349b8();
  FUN_10890b820();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912658();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b860; end: 10890b863;  */

undefined8 FUN_10890b860(undefined8 param_1)

{
  func_0x000100690ae4();
  func_0x000100690dd0(param_1);
  return param_1;
}



/* Entry: 10890b864; end: 10890b877;  */

void FUN_10890b864(void)

{
  func_0x000107c2a4e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890b878; end: 10890b893;  */

undefined8 FUN_10890b878(undefined8 param_1)

{
  func_0x000100690ae4();
  return param_1;
}



/* Entry: 10890b894; end: 10890b9bb;  */

void FUN_10890b894(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c2a4e0();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10890b9bc; end: 10890b9bf;  */

void FUN_10890b9bc(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000108912a4c();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x000107c2a4e0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912b40();
        func_0x000107c2a4e8();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x000107c2a548();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912b4c();
        func_0x00010890baf8();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x0001089116e8();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x00010890bdb0();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x0001089117e8();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x00010890be7c();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x00010891185c();
      break;
    default:
      goto LAB_10890badc;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10890badc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890b9c0; end: 10890bf07;  */

void FUN_10890b9c0(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000108912a4c();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x000107c2a4e0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912b40();
        func_0x000107c2a4e8();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x000107c2a548();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x000108912b4c();
        func_0x00010890baf8();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x0001089116e8();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x00010890bdb0();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x0001089117e8();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x000108912524();
        func_0x00010890be7c();
        goto LAB_10890badc;
      }
      func_0x000108912774();
      func_0x00010891185c();
      break;
    default:
      goto LAB_10890badc;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_10890badc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890bf08; end: 10890bf3b;  */

long FUN_10890bf08(long param_1)

{
  func_0x000107c349c4();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10890bf3c; end: 10890bf3f;  */

long FUN_10890bf3c(long param_1)

{
  func_0x000107c349c4();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10890bf40; end: 10890bf53;  */

void FUN_10890bf40(void)

{
  FUN_10890bf08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890bf54; end: 10890bf5f;  */

undefined ** FUN_10890bf54(void)

{
  return &PTR_DAT_110a92458;
}



/* Entry: 10890bf60; end: 10890bf9b;  */

void FUN_10890bf60(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912a68();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10890bf9c; end: 10890c013;  */

long * FUN_10890bf9c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x000108912558();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000108912508();
    func_0x000108912860();
    func_0x000108912aac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10890c014; end: 10890c06f;  */

void FUN_10890c014(int param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108912a60();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000108912a28();
    param_1 = extraout_w8 + param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108912b78();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 10890c070; end: 10890c073;  */

void FUN_10890c070(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108912ae8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c074; end: 10890c0db;  */

void FUN_10890c074(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108912ae8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c0dc; end: 10890c0eb;  */

void FUN_10890c0dc(long param_1,long param_2)

{
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c0ec; end: 10890c10f;  */

undefined8 FUN_10890c0ec(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890c110; end: 10890c113;  */

undefined8 FUN_10890c110(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890c114; end: 10890c127;  */

void FUN_10890c114(void)

{
  FUN_10890c0ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890c128; end: 10890c19f;  */

undefined ** FUN_10890c128(void)

{
  return &PTR_DAT_110a924b8;
}



/* Entry: 10890c1a0; end: 10890c1cf;  */

void FUN_10890c1a0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c349e0();
  func_0x00010890c134();
  func_0x000108912854();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c1d0; end: 10890c1eb;  */

void FUN_10890c1d0(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c1ec; end: 10890c20f;  */

undefined8 FUN_10890c1ec(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890c210; end: 10890c213;  */

undefined8 FUN_10890c210(undefined8 param_1)

{
  func_0x000107c349c4();
  return param_1;
}



/* Entry: 10890c214; end: 10890c227;  */

void FUN_10890c214(void)

{
  FUN_10890c1ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890c228; end: 10890c247;  */

undefined ** FUN_10890c228(void)

{
  return &PTR_DAT_110a92510;
}



/* Entry: 10890c248; end: 10890c2af;  */

long * FUN_10890c248(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089124f8();
  if (param_1[2] != 0) {
    func_0x000108912508();
    func_0x000108912820();
    func_0x000108912aac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108912728();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10890c2b0; end: 10890c2f7;  */

ulong FUN_10890c2b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10890c2f8; end: 10890c3a3;  */

void FUN_10890c2f8(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c349e0();
  func_0x00010890c234();
  func_0x000108912854();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c3a4; end: 10890c3cf;  */

undefined8 FUN_10890c3a4(undefined8 param_1)

{
  func_0x000107c349c4();
  FUN_10890c3d0(param_1);
  return param_1;
}



/* Entry: 10890c3d0; end: 10890c3e3;  */

void FUN_10890c3d0(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000108912868();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010891273c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10890c380;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10890c1ec();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_10890c380;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010891273c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10890c380;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10890c0ec();
    }
  }
  __ZdlPv();
LAB_10890c380:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10890c3e4; end: 10890c3f7;  */

void FUN_10890c3e4(void)

{
  FUN_10890c3a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890c3f8; end: 10890c403;  */

undefined ** FUN_10890c3f8(void)

{
  return &PTR_DAT_110a92568;
}



/* Entry: 10890c404; end: 10890c50b;  */

void FUN_10890c404(long param_1)

{
  ulong *puVar1;
  
  func_0x00010890c328();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10890c50c; end: 10890c50f;  */

void FUN_10890c50c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10890c5b8;
  func_0x000108912a4c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00010890c328();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x000108912524();
      func_0x000108912b4c();
      FUN_10890c1d0();
      goto LAB_10890c5b8;
    }
    func_0x000108912774();
    FUN_108911924();
  }
  else {
    if (iVar1 != 1) goto LAB_10890c5b8;
    if (unaff_w24 == 1) {
      func_0x000108912524();
      func_0x000108912b40();
      FUN_10890c0dc();
      goto LAB_10890c5b8;
    }
    func_0x000108912774();
    FUN_1089118c8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10890c5b8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c510; end: 10890c5d3;  */

void FUN_10890c510(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10890c5b8;
  func_0x000108912a4c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00010890c328();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x000108912524();
      func_0x000108912b4c();
      FUN_10890c1d0();
      goto LAB_10890c5b8;
    }
    func_0x000108912774();
    FUN_108911924();
  }
  else {
    if (iVar1 != 1) goto LAB_10890c5b8;
    if (unaff_w24 == 1) {
      func_0x000108912524();
      func_0x000108912b40();
      FUN_10890c0dc();
      goto LAB_10890c5b8;
    }
    func_0x000108912774();
    FUN_1089118c8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10890c5b8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c5d4; end: 10890c6e3;  */

void FUN_10890c5d4(ulong *param_1,ulong *param_2)

{
  int iVar1;
  undefined1 uVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  uVar2 = param_2 == param_1;
  if ((bool)uVar2) {
    return;
  }
  func_0x000107c349e0();
  FUN_10890c404();
  func_0x000108912854();
  func_0x000108912578();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10890c5b8;
  func_0x000108912a4c();
  if (!(bool)uVar2) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00010890c328();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x000108912524();
      func_0x000108912b4c();
      FUN_10890c1d0();
      goto LAB_10890c5b8;
    }
    func_0x000108912774();
    FUN_108911924();
  }
  else {
    if (iVar1 != 1) goto LAB_10890c5b8;
    if (unaff_w24 == 1) {
      func_0x000108912524();
      func_0x000108912b40();
      FUN_10890c0dc();
      goto LAB_10890c5b8;
    }
    func_0x000108912774();
    FUN_1089118c8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10890c5b8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890c6e4; end: 10890c6e7;  */

undefined8 FUN_10890c6e4(undefined8 param_1)

{
  func_0x000100690ae4();
  func_0x000100690b18(param_1);
  return param_1;
}



/* Entry: 10890c6e8; end: 10890c6fb;  */

void FUN_10890c6e8(void)

{
  func_0x000107c2a500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10890c6fc; end: 10890c717;  */

undefined8 FUN_10890c6fc(undefined8 param_1)

{
  func_0x000107c349c4();
  FUN_108910b70(param_1);
  return param_1;
}



/* Entry: 10890c718; end: 10890c82f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10890c718(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  
  FUN_1087d4b54(param_1 + 0x18);
  FUN_1086eb9e8(param_1 + 0x30);
  FUN_1087cd16c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 != 0) {
    if ((bVar1 & 1) != 0) {
      func_0x00010890c800(*(undefined8 *)(param_1 + 0x68));
    }
    if ((bVar1 >> 1 & 1) != 0) {
      func_0x00010890b594(*(undefined8 *)(param_1 + 0x70));
    }
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_10890b6d4(*(undefined8 *)(param_1 + 0x78));
    }
    if ((bVar1 >> 3 & 1) != 0) {
      FUN_10890b894(*(undefined8 *)(param_1 + 0x80));
    }
    if ((bVar1 >> 4 & 1) != 0) {
      FUN_10890bf60(*(undefined8 *)(param_1 + 0x88));
    }
    if ((bVar1 >> 5 & 1) != 0) {
      FUN_10890c830(*(undefined8 *)(param_1 + 0x90));
    }
    if ((bVar1 >> 6 & 1) != 0) {
      FUN_10890c404(*(undefined8 *)(param_1 + 0x98));
    }
    if ((char)bVar1 < '\0') {
      FUN_10890c840(*(undefined8 *)(param_1 + 0xa0));
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  func_0x00010890c604(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10890c830; end: 10890c83f;  */

void FUN_10890c830(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10890c840; end: 10890c873;  */

void FUN_10890c840(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108912838();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108912a68();
  }
  func_0x0001089129f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10890c874; end: 10890cd27;  */

long * FUN_10890c874(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001089124f8();
  lVar4 = param_1[4];
  while ((int)lVar4 != 0) {
    func_0x0001089124ac();
    param_3 = (ulong)*(uint *)(param_2 + 4);
    func_0x0001089125f4();
    func_0x0001089128e0();
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    func_0x000108912508();
    param_2 = param_1;
    func_0x000108912860();
    func_0x00010891256c();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x68);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x3;
    func_0x00010891270c();
    param_4 = param_1;
  }
  func_0x0001089127c8(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000108912ab8();
    param_4 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x38);
  while (iVar5 != 0) {
    func_0x000108912974();
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_1 = (long *)0x5;
    func_0x00010891270c();
    func_0x0001089128e0();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x70);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_1 = (long *)0x6;
    func_0x00010891270c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    func_0x000108912508();
    param_4 = (long *)0x38;
    func_0x000107c280a8();
    func_0x00010891256c();
    param_2 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x78);
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_4 = (long *)0x8;
    func_0x00010891270c();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x80);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_4 = (long *)0x9;
    func_0x00010891270c();
  }
  if (*(int *)(unaff_x20 + 0xc0) == 0xb) {
    param_2 = *(long **)(unaff_x20 + 0xb8);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)0xb;
    func_0x00010891270c();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x88);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)0xc;
    func_0x00010891270c();
  }
  uVar2 = *(uint *)(unaff_x20 + 0xc0);
  plVar3 = (long *)(ulong)uVar2;
  if (uVar2 == 0xd) {
    lVar4 = 0x18;
  }
  else {
    if (uVar2 != 0xe) goto LAB_10890ca0c;
    lVar4 = 0x14;
  }
  param_2 = *(long **)(unaff_x20 + 0xb8);
  param_3 = (ulong)*(uint *)((long)param_2 + lVar4);
  func_0x00010891270c();
  param_4 = plVar3;
LAB_10890ca0c:
  iVar5 = *(int *)(unaff_x20 + 0x50);
  while (iVar5 != 0) {
    func_0x000108912974();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar3 = (long *)0xf;
    func_0x00010891270c();
    func_0x0001089128e0();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x90) + 0x10);
    plVar3 = (long *)0x10;
    func_0x00010891270c();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    func_0x000108912508();
    param_4 = (long *)0x90;
    func_0x000107c280a8(0x90,plVar3);
    func_0x00010891256c();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x98) + 0x18);
    param_4 = (long *)0x13;
    func_0x00010891270c();
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x14);
    param_4 = (long *)0x14;
    func_0x00010891270c();
  }
  if (*(int *)(unaff_x20 + 0xc0) == 0x15) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0xb8) + 0x28);
    param_4 = (long *)0x15;
    func_0x00010891270c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108912728();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar4 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10890cd28; end: 10890cd5f;  */

long FUN_10890cd28(long param_1)

{
  long extraout_x8;
  
  FUN_10890b4d8();
  FUN_108912460();
  return param_1 + extraout_x8;
}



/* Entry: 10890cd60; end: 10890cd63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10890cd60(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108912578();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  func_0x000107c2a508(unaff_x21 + 3,unaff_x20 + 0x18);
  func_0x000107c29a04(unaff_x21 + 6,unaff_x20 + 0x30);
  puVar4 = unaff_x21 + 9;
  lVar5 = unaff_x20 + 0x48;
  func_0x000107c2a458();
  func_0x0001089127bc(*(undefined8 *)(unaff_x20 + 0x60));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001089127b0();
    }
    puVar4 = unaff_x21 + 0xc;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xd];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000107c2a558();
        unaff_x21[0xd] = (ulong)puVar4;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xe];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000107c2a55c();
        unaff_x21[0xe] = (ulong)puVar4;
      }
      else {
        func_0x000107c2a4d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xf];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_108904f3c();
        unaff_x21[0xf] = (ulong)puVar4;
      }
      else {
        FUN_10890b7f0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x10];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000107c2a560();
        unaff_x21[0x10] = (ulong)puVar4;
      }
      else {
        FUN_10890b9c0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x11];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_10891197c();
        unaff_x21[0x11] = (ulong)puVar4;
      }
      else {
        FUN_10890c074();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x12];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_1089119f4();
        unaff_x21[0x12] = (ulong)puVar4;
      }
      else {
        FUN_10890d250();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x13];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_108911a50();
        unaff_x21[0x13] = (ulong)puVar4;
      }
      else {
        FUN_10890c510();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x14];
      if (puVar4 == (ulong *)0x0) {
        FUN_108911ac4();
        unaff_x21[0x14] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
      else {
        func_0x00010890d260();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0x15) = *(int *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    *(int *)((long)unaff_x21 + 0xac) = *(int *)(unaff_x20 + 0xac);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0x16) = *(int *)(unaff_x20 + 0xb0);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0xc0);
  if (iVar2 == 0) goto LAB_10890d06c;
  iVar3 = (int)unaff_x21[0x18];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      puVar4 = unaff_x21;
      func_0x00010890c604();
    }
    *(int *)(unaff_x21 + 0x18) = iVar2;
  }
  if (iVar2 == 0x15) {
    if (iVar3 == 0x15) {
      func_0x000108912890();
      FUN_10890d37c();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911c1c();
  }
  else if (iVar2 == 0xd) {
    if (iVar3 == 0xd) {
      func_0x000108912890();
      func_0x00010890d338();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911b70();
  }
  else if (iVar2 == 0xe) {
    if (iVar3 == 0xe) {
      func_0x000108912890();
      func_0x00010890d360();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911bc8();
  }
  else {
    if (iVar2 != 0xb) goto LAB_10890d06c;
    if (iVar3 == 0xb) {
      func_0x000108912890();
      func_0x00010890d2c8();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911af8();
  }
  unaff_x21[0x17] = (ulong)puVar4;
LAB_10890d06c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar4 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890cd64; end: 10890d24f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10890cd64(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108912578();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001089128ec();
  }
  func_0x000107c2a508(unaff_x21 + 3,unaff_x20 + 0x18);
  func_0x000107c29a04(unaff_x21 + 6,unaff_x20 + 0x30);
  puVar4 = unaff_x21 + 9;
  lVar5 = unaff_x20 + 0x48;
  func_0x000107c2a458();
  func_0x0001089127bc(*(undefined8 *)(unaff_x20 + 0x60));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar5 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x0001089127b0();
    }
    puVar4 = unaff_x21 + 0xc;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xd];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000107c2a558();
        unaff_x21[0xd] = (ulong)puVar4;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xe];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000107c2a55c();
        unaff_x21[0xe] = (ulong)puVar4;
      }
      else {
        func_0x000107c2a4d4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0xf];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_108904f3c();
        unaff_x21[0xf] = (ulong)puVar4;
      }
      else {
        FUN_10890b7f0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x10];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x000107c2a560();
        unaff_x21[0x10] = (ulong)puVar4;
      }
      else {
        FUN_10890b9c0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x11];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_10891197c();
        unaff_x21[0x11] = (ulong)puVar4;
      }
      else {
        FUN_10890c074();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x12];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_1089119f4();
        unaff_x21[0x12] = (ulong)puVar4;
      }
      else {
        FUN_10890d250();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x13];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_108911a50();
        unaff_x21[0x13] = (ulong)puVar4;
      }
      else {
        FUN_10890c510();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x14];
      if (puVar4 == (ulong *)0x0) {
        FUN_108911ac4();
        unaff_x21[0x14] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
      else {
        func_0x00010890d260();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0x15) = *(int *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    *(int *)((long)unaff_x21 + 0xac) = *(int *)(unaff_x20 + 0xac);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0x16) = *(int *)(unaff_x20 + 0xb0);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0xc0);
  if (iVar2 == 0) goto LAB_10890d06c;
  iVar3 = (int)unaff_x21[0x18];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      puVar4 = unaff_x21;
      func_0x00010890c604();
    }
    *(int *)(unaff_x21 + 0x18) = iVar2;
  }
  if (iVar2 == 0x15) {
    if (iVar3 == 0x15) {
      func_0x000108912890();
      FUN_10890d37c();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911c1c();
  }
  else if (iVar2 == 0xd) {
    if (iVar3 == 0xd) {
      func_0x000108912890();
      func_0x00010890d338();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911b70();
  }
  else if (iVar2 == 0xe) {
    if (iVar3 == 0xe) {
      func_0x000108912890();
      func_0x00010890d360();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911bc8();
  }
  else {
    if (iVar2 != 0xb) goto LAB_10890d06c;
    if (iVar3 == 0xb) {
      func_0x000108912890();
      func_0x00010890d2c8();
      goto LAB_10890d06c;
    }
    func_0x000108912b6c();
    FUN_108911af8();
  }
  unaff_x21[0x17] = (ulong)puVar4;
LAB_10890d06c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar4 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890d250; end: 10890d25f;  */

void FUN_10890d250(long param_1,long param_2)

{
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890d260; end: 10890d337;  */

void FUN_10890d260(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001089125a8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000108912918();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108912968();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x000108912ae8();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010891262c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089125b8();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10890d338; end: 10890d37b;  */

void FUN_10890d338(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}


