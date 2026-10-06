/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4cc358; end: 10b4cc44b;  */

void FUN_10b4cc358(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c39a8c();
  if (param_2 != 0) {
    FUN_10b4cc48c(param_3,param_2,uVar1,param_1);
  }
  return;
}



/* Entry: 10b4cc44c; end: 10b4cc487;  */

void FUN_10b4cc44c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x10;
    __Znwm();
  }
  else {
    FUN_10b4d7e6c(param_1,0x10,8,FUN_10b4cc488);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b4cc488; end: 10b4cc48b;  */

byte * FUN_10b4cc488(byte *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x000107c2b974(param_1);
  }
  return param_1;
}



/* Entry: 10b4cc48c; end: 10b4cc4ef;  */

long * FUN_10b4cc48c(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_2;
  iVar4 = ((int)param_1[1] - iVar5) + 0x10;
  if (0x1ff < iVar4) {
    iVar4 = 0x200;
  }
  iVar3 = (int)param_3;
  if (iVar3 <= iVar4) {
    func_0x00010ae70914(param_4,param_2,(long)iVar3);
    return (long *)((long)param_2 + (long)iVar3);
  }
  iVar4 = (int)param_1[1] - iVar5;
  if (param_1[4] == 0) {
    if (iVar4 + 0x10 < iVar3) {
      iVar4 = ((int)param_1[1] - iVar5) + 0x10;
      do {
        if (param_1[2] == 0) {
          return (long *)0x0;
        }
        func_0x00010b4d252c(param_4,param_2,iVar4);
        if (*(int *)((long)param_1 + 0x1c) < 0x11) {
          return (long *)0x0;
        }
        param_2 = param_1;
        FUN_10b4d1d34();
        if (param_2 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar1 = (int)param_3 - iVar4;
        param_3 = (ulong)uVar1;
        param_2 = param_2 + 2;
        iVar4 = ((int)param_1[1] - (int)param_2) + 0x10;
      } while (iVar4 < (int)uVar1);
      func_0x00010b4d252c(param_4,param_2,param_3);
    }
    else {
      func_0x00010b4d3690(param_1,param_2,(long)iVar3);
    }
    return (long *)((long)param_2 + (long)(int)param_3);
  }
  iVar5 = *(int *)((long)param_1 + 0x1c) + iVar4;
  if (iVar5 < iVar3) {
    return (long *)0x0;
  }
  iVar6 = iVar4 + 0x10;
  if ((iVar6 < 0x21) && (plVar2 = param_1 + 5, (ulong)((long)param_2 - (long)plVar2) < 0x21)) {
    if (((iVar4 == 0) && ((long *)param_1[2] != (long *)0x0)) && ((long *)param_1[2] != plVar2)) {
      func_0x00010ae70894(param_4);
      iVar6 = (int)param_1[3];
    }
    else {
      param_3 = (ulong)(uint)(iVar3 - iVar6);
      func_0x00010b4d3690(param_1,param_2,(long)iVar6);
      if ((long *)param_1[2] == plVar2) goto LAB_10b4d20bc;
      if ((long *)param_1[2] == (long *)0x0) {
        *(undefined4 *)(param_1 + 10) = 1;
        return (long *)0x0;
      }
      iVar6 = (int)param_1[3] + -0x10;
    }
  }
  else {
    func_0x00010ae70894(param_4);
  }
  func_0x00010b4d19b4(param_1,iVar6);
LAB_10b4d20bc:
  if ((int)param_3 <= *(int *)((long)param_1 + 0x54)) {
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - (int)param_3;
    plVar2 = (long *)param_1[4];
    (**(code **)(*plVar2 + 0x30))(plVar2,param_4,param_3);
    if ((int)plVar2 != 0) {
      plVar2 = param_1;
      func_0x000107c30394(param_1,param_1[4]);
      uVar1 = (iVar5 - iVar3) + ((int)plVar2 - (int)param_1[1]);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      return plVar2;
    }
  }
  return (long *)0x0;
}



/* Entry: 10b4cc4f0; end: 10b4cc6b3;  */

long FUN_10b4cc4f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int *unaff_x19;
  long lVar7;
  ulong *puVar8;
  
  func_0x000107c39bc4();
  func_0x000107c39b4c();
  func_0x00010b4cc7a4();
  if (param_1 != 0) {
    func_0x00010b4cc83c();
    goto LAB_10b4cc56c;
  }
  uVar1 = unaff_x19[1];
  uVar6 = (ulong)(*unaff_x19 + 1U);
  uVar4 = ((ulong)uVar1 & 0xfffffffe) - ((ulong)(uVar1 >> 2) & 0x3ffffffc);
  if (uVar4 < uVar6) {
    if (-1 < (int)uVar1) {
      if (uVar1 != 1) {
        uVar2 = uVar1 << 1;
        goto LAB_10b4cc600;
      }
      unaff_x19[3] = 2;
      unaff_x19[1] = 2;
      piVar3 = unaff_x19;
      func_0x000107c27d6c();
      *(int **)(unaff_x19 + 4) = piVar3;
      piVar3 = unaff_x19;
      func_0x000104c610b8();
      unaff_x19[2] = (int)piVar3;
LAB_10b4cc698:
      func_0x00010b4cc7a4();
    }
  }
  else if (2 < uVar1 && uVar6 <= uVar4 >> 2) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
    } while (uVar6 + (*unaff_x19 + 1U >> 2) + 1 << (uVar5 & 0x3f) < uVar4);
    uVar2 = uVar1 >> (ulong)((uint)uVar5 & 0x1f);
    if (uVar2 < 3) {
      uVar2 = 2;
    }
    if (uVar2 != uVar1) {
LAB_10b4cc600:
      lVar7 = *(long *)(unaff_x19 + 4);
      unaff_x19[1] = uVar2;
      piVar3 = unaff_x19;
      func_0x000107c27d6c();
      *(int **)(unaff_x19 + 4) = piVar3;
      uVar2 = unaff_x19[3];
      unaff_x19[3] = unaff_x19[1];
      for (uVar4 = (ulong)uVar2; uVar4 < uVar1; uVar4 = uVar4 + 1) {
        puVar8 = *(ulong **)(lVar7 + uVar4 * 8);
        if ((puVar8 == (ulong *)0x0) || (((ulong)puVar8 & 1) != 0)) {
          if (((ulong)puVar8 & 1) != 0) {
            FUN_10b4cf860();
          }
        }
        else {
          do {
            puVar8 = (ulong *)*puVar8;
            func_0x0001053aba88();
            func_0x00010b4cc8f0();
          } while (puVar8 != (ulong *)0x0);
        }
      }
      func_0x000107c27d70();
      goto LAB_10b4cc698;
    }
  }
  param_1 = 0;
LAB_10b4cc56c:
  func_0x00010b4cc8f0();
  func_0x000107c39b20();
  return param_1;
}



/* Entry: 10b4cc6b4; end: 10b4cc98b;  */

undefined8 FUN_10b4cc6b4(long param_1)

{
  int iVar1;
  undefined8 unaff_x22;
  
  func_0x000107c39b4c();
  func_0x000105689068();
  if (param_1 == 0) {
    func_0x000107c39ba8();
    iVar1 = (int)param_1;
    func_0x000105689120();
    if (iVar1 != 0) {
      func_0x000105689068();
    }
    unaff_x22 = 0;
  }
  else {
    func_0x00010b4cf1e4();
    func_0x00010958a7dc();
  }
  func_0x0001056891b0();
  func_0x000107c39b20();
  return unaff_x22;
}



/* Entry: 10b4cc98c; end: 10b4cc99b;  */

undefined1  [16] FUN_10b4cc98c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)*(byte *)(param_1 + 8) & 1;
  return auVar1 << 0x40;
}



/* Entry: 10b4cc99c; end: 10b4cca4b;  */

void FUN_10b4cc99c(undefined8 param_1,ulong *param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long unaff_x19;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b4ce900();
  if (!(bool)in_ZR) {
    if ((param_2 != (ulong *)0x0) && (((ulong)param_2 & 1) == 0)) {
      do {
        param_2 = (ulong *)*param_2;
        in_ZR = param_2 == unaff_x21 || param_2 == (ulong *)0x0;
      } while (param_2 != unaff_x21 && param_2 != (ulong *)0x0);
      if (param_2 != (ulong *)0x0) goto LAB_10b4cc9fc;
    }
    unaff_x20 = unaff_x21[1];
    func_0x00010890aa48();
    if ((*(ulong *)(*(long *)(unaff_x19 + 0x10) + (unaff_x20 & 0xffffffff) * 8) & 1) != 0) {
      func_0x00010b4ced90();
      goto LAB_10b4cca0c;
    }
    unaff_x22 = unaff_x20 & 0xffffffff;
  }
LAB_10b4cc9fc:
  func_0x00010958a940();
  *(ulong **)(*(long *)(unaff_x19 + 0x10) + unaff_x22 * 8) = unaff_x21;
LAB_10b4cca0c:
  func_0x00010b4cf000();
  if ((bool)in_ZR) {
    uVar1 = unaff_x20 & 0xffffffff;
    while ((uVar1 < *(uint *)(unaff_x19 + 4) &&
           (*(long *)(*(long *)(unaff_x19 + 0x10) + uVar1 * 8) == 0))) {
      uVar1 = uVar1 + 1;
      *(int *)(unaff_x19 + 0xc) = (int)uVar1;
    }
  }
  return;
}



/* Entry: 10b4cca4c; end: 10b4ccd3b;  */

uint * FUN_10b4cca4c(uint *param_1,uint *param_2,code *param_3,uint *param_4,uint *param_5,
                    undefined8 param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  code *UNRECOVERED_JUMPTABLE_02;
  code *UNRECOVERED_JUMPTABLE_01;
  int extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  ulong uVar16;
  long lVar17;
  uint extraout_w9;
  long extraout_x9;
  code *unaff_x19;
  uint *unaff_x21;
  uint *puVar18;
  uint uVar19;
  ulong unaff_x25;
  undefined8 uVar20;
  code *unaff_x30;
  uint *puStack_d0;
  uint *puStack_c8;
  undefined8 *puStack_c0;
  uint *puStack_b8;
  ushort *puStack_b0;
  uint uStack_a8;
  uint auStack_90 [2];
  uint uStack_88;
  uint uStack_84;
  uint *puStack_80;
  undefined8 uStack_78;
  uint uStack_6c;
  ulong uStack_68;
  uint *puStack_50;
  ulong uStack_48;
  uint *puStack_40;
  code *pcStack_38;
  uint *puStack_30;
  uint *puStack_28;
  uint *puStack_20;
  code *pcStack_18;
  uint auStack_10 [2];
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    puVar8 = param_5;
    func_0x000107c39c28();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    if (((ulong)param_4 & 7) == 0) {
      puVar13 = (uint *)((long)puVar8 + ((ulong)param_4 >> 0x20));
      uVar2 = *(ushort *)((long)puVar13 + 10);
      uVar3 = uVar2 >> 6 & 7;
      uVar14 = uVar2 & 0x600;
      puVar18 = (uint *)(ulong)uVar14;
      puVar9 = param_4;
      puVar15 = puVar8;
      puStack_80 = param_1;
      uStack_78 = param_6;
      if (uVar3 == 0) {
        puVar10 = param_1;
        FUN_10b4c99a4(param_1,puVar8);
        puVar13 = (uint *)(ulong)*puVar13;
        func_0x00010b4ccdac();
        puVar11 = puVar10;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00010b4ceab0();
        }
        func_0x00010b4cea88();
        goto LAB_10b4ccbd8;
      }
      if (uVar3 != 2) {
        puVar10 = param_1;
        FUN_10b4c99a4(param_1,puVar8);
        puVar13 = (uint *)(ulong)*puVar13;
        func_0x00010b4ccd3c();
        puVar11 = puVar10;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00010b4ceab0();
        }
        func_0x00010b4cea88();
        goto LAB_10b4ccc5c;
      }
      puVar10 = param_1;
      FUN_10b4c99a4(param_1,puVar8);
      puVar13 = (uint *)(ulong)*puVar13;
      func_0x00010b4ccd74();
      puVar11 = puVar10;
      if ((uVar2 >> 10 & 1) != 0) {
        func_0x00010b4ceab0();
      }
      func_0x00010b4cea88();
      goto LAB_10b4ccb5c;
    }
    if (((uint)param_4 & 7) != 2) {
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puVar8 + 0xc);
      func_0x00010b4ceb04(param_1);
      func_0x000107c39b24();
                    /* WARNING: Could not recover jumptable at 0x00010b4ccb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return param_1;
    }
    puVar9 = param_1;
    puVar18 = param_4;
    param_5 = puVar8;
    func_0x00010b4ceb04();
    func_0x000107c39b24();
    puVar13 = auStack_10;
    puVar10 = puVar18;
    puVar15 = param_5;
    puStack_50 = param_1;
    uStack_48 = unaff_x25;
    puStack_40 = param_2;
    pcStack_38 = param_3;
    puStack_30 = param_4;
    puStack_28 = unaff_x21;
    puStack_20 = puVar8;
    pcStack_18 = unaff_x19;
    func_0x000107c39b70();
    func_0x00010b4ce244();
    uVar14 = (uint)puVar10;
    uVar16 = (ulong)puVar10 & 7;
    cVar5 = SBORROW8(uVar16,2);
    cVar6 = (long)(uVar16 - 2) < 0;
    uVar7 = uVar16 == 2;
    uStack_68 = extraout_x8;
    if ((bool)uVar7) {
      uVar2 = *(ushort *)((long)param_5 + ((ulong)puVar18 >> 0x20) + 10);
      uVar16 = (ulong)(ushort)*param_5;
      if (uVar16 != 0) {
        *(uint *)((long)puVar9 + uVar16) = *(uint *)((long)puVar9 + uVar16) | (uint)param_6;
      }
      uVar14 = uVar2 >> 6 & 7;
      puVar8 = puVar9;
      FUN_10b4c99a4(puVar9,param_5);
      if ((uVar2 >> 6 & 7) == 0) {
        func_0x00010b4ccdac();
        if ((uVar2 >> 10 & 1) == 0) {
          puVar11 = puVar8;
          func_0x00010b4ce65c();
          func_0x00010b4cee28();
          uVar14 = (uint)puVar10;
          if (puVar11 != (uint *)0x0) goto LAB_10b4ca830;
          goto LAB_10b4caaa8;
        }
        puVar11 = puVar8;
        func_0x00010b4ce2f0();
        func_0x00010b4cef1c();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto LAB_10b4ca90c;
        goto LAB_10b4caaa8;
      }
      cVar5 = SBORROW4(uVar14,2);
      cVar6 = (int)(uVar14 - 2) < 0;
      uVar7 = uVar14 == 2;
      if ((bool)uVar7) {
        func_0x00010b4ccd74();
        puVar11 = puVar8;
        if ((uVar2 >> 10 & 1) == 0) {
          func_0x00010b4ce65c();
          func_0x00010b4cee28();
          uVar14 = (uint)puVar10;
          if (puVar11 != (uint *)0x0) goto LAB_10b4ca7a0;
          goto LAB_10b4caaa8;
        }
        func_0x00010b4ce2f0();
        func_0x00010b4cef1c();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto LAB_10b4ca8c4;
        goto LAB_10b4caaa8;
      }
      func_0x00010b4ccd3c();
      puVar11 = puVar8;
      if ((uVar2 >> 10 & 1) == 0) {
        func_0x00010b4ce65c();
        func_0x00010b4cee28();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto LAB_10b4ca880;
        goto LAB_10b4caaa8;
      }
      func_0x00010b4ce2f0();
      func_0x00010b4cef1c();
      uVar14 = (uint)puVar10;
      if (puVar11 != (uint *)0x0) goto LAB_10b4ca954;
      goto LAB_10b4caaa8;
    }
    func_0x00010b4cdf40(extraout_x8);
    param_1 = puVar9;
    param_2 = unaff_x21;
    param_3 = unaff_x19;
    param_4 = puVar18;
    unaff_x19 = pcStack_18;
    unaff_x21 = puStack_28;
    unaff_x25 = uStack_48;
    unaff_x30 = UNRECOVERED_JUMPTABLE;
  } while ((bool)uVar7);
  goto LAB_10b4caadc;
  while( true ) {
    puVar13 = &uStack_6c;
    func_0x00010b4ce298();
    if (puVar11 == (uint *)0x0) goto LAB_10b4cccfc;
    func_0x00010b4cee90();
    if (!(bool)uVar7) break;
LAB_10b4ccbd8:
    puVar12 = puVar11;
    func_0x00010b4ceae8();
    uVar16 = uStack_68;
    if (puVar12 == (uint *)0x0) goto LAB_10b4cccfc;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar14 == 0x200) {
        uVar16 = (long)(int)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar14;
      cVar5 = SBORROW4(uVar14,0x600);
      cVar6 = (int)(uVar14 - 0x600) < 0;
      bVar4 = uVar14 == 0x600;
      if (bVar4) {
        func_0x00010b4ceeb0();
        if (bVar4 || cVar6 != cVar5) goto FUN_10b4c7fd4;
      }
      else {
        puVar11 = puVar12;
        func_0x00010b4cea7c();
        if (((ulong)puVar11 & 1) == 0) goto FUN_10b4c7fd4;
      }
    }
    puVar11 = puVar10;
    FUN_10b4bfd04(puVar10,uVar16 != 0);
    uVar7 = puVar12 == *(uint **)param_3;
    if (*(uint **)param_3 <= puVar12) break;
  }
  goto LAB_10b4ccccc;
  while( true ) {
    puVar13 = &uStack_6c;
    func_0x00010b4ce298();
    if (puVar11 == (uint *)0x0) goto LAB_10b4cccfc;
    func_0x00010b4cee90();
    if (!(bool)uVar7) break;
LAB_10b4ccb5c:
    puVar12 = puVar11;
    func_0x00010b4ceae8();
    uVar16 = uStack_68;
    if (puVar12 == (uint *)0x0) goto LAB_10b4cccfc;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar14 == 0x200) {
        uVar16 = (ulong)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar14;
      cVar5 = SBORROW4(uVar14,0x600);
      cVar6 = (int)(uVar14 - 0x600) < 0;
      bVar4 = uVar14 == 0x600;
      if (bVar4) {
        func_0x00010b4ceeb0();
        if (bVar4 || cVar6 != cVar5) goto FUN_10b4c7fd4;
      }
      else {
        puVar11 = puVar12;
        func_0x00010b4cea7c();
        if (((ulong)puVar11 & 1) == 0) goto FUN_10b4c7fd4;
      }
    }
    puVar11 = puVar10;
    func_0x000107c29100(puVar10,uVar16);
    uVar7 = puVar12 == *(uint **)param_3;
    if (*(uint **)param_3 <= puVar12) break;
  }
  goto LAB_10b4ccccc;
LAB_10b4cccfc:
  func_0x000107c39b24(puStack_80);
  puVar15 = puVar8;
  goto LAB_10b4c5d10;
LAB_10b4ca90c:
  func_0x00010b4ce4a8();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9bc;
  func_0x00010b4ccf8c();
  uVar14 = (uint)puVar10;
  puStack_c8 = puVar11;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce040();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4ce194();
    func_0x00010b4cddcc();
    if (puVar11 != (uint *)0x0) goto LAB_10b4caaf8;
    func_0x00010b4ce344();
    func_0x00010b4ccf8c();
    goto LAB_10b4caa9c;
  }
  func_0x00010b4ce6d4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce4c8();
  puStack_c8 = puVar11;
  goto LAB_10b4ca90c;
LAB_10b4ca9bc:
  func_0x00010b4ce890();
  func_0x00010b4ccf8c();
  goto LAB_10b4ca9e0;
LAB_10b4ca830:
  func_0x00010b4ce754();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9ac;
  func_0x00010b4ceb70();
  func_0x00010b4cd004();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce26c();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4cdeac();
    if (puVar11 != (uint *)0x0) goto LAB_10b4caae0;
    func_0x00010b4ce728();
    func_0x00010b4ceb70();
    func_0x00010b4cd004();
    goto LAB_10b4caa70;
  }
  func_0x00010b4ce6d4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce41c();
  goto LAB_10b4ca830;
LAB_10b4ca9ac:
  func_0x000107c399ec();
  puVar10 = puVar18;
  func_0x00010b4cd004();
  uVar14 = (uint)puVar10;
  goto LAB_10b4ca9e0;
LAB_10b4ca954:
  func_0x00010b4ce4a8();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9d8;
  func_0x00010b4ccde4();
  uVar14 = (uint)puVar10;
  puStack_c8 = puVar11;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce040();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4ce194();
    func_0x00010b4cddcc();
    if (puVar11 != (uint *)0x0) goto LAB_10b4caaf8;
    func_0x00010b4ce344();
    func_0x00010b4ccde4();
    goto LAB_10b4caa9c;
  }
  func_0x00010b4ce6d4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce4c8();
  puStack_c8 = puVar11;
  goto LAB_10b4ca954;
LAB_10b4ca9d8:
  func_0x00010b4ce890();
  func_0x00010b4ccde4();
  goto LAB_10b4ca9e0;
LAB_10b4ca880:
  func_0x00010b4ce754();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9c8;
  func_0x00010b4ceb70();
  func_0x00010b4cce68();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce26c();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4cdeac();
    if (puVar11 != (uint *)0x0) goto LAB_10b4caae0;
    func_0x00010b4ce728();
    func_0x00010b4ceb70();
    func_0x00010b4cce68();
    goto LAB_10b4caa70;
  }
  func_0x00010b4ce6d4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce41c();
  goto LAB_10b4ca880;
LAB_10b4ca9c8:
  func_0x000107c399ec();
  puVar10 = puVar18;
  func_0x00010b4cce68();
  uVar14 = (uint)puVar10;
  goto LAB_10b4ca9e0;
LAB_10b4ca8c4:
  func_0x00010b4ce4a8();
  uVar14 = (uint)puVar10;
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x00010b4ccec0();
    uVar14 = (uint)puVar10;
    puStack_c8 = puVar11;
    if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
    func_0x00010b4ce040();
    uVar14 = (uint)puVar10;
    if (!(bool)uVar7 && cVar6 == cVar5) {
      func_0x00010b4ce6d4();
      uVar14 = (uint)puVar10;
      if (cVar6 == cVar5) {
        func_0x00010b4ce654();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto code_r0x00010b4ca8f4;
        goto LAB_10b4caaa8;
      }
      goto LAB_10b4caaa4;
    }
    func_0x00010b4ce194();
    func_0x00010b4cddcc();
    if (puVar11 == (uint *)0x0) {
      func_0x00010b4ce344();
      func_0x00010b4ccec0();
LAB_10b4caa9c:
      uVar7 = puVar11 == puVar8;
      if (!(bool)uVar7) goto LAB_10b4caaa4;
      func_0x00010b4cedf0();
      goto LAB_10b4caaa8;
    }
    goto LAB_10b4caaf8;
  }
  func_0x00010b4ce890();
  func_0x00010b4ccec0();
  goto LAB_10b4ca9e0;
code_r0x00010b4ca8f4:
  func_0x00010b4ce4c8();
  puStack_c8 = puVar11;
  goto LAB_10b4ca8c4;
LAB_10b4ca7a0:
  func_0x00010b4ce754();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca990;
  func_0x00010b4ceb70();
  func_0x00010b4ccf34();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce26c();
  uVar14 = (uint)puVar10;
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x00010b4ce6d4();
    uVar14 = (uint)puVar10;
    if (cVar6 != cVar5) goto LAB_10b4caaa4;
    func_0x00010b4ce654();
    uVar14 = (uint)puVar10;
    if (puVar11 == (uint *)0x0) goto LAB_10b4caaa8;
    func_0x00010b4ce41c();
    goto LAB_10b4ca7a0;
  }
  func_0x00010b4cdeac();
  if (puVar11 != (uint *)0x0) goto LAB_10b4caae0;
  func_0x00010b4ce728();
  func_0x00010b4ceb70();
  func_0x00010b4ccf34();
LAB_10b4caa70:
  uVar7 = puVar11 == unaff_x21;
  if ((bool)uVar7) {
    puVar11 = (uint *)(*(long *)(unaff_x19 + 8) + (ulong)(uVar2 & 0x600));
    goto LAB_10b4caaa8;
  }
LAB_10b4caaa4:
  puVar11 = (uint *)0x0;
  goto LAB_10b4caaa8;
LAB_10b4cd1c8:
  func_0x00010b4ce184();
  goto LAB_10b4c5d10;
LAB_10b4ca990:
  func_0x000107c399ec();
  puVar10 = puVar18;
  func_0x00010b4ccf34();
  uVar14 = (uint)puVar10;
LAB_10b4ca9e0:
  func_0x000107c39a90();
LAB_10b4caaa8:
  func_0x00010b4cdf40(uStack_68);
  if ((bool)uVar7) {
    return puVar11;
  }
LAB_10b4caadc:
  uVar7 = 0;
  ___stack_chk_fail();
LAB_10b4caae0:
  func_0x00010802bcb8();
  func_0x00010b4cdfb8();
  func_0x00010b4ce6c0(auStack_90);
  puVar11 = auStack_90;
  func_0x00010ae6c700();
LAB_10b4caaf8:
  func_0x00010802bcb8();
  func_0x00010b4cde28();
  func_0x00010b4ce7b4();
  UNRECOVERED_JUMPTABLE_02 = FUN_10b4cab04;
  func_0x000107c39bc4();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_02;
  func_0x000107c39a5c();
  func_0x00010b4ceca0();
  if (!(bool)uVar7) {
    uVar19 = extraout_w9 & 0x1c0;
    if (uVar19 == 0xc0) {
      if ((uVar14 & 7) == 1) {
LAB_10b4cab74:
        if (extraout_w8 == 0x30) {
          func_0x00010b4cec24();
        }
        else if (extraout_w8 == 0x10) {
          func_0x00010b4ce284(puVar9[1]);
          *(uint *)((long)puVar18 + extraout_x9) =
               extraout_w8_00 | *(uint *)((long)puVar18 + extraout_x9);
        }
        puVar13 = puVar18;
        FUN_10b4c99a4(puVar18,puVar8);
        bVar4 = 0xbf < uVar19;
        if (uVar19 == 0xc0) {
          *(undefined8 *)((long)puVar13 + (ulong)*puVar9) = *(undefined8 *)param_5;
          lVar17 = 8;
        }
        else {
          *(uint *)((long)puVar13 + (ulong)*puVar9) = *param_5;
          lVar17 = 4;
        }
        param_5 = (uint *)((long)param_5 + lVar17);
        func_0x000107c39b2c();
        if (bVar4) {
          if ((short)*puVar8 != 0) {
            func_0x00010b4ce718();
          }
          return param_5;
        }
        func_0x000107c39900((short)*param_5);
        goto code_r0x00010029f874;
      }
    }
    else if ((uVar14 & 7) == 5) goto LAB_10b4cab74;
    UNRECOVERED_JUMPTABLE_01 = *(code **)(puVar8 + 0xc);
    func_0x000107c39bb0();
    puVar18 = puVar11;
code_r0x00010029f874:
    func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return puVar18;
  }
  func_0x000107c39bb0();
  func_0x000107c39a38();
  while( true ) {
    func_0x000107c39b14();
    puStack_40 = puVar13;
    pcStack_38 = UNRECOVERED_JUMPTABLE_02;
    func_0x000107c39a5c();
    func_0x00010b4cf1c4();
    func_0x000107c39b68();
    uVar19 = (uint)puStack_c8;
    uVar14 = uVar19 & 7;
    uVar7 = uVar14 == 2;
    if (!(bool)uVar7) break;
    puVar8 = puStack_b8;
    func_0x000107c39aa4();
    puVar9 = puStack_c8;
    func_0x000107c39a38();
    puVar13 = puStack_40;
    UNRECOVERED_JUMPTABLE_02 = pcStack_38;
    func_0x00010b4ce8b8();
    func_0x000107c39b14();
    puStack_40 = puVar13;
    pcStack_38 = UNRECOVERED_JUMPTABLE_02;
    func_0x000107c399e8();
    func_0x00010b4cf0e4();
    if ((bool)uVar7) {
      puVar1 = (undefined4 *)((long)puStack_b0 + ((ulong)puVar9 >> 0x20));
      uVar2 = *(ushort *)((long)puVar1 + 10);
      func_0x00010b4ce804();
      func_0x000107c39a8c();
      if ((uVar2 & 0x1c0) == 0xc0) {
        func_0x00010b4ccd3c();
        func_0x00010b4cf250();
        FUN_10b4cbe9c();
      }
      else {
        func_0x00010b4ccd74(puVar8,*puVar1,puStack_b8);
        func_0x00010b4cf250();
        FUN_10b4cbfb4();
      }
      if (puVar8 == (uint *)0x0) {
        func_0x00010b4ce184();
        goto LAB_10b4c5d10;
      }
      if ((uint *)*puStack_c0 <= puVar8) {
        if (*puStack_b0 == 0) {
          return puVar8;
        }
        func_0x000107c39990();
        return puVar8;
      }
      func_0x000107c398fc((short)*puVar8);
      func_0x00010b4ce174();
      goto code_r0x000100068b64;
    }
    puVar11 = puStack_b8;
    func_0x00010b4ce174();
    puVar13 = puStack_40;
    UNRECOVERED_JUMPTABLE_02 = pcStack_38;
    func_0x00010b4ce8b8();
  }
  func_0x00010b4ce804();
  if ((*(ushort *)((long)puStack_b0 + ((ulong)puStack_c8 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar7 = ((ulong)puStack_c8 & 7) != 0;
    if (uVar14 != 1) {
LAB_10b4cd18c:
      UNRECOVERED_JUMPTABLE_02 = *(code **)(puStack_b0 + 0x18);
      func_0x000107c39aa4(puStack_b8);
      puVar8 = puStack_b8;
      goto LAB_10b4cd19c;
    }
    func_0x00010b4ccd3c();
    do {
      puVar8 = puStack_d0 + 2;
      uVar20 = *(undefined8 *)puStack_d0;
      puStack_d0 = puVar11;
      FUN_10b4cbe14();
      *(undefined8 *)puStack_d0 = uVar20;
      func_0x000107c39af4();
      if ((bool)uVar7) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (puStack_d0 == (uint *)0x0) goto LAB_10b4cd1c8;
      uVar7 = uVar19 <= uStack_84;
    } while (uStack_84 == uVar19);
  }
  else {
    uVar7 = 4 < uVar14;
    if (uVar14 != 5) goto LAB_10b4cd18c;
    func_0x00010b4ccd74();
    do {
      puVar8 = puStack_d0 + 1;
      uVar14 = *puStack_d0;
      puStack_d0 = puVar11;
      func_0x00010b4cbe58();
      *puStack_d0 = uVar14;
      func_0x000107c39af4();
      if ((bool)uVar7) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (puStack_d0 == (uint *)0x0) goto LAB_10b4cd1c8;
      uVar7 = uVar19 <= uStack_88;
    } while (uStack_88 == uVar19);
  }
  func_0x000107c39b50();
  if ((bool)uVar7) {
LAB_10b4cd1a8:
    uVar2 = *puStack_b0;
    if (uVar2 != 0) {
      *(uint *)((long)puStack_b8 + (ulong)uVar2) =
           *(uint *)((long)puStack_b8 + (ulong)(uint)uVar2) | uStack_a8;
    }
    return puVar8;
  }
  func_0x000107c398fc((short)*puVar8);
  puVar8 = puStack_d0;
LAB_10b4cd19c:
  func_0x000107c39a38();
code_r0x000100068b64:
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_02)();
  return puVar8;
FUN_10b4c7fd4:
  puVar10 = puStack_80;
  func_0x00010b4ceb04();
  func_0x000107c39b24();
  puStack_40 = param_2;
  pcStack_38 = param_3;
  puStack_30 = param_4;
  puStack_28 = puVar18;
  puStack_20 = puVar8;
  pcStack_18 = (code *)(ulong)uVar2;
  func_0x00010b4ce96c();
  func_0x000107c302a4(puVar13,&uStack_48);
  if (puVar13 != (uint *)0x0) {
    FUN_10b4c7f90(puVar10,*(undefined8 *)(puVar18 + 0xc),puVar9,uStack_48 & 0xffffffff);
    func_0x00010b4ce960();
    if (!(bool)uVar7) {
      func_0x000107c39948((short)*puVar13);
      func_0x00010b4ce6e0(puVar10,puVar13,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return puVar10;
    }
    uVar16 = (ulong)(ushort)*puVar18;
    if (uVar16 != 0) {
      *(uint *)((long)puVar10 + uVar16) = *(uint *)((long)puVar10 + uVar16) | (uint)uVar2;
    }
    return puVar13;
  }
  func_0x00010b4ce498();
LAB_10b4c5d10:
  if ((short)*puVar15 != 0) {
    func_0x000107c39bb4();
  }
  return (uint *)0x0;
  while( true ) {
    puVar13 = &uStack_6c;
    func_0x00010b4ce298();
    if (puVar11 == (uint *)0x0) goto LAB_10b4cccfc;
    func_0x00010b4cee90();
    if (!(bool)uVar7) break;
LAB_10b4ccc5c:
    puVar12 = puVar11;
    func_0x00010b4ceae8();
    uVar16 = uStack_68;
    if (puVar12 == (uint *)0x0) goto LAB_10b4cccfc;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar14 == 0x200) {
        uVar16 = -(uStack_68 & 1) ^ uStack_68 >> 1;
      }
    }
    else {
      uVar7 = 0x5ff < uVar14;
      cVar5 = SBORROW4(uVar14,0x600);
      cVar6 = (int)(uVar14 - 0x600) < 0;
      bVar4 = uVar14 == 0x600;
      if (bVar4) {
        func_0x00010b4ceeb0();
        if (bVar4 || cVar6 != cVar5) goto FUN_10b4c7fd4;
      }
      else {
        puVar11 = puVar12;
        func_0x00010b4cea7c();
        if (((ulong)puVar11 & 1) == 0) goto FUN_10b4c7fd4;
      }
    }
    puVar11 = puVar10;
    func_0x000108767594(puVar10,uVar16);
    uVar7 = puVar12 == *(uint **)param_3;
    if (*(uint **)param_3 <= puVar12) break;
  }
LAB_10b4ccccc:
  uVar2 = (ushort)*puVar8;
  if (uVar2 != 0) {
    *(uint *)((long)puStack_80 + (ulong)uVar2) =
         *(uint *)((long)puStack_80 + (ulong)(uint)uVar2) | (uint)uStack_78;
  }
  func_0x000107c39b24(puVar12,UNRECOVERED_JUMPTABLE);
  return puVar12;
}



/* Entry: 10b4ccd3c; end: 10b4ccde3;  */

void FUN_10b4ccd3c(undefined8 param_1)

{
  undefined1 in_ZR;
  uint extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ce5d0();
  if ((bool)in_ZR) {
    func_0x00010b4cf1ac();
    if ((extraout_w8 & 1) != 0) {
      func_0x00010b4cebc8();
    }
    func_0x00010b4ce954();
    func_0x00010b4c36ac();
    *(undefined8 *)(unaff_x20 + unaff_x19) = param_1;
  }
  return;
}



/* Entry: 10b4ccde4; end: 10b4cd063;  */

ulong FUN_10b4ccde4(ulong param_1)

{
  undefined1 uVar1;
  int extraout_w8;
  int extraout_w9;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int iVar2;
  undefined8 uStack_38;
  
  func_0x000107c39994();
  do {
    while( true ) {
      uVar1 = unaff_x19 == unaff_x21;
      if ((unaff_x21 <= unaff_x19) || (func_0x000107c39978(), unaff_x19 = param_1, param_1 == 0)) {
        return unaff_x19;
      }
      func_0x00010b4ceed0();
      iVar2 = (int)uStack_38;
      if ((bool)uVar1) break;
      func_0x00010b4cf038();
      if ((param_1 & 1) == 0) goto LAB_10b4cce44;
LAB_10b4cce2c:
      param_1 = *(ulong *)(unaff_x20 + 0x28);
      func_0x000108767594(param_1,(long)iVar2);
    }
    func_0x00010b4ce858();
    if (extraout_w8 <= iVar2 && iVar2 < extraout_w9) goto LAB_10b4cce2c;
LAB_10b4cce44:
    param_1 = *(ulong *)(unaff_x20 + 0x10);
    FUN_10b4c7f90(param_1,*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x30),
                  *(undefined4 *)(unaff_x20 + 0x20),uStack_38);
  } while( true );
}



/* Entry: 10b4cd064; end: 10b4cd1d3;  */

undefined8 * FUN_10b4cd064(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 uVar5;
  ulong uVar6;
  short *in_x4;
  code *UNRECOVERED_JUMPTABLE;
  uint unaff_w19;
  ushort *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar7;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *unaff_x30;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  while( true ) {
    func_0x000107c39b14();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    func_0x000107c39a5c();
    func_0x00010b4cf1c4();
    func_0x000107c39b68();
    uVar7 = (uint)unaff_x23;
    uVar2 = uVar7 & 7;
    uVar5 = uVar2 == 2;
    if (!(bool)uVar5) break;
    puVar8 = unaff_x21;
    func_0x000107c39aa4();
    uVar6 = unaff_x23;
    func_0x000107c39a38();
    func_0x00010b4ce8b8();
    func_0x000107c39b14();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    func_0x000107c399e8();
    func_0x00010b4cf0e4();
    if ((bool)uVar5) {
      puVar1 = (undefined4 *)((long)unaff_x20 + (uVar6 >> 0x20));
      uVar4 = *(ushort *)((long)puVar1 + 10);
      func_0x00010b4ce804();
      func_0x000107c39a8c();
      if ((uVar4 & 0x1c0) == 0xc0) {
        FUN_10b4ccd3c();
        func_0x00010b4cf250();
        FUN_10b4cbe9c();
      }
      else {
        func_0x00010b4ccd74(puVar8,*puVar1);
        func_0x00010b4cf250();
        FUN_10b4cbfb4();
      }
      if (puVar8 == (undefined8 *)0x0) {
        func_0x00010b4ce184();
        goto LAB_10b4cde44;
      }
      if ((undefined8 *)*unaff_x22 <= puVar8) {
        if (*unaff_x20 == 0) {
          return puVar8;
        }
        func_0x000107c39990();
        return puVar8;
      }
      func_0x000107c398fc(*(undefined2 *)puVar8);
      func_0x00010b4ce174();
      goto LAB_107c3991c;
    }
    param_1 = unaff_x21;
    func_0x00010b4ce174();
    func_0x00010b4ce8b8();
  }
  func_0x00010b4ce804();
  if ((*(ushort *)((long)unaff_x20 + (unaff_x23 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar5 = (unaff_x23 & 7) != 0;
    if (uVar2 != 1) {
LAB_10b4cd18c:
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      func_0x000107c39aa4();
      puVar8 = unaff_x21;
      goto LAB_10b4cd19c;
    }
    FUN_10b4ccd3c();
    do {
      puVar8 = unaff_x24 + 1;
      uVar9 = *unaff_x24;
      unaff_x24 = param_1;
      FUN_10b4cbe14();
      *unaff_x24 = uVar9;
      func_0x000107c39af4();
      if ((bool)uVar5) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (unaff_x24 == (undefined8 *)0x0) {
LAB_10b4cd1c8:
        func_0x00010b4ce184();
LAB_10b4cde44:
        if (*in_x4 != 0) {
          func_0x000107c39bb4();
        }
        return (undefined8 *)0x0;
      }
      uVar5 = uVar7 <= uStack000000000000000c;
    } while (uStack000000000000000c == uVar7);
  }
  else {
    uVar5 = 4 < uVar2;
    if (uVar2 != 5) goto LAB_10b4cd18c;
    func_0x00010b4ccd74();
    do {
      puVar8 = (undefined8 *)((long)unaff_x24 + 4);
      uVar3 = *(undefined4 *)unaff_x24;
      unaff_x24 = param_1;
      func_0x00010b4cbe58();
      *(undefined4 *)unaff_x24 = uVar3;
      func_0x000107c39af4();
      if ((bool)uVar5) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (unaff_x24 == (undefined8 *)0x0) goto LAB_10b4cd1c8;
      uVar5 = uVar7 <= uStack0000000000000008;
    } while (uStack0000000000000008 == uVar7);
  }
  func_0x000107c39b50();
  if ((bool)uVar5) {
LAB_10b4cd1a8:
    uVar4 = *unaff_x20;
    if (uVar4 != 0) {
      *(uint *)((long)unaff_x21 + (ulong)uVar4) =
           *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | unaff_w19;
    }
    return puVar8;
  }
  func_0x000107c398fc(*(undefined2 *)puVar8);
  puVar8 = unaff_x24;
LAB_10b4cd19c:
  func_0x000107c39a38();
LAB_107c3991c:
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar8;
}



/* Entry: 10b4cd1d4; end: 10b4cd427;  */

undefined8 *
FUN_10b4cd1d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             ushort *param_5,uint param_6)

{
  uint *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  code *unaff_x30;
  undefined8 *in_stack_00000018;
  
  func_0x000107c39b38();
  UNRECOVERED_JUMPTABLE = unaff_x30;
  func_0x00010b4cf1c4();
  if (((uint)unaff_x23 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    func_0x00010b4ceccc(param_1,param_2);
    goto code_r0x0001000647c0;
  }
  puVar1 = (uint *)((long)param_5 + (unaff_x23 >> 0x20));
  uVar2 = *(ushort *)((long)puVar1 + 10);
  puVar10 = param_1;
  FUN_10b4c99a4(param_1,param_5);
  puVar4 = param_2;
  if ((uVar2 & 0x1c0) == 0x100) {
    uVar9 = (ulong)*puVar1;
    puVar8 = *(undefined8 **)((long)puVar10 + uVar9);
    uVar3 = puVar8 == (undefined8 *)&UNK_10e5b4a80;
    puVar4 = puVar10;
    if ((bool)uVar3) {
      puVar8 = (undefined8 *)param_1[1];
      if (((ulong)puVar8 & 1) != 0) {
        func_0x00010b4cebc8();
        puVar8 = extraout_x8;
      }
      puVar4 = &stack0x00000018;
      in_stack_00000018 = puVar8;
      func_0x00010b4c376c();
      *(undefined8 **)((long)puVar10 + uVar9) = puVar4;
      puVar8 = puVar4;
    }
    if (puVar8[2] != 0) {
      func_0x00010b4ce140();
      func_0x00010b4ce510();
      if ((bool)uVar3) {
        puVar10 = (undefined8 *)puVar4[2];
        puVar4 = puVar8;
        func_0x00010b4cc3a0();
        if ((int)puVar4 != 0) {
          do {
            in_stack_00000018 = param_2;
            func_0x000107c39a58();
            if (in_stack_00000018 == (undefined8 *)0x0) goto LAB_10b4c5d10;
            if (puVar10[5] == 0) {
              puVar6 = puVar10;
              FUN_10b4d75d0();
            }
            else {
              lVar7 = puVar10[5] + -0x18;
              puVar10[5] = lVar7;
              puVar6 = (undefined8 *)(puVar10[4] + lVar7 + 0x10);
            }
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar4 = puVar8;
            func_0x00010b4cc3c8();
            func_0x00010b4cecd8();
            func_0x000107c30268();
            if (puVar4 == (undefined8 *)0x0) goto LAB_10b4c5d10;
            puVar5 = puVar4;
            func_0x00010b4ceba4();
            if ((long)puVar6 < 0) {
              puVar5 = (undefined8 *)*puVar5;
            }
            func_0x00010b4ce828();
            if (((ulong)puVar5 & 1) == 0) goto LAB_10b4c5d10;
            uVar3 = puVar4 == (undefined8 *)*unaff_x22;
            if ((undefined8 *)*unaff_x22 <= puVar4) goto LAB_10b4cd414;
            param_2 = puVar4;
            func_0x00010b4ce6b8(puVar4,&stack0x00000014);
            func_0x00010b4cf124();
          } while ((bool)uVar3);
          goto LAB_10b4cd3b0;
        }
      }
    }
    do {
      puVar10 = puVar8;
      func_0x000107c303b4();
      puVar4 = puVar10;
      func_0x000107c39ab8();
      if (puVar4 == (undefined8 *)0x0) {
LAB_10b4c5d10:
        if (*param_5 != 0) {
          func_0x000107c39bb4(param_1,unaff_x30);
        }
        return (undefined8 *)0x0;
      }
      lVar7 = (long)*(char *)((long)puVar10 + 0x17);
      puVar6 = puVar10;
      if (lVar7 < 0) {
        puVar6 = (undefined8 *)*puVar10;
        lVar7 = puVar10[1];
      }
      func_0x00010b4ce828(puVar6,lVar7);
      if (((ulong)puVar6 & 1) == 0) goto LAB_10b4c5d10;
      uVar3 = puVar4 == (undefined8 *)*unaff_x22;
      if ((undefined8 *)*unaff_x22 <= puVar4) goto LAB_10b4cd414;
      func_0x00010b4ce6b8(puVar4,&stack0x00000014);
      func_0x00010b4cf124();
    } while ((bool)uVar3);
  }
LAB_10b4cd3b0:
  if (puVar4 < (undefined8 *)*unaff_x22) {
    func_0x000107c39948(*(undefined2 *)puVar4);
code_r0x0001000647c0:
                    /* WARNING: Could not recover jumptable at 0x0001000647d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  uVar2 = *param_5;
joined_r0x00010b4cd420:
  if (uVar2 != 0) {
    *(uint *)((long)param_1 + (ulong)uVar2) = *(uint *)((long)param_1 + (ulong)uVar2) | param_6;
  }
  return puVar4;
LAB_10b4cd414:
  uVar2 = *param_5;
  goto joined_r0x00010b4cd420;
}



/* Entry: 10b4cd428; end: 10b4cd76f;  */

void FUN_10b4cd428(undefined8 param_1)

{
  undefined1 in_ZR;
  uint extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ce5d0();
  if ((bool)in_ZR) {
    func_0x00010b4cf1ac();
    if ((extraout_w8 & 1) != 0) {
      func_0x00010b4cebc8();
    }
    func_0x00010b4ce954();
    func_0x00010b4cd460();
    *(undefined8 *)(unaff_x20 + unaff_x19) = param_1;
  }
  return;
}



/* Entry: 10b4cd770; end: 10b4cd807;  */

long FUN_10b4cd770(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *param_1;
  uVar3 = (uint)uVar4;
  if ((uVar3 >> 7 & 1) == 0) {
    *param_2 = uVar3 & 0x7f;
    return (long)param_1 + 1;
  }
  if ((uVar3 >> 0xf & 1) == 0) {
    *param_2 = uVar3 & 0x7f | ((uint)(uVar4 >> 8) & 0x7f) << 7;
    return (long)param_1 + 2;
  }
  uVar5 = (*(ulong *)((long)param_1 + 2) ^ 0xffffffffffffffff) & 0x8080808080808080;
  uVar6 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
  lVar2 = 0;
  if (uVar5 != 0) {
    lVar2 = (long)param_1 + (uVar6 >> 3) + 3;
  }
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = (uVar3 & 0x7f | (uint)((uVar4 >> 8 & 0x7f | (uVar4 >> 0x10 & 0x7f) << 7) << 7) |
            (uint)((uVar4 >> 0x18 & 0x7f | (uVar4 >> 0x20 & 0x7f) << 7) << 0x15)) &
            ((uint)(-0x4000L << (uVar6 - (uVar6 >> 3) & 0x3f)) ^ 0xffffffff);
  }
  *param_2 = uVar1;
  return lVar2;
}



/* Entry: 10b4cd808; end: 10b4cdd87;  */

ulong FUN_10b4cd808(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x21;
  
  func_0x000107c39994();
  while ((unaff_x19 < unaff_x21 && (func_0x000107c39978(), unaff_x19 = param_1, param_1 != 0))) {
    func_0x00010b4ce6a4();
  }
  return unaff_x19;
}



/* Entry: 10b4cdd88; end: 10b4cddcb;  */

undefined8 * FUN_10b4cdd88(undefined8 *param_1,long param_2)

{
  ushort *unaff_x19;
  
  func_0x000107c39af0();
  if (param_2 < 0) {
    param_1 = (undefined8 *)*param_1;
  }
  func_0x000107c2ba54();
  if (((ulong)param_1 & 1) == 0) {
    FUN_10b4c9354((uint)*unaff_x19 + (int)(char)*unaff_x19 >> 1,*(undefined8 *)(unaff_x19 + 4));
  }
  return param_1;
}



/* Entry: 10b4cddcc; end: 10b4cf347;  */

undefined1 * FUN_10b4cddcc(void)

{
  undefined1 *puVar1;
  int in_stack_00000000;
  undefined4 uStack0000000000000014;
  undefined1 auStack_138 [264];
  
  uStack0000000000000014 = 0x10;
  if (in_stack_00000000 < 0x11) {
    return (undefined1 *)0x0;
  }
  func_0x00010ae6abb8(auStack_138,&UNK_10f773ed4);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,(long)in_stack_00000000);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,0x10);
  puVar1 = auStack_138;
  func_0x00010ae6a8f8(puVar1);
  func_0x00010ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10b4cf348; end: 10b4cf37b;  */

undefined8 FUN_10b4cf348(long param_1)

{
  undefined8 unaff_x20;
  
  if (param_1 == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010b4cf4b4();
    func_0x00010b4cf4a0();
  }
  return unaff_x20;
}



/* Entry: 10b4cf37c; end: 10b4cf42b;  */

void FUN_10b4cf37c(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x00010b4cf4b4();
  (**(code **)(*plVar1 + 0x20))();
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x20))(param_2,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}



/* Entry: 10b4cf42c; end: 10b4cf48b;  */

long * FUN_10b4cf42c(long param_1,long *param_2,long param_3)

{
  long *unaff_x20;
  
  if ((param_1 == 0) || (param_3 != 0)) {
    (**(code **)(*param_2 + 0x10))(param_2);
    func_0x00010b4cf4a0();
  }
  else {
    unaff_x20 = param_2;
    if (param_2 != (long *)0x0) {
      FUN_10b4d8014(param_1,param_2,&UNK_1053a933c);
    }
  }
  return unaff_x20;
}



/* Entry: 10b4cf48c; end: 10b4cf4c3;  */

int * FUN_10b4cf48c(long param_1,undefined8 param_2,undefined4 param_3,int param_4,int *param_5)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uStack_54;
  
  if (*(short *)(param_1 + 10) == 0) {
    return param_5;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  uStack_54 = param_3;
  if ((long)*(short *)(param_1 + 10) < 0) {
    piVar6 = *(int **)(piVar3 + 2);
    bVar2 = *(byte *)((long)piVar6 + 10);
    puVar4 = &uStack_54;
    FUN_10b4c2068();
    puVar5 = puVar4;
    while ((piVar3 != piVar6 || (uint)puVar5 != (uint)bVar2 &&
           (uVar1 = (uint)puVar5 & 0xff, piVar3[(ulong)uVar1 * 8 + 4] < param_4))) {
      param_5 = piVar3 + (ulong)uVar1 * 8 + 6;
      func_0x00010b4c5554(param_5);
      func_0x00010b4c5408();
      puVar5 = (undefined4 *)((ulong)puVar4 & 0xffffffff);
    }
  }
  else {
    piVar6 = piVar3 + (long)*(short *)(param_1 + 10) * 8;
    FUN_10b4c2a04(piVar3,piVar6,&uStack_54);
    for (; (piVar3 != piVar6 && (*piVar3 < param_4)); piVar3 = piVar3 + 8) {
      param_5 = piVar3 + 2;
      func_0x00010b4c5554();
    }
  }
  func_0x00010b4c54e0(param_5);
  return param_5;
}



/* Entry: 10b4cf4c4; end: 10b4cf50f;  */

undefined8 FUN_10b4cf4c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2[3] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)*param_2 + 0x20);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_10b4cf9c0(param_2);
    __ZdlPv();
  }
  return uVar1;
}



/* Entry: 10b4cf510; end: 10b4cf5a7;  */

void FUN_10b4cf510(long param_1,ulong param_2,long param_3,ulong param_4)

{
  long extraout_x8;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  puVar2 = (undefined8 *)(lVar1 + -1);
  if (*(long *)*puVar2 != param_3 || (param_4 & 0xffffffff) != 0) {
    FUN_10b4cf5a8(param_3,param_4);
    func_0x00010b4d1160();
    **(undefined8 **)(extraout_x8 + 0x20) = *(undefined8 *)**(undefined8 **)(extraout_x8 + 0x20);
  }
  func_0x00010b4cf5c4(puVar2,param_3,param_4);
  if (*(long *)(lVar1 + 0x17) == 0) {
    FUN_10b4cf4c4(param_1,puVar2);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = 0;
  }
  return;
}



/* Entry: 10b4cf5a8; end: 10b4cf5db;  */

void FUN_10b4cf5a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10b4cfc58(param_1,param_2,1);
  return;
}



/* Entry: 10b4cf5dc; end: 10b4cf617;  */

void FUN_10b4cf5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10b4cf618(&uStack_30);
  func_0x0001053aba88(param_1,puVar1);
  return;
}



/* Entry: 10b4cf618; end: 10b4cf643;  */

void FUN_10b4cf618(long *param_1)

{
  long lStack_20;
  long lStack_18;
  
  lStack_20 = *param_1;
  lStack_18 = param_1[1];
  if (lStack_20 != 0) {
    func_0x000107c2817c(&lStack_20);
  }
  return;
}



/* Entry: 10b4cf644; end: 10b4cf73f;  */

void FUN_10b4cf644(ulong param_1,ulong param_2,code *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_60;
  ulong uStack_58;
  undefined8 *puStack_48;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  uVar1 = uVar3;
  puStack_48 = param_4;
  if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
    uVar1 = param_1;
    FUN_10b4cf740(param_1,uVar3,param_3);
    *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = uVar1;
  }
  (*param_3)();
  func_0x00010b4d122c(&lStack_60);
  if (lStack_60 != **(long **)(uVar1 - 1) || (uStack_58 & 0xffffffff) != 0) {
    FUN_10b4cf5a8(lStack_60,uStack_58);
    func_0x00010b4d1160();
    **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
  }
  FUN_10b4cf834(lStack_60,uStack_58,1);
  if (*(long *)(uVar1 + 0xf) == lStack_60 &&
      (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar1 + 0xf) + 10)) {
    uVar2 = 0;
  }
  else {
    func_0x00010b4d1160();
    uVar2 = *(undefined8 *)(extraout_x8_00 + 0x20);
  }
  *puStack_48 = uVar2;
  return;
}



/* Entry: 10b4cf740; end: 10b4cf833;  */

ulong FUN_10b4cf740(long param_1,long ****param_2,code *param_3)

{
  undefined8 *puVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  undefined8 *puVar4;
  long lStack_60;
  uint uStack_58;
  long ***ppplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  ppplStack_38 = (long ***)param_2;
  if (puVar4 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    pppplVar2 = param_2;
    __Znwm();
  }
  else {
    pppplVar2 = (long ****)0x20;
    puVar1 = puVar4;
    FUN_10b4d7e6c(puVar4,0x20,8,FUN_10b4d1024);
  }
  *puVar1 = &PTR_LOOP_110cf0c70;
  puVar1[1] = puVar4;
  puVar1[2] = &PTR_LOOP_110cf0c70;
  puVar1[3] = 0;
  while (param_2 != (long ****)0x0) {
    (*param_3)();
    pppplVar3 = &ppplStack_48;
    ppplStack_48 = (long ***)param_2;
    ppplStack_40 = (long ***)pppplVar2;
    func_0x00010b4d122c(&lStack_60);
    param_2 = (long ****)*ppplStack_38;
    pppplVar2 = pppplVar3;
    ppplStack_38 = (long ***)param_2;
  }
  lStack_60 = puVar1[2];
  uStack_58 = (uint)*(byte *)(lStack_60 + 10);
  pppplVar2 = (long ****)0x0;
  do {
    func_0x00010b4d1270();
    ppplStack_38 = *(long ****)(lStack_60 + (ulong)(uStack_58 & 0xff) * 0x18 + 0x20);
    *ppplStack_38 = (long **)pppplVar2;
    pppplVar2 = (long ****)ppplStack_38;
  } while (uStack_58 != 0 || lStack_60 != *(long *)*puVar1);
  return (ulong)puVar1 | 1;
}



/* Entry: 10b4cf834; end: 10b4cf85f;  */

undefined1  [16] FUN_10b4cf834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b4cfc84(&uStack_20,param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b4cf860; end: 10b4cf927;  */

void FUN_10b4cf860(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar2 = param_1;
  FUN_10b4cf4c4();
  do {
    while( true ) {
      puVar7 = (undefined8 *)*puVar2;
      puVar3 = puVar2;
      (*param_3)(puVar2);
      puVar4 = param_1;
      FUN_10b4cf5dc(param_1,puVar3,param_2);
      lVar5 = param_1[2];
      puVar8 = (undefined8 *)((ulong)puVar4 & 0xffffffff);
      uVar6 = *(ulong *)(lVar5 + ((ulong)puVar4 & 0xffffffff) * 8);
      if (uVar6 != 0) break;
      *puVar2 = 0;
      *(undefined8 **)(lVar5 + (long)puVar8 * 8) = puVar2;
      uVar1 = (uint)puVar4;
      if (*(uint *)((long)param_1 + 0xc) <= (uint)puVar4) {
        uVar1 = *(uint *)((long)param_1 + 0xc);
      }
      *(uint *)((long)param_1 + 0xc) = uVar1;
      param_2 = puVar3;
      puVar2 = puVar7;
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
    }
    if (((uVar6 & 1) == 0) &&
       (puVar3 = param_1, param_2 = puVar8, func_0x0001053abc1c(), ((ulong)puVar3 & 1) == 0)) {
      lVar5 = param_1[2];
      *puVar2 = *(undefined8 *)(lVar5 + (long)puVar8 * 8);
      *(undefined8 **)(lVar5 + (long)puVar8 * 8) = puVar2;
    }
    else {
      FUN_10b4cf644(param_1,puVar8,param_3,puVar2);
      param_2 = puVar8;
    }
    puVar2 = puVar7;
  } while (puVar7 != (undefined8 *)0x0);
  return;
}



/* Entry: 10b4cf928; end: 10b4cf9a7;  */

undefined1  [16]
FUN_10b4cf928(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = (uint)&uStack_40;
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  lVar4 = lVar3 + -1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_10b4cf9a8();
  if (param_5 != (long *)0x0) {
    *param_5 = lVar4;
    *(uint *)(param_5 + 1) = uVar1;
  }
  lVar3 = *(long *)(lVar3 + 0xf);
  if (lVar3 == lVar4 && uVar1 == *(byte *)(lVar3 + 10)) {
    uVar2 = 0;
  }
  else {
    func_0x00010b4d1160();
    uVar2 = *(undefined8 *)(extraout_x8 + 0x20);
  }
  auVar5._8_8_ = param_2 & 0xffffffff;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10b4cf9a8; end: 10b4cf9bf;  */

void FUN_10b4cf9a8(void)

{
  FUN_10b4d1028();
  return;
}



/* Entry: 10b4cf9c0; end: 10b4cf9e3;  */

undefined8 FUN_10b4cf9c0(undefined8 param_1)

{
  FUN_10b4cf9e4();
  return param_1;
}



/* Entry: 10b4cf9e4; end: 10b4cfa1f;  */

void FUN_10b4cf9e4(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    FUN_10b4cfa20(*param_1,param_1 + 1);
  }
  *param_1 = &PTR_LOOP_110cf0c70;
  param_1[2] = &PTR_LOOP_110cf0c70;
  param_1[3] = 0;
  return;
}



/* Entry: 10b4cfa20; end: 10b4cfb33;  */

void FUN_10b4cfa20(long param_1)

{
  byte bVar1;
  char cVar2;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b4d1220();
  if (*(char *)(param_1 + 0xb) == '\0') {
    if (*(char *)((long)unaff_x20 + 10) != '\0') {
      lVar5 = *unaff_x20;
      do {
        func_0x00010b4cfb94();
      } while (*(char *)((long)unaff_x20 + 0xb) == '\0');
      uVar6 = (ulong)*(byte *)(unaff_x20 + 1);
      plVar3 = (long *)*unaff_x20;
      do {
        plVar4 = plVar3;
        func_0x00010b4cfc20();
        plVar4 = (long *)plVar4[uVar6];
        cVar2 = *(char *)((long)plVar4 + 0xb);
        if (cVar2 == '\0') {
          while (cVar2 == '\0') {
            func_0x00010b4cfb94();
            cVar2 = *(char *)((long)plVar4 + 0xb);
          }
          uVar6 = (ulong)*(byte *)(plVar4 + 1);
          plVar3 = (long *)*plVar4;
        }
        FUN_10b4cfb34(cVar2);
        if (*unaff_x19 == 0) {
          func_0x000107c39c38();
        }
        plVar4 = plVar3;
        if (*(byte *)((long)plVar3 + 10) <= uVar6) {
          do {
            bVar1 = *(byte *)(plVar4 + 1);
            uVar6 = (ulong)bVar1;
            plVar3 = (long *)*plVar4;
            func_0x00010b4cfb68();
            if (*unaff_x19 == 0) {
              __ZdlPv(plVar4);
            }
            if (plVar3 == (long *)lVar5) {
              return;
            }
            plVar4 = plVar3;
          } while (*(byte *)((long)plVar3 + 10) <= bVar1);
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x00010b4cfb68();
  }
  else {
    FUN_10b4cfb34();
  }
  if (*unaff_x19 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4cfb34; end: 10b4cfbab;  */

void FUN_10b4cfb34(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 4;
  uStack_20 = 0;
  uStack_28 = param_1;
  FUN_10b4cfbcc(&uStack_40);
  return;
}



/* Entry: 10b4cfbac; end: 10b4cfbcb;  */

ulong FUN_10b4cfbac(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + 7U & 0xfffffffffffffff8;
}



/* Entry: 10b4cfbcc; end: 10b4cfc57;  */

long FUN_10b4cfbcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b4cfbf0();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 10b4cfc58; end: 10b4cfc83;  */

undefined1  [16] FUN_10b4cfc58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b4cfc84(&uStack_20,-param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b4cfc84; end: 10b4cfcc7;  */

void FUN_10b4cfc84(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b4d1220();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_10b4cfd94();
    }
  }
  else {
    while (0 < unaff_x19) {
      FUN_10b4cfcc8();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 10b4cfcc8; end: 10b4cfcf3;  */

void FUN_10b4cfcc8(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_28;
  
  if ((*(char *)(*param_1 + 0xb) != '\0') &&
     (iVar1 = (int)param_1[1] + 1, *(int *)(param_1 + 1) = iVar1,
     iVar1 < (int)(uint)*(byte *)(*param_1 + 10))) {
    return;
  }
  plVar2 = (long *)*param_1;
  if (*(char *)((long)plVar2 + 0xb) == '\0') {
    lVar3 = param_1[1];
    func_0x00010b4cfc20();
    lVar3 = plVar2[(int)lVar3 + 1U & 0xff];
    while (*param_1 = lVar3, *(char *)(lVar3 + 0xb) == '\0') {
      func_0x00010b4cfb94();
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar6 = param_1[1];
    lVar3 = *param_1;
    uVar4 = *(uint *)(param_1 + 1);
    while (uVar4 == *(byte *)((long)plVar2 + 10)) {
      plVar5 = (long *)*plVar2;
      if (*(char *)((long)plVar5 + 0xb) != '\0') {
        *param_1 = lVar3;
        uStack_28 = (undefined4)lVar6;
        *(undefined4 *)(param_1 + 1) = uStack_28;
        return;
      }
      uVar4 = (uint)*(byte *)(plVar2 + 1);
      *(uint *)(param_1 + 1) = uVar4;
      *param_1 = (long)plVar5;
      plVar2 = plVar5;
    }
  }
  return;
}



/* Entry: 10b4cfcf4; end: 10b4cfd93;  */

void FUN_10b4cfcf4(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uStack_28;
  
  plVar1 = (long *)*param_1;
  if (*(char *)((long)plVar1 + 0xb) == '\0') {
    lVar2 = param_1[1];
    func_0x00010b4cfc20();
    lVar2 = plVar1[(int)lVar2 + 1U & 0xff];
    while (*param_1 = lVar2, *(char *)(lVar2 + 0xb) == '\0') {
      func_0x00010b4cfb94();
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar5 = param_1[1];
    lVar2 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
    while (uVar3 == *(byte *)((long)plVar1 + 10)) {
      plVar4 = (long *)*plVar1;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar2;
        uStack_28 = (undefined4)lVar5;
        *(undefined4 *)(param_1 + 1) = uStack_28;
        return;
      }
      uVar3 = (uint)*(byte *)(plVar1 + 1);
      *(uint *)(param_1 + 1) = uVar3;
      *param_1 = (long)plVar4;
      plVar1 = plVar4;
    }
  }
  return;
}



/* Entry: 10b4cfd94; end: 10b4cfdbb;  */

void FUN_10b4cfd94(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  if ((*(char *)(*param_1 + 0xb) != '\0') &&
     (lVar5 = param_1[1], *(int *)(param_1 + 1) = (int)lVar5 + -1, 0 < (int)lVar5)) {
    return;
  }
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x00010b4cfc20();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_10b4cfe48:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_10b4cfe48;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 10b4cfdbc; end: 10b4cfe53;  */

void FUN_10b4cfdbc(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x00010b4cfc20();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_10b4cfe48:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_10b4cfe48;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 10b4cfe54; end: 10b4d0153;  */

undefined1  [16] FUN_10b4cfe54(undefined **param_1,undefined **param_2,ulong param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined **ppuVar6;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  long lVar7;
  long extraout_x8;
  long extraout_x9;
  uint extraout_w10;
  undefined4 extraout_w10_00;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  bool bVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  cVar2 = *(char *)((long)param_2 + 0xb);
  iVar8 = (int)param_3;
  ppuVar6 = param_1;
  if (cVar2 == '\0') {
    func_0x00010b4d1270();
    puVar15 = param_2[(long)iVar8 * 3 + 3];
    puVar11 = param_2[(long)iVar8 * 3 + 2];
    param_2[(long)iVar8 * 3 + 4] = param_2[(long)iVar8 * 3 + 4];
    param_2[(long)iVar8 * 3 + 3] = puVar15;
    param_2[(long)iVar8 * 3 + 2] = puVar11;
  }
  else {
    uVar12 = (uint)*(byte *)((long)param_2 + 10) - (iVar8 + 1U);
    lVar7 = (ulong)(iVar8 + 1U & 0xff) * 0x18 + 0x10;
    if ((uVar12 & 0xff) * 2 + (uVar12 & 0xff) != 0) {
      do {
        func_0x00010b4d113c(lVar7);
        lVar7 = extraout_x8 + 0x18;
      } while (extraout_x9 != 0x18);
    }
  }
  *(char *)((long)param_2 + 10) = *(char *)((long)param_2 + 10) + -1;
  param_1[3] = param_1[3] + -1;
  bVar14 = true;
  ppuVar9 = param_2;
  uVar13 = param_3;
  ppuStack_70 = param_2;
  uStack_68 = param_3;
  while( true ) {
    uVar12 = (uint)param_3;
    ppuVar10 = (undefined **)*param_1;
    if (ppuVar9 == ppuVar10) break;
    if (4 < *(byte *)((long)ppuVar9 + 10)) goto LAB_10b4d00e4;
    puVar11 = *ppuVar9;
    cVar3 = *(char *)(ppuVar9 + 1);
    uVar12 = (uint)uVar13;
    bVar4 = 0;
    if (cVar3 == '\0') {
LAB_10b4cff90:
      ppuVar10 = ppuVar9;
      if ((uint)bVar4 < (uint)(byte)puVar11[10]) {
        func_0x00010b4d1158();
        if (10 < (uint)*(byte *)((long)ppuVar9 + 10) + (uint)(byte)ppuVar6[bVar4 + 1][10] + 1) {
          bVar5 = 5 < (byte)ppuVar6[bVar4 + 1][10];
          if ((!bVar5) ||
             ((*(byte *)((long)ppuVar9 + 10) != 0 && (bVar5 = uVar12 != 0, (int)uVar12 < 1))))
          goto LAB_10b4d0008;
          func_0x00010b4d11b8();
          uVar1 = extraout_w8_00;
          if (bVar5) {
            uVar1 = extraout_w10_00;
          }
          ppuVar6 = ppuVar9;
          func_0x00010b4d02f4(ppuVar9,uVar1);
          goto LAB_10b4d006c;
        }
        ppuVar6 = param_1;
        FUN_10b4d0154(param_1,ppuVar9);
        bVar5 = true;
      }
      else {
LAB_10b4d0008:
        cVar3 = *(char *)(ppuVar9 + 1);
        bVar5 = false;
        if (cVar3 != '\0') {
          func_0x00010b4d1158();
          ppuVar6 = (undefined **)ppuVar6[(byte)(cVar3 - 1)];
          if (5 < *(byte *)((long)ppuVar6 + 10)) {
            bVar4 = *(byte *)((long)ppuVar9 + 10);
            bVar5 = true;
            if ((bVar4 == 0) || (bVar5 = bVar4 <= uVar12, (int)uVar12 < (int)(uint)bVar4)) {
              func_0x00010b4d11b8();
              uVar12 = extraout_w8;
              if (bVar5) {
                uVar12 = extraout_w10;
              }
              func_0x00010b4d0458();
              bVar5 = false;
              uVar13 = uVar13 + uVar12;
              goto LAB_10b4d0070;
            }
          }
LAB_10b4d006c:
          bVar5 = false;
        }
      }
    }
    else {
      func_0x00010b4d1158();
      ppuVar10 = (undefined **)ppuVar6[(byte)(cVar3 - 1)];
      iVar8 = *(byte *)((long)ppuVar10 + 10) + 1;
      if (10 < iVar8 + (uint)*(byte *)((long)ppuVar9 + 10)) {
        bVar4 = *(byte *)(ppuVar9 + 1);
        goto LAB_10b4cff90;
      }
      uVar13 = (ulong)(iVar8 + uVar12);
      ppuVar6 = param_1;
      FUN_10b4d0154(param_1,ppuVar10,ppuVar9);
      bVar5 = true;
    }
LAB_10b4d0070:
    if (bVar14) {
      uStack_68 = CONCAT44(uStack_68._4_4_,(int)uVar13);
      param_2 = ppuVar10;
      param_3 = uVar13;
      ppuStack_70 = ppuVar10;
    }
    uVar12 = (uint)param_3;
    if (!bVar5) goto LAB_10b4d00e4;
    bVar14 = false;
    uVar13 = (ulong)*(byte *)(ppuVar10 + 1);
    ppuVar9 = (undefined **)*ppuVar10;
  }
  if (*(char *)((long)ppuVar10 + 10) == '\0') {
    if (*(char *)((long)ppuVar10 + 0xb) == '\0') {
      ppuVar6 = ppuVar10;
      func_0x00010b4cfb94();
      *ppuVar6 = *(undefined **)*ppuVar6;
    }
    else {
      ppuVar6 = &PTR_LOOP_110cf0c70;
      param_1[2] = (undefined *)&PTR_LOOP_110cf0c70;
    }
    *param_1 = (undefined *)ppuVar6;
    FUN_10b4cfa20(ppuVar10,param_1 + 1);
  }
  if (param_1[3] == (undefined *)0x0) {
    param_2 = (undefined **)param_1[2];
    uVar13 = (ulong)*(byte *)((long)param_2 + 10);
  }
  else {
LAB_10b4d00e4:
    uVar13 = uStack_68;
    if (uVar12 == *(byte *)((long)param_2 + 10)) {
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar12 - 1);
      FUN_10b4cfcc8(&ppuStack_70);
      uVar13 = uStack_68;
      param_2 = ppuStack_70;
    }
  }
  uStack_78 = (undefined4)uVar13;
  if (cVar2 == '\0') {
    ppuStack_80 = param_2;
    FUN_10b4cfcc8(&ppuStack_80);
    param_2 = ppuStack_80;
  }
  auVar16._12_4_ = uStack_74;
  auVar16._8_4_ = uStack_78;
  auVar16._0_8_ = param_2;
  return auVar16;
}



/* Entry: 10b4d0154; end: 10b4d05e3;  */

void FUN_10b4d0154(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint extraout_w8;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x10;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  byte bVar8;
  long lVar9;
  
  lVar7 = param_3;
  func_0x00010b4d1220();
  bVar8 = *(byte *)((long)param_2 + 10);
  lVar6 = *param_2 + (ulong)*(byte *)(param_2 + 1) * 0x18;
  lVar5 = *(long *)(lVar6 + 0x20);
  lVar9 = *(long *)(lVar6 + 0x10);
  param_2[(ulong)bVar8 * 3 + 3] = *(long *)(lVar6 + 0x18);
  param_2[(ulong)bVar8 * 3 + 2] = lVar9;
  param_2[(ulong)bVar8 * 3 + 4] = lVar5;
  if ((ulong)*(byte *)(lVar7 + 10) * 3 != 0) {
    do {
      func_0x00010b4d113c();
    } while (extraout_x8 != 0x18);
  }
  cVar2 = *(char *)((long)unaff_x19 + 10);
  if (*(char *)((long)unaff_x19 + 0xb) == '\0') {
    bVar8 = 0;
    while( true ) {
      bVar3 = *(byte *)(param_3 + 10);
      if (bVar3 < bVar8) break;
      func_0x00010b4d1150();
      func_0x00010b4d1194();
      func_0x00010b4d11f0();
      bVar8 = bVar8 + 1;
    }
    cVar2 = *(char *)((long)unaff_x19 + 10);
  }
  else {
    bVar3 = *(byte *)(param_3 + 10);
  }
  *(byte *)((long)unaff_x19 + 10) = bVar3 + cVar2 + '\x01';
  *(undefined1 *)(param_3 + 10) = 0;
  lVar7 = *unaff_x19;
  uVar4 = (uint)*(byte *)(unaff_x19 + 1);
  bVar3 = *(byte *)(lVar7 + 10);
  bVar8 = *(byte *)(unaff_x19 + 1) + 1;
  if ((ulong)bVar3 * 0x18 + ((ulong)bVar8 * 2 + (ulong)bVar8) * -8 != 0) {
    do {
      func_0x00010b4d1114();
      uVar4 = extraout_w8;
    } while (extraout_x10 != 0x18);
  }
  if (*(char *)(lVar7 + 0xb) == '\0') {
    func_0x00010b4d1158();
    lVar5 = *(long *)(param_1 + ((ulong)(uVar4 + 1) & 0xff) * 8);
    FUN_10b4cfa20(lVar5,unaff_x20 + 8);
    while( true ) {
      bVar1 = bVar8 + 1;
      if (bVar3 < bVar1) break;
      func_0x00010b4d1158();
      func_0x00010b4d0608(lVar7,bVar8,*(undefined8 *)(lVar5 + (ulong)bVar1 * 8));
      lVar5 = lVar7;
      FUN_10b4d065c();
      bVar8 = bVar1;
    }
  }
  *(byte *)(lVar7 + 10) = bVar3 - 1;
  if (*(long *)(unaff_x20 + 0x10) == param_3) {
    *(long **)(unaff_x20 + 0x10) = unaff_x19;
  }
  return;
}



/* Entry: 10b4d05e4; end: 10b4d062b;  */

void FUN_10b4d05e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x00010b4d0608();
  *param_3 = param_1;
  return;
}



/* Entry: 10b4d062c; end: 10b4d065b;  */

void FUN_10b4d062c(long param_1)

{
  undefined8 unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b4d1184();
  FUN_10b4d065c();
  func_0x00010b4d11f0();
  *(undefined8 *)(param_1 + (unaff_x20 & 0xffffffff) * 8) = unaff_x19;
  return;
}



/* Entry: 10b4d065c; end: 10b4d0693;  */

long FUN_10b4d065c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b4d1170(1,4);
  func_0x00010b4cfbf0();
  return param_1 + lVar1;
}



/* Entry: 10b4d0694; end: 10b4d06c3;  */

void FUN_10b4d0694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_10b4d06c4(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10b4d06c4; end: 10b4d07a7;  */

void FUN_10b4d06c4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  if (param_2[3] == 0) {
    plVar1 = param_2;
    FUN_10b4d07a8(param_2,1);
    param_2[2] = (long)plVar1;
    *param_2 = (long)plVar1;
  }
  plVar1 = param_2;
  uVar4 = param_3;
  FUN_10b4d07e0();
  plVar2 = plVar1;
  uVar5 = uVar4;
  FUN_10b4d0834();
  if (plVar2 != (long *)0x0) {
    iVar3 = (int)uVar5;
    FUN_10b4d0b4c(param_3,plVar2 + (long)iVar3 * 3 + 2);
    if ((int)param_3 == 0) {
      uVar6 = 0;
      goto LAB_10b4d0780;
    }
  }
  FUN_10b4d0868(param_2,plVar1,uVar4,param_4,param_5,param_6);
  iVar3 = (int)plVar1;
  uVar6 = 1;
  plVar2 = param_2;
LAB_10b4d0780:
  *param_1 = plVar2;
  *(int *)(param_1 + 1) = iVar3;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b4d07a8; end: 10b4d07df;  */

void FUN_10b4d07a8(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  FUN_10b4cfb34();
  func_0x00010b4d1264();
  *(ulong *)uVar1 = uVar1;
  *(undefined2 *)(uVar1 + 8) = 0;
  *(undefined1 *)(uVar1 + 10) = 0;
  *(char *)(uVar1 + 0xb) = (char)param_2;
  return;
}



/* Entry: 10b4d07e0; end: 10b4d0833;  */

undefined1  [16] FUN_10b4d07e0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010b4d1220();
  while( true ) {
    uVar2 = *param_1;
    uVar1 = uVar2;
    FUN_10b4d0b3c();
    if (*(char *)(uVar2 + 0xb) != '\0') break;
    uVar2 = uVar1;
    func_0x00010b4d1150();
    param_1 = (ulong *)(uVar2 + (uVar1 & 0xff) * 8);
  }
  auVar3._8_8_ = uVar1 & 0xffffffff;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10b4d0834; end: 10b4d0867;  */

undefined1  [16] FUN_10b4d0834(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_10b4d0858;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_10b4d0858:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b4d0868; end: 10b4d0a53;  */

undefined1  [16]
FUN_10b4d0868(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  int iVar6;
  int extraout_w8;
  uint uVar8;
  long lVar9;
  ulong extraout_x9;
  long extraout_x11;
  long *plVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  ulong uVar7;
  
  uStack_48 = (uint)param_3;
  uStack_44 = (undefined4)((ulong)param_3 >> 0x20);
  bVar11 = *(byte *)((long)param_2 + 0xb);
  plVar4 = param_1;
  plStack_50 = param_2;
  if (bVar11 == 0) {
    func_0x00010b4d1270();
    uStack_48 = uStack_48 + 1;
    bVar11 = *(byte *)((long)plStack_50 + 0xb);
  }
  plVar5 = plStack_50;
  uVar8 = 10;
  if (bVar11 != 0) {
    uVar8 = (uint)bVar11;
  }
  if (*(byte *)((long)plStack_50 + 10) == uVar8) {
    if (uVar8 < 10) {
      uVar8 = (uVar8 & 0x7f) << 1;
      if (9 < uVar8) {
        uVar8 = 10;
      }
      plVar4 = param_1;
      FUN_10b4d07a8(param_1,uVar8);
      bVar11 = *(byte *)((long)plVar5 + 10);
      for (lVar9 = 0x10; (ulong)bVar11 * -0x18 + lVar9 != 0x10; lVar9 = lVar9 + 0x18) {
        puVar1 = (undefined8 *)((long)plVar5 + lVar9);
        puVar2 = (undefined8 *)((long)plVar4 + lVar9);
        uVar13 = puVar1[1];
        uVar12 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar13;
        *puVar2 = uVar12;
      }
      *(undefined1 *)((long)plVar4 + 10) = *(undefined1 *)((long)plVar5 + 10);
      *(undefined1 *)((long)plVar5 + 10) = 0;
      plStack_50 = plVar4;
      FUN_10b4cfa20(plVar5,param_1 + 1);
      param_1[2] = (long)plVar4;
      *param_1 = (long)plVar4;
      plVar4 = plVar5;
    }
    else {
      plVar4 = param_1;
      func_0x00010b4d0bf4(param_1,&plStack_50);
    }
  }
  plVar5 = plStack_50;
  uVar7 = (ulong)uStack_48 & 0xff;
  iVar6 = (int)uVar7;
  bVar11 = *(byte *)((long)plStack_50 + 10);
  if ((uStack_48 & 0xff) < (uint)bVar11) {
    lVar9 = ((ulong)((uint)bVar11 - iVar6) & 0xff) * -0x18;
    while (lVar9 != 0) {
      func_0x00010b4d11d4();
      uVar7 = extraout_x9;
      iVar6 = extraout_w8;
      lVar9 = extraout_x11;
    }
    bVar11 = *(byte *)((long)plVar5 + 10);
  }
  uVar7 = uVar7 & 0xffffffff;
  plVar10 = (long *)*param_6;
  lVar9 = *(long *)*param_5;
  plVar5[uVar7 * 3 + 3] = ((long *)*param_5)[1];
  plVar5[uVar7 * 3 + 2] = lVar9;
  plVar5[uVar7 * 3 + 4] = *plVar10;
  bVar11 = bVar11 + 1;
  *(byte *)((long)plVar5 + 10) = bVar11;
  if ((*(char *)((long)plVar5 + 0xb) == '\0') && (iVar6 + 1U < (uint)bVar11)) {
    while (iVar6 + 1U < (uint)bVar11) {
      func_0x00010b4d1158();
      plVar10 = plVar4 + (byte)(bVar11 - 1);
      plVar4 = plVar5;
      func_0x00010b4d0608(plVar5,bVar11,*plVar10);
      bVar11 = bVar11 - 1;
    }
    FUN_10b4d065c(plVar5);
  }
  param_1[3] = param_1[3] + 1;
  auVar3._8_4_ = uStack_48;
  auVar3._0_8_ = plStack_50;
  auVar3._12_4_ = uStack_44;
  return auVar3;
}



/* Entry: 10b4d0a54; end: 10b4d0a83;  */

void FUN_10b4d0a54(undefined8 *param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  FUN_10b4d0a84(&uStack_18,param_2 + 7U >> 3);
  return;
}



/* Entry: 10b4d0a84; end: 10b4d0a8b;  */

ulong FUN_10b4d0a84(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_38 [2];
  undefined8 uStack_28;
  
  uVar6 = *param_1;
  uVar4 = param_2 << 3;
  if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar4,param_2,0);
    return uVar4;
  }
  uStack_28 = 0xffffffffffffffff;
  puVar1 = auStack_38;
  auStack_38[0] = uVar4;
  func_0x0001053abb00(puVar1,&uStack_28,
                      "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
  if (puVar1 == (ulong *)0x0) {
    func_0x0001053abb54(uVar6,uVar4,1);
    return uVar6;
  }
  uVar6 = (ulong)*(char *)((long)puVar1 + 0x17);
  puVar2 = puVar1;
  if ((long)uVar6 < 0) {
    puVar2 = (ulong *)*puVar1;
    uVar6 = puVar1[1];
  }
  func_0x00010bdb2a08(auStack_38,
                      "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                      ,0x10a,puVar2,uVar6);
  pcVar3 = "Requested size is too large to fit into size_t.";
  func_0x0001053abb1c(auStack_38,"Requested size is too large to fit into size_t.");
  puVar1 = auStack_38;
  func_0x00010ae6c700();
  uVar6 = 0;
  uVar4 = (ulong)*(byte *)((long)puVar1 + 10);
  while (uVar5 = uVar4, uVar6 != uVar5) {
    uVar4 = uVar6 + uVar5 >> 1;
    puVar2 = puVar1 + uVar4 * 3 + 2;
    FUN_10b4d0b4c(puVar2,pcVar3);
    if ((int)puVar2 != 0) {
      uVar6 = uVar4 + 1;
      uVar4 = uVar5;
    }
  }
  return uVar5;
}



/* Entry: 10b4d0a8c; end: 10b4d0b3b;  */

ulong FUN_10b4d0a8c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_38 [2];
  undefined8 uStack_28;
  
  uVar6 = *param_1;
  uVar4 = param_2 << 3;
  if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar4);
    return uVar4;
  }
  uStack_28 = 0xffffffffffffffff;
  puVar1 = auStack_38;
  auStack_38[0] = uVar4;
  func_0x0001053abb00(puVar1,&uStack_28,
                      "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
  if (puVar1 == (ulong *)0x0) {
    func_0x0001053abb54(uVar6,uVar4,1);
    return uVar6;
  }
  uVar6 = (ulong)*(char *)((long)puVar1 + 0x17);
  puVar2 = puVar1;
  if ((long)uVar6 < 0) {
    puVar2 = (ulong *)*puVar1;
    uVar6 = puVar1[1];
  }
  func_0x00010bdb2a08(auStack_38,
                      "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                      ,0x10a,puVar2,uVar6);
  pcVar3 = "Requested size is too large to fit into size_t.";
  func_0x0001053abb1c(auStack_38,"Requested size is too large to fit into size_t.");
  puVar1 = auStack_38;
  func_0x00010ae6c700();
  uVar6 = 0;
  uVar4 = (ulong)*(byte *)((long)puVar1 + 10);
  while (uVar5 = uVar4, uVar6 != uVar5) {
    uVar4 = uVar6 + uVar5 >> 1;
    puVar2 = puVar1 + uVar4 * 3 + 2;
    FUN_10b4d0b4c(puVar2,pcVar3);
    if ((int)puVar2 != 0) {
      uVar6 = uVar4 + 1;
      uVar4 = uVar5;
    }
  }
  return uVar5;
}



/* Entry: 10b4d0b3c; end: 10b4d0b4b;  */

ulong FUN_10b4d0b3c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = (ulong)*(byte *)(param_1 + 10);
  while (uVar2 = uVar4, uVar3 != uVar2) {
    uVar4 = uVar3 + uVar2 >> 1;
    lVar1 = param_1 + 0x10 + uVar4 * 0x18;
    FUN_10b4d0b4c(lVar1,param_2);
    if ((int)lVar1 != 0) {
      uVar3 = uVar4 + 1;
      uVar4 = uVar2;
    }
  }
  return uVar2;
}



/* Entry: 10b4d0b4c; end: 10b4d0b87;  */

ulong FUN_10b4d0b4c(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1[1] == param_2[1]) {
    uVar1 = *param_1;
    uVar2 = 0;
    if (uVar1 != 0) {
      _memcmp(uVar1,*param_2);
      uVar2 = uVar1 >> 0x1f & 1;
    }
    return uVar2;
  }
  return (ulong)(param_1[1] < (ulong)param_2[1]);
}



/* Entry: 10b4d0b88; end: 10b4d0e17;  */

ulong FUN_10b4d0b88(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  while (uVar2 = param_4, param_3 != uVar2) {
    param_4 = param_3 + uVar2 >> 1;
    lVar1 = param_1 + 0x10 + param_4 * 0x18;
    FUN_10b4d0b4c(lVar1,param_2);
    if ((int)lVar1 != 0) {
      param_3 = param_4 + 1;
      param_4 = uVar2;
    }
  }
  return uVar2;
}



/* Entry: 10b4d0e18; end: 10b4d0e67;  */

undefined8 * FUN_10b4d0e18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  undefined1 unaff_w20;
  long unaff_x21;
  
  func_0x00010b4d1184();
  func_0x00010b4cfb68();
  puVar1 = (undefined8 *)(unaff_x21 + 8);
  FUN_10b4d0a54(puVar1,param_1);
  *puVar1 = unaff_x19;
  *(undefined1 *)(puVar1 + 1) = unaff_w20;
  *(undefined2 *)((long)puVar1 + 9) = 0;
  *(undefined1 *)((long)puVar1 + 0xb) = 0;
  FUN_10b4d065c();
  return puVar1;
}



/* Entry: 10b4d0e68; end: 10b4d1023;  */

void FUN_10b4d0e68(undefined8 *param_1,int param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  ulong extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x10;
  long lVar9;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 == 10) {
    bVar5 = 0;
  }
  else if (param_2 == 0) {
    bVar5 = *(char *)((long)param_1 + 10) - 1;
  }
  else {
    bVar5 = *(byte *)((long)param_1 + 10) >> 1;
  }
  *(byte *)(param_3 + 10) = bVar5;
  *(byte *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) - bVar5;
  puVar7 = param_1 + 2;
  lVar8 = (ulong)*(byte *)(param_3 + 10) * -0x18;
  lVar9 = 0x10;
  puVar4 = param_1;
  while (lVar8 + lVar9 != 0x10) {
    func_0x00010b4d1114();
    puVar7 = extraout_x9;
    lVar8 = extraout_x10;
    lVar9 = extraout_x11 + 0x18;
  }
  bVar5 = *(char *)((long)param_1 + 10) - 1;
  *(byte *)((long)param_1 + 10) = bVar5;
  puVar10 = (undefined8 *)*param_1;
  bVar2 = *(byte *)(param_1 + 1);
  uVar6 = (ulong)bVar2;
  puVar7 = puVar7 + (ulong)bVar5 * 3;
  bVar5 = *(byte *)((long)puVar10 + 10);
  if (bVar2 < bVar5) {
    lVar9 = ((ulong)((uint)bVar5 - (uint)bVar2) & 0xff) * -0x18;
    while (lVar9 != 0) {
      func_0x00010b4d11d4();
      uVar6 = extraout_x8;
      puVar7 = extraout_x9_00;
      lVar9 = extraout_x11_00;
    }
    bVar5 = *(byte *)((long)puVar10 + 10);
  }
  uVar3 = uVar6 & 0xffffffff;
  uVar12 = puVar7[1];
  uVar11 = *puVar7;
  puVar10[uVar3 * 3 + 4] = puVar7[2];
  puVar10[uVar3 * 3 + 3] = uVar12;
  puVar10[uVar3 * 3 + 2] = uVar11;
  bVar5 = bVar5 + 1;
  *(byte *)((long)puVar10 + 10) = bVar5;
  if ((*(char *)((long)puVar10 + 0xb) == '\0') && (uVar1 = (int)uVar6 + 1, uVar1 < bVar5)) {
    while (uVar1 < bVar5) {
      func_0x00010b4d1150();
      puVar7 = puVar4 + (byte)(bVar5 - 1);
      puVar4 = puVar10;
      func_0x00010b4d0608(puVar10,bVar5,*puVar7);
      bVar5 = bVar5 - 1;
    }
    func_0x00010b4d11f0();
  }
  FUN_10b4d062c(*param_1,*(char *)(param_1 + 1) + '\x01',param_3);
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    for (bVar5 = 0; bVar5 <= *(byte *)(param_3 + 10); bVar5 = bVar5 + 1) {
      func_0x00010b4cfc20();
      func_0x00010b4d11b0();
      FUN_10b4d065c(param_1);
    }
  }
  return;
}



/* Entry: 10b4d1024; end: 10b4d1027;  */

undefined8 FUN_10b4d1024(undefined8 param_1)

{
  FUN_10b4cf9e4();
  return param_1;
}



/* Entry: 10b4d1028; end: 10b4d105f;  */

void FUN_10b4d1028(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10b4d108c();
  FUN_10b4d1060(param_1,uVar1,param_2 & 0xffffffff);
  return;
}



/* Entry: 10b4d1060; end: 10b4d108b;  */

undefined1  [16] FUN_10b4d1060(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 0x10);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 10b4d108c; end: 10b4d10e3;  */

undefined1  [16] FUN_10b4d108c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  FUN_10b4d07e0();
  FUN_10b4d0834();
  if ((param_1 == 0) ||
     (FUN_10b4d0b4c(param_2,param_1 + (long)(int)uVar1 * 0x18 + 0x10), (int)param_2 != 0)) {
    uVar1 = 0;
    param_1 = 0;
  }
  auVar2._8_8_ = uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b4d10e4; end: 10b4d1293;  */

void FUN_10b4d10e4(void)

{
  return;
}



/* Entry: 10b4d1294; end: 10b4d1337;  */

long FUN_10b4d1294(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  lVar1 = param_2;
  func_0x000107c39c44();
  if ((*(byte *)(lVar1 + 0x1c) & 1) != 0) {
    lVar1 = lVar1 + 0x20;
    func_0x00010002b82c(param_1,lVar1);
    func_0x000107c613d0(lVar1);
    func_0x000107c60c50(unaff_x20,unaff_x19,lVar1);
    return unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b4d12e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + 0x28))(param_1,param_2);
  return param_2;
}



/* Entry: 10b4d1338; end: 10b4d13c7;  */

void FUN_10b4d1338(undefined8 param_1,long param_2,undefined8 param_3,undefined1 **param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined1 **ppuVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined2 uStack_90;
  undefined1 *puStack_88;
  long *plStack_80;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  puVar4 = &uStack_b0;
  puVar7 = &stack0xfffffffffffffff0;
  func_0x000107c39c48();
  puVar5 = &UNK_10f774024;
  uStack_28 = extraout_x8;
  func_0x000107c284bc();
  uStack_a0 = 0;
  uStack_90 = 0x3001;
  uStack_b0 = 0;
  uStack_a8 = 0;
  plVar9 = &lStack_98;
  lStack_98 = param_2;
  puStack_58 = puVar5;
  uStack_50 = param_3;
  func_0x0001089b4ea8();
  ppuVar6 = &puStack_58;
  ppuVar10 = &puStack_88;
  puStack_88 = (undefined1 *)puVar4;
  plStack_80 = plVar9;
  func_0x000107c2ba40(param_1);
  func_0x00010b4d1d14();
  func_0x000107c39c40(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b4d1d14();
  pcVar11 = FUN_10b4d13c8;
  func_0x00010b4d1cc8();
  puVar4 = &uStack_b0;
  do {
    *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
    *(ulong *)((long)puVar4 + -0x38) = unaff_x23;
    *(long **)((long)puVar4 + -0x30) = unaff_x22;
    *(long *)((long)puVar4 + -0x28) = unaff_x21;
    *(long *)((long)puVar4 + -0x20) = param_2;
    *(undefined ***)((long)puVar4 + -0x18) = ppuVar6;
    *(undefined1 **)((long)puVar4 + -0x10) = puVar7;
    *(code **)((long)puVar4 + -8) = pcVar11;
    func_0x000107c39c74();
    func_0x000107c39c48();
    *(undefined8 *)((long)puVar4 + -0x48) = extraout_x8_00;
    *(undefined ***)((long)puVar4 + -0xd0) = &PTR_FUN_110cf0c90;
    *(undefined1 ***)((long)puVar4 + -200) = ppuVar10;
    uVar2 = *(undefined4 *)((long)ppuVar10 + 0x34);
    bVar3 = *(byte *)((long)ppuVar10 + 0x25);
    *(undefined8 *)((long)puVar4 + -0x90) = 0;
    *(undefined8 *)((long)puVar4 + -0x98) = 0;
    *(undefined8 *)((long)puVar4 + -0x80) = 0;
    *(undefined8 *)((long)puVar4 + -0x88) = 0;
    *(undefined8 *)((long)puVar4 + -0x78) = 0;
    *(ulong *)((long)puVar4 + -0x70) = (ulong)bVar3;
    *(undefined8 *)((long)puVar4 + -0x68) = 0x7ff8000000000000;
    *(undefined4 *)((long)puVar4 + -0x60) = uVar2;
    *(undefined4 *)((long)puVar4 + -0x5c) = 0x80000000;
    *(undefined8 *)((long)puVar4 + -0x58) = 0;
    *(undefined8 *)((long)puVar4 + -0x50) = 0;
    puVar7 = (undefined1 *)((long)puVar4 + -0xb8);
    func_0x000107c30394(puVar7,(undefined1 *)((long)puVar4 + -0xd0));
    *(undefined4 *)((long)puVar4 + -0x5c) = 0;
    uVar12 = *(undefined8 *)(unaff_x21 + 0x40);
    *(undefined8 *)((long)puVar4 + -0x50) = *(undefined8 *)(unaff_x21 + 0x48);
    *(undefined8 *)((long)puVar4 + -0x58) = uVar12;
    lVar8 = param_2;
    func_0x000107c30278();
    *(undefined1 **)((long)puVar4 + -0xc0) = puVar7;
    while( true ) {
      plVar9 = (long *)((long)puVar4 + -0xb8);
      func_0x000107c302ac(plVar9,(undefined1 *)((long)puVar4 + -0xc0));
      if (((ulong)plVar9 & 1) != 0) break;
      func_0x000107c39c50();
      *(long **)((long)puVar4 + -0xc0) = plVar9;
      if ((plVar9 == (long *)0x0) || (*(int *)((long)puVar4 + -0x68) != 0)) break;
    }
    if ((*(byte *)(lVar8 + 9) & 1) == 0) {
      unaff_x22 = *(long **)((long)puVar4 + -0xc0);
      if (unaff_x22 == (long *)0x0) goto LAB_10b4d1548;
LAB_10b4d14b0:
      if (*(undefined1 **)((long)puVar4 + -0xa8) == (undefined1 *)((long)puVar4 + -0x90)) {
        uVar1 = (*(int *)((long)puVar4 + -0xb0) - (int)unaff_x22) + 0x10;
      }
      else {
        uVar1 = *(int *)((long)puVar4 + -0xa0) + (*(int *)((long)puVar4 + -0xb0) - (int)unaff_x22);
      }
      unaff_x23 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        plVar9 = *(long **)((long)puVar4 + -0x98);
        (**(code **)(*plVar9 + 0x18))(plVar9,unaff_x23);
        *(uint *)((long)puVar4 + -100) = *(int *)((long)puVar4 + -100) + uVar1;
      }
      if (*(int *)((long)puVar4 + -0x68) == 1) {
        *(undefined1 *)(unaff_x21 + 0x24) = 1;
        in_ZR = true;
      }
      else {
        in_ZR = unaff_x22 == *(long **)((long)puVar4 + -0xb8);
        if ((*(long **)((long)puVar4 + -0xb8) < unaff_x22) &&
           ((*(long *)((long)puVar4 + -0xa8) == 0 ||
            (in_ZR = (long)unaff_x22 - *(long *)((long)puVar4 + -0xb0) ==
                     (long)*(int *)((long)puVar4 + -0x9c),
            (long)*(int *)((long)puVar4 + -0x9c) < (long)unaff_x22 - *(long *)((long)puVar4 + -0xb0)
            )))) goto LAB_10b4d1548;
        *(int *)(unaff_x21 + 0x20) = *(int *)((long)puVar4 + -0x68) + 1;
      }
      func_0x000107c39c60();
    }
    else {
      func_0x000107c39c68(*(undefined8 *)(lVar8 + 0x28));
      unaff_x22 = plVar9;
      if (plVar9 != (long *)0x0) goto LAB_10b4d14b0;
LAB_10b4d1548:
      plVar9 = (long *)0x0;
    }
    func_0x000107c39c40(*(undefined8 *)((long)puVar4 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    *(long *)((long)puVar4 + -0xf0) = param_2;
    *(undefined1 ***)((long)puVar4 + -0xe8) = param_4;
    *(undefined1 **)((long)puVar4 + -0xe0) = (undefined1 *)((long)puVar4 + -0x10);
    *(code **)((long)puVar4 + -0xd8) = FUN_10b4d15a0;
    func_0x000107c39c5c();
    (**(code **)(*plVar9 + 0x18))();
    puVar7 = *(undefined1 **)((long)puVar4 + -0xe0);
    pcVar11 = *(code **)((long)puVar4 + -0xd8);
    param_2 = *(long *)((long)puVar4 + -0xf0);
    ppuVar6 = *(undefined ***)((long)puVar4 + -0xe8);
    puVar4 = (undefined8 *)((long)puVar4 + -0xd0);
    ppuVar10 = param_4;
    param_4 = (undefined1 **)0x1;
  } while( true );
}



/* Entry: 10b4d13c8; end: 10b4d159f;  */

void FUN_10b4d13c8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  long *plVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar8;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c39c74(param_1);
    func_0x000107c39c48();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined ***)((long)register0x00000008 + -0xd0) = &PTR_FUN_110cf0c90;
    *(long *)((long)register0x00000008 + -200) = param_2;
    uVar2 = *(undefined4 *)(param_2 + 0x34);
    bVar3 = *(byte *)(param_2 + 0x25);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(ulong *)((long)register0x00000008 + -0x70) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x7ff8000000000000;
    *(undefined4 *)((long)register0x00000008 + -0x60) = uVar2;
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0x80000000;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xb8);
    func_0x000107c30394(puVar5,(undefined1 *)((long)register0x00000008 + -0xd0));
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0;
    uVar8 = *(undefined8 *)(unaff_x21 + 0x40);
    *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(unaff_x21 + 0x48);
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar8;
    lVar6 = unaff_x20;
    func_0x000107c30278();
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar5;
    while( true ) {
      plVar7 = (long *)((long)register0x00000008 + -0xb8);
      func_0x000107c302ac(plVar7,(undefined1 *)((long)register0x00000008 + -0xc0));
      if (((ulong)plVar7 & 1) != 0) break;
      func_0x000107c39c50();
      *(long **)((long)register0x00000008 + -0xc0) = plVar7;
      if ((plVar7 == (long *)0x0) || (*(int *)((long)register0x00000008 + -0x68) != 0)) break;
    }
    if ((*(byte *)(lVar6 + 9) & 1) == 0) {
      unaff_x22 = *(long **)((long)register0x00000008 + -0xc0);
      if (unaff_x22 == (long *)0x0) goto LAB_10b4d1548;
LAB_10b4d14b0:
      if (*(undefined1 **)((long)register0x00000008 + -0xa8) ==
          (undefined1 *)((long)register0x00000008 + -0x90)) {
        uVar1 = (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22) + 0x10;
      }
      else {
        uVar1 = *(int *)((long)register0x00000008 + -0xa0) +
                (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22);
      }
      unaff_x23 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        plVar7 = *(long **)((long)register0x00000008 + -0x98);
        (**(code **)(*plVar7 + 0x18))(plVar7,unaff_x23);
        *(uint *)((long)register0x00000008 + -100) =
             *(int *)((long)register0x00000008 + -100) + uVar1;
      }
      if (*(int *)((long)register0x00000008 + -0x68) == 1) {
        *(undefined1 *)(unaff_x21 + 0x24) = 1;
        in_ZR = true;
      }
      else {
        in_ZR = unaff_x22 == *(long **)((long)register0x00000008 + -0xb8);
        if ((*(long **)((long)register0x00000008 + -0xb8) < unaff_x22) &&
           ((*(long *)((long)register0x00000008 + -0xa8) == 0 ||
            (in_ZR = (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0) ==
                     (long)*(int *)((long)register0x00000008 + -0x9c),
            (long)*(int *)((long)register0x00000008 + -0x9c) <
            (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0))))) goto LAB_10b4d1548;
        *(int *)(unaff_x21 + 0x20) = *(int *)((long)register0x00000008 + -0x68) + 1;
      }
      func_0x000107c39c60();
    }
    else {
      func_0x000107c39c68(*(undefined8 *)(lVar6 + 0x28));
      unaff_x22 = plVar7;
      if (plVar7 != (long *)0x0) goto LAB_10b4d14b0;
LAB_10b4d1548:
      plVar7 = (long *)0x0;
    }
    func_0x000107c39c40(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    plVar4 = (long *)((long)register0x00000008 + -0xf0);
    *(long *)((long)register0x00000008 + -0xf0) = unaff_x20;
    *(long *)((long)register0x00000008 + -0xe8) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xd8) = FUN_10b4d15a0;
    func_0x000107c39c5c();
    (**(code **)(*plVar7 + 0x18))();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    param_1 = unaff_x20;
    param_2 = param_3;
    param_3 = 1;
    unaff_x20 = *plVar4;
  } while( true );
}



/* Entry: 10b4d15a0; end: 10b4d15d3;  */

void FUN_10b4d15a0(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c39c5c();
    (**(code **)(*param_1 + 0x18))();
    lVar2 = *(long *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = lVar2;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000107c39c74(unaff_x20);
    func_0x000107c39c48();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined ***)((long)register0x00000008 + -0xd0) = &PTR_FUN_110cf0c90;
    *(long *)((long)register0x00000008 + -200) = unaff_x19;
    uVar3 = *(undefined4 *)(unaff_x19 + 0x34);
    bVar4 = *(byte *)(unaff_x19 + 0x25);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(ulong *)((long)register0x00000008 + -0x70) = (ulong)bVar4;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x7ff8000000000000;
    *(undefined4 *)((long)register0x00000008 + -0x60) = uVar3;
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0x80000000;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xb8);
    func_0x000107c30394(puVar5,(undefined1 *)((long)register0x00000008 + -0xd0));
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0;
    uVar7 = *(undefined8 *)(unaff_x21 + 0x40);
    *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(unaff_x21 + 0x48);
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar7;
    lVar6 = lVar2;
    func_0x000107c30278();
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar5;
    while( true ) {
      param_1 = (long *)((long)register0x00000008 + -0xb8);
      func_0x000107c302ac(param_1,(undefined1 *)((long)register0x00000008 + -0xc0));
      if (((ulong)param_1 & 1) != 0) break;
      func_0x000107c39c50();
      *(long **)((long)register0x00000008 + -0xc0) = param_1;
      if ((param_1 == (long *)0x0) || (*(int *)((long)register0x00000008 + -0x68) != 0)) break;
    }
    if ((*(byte *)(lVar6 + 9) & 1) == 0) {
      unaff_x22 = *(long **)((long)register0x00000008 + -0xc0);
      if (unaff_x22 == (long *)0x0) goto LAB_10b4d1548;
LAB_10b4d14b0:
      if (*(undefined1 **)((long)register0x00000008 + -0xa8) ==
          (undefined1 *)((long)register0x00000008 + -0x90)) {
        uVar1 = (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22) + 0x10;
      }
      else {
        uVar1 = *(int *)((long)register0x00000008 + -0xa0) +
                (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22);
      }
      unaff_x23 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        param_1 = *(long **)((long)register0x00000008 + -0x98);
        (**(code **)(*param_1 + 0x18))(param_1,unaff_x23);
        *(uint *)((long)register0x00000008 + -100) =
             *(int *)((long)register0x00000008 + -100) + uVar1;
      }
      if (*(int *)((long)register0x00000008 + -0x68) == 1) {
        *(undefined1 *)(unaff_x21 + 0x24) = 1;
        in_ZR = true;
      }
      else {
        in_ZR = unaff_x22 == *(long **)((long)register0x00000008 + -0xb8);
        if ((*(long **)((long)register0x00000008 + -0xb8) < unaff_x22) &&
           ((*(long *)((long)register0x00000008 + -0xa8) == 0 ||
            (in_ZR = (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0) ==
                     (long)*(int *)((long)register0x00000008 + -0x9c),
            (long)*(int *)((long)register0x00000008 + -0x9c) <
            (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0))))) goto LAB_10b4d1548;
        *(int *)(unaff_x21 + 0x20) = *(int *)((long)register0x00000008 + -0x68) + 1;
      }
      func_0x000107c39c60();
    }
    else {
      func_0x000107c39c68(*(undefined8 *)(lVar6 + 0x28));
      unaff_x22 = param_1;
      if (param_1 != (long *)0x0) goto LAB_10b4d14b0;
LAB_10b4d1548:
      param_1 = (long *)0x0;
    }
    func_0x000107c39c40(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    unaff_x30 = FUN_10b4d15a0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    unaff_x19 = 1;
    unaff_x20 = lVar2;
  } while( true );
}



/* Entry: 10b4d15d4; end: 10b4d165b;  */

byte FUN_10b4d15d4(void)

{
  byte bVar1;
  long *unaff_x19;
  int unaff_w20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [56];
  
  func_0x000107c39c5c();
  func_0x00010b4d601c(auStack_80);
  func_0x000107c3033c();
  if (unaff_w20 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0x20) >> 1 & 1;
  }
  FUN_10b4d6798(auStack_68);
  return bVar1;
}



/* Entry: 10b4d165c; end: 10b4d167b;  */

void FUN_10b4d165c(void)

{
  FUN_10b4d1c98();
  func_0x00010b4d1cb8();
  return;
}



/* Entry: 10b4d167c; end: 10b4d169f;  */

void FUN_10b4d167c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010ae6bca4(param_1,&uStack_18);
  return;
}



/* Entry: 10b4d16a0; end: 10b4d1757;  */

bool FUN_10b4d16a0(undefined8 param_1,long *param_2)

{
  bool bVar1;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined **ppuStack_50;
  undefined ***pppuStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pppuStack_48 = &ppuStack_60;
  ppuStack_68 = &PTR_FUN_110cf0e00;
  ppuStack_60 = &PTR_FUN_110cf0e50;
  ppuStack_50 = &PTR_FUN_110cf1048;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x2000;
  plStack_58 = param_2;
  func_0x000107c3035c(param_1,&ppuStack_68);
  FUN_10b4d60e0(&ppuStack_68);
  if ((int)param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20) == 0;
  }
  return bVar1;
}



/* Entry: 10b4d1758; end: 10b4d1803;  */

undefined8 FUN_10b4d1758(ulong param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x000107c39c74();
  func_0x000107c39c7c();
  if (param_1 >> 0x1f == 0) {
    if ((long)param_1 <= (long)param_3) {
      func_0x000107c30354();
      return 1;
    }
  }
  else {
    func_0x00010b4d1d28();
    func_0x00010bdb2988(auStack_40);
    func_0x00010b4d1d00(auStack_58);
    func_0x00010b4d1d08();
    func_0x00010b4d1cd8();
    func_0x00010b4d1cf8();
    func_0x00010b4d1cf0();
    func_0x00010b4d1ce8();
  }
  return 0;
}



/* Entry: 10b4d1804; end: 10b4d184b;  */

void FUN_10b4d1804(undefined8 *param_1,ulong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c30360(param_2,param_1);
  if ((param_2 & 1) != 0) {
    return;
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b4d184c; end: 10b4d186b;  */

void FUN_10b4d184c(void)

{
  FUN_10b4d1c98();
  func_0x00010b4d1cb8();
  return;
}



/* Entry: 10b4d186c; end: 10b4d18cb;  */

/* WARNING: Removing unreachable block (ram,0x00010ae710bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae710c4) */
/* WARNING: Removing unreachable block (ram,0x00010ae71264) */
/* WARNING: Removing unreachable block (ram,0x00010ae7126c) */
/* WARNING: Removing unreachable block (ram,0x00010ae71274) */
/* WARNING: Removing unreachable block (ram,0x00010ae71284) */
/* WARNING: Removing unreachable block (ram,0x00010ae71290) */
/* WARNING: Removing unreachable block (ram,0x00010ae712a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae712cc) */
/* WARNING: Removing unreachable block (ram,0x00010ae712d0) */
/* WARNING: Removing unreachable block (ram,0x00010ae710cc) */
/* WARNING: Removing unreachable block (ram,0x00010ae710dc) */
/* WARNING: Removing unreachable block (ram,0x00010ae710e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae710f8) */
/* WARNING: Removing unreachable block (ram,0x00010ae71118) */
/* WARNING: Removing unreachable block (ram,0x00010ae71128) */

void FUN_10b4d186c(ulong *param_1,byte *param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_58;
  
  pbVar9 = param_2;
  FUN_10b4d1b04();
  if ((int)pbVar9 != 0) {
    if (param_3 < (undefined8 *)0x10) {
      *(byte *)param_1 = 1;
      pbVar9 = (byte *)((long)param_1 + 1);
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      param_1[1] = 0;
    }
    else {
      func_0x00010ae6f400();
      *param_3 = 0;
      *param_1 = (ulong)param_3;
    }
    return;
  }
  bVar6 = *param_2;
  uVar15 = (ulong)(char)bVar6;
  if (((uVar15 & 1) == 0) || (plVar13 = *(long **)(param_2 + 8), plVar13 == (long *)0x0)) {
    uVar14 = uVar15 >> 1;
    puVar8 = (undefined8 *)((long)param_3 + (uVar15 >> 1));
    if (CARRY8((ulong)param_3,uVar15 >> 1)) {
      puVar8 = (undefined8 *)0xffffffffffffffff;
    }
    if (puVar8 < (undefined8 *)0x10) {
      uVar11 = 1;
      *(byte *)param_1 = 1;
      pbVar9 = (byte *)((long)param_1 + 1);
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      param_1[1] = 0;
      puVar8 = (undefined8 *)*param_1;
    }
    else {
      func_0x00010ae6f400();
      *puVar8 = 0;
      *param_1 = (ulong)puVar8;
      uVar11 = (uint)puVar8 & 0xff;
    }
    pbVar9 = (byte *)((long)puVar8 + 0xd);
    if ((uVar11 & 1) != 0) {
      pbVar9 = (byte *)((long)param_1 + 1);
    }
    pbVar1 = param_2 + 1;
    if (bVar6 < 0x10) {
      if (bVar6 < 8) {
        if (1 < bVar6) {
          *pbVar9 = param_2[1];
          pbVar9[uVar15 >> 2] = pbVar1[uVar15 >> 2];
          pbVar9[uVar14 - 1] = param_2[uVar14];
        }
      }
      else {
        uVar5 = *(undefined4 *)(pbVar1 + (uVar14 - 4));
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar1;
        *(undefined4 *)(pbVar9 + (uVar14 - 4)) = uVar5;
      }
    }
    else {
      uVar12 = *(undefined8 *)(pbVar1 + (uVar14 - 8));
      *(undefined8 *)pbVar9 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar9 + (uVar14 - 8)) = uVar12;
    }
    if ((*param_1 & 1) == 0) {
      *(ulong *)*param_1 = uVar14;
    }
    else {
      *(byte *)param_1 = bVar6 | 1;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    return;
  }
  lVar10 = *(long *)param_2;
  lStack_58 = lVar10 + -1;
  if (lStack_58 != 0) {
    func_0x000107c2b9f0(lVar10 + 0x37);
    *(long *)(lVar10 + 0x4bf) = *(long *)(lVar10 + 0x4bf) + 1;
  }
  if (*(byte *)((long)plVar13 + 0xc) == 3) {
    func_0x00010ae6f1e8();
    if (param_4 != (long *)0x0) {
      if (plVar13 == (long *)0x0) {
code_r0x00010ae71310:
        plVar13 = (long *)0x0;
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      else {
        *(long **)(param_2 + 8) = plVar13;
      }
      if (lStack_58 != 0) {
        *(long **)(lStack_58 + 0x40) = plVar13;
      }
      *param_1 = (ulong)param_4;
      goto code_r0x00010ae71338;
    }
  }
  else if ((5 < *(byte *)((long)plVar13 + 0xc)) && ((*(uint *)(plVar13 + 1) & 0xfffffffd) == 4)) {
    bVar6 = *(byte *)((long)plVar13 + 0xc);
    uVar11 = 6;
    if (0xba < bVar6) {
      uVar11 = 0xc;
    }
    iVar2 = -0xe8d;
    if (0xba < bVar6) {
      iVar2 = -0xb800d;
    }
    uVar3 = 3;
    if (0x42 < bVar6) {
      uVar3 = uVar11;
    }
    iVar4 = -0x1d;
    if (0x42 < bVar6) {
      iVar4 = iVar2;
    }
    bVar7 = param_4 <= (long *)((long)(int)(((uint)bVar6 << (ulong)uVar3) + iVar4) - *plVar13);
    param_4 = plVar13;
    if (bVar7) goto code_r0x00010ae71310;
  }
  if (param_3 < (undefined8 *)0x10) {
    *(byte *)param_1 = 1;
    pbVar9 = (byte *)((long)param_1 + 1);
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    param_1[1] = 0;
  }
  else {
    func_0x00010ae6f400();
    *param_3 = 0;
    *param_1 = (ulong)param_3;
  }
code_r0x00010ae71338:
  func_0x00010ae72844(&lStack_58);
  return;
}



/* Entry: 10b4d18cc; end: 10b4d1953;  */

undefined1  [16] FUN_10b4d18cc(byte *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((*param_1 & 1) == 0) {
    plVar2 = *(long **)param_1;
    lVar4 = *plVar2;
    plVar3 = plVar2;
    FUN_10b4d1bb4();
    auVar6._8_8_ = (long)plVar3 - lVar4;
    auVar6._0_8_ = (long)plVar2 + lVar4 + 0xd;
    return auVar6;
  }
  iVar1 = (int)((uint)*param_1 << 0x18) >> 0x19;
  auVar5._8_8_ = 0xf - (long)iVar1;
  auVar5._0_8_ = param_1 + (long)iVar1 + 1;
  return auVar5;
}



/* Entry: 10b4d1954; end: 10b4d197b;  */

void FUN_10b4d1954(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b4d197c; end: 10b4d19eb;  */

void FUN_10b4d197c(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b4d19ec; end: 10b4d19f3;  */

void FUN_10b4d19ec(void)

{
  return;
}



/* Entry: 10b4d19f4; end: 10b4d1a3b;  */

undefined8 FUN_10b4d19f4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_10b4d42f0();
  if ((int)uVar1 != 0) {
    func_0x000106e5f5c4(*(undefined8 *)(param_1 + 8),*param_3);
  }
  return uVar1;
}



/* Entry: 10b4d1a3c; end: 10b4d1a63;  */

void FUN_10b4d1a3c(long param_1,int param_2)

{
  **(long **)(param_1 + 8) = **(long **)(param_1 + 8) + (long)-param_2;
  return;
}



/* Entry: 10b4d1a64; end: 10b4d1b03;  */

/* WARNING: Possible PIC construction at 0x00010b4d1ac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4d1ac4) */

long * FUN_10b4d1a64(long param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined8 unaff_x30;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = &uStack_40;
  puVar7 = &uStack_40;
  puVar9 = &stack0xfffffffffffffff0;
  puVar5 = param_2;
  FUN_10b4d1b04();
  if ((int)puVar5 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    plVar6 = *(long **)(param_1 + 8);
    unaff_x30 = 0x10b4d1ac4;
    unaff_x20 = param_3;
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    puVar4 = (undefined8 *)register0x00000008;
    puVar7 = (undefined8 *)param_2;
    param_2 = unaff_x19;
    param_1 = unaff_x21;
    puVar9 = unaff_x29;
  }
  *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x30) = unaff_x22;
  *(long *)((long)puVar4 + -0x28) = param_1;
  *(ulong *)((long)puVar4 + -0x20) = unaff_x20;
  *(undefined1 **)((long)puVar4 + -0x18) = param_2;
  *(undefined1 **)((long)puVar4 + -0x10) = puVar9;
  *(undefined8 *)((long)puVar4 + -8) = unaff_x30;
  uVar8 = (uint)param_3;
  if ((int)uVar8 < 0) {
    func_0x00010ae70894(puVar7);
  }
  else {
    if ((uVar8 < 0x200) || (plVar6[2] == 0)) {
      uVar3 = (int)plVar6[1] - (int)*plVar6;
      uVar2 = uVar8;
      if ((int)uVar3 <= (int)uVar8) {
        uVar2 = uVar3;
      }
      func_0x00010ae70914(puVar7,*plVar6,(long)(int)uVar2);
      *plVar6 = *plVar6 + (long)(int)uVar2;
      if ((int)uVar8 <= (int)uVar3) {
        return (long *)0x1;
      }
      if (plVar6[2] == 0) {
        return (long *)0x0;
      }
      if (0 < *(int *)((long)plVar6 + 0x1c) + *(int *)((long)plVar6 + 0x2c)) {
        return (long *)0x0;
      }
      param_3 = (ulong)(uVar8 - uVar2);
    }
    else {
      func_0x00010ae70894(puVar7);
      FUN_10b4d4018(plVar6);
    }
    iVar1 = (int)plVar6[6];
    if ((int)plVar6[5] <= (int)plVar6[6]) {
      iVar1 = (int)plVar6[5];
    }
    if ((int)param_3 <= iVar1 - (int)plVar6[3]) {
      *(int *)(plVar6 + 3) = (int)plVar6[3] + (int)param_3;
      plVar6 = (long *)plVar6[2];
                    /* WARNING: Could not recover jumptable at 0x00010b4d4718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x30))(plVar6,puVar7,param_3);
      return plVar6;
    }
    *(int *)(plVar6 + 3) = iVar1;
    (**(code **)(*(long *)plVar6[2] + 0x30))((long *)plVar6[2],puVar7);
  }
  return (long *)0x0;
}



/* Entry: 10b4d1b04; end: 10b4d1b43;  */

bool FUN_10b4d1b04(char *param_1)

{
  ulong uVar1;
  
  if (((long)*param_1 & 1U) == 0) {
    uVar1 = (ulong)(long)*param_1 >> 1;
  }
  else {
    uVar1 = **(ulong **)(param_1 + 8);
  }
  return uVar1 == 0;
}



/* Entry: 10b4d1b44; end: 10b4d1bb3;  */

void FUN_10b4d1b44(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 < (undefined8 *)0x10) {
    *(undefined1 *)param_1 = 1;
    *(undefined8 *)((long)param_1 + 1) = 0;
    param_1[1] = 0;
  }
  else {
    func_0x00010ae6f400();
    *param_2 = 0;
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10b4d1bb4; end: 10b4d1bbb;  */

long FUN_10b4d1bb4(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xc);
  FUN_10b4d1bd4(uVar1);
  return uVar1 - 0xd;
}



/* Entry: 10b4d1bbc; end: 10b4d1bd3;  */

long FUN_10b4d1bbc(long param_1)

{
  FUN_10b4d1bd4();
  return param_1 + -0xd;
}



/* Entry: 10b4d1bd4; end: 10b4d1c17;  */

long FUN_10b4d1bd4(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 6;
  if (0xba < param_1) {
    uVar4 = 0xc;
  }
  iVar1 = -0xe80;
  if (0xba < param_1) {
    iVar1 = -0xb8000;
  }
  uVar2 = 3;
  if (0x42 < param_1) {
    uVar2 = uVar4;
  }
  iVar3 = -0x10;
  if (0x42 < param_1) {
    iVar3 = iVar1;
  }
  return (long)(int)((param_1 << (ulong)uVar2) + iVar3);
}



/* Entry: 10b4d1c18; end: 10b4d1c43;  */

byte * FUN_10b4d1c18(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)param_1);
  }
  return param_1;
}



/* Entry: 10b4d1c44; end: 10b4d1c83;  */

byte * FUN_10b4d1c44(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 & 1) != 0) {
    func_0x00010ae706fc(param_1);
  }
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 8) = param_2[1];
  *(undefined8 *)param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}



/* Entry: 10b4d1c84; end: 10b4d1c97;  */

void FUN_10b4d1c84(undefined8 param_1,undefined8 param_2)

{
  func_0x000104bd47e8(&UNK_10f7740e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlen_11034cbe8)(param_2);
  return;
}



/* Entry: 10b4d1c98; end: 10b4d1d33;  */

void FUN_10b4d1c98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strlen_11034cbe8)(param_2);
  return;
}



/* Entry: 10b4d1d34; end: 10b4d1d7b;  */

void FUN_10b4d1d34(long *param_1)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  uint extraout_w9;
  
  plVar1 = param_1;
  func_0x000107c3038c(param_1,0,0xffffffff);
  lVar2 = param_1[1];
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 10) = 1;
  }
  else {
    func_0x000107c39c94();
    lVar2 = extraout_x8 + (int)(extraout_w9 & (int)extraout_w9 >> 0x1f);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10b4d1d7c; end: 10b4d1ec3;  */

void FUN_10b4d1d7c(long param_1,int param_2,int param_3)

{
  char in_NG;
  char in_OV;
  long lVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_1 + 8) - param_2) + 0x10;
  lVar1 = param_1;
  do {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    func_0x00010b4d3608();
    if (in_NG != in_OV) {
      return;
    }
    func_0x00010b4d35d0();
    if (lVar1 == 0) {
      return;
    }
    param_3 = param_3 - iVar2;
    iVar2 = (*(int *)(param_1 + 8) - ((int)lVar1 + 0x10)) + 0x10;
    in_OV = SBORROW4(param_3,iVar2);
    in_NG = param_3 - iVar2 < 0;
  } while (iVar2 < param_3);
  return;
}



/* Entry: 10b4d1ec4; end: 10b4d1f93;  */

void FUN_10b4d1ec4(long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((long)param_3 <= (lVar2 - param_2) + (long)*(int *)(param_1 + 0x1c)) {
    lVar2 = (long)*(char *)(param_4 + 0x17);
    if (lVar2 < 0) {
      lVar2 = *(long *)(param_4 + 8);
    }
    func_0x00010b4d366c(lVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_4);
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = ((int)lVar2 - (int)param_2) + 0x10;
  do {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    func_0x00010b4d2524(param_4,param_2,iVar1);
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      return;
    }
    param_2 = param_1;
    FUN_10b4d1d34();
    if (param_2 == 0) {
      return;
    }
    param_3 = param_3 - iVar1;
    param_2 = param_2 + 0x10;
    iVar1 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
  } while (iVar1 < param_3);
  func_0x00010b4d2524(param_4,param_2,param_3);
  return;
}


