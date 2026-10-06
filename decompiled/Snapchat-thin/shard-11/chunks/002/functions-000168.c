/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10832bf84; end: 10832bfd3;  */

undefined4 * FUN_10832bf84(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10832b990();
  *(undefined8 *)(param_1 + 2) = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 8) = param_2[3];
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 10832bfd4; end: 10832bfdb;  */

void FUN_10832bfd4(void)

{
  return;
}



/* Entry: 10832bfdc; end: 10832c00f;  */

void FUN_10832bfdc(long param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  func_0x00010832cdf8(&PTR_FUN_110a3ca20);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 10832c010; end: 10832c03f;  */

void FUN_10832c010(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110a3ca20;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10832c040; end: 10832c0e3;  */

void FUN_10832c040(long param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  char *unaff_x19;
  undefined8 unaff_x20;
  undefined *puVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_2e1 [641];
  
  lVar12 = *(long *)(param_1 + 8);
  FUN_1083242ec(lVar12,*(undefined8 *)(param_1 + 0x10),**(undefined1 **)(param_1 + 0x18));
  func_0x00010832c9f0();
  func_0x00010832c400();
  plVar14 = *(long **)(param_1 + 0x10);
  func_0x00010832c5a4();
  uVar10 = *(ulong *)(param_1 + 0x20);
  FUN_1083cb2fc(uVar10);
  FUN_108328328(uVar10 & 0xff);
  _strlen();
  func_0x00010832c704();
  func_0x00010832cb58();
  *(undefined1 *)(*(long *)(lVar12 + 0x170) + 0x90) = 0;
  bVar2 = **(byte **)(param_1 + 0x20);
  puVar15 = *(undefined **)(param_1 + 0x10);
  FUN_1083cb2fc();
  puVar11 = &stack0xffffffffffffffcf;
  FUN_1083cb220();
  func_0x00010832c88c();
  puVar13 = puVar15;
  func_0x00010832c7d0();
  pcVar9 = *(char **)(puVar13 + 0x10);
  func_0x00010832c5ec();
  if ((int)pcVar9 != 0) {
    func_0x00010832ca18();
    (**(code **)(extraout_x8_00 + 0x40))();
    if (((uint)pcVar9 < 3 && bVar2 < 0x20) && (1 << (ulong)(bVar2 & 0x1f) & 0xffc0707fU) != 0) {
      pcVar9 = &stack0xffffffffffffffa7;
      FUN_1083cb2fc();
      if (((uint)pcVar9 & 0xff) != 2) {
        uVar17 = *(undefined8 *)(puVar15 + 0x10);
        func_0x00010832c28c();
        FUN_1083280dc(&stack0xffffffffffffffa8,unaff_x19,uVar17);
        func_0x00010832c604();
        func_0x00010832c6dc();
        func_0x00010832d040();
        func_0x00010832c400();
        func_0x00010832c6e4();
        FUN_1083242ec();
        func_0x00010832c2d0();
        return;
      }
    }
  }
  if ((bVar2 & 0xfe) == 0x10) {
    func_0x00010832ca18();
    (**(code **)(extraout_x8_01 + 0xe0))();
    if ((int)pcVar9 != 0) {
      puVar13 = &UNK_10f48e40d;
      pcVar7 = unaff_x19;
      func_0x00010832cecc();
      func_0x00010832c6e4();
      FUN_1083242ec();
      func_0x00010832c350();
      pcVar5 = (char *)register0x00000008;
      pcVar9 = unaff_x19;
      goto FUN_108323b10;
    }
  }
  func_0x00010832c6e4();
  unaff_x29 = &stack0xfffffffffffffff0;
  pcVar5 = acStack_2e1 + 0x41;
  func_0x00010832d02c();
  uVar3 = *(int *)((long)plVar14 + 0xc) - 0x19;
  bVar6 = uVar3 == 0x19;
  if (uVar3 < 0x1a) {
    func_0x00010832c7d0();
                    /* WARNING: Could not recover jumptable at 0x00010832433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&UNK_10df1a5f0 + extraout_x8 * 2) * 4 + 0x108324340))();
    return;
  }
  func_0x00010832c2a0();
  if (bVar6) {
    func_0x00010832cf78(unaff_x30);
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(acStack_2e1 + 0xc1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(acStack_2e1 + 0xa9);
  pcVar7 = acStack_2e1 + 0xe1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010832c694();
  lVar12 = plVar14[2];
  FUN_108324294();
  func_0x00010832cb90();
  pcVar8 = pcVar7;
  func_0x00010832cb58();
  func_0x00010832c9e8(*(undefined8 *)(*plVar14 + 0x48));
  pcVar4 = "";
  for (lVar12 = lVar12 << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
    _strlen(pcVar4);
    func_0x00010832c3b4();
    FUN_1083242ec(pcVar7,*(undefined8 *)pcVar8,0x11);
    pcVar4 = ", ";
    pcVar8 = pcVar8 + 8;
  }
  puVar11 = puVar13;
  _strlen();
  unaff_x30 = FUN_1083258f4;
FUN_108323b10:
  *(undefined8 *)(pcVar5 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar5 + -0x28) = unaff_x21;
  *(undefined8 *)(pcVar5 + -0x20) = unaff_x20;
  *(char **)(pcVar5 + -0x18) = pcVar9;
  *(undefined1 **)(pcVar5 + -0x10) = unaff_x29;
  *(code **)(pcVar5 + -8) = unaff_x30;
  *(undefined **)(pcVar5 + -0x40) = puVar13;
  *(undefined **)(pcVar5 + -0x38) = puVar11;
  if (puVar11 != (undefined *)0x0) {
    if ((pcVar7[0x118] == '\x01') && (pcVar7[0x178] == '\x01')) {
      for (iVar16 = 0; iVar16 < *(int *)(pcVar7 + 0x114); iVar16 = iVar16 + 1) {
        (**(code **)(**(long **)(pcVar7 + 0x40) + 0x10))(*(long **)(pcVar7 + 0x40),&DAT_10f48d515);
      }
    }
    plVar14 = *(long **)(pcVar7 + 0x40);
    func_0x000107c27958(pcVar5 + -0x58,pcVar5 + -0x40);
    puVar1 = *(undefined1 **)(pcVar5 + -0x58);
    if (-1 < pcVar5[-0x41]) {
      puVar1 = pcVar5 + -0x58;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14,puVar1);
    func_0x00010832c6dc();
    pcVar7[0x118] = '\0';
  }
  return;
}



/* Entry: 10832c0e4; end: 10832c10f;  */

void FUN_10832c0e4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010832ceb8(param_2,param_1,&PTR_DAT_110a3ca80);
  func_0x00010832cd60();
  return;
}



/* Entry: 10832c110; end: 10832c123;  */

undefined ** FUN_10832c110(void)

{
  return &PTR_DAT_110a3ca80;
}



/* Entry: 10832c124; end: 10832c153;  */

void FUN_10832c124(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110a3caa0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10832c154; end: 10832c183;  */

void FUN_10832c154(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a3caa0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10832c184; end: 10832c1af;  */

void FUN_10832c184(undefined8 param_1,undefined8 param_2)

{
  func_0x00010832ceb8(param_2,param_1,&PTR_DAT_110a3cb00);
  func_0x00010832cd60();
  return;
}



/* Entry: 10832c1b0; end: 10832c1bb;  */

undefined ** FUN_10832c1b0(void)

{
  return &PTR_DAT_110a3cb00;
}



/* Entry: 10832c1bc; end: 10832c1e7;  */

uint FUN_10832c1bc(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  FUN_10831e6c4(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10832c1e8; end: 10832c28b;  */

int * FUN_10832c1e8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint extraout_w8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long lVar4;
  long extraout_x10;
  uint extraout_w11;
  undefined8 uVar5;
  undefined8 extraout_x12;
  int *piVar6;
  long *unaff_x19;
  int *unaff_x20;
  
  func_0x00010832ca38();
  FUN_10832c1bc();
  func_0x00010832d078(unaff_x20[1]);
  lVar4 = *unaff_x19;
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar5 = 0x18;
  uVar2 = extraout_x9;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar6 = (int *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar2 * (long)(int)uVar5);
    iVar3 = (int)param_2;
    if (*piVar6 == 0) break;
    if ((iVar3 == *piVar6) && (lVar4 == *(long *)(piVar6 + 2))) {
      *piVar6 = 0;
      lVar4 = *unaff_x19;
      *(long *)(piVar6 + 4) = unaff_x19[1];
      *(long *)(piVar6 + 2) = lVar4;
      *piVar6 = iVar3;
      return piVar6 + 2;
    }
    func_0x00010832c864();
    lVar4 = extraout_x10;
    uVar5 = extraout_x12;
    uVar2 = extraout_x9_00;
    uVar1 = extraout_w11;
  }
  lVar4 = *unaff_x19;
  *(long *)(piVar6 + 4) = unaff_x19[1];
  *(long *)(piVar6 + 2) = lVar4;
  *piVar6 = iVar3;
  *unaff_x20 = *unaff_x20 + 1;
  return piVar6 + 2;
}



/* Entry: 10832c28c; end: 10832d0bb;  */

void FUN_10832c28c(void)

{
  long unaff_x19;
  long *plVar1;
  int iVar2;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &DAT_10f68e8ec;
  uStack_38 = 1;
  if ((*(char *)(unaff_x19 + 0x118) == '\x01') && (*(char *)(unaff_x19 + 0x178) == '\x01')) {
    for (iVar2 = 0; iVar2 < *(int *)(unaff_x19 + 0x114); iVar2 = iVar2 + 1) {
      (**(code **)(**(long **)(unaff_x19 + 0x40) + 0x10))
                (*(long **)(unaff_x19 + 0x40),&DAT_10f48d515);
    }
  }
  plVar1 = *(long **)(unaff_x19 + 0x40);
  func_0x000107c27958(appuStack_58,&puStack_40);
  if (-1 < cStack_41) {
    appuStack_58[0] = appuStack_58;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,appuStack_58[0]);
  func_0x00010832c6dc();
  *(undefined1 *)(unaff_x19 + 0x118) = 0;
  return;
}



/* Entry: 10832d0bc; end: 10832d55f;  */

void FUN_10832d0bc(int *param_1,int *param_2,int *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  ulong uVar28;
  byte bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  byte *pbStack_f8;
  byte *pbStack_f0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int *piStack_c0;
  int *piStack_b8;
  byte *pbStack_b0;
  int iStack_a8;
  int iStack_a4;
  ulong uStack_a0;
  int *piStack_90;
  int *piStack_88;
  byte *pbStack_80;
  int iStack_78;
  int iStack_74;
  ulong uStack_70;
  
  pcVar6 = FUN_10832d560;
  if (param_4 != 0) {
    pcVar6 = (code *)0x10832d574;
  }
  lVar19 = *(long *)(param_2 + 4);
  if (lVar19 == 0) {
    uStack_70 = 0;
    piStack_88 = (int *)0x0;
    piStack_90 = (int *)0x0;
    pbStack_80 = (byte *)0x0;
    iVar21 = 0x7fffffff;
    iVar24 = 0x7fffffff;
  }
  else {
    iVar21 = param_2[1];
    piStack_90 = (int *)(lVar19 + 0x10);
    piStack_88 = piStack_90 + (long)*(int *)(lVar19 + 4) * 2;
    pbStack_80 = (byte *)((long)piStack_88 + (ulong)*(uint *)(lVar19 + 0x14));
    iVar24 = iVar21 + *piStack_90 + 1;
  }
  _iStack_78 = CONCAT44(iVar24,iVar21);
  uStack_70 = CONCAT71(uStack_70._1_7_,lVar19 == 0);
  lVar19 = *(long *)(param_3 + 4);
  bVar11 = lVar19 == 0;
  if (bVar11) {
    uStack_a0 = 0;
    piStack_b8 = (int *)0x0;
    piStack_c0 = (int *)0x0;
    pbStack_b0 = (byte *)0x0;
    iVar16 = 0x7fffffff;
    iVar30 = 0x7fffffff;
  }
  else {
    iVar16 = param_3[1];
    piStack_c0 = (int *)(lVar19 + 0x10);
    piStack_b8 = piStack_c0 + (long)*(int *)(lVar19 + 4) * 2;
    pbStack_b0 = (byte *)((long)piStack_b8 + (ulong)*(uint *)(lVar19 + 0x14));
    iVar30 = iVar16 + *piStack_c0 + 1;
  }
  uVar28 = (ulong)bVar11;
  _iStack_a8 = CONCAT44(iVar30,iVar16);
  uStack_a0 = CONCAT71(uStack_a0._1_7_,bVar11);
  do {
    iVar31 = iVar16;
    iVar32 = iVar21;
    pbStack_f0 = pbStack_80;
    iVar22 = iVar21;
    if (iVar21 < iVar16) {
      pbStack_f8 = (byte *)0x0;
      iVar32 = iVar16;
      if (iVar24 <= iVar16) {
        iVar32 = iVar21;
      }
      iVar17 = iVar24;
      if (iVar16 <= iVar24) {
        iVar17 = iVar16;
      }
    }
    else {
      iVar17 = iVar30;
      pbStack_f8 = pbStack_b0;
      if (iVar16 < iVar21) {
        iVar31 = iVar21;
        if (iVar30 <= iVar21) {
          iVar31 = iVar16;
        }
        pbStack_f0 = (byte *)0x0;
        iVar22 = iVar16;
        if (iVar21 <= iVar30) {
          iVar17 = iVar21;
        }
      }
      else {
        iVar32 = iVar30;
        iVar31 = iVar30;
        if (iVar24 <= iVar30) {
          iVar32 = iVar24;
          iVar31 = iVar24;
          iVar17 = iVar24;
        }
      }
    }
    iVar21 = param_1[3];
    if (iVar21 <= iVar22) {
      return;
    }
    if (iVar21 <= iVar17) {
      iVar17 = iVar21;
    }
    if (pbStack_f0 == (byte *)0x0 && pbStack_f8 == (byte *)0x0) {
      iVar21 = *param_1;
      iVar16 = param_1[2] - iVar21;
LAB_10832d27c:
      FUN_10832d580(param_1,iVar21,iVar17 + -1,0,iVar16);
    }
    else if (param_1[1] <= iVar22) {
      if (pbStack_f0 == (byte *)0x0) {
        uVar14 = 0;
        iStack_d4 = *param_1;
        iVar16 = 0x7fffffff;
        piVar20 = param_1;
      }
      else {
        iStack_d4 = *param_2;
        iVar16 = iStack_d4 + (uint)*pbStack_f0;
        uVar14 = (uint)pbStack_f0[1];
        piVar20 = param_2;
      }
      bVar11 = pbStack_f0 == (byte *)0x0;
      if (pbStack_f8 == (byte *)0x0) {
        bVar29 = 0;
        iVar21 = *param_1;
        iVar22 = 0x7fffffff;
        piVar26 = param_1;
        iStack_dc = iVar21;
      }
      else {
        iVar22 = *param_3 + (uint)*pbStack_f8;
        bVar29 = pbStack_f8[1];
        iVar21 = *param_1;
        piVar26 = param_3;
        iStack_dc = *param_3;
      }
      iVar7 = piVar20[2];
      bVar12 = pbStack_f8 == (byte *)0x0;
      iVar8 = piVar26[2];
      iVar23 = iVar16;
      iVar18 = iStack_d4;
      iVar25 = iStack_dc;
      iVar15 = iVar22;
      do {
        iStack_d8 = iVar17 + -1;
        iVar5 = iVar15;
        if (iVar23 <= iVar15) {
          iVar5 = iVar23;
        }
        iVar3 = iVar18;
        if (iVar15 <= iVar18) {
          iVar3 = iVar25;
        }
        iVar4 = iVar15;
        if (iVar18 <= iVar15) {
          iVar4 = iVar18;
        }
        iVar9 = iVar18;
        uVar2 = uVar14;
        iVar27 = iVar5;
        iVar10 = iVar5;
        if (iVar25 < iVar18) {
          uVar2 = 0;
          iVar5 = iVar4;
          iVar9 = iVar25;
          iVar27 = iVar18;
          iVar10 = iVar3;
        }
        iVar3 = iVar25;
        if (iVar23 <= iVar25) {
          iVar3 = iVar18;
        }
        iVar4 = iVar23;
        if (iVar25 <= iVar23) {
          iVar4 = iVar25;
        }
        if (iVar18 < iVar25) {
          uVar2 = uVar14;
          iVar27 = iVar3;
          iVar10 = iVar25;
          iVar9 = iVar18;
        }
        uVar13 = (ulong)uVar2;
        bVar1 = bVar29;
        if (iVar18 < iVar25) {
          bVar1 = 0;
          iVar5 = iVar4;
        }
        iVar18 = param_1[2];
        if (iVar18 <= iVar9) goto LAB_10832d51c;
        if (iVar18 <= iVar5) {
          iVar5 = iVar18;
        }
        if (*param_1 <= iVar9) {
          (*pcVar6)(uVar13,bVar1);
          FUN_10832d580(param_1,iVar9,iStack_d8,uVar13,iVar5 - iVar9);
          iVar21 = iVar5;
        }
        iVar18 = iVar16;
        if (iVar5 == iVar23) {
          if (bVar11) {
            bVar11 = true;
            iVar23 = iVar16;
            iVar27 = iStack_d4;
          }
          else if (iVar16 == iVar7) {
            uVar14 = 0;
            bVar11 = true;
            iVar23 = 0x7fffffff;
            iStack_d4 = iVar7;
            iVar18 = 0x7fffffff;
            iVar27 = iVar7;
          }
          else {
            bVar11 = false;
            iVar23 = iVar16 + (uint)pbStack_f0[2];
            uVar14 = (uint)pbStack_f0[3];
            pbStack_f0 = pbStack_f0 + 2;
            iStack_d4 = iVar16;
            iVar18 = iVar23;
            iVar27 = iVar16;
          }
        }
        iVar16 = iVar18;
        iVar25 = iVar10;
        if (iVar5 == iVar15) {
          if (bVar12) {
            bVar12 = true;
            iVar25 = iStack_dc;
            iVar15 = iVar22;
          }
          else if (iVar22 == iVar8) {
            bVar29 = 0;
            bVar12 = true;
            iStack_dc = iVar8;
            iVar25 = iVar8;
            iVar15 = 0x7fffffff;
            iVar22 = 0x7fffffff;
          }
          else {
            bVar12 = false;
            iVar15 = iVar22 + (uint)pbStack_f8[2];
            bVar29 = pbStack_f8[3];
            pbStack_f8 = pbStack_f8 + 2;
            iStack_dc = iVar22;
            iVar25 = iVar22;
            iVar22 = iVar15;
          }
        }
        iVar18 = iVar27;
      } while (!(bool)(bVar11 & bVar12));
      iVar18 = param_1[2];
LAB_10832d51c:
      iVar16 = iVar18 - iVar21;
      if (iVar16 != 0 && iVar21 <= iVar18) goto LAB_10832d27c;
    }
    iVar21 = iVar32;
    if (iVar17 == iVar24) {
      FUN_10832dafc(&piStack_90);
      iVar21 = iVar24;
      iVar24 = iStack_74;
    }
    if (iVar17 == iVar30) {
      func_0x00010832db00(&piStack_c0);
      uVar28 = uStack_a0 & 0xff;
      iVar31 = iVar30;
      iVar30 = iStack_a4;
    }
    iVar16 = iVar31;
    if (((uStack_70 & 1) != 0) && ((uVar28 & 1) != 0)) {
      return;
    }
  } while( true );
}



/* Entry: 10832d560; end: 10832d57f;  */

uint FUN_10832d560(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (0xff - param_2) * param_1 + 0x80;
  return uVar1 + (uVar1 >> 8) >> 8;
}



/* Entry: 10832d580; end: 10832d637;  */

void FUN_10832d580(int *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  iVar1 = *param_1;
  param_3 = param_3 - param_1[1];
  if (param_3 == param_1[0xc]) {
    piVar3 = *(int **)(param_1 + 10);
    iVar2 = piVar3[1];
  }
  else {
    param_1[0xc] = param_3;
    piVar3 = param_1;
    func_0x00010832ee74(param_1,1);
    iVar2 = 0;
    *piVar3 = param_3;
    piVar3[1] = 0;
    *(int **)(param_1 + 10) = piVar3;
  }
  uVar4 = *(undefined8 *)(piVar3 + 2);
  param_2 = param_2 - (iVar2 + iVar1);
  if (param_2 != 0) {
    func_0x00010832ef6c(uVar4,0,param_2);
    piVar3[1] = piVar3[1] + param_2;
  }
  func_0x00010832ef6c(uVar4,param_4,param_5);
  piVar3[1] = piVar3[1] + (int)param_5;
  return;
}



/* Entry: 10832d638; end: 10832d663;  */

void FUN_10832d638(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  byte *pbVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  int iVar29;
  
  FUN_10832d0bc();
  FUN_10832ee74(param_1,0);
  lVar13 = 0;
  piVar14 = (int *)param_1[3];
  uVar7 = (ulong)*(int *)((long)param_1 + 0x24);
  piVar27 = piVar14 + uVar7 * 4;
  for (; piVar14 < piVar27; piVar14 = piVar14 + 4) {
    lVar13 = lVar13 + *(int *)(*(long *)(piVar14 + 2) + 0x14);
  }
  if (lVar13 != 0) {
    iVar21 = *(int *)(param_1 + 7);
    iVar29 = *(int *)((long)param_1 + 4);
    *(int *)((long)param_1 + 4) = iVar21;
    func_0x00010832e064();
    uVar23 = uVar7 + 0x10;
    uVar15 = uVar23 + (long)*(int *)(uVar7 + 4) * 8;
    lVar13 = 0x10;
    uVar8 = uVar7;
    uVar26 = uVar15;
    for (piVar14 = (int *)param_1[3]; piVar14 < piVar27; piVar14 = piVar14 + 4) {
      *(int *)(uVar7 + lVar13) = (iVar29 - iVar21) + *piVar14;
      ((int *)(uVar7 + lVar13))[1] = (int)uVar26 - (int)uVar15;
      lVar28 = (long)*(int *)(*(long *)(piVar14 + 2) + 0x14);
      uVar8 = uVar26;
      _memcpy(uVar26,*(undefined8 *)(*(long *)(piVar14 + 2) + 8),lVar28);
      uVar26 = uVar26 + lVar28;
      lVar13 = lVar13 + 8;
    }
    func_0x00010832f73c();
    uVar9 = *param_1;
    *(undefined8 *)(param_2 + 2) = param_1[1];
    *(undefined8 *)param_2 = uVar9;
    *(ulong *)(param_2 + 4) = uVar7;
    if (uVar7 == 0) goto LAB_10832d7b4;
    iVar21 = *(int *)(uVar7 + 4);
    lVar13 = (long)iVar21;
    uVar15 = uVar23 + lVar13 * 8;
    param_2[3] = param_2[1] + *(int *)(uVar15 - 8) + 1;
    uVar26 = 0;
    uVar6 = uVar23;
    do {
      uVar16 = uVar6;
      uVar18 = uVar26;
      if (uVar15 <= uVar16) break;
      func_0x00010832f77c(*(undefined4 *)(uVar16 + 4));
      uVar26 = uVar18 + 1;
      uVar6 = uVar16 + 8;
    } while ((uVar8 & 1) != 0);
    iVar29 = (int)uVar18;
    if (iVar21 != iVar29) {
      if (iVar29 != 0) {
        lVar17 = 0;
        uVar15 = uVar18 & 0xffffffff;
        lVar28 = uVar23 + (uVar18 & 0xffffffff) * 8;
        iVar3 = *(int *)(lVar28 + -8) + 1;
        for (; (long)uVar18 < lVar13; uVar18 = uVar18 + 1) {
          *(int *)(uVar16 + lVar17) = *(int *)(uVar16 + lVar17) - iVar3;
          lVar17 = lVar17 + 8;
        }
        uVar8 = uVar23;
        _memmove(uVar23,lVar28,*(long *)(uVar7 + 8) + (lVar13 - uVar15) * 8);
        param_2[1] = param_2[1] + iVar3;
        *(int *)(uVar7 + 4) = iVar21 - iVar29;
        lVar13 = (long)(iVar21 - iVar29);
      }
      uVar15 = 0;
      piVar14 = (int *)(uVar23 + lVar13 * 8);
      piVar27 = piVar14;
      do {
        piVar2 = piVar27 + -1;
        piVar27 = piVar27 + -2;
        func_0x00010832f77c(*piVar2);
        uVar15 = uVar15 + 8;
      } while ((uVar8 & 1) != 0);
      uVar5 = (int)(uVar15 >> 3) - 1;
      if (0 < (int)uVar5) {
        _memmove(piVar14 + (ulong)uVar5 * -2,piVar14,*(undefined8 *)(uVar7 + 8));
        param_2[3] = param_2[1] + *piVar27 + 1;
        *(uint *)(uVar7 + 4) = *(int *)(uVar7 + 4) - uVar5;
      }
      lVar13 = *(long *)(param_2 + 4);
      if (lVar13 != 0) {
        uVar5 = param_2[2] - *param_2;
        uVar7 = lVar13 + 0x10;
        uVar15 = uVar7 + (long)*(int *)(lVar13 + 4) * 8;
        uVar23 = uVar7;
        uVar19 = uVar5;
        uVar20 = uVar5;
        while (uVar23 < uVar15) {
          uVar24 = 0;
          pbVar22 = (byte *)(uVar15 + *(uint *)(uVar23 + 4));
          uVar11 = uVar5;
          do {
            pbVar25 = pbVar22;
            uVar12 = uVar11;
            if (pbVar22[1] != 0) break;
            pbVar25 = pbVar22 + 2;
            uVar10 = (uint)*pbVar22;
            uVar24 = uVar24 + uVar10;
            uVar12 = uVar11 - uVar10;
            bVar1 = (int)uVar10 <= (int)uVar11;
            pbVar22 = pbVar25;
            uVar11 = uVar12;
          } while (uVar12 != 0 && bVar1);
          uVar11 = uVar24;
          if (uVar12 != 0) {
            uVar11 = 0;
            for (; 0 < (int)uVar12; uVar12 = uVar12 - bVar4) {
              bVar4 = *pbVar25;
              uVar11 = uVar11 + bVar4;
              if (pbVar25[1] != 0) {
                uVar11 = 0;
              }
              pbVar25 = pbVar25 + 2;
            }
          }
          if ((int)uVar19 <= (int)uVar24) {
            uVar24 = uVar19;
          }
          if ((int)uVar20 <= (int)uVar11) {
            uVar11 = uVar20;
          }
          uVar23 = uVar23 + 8;
          uVar19 = uVar24;
          uVar20 = uVar11;
          if (uVar11 == 0 && uVar24 == 0) goto LAB_10832d940;
        }
        if (uVar5 == uVar19) goto LAB_10832d7b0;
        *param_2 = uVar19 + *param_2;
        param_2[2] = param_2[2] - uVar20;
        for (; uVar7 < uVar15; uVar7 = uVar7 + 8) {
          iVar21 = 0;
          pbVar22 = (byte *)(uVar15 + *(uint *)(uVar7 + 4));
          uVar24 = uVar5;
          uVar11 = uVar19;
          while (pbVar25 = pbVar22, 0 < (int)uVar11) {
            uVar12 = (uint)*pbVar22;
            uVar24 = uVar24 - uVar12;
            if (uVar11 < uVar12) {
              pbVar25 = pbVar22 + 2;
              *pbVar22 = *pbVar22 - (char)uVar11;
              break;
            }
            iVar21 = iVar21 + 2;
            pbVar22 = pbVar22 + 2;
            uVar11 = uVar11 - uVar12;
          }
          if (uVar20 != 0) {
            while (0 < (int)uVar24) {
              uVar24 = uVar24 - *pbVar25;
              pbVar25 = pbVar25 + 2;
            }
            lVar13 = -2;
            uVar24 = uVar20;
            do {
              bVar4 = pbVar25[lVar13];
              uVar11 = uVar24 - bVar4;
              if ((int)uVar24 < (int)(uint)bVar4) {
                pbVar25[lVar13] = bVar4 - (char)uVar24;
                break;
              }
              lVar13 = lVar13 + -2;
              uVar24 = uVar11;
            } while (0 < (int)uVar11);
          }
          *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + iVar21;
        }
LAB_10832d940:
        uVar9 = 1;
        goto LAB_10832d7b8;
      }
      goto LAB_10832d7b4;
    }
  }
LAB_10832d7b0:
  func_0x00010832f6e4();
LAB_10832d7b4:
  uVar9 = 0;
LAB_10832d7b8:
  func_0x00010832f7d0(uVar9);
  return;
}



/* Entry: 10832d664; end: 10832da0b;  */

void FUN_10832d664(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  byte *pbVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  int iVar29;
  
  FUN_10832ee74(param_1,0);
  lVar13 = 0;
  piVar14 = (int *)param_1[3];
  uVar7 = (ulong)*(int *)((long)param_1 + 0x24);
  piVar27 = piVar14 + uVar7 * 4;
  for (; piVar14 < piVar27; piVar14 = piVar14 + 4) {
    lVar13 = lVar13 + *(int *)(*(long *)(piVar14 + 2) + 0x14);
  }
  if (lVar13 != 0) {
    iVar21 = *(int *)(param_1 + 7);
    iVar29 = *(int *)((long)param_1 + 4);
    *(int *)((long)param_1 + 4) = iVar21;
    func_0x00010832e064();
    uVar23 = uVar7 + 0x10;
    uVar15 = uVar23 + (long)*(int *)(uVar7 + 4) * 8;
    lVar13 = 0x10;
    uVar8 = uVar7;
    uVar26 = uVar15;
    for (piVar14 = (int *)param_1[3]; piVar14 < piVar27; piVar14 = piVar14 + 4) {
      *(int *)(uVar7 + lVar13) = (iVar29 - iVar21) + *piVar14;
      ((int *)(uVar7 + lVar13))[1] = (int)uVar26 - (int)uVar15;
      lVar28 = (long)*(int *)(*(long *)(piVar14 + 2) + 0x14);
      uVar8 = uVar26;
      _memcpy(uVar26,*(undefined8 *)(*(long *)(piVar14 + 2) + 8),lVar28);
      uVar26 = uVar26 + lVar28;
      lVar13 = lVar13 + 8;
    }
    func_0x00010832f73c();
    uVar9 = *param_1;
    *(undefined8 *)(param_2 + 2) = param_1[1];
    *(undefined8 *)param_2 = uVar9;
    *(ulong *)(param_2 + 4) = uVar7;
    if (uVar7 == 0) goto LAB_10832d7b4;
    iVar21 = *(int *)(uVar7 + 4);
    lVar13 = (long)iVar21;
    uVar15 = uVar23 + lVar13 * 8;
    param_2[3] = param_2[1] + *(int *)(uVar15 - 8) + 1;
    uVar26 = 0;
    uVar6 = uVar23;
    do {
      uVar16 = uVar6;
      uVar18 = uVar26;
      if (uVar15 <= uVar16) break;
      func_0x00010832f77c(*(undefined4 *)(uVar16 + 4));
      uVar26 = uVar18 + 1;
      uVar6 = uVar16 + 8;
    } while ((uVar8 & 1) != 0);
    iVar29 = (int)uVar18;
    if (iVar21 != iVar29) {
      if (iVar29 != 0) {
        lVar17 = 0;
        uVar15 = uVar18 & 0xffffffff;
        lVar28 = uVar23 + (uVar18 & 0xffffffff) * 8;
        iVar3 = *(int *)(lVar28 + -8) + 1;
        for (; (long)uVar18 < lVar13; uVar18 = uVar18 + 1) {
          *(int *)(uVar16 + lVar17) = *(int *)(uVar16 + lVar17) - iVar3;
          lVar17 = lVar17 + 8;
        }
        uVar8 = uVar23;
        _memmove(uVar23,lVar28,*(long *)(uVar7 + 8) + (lVar13 - uVar15) * 8);
        param_2[1] = param_2[1] + iVar3;
        *(int *)(uVar7 + 4) = iVar21 - iVar29;
        lVar13 = (long)(iVar21 - iVar29);
      }
      uVar15 = 0;
      piVar14 = (int *)(uVar23 + lVar13 * 8);
      piVar27 = piVar14;
      do {
        piVar2 = piVar27 + -1;
        piVar27 = piVar27 + -2;
        func_0x00010832f77c(*piVar2);
        uVar15 = uVar15 + 8;
      } while ((uVar8 & 1) != 0);
      uVar5 = (int)(uVar15 >> 3) - 1;
      if (0 < (int)uVar5) {
        _memmove(piVar14 + (ulong)uVar5 * -2,piVar14,*(undefined8 *)(uVar7 + 8));
        param_2[3] = param_2[1] + *piVar27 + 1;
        *(uint *)(uVar7 + 4) = *(int *)(uVar7 + 4) - uVar5;
      }
      lVar13 = *(long *)(param_2 + 4);
      if (lVar13 != 0) {
        uVar5 = param_2[2] - *param_2;
        uVar7 = lVar13 + 0x10;
        uVar15 = uVar7 + (long)*(int *)(lVar13 + 4) * 8;
        uVar23 = uVar7;
        uVar19 = uVar5;
        uVar20 = uVar5;
        while (uVar23 < uVar15) {
          uVar24 = 0;
          pbVar22 = (byte *)(uVar15 + *(uint *)(uVar23 + 4));
          uVar11 = uVar5;
          do {
            pbVar25 = pbVar22;
            uVar12 = uVar11;
            if (pbVar22[1] != 0) break;
            pbVar25 = pbVar22 + 2;
            uVar10 = (uint)*pbVar22;
            uVar24 = uVar24 + uVar10;
            uVar12 = uVar11 - uVar10;
            bVar1 = (int)uVar10 <= (int)uVar11;
            pbVar22 = pbVar25;
            uVar11 = uVar12;
          } while (uVar12 != 0 && bVar1);
          uVar11 = uVar24;
          if (uVar12 != 0) {
            uVar11 = 0;
            for (; 0 < (int)uVar12; uVar12 = uVar12 - bVar4) {
              bVar4 = *pbVar25;
              uVar11 = uVar11 + bVar4;
              if (pbVar25[1] != 0) {
                uVar11 = 0;
              }
              pbVar25 = pbVar25 + 2;
            }
          }
          if ((int)uVar19 <= (int)uVar24) {
            uVar24 = uVar19;
          }
          if ((int)uVar20 <= (int)uVar11) {
            uVar11 = uVar20;
          }
          uVar23 = uVar23 + 8;
          uVar19 = uVar24;
          uVar20 = uVar11;
          if (uVar11 == 0 && uVar24 == 0) goto LAB_10832d940;
        }
        if (uVar5 == uVar19) goto LAB_10832d7b0;
        *param_2 = uVar19 + *param_2;
        param_2[2] = param_2[2] - uVar20;
        for (; uVar7 < uVar15; uVar7 = uVar7 + 8) {
          iVar21 = 0;
          pbVar22 = (byte *)(uVar15 + *(uint *)(uVar7 + 4));
          uVar24 = uVar5;
          uVar11 = uVar19;
          while (pbVar25 = pbVar22, 0 < (int)uVar11) {
            uVar12 = (uint)*pbVar22;
            uVar24 = uVar24 - uVar12;
            if (uVar11 < uVar12) {
              pbVar25 = pbVar22 + 2;
              *pbVar22 = *pbVar22 - (char)uVar11;
              break;
            }
            iVar21 = iVar21 + 2;
            pbVar22 = pbVar22 + 2;
            uVar11 = uVar11 - uVar12;
          }
          if (uVar20 != 0) {
            while (0 < (int)uVar24) {
              uVar24 = uVar24 - *pbVar25;
              pbVar25 = pbVar25 + 2;
            }
            lVar13 = -2;
            uVar24 = uVar20;
            do {
              bVar4 = pbVar25[lVar13];
              uVar11 = uVar24 - bVar4;
              if ((int)uVar24 < (int)(uint)bVar4) {
                pbVar25[lVar13] = bVar4 - (char)uVar24;
                break;
              }
              lVar13 = lVar13 + -2;
              uVar24 = uVar11;
            } while (0 < (int)uVar11);
          }
          *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + iVar21;
        }
LAB_10832d940:
        uVar9 = 1;
        goto LAB_10832d7b8;
      }
      goto LAB_10832d7b4;
    }
  }
LAB_10832d7b0:
  func_0x00010832f6e4();
LAB_10832d7b4:
  uVar9 = 0;
LAB_10832d7b8:
  func_0x00010832f7d0(uVar9);
  return;
}



/* Entry: 10832da0c; end: 10832dafb;  */

undefined4 * FUN_10832da0c(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_68 = &PTR_FUN_110a3cbf0;
  uStack_40 = *param_1;
  uStack_3c = param_1[2];
  iStack_38 = 0x7fffffff;
  uStack_50 = 0x80000001;
  puStack_48 = param_1;
  func_0x00010838f5bc(auStack_80,param_1);
  if (param_4 == 0) {
    FUN_10839e610(param_3,auStack_80,&ppuStack_68);
  }
  else {
    FUN_10839aae0(param_3,auStack_80,&ppuStack_68,1);
  }
  if (iStack_38 != 0x7fffffff) {
    puStack_48[0xe] = iStack_38;
  }
  FUN_10832d664(param_1,param_2);
  FUN_10838f648(auStack_80);
  FUN_108334af4(&ppuStack_68);
  return param_1;
}



/* Entry: 10832dafc; end: 10832db63;  */

undefined8 * FUN_10832dafc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10832db64; end: 10832db8b;  */

undefined8 FUN_10832db64(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010832f774();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return 0;
}



/* Entry: 10832db8c; end: 10832dbb3;  */

bool FUN_10832db8c(long param_1,int param_2)

{
  bool bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(param_1 + 1);
  do {
    cVar3 = *pcVar5;
    if (cVar3 != '\0') break;
    pbVar2 = (byte *)(pcVar5 + -1);
    pcVar5 = pcVar5 + 2;
    iVar4 = param_2 - (uint)*pbVar2;
    bVar1 = (int)(uint)*pbVar2 <= param_2;
    param_2 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return cVar3 == '\0';
}



/* Entry: 10832dbb4; end: 10832dc1f;  */

undefined8 * FUN_10832dbb4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    func_0x00010832f73c();
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    piVar3 = (int *)param_2[2];
    param_1[2] = piVar3;
    if (piVar3 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return param_1;
}



/* Entry: 10832dc20; end: 10832dc47;  */

void FUN_10832dc20(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



/* Entry: 10832dc48; end: 10832dc9f;  */

uint FUN_10832dc48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  FUN_10821a6d8();
  if ((uint)puVar1 == 0) {
    FUN_10832dc20(param_1);
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    FUN_10832dca0();
    param_1[2] = param_2;
  }
  else {
    func_0x00010832f734();
  }
  return (uint)puVar1 ^ 1;
}



/* Entry: 10832dca0; end: 10832dd23;  */

void FUN_10832dca0(int *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = param_1[2] - *param_1;
  uVar1 = uVar4;
  FUN_10832f434(uVar4);
  lVar2 = 1;
  func_0x00010832e064(1,(long)(int)uVar1);
  *(int *)(lVar2 + 0x10) = param_1[3] + ~param_1[1];
  *(undefined4 *)(lVar2 + 0x14) = 0;
  lVar3 = (long)*(int *)(lVar2 + 4) * 8 + 0x10;
  for (; 0 < (int)uVar4; uVar4 = uVar4 - uVar1) {
    uVar1 = uVar4;
    if (0xfe < uVar4) {
      uVar1 = 0xff;
    }
    *(undefined1 *)(lVar2 + lVar3) = (char)uVar1;
    ((undefined1 *)(lVar2 + lVar3))[1] = 0xff;
    lVar3 = lVar3 + 2;
  }
  return;
}



/* Entry: 10832dd24; end: 10832dd8f;  */

bool FUN_10832dd24(int *param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  
  lVar6 = *(long *)(param_1 + 4);
  if (((lVar6 != 0) && (*(int *)(lVar6 + 4) == 1)) && (*(int *)(lVar6 + 0x10) == param_1[3] + -1)) {
    pcVar7 = (char *)((ulong)*(uint *)(lVar6 + 0x14) + lVar6 + 0x19);
    iVar5 = param_1[2] - *param_1;
    do {
      bVar4 = *pcVar7 == -1;
      if (*pcVar7 != -1) {
        return bVar4;
      }
      pbVar2 = (byte *)(pcVar7 + -1);
      pcVar7 = pcVar7 + 2;
      iVar3 = iVar5 - (uint)*pbVar2;
      bVar1 = (int)(uint)*pbVar2 <= iVar5;
      iVar5 = iVar3;
    } while (iVar3 != 0 && bVar1);
    return bVar4;
  }
  return false;
}



/* Entry: 10832dd90; end: 10832dfeb;  */

uint FUN_10832dd90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int extraout_w8;
  int extraout_w9;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [16];
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  byte bStack_88;
  int aiStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  int aiStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2[2] != 0) {
    if (param_2[2] == -1) {
      func_0x00010832f6e4();
      uVar7 = 0;
    }
    else {
      iVar1 = *(int *)((long)param_2 + 4);
      aiStack_68[0] = 8;
      uStack_60 = 0;
      uStack_58 = 0;
      aiStack_80[0] = 1;
      uStack_78 = 0;
      uStack_70 = 0;
      iVar11 = *(int *)((long)param_2 + 0xc) - iVar1;
      if (0x3ff < iVar11) {
        iVar11 = 0x400;
      }
      func_0x00010840f1a4(aiStack_68,iVar11);
      func_0x00010832f7a4();
      iVar11 = extraout_w8 - extraout_w9;
      if (0x1ff < iVar11) {
        iVar11 = 0x200;
      }
      func_0x00010840f1a4(aiStack_80,iVar11 << 7);
      FUN_1083902c4(auStack_a8,param_2);
      piVar9 = (int *)0x0;
      iVar11 = 0;
      while ((bStack_88 & 1) == 0) {
        iVar4 = iStack_8c - iVar1;
        if (iVar11 < iVar4) {
          if (piVar9 != (int *)0x0) {
            func_0x00010832f7a4();
            func_0x00010832f684();
          }
          iVar5 = iStack_94 - iVar1;
          if (iVar11 < iVar5) {
            piVar9 = aiStack_68;
            FUN_10832e038();
            iVar11 = uStack_70._4_4_;
            *piVar9 = iVar5 + -1;
            piVar9[1] = iVar11;
            func_0x00010832f7a4();
            func_0x00010832f684();
          }
          piVar9 = aiStack_68;
          FUN_10832e038();
          iVar11 = uStack_70._4_4_;
          *piVar9 = iVar4 + -1;
          piVar9[1] = iVar11;
          iVar11 = iVar4;
        }
        iVar4 = iStack_98;
        func_0x00010832f684();
        FUN_10832dfec(aiStack_80,0xff,iStack_90 - iVar4);
        func_0x000108390338(auStack_a8);
      }
      func_0x00010832f7a4();
      func_0x00010832f684();
      uVar7 = uStack_58._4_4_;
      uVar10 = (ulong)uStack_58._4_4_;
      lVar2 = (long)aiStack_80[0];
      lVar3 = (long)uStack_70._4_4_;
      func_0x00010832e064(uVar10,lVar2 * lVar3);
      uVar6 = uStack_60;
      _memcpy(uVar10 + 0x10,uStack_60,(long)aiStack_68[0] * (long)(int)uVar7);
      uVar12 = uStack_78;
      _memcpy(uVar10 + 0x10 + (long)*(int *)(uVar10 + 4) * 8,uStack_78,lVar2 * lVar3);
      func_0x00010832f6e4();
      uVar13 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar13;
      param_1[2] = uVar10;
      _free(uVar12);
      _free(uVar6);
      uVar7 = 1;
    }
    return uVar7;
  }
  puVar8 = param_2;
  FUN_10821a6d8();
  if ((uint)puVar8 == 0) {
    FUN_10832dc20(param_1);
    uVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    FUN_10832dca0();
    param_1[2] = param_2;
  }
  else {
    func_0x00010832f734();
  }
  return (uint)puVar8 ^ 1;
}



/* Entry: 10832dfec; end: 10832e037;  */

void FUN_10832dfec(void)

{
  undefined1 *puVar1;
  uint unaff_w19;
  undefined1 unaff_w20;
  undefined1 *unaff_x21;
  uint uVar2;
  
  func_0x00010832f724();
  for (; 0 < (int)unaff_w19; unaff_w19 = unaff_w19 - uVar2) {
    uVar2 = unaff_w19;
    if (0xfe < unaff_w19) {
      uVar2 = 0xff;
    }
    puVar1 = unaff_x21;
    func_0x00010832f020();
    *puVar1 = (char)uVar2;
    puVar1[1] = unaff_w20;
  }
  return;
}



/* Entry: 10832e038; end: 10832e09b;  */

long FUN_10832e038(long param_1)

{
  func_0x00010840f37c();
  return *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 8 + -8;
}



/* Entry: 10832e09c; end: 10832e15b;  */

undefined8 * FUN_10832e09c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_3;
  FUN_10821a6d8();
  if ((int)puVar1 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    if ((*(byte *)(param_2 + 0xe) >> 1 & 1) != 0) {
      uStack_38 = param_3[1];
      uStack_40 = *param_3;
LAB_10832e130:
      func_0x00010832f6a8();
      func_0x00010832f7bc();
      FUN_10832da0c();
      func_0x00010832f71c();
      return puVar1;
    }
    func_0x0001083773e0(param_2);
    func_0x00010812f1a8();
    if ((int)uStack_40 < (int)uStack_38) {
      if (uStack_40._4_4_ < uStack_38._4_4_) {
        puVar1 = &uStack_40;
        func_0x00010821b838(puVar1,param_3);
        if (((ulong)puVar1 & 1) != 0) goto LAB_10832e130;
      }
    }
  }
  func_0x00010832f734();
  return (undefined8 *)0x0;
}



/* Entry: 10832e15c; end: 10832e207;  */

undefined8 * FUN_10832e15c(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[2] != 0) {
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    if (param_3 != 1) {
      if ((param_3 == 0) &&
         ((*(long *)(param_2 + 0x10) == 0 ||
          (FUN_10821a044(param_1,param_2), ((ulong)param_1 & 1) == 0)))) {
        return (undefined8 *)0x1;
      }
LAB_10832e1d0:
      func_0x00010832f6a8();
      func_0x00010832f7bc();
      FUN_10832d638();
      func_0x00010832f71c();
      return param_1;
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      param_1 = &uStack_40;
      func_0x00010821b838(param_1,param_2);
      if (((ulong)param_1 & 1) != 0) goto LAB_10832e1d0;
    }
    func_0x00010832f734();
  }
  return (undefined8 *)0x0;
}



/* Entry: 10832e208; end: 10832e2ff;  */

undefined8 * FUN_10832e208(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uVar2 = 0;
  func_0x00010821b838();
  if ((uVar2 & 1) == 0) {
    if (param_3 != 1) {
      if (param_3 != 0) goto LAB_10832e2ec;
      goto LAB_10832e268;
    }
  }
  else {
    puVar3 = &uStack_40;
    FUN_108279bb8(puVar3,param_1);
    if ((int)puVar3 == 0) {
      if ((param_3 == 1) && (puVar3 = param_1, FUN_10832e300(param_1,&uStack_40), (int)puVar3 != 0))
      {
        FUN_10832dc48(param_1,&uStack_40);
        return param_1;
      }
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      puVar3 = &uStack_58;
      FUN_10832dc48(puVar3,param_2);
      func_0x00010832f744();
      FUN_10832dc20(&uStack_58);
      return puVar3;
    }
    if (param_3 == 1) {
LAB_10832e268:
      return (undefined8 *)(ulong)(param_1[2] != 0);
    }
    if (param_3 != 0) {
LAB_10832e2ec:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10832e2f0);
      (*pcVar1)();
    }
  }
  func_0x00010832f6e4();
  return (undefined8 *)0x0;
}



/* Entry: 10832e300; end: 10832e30f;  */

byte * FUN_10832e300(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar6 = param_2[2];
  iVar3 = param_2[3];
  if (*(long *)(param_1 + 0x10) != 0) {
    pbVar5 = param_1;
    iStack_50 = iVar1;
    iStack_4c = iVar2;
    iStack_48 = iVar6;
    iStack_44 = iVar3;
    func_0x000108219544(param_1,&iStack_50);
    if ((int)pbVar5 != 0) {
      iStack_50 = 0;
      pbVar4 = param_1;
      FUN_10832e534(param_1,iVar2,&iStack_50);
      pbVar5 = (byte *)0x0;
      if (iVar3 <= iStack_50) {
        func_0x00010832f788(param_1,pbVar4);
        iVar6 = iVar6 - iVar1;
        while( true ) {
          pbVar5 = (byte *)(ulong)(param_1[1] == 0xff);
          if (param_1[1] != 0xff || iVar6 <= (int)uStack_54) break;
          iVar6 = iVar6 - uStack_54;
          uStack_54 = (uint)param_1[2];
          param_1 = param_1 + 2;
        }
      }
    }
    return pbVar5;
  }
  return (byte *)0x0;
}



/* Entry: 10832e310; end: 10832e4ab;  */

undefined8 *
FUN_10832e310(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *apuStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_8 & 1) == 0) {
    uVar2 = param_6;
    FUN_108277294();
    uStack_58 = param_6;
    uStack_50 = uVar2;
    FUN_10832e208(param_5,&uStack_58,param_7);
    return param_5;
  }
  uStack_38 = param_5[1];
  uVar7 = *param_5;
  uVar2 = param_6;
  uVar4 = param_6;
  uStack_40 = uVar7;
  func_0x00010812f180();
  uVar6 = (undefined4)uVar7;
  puVar3 = &uStack_40;
  uStack_58 = uVar2;
  uStack_50 = uVar4;
  func_0x00010821b838(puVar3,&uStack_58);
  iVar5 = (int)param_7;
  if (((ulong)puVar3 & 1) == 0) {
    if (iVar5 != 1) {
      if (iVar5 != 0) goto LAB_10832e474;
      goto LAB_10832e3b8;
    }
  }
  else {
    FUN_10817500c(param_5);
    uStack_58 = CONCAT44(param_2,uVar6);
    uStack_50 = CONCAT44(param_4,param_3);
    FUN_108281a6c(param_6,&uStack_58);
    if ((int)param_6 == 0) {
      if ((iVar5 == 1) && (puVar3 = param_5, FUN_10832e300(param_5,&uStack_40), (int)puVar3 != 0)) {
        func_0x00010832f70c(&uStack_58);
        FUN_10832e09c(param_5,&uStack_58,&uStack_40,1);
        FUN_10837ca5c(uStack_58);
        return param_5;
      }
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x00010832f70c(apuStack_68);
      if (iVar5 != 0) {
        param_5 = &uStack_40;
      }
      FUN_10832e09c(&uStack_58,apuStack_68,param_5,1);
      FUN_10837ca5c(apuStack_68[0]);
      puVar3 = apuStack_68[0];
      func_0x00010832f744();
      FUN_10832dc20(&uStack_58);
      return puVar3;
    }
    if (iVar5 == 1) {
LAB_10832e3b8:
      return (undefined8 *)(ulong)(param_5[2] != 0);
    }
    if (iVar5 != 0) {
LAB_10832e474:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10832e478);
      (*pcVar1)();
    }
  }
  func_0x00010832f6e4();
  return (undefined8 *)0x0;
}



/* Entry: 10832e4ac; end: 10832e533;  */

bool FUN_10832e4ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int *extraout_x8;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  
  if (param_4 != (undefined8 *)0x0) {
    if (param_1[2] == 0) {
      func_0x00010832f6e4();
      bVar2 = false;
    }
    else {
      func_0x00010832f700();
      if (param_1 != param_4) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
          if (bVar2) {
            *extraout_x8 = *extraout_x8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        func_0x00010832f73c();
        param_4[2] = unaff_x22[2];
        uVar3 = *unaff_x22;
        param_4[1] = unaff_x22[1];
        *param_4 = uVar3;
      }
      FUN_10821a06c(param_4);
      bVar2 = true;
    }
    return bVar2;
  }
  return param_1[2] != 0;
}



/* Entry: 10832e534; end: 10832e5bf;  */

long FUN_10832e534(long param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 <= param_2) && (param_2 < *(int *)(param_1 + 0xc))) {
    lVar4 = *(long *)(param_1 + 0x10);
    piVar1 = (int *)(lVar4 + 0x10);
    piVar3 = piVar1;
    do {
      piVar5 = piVar3;
      piVar3 = piVar5 + 2;
    } while (*piVar5 < param_2 - iVar2);
    if (param_3 != (int *)0x0) {
      *param_3 = *piVar5 + iVar2;
    }
    return (long)piVar1 + (ulong)(uint)piVar5[1] + (long)*(int *)(lVar4 + 4) * 8;
  }
  return 0;
}



/* Entry: 10832e5c0; end: 10832e68b;  */

byte * FUN_10832e5c0(byte *param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_4c = (undefined4)param_3;
    pbVar2 = param_1;
    iStack_50 = param_2;
    iStack_48 = param_4;
    iStack_44 = param_5;
    func_0x000108219544(param_1,&iStack_50);
    if ((int)pbVar2 != 0) {
      iStack_50 = 0;
      pbVar1 = param_1;
      FUN_10832e534(param_1,param_3,&iStack_50);
      pbVar2 = (byte *)0x0;
      if (param_5 <= iStack_50) {
        func_0x00010832f788(param_1,pbVar1);
        param_4 = param_4 - param_2;
        while( true ) {
          pbVar2 = (byte *)(ulong)(param_1[1] == 0xff);
          if (param_1[1] != 0xff || param_4 <= (int)uStack_54) break;
          param_4 = param_4 - uStack_54;
          uStack_54 = (uint)param_1[2];
          param_1 = param_1 + 2;
        }
      }
    }
    return pbVar2;
  }
  return (byte *)0x0;
}



/* Entry: 10832e68c; end: 10832e6c7;  */

undefined8 * FUN_10832e68c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3cb68;
  _free(param_1[0x8b]);
  FUN_1083142ec(param_1 + 9);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10832e6c8; end: 10832e6cb;  */

undefined8 * FUN_10832e6c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3cb68;
  _free(param_1[0x8b]);
  FUN_1083142ec(param_1 + 9);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10832e6cc; end: 10832e6df;  */

void FUN_10832e6cc(void)

{
  FUN_10832e68c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832e6e0; end: 10832e72b;  */

void FUN_10832e6e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x458) != 0) {
    return;
  }
  uVar1 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + 1;
  uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  FUN_10832e72c();
  *(ulong *)(param_1 + 0x458) = uVar2;
  *(ulong *)(param_1 + 0x38) = uVar2;
  *(ulong *)(param_1 + 0x40) = uVar2 + (long)(int)uVar1 * 2;
  return;
}



/* Entry: 10832e72c; end: 10832e733;  */

/* WARNING: Removing unreachable block (ram,0x00010841082c) */

undefined8 FUN_10832e72c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _malloc();
  FUN_1084107ec(param_1,uVar1);
  return uVar1;
}



/* Entry: 10832e734; end: 10832e907;  */

void FUN_10832e734(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte *pbVar1;
  undefined2 *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uStack_44;
  
  pbVar4 = *(byte **)(param_1 + 0x20);
  pbVar1 = pbVar4;
  FUN_10832e534(pbVar4,param_3,0);
  func_0x00010832f788(pbVar4,pbVar1);
  if ((int)param_4 <= (int)uStack_44) {
    if (pbVar4[1] == 0) {
      return;
    }
    if (pbVar4[1] == 0xff) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                (*(long **)(param_1 + 0x18),param_2,param_3,param_4);
      return;
    }
  }
  FUN_10832e6e0(param_1);
  puVar2 = *(undefined2 **)(param_1 + 0x38);
  pbVar1 = *(byte **)(param_1 + 0x40);
  while( true ) {
    uVar3 = (uint)param_4;
    if ((int)uVar3 <= (int)uStack_44) {
      uStack_44 = uVar3;
    }
    *puVar2 = (short)uStack_44;
    puVar2 = puVar2 + (int)uStack_44;
    *pbVar1 = pbVar4[1];
    param_4 = (ulong)(uVar3 - uStack_44);
    if (uVar3 - uStack_44 == 0) break;
    pbVar1 = pbVar1 + (int)uStack_44;
    uStack_44 = (uint)pbVar4[2];
    pbVar4 = pbVar4 + 2;
  }
  *puVar2 = 0;
  func_0x00010832f6ec(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10832e908; end: 10832ea0f;  */

void FUN_10832e908(long param_1,undefined8 param_2,ulong param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  long lVar8;
  int iStack_64;
  
  func_0x00010832f700();
  uVar6 = *(ulong *)(param_1 + 0x20);
  FUN_10832e5c0();
  if ((uVar6 & 1) == 0) {
    do {
      iStack_64 = 0;
      lVar8 = *(long *)(unaff_x22 + 0x20);
      lVar7 = lVar8;
      FUN_10832e534(lVar8,param_3,&iStack_64);
      iVar5 = iStack_64;
      iVar4 = iStack_64 - (int)param_3;
      iVar2 = param_4;
      if (iVar4 < param_4) {
        iVar2 = iVar4 + 1;
      }
      func_0x00010832e58c(lVar8,lVar7);
      uVar3 = (uint)*(byte *)(lVar8 + 1) * param_5 + 0x80;
      if (0xff < uVar3 + (uVar3 >> 8)) {
        (**(code **)(**(long **)(unaff_x22 + 0x18) + 0x20))();
      }
      param_3 = (ulong)(iVar5 + 1);
      iVar4 = param_4 - iVar2;
      bVar1 = iVar2 <= param_4;
      param_4 = iVar4;
    } while (iVar4 != 0 && bVar1);
    func_0x00010832f7d0();
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(unaff_x22 + 0x18) + 0x20);
  func_0x00010832f7d0();
                    /* WARNING: Could not recover jumptable at 0x00010832e978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10832ea10; end: 10832eaaf;  */

void FUN_10832ea10(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = param_1[4];
  FUN_10832e5c0();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010832ea78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[3] + 0x28))((long *)param_1[3],param_2,param_3,param_4,param_5);
    return;
  }
  while (iVar2 = (int)param_5, param_5 = (ulong)(iVar2 - 1), 0 < iVar2) {
    (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
    param_3 = (ulong)((int)param_3 + 1);
  }
  return;
}



/* Entry: 10832eab0; end: 10832edab;  */

void FUN_10832eab0(long param_1,undefined4 **param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  byte bStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  uint uStack_68;
  undefined1 uStack_64;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  FUN_10832e300(uVar5,param_3);
  if ((int)uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010832eb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))(*(long **)(param_1 + 0x18),param_2,param_3);
    return;
  }
  puStack_80 = (undefined4 *)0x0;
  puStack_78 = (undefined4 *)0x0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  if (*(char *)((long)param_2 + 0x1c) == '\0') {
    uStack_64 = 1;
    puStack_78 = param_2[1];
    uStack_70 = SUB85(param_2[2],0);
    uStack_6b = (undefined3)((ulong)param_2[2] >> 0x28);
    uStack_68 = *(int *)(param_2 + 2) - *(int *)(param_2 + 1);
    uVar15 = (ulong)uStack_68;
    ppuVar6 = &puStack_80;
    func_0x0001083601b4(ppuVar6);
    puVar7 = (undefined4 *)(param_1 + 0x48);
    FUN_108314260(puVar7,ppuVar6,1,0);
    uVar3 = *(int *)(param_2 + 2) - *(int *)(param_2 + 1);
    uVar4 = *(int *)((long)param_2 + 0x14) - *(int *)((long)param_2 + 0xc);
    puVar11 = *param_2;
    uVar1 = *(uint *)(param_2 + 3);
    puVar8 = puVar7;
    for (uVar10 = 0; uVar10 != (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar10 = uVar10 + 1) {
      puVar12 = puVar8;
      for (uVar13 = 0; ((int)uVar3 >> 3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar13;
          uVar13 = uVar13 + 1) {
        bVar2 = *(byte *)((long)puVar11 + uVar13);
        uVar18 = (ulong)CONCAT16(bVar2,(uint6)CONCAT14(bVar2,(uint)CONCAT12(bVar2,(ushort)bVar2))) &
                 0x10002000400080;
        *puVar12 = CONCAT13((char)((ushort)-(short)(uVar18 >> 0x30) >> 8),
                            CONCAT12((char)((ushort)-(short)(uVar18 >> 0x20) >> 8),
                                     CONCAT11((char)((ushort)-(short)(uVar18 >> 0x10) >> 8),
                                              (char)((ushort)-(short)uVar18 >> 8))));
        uVar9 = (uint)bVar2;
        *(char *)(puVar12 + 1) = (char)(-(uVar9 & 8) >> 8);
        *(char *)((long)puVar12 + 5) = (char)(-(uVar9 & 4) >> 8);
        *(char *)((long)puVar12 + 6) = (char)(-(uVar9 & 2) >> 8);
        *(byte *)((long)puVar12 + 7) = -(bVar2 & 1);
        puVar12 = puVar12 + 2;
      }
      if ((uVar3 & 7) != 0) {
        uVar9 = (uint)*(byte *)((long)puVar11 + ((long)((ulong)uVar3 << 0x20) >> 0x23));
        for (lVar14 = 0; (uVar3 & 7) != (uint)lVar14; lVar14 = lVar14 + 1) {
          *(char *)((long)puVar12 + lVar14) = (char)(-(uVar9 & 0x80) >> 8);
          uVar9 = uVar9 << 1;
        }
      }
      puVar11 = (undefined4 *)((long)puVar11 + (ulong)uVar1);
      puVar8 = (undefined4 *)((long)puVar8 + uVar15);
    }
    param_2 = &puStack_80;
    puStack_80 = puVar7;
  }
  FUN_10832e6e0(param_1);
  uVar1 = *param_3;
  uVar10 = param_3[1];
  ppuVar6 = param_2;
  FUN_108360364(param_2,uVar1,uVar10);
  uStack_88 = *(uint *)(param_2 + 3);
  uVar15 = (ulong)uStack_88;
  uVar3 = param_3[2];
  bStack_84 = *(byte *)((long)param_2 + 0x1c);
  if (bStack_84 - 1 < 2) {
    bStack_84 = 1;
    pcVar17 = FUN_10832f4b4;
  }
  else if (bStack_84 == 4) {
    pcVar17 = (code *)0x10832f568;
  }
  else {
    pcVar17 = (code *)0x0;
  }
  uStack_a0 = *(undefined8 *)(param_1 + 0x458);
  uStack_98 = (ulong)uVar1;
  uStack_90 = (ulong)uVar3;
  uVar4 = param_3[3];
  do {
    uStack_a4 = 0;
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = uVar16;
    FUN_10832e534(uVar16,uVar10,&uStack_a4);
    uVar9 = uVar4;
    if ((int)(uStack_a4 + 1) <= (int)uVar4) {
      uVar9 = uStack_a4 + 1;
    }
    uStack_a4 = uVar9;
    func_0x00010832e58c(uVar16,uVar5,*param_3,&uStack_a8);
    do {
      (*pcVar17)(ppuVar6,uVar3 - uVar1,uVar16,uStack_a8,uStack_a0);
      uStack_98 = CONCAT44(uVar10,(undefined4)uStack_98);
      uVar10 = uVar10 + 1;
      uStack_90 = CONCAT44(uVar10,(undefined4)uStack_90);
      (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
                (*(long **)(param_1 + 0x18),&uStack_a0,&uStack_98);
      ppuVar6 = (undefined4 **)((long)ppuVar6 + uVar15);
    } while ((int)uVar10 < (int)uStack_a4);
  } while ((int)uVar10 < (int)uVar4);
  return;
}



/* Entry: 10832edac; end: 10832edeb;  */

void FUN_10832edac(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 10832edec; end: 10832ee5f;  */

void FUN_10832edec(long *param_1)

{
  long *unaff_x22;
  
  func_0x00010832f700();
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*unaff_x22 + 0x18))();
  return;
}



/* Entry: 10832ee60; end: 10832ee73;  */

undefined8 FUN_10832ee60(void)

{
  return 1;
}



/* Entry: 10832ee74; end: 10832efaf;  */

undefined4 * FUN_10832ee74(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((0 < (int)uVar1) &&
     (FUN_10832efb0(param_1,*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x10 + -0x10), uVar1 != 1)) {
    if (((int)*(uint *)(param_1 + 0x24) <= (int)(uVar1 - 2)) ||
       (uVar2 = uVar1 - 1, *(uint *)(param_1 + 0x24) <= uVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10832ef6c);
      (*pcVar3)();
    }
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)(uVar1 - 2) * 0x10);
    puVar6 = (undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 0x10);
    uVar4 = *(undefined8 *)(puVar5 + 2);
    lVar7 = *(long *)(puVar6 + 2);
    FUN_10840f46c(uVar4,lVar7);
    if ((int)uVar4 != 0) {
      *puVar5 = *puVar6;
      if (param_2 == 0) {
        FUN_10840f118(lVar7);
        __ZdlPv();
        FUN_10840f328(param_1 + 0x10,uVar2);
        return (undefined4 *)0x0;
      }
      *(undefined4 *)(lVar7 + 0x14) = 0;
      return puVar6;
    }
  }
  if (param_2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)(param_1 + 0x10);
  func_0x00010832eff4();
  puVar6 = (undefined4 *)0x18;
  __Znwm();
  *puVar6 = 1;
  *(undefined8 *)(puVar6 + 2) = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined4 **)(puVar5 + 2) = puVar6;
  return puVar5;
}



/* Entry: 10832efb0; end: 10832f04f;  */

void FUN_10832efb0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34) - *(int *)(param_2 + 4);
  if (iVar1 != 0 && *(int *)(param_2 + 4) <= *(int *)(param_1 + 0x34)) {
    func_0x00010832ef6c(*(undefined8 *)(param_2 + 8),0,iVar1);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x34);
  }
  return;
}



/* Entry: 10832f050; end: 10832f063;  */

void FUN_10832f050(void)

{
  FUN_108334af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10832f064; end: 10832f0bb;  */

void FUN_10832f064(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  char in_NG;
  char in_OV;
  int *piVar2;
  int iVar3;
  int unaff_w21;
  int *piVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  func_0x00010832f700();
  func_0x00010832f7b0();
  if (in_NG != in_OV) {
    *(int *)(unaff_x22 + 0x30) = param_3;
  }
  FUN_10832f3dc();
  piVar2 = *(int **)(unaff_x22 + 0x20);
  iVar1 = *piVar2;
  param_3 = param_3 - piVar2[1];
  if (param_3 == piVar2[0xc]) {
    piVar4 = *(int **)(piVar2 + 10);
    iVar3 = piVar4[1];
  }
  else {
    piVar2[0xc] = param_3;
    piVar4 = piVar2;
    func_0x00010832ee74(piVar2,1);
    iVar3 = 0;
    *piVar4 = param_3;
    piVar4[1] = 0;
    *(int **)(piVar2 + 10) = piVar4;
  }
  uVar5 = *(undefined8 *)(piVar4 + 2);
  iVar1 = unaff_w21 - (iVar3 + iVar1);
  if (iVar1 != 0) {
    func_0x00010832ef6c(uVar5,0,iVar1);
    piVar4[1] = piVar4[1] + iVar1;
  }
  func_0x00010832ef6c(uVar5,0xff,param_4);
  piVar4[1] = piVar4[1] + (int)param_4;
  return;
}



/* Entry: 10832f0bc; end: 10832f15f;  */

void FUN_10832f0bc(long param_1,int param_2,undefined8 param_3,undefined1 *param_4,short *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char in_NG;
  char in_OV;
  uint uVar5;
  
  func_0x00010832f7b0();
  if (in_NG != in_OV) {
    *(int *)(param_1 + 0x30) = (int)param_3;
  }
  FUN_10832f3dc(param_1,param_3);
  for (; 0 < *param_5; param_5 = param_5 + uVar5) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = param_2 - iVar2;
    if (iVar2 <= param_2) {
      iVar3 = 0;
    }
    uVar5 = (uint)*param_5;
    iVar1 = param_2 + uVar5;
    iVar4 = *(int *)(param_1 + 0x2c) - iVar1;
    if (iVar1 <= *(int *)(param_1 + 0x2c)) {
      iVar4 = 0;
    }
    iVar4 = iVar3 + uVar5 + iVar4;
    if (iVar4 != 0) {
      if (param_2 <= iVar2) {
        param_2 = iVar2;
      }
      FUN_10832d580(*(undefined8 *)(param_1 + 0x20),param_2,param_3,*param_4,iVar4);
    }
    param_4 = param_4 + uVar5;
    param_2 = iVar1;
  }
  return;
}



/* Entry: 10832f160; end: 10832f20f;  */

void FUN_10832f160(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  int iVar1;
  long lVar2;
  undefined4 uStack_38;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_4 == 1) {
    uStack_32 = (undefined1)param_5;
    uStack_31 = 0;
    uStack_38 = 1;
    FUN_10832f0bc(param_1,param_2,param_3,&uStack_32,&uStack_38);
  }
  else {
    iVar1 = (int)param_3;
    if (iVar1 < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x30) = iVar1;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010832f79c(lVar2,param_2,param_3,param_5);
    FUN_10832efb0(lVar2,*(undefined8 *)(lVar2 + 0x28));
    iVar1 = iVar1 + param_4 + -1;
    **(int **)(lVar2 + 0x28) = iVar1 - *(int *)(lVar2 + 4);
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return;
}



/* Entry: 10832f210; end: 10832f293;  */

void FUN_10832f210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  int iVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  
  func_0x00010832f7b0();
  if (in_NG != in_OV) {
    *(int *)(param_1 + 0x30) = (int)param_3;
  }
  func_0x00010832f750();
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_10832d580(lVar2,param_2,param_3,0xff,param_4);
  FUN_10832efb0(lVar2,*(undefined8 *)(lVar2 + 0x28));
  iVar1 = (int)param_3 + param_5 + -1;
  **(int **)(lVar2 + 0x28) = iVar1 - *(int *)(lVar2 + 4);
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10832f294; end: 10832f3af;  */

void FUN_10832f294(long param_1,ulong param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  func_0x00010832f7b0();
  iVar2 = (int)param_3;
  if (in_NG != in_OV) {
    *(int *)(param_1 + 0x30) = iVar2;
  }
  func_0x00010832f750();
  lVar3 = *(long *)(param_1 + 0x20);
  if ((int)param_6 == 0) {
    uVar4 = (ulong)((int)param_2 + 1);
  }
  else if ((int)param_6 == 0xff) {
    param_4 = param_4 + 1;
    uVar4 = param_2;
  }
  else {
    uVar4 = (ulong)((int)param_2 + 1);
    func_0x00010832f79c(lVar3,param_2,param_3,param_6);
  }
  iVar1 = param_4;
  if ((int)param_7 == 0xff) {
    iVar1 = param_4 + 1;
  }
  if (0 < iVar1) {
    FUN_10832d580(lVar3,uVar4,param_3,0xff);
  }
  if ((int)param_7 - 1U < 0xfe) {
    func_0x00010832f79c(lVar3,(int)uVar4 + param_4,param_3,param_7);
  }
  if (*(long *)(lVar3 + 0x28) == 0) {
    iVar2 = iVar2 + param_5 + -1;
  }
  else {
    FUN_10832efb0(lVar3);
    iVar2 = iVar2 + param_5 + -1;
    **(int **)(lVar3 + 0x28) = iVar2 - *(int *)(lVar3 + 4);
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}



/* Entry: 10832f3b0; end: 10832f3db;  */

void FUN_10832f3b0(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f48efcb);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10832f3dc);
  (*pcVar1)();
}



/* Entry: 10832f3dc; end: 10832f433;  */

void FUN_10832f3dc(long param_1,int param_2)

{
  if (-0x7fffffff < *(int *)(param_1 + 0x18) && 1 < param_2 - *(int *)(param_1 + 0x18)) {
    FUN_10832d580(*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x28),param_2 + -1,0,
                  *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}



/* Entry: 10832f434; end: 10832f457;  */

int FUN_10832f434(uint param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  while (0 < (int)param_1) {
    bVar2 = 0xfe < param_1;
    uVar1 = param_1 - 0xff;
    param_1 = 0;
    if (bVar2) {
      param_1 = uVar1;
    }
    iVar3 = iVar3 + 2;
  }
  return iVar3;
}



/* Entry: 10832f458; end: 10832f4b3;  */

long FUN_10832f458(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 + (long)*(int *)(param_1 + 0x24) * 0x10;
  for (; uVar2 < uVar1; uVar2 = uVar2 + 0x10) {
    if (*(long *)(uVar2 + 8) != 0) {
      FUN_10840f118();
    }
    __ZdlPv();
  }
  FUN_10840f118(param_1 + 0x10);
  return param_1;
}



/* Entry: 10832f4b4; end: 10832f64b;  */

void FUN_10832f4b4(undefined8 param_1,undefined8 param_2,byte *param_3,uint param_4,
                  undefined1 *param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  uint unaff_w21;
  byte *unaff_x22;
  
  func_0x00010832f700();
  while( true ) {
    uVar1 = unaff_w21;
    if ((int)param_4 <= (int)unaff_w21) {
      uVar1 = param_4;
    }
    bVar2 = param_3[1];
    if (bVar2 == 0) {
      if (uVar1 != 0) {
        _bzero(param_5,(long)(int)uVar1);
      }
    }
    else if (bVar2 == 0xff) {
      func_0x00010832f75c();
    }
    else {
      puVar4 = param_5;
      pbVar5 = unaff_x22;
      for (uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
          uVar6 = uVar6 - 1) {
        uVar3 = (uint)*pbVar5 * (uint)bVar2 + 0x80;
        *puVar4 = (char)(uVar3 + (uVar3 >> 8) >> 8);
        puVar4 = puVar4 + 1;
        pbVar5 = pbVar5 + 1;
      }
    }
    if ((int)unaff_w21 <= (int)param_4) break;
    unaff_w21 = unaff_w21 - uVar1;
    unaff_x22 = unaff_x22 + (int)uVar1;
    param_3 = param_3 + 2;
    param_4 = (uint)*param_3;
    param_5 = param_5 + (int)uVar1;
  }
  return;
}



/* Entry: 10832f64c; end: 10832f7eb;  */

void FUN_10832f64c(void)

{
  return;
}



/* Entry: 10832f7ec; end: 10832f933;  */

bool FUN_10832f7ec(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar13;
  ulong uVar12;
  
  uVar7 = (uint)(*param_2 * 4.0 * 64.0);
  uVar1 = -(uVar7 >> 0x15 & 1) & 0xc0000000 | (uVar7 & 0x3fffff) << 8;
  uVar7 = (uint)(*param_3 * 4.0 * 64.0);
  uVar2 = -(uVar7 >> 0x15 & 1) & 0xc0000000 | (uVar7 & 0x3fffff) << 8;
  uVar9 = NEON_fmov(0x40800000,4);
  uVar9 = NEON_fcvtzs(CONCAT44(param_3[1] * (float)((ulong)uVar9 >> 0x20),param_2[1] * (float)uVar9)
                      ,6,4);
  uVar7 = (((int)uVar9 << 10) >> 2) + 0x2000;
  uVar11 = uVar7 & 0xffffc0ff;
  uVar12 = CONCAT44((((int)((ulong)uVar9 >> 0x20) << 10) >> 2) + 0x2000,uVar7) & 0xffffc0ffffffc0ff;
  uVar13 = (uint)(uVar12 >> 0x20);
  uVar10 = NEON_rev64(uVar12,4);
  uVar7 = uVar13;
  uVar3 = uVar2;
  uVar4 = uVar11;
  if ((int)uVar13 < (int)uVar11) {
    uVar7 = uVar11;
    uVar3 = uVar1;
    uVar4 = uVar13;
    uVar1 = uVar2;
  }
  uVar8 = 1;
  if ((int)uVar13 < (int)uVar11) {
    uVar8 = 0xff;
    uVar12 = uVar10;
  }
  if (uVar11 != uVar13) {
    uVar7 = (int)(uVar7 - uVar4) >> 10;
    uVar2 = (int)(uVar3 - uVar1) >> 10;
    uVar5 = uVar2;
    FUN_10832f934(uVar2,uVar7);
    uVar6 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar6 = uVar5;
    }
    *(uint *)(param_1 + 0x10) = uVar1;
    *(uint *)(param_1 + 0x14) = uVar5;
    *(uint *)(param_1 + 0x18) = uVar1;
    *(uint *)(param_1 + 0x1c) = uVar4;
    *(ulong *)(param_1 + 0x20) = uVar12;
    if (uVar3 - uVar1 < 0x400 || uVar5 == 0) {
      uVar6 = 0x7fffffff;
    }
    else if (uVar6 < 0x400) {
      FUN_10832f990();
    }
    else {
      FUN_10832f934(uVar7,uVar2);
      uVar6 = -uVar7;
      if (-1 < (int)uVar7) {
        uVar6 = uVar7;
      }
    }
    *(uint *)(param_1 + 0x28) = uVar6;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x30) = uVar8;
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  return uVar11 != uVar13;
}



/* Entry: 10832f934; end: 10832f98f;  */

ulong FUN_10832f934(ulong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  uVar4 = (uint)param_1;
  uVar2 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar2 = uVar4;
  }
  iVar1 = -iVar5;
  if (-1 < iVar5) {
    iVar1 = iVar5;
  }
  if ((iVar1 - 8U < 0x3f8) && (uVar2 < 0x1000)) {
    FUN_10832f990(param_2);
    return (ulong)(uint)((int)((int)param_2 * uVar4) >> 6);
  }
  if (uVar4 == (int)(short)param_1) {
    uVar2 = 0;
    if (iVar5 != 0) {
      uVar2 = (int)(uVar4 << 0x10) / iVar5;
    }
    return (ulong)uVar2;
  }
  uVar3 = 0;
  if ((long)iVar5 != 0) {
    uVar3 = (long)(-(param_1 >> 0x1f & 1) & 0xffff000000000000 | (param_1 & 0xffffffff) << 0x10) /
            (long)iVar5;
  }
  if ((long)uVar3 < -0x7ffffffe) {
    uVar3 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar3) {
    uVar3 = 0x7fffffff;
  }
  return uVar3;
}



/* Entry: 10832f990; end: 10832f9c7;  */

int FUN_10832f990(uint param_1)

{
  if (0 < (int)param_1) {
    return -*(int *)(&UNK_10df1b488 + (0x400 - (ulong)param_1) * 4);
  }
  return *(int *)(&UNK_10df1c488 + (long)(int)param_1 * 4);
}



/* Entry: 10832f9c8; end: 10832fa7b;  */

bool FUN_10832f9c8(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_3;
  iVar3 = param_4;
  if (param_5 < param_3) {
    *(char *)(param_1 + 0x30) = -*(char *)(param_1 + 0x30);
    iVar4 = param_5;
    param_5 = param_3;
    iVar3 = param_2;
    param_2 = param_4;
  }
  uVar1 = param_5 - iVar4;
  if (0x3ff < uVar1) {
    uVar5 = param_6 >> 10;
    uVar2 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar2 = uVar5;
    }
    *(int *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0x14) = param_6;
    *(int *)(param_1 + 0x18) = param_2;
    *(int *)(param_1 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x20) = iVar4;
    *(int *)(param_1 + 0x24) = param_5;
    uVar5 = 0x7fffffff;
    if ((param_6 != 0) && (0x3ff < (uint)(iVar3 - param_2))) {
      if (uVar2 < 0x400) {
        FUN_10832f990();
        uVar5 = uVar2;
      }
      else {
        uVar2 = (int)uVar1 >> 10;
        FUN_10832f934(uVar2,iVar3 - param_2 >> 10);
        uVar5 = -uVar2;
        if (-1 < (int)uVar2) {
          uVar5 = uVar2;
        }
      }
    }
    *(uint *)(param_1 + 0x28) = uVar5;
  }
  return 0x3ff < uVar1;
}



/* Entry: 10832fa7c; end: 10832fa9b;  */

long FUN_10832fa7c(long param_1,undefined8 param_2,int param_3)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  if (*(char *)(param_1 + 0x2d) < '\0') {
    iVar13 = (int)*(char *)(param_1 + 0x2d);
    iVar15 = *(int *)(param_1 + 100);
    bVar4 = *(byte *)(param_1 + 0x2e);
    bVar3 = *(byte *)(param_1 + 0x2f);
    iVar11 = *(int *)(param_1 + 0x60);
    do {
      if (iVar13 < -1) {
        pauVar1 = (undefined1 (*) [12])(param_1 + 0x68);
        iVar19 = (int)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
        iVar17 = (int)*(undefined8 *)*pauVar1;
        iVar18 = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar21._12_4_ = iVar19;
        auVar21._0_12_ = *pauVar1;
        auVar5._12_4_ = iVar19;
        auVar5._0_12_ = *pauVar1;
        auVar21 = NEON_ext(auVar21,auVar5,8,1);
        uVar20 = NEON_sshl(auVar21._0_8_,CONCAT44(-(uint)bVar4,-(uint)bVar4),4);
        iVar9 = (iVar17 >> (bVar3 & 0x1f)) + iVar11;
        iVar8 = (iVar18 >> (bVar3 & 0x1f)) + iVar15;
        *(int *)(param_1 + 0x70) =
             (int)*(undefined8 *)(param_1 + 0x78) + (int)*(undefined8 *)(param_1 + 0x70);
        *(int *)(param_1 + 0x74) = (int)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) + iVar19;
        *(int *)(param_1 + 0x68) = (int)uVar20 + iVar17;
        *(int *)(param_1 + 0x6c) = (int)((ulong)uVar20 >> 0x20) + iVar18;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x80);
        iVar8 = *(int *)(param_1 + 0x84);
      }
      iVar17 = iVar13 + 1;
      iVar13 = iVar8;
      if (iVar8 <= iVar15) {
        iVar13 = iVar15;
      }
      iVar15 = iVar13;
      if (param_3 == 0) {
        iVar15 = iVar8;
      }
      uVar16 = iVar15 + 0x2000U & 0xffffc000;
      iVar13 = iVar17;
      uVar12 = uVar16;
      if (param_3 != 0) {
        uVar14 = *(uint *)(param_1 + 0x84);
        uVar12 = uVar14;
        if ((int)uVar16 <= (int)uVar14) {
          uVar12 = uVar16;
        }
        iVar13 = 0;
        if ((int)uVar16 <= (int)uVar14) {
          iVar13 = iVar17;
        }
      }
      iVar8 = *(int *)(param_1 + 0x88);
      if (uVar12 - iVar8 < 0x400) {
        uVar7 = 0x7fffffff;
      }
      else {
        uVar7 = (ulong)(uint)(iVar9 - iVar11 >> 10);
        func_0x00010832fe8c(uVar7,(int)(uVar12 - iVar8) >> 10);
        iVar8 = *(int *)(param_1 + 0x88);
      }
      lVar6 = param_1;
      FUN_10832f9c8(param_1,iVar11,iVar8,iVar9,uVar12,uVar7);
      *(uint *)(param_1 + 0x88) = uVar12;
    } while ((iVar13 < 0) && (iVar11 = iVar9, (int)lVar6 == 0));
    *(int *)(param_1 + 0x60) = iVar9;
    *(int *)(param_1 + 100) = iVar15;
    *(char *)(param_1 + 0x2d) = (char)iVar13;
    return lVar6;
  }
  if (*(char *)(param_1 + 0x2d) == '\0') {
    return 0;
  }
  iVar15 = *(int *)(param_1 + 0x60);
  uVar16 = *(uint *)(param_1 + 100);
  uVar12 = *(uint *)(param_1 + 0x68);
  uVar14 = *(uint *)(param_1 + 0x6c);
  bVar4 = *(byte *)(param_1 + 0x2e);
  lVar6 = param_1;
  iVar13 = (int)*(char *)(param_1 + 0x2d);
  do {
    iVar11 = iVar13;
    iVar13 = (int)lVar6;
    if (iVar11 < 2) {
      iVar15 = *(int *)(param_1 + 0x78);
      uVar16 = *(uint *)(param_1 + 0x7c);
      uVar10 = uVar16;
      iVar8 = iVar15;
      if (uVar16 - *(int *)(param_1 + 0x84) < 0x400) {
        lVar6 = 0;
LAB_10832fd34:
        *(int *)(param_1 + 0x60) = iVar15;
        *(uint *)(param_1 + 100) = uVar16;
        *(uint *)(param_1 + 0x68) = uVar12;
        *(uint *)(param_1 + 0x6c) = uVar14;
        *(int *)(param_1 + 0x80) = iVar8;
        *(uint *)(param_1 + 0x84) = uVar10;
        *(char *)(param_1 + 0x2d) = (char)iVar11 + -1;
        return lVar6;
      }
      func_0x00010832fec8();
    }
    else {
      iVar15 = iVar15 + ((int)uVar12 >> (bVar4 & 0x1f));
      uVar10 = (int)uVar14 >> (bVar4 & 0x1f);
      uVar16 = uVar16 + uVar10;
      uVar2 = -uVar10;
      if (-1 < (int)uVar10) {
        uVar2 = uVar10;
      }
      if (uVar2 >> 0x11 == 0) {
        iVar9 = *(int *)(param_1 + 0x84);
LAB_10832fc80:
        uVar10 = uVar16 + 0x2000 & 0xffffc000;
        if ((int)*(uint *)(param_1 + 0x7c) <= (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x7c);
        }
        iVar8 = iVar15;
        if (uVar10 - iVar9 < 0x400) {
          iVar13 = 0x7fffffff;
        }
        else {
          func_0x00010832fec8();
        }
      }
      else {
        uVar10 = -uVar14;
        if (-1 < (int)uVar14) {
          uVar10 = uVar14;
        }
        uVar2 = -uVar12;
        if (-1 < (int)uVar12) {
          uVar2 = uVar12;
        }
        iVar9 = *(int *)(param_1 + 0x84);
        if ((ulong)uVar10 << 6 <= (ulong)uVar2) goto LAB_10832fc80;
        if (uVar16 - iVar9 < 0x400) {
          iVar13 = 0x7fffffff;
        }
        else {
          func_0x00010832fec8();
        }
        uVar10 = uVar16 + 0x8000 & 0xffff0000;
        if ((int)*(uint *)(param_1 + 0x7c) <= (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x7c);
        }
        iVar8 = iVar15 - (int)((ulong)((long)(int)(uVar16 - uVar10) * (long)iVar13) >> 0x10);
      }
      uVar12 = *(int *)(param_1 + 0x70) + uVar12;
      uVar14 = *(int *)(param_1 + 0x74) + uVar14;
    }
    if (iVar13 == 0x7fffffff) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1;
      FUN_10832f9c8(param_1,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),iVar8,
                    uVar10);
    }
    if ((iVar11 < 2) || (iVar13 = iVar11 + -1, (int)lVar6 != 0)) goto LAB_10832fd34;
  } while( true );
}



/* Entry: 10832fa9c; end: 10832fbc3;  */

void FUN_10832fa9c(long param_1,int param_2)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  iVar13 = (int)*(char *)(param_1 + 0x2d);
  iVar14 = *(int *)(param_1 + 100);
  bVar6 = *(byte *)(param_1 + 0x2e);
  bVar7 = *(byte *)(param_1 + 0x2f);
  iVar12 = *(int *)(param_1 + 0x60);
  do {
    if (iVar13 < -1) {
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x68);
      iVar17 = (int)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
      iVar15 = (int)*(undefined8 *)*pauVar1;
      iVar16 = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar19._12_4_ = iVar17;
      auVar19._0_12_ = *pauVar1;
      auVar8._12_4_ = iVar17;
      auVar8._0_12_ = *pauVar1;
      auVar19 = NEON_ext(auVar19,auVar8,8,1);
      uVar18 = NEON_sshl(auVar19._0_8_,CONCAT44(-(uint)bVar6,-(uint)bVar6),4);
      iVar2 = (iVar15 >> (bVar7 & 0x1f)) + iVar12;
      iVar11 = (iVar16 >> (bVar7 & 0x1f)) + iVar14;
      *(int *)(param_1 + 0x70) =
           (int)*(undefined8 *)(param_1 + 0x78) + (int)*(undefined8 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x74) = (int)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) + iVar17;
      *(int *)(param_1 + 0x68) = (int)uVar18 + iVar15;
      *(int *)(param_1 + 0x6c) = (int)((ulong)uVar18 >> 0x20) + iVar16;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x80);
      iVar11 = *(int *)(param_1 + 0x84);
    }
    iVar15 = iVar13 + 1;
    iVar13 = iVar11;
    if (iVar11 <= iVar14) {
      iVar13 = iVar14;
    }
    iVar14 = iVar13;
    if (param_2 == 0) {
      iVar14 = iVar11;
    }
    uVar3 = iVar14 + 0x2000U & 0xffffc000;
    iVar13 = iVar15;
    uVar4 = uVar3;
    if (param_2 != 0) {
      uVar5 = *(uint *)(param_1 + 0x84);
      uVar4 = uVar5;
      if ((int)uVar3 <= (int)uVar5) {
        uVar4 = uVar3;
      }
      iVar13 = 0;
      if ((int)uVar3 <= (int)uVar5) {
        iVar13 = iVar15;
      }
    }
    iVar11 = *(int *)(param_1 + 0x88);
    if (uVar4 - iVar11 < 0x400) {
      uVar10 = 0x7fffffff;
    }
    else {
      uVar10 = (ulong)(uint)(iVar2 - iVar12 >> 10);
      FUN_10832fe8c(uVar10,(int)(uVar4 - iVar11) >> 10);
      iVar11 = *(int *)(param_1 + 0x88);
    }
    lVar9 = param_1;
    FUN_10832f9c8(param_1,iVar12,iVar11,iVar2,uVar4,uVar10);
    *(uint *)(param_1 + 0x88) = uVar4;
  } while ((iVar13 < 0) && (iVar12 = iVar2, (int)lVar9 == 0));
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 100) = iVar14;
  *(char *)(param_1 + 0x2d) = (char)iVar13;
  return;
}



/* Entry: 10832fbc4; end: 10832fd63;  */

void FUN_10832fbc4(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar9 = *(int *)(param_1 + 0x60);
  uVar12 = *(uint *)(param_1 + 100);
  uVar10 = *(uint *)(param_1 + 0x68);
  uVar11 = *(uint *)(param_1 + 0x6c);
  bVar2 = *(byte *)(param_1 + 0x2e);
  lVar3 = param_1;
  iVar4 = (int)*(char *)(param_1 + 0x2d);
  do {
    iVar5 = iVar4;
    iVar4 = (int)lVar3;
    if (iVar5 < 2) {
      iVar9 = *(int *)(param_1 + 0x78);
      uVar12 = *(uint *)(param_1 + 0x7c);
      iVar8 = iVar9;
      uVar7 = uVar12;
      if (uVar12 - *(int *)(param_1 + 0x84) < 0x400) {
LAB_10832fd34:
        *(int *)(param_1 + 0x60) = iVar9;
        *(uint *)(param_1 + 100) = uVar12;
        *(uint *)(param_1 + 0x68) = uVar10;
        *(uint *)(param_1 + 0x6c) = uVar11;
        *(int *)(param_1 + 0x80) = iVar8;
        *(uint *)(param_1 + 0x84) = uVar7;
        *(char *)(param_1 + 0x2d) = (char)iVar5 + -1;
        return;
      }
      func_0x00010832fec8();
    }
    else {
      iVar9 = iVar9 + ((int)uVar10 >> (bVar2 & 0x1f));
      uVar7 = (int)uVar11 >> (bVar2 & 0x1f);
      uVar12 = uVar12 + uVar7;
      uVar1 = -uVar7;
      if (-1 < (int)uVar7) {
        uVar1 = uVar7;
      }
      if (uVar1 >> 0x11 == 0) {
        iVar6 = *(int *)(param_1 + 0x84);
LAB_10832fc80:
        uVar7 = uVar12 + 0x2000 & 0xffffc000;
        if ((int)*(uint *)(param_1 + 0x7c) <= (int)uVar7) {
          uVar7 = *(uint *)(param_1 + 0x7c);
        }
        iVar8 = iVar9;
        if (uVar7 - iVar6 < 0x400) {
          iVar4 = 0x7fffffff;
        }
        else {
          func_0x00010832fec8();
        }
      }
      else {
        uVar7 = -uVar11;
        if (-1 < (int)uVar11) {
          uVar7 = uVar11;
        }
        uVar1 = -uVar10;
        if (-1 < (int)uVar10) {
          uVar1 = uVar10;
        }
        iVar6 = *(int *)(param_1 + 0x84);
        if ((ulong)uVar7 << 6 <= (ulong)uVar1) goto LAB_10832fc80;
        if (uVar12 - iVar6 < 0x400) {
          iVar4 = 0x7fffffff;
        }
        else {
          func_0x00010832fec8();
        }
        uVar7 = uVar12 + 0x8000 & 0xffff0000;
        if ((int)*(uint *)(param_1 + 0x7c) <= (int)uVar7) {
          uVar7 = *(uint *)(param_1 + 0x7c);
        }
        iVar8 = iVar9 - (int)((ulong)((long)(int)(uVar12 - uVar7) * (long)iVar4) >> 0x10);
      }
      uVar10 = *(int *)(param_1 + 0x70) + uVar10;
      uVar11 = *(int *)(param_1 + 0x74) + uVar11;
    }
    if (iVar4 == 0x7fffffff) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1;
      FUN_10832f9c8(param_1,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),iVar8,
                    uVar7);
    }
    if ((iVar5 < 2) || (iVar4 = iVar5 + -1, (int)lVar3 != 0)) goto LAB_10832fd34;
  } while( true );
}



/* Entry: 10832fd64; end: 10832fde7;  */

void FUN_10832fd64(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined4 extraout_w10;
  int extraout_w11;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  lVar3 = param_1 + 0x38;
  FUN_10834cdc4(lVar3,param_2,2);
  if ((int)lVar3 == 0) {
    return;
  }
  *(ulong *)(param_1 + 0x70) =
       CONCAT44((int)((long)*(undefined8 *)(param_1 + 0x70) >> 0x22),
                (int)*(undefined8 *)(param_1 + 0x70) >> 2);
  *(ulong *)(param_1 + 0x68) =
       CONCAT44((int)((long)*(undefined8 *)(param_1 + 0x68) >> 0x22),
                (int)*(undefined8 *)(param_1 + 0x68) >> 2);
  func_0x00010832fee4(*(int *)(param_1 + 0x60) >> 2);
  *(undefined4 *)(param_1 + 0x60) = extraout_w8;
  *(undefined4 *)(param_1 + 100) = extraout_w9;
  *(undefined4 *)(param_1 + 0x78) = extraout_w10;
  *(uint *)(param_1 + 0x7c) = extraout_w11 + 0x2000U & 0xffffc000;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined2 *)(param_1 + 0x2d) = *(undefined2 *)(param_1 + 0x59);
  *(undefined4 *)(param_1 + 0x80) = extraout_w8;
  *(undefined4 *)(param_1 + 0x84) = extraout_w9;
  iVar9 = *(int *)(param_1 + 0x60);
  uVar12 = *(uint *)(param_1 + 100);
  uVar10 = *(uint *)(param_1 + 0x68);
  uVar11 = *(uint *)(param_1 + 0x6c);
  bVar2 = *(byte *)(param_1 + 0x2e);
  lVar3 = param_1;
  iVar4 = (int)*(char *)(param_1 + 0x2d);
  do {
    iVar5 = iVar4;
    iVar4 = (int)lVar3;
    if (iVar5 < 2) {
      iVar9 = *(int *)(param_1 + 0x78);
      uVar12 = *(uint *)(param_1 + 0x7c);
      iVar8 = iVar9;
      uVar7 = uVar12;
      if (uVar12 - *(int *)(param_1 + 0x84) < 0x400) {
LAB_10832fd34:
        *(int *)(param_1 + 0x60) = iVar9;
        *(uint *)(param_1 + 100) = uVar12;
        *(uint *)(param_1 + 0x68) = uVar10;
        *(uint *)(param_1 + 0x6c) = uVar11;
        *(int *)(param_1 + 0x80) = iVar8;
        *(uint *)(param_1 + 0x84) = uVar7;
        *(char *)(param_1 + 0x2d) = (char)iVar5 + -1;
        return;
      }
      func_0x00010832fec8();
    }
    else {
      iVar9 = iVar9 + ((int)uVar10 >> (bVar2 & 0x1f));
      uVar7 = (int)uVar11 >> (bVar2 & 0x1f);
      uVar12 = uVar12 + uVar7;
      uVar1 = -uVar7;
      if (-1 < (int)uVar7) {
        uVar1 = uVar7;
      }
      if (uVar1 >> 0x11 == 0) {
        iVar6 = *(int *)(param_1 + 0x84);
LAB_10832fc80:
        uVar7 = uVar12 + 0x2000 & 0xffffc000;
        if ((int)*(uint *)(param_1 + 0x7c) <= (int)uVar7) {
          uVar7 = *(uint *)(param_1 + 0x7c);
        }
        iVar8 = iVar9;
        if (uVar7 - iVar6 < 0x400) {
          iVar4 = 0x7fffffff;
        }
        else {
          func_0x00010832fec8();
        }
      }
      else {
        uVar7 = -uVar11;
        if (-1 < (int)uVar11) {
          uVar7 = uVar11;
        }
        uVar1 = -uVar10;
        if (-1 < (int)uVar10) {
          uVar1 = uVar10;
        }
        iVar6 = *(int *)(param_1 + 0x84);
        if ((ulong)uVar7 << 6 <= (ulong)uVar1) goto LAB_10832fc80;
        if (uVar12 - iVar6 < 0x400) {
          iVar4 = 0x7fffffff;
        }
        else {
          func_0x00010832fec8();
        }
        uVar7 = uVar12 + 0x8000 & 0xffff0000;
        if ((int)*(uint *)(param_1 + 0x7c) <= (int)uVar7) {
          uVar7 = *(uint *)(param_1 + 0x7c);
        }
        iVar8 = iVar9 - (int)((ulong)((long)(int)(uVar12 - uVar7) * (long)iVar4) >> 0x10);
      }
      uVar10 = *(int *)(param_1 + 0x70) + uVar10;
      uVar11 = *(int *)(param_1 + 0x74) + uVar11;
    }
    if (iVar4 == 0x7fffffff) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1;
      FUN_10832f9c8(param_1,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),iVar8,
                    uVar7);
    }
    if ((iVar5 < 2) || (iVar4 = iVar5 + -1, (int)lVar3 != 0)) goto LAB_10832fd34;
  } while( true );
}



/* Entry: 10832fde8; end: 10832fe8b;  */

void FUN_10832fde8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined4 extraout_w10;
  int extraout_w11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  lVar9 = param_1 + 0x38;
  func_0x00010834d0c4(lVar9,param_2,2,param_3);
  if ((int)lVar9 == 0) {
    return;
  }
  *(ulong *)(param_1 + 0x70) =
       CONCAT44((int)((long)*(undefined8 *)(param_1 + 0x70) >> 0x22),
                (int)*(undefined8 *)(param_1 + 0x70) >> 2);
  *(ulong *)(param_1 + 0x68) =
       CONCAT44((int)((long)*(undefined8 *)(param_1 + 0x68) >> 0x22),
                (int)*(undefined8 *)(param_1 + 0x68) >> 2);
  *(ulong *)(param_1 + 0x78) =
       CONCAT44((int)((long)*(undefined8 *)(param_1 + 0x78) >> 0x22),
                (int)*(undefined8 *)(param_1 + 0x78) >> 2);
  func_0x00010832fee4(*(int *)(param_1 + 0x60) >> 2);
  *(undefined4 *)(param_1 + 0x60) = extraout_w8;
  *(undefined4 *)(param_1 + 100) = extraout_w9;
  *(undefined4 *)(param_1 + 0x80) = extraout_w10;
  *(uint *)(param_1 + 0x84) = extraout_w11 + 0x2000U & 0xffffc000;
  *(undefined1 *)(param_1 + 0x2c) = 2;
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_1 + 0x59);
  *(undefined4 *)(param_1 + 0x88) = extraout_w9;
  iVar13 = (int)*(char *)(param_1 + 0x2d);
  iVar14 = *(int *)(param_1 + 100);
  bVar6 = *(byte *)(param_1 + 0x2e);
  bVar7 = *(byte *)(param_1 + 0x2f);
  iVar12 = *(int *)(param_1 + 0x60);
  do {
    if (iVar13 < -1) {
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x68);
      iVar17 = (int)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
      iVar15 = (int)*(undefined8 *)*pauVar1;
      iVar16 = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar19._12_4_ = iVar17;
      auVar19._0_12_ = *pauVar1;
      auVar8._12_4_ = iVar17;
      auVar8._0_12_ = *pauVar1;
      auVar19 = NEON_ext(auVar19,auVar8,8,1);
      uVar18 = NEON_sshl(auVar19._0_8_,CONCAT44(-(uint)bVar6,-(uint)bVar6),4);
      iVar2 = (iVar15 >> (bVar7 & 0x1f)) + iVar12;
      iVar11 = (iVar16 >> (bVar7 & 0x1f)) + iVar14;
      *(int *)(param_1 + 0x70) =
           (int)*(undefined8 *)(param_1 + 0x78) + (int)*(undefined8 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x74) = (int)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) + iVar17;
      *(int *)(param_1 + 0x68) = (int)uVar18 + iVar15;
      *(int *)(param_1 + 0x6c) = (int)((ulong)uVar18 >> 0x20) + iVar16;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x80);
      iVar11 = *(int *)(param_1 + 0x84);
    }
    iVar15 = iVar13 + 1;
    iVar13 = iVar11;
    if (iVar11 <= iVar14) {
      iVar13 = iVar14;
    }
    iVar14 = iVar13;
    if ((int)param_3 == 0) {
      iVar14 = iVar11;
    }
    uVar3 = iVar14 + 0x2000U & 0xffffc000;
    iVar13 = iVar15;
    uVar4 = uVar3;
    if ((int)param_3 != 0) {
      uVar5 = *(uint *)(param_1 + 0x84);
      uVar4 = uVar5;
      if ((int)uVar3 <= (int)uVar5) {
        uVar4 = uVar3;
      }
      iVar13 = 0;
      if ((int)uVar3 <= (int)uVar5) {
        iVar13 = iVar15;
      }
    }
    iVar11 = *(int *)(param_1 + 0x88);
    if (uVar4 - iVar11 < 0x400) {
      uVar10 = 0x7fffffff;
    }
    else {
      uVar10 = (ulong)(uint)(iVar2 - iVar12 >> 10);
      func_0x00010832fe8c(uVar10,(int)(uVar4 - iVar11) >> 10);
      iVar11 = *(int *)(param_1 + 0x88);
    }
    lVar9 = param_1;
    FUN_10832f9c8(param_1,iVar12,iVar11,iVar2,uVar4,uVar10);
    *(uint *)(param_1 + 0x88) = uVar4;
  } while ((iVar13 < 0) && (iVar12 = iVar2, (int)lVar9 == 0));
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 100) = iVar14;
  *(char *)(param_1 + 0x2d) = (char)iVar13;
  return;
}



/* Entry: 10832fe8c; end: 10832fef7;  */

ulong FUN_10832fe8c(ulong param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if ((int)param_1 == (int)(short)param_1) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = ((int)param_1 << 0x10) / param_2;
    }
    return (ulong)uVar1;
  }
  uVar2 = 0;
  if ((long)param_2 != 0) {
    uVar2 = (long)(-(param_1 >> 0x1f & 1) & 0xffff000000000000 | (param_1 & 0xffffffff) << 0x10) /
            (long)param_2;
  }
  if ((long)uVar2 < -0x7ffffffe) {
    uVar2 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar2) {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}



/* Entry: 10832fef8; end: 10832ff27;  */

long FUN_10832fef8(long param_1)

{
  func_0x00010831fb7c();
  FUN_10810a400(param_1 + 0x10);
  return param_1;
}



/* Entry: 10832ff28; end: 10832ff5b;  */

byte * FUN_10832ff28(ulong param_1,ulong *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte bStack_31;
  
  uVar3 = param_1;
  func_0x0001078bdb50();
  if (param_2 != (ulong *)0x0) {
    *param_2 = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    bStack_31 = iVar2 != -0x80000000;
    if ((bool)bStack_31) {
      lVar6 = (long)iVar2 + -1;
    }
    else {
      lVar6 = -0x80000000;
    }
    pbVar4 = &bStack_31;
    func_0x000108154764(pbVar4,lVar6,uVar3);
    iVar2 = *(int *)(param_1 + 0x10);
    func_0x00010835c63c(param_1);
    pbVar5 = &bStack_31;
    func_0x000108154764(pbVar5,(long)iVar2,param_1 & 0xffffffff);
    pbVar5 = pbVar5 + (long)pbVar4;
    bVar1 = 0;
    if (pbVar4 <= pbVar5) {
      bVar1 = bStack_31;
    }
    if (((ulong)pbVar5 >> 0x1f == 0 & bVar1) == 0) {
      pbVar5 = (byte *)0xffffffffffffffff;
    }
    return pbVar5;
  }
  return (byte *)0x0;
}



/* Entry: 10832ff5c; end: 10832ffd3;  */

void FUN_10832ff5c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x00010831fb7c();
  lVar1 = param_2;
  FUN_10832ff28(param_2,&uStack_38);
  if ((lVar1 != -1) && (_malloc(), lVar1 != 0)) {
    FUN_10831f928(param_1,param_2,lVar1,uStack_38);
    *(long *)(param_1 + 0x28) = lVar1;
  }
  return;
}



/* Entry: 10832ffd4; end: 108330093;  */

long FUN_10832ffd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_108383f98();
  }
  return lVar1;
}



/* Entry: 108330094; end: 1083300a3;  */

void FUN_108330094(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001083300a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4);
  return;
}



/* Entry: 1083300a4; end: 1083300f3;  */

long * FUN_1083300a4(long *param_1)

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
  return param_1;
}



/* Entry: 1083300f4; end: 108330167;  */

void FUN_1083300f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10837f79c();
  *param_1 = &PTR_FUN_110a3cc90;
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = param_2[1];
  *(undefined8 *)((long)param_1 + 0x14) = uVar1;
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[5] = param_6;
  param_1[6] = uVar1;
  uVar1 = *param_4;
  *param_4 = 0;
  uVar2 = *param_5;
  *param_5 = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  return;
}



/* Entry: 108330168; end: 108330207;  */

void FUN_108330168(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_10833cdf0(param_6);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_108330208(param_5);
  puVar2 = &uStack_40;
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_108281a6c(puVar2,&uStack_50);
  puVar1 = *(undefined8 **)(param_5 + 0x38);
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *puVar1;
    uVar4 = *(undefined4 *)(puVar1 + 1);
  }
  if (((ulong)puVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x40);
  }
  else {
    uVar5 = 0;
  }
  FUN_10838ae00(*(undefined8 *)(param_5 + 0x30),param_6,uVar3,0,uVar4,uVar5,param_7);
  return;
}



/* Entry: 108330208; end: 108330213;  */

undefined4 FUN_108330208(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108330214; end: 1083302a7;  */

int FUN_108330214(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x30) + 0xc);
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    for (lVar6 = 0; lVar6 < *(int *)(*(long *)(param_1 + 0x30) + 0xc); lVar6 = lVar6 + 1) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
      if (*(int *)(lVar3 + lVar5) == 0x1c) {
        plVar2 = *(long **)(*(long *)(lVar3 + lVar5 + 8) + 8);
        (**(code **)(*plVar2 + 0x28))(plVar2,1);
        iVar1 = (int)plVar2;
      }
      else {
        iVar1 = 1;
      }
      iVar4 = iVar1 + iVar4;
      lVar5 = lVar5 + 0x10;
    }
  }
  return iVar4;
}



/* Entry: 1083302a8; end: 1083302eb;  */

long FUN_1083302a8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x40) + *(long *)(param_1 + 0x28) + 0x90;
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
    lVar2 = (long)plVar1 + lVar2;
  }
  return lVar2;
}



/* Entry: 1083302ec; end: 1083302ef;  */

undefined8 * FUN_1083302ec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[8];
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
  lVar6 = param_1[7];
  param_1[7] = 0;
  if (lVar6 != 0) {
    FUN_10833039c();
    __ZdlPv();
  }
  plVar5 = (long *)param_1[6];
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
  *param_1 = &PTR_DAT_110a3f060;
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_108392418((ulong)*(uint *)((long)param_1 + 0xc) | 0x7069637400000000);
  }
  return param_1;
}



/* Entry: 1083302f0; end: 108330303;  */

void FUN_1083302f0(void)

{
  FUN_108330308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108330304; end: 108330307;  */

void FUN_108330304(void)

{
  return;
}



/* Entry: 108330308; end: 10833039b;  */

undefined8 * FUN_108330308(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[8];
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
  lVar6 = param_1[7];
  param_1[7] = 0;
  if (lVar6 != 0) {
    FUN_10833039c();
    __ZdlPv();
  }
  plVar5 = (long *)param_1[6];
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
  *param_1 = &PTR_DAT_110a3f060;
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_108392418((ulong)*(uint *)((long)param_1 + 0xc) | 0x7069637400000000);
  }
  return param_1;
}



/* Entry: 10833039c; end: 108330403;  */

long * FUN_10833039c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  for (lVar6 = 0; lVar6 < (int)param_1[1]; lVar6 = lVar6 + 1) {
    plVar5 = *(long **)(*param_1 + lVar6 * 8);
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
  FUN_10833042c(param_1,0);
  return param_1;
}



/* Entry: 108330404; end: 10833042b;  */

undefined8 FUN_108330404(undefined8 param_1)

{
  FUN_10833042c(param_1,0);
  return param_1;
}



/* Entry: 10833042c; end: 10833043b;  */

void FUN_10833042c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 10833043c; end: 1083304b7;  */

long * FUN_10833043c(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  FUN_10814105c(param_1 + 1,param_2 + 1);
  func_0x0001082a637c(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 1083304b8; end: 108330547;  */

undefined8 * FUN_1083304b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_2[6];
  param_2[6] = 0;
  param_1[6] = uVar1;
  FUN_108383f98(param_2 + 1);
  return param_1;
}



/* Entry: 108330548; end: 1083306e3;  */

undefined8 * FUN_108330548(undefined8 *param_1)

{
  FUN_1082a619c(param_1 + 6);
  FUN_10810a400(param_1 + 3);
  FUN_1083312f4(*param_1);
  return param_1;
}



/* Entry: 1083306e4; end: 1083307d7;  */

undefined8 FUN_1083306e4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  uStack_34 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = (ulong)*(uint *)(param_2 + 8);
  func_0x00010835c818(uVar1,uStack_34,&uStack_34);
  if (((((uVar1 & 1) == 0) || (uVar1 = param_2, func_0x0001078bdb70(), uVar1 != (long)(int)uVar1))
      || (param_3 >> 0x1f != 0)) ||
     ((*(int *)(param_2 + 0x10) < 0 || (*(int *)(param_2 + 0x14) < 0)))) {
LAB_108330760:
    func_0x00010833139c();
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_2 + 8) == 0) {
      uVar1 = 0;
    }
    else if ((param_3 != 0) &&
            (uVar2 = param_2, FUN_1083307d8(param_2,param_3), uVar1 = param_3, (uVar2 & 1) == 0))
    goto LAB_108330760;
    func_0x000108331348(param_1,0);
    FUN_10814bd9c(auStack_50,param_2,uStack_34);
    *(undefined8 *)(param_1 + 8) = 0;
    *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffff;
    func_0x000108152830(param_1 + 0x18,auStack_50);
    FUN_10810a400(auStack_50);
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1083307d8; end: 108330883;  */

bool FUN_1083307d8(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x0001078bdb70();
  if (param_2 < uVar2) {
    bVar1 = false;
  }
  else {
    func_0x00010835c644(param_1);
    bVar1 = (param_2 & (-1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU)) == 0;
  }
  return bVar1;
}



/* Entry: 108330884; end: 10833092f;  */

void FUN_108330884(long *param_1,undefined8 *param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((int)param_1[4] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_2;
    *param_2 = 0;
  }
  FUN_108331348(param_1,uVar3);
  func_0x000108331364();
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar5 = param_1[2];
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x18);
    lVar5 = *(long *)(lVar4 + 0x20);
    lVar4 = 0;
    if (lVar1 != 0) {
      iVar2 = (int)param_1 + 0x18;
      func_0x00010835c63c();
      lVar4 = lVar1 + lVar5 * param_4 + (long)(iVar2 * param_3);
    }
  }
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  func_0x000108152830(param_1 + 3,param_1 + 3);
  return;
}



/* Entry: 108330930; end: 10833097b;  */

void FUN_108330930(undefined8 param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_20;
  undefined4 uStack_18;
  
  uStack_18 = 1;
  ppuStack_20 = &PTR_FUN_110a3ccf8;
  pppuVar1 = &ppuStack_20;
  if (param_2 != (long *)0x0) {
    pppuVar1 = (undefined ***)param_2;
  }
  (**(code **)((long)*pppuVar1 + 0x18))(pppuVar1,param_1);
  return;
}


