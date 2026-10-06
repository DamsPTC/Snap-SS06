/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e5b674; end: 106e5b6f7;  */

void FUN_106e5b674(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined8 extraout_x11;
  undefined8 *unaff_x19;
  ulong uVar7;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  uVar2 = 0x3ffffffffffffff6 < param_4;
  cVar3 = SBORROW8(param_4,0x3ffffffffffffff7);
  cVar4 = (long)(param_4 + 0xc000000000000009) < 0;
  uVar5 = param_4 == 0x3ffffffffffffff7;
  if (!(bool)uVar2) {
    uVar7 = param_4;
    func_0x000106e5e2f0();
    puVar6 = unaff_x19;
    if (uVar7 < 5) {
      *(char *)((long)unaff_x19 + 0x17) = (char)param_4;
    }
    else {
      uVar7 = 7;
      if ((param_4 | 1) != 5) {
        uVar7 = (param_4 | 1) + 1;
      }
      func_0x0001057f96c8();
      unaff_x19[1] = param_4;
      unaff_x19[2] = uVar7 | 0x8000000000000000;
      *unaff_x19 = puVar6;
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x000106e5e8f8(puVar6);
    }
    *(undefined4 *)((long)puVar6 + (param_3 - unaff_x20)) = 0;
    return;
  }
  func_0x0001057f96b4();
  uVar7 = param_3 - param_2;
  func_0x000106e5e77c();
  if (!(bool)uVar2) {
    func_0x000106e5ea50();
    if ((bool)uVar2 && !(bool)uVar5) {
      func_0x000106e5e75c();
      func_0x0001057f96c8();
      func_0x000106e5ea28();
    }
    else {
      *(char *)(unaff_x20 + 0x17) = (char)(uVar7 >> 2);
    }
    if (unaff_x22 != unaff_x21) {
      func_0x000106e5e360();
      _memmove();
    }
    *(undefined4 *)(unaff_x20 + uVar7) = 0;
    return;
  }
  func_0x0001057f96b4();
  func_0x000106e5e578();
  func_0x000106e5e554();
  FUN_106e5b6f8();
  func_0x000106e5e17c(*(undefined8 *)(uVar7 + 0x10));
  uVar1 = extraout_x11;
  if (cVar4 == cVar3) {
    uVar1 = extraout_x8;
  }
  func_0x000106e5e238(uVar1);
  (*extraout_x9)();
  func_0x000106e5e2ac();
  return;
}



/* Entry: 106e5b6f8; end: 106e5b763;  */

void FUN_106e5b6f8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined8 extraout_x11;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  uVar2 = param_3 - param_2;
  func_0x000106e5e77c();
  if (!(bool)in_CY) {
    func_0x000106e5ea50();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x000106e5e75c();
      func_0x0001057f96c8();
      func_0x000106e5ea28();
    }
    else {
      *(char *)(unaff_x20 + 0x17) = (char)(uVar2 >> 2);
    }
    if (unaff_x22 != unaff_x21) {
      func_0x000106e5e360();
      _memmove();
    }
    *(undefined4 *)(unaff_x20 + uVar2) = 0;
    return;
  }
  func_0x0001057f96b4();
  func_0x000106e5e578();
  func_0x000106e5e554();
  FUN_106e5b6f8();
  func_0x000106e5e17c(*(undefined8 *)(uVar2 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x000106e5e238(uVar1);
  (*extraout_x9)();
  func_0x000106e5e2ac();
  return;
}



/* Entry: 106e5b764; end: 106e5b7af;  */

void FUN_106e5b764(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined8 extraout_x11;
  long unaff_x19;
  
  func_0x000106e5e578();
  func_0x000106e5e554();
  FUN_106e5b6f8();
  func_0x000106e5e17c(*(undefined8 *)(unaff_x19 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x000106e5e238(uVar1);
  (*extraout_x9)();
  func_0x000106e5e2ac();
  return;
}



/* Entry: 106e5b7b0; end: 106e5b8eb;  */

long * FUN_106e5b7b0(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000106e5e2f0();
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar14 = unaff_x20[1];
    uVar13 = *unaff_x20;
    puVar9[2] = unaff_x20[2];
    puVar9[1] = uVar14;
    *puVar9 = uVar13;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    uVar14 = unaff_x20[4];
    uVar13 = unaff_x20[3];
    puVar9[5] = unaff_x20[5];
    puVar9[4] = uVar14;
    puVar9[3] = uVar13;
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
    unaff_x20[3] = 0;
    puVar9 = puVar9 + 6;
LAB_106e5b8d8:
    unaff_x19[1] = (long)puVar9;
    return param_1;
  }
  lVar7 = (long)puVar9 - *unaff_x19;
  uVar1 = lVar7 / 0x30 + 1;
  if (uVar1 < 0x555555555555556) {
    uVar5 = (param_1[2] - *unaff_x19) / 0x30;
    uVar6 = uVar5 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar5) {
      uVar6 = 0x555555555555555;
    }
    if (uVar6 < 0x555555555555556) {
      lVar3 = uVar6 * 0x30;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar7);
      uVar13 = *unaff_x20;
      puVar2[1] = unaff_x20[1];
      *puVar2 = uVar13;
      puVar2[2] = unaff_x20[2];
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      uVar13 = unaff_x20[3];
      puVar2[4] = unaff_x20[4];
      puVar2[3] = uVar13;
      puVar2[5] = unaff_x20[5];
      unaff_x20[2] = 0;
      unaff_x20[3] = 0;
      unaff_x20[4] = 0;
      unaff_x20[5] = 0;
      puVar9 = puVar2 + 6;
      lVar7 = *unaff_x19;
      plVar8 = puVar2 + ((unaff_x19[1] - lVar7) / -0x30) * 6;
      param_1 = plVar8;
      _memcpy(plVar8,lVar7);
      *unaff_x19 = (long)plVar8;
      unaff_x19[1] = (long)puVar9;
      unaff_x19[2] = lVar3 + uVar6 * 0x30;
      if (lVar7 != 0) {
        func_0x000106e5e6cc();
      }
      goto LAB_106e5b8d8;
    }
  }
  else {
    FUN_106e5b8ec();
  }
  func_0x000104bd35f4();
  func_0x000106e5e118();
  func_0x000106e5e868();
  plVar8 = (long *)param_1[1];
  if (plVar8 < (long *)param_1[2]) {
    plVar12 = plVar8 + 1;
    *plVar8 = lVar7;
  }
  else {
    lVar3 = *unaff_x19;
    lVar10 = (long)plVar8 - lVar3;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_106e5b9c0();
LAB_106e5b9bc:
      func_0x000104bd35f4();
      func_0x000106e5e118();
      *param_1 = (long)&PTR_DAT_110980518;
      if (param_1[1] != 0) {
        func_0x000106e5e9b0();
      }
      return param_1;
    }
    uVar5 = param_1[2] - lVar3;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_106e5b9bc;
      lVar4 = uVar6 << 3;
      __Znwm();
    }
    plVar8 = (long *)(lVar4 + lVar10);
    plVar11 = plVar8 + -(lVar10 >> 3);
    plVar12 = plVar8 + 1;
    *plVar8 = lVar7;
    param_1 = plVar11;
    _memcpy(plVar11,lVar3,lVar10);
    *unaff_x19 = (long)plVar11;
    unaff_x19[1] = (long)plVar12;
    unaff_x19[2] = lVar4 + uVar6 * 8;
    if (lVar3 != 0) {
      func_0x000106e5e6cc();
    }
  }
  unaff_x19[1] = (long)plVar12;
  return param_1;
}



/* Entry: 106e5b8ec; end: 106e5b8f7;  */

undefined8 * FUN_106e5b8ec(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  func_0x000106e5e118();
  func_0x000106e5e868();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = unaff_x21;
  }
  else {
    lVar6 = *unaff_x19;
    lVar7 = (long)puVar2 - lVar6;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_106e5b9c0();
LAB_106e5b9bc:
      func_0x000104bd35f4();
      func_0x000106e5e118();
      *param_1 = &PTR_DAT_110980518;
      if (param_1[1] != 0) {
        func_0x000106e5e9b0();
      }
      return param_1;
    }
    uVar4 = (long)param_1[2] - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_106e5b9bc;
      lVar3 = uVar5 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar7);
    puVar8 = puVar2 + -(lVar7 >> 3);
    puVar9 = puVar2 + 1;
    *puVar2 = unaff_x21;
    param_1 = puVar8;
    _memcpy(puVar8,lVar6,lVar7);
    *unaff_x19 = (long)puVar8;
    unaff_x19[1] = (long)puVar9;
    unaff_x19[2] = lVar3 + uVar5 * 8;
    if (lVar6 != 0) {
      func_0x000106e5e6cc();
    }
  }
  unaff_x19[1] = (long)puVar9;
  return param_1;
}



/* Entry: 106e5b8f8; end: 106e5b9bf;  */

undefined8 * FUN_106e5b8f8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  func_0x000106e5e868();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = unaff_x21;
  }
  else {
    lVar6 = *unaff_x19;
    lVar7 = (long)puVar2 - lVar6;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_106e5b9c0();
LAB_106e5b9bc:
      func_0x000104bd35f4();
      func_0x000106e5e118();
      *param_1 = &PTR_DAT_110980518;
      if (param_1[1] != 0) {
        func_0x000106e5e9b0();
      }
      return param_1;
    }
    uVar4 = (long)param_1[2] - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_106e5b9bc;
      lVar3 = uVar5 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar7);
    puVar8 = puVar2 + -(lVar7 >> 3);
    puVar9 = puVar2 + 1;
    *puVar2 = unaff_x21;
    param_1 = puVar8;
    _memcpy(puVar8,lVar6,lVar7);
    *unaff_x19 = (long)puVar8;
    unaff_x19[1] = (long)puVar9;
    unaff_x19[2] = lVar3 + uVar5 * 8;
    if (lVar6 != 0) {
      func_0x000106e5e6cc();
    }
  }
  unaff_x19[1] = (long)puVar9;
  return param_1;
}



/* Entry: 106e5b9c0; end: 106e5b9cb;  */

undefined8 * FUN_106e5b9c0(undefined8 *param_1)

{
  func_0x000106e5e118();
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5b9cc; end: 106e5b9cf;  */

undefined8 * FUN_106e5b9cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5b9d0; end: 106e5b9e3;  */

void FUN_106e5b9d0(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5b9e4; end: 106e5ba0f;  */

void FUN_106e5b9e4(long param_1,undefined4 *param_2)

{
  *param_2 = 0xfffffc1e;
  *(undefined8 *)(*(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x10) - 1) * 0x18) =
       *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 106e5ba10; end: 106e5ba23;  */

void FUN_106e5ba10(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5ba24; end: 106e5ba93;  */

void FUN_106e5ba24(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  *param_2 = 0xfffffc1e;
  lVar1 = *(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x10) - 1) * 0x18;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 106e5ba94; end: 106e5bb8f;  */

void FUN_106e5ba94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = param_1;
  func_0x000106e5e3bc();
  lVar6 = param_1[7];
  uVar5 = *(undefined8 *)(lVar6 + 8);
  *puVar2 = &PTR_DAT_1109804a0;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar6 + 8) = 0;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  iVar1 = *(int *)(param_1 + 4);
  uVar5 = *(undefined8 *)(param_4 + 8);
  *puVar3 = &PTR_FUN_110980938;
  puVar3[1] = uVar5;
  puVar3[2] = puVar2;
  puVar3[3] = param_2;
  puVar3[4] = param_3;
  *(int *)(puVar3 + 5) = iVar1;
  *(undefined4 *)((long)puVar3 + 0x2c) = param_5;
  *(undefined4 *)(puVar3 + 6) = param_6;
  *(undefined1 *)((long)puVar3 + 0x34) = param_7;
  *(undefined8 *)(param_4 + 8) = 0;
  puVar4 = puVar3;
  func_0x000106e5e3bc();
  *puVar4 = &PTR_DAT_1109809c8;
  puVar4[1] = puVar3;
  *(undefined8 **)(lVar6 + 8) = puVar4;
  param_1[7] = puVar2;
  *(undefined8 **)(param_4 + 8) = puVar3;
  *(int *)(param_1 + 4) = iVar1 + 1;
  return;
}



/* Entry: 106e5bb90; end: 106e5bc27;  */

undefined8 * FUN_106e5bb90(long param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != param_3) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x000106e5e958(uVar1,*(undefined4 *)param_2);
    if ((int)uVar1 != -1) {
      while( true ) {
        param_2 = (undefined8 *)((long)param_2 + 4);
        *param_4 = (int)uVar1;
        if (param_2 == param_3) break;
        puVar2 = *(undefined8 **)(param_1 + 8);
        func_0x000106e5e958(puVar2,*(undefined4 *)param_2);
        if ((int)puVar2 == -1) {
          return param_2;
        }
        if (0xccccccb < *param_4) {
          FUN_10688ac98();
          *puVar2 = &PTR_DAT_110980998;
          if (puVar2[2] != 0) {
            func_0x000106e5e9b0();
          }
          *puVar2 = &PTR_DAT_110980518;
          if (puVar2[1] != 0) {
            func_0x000106e5e9b0();
          }
          return puVar2;
        }
        uVar1 = (ulong)(uint)((int)puVar2 + *param_4 * 10);
      }
    }
  }
  return param_2;
}



/* Entry: 106e5bc28; end: 106e5bc2b;  */

undefined8 * FUN_106e5bc28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980998;
  if (param_1[2] != 0) {
    func_0x000106e5e9b0();
  }
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5bc2c; end: 106e5bc3f;  */

void FUN_106e5bc2c(void)

{
  FUN_106e5bd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5bc40; end: 106e5bd0b;  */

void FUN_106e5bc40(long param_1,int *param_2)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  
  puVar1 = (ulong *)(*(long *)(param_2 + 0xe) + (ulong)*(uint *)(param_1 + 0x28) * 0x10);
  if (*param_2 == -0x3df) {
    uVar6 = *puVar1 + 1;
    *puVar1 = uVar6;
    bVar5 = uVar6 < *(ulong *)(param_1 + 0x20);
    if (bVar5 && *(ulong *)(param_1 + 0x18) <= uVar6) {
      bVar5 = puVar1[1] != *(ulong *)(param_2 + 4);
    }
    if (bVar5 && *(ulong *)(param_1 + 0x18) <= uVar6) {
LAB_106e5e8e4:
      *param_2 = -0x3e0;
      return;
    }
    *param_2 = -0x3e2;
    if (bVar5) {
LAB_106e5bccc:
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
      iVar2 = *(int *)(param_1 + 0x2c);
      *(undefined8 *)(*(long *)(param_2 + 0xe) + (ulong)*(uint *)(param_1 + 0x28) * 0x10 + 8) =
           *(undefined8 *)(param_2 + 4);
      uVar6 = (ulong)(iVar2 - 1);
      uVar3 = *(undefined8 *)(param_2 + 6);
      puVar4 = (undefined1 *)(*(long *)(param_2 + 8) + uVar6 * 0x18 + 0x10);
      for (lVar7 = (*(int *)(param_1 + 0x30) - 1) - uVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined8 *)(puVar4 + -0x10) = uVar3;
        *(undefined8 *)(puVar4 + -8) = uVar3;
        *puVar4 = 0;
        puVar4 = puVar4 + 0x18;
      }
      return;
    }
  }
  else {
    *puVar1 = 0;
    lVar7 = *(long *)(param_1 + 0x20);
    if ((lVar7 != 0) && (*(long *)(param_1 + 0x18) == 0)) goto LAB_106e5e8e4;
    *param_2 = -0x3e2;
    if (lVar7 != 0) goto LAB_106e5bccc;
  }
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* Entry: 106e5bd0c; end: 106e5bd1f;  */

void FUN_106e5bd0c(void)

{
  FUN_106e5bd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5bd20; end: 106e5bd53;  */

undefined8 * FUN_106e5bd20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980998;
  if (param_1[2] != 0) {
    func_0x000106e5e9b0();
  }
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5bd54; end: 106e5bdb7;  */

void FUN_106e5bd54(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined8 *)(*(long *)(param_2 + 0x38) + (ulong)*(uint *)(param_1 + 0x28) * 0x10 + 8) =
       *(undefined8 *)(param_2 + 0x10);
  uVar4 = (ulong)(iVar1 - 1);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  puVar3 = (undefined1 *)(*(long *)(param_2 + 0x20) + uVar4 * 0x18 + 0x10);
  for (lVar5 = (*(int *)(param_1 + 0x30) - 1) - uVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(puVar3 + -0x10) = uVar2;
    *(undefined8 *)(puVar3 + -8) = uVar2;
    *puVar3 = 0;
    puVar3 = puVar3 + 0x18;
  }
  return;
}



/* Entry: 106e5bdb8; end: 106e5bdcb;  */

void FUN_106e5bdb8(void)

{
  FUN_106e5bd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5bdcc; end: 106e5be07;  */

void FUN_106e5bdcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xfffffc20;
  return;
}



/* Entry: 106e5be08; end: 106e5c0fb;  */

/* WARNING: Removing unreachable block (ram,0x000106e5bfc8) */
/* WARNING: Removing unreachable block (ram,0x000106e5bfd0) */

int * FUN_106e5be08(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 extraout_x9;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x23;
  int *piVar3;
  int *piVar4;
  
  func_0x000106e5e79c();
  do {
    piVar3 = unaff_x23;
    if (piVar3 == unaff_x19) {
      return piVar3;
    }
    unaff_x23 = piVar3 + 1;
    iVar2 = *piVar3;
    if ((unaff_x23 == unaff_x19) && (iVar2 == 0x24)) goto LAB_106e5be64;
    if (iVar2 - 0x2eU < 0x2f && (1L << ((ulong)(iVar2 - 0x2eU) & 0x3f) & 0x600000000001U) != 0) {
      if ((unaff_x23 == unaff_x19) || (iVar2 != 0x5c)) {
        if (iVar2 != 0x2e) goto LAB_106e5be64;
        param_1 = unaff_x20;
        FUN_106e5c0fc();
      }
      else if ((*unaff_x23 - 0x24U < 0x3b) &&
              ((1L << ((ulong)(*unaff_x23 - 0x24U) & 0x3f) & 0x580000000000441U) != 0)) {
        func_0x000106e5e970();
        unaff_x23 = piVar3 + 2;
      }
      else {
LAB_106e5be64:
        func_0x000106e5e360();
        FUN_106e58f6c();
        unaff_x23 = param_1;
      }
    }
    else {
      func_0x000106e5e970();
    }
    if (piVar3 == unaff_x23 && unaff_x23 + 1 != unaff_x19) {
      piVar4 = unaff_x23;
      if (*unaff_x23 == 0x5c) {
        lVar1 = 8;
        if (unaff_x23[1] != 0x28) {
          lVar1 = 0;
        }
        piVar4 = (int *)((long)unaff_x23 + lVar1);
      }
      if (piVar4 == piVar3) {
        if (*unaff_x23 == 0x5c) {
          param_1 = unaff_x20;
          FUN_106e5c17c();
          lVar1 = 8;
          if ((int)param_1 == 0) {
            lVar1 = 0;
          }
          unaff_x23 = (int *)((long)unaff_x23 + lVar1);
        }
        goto LAB_106e5bef4;
      }
      FUN_106e59914();
      unaff_x23 = unaff_x20;
      FUN_106e5be08();
      if (((unaff_x23 != unaff_x19 && unaff_x23 + 1 != unaff_x19) && (*unaff_x23 == 0x5c)) &&
         (unaff_x23[1] == 0x29)) {
        unaff_x23 = unaff_x23 + 2;
        param_1 = unaff_x20;
        func_0x000106e5e898();
        goto LAB_106e5bef4;
      }
      FUN_106888248();
      goto LAB_106e5c0f4;
    }
LAB_106e5bef4:
    if (unaff_x23 == piVar3) {
      return piVar3;
    }
    if (unaff_x23 != unaff_x19) {
      if (*unaff_x23 == 0x2a) {
        param_1 = unaff_x20;
        func_0x000106e5e700();
        unaff_x23 = unaff_x23 + 1;
      }
      else if (((unaff_x23 + 1 != unaff_x19) && (*unaff_x23 == 0x5c)) && (unaff_x23[1] == 0x7b)) {
        piVar4 = unaff_x23 + 2;
        func_0x000106e5e76c();
        FUN_106e5bb90();
        unaff_x23 = param_1;
        if (param_1 == piVar4) goto LAB_106e5c0f8;
        if (param_1 == unaff_x19) {
LAB_106e5c0f4:
          FUN_10688acc0();
LAB_106e5c0f8:
          FUN_10688ac98();
          func_0x000106e5e3bc();
          func_0x000106e5ea64();
          *(undefined ***)unaff_x23 = &PTR_FUN_110980aa0;
          *(undefined8 *)(unaff_x23 + 2) = extraout_x9;
          func_0x000106e5e850();
          return unaff_x23;
        }
        if (*param_1 == 0x2c) {
          func_0x000106e5e6d4();
          FUN_106e5bb90();
          unaff_x23 = param_1;
          FUN_106e5c1cc();
          if (unaff_x23 == param_1) goto LAB_106e5c0f4;
          param_1 = unaff_x20;
          func_0x000106e5e700();
        }
        else {
          FUN_106e5c1cc();
          if (unaff_x23 == param_1) goto LAB_106e5c0f4;
          param_1 = unaff_x20;
          FUN_106e5ba94();
        }
      }
    }
    if (unaff_x23 == piVar3) {
      return piVar3;
    }
  } while( true );
}



/* Entry: 106e5c0fc; end: 106e5c12b;  */

void FUN_106e5c0fc(undefined8 *param_1)

{
  undefined8 extraout_x9;
  
  func_0x000106e5e3bc();
  func_0x000106e5ea64();
  *param_1 = &PTR_FUN_110980aa0;
  param_1[1] = extraout_x9;
  func_0x000106e5e850();
  return;
}



/* Entry: 106e5c12c; end: 106e5c12f;  */

undefined8 * FUN_106e5c12c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5c130; end: 106e5c143;  */

void FUN_106e5c130(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5c144; end: 106e5c17b;  */

void FUN_106e5c144(long param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_2 + 4);
  if ((piVar1 == *(int **)(param_2 + 6)) || (*piVar1 == 0)) {
    uVar2 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    *param_2 = 0xfffffc1d;
    *(int **)(param_2 + 4) = piVar1 + 1;
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_2 + 0x14) = uVar2;
  return;
}



/* Entry: 106e5c17c; end: 106e5c1cb;  */

int * FUN_106e5c17c(long param_1)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  func_0x000106e5e958();
  uVar2 = (uint)piVar3 - 1;
  if (uVar2 < 9) {
    if (*(uint *)(param_1 + 0x1c) < (uint)piVar3) {
      piVar4 = piVar3;
      FUN_106888e94();
      if ((piVar3 != piVar4 && piVar3 + 1 != piVar4) && (*piVar3 == 0x5c)) {
        lVar1 = 8;
        if (piVar3[1] != 0x7d) {
          lVar1 = 0;
        }
        return (int *)((long)piVar3 + lVar1);
      }
      return piVar3;
    }
    FUN_106e59d5c(param_1);
  }
  return (int *)(ulong)(uVar2 < 9);
}



/* Entry: 106e5c1cc; end: 106e5c203;  */

int * FUN_106e5c1cc(int *param_1,int *param_2)

{
  long lVar1;
  
  if ((param_1 != param_2 && param_1 + 1 != param_2) && (*param_1 == 0x5c)) {
    lVar1 = 8;
    if (param_1[1] != 0x7d) {
      lVar1 = 0;
    }
    return (int *)((long)param_1 + lVar1);
  }
  return param_1;
}



/* Entry: 106e5c204; end: 106e5c24f;  */

int * FUN_106e5c204(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  long extraout_x8;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_88;
  
  piVar9 = param_2;
  FUN_106e5c250();
  if (param_1 != param_2) {
    do {
      piVar9 = param_1;
      param_1 = piVar9;
      func_0x000106e5e360();
      FUN_106e5c250();
    } while (param_1 != piVar9);
    return piVar9;
  }
  FUN_10688ad94();
  uVar10 = *(undefined8 *)(param_1 + 0xe);
  iVar2 = param_1[7];
  if (piVar9 == param_3) {
LAB_106e5c398:
    piVar6 = param_1;
    FUN_106e58f6c(param_1,piVar9,param_3);
    goto LAB_106e5c3ac;
  }
  iVar8 = *piVar9;
  uVar3 = iVar8 - 0x24;
  if (uVar3 < 0x3b) {
    if ((1L << ((ulong)uVar3 & 0x3f) & 0x5800000080004d1U) != 0) goto LAB_106e5c2b0;
    if ((ulong)uVar3 != 5) goto LAB_106e5c344;
    if (param_1[9] != 0) goto LAB_106e5c398;
LAB_106e5c350:
    lVar11 = 4;
LAB_106e5c354:
    func_0x000106e5e960();
    piVar6 = (int *)((long)piVar9 + lVar11);
  }
  else {
LAB_106e5c344:
    if (1 < iVar8 - 0x7bU) goto LAB_106e5c350;
LAB_106e5c2b0:
    piVar7 = piVar9 + 1;
    piVar6 = piVar9;
    if ((piVar7 != param_3) && (iVar8 == 0x5c)) {
      lVar11 = 8;
      uVar3 = *piVar7 - 0x24;
      if (((0x3a < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x5800000080004f1U) == 0)) &&
         (2 < *piVar7 - 0x7bU)) {
        if ((param_1[6] & 0x1f0U) == 0x40) {
          piVar6 = param_1;
          func_0x000106e5b148(param_1,piVar7,param_3,0);
        }
        else {
          piVar6 = param_1;
          FUN_106e5c17c();
          lVar11 = 8;
          if ((int)piVar6 == 0) {
            lVar11 = 0;
          }
          piVar6 = (int *)((long)piVar9 + lVar11);
        }
        if (piVar6 == piVar9) {
          iVar8 = *piVar6;
          goto LAB_106e5c380;
        }
        goto LAB_106e5c3ac;
      }
      goto LAB_106e5c354;
    }
LAB_106e5c380:
    if (iVar8 != 0x2e) goto LAB_106e5c398;
    FUN_106e5c0fc(param_1);
    piVar6 = piVar6 + 1;
LAB_106e5c3ac:
    if (piVar6 == piVar9 && piVar6 != param_3) {
      iVar8 = *piVar6;
      if (iVar8 == 0x24) {
        func_0x000106e57efc(param_1);
      }
      else if (iVar8 == 0x28) {
        FUN_106e59914(param_1);
        param_1[9] = param_1[9] + 1;
        piVar7 = param_1;
        FUN_106e57560(param_1,piVar6 + 1,param_3);
        bVar4 = piVar7 == param_3;
        if ((bVar4) || (func_0x000106e5e78c(), !bVar4)) {
          FUN_106888248();
          func_0x000106e5acec();
          return piVar7;
        }
        func_0x000106e5e898(param_1);
        param_1[9] = param_1[9] + -1;
      }
      else {
        if (iVar8 != 0x5e) goto LAB_106e5c43c;
        FUN_106e57ec4(param_1);
      }
      piVar6 = piVar6 + 1;
    }
LAB_106e5c43c:
    if (piVar6 == piVar9) {
      return piVar6;
    }
  }
  iVar8 = param_1[7];
  if (piVar6 == param_3) {
    return piVar6;
  }
  uVar3 = param_1[6] & 0x1f0;
  iVar1 = *piVar6;
  if (iVar1 != 0x7b) {
    if (iVar1 == 0x2b) {
      piVar9 = piVar6 + 1;
      bVar4 = uVar3 != 0 || piVar9 == param_3;
      if ((bVar4) || (func_0x000106e5e838(), !bVar4)) {
        lVar11 = 1;
LAB_106e57dbc:
        func_0x000106e5ba74(param_1,lVar11,uVar10,iVar2 + 1,iVar8 + 1);
        return piVar9;
      }
      piVar6 = piVar6 + 2;
      lVar11 = 1;
LAB_106e57d04:
      func_0x000106e5ba54(param_1,lVar11,uVar10,iVar2 + 1,iVar8 + 1);
      return piVar6;
    }
    if (iVar1 != 0x3f) {
      if (iVar1 != 0x2a) {
        return piVar6;
      }
      piVar9 = piVar6 + 1;
      if (((uVar3 != 0) || (bVar4 = piVar9 == param_3, bVar4)) || (func_0x000106e5e838(), !bVar4)) {
        lVar11 = 0;
        goto LAB_106e57dbc;
      }
      piVar6 = piVar6 + 2;
      lVar11 = 0;
      goto LAB_106e57d04;
    }
    piVar9 = piVar6 + 1;
    if (((uVar3 != 0) || (bVar4 = piVar9 == param_3, bVar4)) || (func_0x000106e5e838(), !bVar4)) {
      func_0x000106e5e350();
      goto LAB_106e57e34;
    }
    func_0x000106e5e350();
LAB_106e57d9c:
    piVar9 = piVar6 + 2;
LAB_106e57e34:
    FUN_106e5ba94();
    return piVar9;
  }
  piVar9 = piVar6 + 1;
  piVar6 = param_1;
  func_0x000106e5e6e0();
  uVar5 = piVar6 == piVar9;
  if (!(bool)uVar5) {
    uVar5 = 1;
    if (piVar6 == param_3) goto LAB_106e57ec0;
    if (*piVar6 == 0x2c) {
      piVar9 = piVar6 + 1;
      uVar5 = piVar9 == param_3;
      if (!(bool)uVar5) {
        if (*piVar9 == 0x7d) {
          piVar9 = piVar6 + 2;
          if (((uVar3 != 0) || (bVar4 = piVar9 == param_3, bVar4)) ||
             (func_0x000106e5e838(), !bVar4)) {
            lVar11 = (long)uStack_88._4_4_;
            goto LAB_106e57dbc;
          }
          piVar6 = piVar6 + 3;
          lVar11 = (long)uStack_88._4_4_;
          goto LAB_106e57d04;
        }
        func_0x000106e5e6e0();
        uVar5 = 1;
        if (((piVar6 == piVar9) || (uVar5 = 1, piVar6 == param_3)) ||
           (uVar5 = *piVar6 == 0x7d, !(bool)uVar5)) goto LAB_106e57ec0;
        uVar5 = uStack_88._4_4_ == -1;
        if (uStack_88 < 0) {
          piVar9 = piVar6 + 1;
          if (((uVar3 == 0) && (piVar9 != param_3)) && (piVar6[1] == 0x3f)) {
            piVar9 = piVar6 + 2;
          }
          func_0x000106e5e350();
          goto LAB_106e57e34;
        }
      }
    }
    else {
      uVar5 = false;
      if (*piVar6 == 0x7d) {
        piVar9 = piVar6 + 1;
        if (((uVar3 != 0) || (bVar4 = piVar9 == param_3, bVar4)) || (func_0x000106e5e838(), !bVar4))
        {
          func_0x000106e5e350();
          goto LAB_106e57e34;
        }
        func_0x000106e5e350();
        goto LAB_106e57d9c;
      }
    }
  }
  FUN_10688ac98();
LAB_106e57ec0:
  FUN_10688acc0();
  func_0x000106e5e2e4();
  func_0x000106e5e808();
  uVar10 = *(undefined8 *)(extraout_x8 + 8);
  *(undefined ***)piVar6 = &PTR_FUN_110980548;
  *(undefined8 *)(piVar6 + 2) = uVar10;
  *(undefined1 *)(piVar6 + 4) = uVar5;
  func_0x000106e5e850();
  return piVar6;
}



/* Entry: 106e5c250; end: 106e5c497;  */

int * FUN_106e5c250(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(param_1 + 0xe);
  iVar2 = param_1[7];
  if (param_2 == param_3) {
LAB_106e5c398:
    piVar6 = param_1;
    FUN_106e58f6c(param_1,param_2,param_3);
    goto LAB_106e5c3ac;
  }
  iVar8 = *param_2;
  uVar3 = iVar8 - 0x24;
  if (uVar3 < 0x3b) {
    if ((1L << ((ulong)uVar3 & 0x3f) & 0x5800000080004d1U) != 0) goto LAB_106e5c2b0;
    if ((ulong)uVar3 != 5) goto LAB_106e5c344;
    if (param_1[9] != 0) goto LAB_106e5c398;
LAB_106e5c350:
    lVar10 = 4;
LAB_106e5c354:
    func_0x000106e5e960();
    piVar6 = (int *)((long)param_2 + lVar10);
  }
  else {
LAB_106e5c344:
    if (1 < iVar8 - 0x7bU) goto LAB_106e5c350;
LAB_106e5c2b0:
    piVar7 = param_2 + 1;
    piVar6 = param_2;
    if ((piVar7 != param_3) && (iVar8 == 0x5c)) {
      lVar10 = 8;
      uVar3 = *piVar7 - 0x24;
      if (((0x3a < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x5800000080004f1U) == 0)) &&
         (2 < *piVar7 - 0x7bU)) {
        if ((param_1[6] & 0x1f0U) == 0x40) {
          piVar6 = param_1;
          func_0x000106e5b148(param_1,piVar7,param_3,0);
        }
        else {
          piVar6 = param_1;
          FUN_106e5c17c();
          lVar10 = 8;
          if ((int)piVar6 == 0) {
            lVar10 = 0;
          }
          piVar6 = (int *)((long)param_2 + lVar10);
        }
        if (piVar6 == param_2) {
          iVar8 = *piVar6;
          goto LAB_106e5c380;
        }
        goto LAB_106e5c3ac;
      }
      goto LAB_106e5c354;
    }
LAB_106e5c380:
    if (iVar8 != 0x2e) goto LAB_106e5c398;
    FUN_106e5c0fc(param_1);
    piVar6 = piVar6 + 1;
LAB_106e5c3ac:
    if (piVar6 == param_2 && piVar6 != param_3) {
      iVar8 = *piVar6;
      if (iVar8 == 0x24) {
        func_0x000106e57efc(param_1);
      }
      else if (iVar8 == 0x28) {
        FUN_106e59914(param_1);
        param_1[9] = param_1[9] + 1;
        piVar7 = param_1;
        FUN_106e57560(param_1,piVar6 + 1,param_3);
        bVar4 = piVar7 == param_3;
        if ((bVar4) || (func_0x000106e5e78c(), !bVar4)) {
          FUN_106888248();
          func_0x000106e5acec();
          return piVar7;
        }
        func_0x000106e5e898(param_1);
        param_1[9] = param_1[9] + -1;
      }
      else {
        if (iVar8 != 0x5e) goto LAB_106e5c43c;
        FUN_106e57ec4(param_1);
      }
      piVar6 = piVar6 + 1;
    }
LAB_106e5c43c:
    if (piVar6 == param_2) {
      return piVar6;
    }
  }
  iVar8 = param_1[7];
  if (piVar6 == param_3) {
    return piVar6;
  }
  uVar3 = param_1[6] & 0x1f0;
  iVar1 = *piVar6;
  if (iVar1 != 0x7b) {
    if (iVar1 == 0x2b) {
      piVar7 = piVar6 + 1;
      bVar4 = uVar3 != 0 || piVar7 == param_3;
      if ((bVar4) || (func_0x000106e5e838(), !bVar4)) {
        lVar10 = 1;
LAB_106e57dbc:
        func_0x000106e5ba74(param_1,lVar10,uVar9,iVar2 + 1,iVar8 + 1);
        return piVar7;
      }
      piVar6 = piVar6 + 2;
      lVar10 = 1;
LAB_106e57d04:
      func_0x000106e5ba54(param_1,lVar10,uVar9,iVar2 + 1,iVar8 + 1);
      return piVar6;
    }
    if (iVar1 != 0x3f) {
      if (iVar1 != 0x2a) {
        return piVar6;
      }
      piVar7 = piVar6 + 1;
      if (((uVar3 != 0) || (bVar4 = piVar7 == param_3, bVar4)) || (func_0x000106e5e838(), !bVar4)) {
        lVar10 = 0;
        goto LAB_106e57dbc;
      }
      piVar6 = piVar6 + 2;
      lVar10 = 0;
      goto LAB_106e57d04;
    }
    piVar7 = piVar6 + 1;
    if (((uVar3 != 0) || (bVar4 = piVar7 == param_3, bVar4)) || (func_0x000106e5e838(), !bVar4)) {
      func_0x000106e5e350();
      goto LAB_106e57e34;
    }
    func_0x000106e5e350();
LAB_106e57d9c:
    piVar7 = piVar6 + 2;
LAB_106e57e34:
    FUN_106e5ba94();
    return piVar7;
  }
  piVar7 = piVar6 + 1;
  piVar6 = param_1;
  func_0x000106e5e6e0();
  uVar5 = piVar6 == piVar7;
  if (!(bool)uVar5) {
    uVar5 = 1;
    if (piVar6 == param_3) goto LAB_106e57ec0;
    if (*piVar6 == 0x2c) {
      piVar7 = piVar6 + 1;
      uVar5 = piVar7 == param_3;
      if (!(bool)uVar5) {
        if (*piVar7 == 0x7d) {
          piVar7 = piVar6 + 2;
          if (((uVar3 != 0) || (bVar4 = piVar7 == param_3, bVar4)) ||
             (func_0x000106e5e838(), !bVar4)) {
            lVar10 = (long)uStack_58._4_4_;
            goto LAB_106e57dbc;
          }
          piVar6 = piVar6 + 3;
          lVar10 = (long)uStack_58._4_4_;
          goto LAB_106e57d04;
        }
        func_0x000106e5e6e0();
        uVar5 = 1;
        if (((piVar6 == piVar7) || (uVar5 = 1, piVar6 == param_3)) ||
           (uVar5 = *piVar6 == 0x7d, !(bool)uVar5)) goto LAB_106e57ec0;
        uVar5 = uStack_58._4_4_ == -1;
        if (uStack_58 < 0) {
          piVar7 = piVar6 + 1;
          if (((uVar3 == 0) && (piVar7 != param_3)) && (piVar6[1] == 0x3f)) {
            piVar7 = piVar6 + 2;
          }
          func_0x000106e5e350();
          goto LAB_106e57e34;
        }
      }
    }
    else {
      uVar5 = false;
      if (*piVar6 == 0x7d) {
        piVar7 = piVar6 + 1;
        if (((uVar3 != 0) || (bVar4 = piVar7 == param_3, bVar4)) || (func_0x000106e5e838(), !bVar4))
        {
          func_0x000106e5e350();
          goto LAB_106e57e34;
        }
        func_0x000106e5e350();
        goto LAB_106e57d9c;
      }
    }
  }
  FUN_10688ac98();
LAB_106e57ec0:
  FUN_10688acc0();
  func_0x000106e5e2e4();
  func_0x000106e5e808();
  uVar9 = *(undefined8 *)(extraout_x8 + 8);
  *(undefined ***)piVar6 = &PTR_FUN_110980548;
  *(undefined8 *)(piVar6 + 2) = uVar9;
  *(undefined1 *)(piVar6 + 4) = uVar5;
  func_0x000106e5e850();
  return piVar6;
}



/* Entry: 106e5c498; end: 106e5c4d3;  */

void FUN_106e5c498(void)

{
  func_0x000106e5acec();
  return;
}



/* Entry: 106e5c4d4; end: 106e5c4ff;  */

void FUN_106e5c4d4(long param_1)

{
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  
  func_0x000106e5e880();
  func_0x000106e5e9bc(PTR___ZTVNSt3__120__codecvt_utf8_utf16IwEE_110346b38);
  *(undefined8 *)(param_1 + 0x18) = unaff_x20;
  *(undefined4 *)(param_1 + 0x20) = unaff_w19;
  return;
}



/* Entry: 106e5c500; end: 106e5c503;  */

void FUN_106e5c500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17codecvtIwc11__mbstate_tED2Ev_110346880)();
  return;
}



/* Entry: 106e5c504; end: 106e5c517;  */

void FUN_106e5c504(void)

{
  __ZNSt3__17codecvtIwc11__mbstate_tED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5c518; end: 106e5c597;  */

undefined8 * FUN_106e5c518(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000106e5c56c(param_1,&UNK_10f3dc1ab);
  *(char *)(puVar1 + 2) = (char)param_2;
  puVar1[3] = 0;
  uVar2 = *puVar1;
  func_0x0001057fa6a0(uVar2,param_1[1],0,param_2);
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



/* Entry: 106e5c598; end: 106e5c5af;  */

void FUN_106e5c598(long *param_1,long param_2)

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



/* Entry: 106e5c5b0; end: 106e5c5d7;  */

void FUN_106e5c5b0(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000106e5e630();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 106e5c5d8; end: 106e5c713;  */

undefined8 FUN_106e5c5d8(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((param_5 & 0x80) != 0) {
    param_5 = param_5 & 0xffa;
  }
  plVar1 = param_4;
  FUN_106e5841c(param_4,*(int *)(param_1 + 0x1c) + 1,param_2,param_3,(param_5 & 0x800) >> 0xb);
  func_0x000106e5ea3c();
  FUN_106e5c714();
  if ((int)plVar1 == 0) {
    if ((param_2 != param_3) && ((param_5 >> 6 & 1) == 0)) {
      while( true ) {
        param_2 = param_2 + 4;
        func_0x000106e5e5a0(param_4[1]);
        func_0x000106e5ea3c();
        FUN_106e5c714();
        if (param_2 == param_3) break;
        plVar4 = (long *)*param_4;
        plVar3 = (long *)param_4[1];
        if ((int)plVar1 != 0) goto LAB_106e5c6b0;
        func_0x000106e5e5a0();
      }
      if ((int)plVar1 != 0) {
        plVar4 = (long *)*param_4;
        plVar3 = (long *)param_4[1];
LAB_106e5c6b0:
        plVar1 = param_4 + 3;
        if (plVar3 != plVar4) {
          plVar1 = plVar4;
        }
        goto LAB_106e5c6b8;
      }
    }
    uVar2 = 0;
    param_4[1] = *param_4;
  }
  else {
    plVar1 = param_4 + 3;
    if ((long *)param_4[1] != (long *)*param_4) {
      plVar1 = (long *)*param_4;
    }
LAB_106e5c6b8:
    lVar5 = *plVar1;
    param_4[7] = lVar5;
    *(bool *)(param_4 + 8) = param_4[6] != lVar5;
    lVar5 = plVar1[1];
    param_4[9] = lVar5;
    *(bool *)(param_4 + 0xb) = lVar5 != param_4[10];
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 106e5c714; end: 106e5d0a7;  */

/* WARNING: Removing unreachable block (ram,0x000106e5c834) */
/* WARNING: Removing unreachable block (ram,0x000106e5cc2c) */
/* WARNING: Removing unreachable block (ram,0x000106e58554) */
/* WARNING: Removing unreachable block (ram,0x000106e58658) */
/* WARNING: Removing unreachable block (ram,0x000106e5cff4) */
/* WARNING: Removing unreachable block (ram,0x000106e5cffc) */

long * FUN_106e5c714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined1 param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  undefined4 *puVar6;
  long extraout_x8_02;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 auStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if ((*(ushort *)(param_1 + 0x18) & 0x1f0) == 0) {
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
      func_0x000106e58f30(&uStack_78,param_2,param_3,param_4);
      return (long *)0x0;
    }
    uStack_80 = 0;
    auStack_f0[0] = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_9b = 0;
    uStack_98 = 0;
    uStack_90 = param_3;
    uStack_88 = param_3;
    func_0x000106e5e978();
    FUN_106e58c64(auStack_f0);
    lVar7 = lStack_70;
    *(undefined4 *)(lStack_70 + -0x60) = 0;
    *(undefined8 *)(lStack_70 + -0x58) = param_2;
    *(undefined8 *)(lStack_70 + -0x50) = param_2;
    *(undefined8 *)(lStack_70 + -0x48) = param_3;
    FUN_106e58878(lStack_70 + -0x40,*(undefined4 *)(param_1 + 0x1c),&uStack_90);
    func_0x000106e589b8(lVar7 + -0x28,*(undefined4 *)(param_1 + 0x20));
    *(long *)(lVar7 + -0x10) = lVar8;
    *(undefined4 *)(lVar7 + -8) = param_5;
    *(undefined1 *)(lVar7 + -4) = param_6;
    uVar3 = 0;
    uVar2 = 0;
    plVar4 = *(long **)(lVar7 + -0x10);
    if (plVar4 != (long *)0x0) {
      func_0x000106e5e9a0(*(undefined8 *)(*plVar4 + 0x10));
    }
    func_0x000106e5e71c();
    if ((bool)uVar3 && !(bool)uVar2) {
      FUN_106888720();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x106e58668);
      (*pcVar1)();
    }
                    /* WARNING: Could not recover jumptable at 0x000106e5858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10ddeec53)[extraout_x8] * 4 + 0x106e58590))();
    return plVar4;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    lStack_138 = 0;
    lStack_140 = 0;
    lStack_128 = 0;
    lStack_130 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
      func_0x000106e5d8dc(&uStack_150,&uStack_150);
      return (long *)0x0;
    }
    uStack_d0 = (ulong)uStack_d0._4_4_ << 0x20;
    func_0x000106e5e6a8();
    func_0x000106e5e924();
    func_0x000106e5e598();
    uVar5 = (lStack_128 + lStack_130) - 1;
    puVar6 = (undefined4 *)(*(long *)(lStack_148 + (uVar5 / 0x2a) * 8) + (uVar5 % 0x2a) * 0x60);
    *puVar6 = 0;
    *(undefined8 *)(puVar6 + 2) = param_2;
    *(undefined8 *)(puVar6 + 4) = param_2;
    *(undefined8 *)(puVar6 + 6) = param_3;
    func_0x000106e589b8(puVar6 + 0xe,*(undefined4 *)(param_1 + 0x20));
    uVar5 = (lStack_128 + lStack_130) - 1;
    lVar7 = *(long *)(lStack_148 + (uVar5 / 0x2a) * 8) + (uVar5 % 0x2a) * 0x60;
    *(long *)(lVar7 + 0x50) = lVar8;
    *(undefined4 *)(lVar7 + 0x58) = param_5;
    *(undefined1 *)(lVar7 + 0x5c) = param_6;
    uVar3 = 0;
    uVar2 = 0;
    uVar5 = (lStack_128 + lStack_130) - 1;
    plVar4 = *(long **)(*(long *)(lStack_148 + (uVar5 / 0x2a) * 8) + (uVar5 % 0x2a) * 0x60 + 0x50);
    if (plVar4 != (long *)0x0) {
      func_0x000106e5e9a0(*(undefined8 *)(*plVar4 + 0x10));
    }
    func_0x000106e5e71c();
    if (!(bool)uVar3 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000106e5cc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10ddeec86)[extraout_x8_02] * 4 + 0x106e5cc8c))();
      return plVar4;
    }
    FUN_106888720();
  }
  else {
    uStack_180 = 0;
    lStack_178 = 0;
    uStack_170 = 0;
    uStack_d0 = (ulong)uStack_d0._4_4_ << 0x20;
    lVar7 = 0;
    lVar9 = 0;
    func_0x000106e5e6a8();
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
      func_0x000106e5e598();
      func_0x000106e58f30(&uStack_180);
      return (long *)0x0;
    }
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    uStack_150 = (ulong)uStack_150._4_4_ << 0x20;
    *(undefined8 *)(extraout_x8_00 + 0x55) = 0;
    lStack_148 = lVar7;
    lStack_140 = lVar9;
    lStack_138 = lVar7;
    lStack_130 = lVar9;
    lStack_128 = lVar7;
    lStack_120 = lVar9;
    lStack_118 = lVar7;
    lStack_110 = lVar9;
    lStack_108 = lVar7;
    lStack_100 = lVar9;
    uStack_e8 = param_3;
    uStack_e0 = param_3;
    func_0x000106e5e8a0();
    func_0x000106e5e91c();
    lVar7 = lStack_178;
    *(undefined4 *)(lStack_178 + -0x60) = 0;
    *(undefined8 *)(lStack_178 + -0x58) = param_2;
    *(undefined8 *)(lStack_178 + -0x50) = param_2;
    *(undefined8 *)(lStack_178 + -0x48) = param_3;
    FUN_106e58878(lStack_178 + -0x40,*(undefined4 *)(param_1 + 0x1c),&uStack_e8);
    func_0x000106e589b8(lVar7 + -0x28,*(undefined4 *)(param_1 + 0x20));
    *(long *)(lVar7 + -0x10) = lVar8;
    *(undefined4 *)(lVar7 + -8) = param_5;
    *(undefined1 *)(lVar7 + -4) = param_6;
    uVar3 = 0;
    uVar2 = 0;
    plVar4 = *(long **)(lVar7 + -0x10);
    if (plVar4 != (long *)0x0) {
      func_0x000106e5e9a0(*(undefined8 *)(*plVar4 + 0x10));
    }
    func_0x000106e5e71c();
    if (!(bool)uVar3 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000106e5c86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_10ddeec72 + extraout_x8_01 * 2) * 4 + 0x106e5c870))();
      return plVar4;
    }
    FUN_106888720();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106e5d014);
  (*pcVar1)();
}



/* Entry: 106e5d0a8; end: 106e5d2f7;  */

void FUN_106e5d0a8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  func_0x000106e5e2f0();
  FUN_106e5d430();
  if (param_1 != 0) goto LAB_106e5d284;
  if ((ulong)unaff_x19[4] < 0x2a) {
    lVar1 = unaff_x19[2];
    uVar11 = lVar1 - unaff_x19[1];
    lVar13 = unaff_x19[3];
    uVar8 = lVar13 - *unaff_x19;
    if (uVar8 <= uVar11) {
      puVar9 = (undefined8 *)((long)uVar8 >> 2);
      if (lVar13 == *unaff_x19) {
        puVar9 = (undefined8 *)0x1;
      }
      plStack_90 = unaff_x19 + 3;
      FUN_106e5d73c();
      puStack_a8 = (undefined8 *)((long)puVar9 + uVar11);
      puStack_98 = puVar9 + param_2;
      puStack_b0 = puVar9;
      puStack_a0 = puStack_a8;
      func_0x000106e5e6f0();
      plStack_c0 = unaff_x19 + 5;
      uStack_b8 = 0x2a;
      puStack_c8 = puVar9;
      FUN_106e5d674(&puStack_b0);
      plVar2 = plStack_90;
      puStack_c8 = (undefined8 *)0x0;
      puVar16 = (undefined8 *)unaff_x19[2];
      puVar10 = puStack_a0;
      puVar12 = puStack_b0;
      puVar14 = puStack_a8;
      puVar15 = puStack_98;
      while (puVar7 = (undefined8 *)unaff_x19[1], puVar16 != puVar7) {
        if (puVar14 == puVar12) {
          if (puVar10 < puVar15) {
            bVar5 = puVar10 != puVar12;
            puVar7 = puVar10 + (((long)puVar15 - (long)puVar10 >> 3) + 1) / 2;
            puVar14 = (undefined8 *)((long)puVar7 - ((long)puVar10 - (long)puVar12));
            puVar10 = puVar7;
            if (bVar5) {
              func_0x000106e5e9c8();
              _memmove();
            }
          }
          else {
            puVar7 = (undefined8 *)((long)puVar15 - (long)puVar12 >> 2);
            if ((long)puVar15 - (long)puVar12 == 0) {
              puVar7 = (undefined8 *)0x1;
            }
            plStack_68 = plVar2;
            puVar6 = puVar7;
            FUN_106e5d73c();
            puStack_80 = (undefined8 *)((long)puVar6 + ((long)puVar7 * 2 + 6U & 0xfffffffffffffff8))
            ;
            puStack_70 = puVar6 + (long)puVar9;
            puStack_88 = puVar6;
            puStack_78 = puStack_80;
            func_0x000106e5e844(&puStack_88);
            FUN_106e5d714();
            puVar4 = puStack_70;
            puVar3 = puStack_78;
            puVar6 = puStack_80;
            puVar7 = puStack_88;
            puStack_88 = puVar12;
            puStack_80 = puVar14;
            puStack_78 = puVar10;
            puStack_70 = puVar15;
            func_0x000106e5d794(&puStack_88);
            puVar10 = puVar3;
            puVar12 = puVar7;
            puVar14 = puVar6;
            puVar15 = puVar4;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar14 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b0 = (undefined8 *)*unaff_x19;
      *unaff_x19 = (long)puVar12;
      unaff_x19[1] = (long)puVar14;
      puStack_98 = (undefined8 *)unaff_x19[3];
      puStack_a0 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = (long)puVar10;
      unaff_x19[3] = (long)puVar15;
      puStack_a8 = puVar7;
      func_0x000106e5d76c(&puStack_c8);
      func_0x000106e5d794(&puStack_b0);
      goto LAB_106e5d284;
    }
    func_0x000106e5e6f0();
    if (lVar13 != lVar1) {
      func_0x000106e5d534();
      goto LAB_106e5d284;
    }
    FUN_106e5d5d0();
  }
  else {
    unaff_x19[4] = unaff_x19[4] - 0x2a;
  }
  unaff_x19[1] = unaff_x19[1] + 8;
  FUN_106e5d498();
LAB_106e5d284:
  func_0x000106e5d460();
  FUN_106e58bfc();
  unaff_x19[5] = unaff_x19[5] + 1;
  return;
}



/* Entry: 106e5d2f8; end: 106e5d373;  */

void FUN_106e5d2f8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  FUN_106e58c64(*(long *)(*(long *)(param_1 + 8) + (uVar1 / 0x2a) * 8) + (uVar1 % 0x2a) * 0x60);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  uVar1 = param_1;
  FUN_106e5d430();
  if (uVar1 < 0x54) {
    return;
  }
  __ZdlPv(*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x10);
  while (lVar3 != lVar2 + -8) {
    lVar3 = lVar3 + -8;
    *(long *)(param_1 + 0x10) = lVar3;
  }
  return;
}



/* Entry: 106e5d374; end: 106e5d42f;  */

void FUN_106e5d374(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar1 = param_1;
  func_0x000106e5d7fc();
  plVar2 = param_1;
  func_0x000106e5d460();
  do {
    plVar6 = param_2 + -0x1f8;
    do {
      if (param_2 == plVar2) {
        param_1[5] = 0;
        puVar3 = (undefined8 *)param_1[1];
        while (uVar5 = param_1[2] - (long)puVar3 >> 3, 2 < uVar5) {
          __ZdlPv(*puVar3);
          puVar3 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar3;
        }
        if (uVar5 == 1) {
          lVar4 = 0x15;
        }
        else {
          if (uVar5 != 2) {
            return;
          }
          lVar4 = 0x2a;
        }
        param_1[4] = lVar4;
        return;
      }
      FUN_106e58c64(param_2);
      param_2 = param_2 + 0xc;
      plVar6 = plVar6 + 0xc;
    } while ((long *)*plVar1 != plVar6);
    plVar1 = plVar1 + 1;
    param_2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 106e5d430; end: 106e5d497;  */

long FUN_106e5d430(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x2a + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 106e5d498; end: 106e5d5cf;  */

void FUN_106e5d498(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000106e5e2f0();
  func_0x000106e5e568();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x000106e5e380();
      if (!bVar2) {
        func_0x000106e5e4fc();
      }
      func_0x000106e5e7ac();
      puVar5 = extraout_x8_00;
    }
    else {
      uVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        uVar4 = 0;
      }
      func_0x000106e5e968();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      FUN_106e5d714(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x000106e5e0d4();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 106e5d5d0; end: 106e5d673;  */

void FUN_106e5d5d0(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000106e5e2f0();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x000106e5e568();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x000106e5e98c();
      lStack_58 = lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_106e5d714(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x000106e5e0d4();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x000106e5e52c();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 106e5d674; end: 106e5d713;  */

void FUN_106e5d674(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  
  func_0x000106e5e2f0();
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == *(undefined8 **)(param_1 + 0x18)) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x000106e5e380();
      if (!bVar2) {
        func_0x000106e5e4fc();
      }
      func_0x000106e5e7ac();
      puVar5 = extraout_x8;
    }
    else {
      uVar4 = (long)((long)puVar5 - uVar1) >> 2;
      if ((long)puVar5 - uVar1 == 0) {
        uVar4 = 0;
      }
      uStack_50 = unaff_x19[4];
      func_0x000106e5e968();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      FUN_106e5d714(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x000106e5e0d4();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 106e5d714; end: 106e5d73b;  */

void FUN_106e5d714(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 106e5d73c; end: 106e5d7d3;  */

void FUN_106e5d73c(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000106e5e630();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 106e5d7d4; end: 106e5d837;  */

void FUN_106e5d7d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != lVar1 + -8) {
    lVar2 = lVar2 + -8;
    *(long *)(param_1 + 0x10) = lVar2;
  }
  return;
}



/* Entry: 106e5d838; end: 106e5d92f;  */

void FUN_106e5d838(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000106e5e2f0();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x000106e5e568();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x000106e5e98c();
      lStack_58 = lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_106e5d714(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x000106e5e0d4();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x000106e5e52c();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 106e5d930; end: 106e5d987;  */

undefined8 * FUN_106e5d930(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 2);
    puVar1 = puVar1 + 3;
    param_3 = param_3 + 3;
  }
  return param_3;
}



/* Entry: 106e5d988; end: 106e5daa7;  */

bool FUN_106e5d988(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 ******ppppppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  lVar2 = param_2[4];
  bVar4 = param_2[5] == lVar2 && param_1[5] == param_1[4];
  if (param_1[5] != param_1[4] && param_2[5] != lVar2) {
    if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
       ((int)param_1[3] == (int)param_2[3])) {
      FUN_106e5ddac(&ppppppuStack_48);
      FUN_106e5ddac(&puStack_60,lVar2);
      if (-1 < (char)bStack_31) {
        ppppppuStack_48 = &ppppppuStack_48;
        uStack_40 = (ulong)bStack_31;
      }
      uVar3 = uStack_58;
      if (-1 < (char)bStack_49) {
        puStack_60 = (undefined1 *)&puStack_60;
        uVar3 = (ulong)bStack_49;
      }
      uVar1 = uVar3;
      if (uStack_40 <= uVar3) {
        uVar1 = uStack_40;
      }
      func_0x0001057f96a4(ppppppuStack_48,puStack_60,uVar1);
      func_0x000106e5e8f0();
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(&ppppppuStack_48);
      bVar4 = uStack_40 == uVar3 && (int)ppppppuStack_48 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



/* Entry: 106e5daa8; end: 106e5dd7b;  */

ulong FUN_106e5daa8(long param_1,long param_2,long *param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined1 auStack_af [15];
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  auStack_af._0_8_ = 0;
  uStack_b7 = 0;
  uStack_b0 = 0;
  FUN_106e5c5d8(param_4,param_1,param_2,&plStack_d0);
  lVar9 = lStack_a0;
  plVar20 = plStack_d0;
  uVar5 = (lStack_c8 - (long)plStack_d0) / 0x18;
  puVar4 = (undefined8 *)*param_3;
  puVar12 = (undefined8 *)param_3[1];
  lVar19 = (long)puVar12 - (long)puVar4;
  uVar13 = lVar19 / 0x18;
  uVar7 = uVar5 - uVar13;
  if (uVar13 <= uVar5 && uVar7 != 0) {
    if ((ulong)((param_3[2] - (long)puVar12) / 0x18) < uVar7) {
      if (uVar5 < 0xaaaaaaaaaaaaaab) {
        uVar6 = (param_3[2] - (long)puVar4) / 0x18;
        uVar14 = uVar6 * 2;
        if (uVar14 < uVar5 || uVar14 - uVar5 == 0) {
          uVar14 = uVar5;
        }
        if (0x555555555555554 < uVar6) {
          uVar14 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar14 < 0xaaaaaaaaaaaaaab) {
          lVar11 = uVar14 * 0x18;
          __Znwm();
          puVar1 = (undefined8 *)(lVar11 + lVar19);
          puVar17 = puVar1;
          for (lVar15 = uVar5 * 0x18 + uVar13 * -0x18; lVar15 != 0; lVar15 = lVar15 + -0x18) {
            *puVar17 = 0;
            puVar17[1] = 0;
            *(undefined1 *)(puVar17 + 2) = 0;
            puVar17 = puVar17 + 3;
          }
          puVar16 = puVar1 + (lVar19 / -0x18) * 3;
          for (puVar17 = puVar4; puVar17 != puVar12; puVar17 = puVar17 + 3) {
            uVar22 = puVar17[1];
            uVar21 = *puVar17;
            puVar16[2] = puVar17[2];
            puVar16[1] = uVar22;
            *puVar16 = uVar21;
            puVar16 = puVar16 + 3;
          }
          *param_3 = (long)(puVar1 + (lVar19 / -0x18) * 3);
          param_3[1] = (long)(puVar1 + uVar7 * 3);
          param_3[2] = lVar11 + uVar14 * 0x18;
          puVar12 = puVar1 + uVar7 * 3;
          if (puVar4 != (undefined8 *)0x0) {
            __ZdlPv(puVar4);
            puVar12 = (undefined8 *)param_3[1];
          }
          goto LAB_106e5dc74;
        }
        func_0x000104bd35f4();
      }
      else {
        FUN_106e5dda0();
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x106e5dd6c);
      (*pcVar10)();
    }
    puVar17 = puVar12 + uVar7 * 3;
    puVar4 = puVar12;
    for (lVar19 = uVar5 * 0x18 + uVar13 * -0x18; puVar12 = puVar17, lVar19 != 0;
        lVar19 = lVar19 + -0x18) {
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 3;
    }
  }
  else {
    if (uVar13 <= uVar5) goto LAB_106e5dc74;
    puVar12 = (undefined8 *)((long)puVar4 + (lStack_c8 - (long)plStack_d0));
  }
  param_3[1] = (long)puVar12;
LAB_106e5dc74:
  lVar19 = *param_3;
  puVar18 = (undefined1 *)(lVar19 + 0x10);
  for (uVar13 = 0; ((long)puVar12 - lVar19) / 0x18 != uVar13; uVar13 = uVar13 + 1) {
    plVar2 = plVar20;
    if (uVar5 <= uVar13) {
      plVar2 = (long *)&uStack_b8;
    }
    plVar3 = plVar20 + 2;
    plVar8 = plVar20 + 1;
    if (uVar5 <= uVar13) {
      plVar3 = (long *)(auStack_af + 7);
      plVar8 = (long *)&uStack_b0;
    }
    *(long *)(puVar18 + -0x10) = param_1 + (*plVar2 - lVar9);
    *(long *)(puVar18 + -8) = param_1 + (*plVar8 - lVar9);
    *puVar18 = (char)*plVar3;
    plVar20 = plVar20 + 3;
    puVar18 = puVar18 + 0x18;
  }
  param_3[3] = param_2;
  param_3[4] = param_2;
  param_3[6] = param_1;
  param_3[7] = param_1 + (lStack_98 - lVar9);
  *(undefined1 *)(param_3 + 8) = uStack_90;
  *(undefined1 *)(param_3 + 5) = 0;
  param_3[9] = param_1 + (lStack_88 - lVar9);
  param_3[10] = param_1 + (lStack_80 - lVar9);
  *(undefined1 *)(param_3 + 0xb) = uStack_78;
  if ((param_5 >> 0xb & 1) == 0) {
    param_3[0xd] = param_1;
  }
  *(undefined1 *)(param_3 + 0xc) = uStack_70;
  FUN_106e58698(&plStack_d0);
  return param_4 & 0xffffffff;
}



/* Entry: 106e5dd7c; end: 106e5dd9f;  */

void FUN_106e5dd7c(long param_1)

{
  func_0x000106e5e630();
  if (param_1 != 0) {
    func_0x000106e5e608();
  }
  return;
}



/* Entry: 106e5dda0; end: 106e5ddab;  */

long * FUN_106e5dda0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  func_0x000106e5e118();
  bVar3 = (char)param_2[2] != '\0';
  if ((char)param_2[2] == '\x01') {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    uVar6 = lVar2 - lVar1;
    uVar8 = (long)uVar6 >> 2;
    plVar7 = param_1;
    func_0x000106e5e77c();
    if (bVar3) {
      func_0x0001057f96b4();
      for (; plVar7 != param_2; plVar7 = (long *)((long)plVar7 + 4)) {
        __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw
                  (param_3,(int)*plVar7);
      }
      return param_3;
    }
    bVar3 = uVar8 == 4;
    plVar4 = param_1;
    if (uVar8 < 5) {
      *(char *)((long)param_1 + 0x17) = (char)(uVar6 >> 2);
    }
    else {
      func_0x000106e5e75c();
      uVar5 = extraout_x9;
      if (!bVar3) {
        uVar5 = extraout_x8 + 1;
      }
      func_0x0001057f96c8();
      param_1[1] = uVar8;
      param_1[2] = uVar5 | 0x8000000000000000;
      *param_1 = (long)plVar4;
      plVar7 = plVar4;
    }
    param_1 = plVar7;
    if (lVar2 != lVar1) {
      param_1 = plVar4;
      _memmove(plVar4,lVar1,uVar6);
    }
    *(undefined4 *)((long)plVar4 + uVar6) = 0;
  }
  else {
    func_0x000106e5e7fc();
  }
  return param_1;
}



/* Entry: 106e5ddac; end: 106e5de47;  */

long * FUN_106e5ddac(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  bVar3 = (char)param_2[2] != '\0';
  if ((char)param_2[2] == '\x01') {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    uVar6 = lVar2 - lVar1;
    uVar8 = (long)uVar6 >> 2;
    plVar7 = param_1;
    func_0x000106e5e77c();
    if (bVar3) {
      func_0x0001057f96b4();
      for (; plVar7 != param_2; plVar7 = (long *)((long)plVar7 + 4)) {
        __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw
                  (param_3,(int)*plVar7);
      }
      return param_3;
    }
    bVar3 = uVar8 == 4;
    plVar4 = param_1;
    if (uVar8 < 5) {
      *(char *)((long)param_1 + 0x17) = (char)(uVar6 >> 2);
    }
    else {
      func_0x000106e5e75c();
      uVar5 = extraout_x9;
      if (!bVar3) {
        uVar5 = extraout_x8 + 1;
      }
      func_0x0001057f96c8();
      param_1[1] = uVar8;
      param_1[2] = uVar5 | 0x8000000000000000;
      *param_1 = (long)plVar4;
      plVar7 = plVar4;
    }
    param_1 = plVar7;
    if (lVar2 != lVar1) {
      param_1 = plVar4;
      _memmove(plVar4,lVar1,uVar6);
    }
    *(undefined4 *)((long)plVar4 + uVar6) = 0;
  }
  else {
    func_0x000106e5e7fc();
  }
  return param_1;
}



/* Entry: 106e5de48; end: 106e5de87;  */

undefined8 FUN_106e5de48(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(param_3,*param_1);
  }
  return param_3;
}



/* Entry: 106e5de88; end: 106e5df17;  */

void FUN_106e5de88(long *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000106e5e2f0();
  if (*param_1 != 0) {
    func_0x000106e5e608();
    func_0x000106e5e7fc();
  }
  uVar1 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar1;
  uVar1 = unaff_x20[3];
  unaff_x19[2] = unaff_x20[2];
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  unaff_x19[3] = uVar1;
  unaff_x19[4] = unaff_x20[4];
  *(undefined1 *)(unaff_x19 + 5) = *(undefined1 *)(unaff_x20 + 5);
  unaff_x19[6] = unaff_x20[6];
  unaff_x19[7] = unaff_x20[7];
  *(undefined1 *)(unaff_x19 + 8) = *(undefined1 *)(unaff_x20 + 8);
  unaff_x19[9] = unaff_x20[9];
  unaff_x19[10] = unaff_x20[10];
  *(undefined1 *)(unaff_x19 + 0xb) = *(undefined1 *)(unaff_x20 + 0xb);
  uVar1 = unaff_x20[0xc];
  unaff_x19[0xd] = unaff_x20[0xd];
  unaff_x19[0xc] = uVar1;
  return;
}



/* Entry: 106e5df18; end: 106e5df63;  */

void FUN_106e5df18(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_106e5df64();
  ___cxa_throw(uVar1,PTR___ZTISt11range_error_110352228,PTR___ZNSt11range_errorD1Ev_110346158);
  ___cxa_free_exception(uVar1);
  func_0x000106e5e3b4();
  __ZNSt13runtime_errorC2EPKc();
  func_0x000106e5e9bc(PTR___ZTVSt11range_error_110346b48);
  return;
}



/* Entry: 106e5df64; end: 106e5df67;  */

void FUN_106e5df64(void)

{
  __ZNSt13runtime_errorC2EPKc();
  func_0x000106e5e9bc(PTR___ZTVSt11range_error_110346b48);
  return;
}



/* Entry: 106e5df68; end: 106e5df87;  */

void FUN_106e5df68(void)

{
  __ZNSt13runtime_errorC2EPKc();
  func_0x000106e5e9bc(PTR___ZTVSt11range_error_110346b48);
  return;
}



/* Entry: 106e5df88; end: 106e5df8f;  */

void FUN_106e5df88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6resizeEmw_110346380
  )(param_1,param_2,0);
  return;
}



/* Entry: 106e5df90; end: 106e5e09f;  */

void FUN_106e5df90(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000106e5e2f0();
  uVar4 = (ulong)*(char *)(param_1 + 0x17);
  param_3 = param_3 - param_2;
  if ((long)uVar4 < 0) {
    if (param_3 == 0) {
      return;
    }
    uVar5 = unaff_x19[1];
    lVar1 = (unaff_x19[2] & 0x7fffffffffffffff) - 1;
    puVar3 = (undefined8 *)*unaff_x19;
    uVar4 = (ulong)unaff_x19[2] >> 0x38;
  }
  else {
    if (param_3 == 0) {
      return;
    }
    lVar1 = 4;
    puVar3 = unaff_x19;
    uVar5 = uVar4;
  }
  uVar2 = (uint)uVar4;
  if (unaff_x20 < puVar3 || (undefined8 *)((long)puVar3 + uVar5 * 4 + 4) <= unaff_x20) {
    if (lVar1 - uVar5 < (ulong)(param_3 >> 2)) {
      FUN_106e57050();
      uVar2 = (uint)*(byte *)((long)unaff_x19 + 0x17);
    }
    puVar3 = unaff_x19;
    if ((uVar2 >> 7 & 1) != 0) {
      puVar3 = (undefined8 *)*unaff_x19;
    }
    lVar1 = (long)puVar3 + uVar5 * 4;
    func_0x000106e5e8f8(lVar1);
    *(undefined4 *)(lVar1 + param_3) = 0;
    lVar1 = uVar5 + (param_3 >> 2);
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      unaff_x19[1] = lVar1;
    }
    else {
      *(byte *)((long)unaff_x19 + 0x17) = (byte)lVar1 & 0x7f;
    }
  }
  else {
    func_0x000106e5b668(auStack_58);
    func_0x000106e5e17c();
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKwm();
    func_0x000106e5e2ac();
  }
  return;
}



/* Entry: 106e5e0a0; end: 106e5e0d3;  */

void FUN_106e5e0a0(void)

{
  func_0x000106e5e0b8();
  return;
}



/* Entry: 106e5e0d4; end: 106e5ea6f;  */

void FUN_106e5e0d4(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long lVar3;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar3 = unaff_x19[1];
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[2];
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000010;
  for (; lVar1 != lVar3; lVar1 = lVar1 + -8) {
  }
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 106e5ea70; end: 106e5ebdb;  */

void FUN_106e5ea70(undefined8 *param_1)

{
  uint ****ppppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  uint ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  func_0x000106e5ec58();
  FUN_106e5eda0();
  FUN_106e56bcc(&pppuStack_58);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar3 = (ulong)bStack_41;
  }
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7reserveEm(param_1,uVar3);
  ppppuVar1 = (uint ****)pppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppppuVar1 = &pppuStack_58;
  }
  ppuVar2 = &PTR___tlv_bootstrap_11340db70;
  (*(code *)PTR___tlv_bootstrap_11340db70)(uStack_50);
  lVar5 = extraout_x8 << 2;
  bVar6 = true;
  do {
    if (lVar5 == 0) {
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(&pppuStack_58);
      return;
    }
    uVar4 = (ulong)*(uint *)ppppuVar1;
    uVar3 = uVar4;
    func_0x000106e5edc0();
    if ((uVar3 & 1) == 0) {
      func_0x000106e5ec58();
      uVar3 = uVar4;
      FUN_106e56f00(uVar4,ppuVar2);
      if ((uVar3 & 1) == 0) {
        func_0x000106e5ec58();
        uVar3 = uVar4;
        FUN_106e5ebdc(uVar4,ppuVar2);
        if ((uVar3 & 1) == 0) goto LAB_106e5eb18;
      }
      bVar6 = true;
    }
    else {
LAB_106e5eb18:
      if (bVar6) {
        uVar3 = param_1[1];
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
        }
        if (uVar3 != 0) {
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(param_1,0x20)
          ;
        }
      }
      func_0x000106e5ec58();
      FUN_106e56eb8(uVar4,ppuVar2);
      __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(param_1,uVar4);
      bVar6 = false;
    }
    ppppuVar1 = (uint ****)((long)ppppuVar1 + 4);
    lVar5 = lVar5 + -4;
  } while( true );
}



/* Entry: 106e5ebdc; end: 106e5ec0f;  */

void FUN_106e5ebdc(undefined8 param_1,long *param_2)

{
  FUN_106e57208();
                    /* WARNING: Could not recover jumptable at 0x000106e5ec0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))();
  return;
}



/* Entry: 106e5ec10; end: 106e5ed9f;  */

void FUN_106e5ec10(long param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  char cVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long *extraout_x8_02;
  long extraout_x9;
  long *extraout_x10;
  ulong extraout_x10_00;
  long extraout_x11;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  func_0x000106e5ec58();
  func_0x000106e5edb0();
  uVar8 = extraout_x10_00 + param_2 * 4;
  lVar10 = param_1;
  uVar7 = extraout_x10_00;
  func_0x000106e5e340();
  *(undefined8 *)(lVar10 + 0xb8) = 0;
  uStack_48 = extraout_x8;
  if (*(long *)(lVar10 + 0x30) == 0) {
LAB_106e56b3c:
    lVar10 = (long)*(char *)(param_1 + 0x17);
    if (lVar10 < 0) {
      lVar10 = *(long *)(param_1 + 8);
    }
    if (lVar10 == 0) goto LAB_106e56b88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(extraout_x8_02,param_1)
    ;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
              (extraout_x8_02,(long)(uVar8 - uVar7) >> 1,0);
    if (uVar8 != uVar7) {
      func_0x000106e5e7bc((long)*(char *)((long)extraout_x8_02 + 0x17));
      func_0x000106e5e428();
      func_0x000106e5e2b4();
      func_0x000106e5e1c8();
      do {
        iVar5 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x000106e5e3c4();
        func_0x000106e5e430();
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + ((long)(uStack_d0 - uVar7) >> 2);
        in_ZR = true;
        if (uStack_d0 - uVar7 == 0) break;
        if (iVar5 != 1) {
          if (iVar5 == 0) {
            func_0x000106e5e1b4(uStack_d8);
            func_0x000106e5e428();
            goto LAB_106e56a90;
          }
          in_ZR = false;
          if (iVar5 == 3) {
            func_0x000106e5e4d0((long)*(char *)((long)extraout_x8_02 + 0x17));
            func_0x000106e5e428();
            func_0x000106e5e844(extraout_x8_02);
            func_0x0001000da738();
            goto LAB_106e56a90;
          }
          break;
        }
        func_0x000106e5e1b4(uStack_d8);
        func_0x000106e5e428();
        func_0x000106e5e1c8();
        in_ZR = uStack_d0 == uVar8;
        uVar7 = uStack_d0;
      } while (uStack_d0 < uVar8);
LAB_106e56b34:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(extraout_x8_02);
      goto LAB_106e56b3c;
    }
    func_0x000106e5e2b4();
LAB_106e56a90:
    bVar1 = *(byte *)((long)extraout_x8_02 + 0x17);
    uVar8 = extraout_x8_02[1];
    func_0x000106e5e7bc((int)(char)bVar1);
    func_0x000106e5e428();
    if (-1 < (char)bVar1) {
      uVar8 = (ulong)bVar1;
    }
    bVar1 = *(byte *)((long)extraout_x8_02 + 0x17);
    plVar6 = (long *)*extraout_x8_02;
    if (-1 < (char)bVar1) {
      plVar6 = extraout_x8_02;
    }
    lVar10 = (long)plVar6 + uVar8;
    uVar8 = extraout_x8_02[1];
    if (-1 < (char)bVar1) {
      uVar8 = (ulong)bVar1;
    }
    lVar9 = lVar10 + uVar8;
    while( true ) {
      plVar6 = *(long **)(param_1 + 0x30);
      (**(code **)(*plVar6 + 0x28))(plVar6,auStack_c8,lVar10,lVar9,&uStack_d0);
      iVar5 = (int)plVar6;
      cVar3 = SBORROW4(iVar5,1);
      cVar4 = iVar5 + -1 < 0;
      if (iVar5 != 1) break;
      func_0x000106e5e1b4(uStack_d0);
      func_0x000106e5e428();
      func_0x000106e5e1c8();
      plVar6 = extraout_x10;
      if (cVar4 == cVar3) {
        plVar6 = extraout_x8_02;
      }
      lVar10 = (long)plVar6 + (extraout_x8_00 - extraout_x9);
      lVar9 = extraout_x11;
      if (cVar4 == cVar3) {
        lVar9 = extraout_x8_01;
      }
      lVar9 = (long)plVar6 + lVar9;
    }
    if (iVar5 == 0) {
      in_ZR = false;
    }
    else {
      in_ZR = iVar5 == 3;
      if (!(bool)in_ZR) goto LAB_106e56b34;
    }
    func_0x000106e5e4d0((long)*(char *)((long)extraout_x8_02 + 0x17));
    func_0x000106e5e428();
  }
  func_0x000106e5e168(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_106e56b88:
  FUN_106e5df18(&UNK_10f3dc1ac);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x106e56b98);
  (*pcVar2)();
}



/* Entry: 106e5eda0; end: 106e5edff;  */

void FUN_106e5eda0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000106e5edac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340db58)();
  return;
}



/* Entry: 106e5ee00; end: 106e5ef9f;  */

long * FUN_106e5ee00(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  param_1[7] = 0;
  uVar4 = param_2;
  _open(param_2,0x1000000);
  *(int *)(param_1 + 2) = (int)uVar4;
  if ((int)uVar4 != -1) {
    lVar2 = 0x58;
    __Znwm();
    func_0x00010b4d5c90();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000106e5f8e4();
    }
    uVar4 = 0x50;
    __Znwm(0x50);
    func_0x000106e5f700();
    auStack_68[0] = 0;
    FUN_106e5f6a0(param_1 + 1,uVar4);
    func_0x000106e5f67c(auStack_68);
    return param_1;
  }
  func_0x000106e5f890();
  uStack_48 = 0;
  uStack_50 = param_2;
  func_0x0001003a91d4(&UNK_10f3dc1ee);
  func_0x0001003a9204(auStack_68);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar4,auStack_68);
  ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106e5ef34);
  (*pcVar1)();
}



/* Entry: 106e5efa0; end: 106e5efe3;  */

long * FUN_106e5efa0(long *param_1)

{
  long lVar1;
  
  if ((int)param_1[2] != -1) {
    _close();
  }
  FUN_106e5f5f8(param_1 + 5);
  func_0x000106e5f67c(param_1 + 1);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000106e5f8e4();
  }
  return param_1;
}



/* Entry: 106e5efe4; end: 106e5f053;  */

bool FUN_106e5efe4(long param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  
  puVar5 = *(ulong **)(param_1 + 8);
  pbVar1 = (byte *)*puVar5;
  if (pbVar1 < (byte *)puVar5[1]) {
    bVar3 = *pbVar1;
    uVar4 = (uint)bVar3;
    if (-1 < (char)bVar3) {
      *puVar5 = (ulong)(pbVar1 + 1);
      goto LAB_106e5f02c;
    }
  }
  else {
    bVar3 = 0;
  }
  puVar2 = puVar5;
  func_0x00010b4d4c50(puVar5,bVar3);
  uVar4 = (uint)puVar2;
LAB_106e5f02c:
  *(uint *)(puVar5 + 4) = uVar4;
  *(byte *)(param_1 + 0x1c) = (byte)uVar4 & 7;
  *(uint *)(param_1 + 0x14) = uVar4;
  *(uint *)(param_1 + 0x18) = uVar4 >> 3;
  return 7 < uVar4;
}



/* Entry: 106e5f054; end: 106e5f0d7;  */

undefined4 FUN_106e5f054(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x1c) == '\x02') {
    FUN_106e5f114(*(undefined8 *)(param_1 + 8),param_1 + 0x20);
    FUN_106e5f0d8();
    return *(undefined4 *)(param_1 + 0x20);
  }
  func_0x000106e5f890();
  func_0x000106e5f8f0();
  func_0x0001003a91d4(&UNK_10f3dc215);
  func_0x000106e5f860();
  func_0x000106e5f870();
  func_0x000106e5f848();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106e5f0c0);
  (*pcVar1)();
}



/* Entry: 106e5f0d8; end: 106e5f113;  */

uint * FUN_106e5f0d8(uint *param_1)

{
  undefined1 in_CY;
  uint *puVar1;
  char *extraout_x8;
  
  if (((ulong)param_1 & 1) != 0) {
    return param_1;
  }
  func_0x000106e5f890();
  puVar1 = param_1;
  __ZNSt13runtime_errorC1EPKc();
  func_0x000106e5f848();
  func_0x000106e5f898();
  func_0x000106e5f888();
  func_0x000106e5f8c8();
  if (((bool)in_CY) || (*extraout_x8 < 0)) {
    func_0x00010b4d4aac();
    *param_1 = (uint)puVar1;
    puVar1 = (uint *)(ulong)(~(uint)puVar1 >> 0x1f);
  }
  else {
    *param_1 = (int)*extraout_x8;
    *(char **)puVar1 = extraout_x8 + 1;
    puVar1 = (uint *)0x1;
  }
  return puVar1;
}



/* Entry: 106e5f114; end: 106e5f15b;  */

uint FUN_106e5f114(long *param_1)

{
  undefined1 in_CY;
  uint uVar1;
  char *extraout_x8;
  uint *unaff_x19;
  
  func_0x000106e5f8c8();
  if (((bool)in_CY) || (*extraout_x8 < 0)) {
    func_0x00010b4d4aac();
    *unaff_x19 = (uint)param_1;
    uVar1 = ~(uint)param_1 >> 0x1f;
  }
  else {
    *unaff_x19 = (int)*extraout_x8;
    *param_1 = (long)(extraout_x8 + 1);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106e5f15c; end: 106e5f1db;  */

undefined4 FUN_106e5f15c(long param_1)

{
  code *pcVar1;
  undefined4 auStack_58 [6];
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    FUN_106e5f1dc(*(undefined8 *)(param_1 + 8),auStack_58);
    FUN_106e5f0d8();
    return auStack_58[0];
  }
  func_0x000106e5f890();
  lStack_40 = (long)*(char *)(param_1 + 0x1c);
  uStack_38 = 0;
  func_0x000106e5f8d8();
  func_0x000106e5f860();
  func_0x000106e5f870();
  func_0x000106e5f848();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106e5f1c4);
  (*pcVar1)();
}



/* Entry: 106e5f1dc; end: 106e5f22b;  */

uint FUN_106e5f1dc(long *param_1)

{
  undefined1 in_CY;
  uint uVar1;
  byte *extraout_x8;
  uint *unaff_x19;
  
  func_0x000106e5f8c8();
  if (((bool)in_CY) || ((char)*extraout_x8 < '\0')) {
    func_0x00010b4d49ac();
    *unaff_x19 = (uint)param_1;
    uVar1 = (uint)((ulong)param_1 >> 0x3f) ^ 1;
  }
  else {
    *unaff_x19 = (uint)*extraout_x8;
    *param_1 = (long)(extraout_x8 + 1);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106e5f22c; end: 106e5f2b7;  */

undefined8 FUN_106e5f22c(long param_1)

{
  code *pcVar1;
  undefined8 auStack_58 [3];
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    FUN_106e5f2b8(*(undefined8 *)(param_1 + 8),auStack_58);
    FUN_106e5f0d8();
    return auStack_58[0];
  }
  func_0x000106e5f890();
  lStack_40 = (long)*(char *)(param_1 + 0x1c);
  uStack_38 = 0;
  func_0x000106e5f8d8();
  func_0x000106e5f860();
  func_0x000106e5f870();
  func_0x000106e5f848();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106e5f2a0);
  (*pcVar1)();
}



/* Entry: 106e5f2b8; end: 106e5f2fb;  */

uint FUN_106e5f2b8(long *param_1,uint param_2)

{
  undefined1 in_CY;
  char *extraout_x8;
  long *unaff_x19;
  
  func_0x000106e5f8c8();
  if (((bool)in_CY) || ((long)*extraout_x8 < 0)) {
    func_0x00010b4d4884();
    *unaff_x19 = (long)param_1;
  }
  else {
    *unaff_x19 = (long)*extraout_x8;
    *param_1 = (long)(extraout_x8 + 1);
    param_2 = 1;
  }
  return param_2 & 1;
}



/* Entry: 106e5f2fc; end: 106e5f347;  */

void FUN_106e5f2fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_106e5f054();
  func_0x00010b4d450c(uVar1,param_1,param_2);
  FUN_106e5f0d8();
  return;
}



/* Entry: 106e5f348; end: 106e5f397;  */

void FUN_106e5f348(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_106e5f054();
  func_0x000100291d50(param_1,(long)(int)lVar1);
  func_0x00010b4d4490(*(undefined8 *)(param_2 + 8),*param_1,*(undefined4 *)(param_2 + 0x20));
  FUN_106e5f0d8();
  return;
}



/* Entry: 106e5f398; end: 106e5f46b;  */

ulong FUN_106e5f398(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong auStack_58 [2];
  undefined4 uStack_44;
  ulong uStack_40;
  ulong uStack_38;
  
  switch(*(undefined1 *)(param_1 + 0x1c)) {
  case 0:
    if (*(char *)(param_1 + 0x1c) == '\0') {
      FUN_106e5f2b8(*(undefined8 *)(param_1 + 8),auStack_58);
      FUN_106e5f0d8();
      return auStack_58[0];
    }
    func_0x000106e5f890();
    uStack_40 = (ulong)*(char *)(param_1 + 0x1c);
    uStack_38 = 0;
    func_0x000106e5f8d8();
    func_0x000106e5f860();
    func_0x000106e5f870();
    func_0x000106e5f848();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x106e5f2a0);
    (*pcVar1)();
  case 1:
    lVar6 = 8;
    break;
  case 2:
    lVar6 = param_1;
    FUN_106e5f054(param_1);
    break;
  default:
    func_0x000106e5f890();
    func_0x000106e5f8f0();
    func_0x0001003a91d4(&UNK_10f3dc259);
    func_0x000106e5f860();
    func_0x000106e5f870();
    func_0x000106e5f848();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x106e5f454);
    (*pcVar1)();
  case 5:
    lVar6 = 4;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000106e5f5c4(uVar2,lVar6);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  func_0x000106e5f890();
  uVar3 = uVar2;
  __ZNSt13runtime_errorC1EPKc();
  func_0x000106e5f848();
  uVar4 = uVar3;
  func_0x000106e5f898();
  func_0x000106e5f888();
  uVar7 = *(undefined8 *)(uVar4 + 8);
  uVar5 = uVar4;
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  FUN_106e5f054();
  func_0x00010b4d4088(uVar7,uVar5);
  uStack_44 = (undefined4)uVar7;
  uVar4 = uVar4 + 0x28;
  func_0x000106e5f4f8(uVar4,&uStack_44);
  return uVar4;
}



/* Entry: 106e5f46c; end: 106e5f4af;  */

void FUN_106e5f46c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uStack_44;
  ulong uStack_40;
  ulong uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000106e5f5c4();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000106e5f890();
  uVar2 = uVar1;
  __ZNSt13runtime_errorC1EPKc();
  func_0x000106e5f848();
  uVar3 = uVar2;
  func_0x000106e5f898();
  func_0x000106e5f888();
  uStack_28 = 0x106e5f4b0;
  uVar5 = *(undefined8 *)(uVar3 + 8);
  uVar4 = uVar3;
  uStack_40 = uVar2;
  uStack_38 = uVar1;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_106e5f054();
  func_0x00010b4d4088(uVar5,uVar4);
  uStack_44 = (undefined4)uVar5;
  func_0x000106e5f4f8(uVar3 + 0x28,&uStack_44);
  return;
}



/* Entry: 106e5f4b0; end: 106e5f533;  */

void FUN_106e5f4b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1;
  FUN_106e5f054();
  func_0x00010b4d4088(uVar2,lVar1);
  uStack_24 = (undefined4)uVar2;
  func_0x000106e5f4f8(param_1 + 0x28,&uStack_24);
  return;
}



/* Entry: 106e5f534; end: 106e5f5a3;  */

void FUN_106e5f534(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x000106e5f890();
    __ZNSt13runtime_errorC1EPKc();
    func_0x000106e5f848();
    func_0x000106e5f898();
    func_0x000106e5f888();
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010b4d41b4(uVar5);
    FUN_106e5f46c(param_1,uVar5);
    func_0x00010b4d4128(*(undefined8 *)(param_1 + 8),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x10));
    param_1 = param_1 + 0x28;
  }
  plVar1 = *(long **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = *plVar1;
  plVar4 = (long *)plVar1[1];
  *(long **)(lVar2 + 8) = plVar4;
  *plVar4 = lVar2;
  *(long *)(param_1 + 0x10) = lVar3 + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 106e5f5a4; end: 106e5f5f7;  */

void FUN_106e5f5a4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = *plVar1;
  plVar4 = (long *)plVar1[1];
  *(long **)(lVar2 + 8) = plVar4;
  *plVar4 = lVar2;
  *(long *)(param_1 + 0x10) = lVar3 + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 106e5f5f8; end: 106e5f69f;  */

void FUN_106e5f5f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 106e5f6a0; end: 106e5f6b7;  */

void FUN_106e5f6a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b4d3fe8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e5f6b8; end: 106e5f6d3;  */

void FUN_106e5f6b8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b4d3fe8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5f6d4; end: 106e5f753;  */

long FUN_106e5f6d4(long param_1)

{
  func_0x00010b4d6798(param_1 + 0x20);
  func_0x00010b4d5ddc(param_1 + 8);
  return param_1;
}



/* Entry: 106e5f754; end: 106e5f7e3;  */

undefined8 *
FUN_106e5f754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar1 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 1;
  FUN_106e5f7e4(auStack_50);
  puVar2 = puStack_40;
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  *(undefined4 *)(puStack_40 + 2) = *param_4;
  puStack_40 = (undefined8 *)0x0;
  FUN_106e5f838();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar1[1] = uVar3;
  puVar2 = puVar1;
  FUN_106e5f80c();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 106e5f7e4; end: 106e5f80b;  */

long FUN_106e5f7e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_106e5f80c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 106e5f80c; end: 106e5f837;  */

void FUN_106e5f80c(long param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e5f838; end: 106e5f903;  */

void FUN_106e5f838(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e5f904; end: 106e5f9a3;  */

undefined8 FUN_106e5f904(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011381e9c0 & 1) == 0) {
    iVar1 = 0x1381e9c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_106e5f9a4(auStack_68);
      puVar2 = auStack_68;
      func_0x00010028f4b0();
      puRam000000011381e9b8 = puVar2;
      func_0x000100164334(auStack_68);
      ___cxa_guard_release(0x11381e9c0);
    }
  }
  return 0x11381e9b8;
}



/* Entry: 106e5f9a4; end: 106e5fbe7;  */

/* WARNING: Possible PIC construction at 0x000106e5f9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106e5f9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e5f9dc) */
/* WARNING: Removing unreachable block (ram,0x000106e5fa00) */
/* WARNING: Removing unreachable block (ram,0x000106e5fb28) */
/* WARNING: Removing unreachable block (ram,0x000106e5fb3c) */
/* WARNING: Removing unreachable block (ram,0x000106e5fb78) */
/* WARNING: Removing unreachable block (ram,0x000106e5fb88) */
/* WARNING: Removing unreachable block (ram,0x000106e5fb98) */
/* WARNING: Removing unreachable block (ram,0x000106e5fbd0) */
/* WARNING: Removing unreachable block (ram,0x000106e5fb64) */

void FUN_106e5f9a4(void)

{
  undefined *puVar1;
  undefined1 auStack_170 [312];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f3dc2f8;
  func_0x00010002b82c(auStack_170,&UNK_10f3dc2f8);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 106e5fbe8; end: 106e5fbef;  */

void FUN_106e5fbe8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 106e5fbf0; end: 106e5fc63; -[SCComposerStoryCardFetcher initWithGenericSingleStoryQueryCoordinator:] */

undefined1 * FUN_106e5fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e5fc64; end: 106e5fd6f; -[SCComposerStoryCardFetcher getNativeStoryCardWithRequest:callback:] */

void FUN_106e5fc64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f1e60();
  uVar1 = 7;
  if ((int)uVar4 != 1) {
    uVar1 = 0;
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106e5fd70;
  puStack_58 = &UNK_110959f28;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfaa900(uVar2,param_2,uVar3,uVar1,&puStack_70);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}


