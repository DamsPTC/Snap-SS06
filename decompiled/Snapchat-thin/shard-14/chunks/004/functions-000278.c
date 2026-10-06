/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1f057c; end: 10b1f06bf;  */

undefined1 *
FUN_10b1f057c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6,long param_7,long param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [40];
  undefined1 auStack_198 [40];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [40];
  undefined8 uStack_120;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  puVar8 = auStack_b0;
  puVar4 = auStack_b0;
  puVar5 = auStack_b0;
  iVar10 = (int)param_5;
  func_0x00010b1f1b68();
  lVar16 = *(long *)(param_2 + 0x38);
  uStack_48 = extraout_x8;
  FUN_10b12983c(auStack_98,param_3);
  func_0x00010b123d80(auStack_70,&UNK_10f73257d,0xb,param_5);
  func_0x00010b120648(auStack_b0,auStack_98,2);
  lVar17 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98 + lVar17);
    lVar17 = lVar17 + -0x28;
    uVar2 = lVar17 == -0x18;
  } while (!(bool)uVar2);
  if ((int)param_5 != 0) {
    FUN_10b1f19b4(auStack_b0,param_6 + 8);
    FUN_10b1f1a3c(auStack_b0,param_6 + 0xc);
  }
  uVar13 = (param_4 + lVar16 * -1000) / 60000000;
  puVar6 = (undefined1 *)0xcd;
  FUN_10b11ef50(param_1);
  FUN_10b120998();
  func_0x00010b1f1b44(uStack_48);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_10b120998();
  func_0x00010b1f1b78();
  puVar4 = puVar5;
  puVar7 = puVar6;
  iVar11 = iVar10;
  func_0x00010b1f1b68();
  bVar3 = (uVar13 & 0x100000000) != 0;
  uVar12 = 0;
  if (bVar3) {
    uVar12 = 3;
  }
  uVar9 = 0;
  if (bVar3) {
    uVar9 = (undefined4)uVar13;
  }
  uVar2 = iVar11 == 0;
  uVar1 = 2;
  if ((bool)uVar2) {
    uVar1 = uVar12;
  }
  puVar15 = (undefined8 *)(puVar8 + 0x10);
  uStack_120 = extraout_x8_00;
  while (puVar15 = (undefined8 *)*puVar15, puVar15 != (undefined8 *)0x0) {
    lVar16 = *(long *)(puVar6 + 0x38);
    func_0x00010b20b440(*(undefined4 *)(puVar15 + 2));
    func_0x00010b1f1e00();
    FUN_10b1e6ab0(auStack_198,uVar9);
    func_0x00010b1f1b04(auStack_170,uVar1);
    func_0x00010b1f1c54(auStack_148);
    func_0x00010b123d80();
    func_0x00010b1f1c24(auStack_1d8,auStack_1c0);
    lVar17 = 0x88;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0 + lVar17);
      lVar17 = lVar17 + -0x28;
      uVar2 = lVar17 == -0x18;
    } while (!(bool)uVar2);
    if (iVar10 != 0) {
      FUN_10b1f19b4(auStack_1d8,param_8 + 8);
      FUN_10b1f1a3c(auStack_1d8,param_8 + 0xc);
    }
    puVar7 = (undefined1 *)0xcc;
    puVar4 = puVar5;
    FUN_10b11ef50(puVar5,0xcc,auStack_1d8,(param_7 + lVar16 * -1000) / 60000000);
    func_0x00010b1f1cc0();
  }
  func_0x00010b1f1b44(uStack_120);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b1f1d20(auStack_1c0);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b1f1c48();
    } while (!(bool)uVar2);
    func_0x00010b1f1b78();
    if (puVar4 != puVar7) {
      uVar13 = *(ulong *)(puVar4 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      uVar14 = *(ulong *)(puVar7 + 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
      }
      if (uVar13 == uVar14) {
        func_0x00010b24e2e8(puVar4);
      }
      else {
        func_0x00010b24e2b8(puVar4);
      }
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10b1f06c0; end: 10b1f0867;  */

long FUN_10b1f06c0(long param_1,long param_2,long param_3,ulong param_4,int param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  
  lVar12 = param_1;
  lVar4 = param_2;
  iVar6 = param_5;
  func_0x00010b1f1b68();
  bVar2 = (param_4 & 0x100000000) != 0;
  uVar7 = 0;
  if (bVar2) {
    uVar7 = 3;
  }
  uVar5 = 0;
  if (bVar2) {
    uVar5 = (undefined4)param_4;
  }
  uVar3 = iVar6 == 0;
  uVar1 = 2;
  if ((bool)uVar3) {
    uVar1 = uVar7;
  }
  plVar10 = (long *)(param_3 + 0x10);
  uStack_70 = extraout_x8;
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
    lVar11 = *(long *)(param_2 + 0x38);
    func_0x00010b20b440(*(undefined4 *)(plVar10 + 2));
    func_0x00010b1f1e00();
    FUN_10b1e6ab0(auStack_e8,uVar5);
    func_0x00010b1f1b04(auStack_c0,uVar1);
    func_0x00010b1f1c54(auStack_98);
    func_0x00010b123d80();
    func_0x00010b1f1c24(auStack_128,auStack_110);
    lVar12 = 0x88;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110 + lVar12);
      lVar12 = lVar12 + -0x28;
      uVar3 = lVar12 == -0x18;
    } while (!(bool)uVar3);
    if (param_5 != 0) {
      FUN_10b1f19b4(auStack_128,param_8 + 8);
      FUN_10b1f1a3c(auStack_128,param_8 + 0xc);
    }
    lVar4 = 0xcc;
    lVar12 = param_1;
    FUN_10b11ef50(param_1,0xcc,auStack_128,(param_7 + lVar11 * -1000) / 60000000);
    func_0x00010b1f1cc0();
  }
  func_0x00010b1f1b44(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010b1f1d20(auStack_110);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b1f1c48();
    } while (!(bool)uVar3);
    func_0x00010b1f1b78();
    if (lVar12 != lVar4) {
      uVar8 = *(ulong *)(lVar12 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      uVar9 = *(ulong *)(lVar4 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      if (uVar8 == uVar9) {
        func_0x00010b24e2e8(lVar12);
      }
      else {
        func_0x00010b24e2b8(lVar12);
      }
    }
    return lVar12;
  }
  return lVar12;
}



/* Entry: 10b1f0868; end: 10b1f08cb;  */

long FUN_10b1f0868(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b24e2e8(param_1);
    }
    else {
      func_0x00010b24e2b8(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1f08cc; end: 10b1f091b;  */

undefined8 * FUN_10b1f08cc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    uVar2 = (param_1[2] - *param_1) / 0x60;
    puVar5 = (undefined8 *)(uVar2 * 2);
    if (puVar5 < param_2 || (long)puVar5 - (long)param_2 == 0) {
      puVar5 = param_2;
    }
    if (0x155555555555554 < uVar2) {
      puVar5 = (undefined8 *)0x2aaaaaaaaaaaaaa;
    }
    return puVar5;
  }
  FUN_10b1f09d4();
  func_0x00010b1f1e8c();
  puVar6 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar7 = param_2[1] + (((long)puVar1 - (long)puVar6) / -0x60) * 0x60;
  puVar3 = (undefined8 *)(lVar7 + 0x10);
  for (puVar5 = puVar6; puVar5 != puVar1; puVar5 = puVar5 + 0xc) {
    uVar8 = *puVar5;
    puVar3[-1] = puVar5[1];
    puVar3[-2] = uVar8;
    FUN_10b1f0a54(puVar3,puVar5 + 2);
    puVar3 = puVar3 + 0xc;
  }
  for (; puVar6 != puVar1; puVar6 = puVar6 + 0xc) {
    puVar3 = puVar6 + 2;
    FUN_10b24df68(puVar3);
  }
  unaff_x19[1] = lVar7;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar7;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar7 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar7;
  lVar7 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar7;
  *unaff_x19 = unaff_x19[1];
  return puVar3;
}



/* Entry: 10b1f091c; end: 10b1f09d3;  */

void FUN_10b1f091c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  func_0x00010b1f1e8c();
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = *(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar3) / -0x60) * 0x60;
  lVar2 = lVar4 + 0x10;
  for (puVar5 = puVar3; puVar5 != puVar1; puVar5 = puVar5 + 0xc) {
    uVar6 = *puVar5;
    *(undefined8 *)(lVar2 + -8) = puVar5[1];
    *(undefined8 *)(lVar2 + -0x10) = uVar6;
    FUN_10b1f0a54(lVar2,puVar5 + 2);
    lVar2 = lVar2 + 0x60;
  }
  for (; puVar3 != puVar1; puVar3 = puVar3 + 0xc) {
    FUN_10b24df68(puVar3 + 2);
  }
  unaff_x19[1] = lVar4;
  lVar2 = *unaff_x20;
  *unaff_x20 = lVar4;
  unaff_x20[1] = lVar2;
  unaff_x19[1] = lVar2;
  lVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar2;
  lVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b1f09d4; end: 10b1f09df;  */

long * FUN_10b1f09d4(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1f1e58();
  func_0x00010b1f1ca4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = 0;
      func_0x00010b1f1e64();
      *param_1 = extraout_x8;
      param_1[1] = lVar1;
      param_1[2] = 0;
      param_1[3] = lVar1;
      *(undefined4 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[9] = 0;
      if (param_1 != param_2) {
        uVar2 = param_1[1];
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        uVar3 = param_2[1];
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        if (uVar2 == uVar3) {
          func_0x00010b24e2e8(param_1);
        }
        else {
          func_0x00010b24e2b8(param_1);
        }
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x60;
    __Znwm();
  }
  lVar4 = lVar1 + param_3 * 0x60;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar4;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x60;
  return unaff_x19;
}



/* Entry: 10b1f09e0; end: 10b1f0a53;  */

long * FUN_10b1f09e0(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1f1ca4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = 0;
      func_0x00010b1f1e64();
      *param_1 = extraout_x8;
      param_1[1] = lVar1;
      param_1[2] = 0;
      param_1[3] = lVar1;
      *(undefined4 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[9] = 0;
      if (param_1 != param_2) {
        uVar2 = param_1[1];
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        uVar3 = param_2[1];
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        if (uVar2 == uVar3) {
          func_0x00010b24e2e8(param_1);
        }
        else {
          func_0x00010b24e2b8(param_1);
        }
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x60;
    __Znwm();
  }
  lVar4 = lVar1 + param_3 * 0x60;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar4;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x60;
  return unaff_x19;
}



/* Entry: 10b1f0a54; end: 10b1f0a8f;  */

undefined8 * FUN_10b1f0a54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  
  uVar1 = 0;
  func_0x00010b1f1e64();
  *param_1 = extraout_x8;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  if (param_1 != param_2) {
    uVar2 = param_1[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar3 = param_2[1];
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == uVar3) {
      func_0x00010b24e2e8(param_1);
    }
    else {
      func_0x00010b24e2b8(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1f0a90; end: 10b1f0adb;  */

long * FUN_10b1f0a90(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x60;
    FUN_10b24df68(lVar1 + -0x50);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1f0adc; end: 10b1f0bb7;  */

void FUN_10b1f0adc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar3;
    FUN_10b1f0a54(puVar2 + 2,param_3);
    puVar2 = puVar2 + 0xc;
  }
  else {
    plVar1 = param_1;
    FUN_10b1f08cc(param_1,((long)puVar2 - *param_1) / 0x60 + 1);
    FUN_10b1f09e0(auStack_68,plVar1,(param_1[1] - *param_1) / 0x60,param_1 + 2);
    uVar3 = *param_2;
    puStack_58[1] = param_2[1];
    *puStack_58 = uVar3;
    FUN_10b1f0a54(puStack_58 + 2,param_3);
    puStack_58 = puStack_58 + 0xc;
    FUN_10b1f091c(param_1,auStack_68);
    puVar2 = (undefined8 *)param_1[1];
    FUN_10b1f0a90(auStack_68);
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10b1f0bb8; end: 10b1f0bf7;  */

void FUN_10b1f0bb8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x60) {
    FUN_10b24df68(lVar2 + -0x50);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b1f0bf8; end: 10b1f0c17;  */

void FUN_10b1f0bf8(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b1f0c18; end: 10b1f0d4b;  */

void FUN_10b1f0c18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  func_0x00010b1f1e64();
  *puVar1 = extraout_x8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  return;
}



/* Entry: 10b1f0d4c; end: 10b1f0d53;  */

void FUN_10b1f0d4c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f1e8c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    FUN_10b24df68();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1f0d54; end: 10b1f0db7;  */

void FUN_10b1f0d54(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f1e8c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    FUN_10b24df68();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1f0db8; end: 10b1f0e53;  */

ulong FUN_10b1f0db8(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong uVar4;
  ulong *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1f1ca4();
  iVar1 = *(int *)(param_1 + 8);
  func_0x000107c28174();
  if (iVar1 < (int)param_1) {
    func_0x00010b1f1c6c();
    uVar2 = *extraout_x8;
    if (uVar2 != unaff_x20) {
      uVar3 = *(ulong *)(uVar2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      uVar4 = *(ulong *)(unaff_x20 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if (uVar3 == uVar4) {
        func_0x00010b24e2e8(uVar2);
      }
      else {
        func_0x00010b24e2b8(uVar2);
      }
    }
    return uVar2;
  }
  func_0x00010563f22c();
  uVar2 = *unaff_x19;
  if ((uVar2 & 1) != 0) {
    *(int *)(uVar2 - 1) = *(int *)(uVar2 - 1) + 1;
  }
  uVar2 = unaff_x19[2];
  if (uVar2 == 0) {
    uVar2 = 0x50;
    __Znwm();
  }
  else {
    FUN_10b4d80e0(uVar2,0x50);
  }
  func_0x00010b1f0a60();
  func_0x00010b1f1c6c();
  *extraout_x8_00 = uVar2;
  return uVar2;
}



/* Entry: 10b1f0e54; end: 10b1f0e83;  */

long * FUN_10b1f0e54(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b1f0e84; end: 10b1f0fcf;  */

void FUN_10b1f0e84(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = param_1[1];
  if (uVar4 < (ulong)param_1[2]) {
    func_0x00010b1f1e14();
    lVar10 = uVar4 + 0x50;
  }
  else {
    lVar10 = uVar4 - *param_1;
    uVar1 = lVar10 / 0x50 + 1;
    if (0x333333333333333 < uVar1) {
      FUN_10b1f0fd0();
LAB_10b1f0fcc:
      func_0x000104bd35f4();
      func_0x00010b1f1e58();
      if (*(char *)(uVar4 + 0x50) == '\x01') {
        FUN_10b24df68();
      }
      return;
    }
    uVar3 = (param_1[2] - *param_1) / 0x50;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x199999999999998 < uVar3) {
      uVar8 = 0x333333333333333;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x333333333333333 < uVar8) goto LAB_10b1f0fcc;
      lVar5 = uVar8 * 0x50;
      __Znwm();
    }
    lVar10 = lVar5 + lVar10;
    func_0x00010b1f1e14(lVar10);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    lVar11 = lVar10 + ((lVar2 - lVar9) / -0x50) * 0x50;
    lVar6 = lVar11;
    for (lVar7 = lVar9; lVar7 != lVar2; lVar7 = lVar7 + 0x50) {
      FUN_10b1f0a54(lVar6,lVar7);
      lVar6 = lVar6 + 0x50;
    }
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x50) {
      FUN_10b24df68(lVar9);
    }
    lVar10 = lVar10 + 0x50;
    lVar7 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar10;
    param_1[2] = lVar5 + uVar8 * 0x50;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 10b1f0fd0; end: 10b1f0ffb;  */

void FUN_10b1f0fd0(long param_1)

{
  func_0x00010b1f1e58();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_10b24df68();
  }
  return;
}



/* Entry: 10b1f0ffc; end: 10b1f167f;  */

void FUN_10b1f0ffc(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long extraout_x8;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_108 [120];
  long lStack_90;
  
  do {
    plVar7 = param_1;
LAB_10b1f1040:
    while( true ) {
      param_1 = plVar7;
      uVar17 = (long)param_2 - (long)param_1 >> 3;
      cVar2 = SBORROW8(uVar17,5);
      cVar3 = (long)(uVar17 - 5) < 0;
      switch(uVar17) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x00010b1f1b58(*param_1,param_2[-1]);
        if (cVar3 == cVar2) {
          return;
        }
        FUN_10b1f1978();
        return;
      case 3:
        func_0x00010b1f1cd8(param_1,param_1 + 1);
        return;
      case 4:
        func_0x00010b1f1708(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
        return;
      case 5:
        func_0x00010b1f1770(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
        return;
      }
      if ((long)uVar17 < 0x18) {
        if ((param_4 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          while( true ) {
            plVar7 = param_1;
            param_1 = plVar7 + 1;
            cVar2 = SBORROW8((long)param_1,(long)param_2);
            cVar3 = (long)param_1 - (long)param_2 < 0;
            if (param_1 == param_2) break;
            func_0x00010b1f1d3c(*plVar7);
            if (cVar3 != cVar2) {
              func_0x00010b1f1c2c();
              lVar10 = *plVar7;
              lVar4 = 8;
              do {
                FUN_10b1f0868(*(undefined8 *)((long)plVar7 + lVar4),lVar10);
                lVar10 = ((undefined8 *)((long)plVar7 + lVar4))[-2];
                lVar4 = lVar4 + -8;
              } while (lStack_90 < *(long *)(lVar10 + 0x28));
              func_0x00010b1f1c1c(*(undefined8 *)((long)plVar7 + lVar4));
              func_0x00010b1f1bc0();
            }
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        lVar10 = 0;
        plVar7 = param_1;
        goto LAB_10b1f1350;
      }
      if (param_3 == 0) {
        if (param_1 == param_2) {
          return;
        }
        uVar14 = uVar17 - 2 >> 1;
        uVar15 = uVar14;
        goto LAB_10b1f13dc;
      }
      plVar7 = param_1 + (uVar17 >> 1);
      cVar2 = SBORROW8(uVar17,0x81);
      cVar3 = (long)(uVar17 - 0x81) < 0;
      if (uVar17 < 0x81) {
        func_0x00010b1f1cd8(plVar7,param_1);
      }
      else {
        func_0x00010b1f1cd8(param_1,plVar7);
        FUN_10b1f1680(param_1 + 1,plVar7 + -1,param_2 + -2);
        FUN_10b1f1680(param_1 + 2,plVar7 + 1,param_2 + -3);
        FUN_10b1f1680(plVar7 + -1,plVar7,plVar7 + 1);
        FUN_10b1f1978(*param_1,*plVar7);
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) || (func_0x00010b1f1d4c(param_1[-1]), cVar3 != cVar2)) break;
      func_0x00010b1f1c2c();
      func_0x00010b1f1d5c(lStack_90);
      plVar7 = param_1;
      if (cVar3 == cVar2) {
        do {
          plVar7 = plVar7 + 1;
          if (param_2 <= plVar7) break;
        } while (*(long *)(*plVar7 + 0x28) <= extraout_x8);
      }
      else {
        do {
          plVar7 = plVar7 + 1;
          func_0x00010b1f1d5c();
        } while (cVar3 == cVar2);
      }
      cVar2 = SBORROW8((long)plVar7,(long)param_2);
      cVar3 = (long)plVar7 - (long)param_2 < 0;
      plVar5 = param_2;
      if (plVar7 < param_2) {
        do {
          plVar5 = plVar5 + -1;
          func_0x00010b1f1d5c();
        } while (cVar3 != cVar2);
      }
      while( true ) {
        cVar2 = SBORROW8((long)plVar7,(long)plVar5);
        cVar3 = (long)plVar7 - (long)plVar5 < 0;
        if (plVar5 <= plVar7) break;
        FUN_10b1f1978(*plVar7,*plVar5);
        do {
          plVar7 = plVar7 + 1;
          func_0x00010b1f1d5c();
        } while (cVar3 == cVar2);
        do {
          plVar5 = plVar5 + -1;
          func_0x00010b1f1d5c();
        } while (cVar3 != cVar2);
      }
      plVar5 = plVar7 + -1;
      if (param_1 != plVar5) {
        FUN_10b1f0868(*param_1,*plVar5);
      }
      func_0x00010b1f1c1c(*plVar5);
      func_0x00010b1f1bc0();
      param_4 = 0;
    }
    func_0x00010b1f1c2c();
    lVar10 = 0;
    do {
      lVar4 = *(long *)((long)param_1 + lVar10 + 8);
      lVar10 = lVar10 + 8;
    } while (*(long *)(lVar4 + 0x28) < lStack_90);
    plVar5 = (long *)((long)param_1 + lVar10);
    plVar13 = param_2;
    plVar7 = plVar5;
    if (lVar10 == 8) {
      do {
        plVar6 = plVar13;
        if (plVar13 <= plVar5) break;
        plVar13 = plVar13 + -1;
        plVar6 = plVar13;
      } while (lStack_90 <= *(long *)(*plVar13 + 0x28));
    }
    else {
      do {
        plVar13 = plVar13 + -1;
        plVar6 = plVar13;
      } while (lStack_90 <= *(long *)(*plVar13 + 0x28));
    }
    while (plVar7 < plVar13) {
      FUN_10b1f1978(lVar4,*plVar13);
      do {
        plVar7 = plVar7 + 1;
        lVar4 = *plVar7;
      } while (*(long *)(lVar4 + 0x28) < lStack_90);
      do {
        plVar13 = plVar13 + -1;
      } while (lStack_90 <= *(long *)(*plVar13 + 0x28));
    }
    plVar13 = plVar7 + -1;
    if (param_1 != plVar13) {
      FUN_10b1f0868(*param_1,*plVar13);
    }
    func_0x00010b1f1c1c(*plVar13);
    func_0x00010b1f1bc0();
    if (plVar5 < plVar6) goto LAB_10b1f11d8;
    plVar5 = param_1;
    func_0x00010b1f1800(param_1,plVar13);
    plVar6 = plVar7;
    func_0x00010b1f1800(plVar7,param_2);
    if ((int)plVar6 == 0) goto code_r0x00010b1f11d4;
    param_2 = plVar13;
    if (((ulong)plVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b1f1350:
  plVar5 = plVar7 + 1;
  cVar2 = SBORROW8((long)plVar5,(long)param_2);
  cVar3 = (long)plVar5 - (long)param_2 < 0;
  if (plVar5 == param_2) {
    return;
  }
  func_0x00010b1f1d3c(*plVar7);
  if (cVar3 != cVar2) {
    func_0x00010b1f1c2c();
    lVar8 = *plVar7;
    lVar4 = lVar10;
    do {
      lVar11 = lVar4;
      FUN_10b1f0868(*(undefined8 *)((long)param_1 + lVar11 + 8),lVar8);
      plVar7 = param_1;
      if (lVar11 == 0) goto LAB_10b1f13ac;
      lVar8 = *(long *)((long)param_1 + lVar11 + -8);
      lVar4 = lVar11 + -8;
    } while (lStack_90 < *(long *)(lVar8 + 0x28));
    plVar7 = (long *)((long)param_1 + lVar11);
LAB_10b1f13ac:
    func_0x00010b1f1c1c(*plVar7);
    func_0x00010b1f1bc0();
  }
  lVar10 = lVar10 + 8;
  plVar7 = plVar5;
  goto LAB_10b1f1350;
LAB_10b1f13dc:
  do {
    if ((long)uVar15 <= (long)uVar14) {
      uVar16 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      plVar7 = param_1 + uVar16;
      uVar1 = uVar15 * 2 + 2;
      lVar8 = *plVar7;
      cVar3 = SBORROW8(uVar1,uVar17);
      lVar10 = uVar1 - uVar17;
      lVar4 = lVar8;
      plVar5 = plVar7;
      uVar9 = uVar16;
      if ((long)uVar1 < (long)uVar17) {
        lVar4 = plVar7[1];
        lVar11 = *(long *)(lVar8 + 0x28);
        lVar12 = *(long *)(lVar4 + 0x28);
        cVar3 = SBORROW8(lVar11,lVar12);
        lVar10 = lVar11 - lVar12;
        plVar5 = plVar7 + 1;
        uVar9 = uVar1;
        if (lVar12 <= lVar11) {
          lVar4 = lVar8;
          plVar5 = plVar7;
          uVar9 = uVar16;
        }
      }
      cVar2 = lVar10 < 0;
      func_0x00010b1f1d4c(lVar4);
      if (cVar2 == cVar3) {
        func_0x00010b1f1c2c();
        lVar10 = *plVar5;
        plVar7 = param_1 + uVar15;
        do {
          plVar13 = plVar5;
          FUN_10b1f0868(*plVar7,lVar10);
          if ((long)uVar14 < (long)uVar9) break;
          uVar16 = uVar9 << 1 | 1;
          plVar7 = param_1 + uVar16;
          uVar1 = uVar9 * 2 + 2;
          lVar4 = *plVar7;
          lVar10 = lVar4;
          uVar9 = uVar16;
          plVar5 = plVar7;
          if ((long)uVar1 < (long)uVar17) {
            lVar10 = plVar7[1];
            uVar9 = uVar1;
            plVar5 = plVar7 + 1;
            if (*(long *)(lVar10 + 0x28) <= *(long *)(lVar4 + 0x28)) {
              lVar10 = lVar4;
              uVar9 = uVar16;
              plVar5 = plVar7;
            }
          }
          plVar7 = plVar13;
        } while (lStack_90 <= *(long *)(lVar10 + 0x28));
        func_0x00010b1f1c1c(*plVar13);
        func_0x00010b1f1bc0();
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  do {
    if ((long)uVar17 < 2) {
      return;
    }
    FUN_10b1f0a54(auStack_108,*param_1);
    plVar7 = param_1;
    uVar15 = 0;
    do {
      plVar13 = plVar7 + uVar15 + 1;
      lVar4 = *plVar13;
      uVar1 = uVar15 << 1 | 1;
      uVar14 = uVar15 * 2 + 2;
      lVar10 = lVar4;
      plVar5 = plVar13;
      uVar16 = uVar1;
      if ((long)uVar14 < (long)uVar17) {
        lVar10 = plVar7[uVar15 + 2];
        plVar5 = plVar7 + uVar15 + 2;
        uVar16 = uVar14;
        if (*(long *)(lVar10 + 0x28) <= *(long *)(lVar4 + 0x28)) {
          lVar10 = lVar4;
          plVar5 = plVar13;
          uVar16 = uVar1;
        }
      }
      FUN_10b1f0868(*plVar7,lVar10);
      plVar7 = plVar5;
      uVar15 = uVar16;
    } while ((long)uVar16 <= (long)(uVar17 - 2 >> 1));
    param_2 = param_2 + -1;
    if (plVar5 == param_2) {
      FUN_10b1f0868(*plVar5,auStack_108);
    }
    else {
      FUN_10b1f0868(*plVar5,*param_2);
      FUN_10b1f0868(*param_2,auStack_108);
      lVar10 = (long)plVar5 + (8 - (long)param_1) >> 3;
      cVar2 = SBORROW8(lVar10,2);
      cVar3 = (long)(lVar10 - 2U) < 0;
      if (1 < lVar10) {
        uVar15 = lVar10 - 2U >> 1;
        plVar7 = param_1 + uVar15;
        func_0x00010b1f1d4c(*plVar7);
        if (cVar3 != cVar2) {
          func_0x00010b1f1c2c();
          lVar10 = *plVar7;
          do {
            plVar13 = plVar7;
            FUN_10b1f0868(*plVar5,lVar10);
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            lVar10 = param_1[uVar15];
            plVar5 = plVar13;
            plVar7 = param_1 + uVar15;
          } while (*(long *)(lVar10 + 0x28) < lStack_90);
          func_0x00010b1f1c1c(*plVar13);
          func_0x00010b1f1bc0();
        }
      }
    }
    FUN_10b24df68(auStack_108);
    uVar17 = uVar17 - 1;
  } while( true );
code_r0x00010b1f11d4:
  if (((ulong)plVar5 & 1) == 0) {
LAB_10b1f11d8:
    FUN_10b1f0ffc(param_1,plVar13,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b1f1040;
}



/* Entry: 10b1f1680; end: 10b1f176f;  */

undefined1  [16] FUN_10b1f1680(long *param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar10 = *param_2;
  plVar5 = (long *)*param_1;
  lVar12 = *(long *)(lVar10 + 0x28);
  plVar7 = (long *)*param_3;
  lVar14 = plVar7[5];
  if (lVar12 < plVar5[5]) {
    cVar2 = SBORROW8(lVar14,lVar12);
    cVar3 = lVar14 - lVar12 < 0;
    if (lVar14 < lVar12) goto LAB_10b1f16f8;
    FUN_10b1f1978(plVar5,lVar10);
    plVar7 = (long *)*param_3;
    plVar5 = (long *)*param_2;
  }
  else {
    cVar2 = SBORROW8(lVar14,lVar12);
    cVar3 = lVar14 - lVar12 < 0;
    if (lVar12 <= lVar14) goto LAB_10b1f1700;
    FUN_10b1f1978(lVar10);
    plVar7 = (long *)*param_2;
    plVar5 = (long *)*param_1;
  }
  func_0x00010b1f1b58();
  if (cVar3 == cVar2) {
LAB_10b1f1700:
    auVar17._8_8_ = plVar7;
    auVar17._0_8_ = plVar5;
    return auVar17;
  }
LAB_10b1f16f8:
  if (plVar7 == plVar5) {
    auVar16._8_8_ = plVar7;
    auVar16._0_8_ = plVar5;
    return auVar16;
  }
  uVar11 = plVar5[1];
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  uVar13 = plVar7[1];
  if ((uVar13 & 1) != 0) {
    uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
  }
  if (uVar11 != uVar13) {
    plVar6 = plVar5;
    func_0x00010b4cf4b4();
    (**(code **)(*plVar6 + 0x20))();
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7,plVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar6);
    auVar18._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar18._0_8_ = plVar6;
    return auVar18;
  }
  func_0x00010b250838();
  lVar10 = plVar5[1];
  plVar5[1] = plVar7[1];
  plVar7[1] = lVar10;
  func_0x000107c303a4(plVar5 + 2,plVar7 + 2);
  puVar8 = (undefined1 *)(unaff_x19 + 0x28);
  puVar9 = puVar8;
  for (puVar4 = (undefined1 *)(unaff_x20 + 0x28); puVar4 != (undefined1 *)(unaff_x20 + 0x4c);
      puVar4 = puVar4 + 1) {
    uVar1 = *puVar4;
    *puVar4 = *puVar9;
    *puVar9 = uVar1;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  auVar15._8_8_ = puVar8;
  auVar15._0_8_ = (undefined1 *)(unaff_x20 + 0x4c);
  return auVar15;
}



/* Entry: 10b1f1770; end: 10b1f1977;  */

undefined1  [16]
FUN_10b1f1770(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  char in_NG;
  char in_OV;
  long *plVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  func_0x00010b1f1ca4();
  func_0x00010b1f1708();
  param_5 = (long *)*param_5;
  plVar1 = (long *)*param_4;
  func_0x00010b1f1b58(plVar1,param_5);
  if (in_NG != in_OV) {
    FUN_10b1f1978();
    param_5 = (long *)*param_4;
    plVar1 = (long *)*param_3;
    func_0x00010b1f1b58(plVar1,param_5);
    if (in_NG != in_OV) {
      FUN_10b1f1978();
      param_5 = (long *)*param_3;
      plVar1 = (long *)*unaff_x20;
      func_0x00010b1f1b58(plVar1,param_5);
      if (in_NG != in_OV) {
        FUN_10b1f1978();
        param_5 = (long *)*unaff_x20;
        plVar1 = (long *)*unaff_x19;
        func_0x00010b1f1b58();
        if (in_NG != in_OV) {
          if (param_5 == plVar1) {
            auVar8._8_8_ = param_5;
            auVar8._0_8_ = plVar1;
            return auVar8;
          }
          uVar4 = plVar1[1];
          if ((uVar4 & 1) != 0) {
            uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
          }
          uVar6 = param_5[1];
          if ((uVar6 & 1) != 0) {
            uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          }
          if (uVar4 != uVar6) {
            plVar2 = plVar1;
            func_0x00010b4cf4b4();
            (**(code **)(*plVar2 + 0x20))();
            (**(code **)(*plVar1 + 0x18))(plVar1);
            (**(code **)(*plVar1 + 0x20))(plVar1,param_5);
            (**(code **)(*param_5 + 0x18))(param_5);
            (**(code **)(*param_5 + 0x20))(param_5,plVar2);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar2);
            auVar10._8_8_ = UNRECOVERED_JUMPTABLE;
            auVar10._0_8_ = plVar2;
            return auVar10;
          }
          func_0x00010b250838();
          lVar5 = plVar1[1];
          plVar1[1] = param_5[1];
          param_5[1] = lVar5;
          func_0x000107c303a4(plVar1 + 2,param_5 + 2);
          plVar2 = unaff_x19 + 5;
          plVar3 = plVar2;
          for (plVar1 = unaff_x20 + 5; plVar1 != (long *)((long)unaff_x20 + 0x4c);
              plVar1 = (long *)((long)plVar1 + 1)) {
            lVar5 = *plVar1;
            *(char *)plVar1 = (char)*plVar3;
            *(char *)plVar3 = (char)lVar5;
            plVar2 = (long *)((long)plVar2 + 1);
            plVar3 = (long *)((long)plVar3 + 1);
          }
          auVar7._8_8_ = plVar2;
          auVar7._0_8_ = (long *)((long)unaff_x20 + 0x4c);
          return auVar7;
        }
      }
    }
  }
  auVar9._8_8_ = param_5;
  auVar9._0_8_ = plVar1;
  return auVar9;
}



/* Entry: 10b1f1978; end: 10b1f19b3;  */

undefined1  [16] FUN_10b1f1978(long *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 == param_1) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  uVar6 = param_1[1];
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar8 = param_2[1];
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (uVar6 != uVar8) {
    plVar3 = param_1;
    func_0x00010b4cf4b4();
    (**(code **)(*plVar3 + 0x20))();
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2,plVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3);
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = plVar3;
    return auVar11;
  }
  func_0x00010b250838();
  lVar7 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = lVar7;
  func_0x000107c303a4(param_1 + 2,param_2 + 2);
  puVar4 = (undefined1 *)(unaff_x19 + 0x28);
  puVar5 = puVar4;
  for (puVar2 = (undefined1 *)(unaff_x20 + 0x28); puVar2 != (undefined1 *)(unaff_x20 + 0x4c);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar5;
    *puVar5 = uVar1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = (undefined1 *)(unaff_x20 + 0x4c);
  return auVar9;
}



/* Entry: 10b1f19b4; end: 10b1f1a3b;  */

void FUN_10b1f19b4(void)

{
  undefined1 in_CY;
  long unaff_x19;
  undefined4 *unaff_x20;
  long lVar1;
  long unaff_x22;
  undefined8 uStack_48;
  
  func_0x00010b1f1ca4();
  func_0x00010b1f1e98();
  if ((bool)in_CY) {
    func_0x00010b1f1bc8();
    func_0x00010b1f1be4();
    FUN_10b1f1ac4(uStack_48,*unaff_x20);
    func_0x00010b1f1e4c();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x00010b1f1cf8();
  }
  else {
    FUN_10b1f1ac4();
    lVar1 = unaff_x22 + 0x28;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 10b1f1a3c; end: 10b1f1ac3;  */

void FUN_10b1f1a3c(void)

{
  undefined1 in_CY;
  long unaff_x19;
  undefined4 *unaff_x20;
  long lVar1;
  long unaff_x22;
  undefined8 uStack_48;
  
  func_0x00010b1f1ca4();
  func_0x00010b1f1e98();
  if ((bool)in_CY) {
    func_0x00010b1f1bc8();
    func_0x00010b1f1be4();
    func_0x00010b12aca4(uStack_48,*unaff_x20);
    func_0x00010b1f1e4c();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x00010b1f1cf8();
  }
  else {
    func_0x00010b12aca4();
    lVar1 = unaff_x22 + 0x28;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 10b1f1ac4; end: 10b1f1b43;  */

long FUN_10b1f1ac4(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000106e5c56c(param_1,&UNK_10f739a85);
  func_0x000107c278b8(lVar1 + 0x10,(&PTR_DAT_110cc6d60)[param_2]);
  return param_1;
}



/* Entry: 10b1f1b44; end: 10b1f1eab;  */

void FUN_10b1f1b44(void)

{
  return;
}



/* Entry: 10b1f1eac; end: 10b1f1f8b;  */

void FUN_10b1f1eac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110cc4bc0;
  puVar1[1] = param_2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b1f1f8c; end: 10b1f2867;  */

void FUN_10b1f1f8c(long *param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  undefined8 *puVar14;
  long extraout_x8_00;
  long extraout_x9;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  char cStack_4c8;
  uint uStack_4b8;
  undefined4 uStack_4b4;
  undefined1 uStack_4b0;
  undefined1 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  char cStack_488;
  long alStack_480 [10];
  long lStack_430;
  long lStack_428;
  undefined1 auStack_420 [8];
  undefined8 uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  char cStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 auStack_328 [104];
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_260;
  undefined1 auStack_258 [104];
  long alStack_1f0 [12];
  byte bStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  byte bStack_128;
  undefined8 **ppuStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  char cStack_c0;
  long lStack_b0;
  int iStack_80;
  undefined8 uStack_78;
  
  plVar9 = param_1;
  func_0x00010b1f46b4();
  uStack_78 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  *param_1 = (long)plVar9;
  plVar9 = param_1 + 1;
  uVar17 = param_1[2];
  lVar19 = *plVar9 / 1000;
  if ((uVar17 & 1) == 0) {
    lVar19 = 0;
  }
  uStack_4b8 = uStack_4b8 & 0xffffff00;
  uStack_4a8 = 0;
  func_0x00010bccbc98(alStack_480,*(undefined8 *)(param_1[10] + 8),&UNK_10f738582,0x2e);
  lStack_430 = *(long *)(alStack_480[0] + 8);
  lStack_428 = *(long *)(alStack_480[0] + 0x10);
  if (lStack_428 != 0) {
    plVar11 = (long *)(lStack_428 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10b1fb7d0(auStack_420,*(undefined8 *)(lStack_430 + 0x10),lVar19,uVar17 & 1);
  uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
  uStack_260 = 0;
  if (cStack_3b8 != '\0') {
    uStack_2b0 = uStack_408;
    uStack_2b8 = uStack_410;
    uStack_298 = uStack_3f0;
    uStack_2a0 = uStack_3f8;
    uStack_280 = uStack_3d8;
    uStack_288 = uStack_3e0;
    uStack_2a8 = uStack_400;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_290 = uStack_3e8;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_270 = uStack_3c8;
    uStack_278 = uStack_3d0;
    uStack_268 = uStack_3c0;
    uStack_260 = 1;
    func_0x00010b1f3620(&uStack_410);
  }
  uStack_2c0 = uStack_418;
  uStack_418 = 0;
  func_0x00010b1f3550(auStack_258,&uStack_2c0);
  uStack_330 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  func_0x00010b1f3550(auStack_328,&uStack_390);
  puStack_3a8 = (undefined8 *)0x0;
  puStack_3a0 = (undefined8 *)0x0;
  puStack_3b0 = (undefined8 *)0x0;
  FUN_10b1f37e0(&lStack_188,auStack_258);
  FUN_10b1f37e0(alStack_1f0,auStack_328);
  ppuStack_120 = &puStack_3b0;
  uStack_118 = 0;
  while ((((bStack_128 & 1) != 0 || ((bStack_190 & 1) != 0)) && (lStack_188 != alStack_1f0[0]))) {
    if ((bStack_128 & 1) == 0) {
      func_0x00010b1f4730();
      func_0x00010b1f4594();
      func_0x00010b1f462c();
      func_0x00010b1f4614();
      func_0x00010b1f463c();
    }
    puVar16 = puStack_3a8;
    puVar18 = puStack_3b0;
    if (puStack_3a8 < puStack_3a0) {
      puStack_3a8[2] = uStack_170;
      puStack_3a8[1] = uStack_178;
      *puStack_3a8 = uStack_180;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_180 = 0;
      puStack_3a8[4] = uStack_160;
      puStack_3a8[3] = uStack_168;
      puStack_3a8[5] = uStack_158;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_168 = 0;
      *(undefined1 *)(puStack_3a8 + 10) = uStack_130;
      puStack_3a8[7] = uStack_148;
      puStack_3a8[6] = uStack_150;
      puStack_3a8[9] = uStack_138;
      puStack_3a8[8] = uStack_140;
      puVar12 = puStack_3a8 + 0xb;
    }
    else {
      lVar19 = (long)puStack_3a8 - (long)puStack_3b0;
      uVar17 = lVar19 / 0x58 + 1;
      if (0x2e8ba2e8ba2e8ba < uVar17) {
        FUN_10b1f3674();
        goto LAB_10b1f26cc;
      }
      uVar3 = ((long)puStack_3a0 - (long)puStack_3b0) / 0x58;
      uVar15 = uVar3 * 2;
      if (uVar15 < uVar17 || uVar15 - uVar17 == 0) {
        uVar15 = uVar17;
      }
      if (0x1745d1745d1745c < uVar3) {
        uVar15 = 0x2e8ba2e8ba2e8ba;
      }
      if (uVar15 == 0) {
        lVar10 = 0;
      }
      else {
        if (0x2e8ba2e8ba2e8ba < uVar15) {
          func_0x000104bd35f4();
          goto LAB_10b1f26cc;
        }
        lVar10 = uVar15 * 0x58;
        __Znwm();
      }
      puVar12 = (undefined8 *)(lVar10 + lVar19);
      puVar12[1] = uStack_178;
      *puVar12 = uStack_180;
      puVar12[2] = uStack_170;
      uStack_180 = 0;
      uStack_178 = 0;
      puVar12[4] = uStack_160;
      puVar12[3] = uStack_168;
      puVar12[5] = uStack_158;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      puVar12[7] = uStack_148;
      puVar12[6] = uStack_150;
      puVar12[9] = uStack_138;
      puVar12[8] = uStack_140;
      *(undefined1 *)(puVar12 + 10) = uStack_130;
      puVar20 = puVar12 + (lVar19 / -0x58) * 0xb;
      puVar14 = puVar20;
      puVar13 = puVar18;
      while (puVar13 != puVar16) {
        func_0x00010b1f448c(puVar14);
        uVar23 = *(undefined8 *)(extraout_x9 + 0x38);
        uVar22 = *(undefined8 *)(extraout_x9 + 0x30);
        uVar25 = *(undefined8 *)(extraout_x9 + 0x48);
        uVar24 = *(undefined8 *)(extraout_x9 + 0x40);
        *(undefined1 *)(extraout_x8_00 + 0x50) = *(undefined1 *)(extraout_x9 + 0x50);
        *(undefined8 *)(extraout_x8_00 + 0x38) = uVar23;
        *(undefined8 *)(extraout_x8_00 + 0x30) = uVar22;
        *(undefined8 *)(extraout_x8_00 + 0x48) = uVar25;
        *(undefined8 *)(extraout_x8_00 + 0x40) = uVar24;
        puVar14 = (undefined8 *)(extraout_x8_00 + 0x58);
        puVar13 = (undefined8 *)(extraout_x9 + 0x58);
      }
      for (; puVar18 != puVar16; puVar18 = puVar18 + 0xb) {
        FUN_10b1f3408(puVar18);
      }
      puStack_3a0 = (undefined8 *)(lVar10 + uVar15 * 0x58);
      puVar12 = puVar12 + 0xb;
      bVar5 = puStack_3b0 != (undefined8 *)0x0;
      puStack_3b0 = puVar20;
      if (bVar5) {
        puStack_3a8 = puVar12;
        __ZdlPv();
      }
    }
    puStack_3a8 = puVar12;
    FUN_10b1f3680(&lStack_188);
  }
  uStack_118 = 1;
  FUN_10b1f37b4(&ppuStack_120);
  func_0x00010b1f4448(alStack_1f0);
  FUN_10b1f3868(&uStack_180);
  func_0x00010b1f4448(auStack_328);
  func_0x00010b1f4760();
  func_0x00010b1f4448(auStack_258);
  func_0x00010b1f4448(&uStack_2c0);
  puStack_498 = puStack_3a8;
  puStack_4a0 = puStack_3b0;
  puStack_490 = puStack_3a0;
  puStack_3b0 = (undefined8 *)0x0;
  puStack_3a8 = (undefined8 *)0x0;
  puStack_3a0 = (undefined8 *)0x0;
  cStack_488 = '\x01';
  FUN_10b1f3388(&puStack_3b0);
  FUN_10b1f3888(auStack_420);
  FUN_10b1b7824(&lStack_430);
  func_0x00010bccbe4c(alStack_480);
  func_0x00010bccbdb4(alStack_480);
  puStack_d8 = (undefined8 *)((ulong)puStack_d8 & 0xffffffffffffff00);
  cStack_c0 = cStack_488 == '\x01';
  if ((bool)cStack_c0) {
    puStack_d0 = puStack_498;
    puStack_d8 = puStack_4a0;
    puStack_c8 = puStack_490;
    puStack_498 = (undefined8 *)0x0;
    puStack_490 = (undefined8 *)0x0;
    puStack_4a0 = (undefined8 *)0x0;
  }
  iStack_80 = 0;
  func_0x00010b1f460c();
  puStack_4a0 = (undefined8 *)((ulong)puStack_4a0 & 0xffffffffffffff00);
  cStack_488 = 0;
  if (iStack_80 == 0) {
    puStack_4e0 = (undefined8 *)((ulong)puStack_4e0._1_7_ << 8);
    cStack_4c8 = '\0';
    if (cStack_c0 == '\x01') {
      puStack_4d8 = puStack_d0;
      puStack_4e0 = puStack_d8;
      puStack_4d0 = puStack_c8;
      puStack_d0 = (undefined8 *)0x0;
      puStack_c8 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      cStack_4c8 = '\x01';
    }
  }
  else {
    if (iStack_80 != 1) goto LAB_10b1f26c8;
    puStack_4e0 = (undefined8 *)((ulong)puStack_4e0._1_7_ << 8);
    cStack_4c8 = '\0';
  }
  func_0x00010b1f460c();
  func_0x00010b1f4700();
  FUN_10b1b78d0(&uStack_4b8);
  puVar18 = puStack_4d8;
  uVar7 = 0;
  if ((cStack_4c8 == '\x01') && (uVar7 = puStack_4e0 == puStack_4d8, !(bool)uVar7)) {
    for (puVar16 = puStack_4e0; uVar7 = puVar16 == puVar18, !(bool)uVar7; puVar16 = puVar16 + 0xb) {
      if (*(char *)(puVar16 + 10) == '\x01') {
        lVar19 = puVar16[9] * 1000;
      }
      else {
        lVar19 = 0;
      }
      uStack_4b8 = *(uint *)(puVar16 + 6);
      uStack_4b4 = (undefined4)puVar16[7];
      uStack_4b0 = puVar16[8] != 0;
      plVar11 = param_1 + 3;
      uVar17 = 0;
      FUN_10b1f3ce8(plVar11);
      if ((uVar17 & 1) != 0) {
        func_0x00010b1f45e4(param_1[4] + (long)plVar11 * 0x38);
      }
      lVar21 = param_1[4];
      func_0x00010b1f47a4();
      func_0x00010b1f4798();
      lVar21 = lVar21 + (long)plVar11 * 0x38;
      lStack_b0 = lVar19;
      FUN_10b1f4054(&puStack_4a0,lVar21 + 0x10,lVar19,&puStack_e0);
      puVar12 = puStack_4a0;
      lVar10 = lVar21 + 0x10;
      FUN_10b1f40c0(lVar10,&ppuStack_120,puStack_4a0[4]);
      FUN_10b1f4100(lVar21 + 0x10,ppuStack_120,lVar10,puVar12);
      puStack_4a0 = (undefined8 *)0x0;
      func_0x00010b1f4130(&puStack_4a0);
      func_0x00010b1f4644();
      plVar11 = plVar9;
      if (*(byte *)(param_1 + 2) == 0) {
        plVar11 = (long *)&UNK_10e565f40;
      }
      lVar10 = *plVar11;
      if (*plVar11 <= lVar19) {
        lVar10 = lVar19;
      }
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      *plVar9 = lVar10;
    }
    puStack_d8 = (undefined8 *)param_1[4];
    puStack_e0 = (undefined8 *)param_1[3];
    FUN_10b1f4174(&puStack_e0);
    puVar18 = puStack_d8;
    puVar16 = puStack_e0;
    puStack_4a0 = puStack_e0;
    while (puStack_498 = puVar18, puStack_4a0 != (undefined8 *)0x0) {
      if (puVar18[4] != 0) {
        bVar2 = *(byte *)(puVar18 + 1);
        puVar12 = puVar18 + 3;
        func_0x000107c27bdc();
        puVar18[5] = puVar12[4];
        lVar19 = puVar18[6];
        if (lVar19 == 0) {
          FUN_10b2029a0();
          FUN_10b20345c();
          ppuVar1 = &PTR_PTR_113386a68;
          if ((undefined **)puVar12[4] != (undefined **)0x0) {
            ppuVar1 = (undefined **)puVar12[4];
          }
          uVar7 = (bVar2 & 1) == 0;
          lVar19 = 0x28;
          if ((bool)uVar7) {
            lVar19 = 0x10;
          }
          lVar19 = (long)ppuVar1 + lVar19;
          puVar18[6] = lVar19;
        }
        if (*(int *)(lVar19 + 8) == 0) {
          FUN_10b2029a0();
          ppuVar1 = &PTR_PTR_113386a68;
          if ((undefined **)puVar12[4] != (undefined **)0x0) {
            ppuVar1 = (undefined **)puVar12[4];
          }
          uVar7 = (bVar2 & 1) == 0;
          lVar19 = 0x28;
          if ((bool)uVar7) {
            lVar19 = 0x10;
          }
          puVar18[6] = (long)ppuVar1 + lVar19;
          if (*(int *)((long)ppuVar1 + lVar19 + 8) == 0) {
            if (((bRam00000001137f4178 & 1) == 0) &&
               (iVar8 = 0x137f4178, ___cxa_guard_acquire(), iVar8 != 0)) {
              puVar13 = (undefined8 *)0x18;
              __Znwm();
              *puVar13 = 0;
              puVar13[1] = 0;
              puVar13[2] = 0;
              puVar12 = puVar13;
              puStack_e0 = puVar13;
              FUN_10b1f32b4();
              puVar12[2] = 0;
              puStack_e0 = (undefined8 *)0x0;
              func_0x00010b1f330c(&puStack_e0);
              puRam00000001137f4170 = puVar13;
              ___cxa_guard_release(0x1137f4178);
            }
            puVar18[6] = puRam00000001137f4170;
          }
        }
        FUN_10b1f2868(param_1,puVar18 + 2);
        puStack_e0 = (undefined8 *)CONCAT44(puStack_e0._4_4_,(int)puVar16);
        FUN_10b1f41cc(param_1 + 7,&puStack_e0,puVar18);
      }
      puStack_4a0 = (undefined8 *)((long)puStack_4a0 + 1);
      puStack_498 = puStack_498 + 7;
      FUN_10b1f4174(&puStack_4a0);
      puVar18 = puStack_498;
    }
  }
  FUN_10b1f3368(&puStack_4e0);
  func_0x00010b1f4510(uStack_78);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1f26c8:
  func_0x00010563ab98();
LAB_10b1f26cc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1f26d0);
  (*pcVar6)();
}



/* Entry: 10b1f2868; end: 10b1f2a0f;  */

float FUN_10b1f2868(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  float fVar9;
  undefined8 auStack_50 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2[2] == 0) {
    fVar9 = 0.0;
  }
  else {
    uVar3 = (*param_1 - *(long *)(*param_2 + 0x20)) / 60000000;
    fVar9 = (float)(uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU));
    puVar7 = (ulong *)param_2[4];
    puVar2 = puVar7;
    if ((*puVar7 & 1) != 0) {
      puVar2 = (ulong *)(*puVar7 + 7);
    }
    uVar3 = (long)(int)puVar7[1];
    puVar4 = puVar2;
    while (uVar3 != 0) {
      uVar8 = uVar3 >> 1;
      uVar1 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
      uVar3 = uVar8;
      if (*(float *)(puVar4[uVar8] + 0x14) <= fVar9) {
        uVar3 = uVar1;
        puVar4 = puVar4 + uVar8 + 1;
      }
    }
    if (puVar4 == puVar2) {
      fVar9 = *(float *)(*puVar4 + 0x10);
    }
    else if (puVar4 == puVar2 + (int)puVar7[1]) {
      if ((bRam00000001137f4188 & 1) == 0) {
        iVar5 = 0x137f4188;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          puVar6 = (undefined8 *)0x20;
          __Znwm();
          *puVar6 = &PTR_FUN_110cfc340;
          puVar6[1] = 0;
          *(undefined4 *)(puVar6 + 3) = 0;
          puVar6[2] = 0x4aa066803f800000;
          auStack_50[0] = 0;
          FUN_10b1f3518(0x1137f4190);
          FUN_10b1f3524(auStack_50);
          uRam00000001137f4180 = 0x1137f4190;
          ___cxa_guard_release(0x1137f4188);
        }
      }
      FUN_10b1f3518(auStack_50,uRam00000001137f4180);
      func_0x00010b1f45c4(uStack_40,uStack_3c);
      FUN_10b51ffb0(auStack_50);
    }
    else {
      func_0x00010b1f45c4(*(undefined4 *)(*puVar4 + 0x10),*(undefined4 *)(*puVar4 + 0x14));
    }
    fVar9 = 1.0 - fVar9;
  }
  return fVar9;
}



/* Entry: 10b1f2a10; end: 10b1f2b6f;  */

void FUN_10b1f2a10(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((param_2[9] == 0) && (FUN_10b1f1f8c(param_2), param_2[9] == 0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
  uVar4 = *(undefined8 *)(param_2[7] + 0x24);
  uVar3 = *(undefined8 *)(param_2[7] + 0x1c);
  uStack_38 = (undefined4)uVar4;
  uStack_34 = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_40 = (undefined4)uVar3;
  uStack_3c = (undefined4)((ulong)uVar3 >> 0x20);
  FUN_10b1f42c0(param_2 + 7);
  uVar2 = (undefined4)uVar3;
  plVar1 = param_2 + 3;
  FUN_10b1f2b70(plVar1,(ulong)&uStack_40 | 4);
  if (plVar1[2] == 0) {
    FUN_10b1f2b98(param_2,CONCAT44(uStack_38,uStack_3c),uStack_34,plVar1);
    if (plVar1[2] != 0) {
      func_0x00010b1f4774();
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar2);
      FUN_10b1f41cc(param_2 + 7,&uStack_78,(ulong)&uStack_40 | 4);
      if (*param_2 < plVar1[3]) {
        FUN_10b1f1f8c(param_2);
      }
    }
    FUN_10b1f2a10(param_1,param_2);
  }
  else {
    FUN_10b1f3428(&uStack_78,*plVar1 + 0x28);
    FUN_10b1f437c(plVar1,*plVar1);
    func_0x00010b1f4774();
    uStack_7c = uVar2;
    FUN_10b1f43e8(param_2 + 7,&uStack_7c,(ulong)&uStack_40 | 4);
    uVar4 = uStack_50;
    uVar3 = uStack_60;
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[2] = uStack_68;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    param_1[4] = uStack_58;
    param_1[3] = uVar3;
    uStack_58 = 0;
    uStack_50 = 0;
    param_1[5] = uVar4;
    param_1[6] = uStack_48;
    *(undefined1 *)(param_1 + 7) = 1;
    func_0x00010b1d35b0(&uStack_78);
  }
  return;
}



/* Entry: 10b1f2b70; end: 10b1f2b97;  */

long FUN_10b1f2b70(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  func_0x00010b1f4324(auStack_28);
  return lStack_20 + 0x10;
}



/* Entry: 10b1f2b98; end: 10b1f32b3;  */

void FUN_10b1f2b98(long param_1,ulong param_2,uint param_3,long *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 extraout_x8;
  mach_header *pmVar15;
  long extraout_x8_00;
  mach_header *pmVar16;
  long extraout_x9;
  ulong uVar17;
  ulong uVar18;
  mach_header *pmVar19;
  mach_header *pmVar20;
  long lVar21;
  long lVar22;
  mach_header *pmVar23;
  mach_header *pmStack_400;
  mach_header *pmStack_3f8;
  mach_header *pmStack_3f0;
  undefined1 uStack_3e8;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3c8;
  mach_header *pmStack_3c0;
  mach_header *pmStack_3b8;
  mach_header *pmStack_3b0;
  char cStack_3a8;
  long alStack_3a0 [10];
  long lStack_350;
  long lStack_348;
  undefined1 auStack_340 [8];
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  char cStack_2f8;
  mach_header *pmStack_2f0;
  mach_header *pmStack_2e8;
  mach_header *pmStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [72];
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [72];
  long alStack_1b0 [8];
  byte bStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte bStack_128;
  mach_header **ppmStack_120;
  undefined1 uStack_118;
  undefined1 auStack_e0 [8];
  mach_header *pmStack_d8;
  mach_header *pmStack_d0;
  mach_header *pmStack_c8;
  char cStack_c0;
  long lStack_b0;
  int iStack_80;
  undefined8 uStack_78;
  
  uVar18 = param_2;
  plVar14 = param_4;
  func_0x00010b1f46b4();
  lVar22 = plVar14[3];
  bVar7 = uVar18 >> 0x20 == 0;
  uVar18 = uVar18 >> 0x20 | 0x100000000;
  if (bVar7) {
    uVar18 = 0;
  }
  bVar8 = (int)uVar18 == 0;
  bVar9 = (param_2 & 0xffffffff) != 5;
  uVar17 = 0;
  if (bVar9) {
    uVar17 = param_2 & 0xff;
  }
  uVar2 = 0;
  if (bVar9) {
    uVar2 = 0x100000000;
  }
  uVar3 = uVar18;
  if (uVar18 < 0x100000001) {
    uVar3 = 0;
  }
  uVar18 = uVar18 & 0xff;
  if (bVar7 || bVar8) {
    uVar18 = 0;
  }
  pmVar23 = &MACH_HEADER;
  if (bVar7 || bVar8) {
    pmVar23 = (mach_header *)0x0;
  }
  uStack_3d8 = 0;
  uStack_3c8 = 0;
  uStack_78 = extraout_x8;
  func_0x00010bccbc98(alStack_3a0,*(undefined8 *)(*(long *)(param_1 + 0x50) + 8),&UNK_10f7385b1,0x32
                     );
  lStack_350 = *(long *)(alStack_3a0[0] + 8);
  lStack_348 = *(long *)(alStack_3a0[0] + 0x10);
  if (lStack_348 != 0) {
    plVar14 = (long *)(lStack_348 + 8);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10b1fb910(auStack_340,*(undefined8 *)(lStack_350 + 0x10),lVar22 / 1000,1,
                uVar17 | param_2 & 0xffffff00 | uVar2,uVar18 | uVar3 & 0xffffff00 | (ulong)pmVar23,
                param_3 & 1);
  uVar5 = uStack_308;
  uStack_238 = uStack_238 & 0xffffffffffffff00;
  uStack_200 = 0;
  if (cStack_2f8 != '\0') {
    uStack_230 = uStack_328;
    uStack_238 = uStack_330;
    uStack_228 = uStack_320;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_218 = uStack_310;
    uStack_220 = uStack_318;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_210 = uVar5;
    uStack_208 = uStack_300;
    uStack_200 = 1;
    func_0x00010b1f39f4(&uStack_330);
  }
  uStack_240 = uStack_338;
  uStack_338 = 0;
  func_0x00010b1f3950(auStack_1f8,&uStack_240);
  uStack_290 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  func_0x00010b1f3950(auStack_288,&uStack_2d0);
  pmStack_2e8 = (mach_header *)0x0;
  pmStack_2e0 = (mach_header *)0x0;
  pmStack_2f0 = (mach_header *)0x0;
  FUN_10b1f3b74(&lStack_168,auStack_1f8);
  FUN_10b1f3b74(alStack_1b0,auStack_288);
  ppmStack_120 = &pmStack_2f0;
  uStack_118 = 0;
  while ((((bStack_128 & 1) != 0 || ((bStack_170 & 1) != 0)) && (lStack_168 != alStack_1b0[0]))) {
    if ((bStack_128 & 1) == 0) {
      func_0x00010b1f4730();
      func_0x00010b1f4594();
      func_0x00010b1f462c();
      func_0x00010b1f4614();
      func_0x00010b1f463c();
    }
    pmVar23 = pmStack_2e8;
    pmVar20 = pmStack_2f0;
    if (pmStack_2e8 < pmStack_2e0) {
      pmStack_2e8->ncmds = (undefined4)uStack_150;
      pmStack_2e8->sizeofcmds = uStack_150._4_4_;
      pmStack_2e8->cpusubtype = (undefined4)uStack_158;
      pmStack_2e8->filetype = uStack_158._4_4_;
      pmStack_2e8->magic = (undefined4)uStack_160;
      pmStack_2e8->cputype = uStack_160._4_4_;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
      pmStack_2e8[1].magic = (undefined4)uStack_140;
      pmStack_2e8[1].cputype = uStack_140._4_4_;
      pmStack_2e8->flags = (undefined4)uStack_148;
      pmStack_2e8->reserved = uStack_148._4_4_;
      pmStack_2e8[1].cpusubtype = (undefined4)uStack_138;
      pmStack_2e8[1].filetype = uStack_138._4_4_;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_148 = 0;
      pmStack_2e8[1].ncmds = (undefined4)uStack_130;
      pmStack_2e8[1].sizeofcmds = uStack_130._4_4_;
      pmVar20 = (mach_header *)&pmStack_2e8[1].flags;
    }
    else {
      lVar22 = (long)pmStack_2e8 - (long)pmStack_2f0;
      uVar18 = lVar22 / 0x38 + 1;
      if (0x492492492492492 < uVar18) {
        FUN_10b1f3a40();
        goto LAB_10b1f3148;
      }
      uVar2 = ((long)pmStack_2e0 - (long)pmStack_2f0) / 0x38;
      uVar17 = uVar2 * 2;
      if (uVar17 < uVar18 || uVar17 - uVar18 == 0) {
        uVar17 = uVar18;
      }
      if (0x249249249249248 < uVar2) {
        uVar17 = 0x492492492492492;
      }
      if (uVar17 == 0) {
        lVar21 = 0;
      }
      else {
        if (0x492492492492492 < uVar17) {
          func_0x000104bd35f4();
          goto LAB_10b1f3148;
        }
        lVar21 = uVar17 * 0x38;
        __Znwm();
      }
      uVar5 = uStack_138;
      puVar1 = (undefined8 *)(lVar21 + lVar22);
      puVar1[1] = uStack_158;
      *puVar1 = uStack_160;
      puVar1[2] = uStack_150;
      uStack_160 = 0;
      uStack_158 = 0;
      puVar1[4] = uStack_140;
      puVar1[3] = uStack_148;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      puVar1[5] = uVar5;
      puVar1[6] = uStack_130;
      pmVar19 = (mach_header *)(puVar1 + (lVar22 / -0x38) * 7);
      pmVar15 = pmVar19;
      pmVar16 = pmVar20;
      while (pmVar16 != pmVar23) {
        func_0x00010b1f448c(pmVar15);
        *(undefined8 *)(extraout_x8_00 + 0x30) = *(undefined8 *)(extraout_x9 + 0x30);
        pmVar15 = (mach_header *)(extraout_x8_00 + 0x38);
        pmVar16 = (mach_header *)(extraout_x9 + 0x38);
      }
      for (; pmVar20 != pmVar23; pmVar20 = (mach_header *)&pmVar20[1].flags) {
        FUN_10b1f34f8(pmVar20);
      }
      pmStack_2e0 = (mach_header *)(lVar21 + uVar17 * 0x38);
      pmVar20 = (mach_header *)(puVar1 + 7);
      bVar7 = pmStack_2f0 != (mach_header *)0x0;
      pmStack_2f0 = pmVar19;
      if (bVar7) {
        pmStack_2e8 = pmVar20;
        __ZdlPv();
      }
    }
    pmStack_2e8 = pmVar20;
    FUN_10b1f3a4c(&lStack_168);
  }
  uStack_118 = 1;
  FUN_10b1f3b48(&ppmStack_120);
  func_0x00010b1f4440(alStack_1b0);
  FUN_10b1f3bf4(&uStack_160);
  func_0x00010b1f4440(auStack_288);
  func_0x00010b1f46f4();
  func_0x00010b1f4440(auStack_1f8);
  func_0x00010b1f4440(&uStack_240);
  pmStack_3b8 = pmStack_2e8;
  pmStack_3c0 = pmStack_2f0;
  pmStack_3b0 = pmStack_2e0;
  pmStack_2f0 = (mach_header *)0x0;
  pmStack_2e8 = (mach_header *)0x0;
  pmStack_2e0 = (mach_header *)0x0;
  cStack_3a8 = '\x01';
  FUN_10b1f3478(&pmStack_2f0);
  FUN_10b1f3c14(auStack_340);
  FUN_10b1b7824(&lStack_350);
  func_0x00010bccbe4c(alStack_3a0);
  func_0x00010bccbdb4(alStack_3a0);
  pmStack_d8 = (mach_header *)((ulong)pmStack_d8 & 0xffffffffffffff00);
  cStack_c0 = cStack_3a8 == '\x01';
  if ((bool)cStack_c0) {
    pmStack_d0 = pmStack_3b8;
    pmStack_d8 = pmStack_3c0;
    pmStack_c8 = pmStack_3b0;
    pmStack_3b8 = (mach_header *)0x0;
    pmStack_3b0 = (mach_header *)0x0;
    pmStack_3c0 = (mach_header *)0x0;
  }
  iStack_80 = 0;
  func_0x00010b1f4604();
  pmVar20 = pmStack_d0;
  pmStack_3c0 = (mach_header *)((ulong)pmStack_3c0 & 0xffffffffffffff00);
  cStack_3a8 = 0;
  if (iStack_80 == 0) {
    pmStack_400 = (mach_header *)((ulong)pmStack_400._1_7_ << 8);
    uStack_3e8 = 0;
    uVar10 = cStack_c0 == '\x01';
    if ((bool)uVar10) {
      pmStack_3f8 = pmStack_d0;
      pmStack_400 = pmStack_d8;
      pmStack_3f0 = pmStack_c8;
      pmStack_d0 = (mach_header *)0x0;
      pmStack_c8 = (mach_header *)0x0;
      pmStack_d8 = (mach_header *)0x0;
      bVar7 = true;
      uStack_3e8 = 1;
      pmVar23 = pmVar20;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    if (iStack_80 != 1) goto LAB_10b1f3144;
    bVar7 = false;
    pmStack_400 = (mach_header *)((ulong)pmStack_400._1_7_ << 8);
    uStack_3e8 = 0;
    uVar10 = true;
  }
  func_0x00010b1f4604();
  func_0x00010b1f470c();
  FUN_10b1b78d0(&uStack_3d8);
  if ((bVar7) && (uVar10 = pmStack_400 == pmVar23, !(bool)uVar10)) {
    plVar14 = param_4 + 1;
    for (pmVar20 = pmStack_400; uVar10 = pmVar20 == pmVar23, !(bool)uVar10;
        pmVar20 = (mach_header *)&pmVar20[1].flags) {
      lVar22 = *(long *)&pmVar20[1].ncmds;
      func_0x00010b1f47a4();
      func_0x00010b1f4798();
      lVar22 = lVar22 * 1000;
      lStack_b0 = lVar22;
      FUN_10b1f4054(&pmStack_3c0,param_4,lVar22,auStack_e0);
      pmVar16 = pmStack_3c0;
      plVar11 = plVar14;
      if ((plVar14 == (long *)*param_4) ||
         (func_0x000107c27bdc(), lVar21._0_4_ = pmVar16[1].magic, lVar21._4_4_ = pmVar16[1].cputype,
         plVar11[4] <= lVar21)) {
        plVar13 = plVar14;
        plVar12 = plVar14;
        if (*plVar14 != 0) {
          plVar13 = plVar11;
          plVar12 = plVar11 + 1;
        }
      }
      else {
        plVar12 = param_4;
        FUN_10b1f40c0(param_4,&uStack_3d8);
        plVar13 = (long *)CONCAT71(uStack_3d7,uStack_3d8);
      }
      FUN_10b1f4100(param_4,plVar13,plVar12,pmVar16);
      pmStack_3c0 = (mach_header *)0x0;
      func_0x00010b1f4130(&pmStack_3c0);
      func_0x00010b1f4644();
      lVar21 = param_4[3];
      if (param_4[3] <= lVar22) {
        lVar21 = lVar22;
      }
      param_4[3] = lVar21;
    }
  }
  FUN_10b1f3458(&pmStack_400);
  func_0x00010b1f4510(uStack_78);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1f3144:
  func_0x00010563ab98();
LAB_10b1f3148:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1f314c);
  (*pcVar6)();
}



/* Entry: 10b1f32b4; end: 10b1f32bf;  */

void FUN_10b1f32b4(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10b1f32c0);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10b1f32c0);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10b1f32c0; end: 10b1f3337;  */

void FUN_10b1f32c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cfc340;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b1f3338; end: 10b1f3367;  */

long * FUN_10b1f3338(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b1f3368; end: 10b1f3387;  */

void FUN_10b1f3368(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1f3388();
  }
  return;
}



/* Entry: 10b1f3388; end: 10b1f33b3;  */

undefined8 FUN_10b1f3388(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b1f33b4(&uStack_28);
  return param_1;
}



/* Entry: 10b1f33b4; end: 10b1f3407;  */

void FUN_10b1f33b4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x58;
      FUN_10b1f3408();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10b1f3408; end: 10b1f3427;  */

void FUN_10b1f3408(void)

{
  func_0x00010b1f47e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1f3428; end: 10b1f3457;  */

void FUN_10b1f3428(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f4530();
  func_0x00010b1f453c();
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10b1f3458; end: 10b1f3477;  */

void FUN_10b1f3458(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1f3478();
  }
  return;
}



/* Entry: 10b1f3478; end: 10b1f34a3;  */

undefined8 FUN_10b1f3478(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b1f34a4(&uStack_28);
  return param_1;
}



/* Entry: 10b1f34a4; end: 10b1f34f7;  */

void FUN_10b1f34a4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x38;
      FUN_10b1f34f8();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10b1f34f8; end: 10b1f3517;  */

void FUN_10b1f34f8(void)

{
  func_0x00010b1f47e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1f3518; end: 10b1f3523;  */

undefined8 * FUN_10b1f3518(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cfc340;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10b51ff74(param_1,param_2);
  return param_1;
}



/* Entry: 10b1f3524; end: 10b1f354f;  */

void FUN_10b1f3524(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010b1f480c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    FUN_10b51ffb0();
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1f3550; end: 10b1f3643;  */

void FUN_10b1f3550(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010b1f47f8();
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    *param_1 = extraout_x9;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(extraout_x8 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(extraout_x8 + 8) = uVar1;
    *(undefined8 *)(extraout_x8 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *param_1 = extraout_x9;
    uVar5 = *(undefined8 *)(extraout_x8 + 0x10);
    uVar3 = *(undefined8 *)(extraout_x8 + 8);
    param_1[3] = *(undefined8 *)(extraout_x8 + 0x18);
    param_1[2] = uVar5;
    param_1[1] = uVar3;
    *(undefined8 *)(extraout_x8 + 8) = 0;
    *(undefined8 *)(extraout_x8 + 0x10) = 0;
    *(undefined8 *)(extraout_x8 + 0x18) = 0;
    param_1[6] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
    param_1[10] = uVar4;
    param_1[9] = uVar3;
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  func_0x00010b1f4448();
  return;
}



/* Entry: 10b1f3644; end: 10b1f3673;  */

void FUN_10b1f3644(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b1f47d4();
  func_0x00010b1f47ec();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x20 + 0x50) = *(undefined1 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  return;
}



/* Entry: 10b1f3674; end: 10b1f367f;  */

void FUN_10b1f3674(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_88 [88];
  
  func_0x00010b1f46dc();
  func_0x00010b1f480c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_10b1f373c(auStack_88,*unaff_x19);
    FUN_10b1f36ec(unaff_x19 + 1,auStack_88);
    FUN_10b1f3408(auStack_88);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0xc) == '\x01') {
    FUN_10b1f3408();
    *(undefined1 *)(puVar1 + 0xb) = 0;
  }
  return;
}



/* Entry: 10b1f3680; end: 10b1f36eb;  */

void FUN_10b1f3680(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_78 [88];
  
  func_0x00010b1f480c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_10b1f373c(auStack_78,*unaff_x19);
    FUN_10b1f36ec(unaff_x19 + 1,auStack_78);
    FUN_10b1f3408(auStack_78);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0xc) == '\x01') {
    FUN_10b1f3408();
    *(undefined1 *)(puVar1 + 0xb) = 0;
  }
  return;
}



/* Entry: 10b1f36ec; end: 10b1f373b;  */

long FUN_10b1f36ec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10b1f3644(param_1);
  }
  else {
    func_0x00010b1f4450();
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return param_1;
}



/* Entry: 10b1f373c; end: 10b1f37b3;  */

void FUN_10b1f373c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c313f8();
  func_0x00010b1f464c();
  func_0x00010b1f466c();
  func_0x00010b1f4780();
  *(undefined4 *)(param_1 + 0x30) = param_2;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar2 = 5;
  func_0x000107c28930();
  *(undefined8 *)(param_1 + 0x48) = unaff_x20;
  *(undefined1 *)(param_1 + 0x50) = uVar2;
  return;
}



/* Entry: 10b1f37b4; end: 10b1f37df;  */

long FUN_10b1f37b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b1f33b4(param_1);
  }
  return param_1;
}



/* Entry: 10b1f37e0; end: 10b1f382f;  */

void FUN_10b1f37e0(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1f467c();
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_10b1f3830();
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  return;
}



/* Entry: 10b1f3830; end: 10b1f3867;  */

void FUN_10b1f3830(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b1f4530();
  func_0x00010b1f453c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x50) = *(undefined1 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  return;
}



/* Entry: 10b1f3868; end: 10b1f3887;  */

void FUN_10b1f3868(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10b1f3408();
  }
  return;
}



/* Entry: 10b1f3888; end: 10b1f38fb;  */

undefined8 * FUN_10b1f3888(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
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
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xd) != '\0') {
    func_0x00010b1f3620(param_1 + 2);
  }
  FUN_10b1f3868((ulong)&uStack_90 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10b1f3868(param_1 + 2);
  return param_1;
}



/* Entry: 10b1f38fc; end: 10b1f393f;  */

void FUN_10b1f38fc(long param_1)

{
  if (*(uint *)(param_1 + 0x58) != 0xffffffff) {
    func_0x00010b1f4718((&PTR_FUN_110cc4b90)[*(uint *)(param_1 + 0x58)]);
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 10b1f3940; end: 10b1f394f;  */

void FUN_10b1f3940(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1f3388();
  }
  return;
}



/* Entry: 10b1f3950; end: 10b1f3a17;  */

void FUN_10b1f3950(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010b1f47f8();
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    *param_1 = extraout_x9;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(extraout_x8 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(extraout_x8 + 8) = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *param_1 = extraout_x9;
    uVar7 = *(undefined8 *)(extraout_x8 + 0x10);
    uVar5 = *(undefined8 *)(extraout_x8 + 8);
    param_1[3] = uVar2;
    param_1[2] = uVar7;
    param_1[1] = uVar5;
    *(undefined8 *)(extraout_x8 + 8) = 0;
    *(undefined8 *)(extraout_x8 + 0x10) = 0;
    *(undefined8 *)(extraout_x8 + 0x18) = uVar2;
    *(undefined8 *)(extraout_x8 + 0x18) = 0;
    param_1[5] = uVar6;
    param_1[4] = uVar4;
    param_1[6] = uVar3;
    param_1[7] = uVar1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  func_0x00010b1f4440();
  return;
}



/* Entry: 10b1f3a18; end: 10b1f3a3f;  */

void FUN_10b1f3a18(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f47d4();
  func_0x00010b1f47ec();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10b1f3a40; end: 10b1f3a4b;  */

void FUN_10b1f3a40(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_68 [56];
  
  func_0x00010b1f46dc();
  func_0x00010b1f480c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_10b1f3b04(auStack_68,*unaff_x19);
    FUN_10b1f3abc(unaff_x19 + 1,auStack_68);
    FUN_10b1f34f8(auStack_68);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 8) == '\x01') {
    FUN_10b1f34f8();
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  return;
}



/* Entry: 10b1f3a4c; end: 10b1f3abb;  */

void FUN_10b1f3a4c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_58 [56];
  
  func_0x00010b1f480c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_10b1f3b04(auStack_58,*unaff_x19);
    FUN_10b1f3abc(unaff_x19 + 1,auStack_58);
    FUN_10b1f34f8(auStack_58);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 8) == '\x01') {
    FUN_10b1f34f8();
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  return;
}



/* Entry: 10b1f3abc; end: 10b1f3b03;  */

long FUN_10b1f3abc(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b1f3a18(param_1);
  }
  else {
    func_0x00010b1f4450();
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return param_1;
}



/* Entry: 10b1f3b04; end: 10b1f3b47;  */

void FUN_10b1f3b04(long param_1,undefined8 param_2)

{
  func_0x000107c313f8();
  func_0x00010b1f464c();
  func_0x00010b1f466c();
  func_0x00010b1f4780();
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



/* Entry: 10b1f3b48; end: 10b1f3b73;  */

long FUN_10b1f3b48(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b1f34a4(param_1);
  }
  return param_1;
}



/* Entry: 10b1f3b74; end: 10b1f3bc3;  */

void FUN_10b1f3b74(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1f467c();
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10b1f3bc4();
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
  }
  return;
}



/* Entry: 10b1f3bc4; end: 10b1f3bf3;  */

void FUN_10b1f3bc4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f4530();
  func_0x00010b1f453c();
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10b1f3bf4; end: 10b1f3c13;  */

void FUN_10b1f3bf4(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b1f34f8();
  }
  return;
}



/* Entry: 10b1f3c14; end: 10b1f3c83;  */

undefined8 * FUN_10b1f3c14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    func_0x00010b1f39f4(param_1 + 2);
  }
  FUN_10b1f3bf4((ulong)&uStack_70 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10b1f3bf4(param_1 + 2);
  return param_1;
}



/* Entry: 10b1f3c84; end: 10b1f3cc7;  */

void FUN_10b1f3c84(long param_1)

{
  if (*(uint *)(param_1 + 0x58) != 0xffffffff) {
    func_0x00010b1f4718((&PTR_FUN_110cc4ba0)[*(uint *)(param_1 + 0x58)]);
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 10b1f3cc8; end: 10b1f3ce7;  */

void FUN_10b1f3cc8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1f3478();
  }
  return;
}



/* Entry: 10b1f3ce8; end: 10b1f3ecb;  */

void FUN_10b1f3ce8(ulong *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  Hint_Prefetch(*param_1,0,2,0);
  piVar6 = param_2;
  FUN_10b1f3ecc(*param_1);
  lVar2 = 0;
  bVar3 = (byte)piVar6 & 0x7f;
  uVar4 = *param_1 >> 0xc ^ (ulong)piVar6 >> 7;
  do {
    uVar4 = uVar4 & param_1[2];
    uVar8 = *(undefined8 *)(*param_1 + uVar4);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar14 == bVar3),
                          CONCAT16(-(bVar13 == bVar3),
                                   CONCAT15(-(bVar12 == bVar3),
                                            CONCAT14(-(bVar11 == bVar3),
                                                     CONCAT13(-(bVar10 == bVar3),
                                                              CONCAT12(-(bVar9 == bVar3),
                                                                       CONCAT11(-(bVar7 == bVar3),
                                                                                -((byte)uVar8 ==
                                                                                 bVar3)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      piVar6 = (int *)(param_1[1] +
                      (uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]) *
                      0x38);
      if ((*piVar6 == *param_2 && piVar6[1] == param_2[1]) && ((char)piVar6[2] == (char)param_2[2]))
      {
        return;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) {
      func_0x00010b1f3dd0(param_1);
      return;
    }
    lVar2 = lVar2 + 8;
    uVar4 = lVar2 + uVar4;
  } while( true );
}



/* Entry: 10b1f3ecc; end: 10b1f3f0f;  */

void FUN_10b1f3ecc(uint *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uStack_11;
  
  uStack_11 = (undefined1)param_1[2];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_1) * -0x622015f714c7d297) + (ulong)param_1[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  FUN_10b1aec14(SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297,
                &uStack_11);
  return;
}



/* Entry: 10b1f3f10; end: 10b1f3fe3;  */

void FUN_10b1f3f10(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  func_0x00010726210c();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      FUN_10b1f3ecc();
      plVar3 = param_1;
      func_0x000107c2b954(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_10b1f3fe4(lVar9 + (long)plVar3 * 0x38,lVar6);
    }
    lVar6 = lVar6 + 0x38;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10b1f3fe4; end: 10b1f4053;  */

undefined8 * FUN_10b1f3fe4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  plVar3 = param_2 + 3;
  lVar4 = *plVar3;
  puVar2 = param_2 + 2;
  uVar1 = *puVar2;
  plVar5 = param_1 + 3;
  *plVar5 = lVar4;
  param_1[2] = uVar1;
  lVar6 = param_2[4];
  param_1[4] = lVar6;
  if (lVar6 == 0) {
    param_1[2] = plVar5;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar5;
    *puVar2 = plVar3;
    *plVar3 = 0;
    param_2[4] = 0;
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x00010b1d3570(puVar2,*plVar3);
  return puVar2;
}



/* Entry: 10b1f4054; end: 10b1f40bf;  */

void FUN_10b1f4054(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0x60;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = param_2 + 8;
  param_1[2] = 1;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  uVar3 = *param_4;
  *(undefined8 *)(lVar2 + 0x30) = param_4[1];
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  *(undefined8 *)(lVar2 + 0x38) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  uVar3 = param_4[3];
  *(undefined8 *)(lVar2 + 0x48) = param_4[4];
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  param_4[2] = 0;
  param_4[3] = 0;
  uVar3 = param_4[5];
  uVar1 = param_4[6];
  param_4[4] = 0;
  param_4[5] = 0;
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  *(undefined8 *)(lVar2 + 0x58) = uVar1;
  return;
}



/* Entry: 10b1f40c0; end: 10b1f40ff;  */

long * FUN_10b1f40c0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar1;
  do {
    plVar2 = plVar1;
    if (plVar3 == (long *)0x0) {
LAB_10b1f40fc:
      *param_2 = (long)plVar1;
      return plVar2;
    }
    while (plVar1 = plVar3, plVar1[4] <= param_3) {
      plVar3 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar2 = plVar1 + 1;
        goto LAB_10b1f40fc;
      }
    }
    plVar3 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10b1f4100; end: 10b1f4173;  */

void FUN_10b1f4100(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1f4698();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010b1f478c();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 10b1f4174; end: 10b1f41cb;  */

void FUN_10b1f4174(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x38;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10b1f41cc; end: 10b1f420f;  */

void FUN_10b1f41cc(void)

{
  func_0x00010b1f4548();
  func_0x00010b1f44c0();
  func_0x00010b1f4724();
  func_0x00010b1f45a8();
  func_0x00010b1f461c();
  return;
}



/* Entry: 10b1f4210; end: 10b1f4253;  */

long * FUN_10b1f4210(long param_1,long *param_2,float *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, *param_3 < *(float *)((long)plVar2 + 0x1c)) {
        plVar3 = plVar2;
        plVar1 = (long *)*plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_10b1f4250;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar3 = plVar2 + 1;
  }
LAB_10b1f4250:
  *param_2 = (long)plVar2;
  return plVar3;
}



/* Entry: 10b1f4254; end: 10b1f42a7;  */

void FUN_10b1f4254(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1f4698();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010b1f478c();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 10b1f42a8; end: 10b1f42bf;  */

void FUN_10b1f42a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1f42c0; end: 10b1f42eb;  */

undefined8 FUN_10b1f42c0(undefined8 param_1,undefined8 param_2)

{
  FUN_10b1f42ec();
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 10b1f42ec; end: 10b1f437b;  */

long FUN_10b1f42ec(long param_1)

{
  long unaff_x19;
  long *unaff_x21;
  
  func_0x00010b1f465c();
  if (*unaff_x21 == unaff_x19) {
    *unaff_x21 = param_1;
  }
  func_0x00010b1f4580();
  return param_1;
}



/* Entry: 10b1f437c; end: 10b1f43af;  */

undefined8 FUN_10b1f437c(undefined8 param_1,long param_2)

{
  FUN_10b1f43b0();
  func_0x00010b1d35b0(param_2 + 0x28);
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 10b1f43b0; end: 10b1f43e7;  */

long FUN_10b1f43b0(long param_1)

{
  long unaff_x19;
  long *unaff_x21;
  
  func_0x00010b1f465c();
  if (*unaff_x21 == unaff_x19) {
    *unaff_x21 = param_1;
  }
  func_0x00010b1f4580();
  return param_1;
}



/* Entry: 10b1f43e8; end: 10b1f442b;  */

void FUN_10b1f43e8(void)

{
  func_0x00010b1f4548();
  func_0x00010b1f44c0();
  func_0x00010b1f4724();
  func_0x00010b1f45a8();
  func_0x00010b1f461c();
  return;
}



/* Entry: 10b1f442c; end: 10b1f4817;  */

void FUN_10b1f442c(void)

{
  return;
}



/* Entry: 10b1f4818; end: 10b1f495b;  */

void FUN_10b1f4818(undefined8 *param_1,long param_2,long *param_3,ulong param_4,long *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 in_ZR;
  long lVar6;
  long *plVar7;
  long *plVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  byte bVar13;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  long lStack_258;
  ulong uStack_250;
  undefined1 uStack_248;
  long lStack_240;
  long *plStack_238;
  long lStack_230;
  byte abStack_228 [88];
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  code **ppcStack_1a0;
  ulong *puStack_198;
  undefined4 *puStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  long *plStack_170;
  long lStack_168;
  code *pcStack_150;
  undefined **ppuStack_148;
  code ***pppcStack_140;
  undefined8 uStack_120;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  plVar10 = param_3;
  func_0x00010b1f6578();
  uStack_48 = extraout_x8;
  if ((param_4 & 1) == 0) {
    FUN_10b1f495c(param_2);
    plVar10 = param_5;
  }
  lVar6 = param_2 + 0x1a;
  FUN_10b1f4cac(&lStack_80);
  lVar5 = lStack_80;
  if (lStack_80 == 0) {
    *param_1 = FUN_10b1f53bc;
    param_1[1] = &PTR_DAT_110cc4c38;
  }
  else {
    __ZNSt3__16chrono12system_clock3nowEv();
    lStack_a0 = param_3[1];
    lStack_a8 = *param_3;
    lStack_98 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    lStack_88 = lStack_80;
    lStack_80 = 0;
    pcStack_78 = FUN_10b1f53dc;
    ppuStack_70 = &PTR_FUN_110cc4c50;
    plVar7 = (long *)0x30;
    lStack_b0 = param_2;
    lStack_90 = lVar6;
    __Znwm();
    lVar4 = lStack_98;
    *plVar7 = param_2;
    plVar7[2] = lStack_a0;
    plVar7[1] = lStack_a8;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_98 = 0;
    plVar7[3] = lVar4;
    plVar7[4] = lVar6;
    lStack_88 = 0;
    plVar7[5] = lVar5;
    *param_1 = FUN_10b1f53dc;
    param_1[1] = &PTR_FUN_110cc4c50;
    param_1[2] = plVar7;
    uStack_68 = 0;
    FUN_10b1f634c(&ppuStack_70);
    func_0x00010b1f4d10(&lStack_b0);
  }
  FUN_10b132f74();
  func_0x00010b1f6520(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1f4d10(&lStack_b0);
  plVar7 = &lStack_80;
  FUN_10b132f74();
  func_0x00010b1f6570();
  plVar8 = plVar7;
  plVar12 = plVar10;
  func_0x00010b1f6578();
  lVar6 = (long)plVar8 + 0x19;
  uStack_120 = extraout_x8_00;
  FUN_10b1f4cac(&lStack_230);
  if ((lStack_230 != 0) && (((int)plVar10 == 0 || ((*(byte *)(plVar7 + 3) & 1) == 0)))) {
    __ZNSt3__16chrono12system_clock3nowEv();
    in_ZR = lVar6 == plVar7[4];
    if (plVar7[4] <= lVar6) {
      uStack_180 = 0x10b1f6384;
      ppuStack_178 = &PTR_DAT_110cc4c68;
      bVar1 = *(byte *)(plVar7 + 5);
      plStack_170 = plVar7;
      lStack_168 = lVar6;
      FUN_10b2029a0();
      lVar6 = lVar6 + 0x60;
      FUN_10b1e72c8();
      bVar13 = 0;
      lStack_240 = lVar6;
      plStack_238 = plVar12;
      while (lStack_240 != 0) {
        if (((int)plVar10 != 0) && (in_ZR = (char)plVar7[3] == '\x01', (bool)in_ZR)) {
          func_0x000107c29f40(&uStack_180);
          goto LAB_10b1f4bf8;
        }
        iVar2 = *(int *)((long)plStack_238 + 0x54);
        iVar3 = (int)plStack_238[7];
        in_ZR = iVar2 < 1 && iVar3 == 1;
        if (0 < iVar2 || 0 < iVar3) {
          if (iVar2 < 1) {
            uStack_250 = uStack_250 & 0xffffffffffffff00;
          }
          else {
            uStack_250 = (long)iVar2 * 1000;
          }
          uStack_248 = iVar2 >= 1;
          lStack_258 = (long)*(int *)((long)plStack_238 + 4);
          in_ZR = iVar3 == 1;
          if (iVar3 < 1) {
            if ((bVar1 & 1) == 0) {
              uStack_260 = (undefined4)*plStack_238;
              uStack_25c = 1;
              pcStack_1b0 = FUN_10b1fc91c;
              uStack_1a8 = 0;
              auStack_1c8[0] = 0;
              uStack_1b8 = 0;
              ppcStack_1a0 = &pcStack_1b0;
              puStack_198 = &uStack_250;
              puStack_190 = &uStack_260;
              plStack_188 = &lStack_258;
              pcStack_150 = FUN_10b1f6440;
              ppuStack_148 = &PTR_FUN_110cc4c98;
              pppcStack_140 = &ppcStack_1a0;
              func_0x00010bccc554(*plVar7,&pcStack_150,"",0);
              func_0x00010b1f6588();
              abStack_228[0] = 1;
              uStack_1d0 = 0;
              pbVar9 = abStack_228;
              func_0x00010b1dd05c();
              bVar13 = *pbVar9 | bVar13;
              FUN_10b1dd074(abStack_228);
              FUN_10b1b78d0(auStack_1c8);
            }
          }
          else {
            in_ZR = *(char *)((long)plStack_238 + 0x5d) == '\x01';
            if ((bool)in_ZR) {
              func_0x00010b1f65e8(*plVar7);
              FUN_10b1f4d3c();
            }
            else {
              func_0x00010b1f65e8(*plVar7);
              FUN_10b1f4d3c();
            }
          }
        }
        FUN_10b1e734c(&lStack_240);
      }
      if (((bVar1 ^ 1) & bVar13 & 1) != 0) {
        *(undefined1 *)(plVar7 + 5) = 1;
      }
LAB_10b1f4bf8:
      func_0x000107c281f0(&uStack_180);
    }
  }
  plVar10 = &lStack_230;
  FUN_10b132f74();
  func_0x00010b1f6520(uStack_120);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b1dd074(abStack_228);
    FUN_10b1b78d0(auStack_1c8);
    func_0x000107c281f0(&uStack_180);
    FUN_10b132f74(&lStack_230);
    __Unwind_Resume(plVar10);
    func_0x000104bd46a0();
    plVar7 = plVar10;
    func_0x000107315604();
    if ((int)plVar7 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)0x30;
      __Znwm();
      *puVar11 = FUN_10b1f4e70;
      puVar11[1] = &PTR_DAT_110cc4c10;
      puVar11[2] = plVar10;
    }
    *extraout_x8_01 = puVar11;
    return;
  }
  return;
}



/* Entry: 10b1f495c; end: 10b1f4cab;  */

void FUN_10b1f495c(undefined8 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 in_ZR;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  byte bVar10;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined1 uStack_198;
  long lStack_190;
  undefined4 *puStack_188;
  long lStack_180;
  byte abStack_178 [88];
  undefined4 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  code **ppcStack_f0;
  ulong *puStack_e8;
  undefined4 *puStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code ***pppcStack_90;
  undefined8 uStack_70;
  
  puVar8 = param_1;
  puVar9 = param_2;
  func_0x00010b1f6578();
  lVar4 = (long)puVar8 + 0x19;
  uStack_70 = extraout_x8;
  FUN_10b1f4cac(&lStack_180);
  if ((lStack_180 != 0) && (((int)param_2 == 0 || ((*(byte *)(param_1 + 3) & 1) == 0)))) {
    __ZNSt3__16chrono12system_clock3nowEv();
    in_ZR = lVar4 == param_1[4];
    if ((long)param_1[4] <= lVar4) {
      uStack_d0 = 0x10b1f6384;
      ppuStack_c8 = &PTR_DAT_110cc4c68;
      bVar1 = *(byte *)(param_1 + 5);
      puStack_c0 = param_1;
      lStack_b8 = lVar4;
      FUN_10b2029a0();
      lVar4 = lVar4 + 0x60;
      FUN_10b1e72c8();
      bVar10 = 0;
      lStack_190 = lVar4;
      puStack_188 = puVar9;
      while (lStack_190 != 0) {
        if (((int)param_2 != 0) && (in_ZR = *(char *)(param_1 + 3) == '\x01', (bool)in_ZR)) {
          func_0x000107c29f40(&uStack_d0);
          goto LAB_10b1f4bf8;
        }
        iVar2 = puStack_188[0x15];
        iVar3 = puStack_188[0xe];
        in_ZR = iVar2 < 1 && iVar3 == 1;
        if (0 < iVar2 || 0 < iVar3) {
          if (iVar2 < 1) {
            uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
          }
          else {
            uStack_1a0 = (long)iVar2 * 1000;
          }
          uStack_198 = iVar2 >= 1;
          lStack_1a8 = (long)(int)puStack_188[1];
          in_ZR = iVar3 == 1;
          if (iVar3 < 1) {
            if ((bVar1 & 1) == 0) {
              uStack_1b0 = *puStack_188;
              uStack_1ac = 1;
              pcStack_100 = FUN_10b1fc91c;
              uStack_f8 = 0;
              auStack_118[0] = 0;
              uStack_108 = 0;
              ppcStack_f0 = &pcStack_100;
              puStack_e8 = &uStack_1a0;
              puStack_e0 = &uStack_1b0;
              plStack_d8 = &lStack_1a8;
              pcStack_a0 = FUN_10b1f6440;
              ppuStack_98 = &PTR_FUN_110cc4c98;
              pppcStack_90 = &ppcStack_f0;
              func_0x00010bccc554(*param_1,&pcStack_a0,"",0);
              func_0x00010b1f6588();
              abStack_178[0] = 1;
              uStack_120 = 0;
              pbVar5 = abStack_178;
              func_0x00010b1dd05c();
              bVar10 = *pbVar5 | bVar10;
              FUN_10b1dd074(abStack_178);
              FUN_10b1b78d0(auStack_118);
            }
          }
          else {
            in_ZR = *(char *)((long)puStack_188 + 0x5d) == '\x01';
            if ((bool)in_ZR) {
              func_0x00010b1f65e8(*param_1);
              FUN_10b1f4d3c();
            }
            else {
              func_0x00010b1f65e8(*param_1);
              FUN_10b1f4d3c();
            }
          }
        }
        FUN_10b1e734c(&lStack_190);
      }
      if (((bVar1 ^ 1) & bVar10 & 1) != 0) {
        *(undefined1 *)(param_1 + 5) = 1;
      }
LAB_10b1f4bf8:
      func_0x000107c281f0(&uStack_d0);
    }
  }
  plVar6 = &lStack_180;
  FUN_10b132f74();
  func_0x00010b1f6520(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b1dd074(abStack_178);
    FUN_10b1b78d0(auStack_118);
    func_0x000107c281f0(&uStack_d0);
    FUN_10b132f74(&lStack_180);
    __Unwind_Resume(plVar6);
    func_0x000104bd46a0();
    plVar7 = plVar6;
    func_0x000107315604();
    if ((int)plVar7 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)0x30;
      __Znwm();
      *puVar8 = FUN_10b1f4e70;
      puVar8[1] = &PTR_DAT_110cc4c10;
      puVar8[2] = plVar6;
    }
    *extraout_x8_00 = puVar8;
    return;
  }
  return;
}



/* Entry: 10b1f4cac; end: 10b1f4d3b;  */

void FUN_10b1f4cac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  uVar1 = param_2;
  func_0x000107315604(param_2,&uStack_21,1,5);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    *puVar2 = FUN_10b1f4e70;
    puVar2[1] = &PTR_DAT_110cc4c10;
    puVar2[2] = param_2;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 10b1f4d3c; end: 10b1f4e6f;  */

void FUN_10b1f4d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code **ppcVar2;
  undefined8 extraout_x8;
  undefined1 auStack_118 [88];
  int iStack_c0;
  code *apcStack_b8 [2];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010b1f6578();
  apcStack_b8[0]._0_1_ = 0;
  uStack_a8 = 0;
  puStack_90 = &uStack_a0;
  pcStack_68 = FUN_10b1f63b8;
  ppuStack_58 = &puStack_90;
  ppuStack_60 = &PTR_FUN_110cc4c80;
  ppcVar1 = &pcStack_68;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_38 = extraout_x8;
  func_0x00010bccc554();
  func_0x00010b1f65bc();
  auStack_118[0] = 1;
  iStack_c0 = 0;
  do {
    func_0x00010b1dd05c(auStack_118);
    ppcVar2 = ppcVar1;
    do {
      FUN_10b1dd074(auStack_118);
      FUN_10b1b78d0(apcStack_b8);
      func_0x00010b1f6520(uStack_38);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      FUN_10b1dd074(auStack_118);
      ppcVar1 = apcStack_b8;
      FUN_10b1b78d0();
      do {
        func_0x00010b1f6570();
      } while ((int)ppcVar2 == 0);
      func_0x00010b1f65bc();
      if ((int)ppcVar2 != 2) {
        func_0x000104bd46a0();
        *ppcVar1[2] = (code)0x0;
        return;
      }
      ___cxa_begin_catch();
      func_0x00010b1dd024(auStack_118);
      ___cxa_end_catch();
      in_ZR = iStack_c0 == 1;
      if (!(bool)in_ZR) break;
      func_0x00010b1dd040(auStack_118);
      in_ZR = iStack_c0 == 1;
      ppcVar2 = ppcVar1;
    } while ((bool)in_ZR);
  } while( true );
}



/* Entry: 10b1f4e70; end: 10b1f4e93;  */

void FUN_10b1f4e70(long param_1)

{
  **(undefined1 **)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b1f4e94; end: 10b1f4f37;  */

void FUN_10b1f4e94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *param_1 = *param_2;
    param_1[2] = uVar4;
    param_1[1] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = uVar2;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x00010b1f6540();
  return;
}



/* Entry: 10b1f4f38; end: 10b1f4f63;  */

long FUN_10b1f4f38(long param_1,long param_2)

{
  func_0x000107c27b9c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 10b1f4f64; end: 10b1f4f77;  */

void FUN_10b1f4f64(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_50 [32];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (func_0x000107c3141c(), (int)lVar3 != 0)) {
    FUN_10b1f504c(auStack_50,*plVar2);
    FUN_10b1f4ff0(plVar2 + 1,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    return;
  }
  plVar1 = plVar2 + 1;
  if ((char)plVar2[5] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(plVar1 + 4) = 0;
  }
  return;
}



/* Entry: 10b1f4f78; end: 10b1f4fef;  */

void FUN_10b1f4f78(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_10b1f504c(auStack_40,*param_1);
    FUN_10b1f4ff0(param_1 + 1,auStack_40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(plVar1 + 4) = 0;
  }
  return;
}


