/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098e122c; end: 1098e1253;  */

void FUN_1098e122c(void)

{
  long extraout_x8;
  
  func_0x0001098e1f10();
  if (extraout_x8 != 0) {
    func_0x0001098e1e58();
  }
  return;
}



/* Entry: 1098e1254; end: 1098e1667;  */

void FUN_1098e1254(long param_1)

{
  if (param_1 == 0) {
    __Znwm(0x20);
  }
  else {
    func_0x00010b4d80e0(param_1,0x20);
  }
  func_0x0001098e1f8c(&PTR_FUN_110b1bbf8);
  return;
}



/* Entry: 1098e1668; end: 1098e167b;  */

void FUN_1098e1668(ulong *param_1)

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



/* Entry: 1098e167c; end: 1098e16e7;  */

undefined8 * FUN_1098e167c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b1bbf8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_1098df504();
  return puVar1;
}



/* Entry: 1098e16e8; end: 1098e1793;  */

void FUN_1098e16e8(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001098e1ea8();
  if (param_1 == 0) {
    func_0x0001098e1dd4();
  }
  else {
    func_0x0001098e1ddc();
  }
  func_0x0001098e1f68();
  func_0x0001098e1f80(&PTR_FUN_110b1bc98);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1ca4();
  }
  func_0x0001098e1d70();
  func_0x0001098e1fe8();
  return;
}



/* Entry: 1098e1794; end: 1098e17ff;  */

undefined8 * FUN_1098e1794(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110b1be78;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_1098e035c();
  return puVar1;
}



/* Entry: 1098e1800; end: 1098e18eb;  */

undefined8 * FUN_1098e1800(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001098e1ea8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098e1e94();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110b1c008;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001098e1ca4();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = unaff_x20;
  FUN_1098dfcf4(param_1 + 2,unaff_x19 + 0x10);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = unaff_x20;
  func_0x0001098dfd04(param_1 + 5,unaff_x19 + 0x28);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = unaff_x20;
  func_0x0001098dfd14(param_1 + 8,unaff_x19 + 0x40);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = unaff_x20;
  func_0x0001098dfd24(param_1 + 0xb,unaff_x19 + 0x58);
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



/* Entry: 1098e18ec; end: 1098e19bf;  */

void FUN_1098e18ec(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001098e1ea8();
  if (param_1 == 0) {
    func_0x0001098e1dd4();
  }
  else {
    func_0x0001098e1ddc();
  }
  func_0x0001098e1f68();
  func_0x0001098e1f80(&PTR_FUN_110b1bfb8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1ca4();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) != 0) {
    FUN_1098e167c();
  }
  func_0x0001098e1fe8();
  return;
}



/* Entry: 1098e19c0; end: 1098e1ad3;  */

undefined8 * FUN_1098e19c0(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001098e1e94();
  }
  else {
    func_0x00010b4d80e0(param_1,0x78);
  }
  puVar3[1] = param_1;
  *puVar3 = &PTR_DAT_110b1bf18;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001098e1ca4();
  }
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  func_0x0001088f25c8(puVar3 + 3,param_1,param_2 + 0x18);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = param_1;
  FUN_1098dec84(puVar3 + 5,param_2 + 0x28);
  func_0x0001088f25c8(puVar3 + 8,param_1,param_2 + 0x40);
  iVar1 = *(int *)(param_2 + 0x70);
  *(int *)(puVar3 + 0xe) = iVar1;
  iVar2 = *(int *)(param_2 + 0x74);
  *(int *)((long)puVar3 + 0x74) = iVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  puVar3[10] = uVar4;
  if (iVar1 == 10) {
    puVar3[0xc] = *(undefined8 *)(param_2 + 0x60);
  }
  if (iVar2 == 0x2c) {
    puVar3[0xd] = *(undefined8 *)(param_2 + 0x68);
  }
  else if (iVar2 == 0x1e) {
    puVar3[0xd] = *(undefined8 *)(param_2 + 0x68);
  }
  return puVar3;
}



/* Entry: 1098e1ad4; end: 1098e1b8f;  */

void FUN_1098e1ad4(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0001098e1ea8();
  if (param_1 == 0) {
    uVar2 = 0x48;
    __Znwm();
  }
  else {
    uVar2 = unaff_x20;
    func_0x00010b4d80e0();
  }
  func_0x0001098e1f68();
  func_0x0001098e1f80(&PTR_FUN_110b1bf68);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001098e1ca4();
  }
  func_0x0001098e1d70();
  *(undefined8 *)(unaff_x21 + 0x18) = uVar2;
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001098e16e8();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001098e1738();
  }
  *(undefined8 *)(unaff_x21 + 0x28) = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_1098e1794();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x21 + 0x38) = uVar2;
  return;
}



/* Entry: 1098e1b90; end: 1098e2007;  */

void FUN_1098e1b90(void)

{
  return;
}



/* Entry: 1098e2008; end: 1098e2067;  */

undefined8 FUN_1098e2008(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (7.105427357601002e-15 <= ABS(*(double *)(param_1 + 0x20) - *(double *)(param_2 + 0x20))) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
      return 0;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FUN_1098e2068(uVar1,*(undefined8 *)(param_2 + 0x18));
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  return 1;
}



/* Entry: 1098e2068; end: 1098e20bb;  */

bool FUN_1098e2068(long param_1,long param_2)

{
  if (ABS(*(double *)(param_1 + 0x10) - *(double *)(param_2 + 0x10)) < 7.105427357601002e-15) {
    return ABS(*(double *)(param_1 + 0x18) - *(double *)(param_2 + 0x18)) < 7.105427357601002e-15;
  }
  return false;
}



/* Entry: 1098e20bc; end: 1098e2127;  */

bool FUN_1098e20bc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 1098e2128; end: 1098e2317;  */

bool FUN_1098e2128(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint uVar11;
  uint extraout_w8_03;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint uVar12;
  uint extraout_w9_03;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x10);
  if ((uVar11 & 1) == 0) {
    lVar7 = param_1;
    if ((uVar12 & 1) != 0) {
      return false;
    }
  }
  else {
    if ((uVar12 & 1) == 0) {
      return false;
    }
    lVar7 = *(long *)(param_1 + 0x60);
    FUN_1098e2608(lVar7,*(undefined8 *)(param_2 + 0x60));
    if ((int)lVar7 == 0) {
      return false;
    }
    func_0x0001098e2360();
    uVar12 = extraout_w8;
    uVar11 = extraout_w9;
  }
  if ((uVar11 >> 1 & 1) == 0) {
    iVar5 = (int)lVar7;
    if ((uVar12 >> 1 & 1) != 0) {
      return false;
    }
  }
  else {
    if ((uVar12 >> 1 & 1) == 0) {
      return false;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    FUN_1098e2378(uVar8,*(undefined8 *)(param_2 + 0x68));
    iVar5 = (int)uVar8;
    if (iVar5 == 0) {
      return false;
    }
  }
  func_0x0001098e236c(*(undefined8 *)(param_1 + 0x48));
  if (iVar5 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x98) != *(int *)(param_2 + 0x98)) {
    return false;
  }
  func_0x0001098e2360();
  if ((extraout_w9_00 >> 2 & 1) == 0) {
    uVar12 = extraout_w9_00;
    uVar11 = extraout_w8_00;
    if ((extraout_w8_00 >> 2 & 1) != 0) {
      return false;
    }
  }
  else {
    if ((extraout_w8_00 >> 2 & 1) == 0) {
      return false;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    FUN_1098e28ac(uVar8,*(undefined8 *)(param_2 + 0x70));
    if ((int)uVar8 == 0) {
      return false;
    }
    func_0x0001098e2360();
    uVar12 = extraout_w9_01;
    uVar11 = extraout_w8_01;
  }
  if ((uVar12 >> 3 & 1) == 0) {
    if ((uVar11 >> 3 & 1) != 0) {
      return false;
    }
  }
  else {
    if ((uVar11 >> 3 & 1) == 0) {
      return false;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    FUN_1098e25b8(uVar8,*(undefined8 *)(param_2 + 0x78));
    if ((int)uVar8 == 0) {
      return false;
    }
    func_0x0001098e2360();
    uVar12 = extraout_w9_02;
    uVar11 = extraout_w8_02;
  }
  if ((uVar12 >> 4 & 1) == 0) {
    if ((uVar11 >> 4 & 1) != 0) {
      return false;
    }
  }
  else {
    if ((uVar11 >> 4 & 1) == 0) {
      return false;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    func_0x0001098e20a8(uVar8,*(undefined8 *)(param_2 + 0x80));
    if ((int)uVar8 == 0) {
      return false;
    }
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 == *(int *)(param_2 + 0x18)) {
    lVar7 = *(long *)(param_1 + 0x20);
    FUN_1098e2318(lVar7,lVar7 + (long)iVar5 * 4,*(long *)(param_2 + 0x20),
                  *(long *)(param_2 + 0x20) + (long)iVar5 * 4);
    if ((((int)lVar7 != 0) && (*(int *)(param_1 + 0x9c) == *(int *)(param_2 + 0x9c))) &&
       (*(int *)(param_1 + 0xa0) == *(int *)(param_2 + 0xa0))) {
      func_0x0001098e2360();
      if ((extraout_w9_03 >> 5 & 1) == 0) {
        if ((extraout_w8_03 >> 5 & 1) != 0) {
          return false;
        }
      }
      else {
        if ((extraout_w8_03 >> 5 & 1) == 0) {
          return false;
        }
        if (*(long *)(*(long *)(param_1 + 0x88) + 0x10) !=
            *(long *)(*(long *)(param_2 + 0x88) + 0x10) ||
            *(int *)(*(long *)(param_1 + 0x88) + 0x18) != *(int *)(*(long *)(param_2 + 0x88) + 0x18)
           ) {
          return false;
        }
      }
      if ((extraout_w9_03 >> 6 & 1) == 0) {
        if ((extraout_w8_03 >> 6 & 1) != 0) {
          return false;
        }
      }
      else {
        if ((extraout_w8_03 >> 6 & 1) == 0) {
          return false;
        }
        uVar8 = *(undefined8 *)(param_1 + 0x90);
        FUN_1098e247c(uVar8,*(undefined8 *)(param_2 + 0x90));
        if ((int)uVar8 == 0) {
          return false;
        }
      }
      iVar5 = *(int *)(param_1 + 0x30);
      if (iVar5 == *(int *)(param_2 + 0x30)) {
        lVar7 = *(long *)(param_1 + 0x38);
        FUN_1098e2318(lVar7,lVar7 + (long)iVar5 * 4,*(long *)(param_2 + 0x38),
                      *(long *)(param_2 + 0x38) + (long)iVar5 * 4);
        iVar5 = (int)lVar7;
        if ((iVar5 != 0) && (func_0x0001098e236c(*(undefined8 *)(param_1 + 0x50)), iVar5 != 0)) {
          puVar9 = (ulong *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
          puVar10 = (ulong *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
          bVar3 = *(byte *)((long)puVar9 + 0x17);
          uVar1 = puVar9[1];
          if (-1 < (char)bVar3) {
            uVar1 = (ulong)bVar3;
          }
          bVar4 = *(byte *)((long)puVar10 + 0x17);
          uVar2 = puVar10[1];
          if (-1 < (char)bVar4) {
            uVar2 = (ulong)bVar4;
          }
          if (uVar1 != uVar2) {
            return false;
          }
          puVar6 = (ulong *)*puVar9;
          if (-1 < (char)bVar3) {
            puVar6 = puVar9;
          }
          puVar9 = (ulong *)*puVar10;
          if (-1 < (char)bVar4) {
            puVar9 = puVar10;
          }
          _memcmp(puVar6,puVar9);
          return (int)puVar6 == 0;
        }
      }
    }
  }
  return false;
}



/* Entry: 1098e2318; end: 1098e233f;  */

bool FUN_1098e2318(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 - param_1 == param_4 - param_3) {
    _memcmp(param_1,param_3,(param_2 - param_1 >> 2) << 2);
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 1098e2340; end: 1098e235f;  */

bool FUN_1098e2340(undefined8 param_1,undefined8 param_2,long param_3)

{
  _memcmp(param_1,param_2,param_3 << 2);
  return (int)param_1 == 0;
}



/* Entry: 1098e2360; end: 1098e2377;  */

void FUN_1098e2360(void)

{
  return;
}



/* Entry: 1098e2378; end: 1098e247b;  */

undefined8 FUN_1098e2378(long param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != *(uint *)(param_2 + 0x20)) {
    return 0;
  }
  lVar8 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) + 1;
  lVar5 = 8;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + lVar5 + -1);
    }
    uVar6 = *puVar1;
    uVar7 = *(ulong *)(param_2 + 0x18);
    puVar1 = (ulong *)(param_2 + 0x18);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + lVar5 + -1);
    }
    FUN_1098e2008(uVar6,*puVar1);
    lVar5 = lVar5 + 8;
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    FUN_1098e2008(uVar4,*(undefined8 *)(param_2 + 0x30));
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar3 >> 1 & 1) == 0) {
    if ((uVar2 >> 1 & 1) != 0) {
      return 0;
    }
  }
  else {
    if ((uVar2 >> 1 & 1) == 0) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    FUN_1098e2008(uVar4,*(undefined8 *)(param_2 + 0x38));
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  return 1;
}



/* Entry: 1098e247c; end: 1098e251b;  */

/* WARNING: Removing unreachable block (ram,0x0001098e2554) */

ulong * FUN_1098e247c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if ((*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40)) &&
     (iVar1 = *(int *)(param_1 + 0x10), iVar1 == *(int *)(param_2 + 0x10))) {
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_1098e2318(lVar2,lVar2 + (long)iVar1 * 4,*(long *)(param_2 + 0x18),
                  *(long *)(param_2 + 0x18) + (long)iVar1 * 4);
    if (((int)lVar2 != 0) && (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      puVar3 = (ulong *)(param_1 + 0x28);
      if ((uVar4 & 1) != 0) {
        puVar3 = (ulong *)(uVar4 + 7);
      }
      FUN_1098e255c();
      return puVar3;
    }
  }
  return (ulong *)0x0;
}



/* Entry: 1098e251c; end: 1098e255b;  */

long FUN_1098e251c(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 - param_1 == param_4 - param_3) {
    FUN_1098e255c();
    return param_1;
  }
  return 0;
}



/* Entry: 1098e255c; end: 1098e25b7;  */

void FUN_1098e255c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  do {
    if (param_1 == param_2 || param_3 == param_4) {
      return;
    }
    uVar1 = *param_1;
    FUN_1098e20bc(uVar1,*param_3);
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  } while ((int)uVar1 != 0);
  return;
}



/* Entry: 1098e25b8; end: 1098e25cb;  */

bool FUN_1098e25b8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  puVar6 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  puVar7 = (ulong *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  uVar1 = puVar6[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)puVar7 + 0x17);
  uVar2 = puVar7[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    puVar5 = (ulong *)*puVar6;
    if (-1 < (char)bVar3) {
      puVar5 = puVar6;
    }
    puVar6 = (ulong *)*puVar7;
    if (-1 < (char)bVar4) {
      puVar6 = puVar7;
    }
    _memcmp(puVar5,puVar6);
    return (int)puVar5 == 0;
  }
  return false;
}



/* Entry: 1098e25cc; end: 1098e2607;  */

void FUN_1098e25cc(undefined8 *param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_1098e2850(&uStack_38);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  *(undefined4 *)(param_1 + 2) = uStack_28;
  return;
}



/* Entry: 1098e2608; end: 1098e284f;  */

void FUN_1098e2608(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long alStack_98 [3];
  long alStack_80 [3];
  long alStack_68 [3];
  
  lVar5 = param_1;
  FUN_1098e2890(*(undefined8 *)(param_1 + 0x18));
  iVar1 = (int)lVar5;
  if (((iVar1 != 0) && (FUN_1098e2890(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) &&
     (FUN_1098e2890(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) {
    if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
        return;
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
        return;
      }
      piVar4 = (int *)(*(long *)(param_2 + 0x30) + 0x10);
      if (*(int *)(*(long *)(param_1 + 0x30) + 0x10) != *piVar4) {
        return;
      }
      plVar2 = alStack_98;
      func_0x00010564c19c();
      while (lVar5 = alStack_98[0], iVar1 = (int)plVar2, alStack_98[0] != 0) {
        func_0x000107c28188(alStack_98[0] + 8);
        piVar3 = piVar4;
        func_0x0001098e289c();
        if (piVar3 == (int *)0x0) {
          return;
        }
        if (*(int *)(lVar5 + 0x30) != piVar3[0xc]) {
          return;
        }
        plVar2 = alStack_68;
        func_0x00010564c19c();
        while (lVar6 = alStack_68[0], iVar1 = (int)plVar2, alStack_68[0] != 0) {
          FUN_1098e25cc(alStack_80,piVar3 + 0xc,alStack_68[0] + 8);
          if (alStack_80[0] == 0) {
            return;
          }
          iVar1 = (int)lVar6 + 0x20;
          FUN_1098e20bc();
          if (iVar1 == 0) {
            return;
          }
          plVar2 = alStack_68;
          func_0x000107c27d54();
        }
        FUN_1098e2890(*(undefined8 *)(lVar5 + 0x50));
        if (iVar1 == 0) {
          return;
        }
        plVar2 = alStack_98;
        func_0x000107c27d54();
      }
    }
    if (((*(long *)(param_1 + 0x40) == *(long *)(param_2 + 0x40)) &&
        (*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48))) &&
       ((*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50) &&
        (((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0 && ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0)))
        ))) {
      lVar5 = *(long *)(param_1 + 0x38);
      lVar6 = *(long *)(param_2 + 0x38);
      FUN_1098e2890(*(undefined8 *)(lVar5 + 0x30));
      if ((iVar1 != 0) && (piVar4 = (int *)(lVar6 + 0x10), *(int *)(lVar5 + 0x10) == *piVar4)) {
        func_0x00010564c19c(alStack_68);
        while ((lVar5 = alStack_68[0], alStack_68[0] != 0 &&
               (FUN_1098e25cc(alStack_80,piVar4,alStack_68[0] + 8), alStack_80[0] != 0))) {
          lVar5 = lVar5 + 0x20;
          FUN_1098e20bc(lVar5,alStack_80[0] + 0x20);
          if ((int)lVar5 == 0) {
            return;
          }
          func_0x000107c27d54(alStack_68);
        }
      }
    }
  }
  return;
}



/* Entry: 1098e2850; end: 1098e288f;  */

void FUN_1098e2850(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)param_3;
  func_0x000107c28188(param_3);
  uVar1 = param_2;
  func_0x0001098e289c();
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = uVar2;
  return;
}



/* Entry: 1098e2890; end: 1098e28ab;  */

bool FUN_1098e2890(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong in_x9;
  
  puVar6 = (ulong *)(param_1 & 0xfffffffffffffffc);
  puVar7 = (ulong *)(in_x9 & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  uVar1 = puVar6[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)puVar7 + 0x17);
  uVar2 = puVar7[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    puVar5 = (ulong *)*puVar6;
    if (-1 < (char)bVar3) {
      puVar5 = puVar6;
    }
    puVar6 = (ulong *)*puVar7;
    if (-1 < (char)bVar4) {
      puVar6 = puVar7;
    }
    _memcmp(puVar5,puVar6);
    return (int)puVar5 == 0;
  }
  return false;
}



/* Entry: 1098e28ac; end: 1098e2a3b;  */

void FUN_1098e28ac(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1098e2a3c(*(undefined8 *)(param_1 + 0x18));
  iVar1 = (int)lVar2;
  if (((((iVar1 != 0) && (FUN_1098e2a3c(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) &&
       (FUN_1098e2a3c(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) &&
      ((FUN_1098e2a3c(*(undefined8 *)(param_1 + 0x30)), iVar1 != 0 &&
       (FUN_1098e2a3c(*(undefined8 *)(param_1 + 0x38)), iVar1 != 0)))) &&
     ((*(long *)(param_1 + 0x50) == *(long *)(param_2 + 0x50) &&
      (((*(uint *)(param_2 + 0x10) & 1) != 0 && ((*(uint *)(param_1 + 0x10) & 1) != 0)))))) {
    lVar2 = *(long *)(param_1 + 0x40);
    FUN_1098e2a3c(*(undefined8 *)(lVar2 + 0x10));
    if (iVar1 != 0) {
      FUN_1098e2a3c(*(undefined8 *)(lVar2 + 0x18));
    }
  }
  return;
}



/* Entry: 1098e2a3c; end: 1098e2a47;  */

bool FUN_1098e2a3c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong in_x9;
  
  puVar6 = (ulong *)(param_1 & 0xfffffffffffffffc);
  puVar7 = (ulong *)(in_x9 & 0xfffffffffffffffc);
  bVar3 = *(byte *)((long)puVar6 + 0x17);
  uVar1 = puVar6[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)puVar7 + 0x17);
  uVar2 = puVar7[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    puVar5 = (ulong *)*puVar6;
    if (-1 < (char)bVar3) {
      puVar5 = puVar6;
    }
    puVar6 = (ulong *)*puVar7;
    if (-1 < (char)bVar4) {
      puVar6 = puVar7;
    }
    _memcmp(puVar5,puVar6);
    return (int)puVar5 == 0;
  }
  return false;
}



/* Entry: 1098e2a48; end: 1098e2aa7;  */

long FUN_1098e2a48(long param_1)

{
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  return param_1;
}



/* Entry: 1098e2aa8; end: 1098e2abb;  */

/* WARNING: Removing unreachable block (ram,0x000109445b90) */
/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */

undefined1  [16] FUN_1098e2aa8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint *puVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uStack_d0;
  undefined1 uStack_cc;
  undefined4 uStack_cb;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  plVar7 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar8 = (long)param_2 << 4;
    __Znwm(lVar8);
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = lVar8;
    return auVar27;
  }
  func_0x000104c4f740();
  plVar22 = (long *)plVar7[1];
  if (plVar22 < (long *)plVar7[2]) {
    lVar8 = *param_2;
    plVar22[1] = param_2[1];
    *plVar22 = lVar8;
    plVar22 = plVar22 + 2;
    plVar11 = plVar7;
    plVar19 = param_2;
LAB_1098e2bb0:
    plVar7[1] = (long)plVar22;
    auVar28._8_8_ = plVar19;
    auVar28._0_8_ = plVar11;
    return auVar28;
  }
  lVar8 = (long)plVar22 - *plVar7;
  plVar22 = (long *)((lVar8 >> 4) + 1);
  if ((ulong)plVar22 >> 0x3c == 0) {
    uVar16 = plVar7[2] - *plVar7;
    plVar19 = (long *)((long)uVar16 >> 3);
    if (plVar19 <= plVar22) {
      plVar19 = plVar22;
    }
    if (0x7fffffffffffffef < uVar16) {
      plVar19 = (long *)0xfffffffffffffff;
    }
    plVar9 = plVar7;
    FUN_1098e2abc();
    plVar2 = (long *)((long)plVar9 + lVar8);
    lVar8 = *param_2;
    plVar2[1] = param_2[1];
    *plVar2 = lVar8;
    plVar22 = plVar2 + 2;
    plVar11 = (long *)*plVar7;
    plVar4 = (long *)plVar7[1];
    lVar8 = (long)plVar11 - (long)plVar4;
    plVar2 = (long *)((long)plVar2 + lVar8);
    plVar20 = plVar2;
    if (lVar8 != 0) {
      do {
        plVar10 = plVar11 + 2;
        lVar8 = *plVar11;
        plVar20[1] = plVar11[1];
        *plVar20 = lVar8;
        plVar11 = plVar10;
        plVar20 = plVar20 + 2;
      } while (plVar10 != plVar4);
      plVar11 = (long *)*plVar7;
    }
    *plVar7 = (long)plVar2;
    plVar7[1] = (long)plVar22;
    plVar7[2] = (long)(plVar9 + (long)plVar19 * 2);
    if (plVar11 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_1098e2bb0;
  }
  FUN_1098e2aa8();
  puVar12 = &uStack_d0;
  puVar13 = &uStack_d0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d0 = 0x8000;
  uStack_cc = 0x20;
  uStack_cb = 0;
  uStack_c7 = 0xffffffff000000;
  FUN_1098e2c78();
  lVar8 = *param_2;
  *param_2 = (long)puVar12;
  param_2[1] = param_2[1] + (lVar8 - (long)puVar12);
  FUN_1098e2ca4(&uStack_d0,plVar7,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    auVar29._8_8_ = plVar7;
    auVar29._0_8_ = puVar13;
    return auVar29;
  }
  ___stack_chk_fail();
  pbVar5 = (byte *)*plVar7;
  if ((plVar7[1] == 0) || (*pbVar5 == 0x7d)) {
    auVar30._8_8_ = plVar7;
    auVar30._0_8_ = pbVar5;
    return auVar30;
  }
  pbVar3 = pbVar5 + plVar7[1];
  pbVar14 = pbVar3;
  if ((long)pbVar3 - (long)pbVar5 < 2) {
    if (pbVar5 == pbVar3) {
LAB_109445bc8:
      auVar23._8_8_ = pbVar14;
      auVar23._0_8_ = pbVar5;
      return auVar23;
    }
  }
  else if (pbVar5[1] - 0x3c < 0x23 && (1L << ((ulong)(pbVar5[1] - 0x3c) & 0x3f) & 0x400000005U) != 0
          ) {
    bVar17 = 0;
    goto LAB_109445820;
  }
  bVar17 = *pbVar5;
LAB_109445820:
  uVar21 = 0;
  puVar12 = puVar13;
  do {
    switch(bVar17) {
    case 0x20:
    case 0x2b:
      uVar18 = 0xc00;
      if (bVar17 != 0x20) {
        uVar18 = 0x800;
      }
      *puVar13 = *puVar13 & 0xfffff3ff | uVar18;
    case 0x2d:
      if (1 < uVar21) goto LAB_109445bf8;
      pbVar5 = pbVar5 + 1;
      uVar21 = 2;
      break;
    default:
      bVar17 = *pbVar5;
      if (bVar17 == 0x7d) goto LAB_109445bc8;
      puVar12 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar17 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = pbVar5 + (long)puVar12;
      if ((long)pbVar3 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar17 == 0x7b) goto LAB_109445c10;
      bVar17 = *pbVar1;
      if (bVar17 == 0x3c) {
        uVar18 = 8;
      }
      else if (bVar17 == 0x5e) {
        uVar18 = 0x18;
      }
      else {
        if (bVar17 != 0x3e) goto LAB_109445bf8;
        uVar18 = 0x10;
      }
      if (uVar21 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar13);
      *puVar13 = *puVar13 & 0xffffffc7 | uVar18;
      uVar21 = 1;
      pbVar14 = pbVar5;
      pbVar5 = pbVar1 + 1;
      break;
    case 0x23:
      if (2 < uVar21) goto LAB_109445bf8;
      *puVar13 = *puVar13 | 0x2000;
      pbVar5 = pbVar5 + 1;
      uVar21 = 3;
      break;
    case 0x2e:
LAB_109445bf8:
      FUN_1099a5aa4(&UNK_10f56d78b);
      FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
      puVar6 = &UNK_10f3dbec2;
      FUN_1099a5aa4();
      pbVar5 = puVar6 + 1;
      if (pbVar5 != pbVar14) {
        FUN_109445cb8();
        *puVar12 = *puVar12 & 0xfffffcff | (int)pbVar14 << 8;
        auVar24._8_8_ = pbVar14;
        auVar24._0_8_ = pbVar5;
        return auVar24;
      }
      puVar13 = (uint *)&UNK_10f56d7a4;
      FUN_1099a5aa4();
      *puVar13 = *puVar13 & 0xfffc7fff | (int)puVar12 << 0xf;
      if (puVar12 != (uint *)0x0) {
        if (puVar12 == (uint *)0x1) {
          *(byte *)(puVar13 + 1) = *pbVar14;
          *(undefined2 *)((long)puVar13 + 5) = 0;
          auVar25._8_8_ = pbVar14;
          auVar25._0_8_ = puVar13;
          return auVar25;
        }
        puVar15 = (uint *)0x0;
        do {
          *(byte *)((long)puVar13 + ((ulong)puVar15 & 3) + 4) = pbVar14[(long)puVar15];
          puVar15 = (uint *)((long)puVar15 + 1);
        } while (puVar12 != puVar15);
      }
      auVar26._8_8_ = pbVar14;
      auVar26._0_8_ = puVar13;
      return auVar26;
    case 0x30:
      if (3 < uVar21) goto LAB_109445bf8;
      if ((*puVar13 & 0x38) == 0) {
        *(undefined1 *)(puVar13 + 1) = 0x30;
        *puVar13 = *puVar13 & 0xfffc7fc7 | 0x8020;
      }
      pbVar5 = pbVar5 + 1;
      uVar21 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar21) goto LAB_109445bf8;
      puVar12 = puVar13 + 2;
      pbVar14 = pbVar3;
      FUN_109445cb8();
      *puVar13 = *puVar13 & 0xffffff3f | (int)pbVar14 << 6;
      uVar21 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar21 != 0) goto LAB_109445bf8;
      uVar21 = 0;
      if (bVar17 == 0x3e) {
        uVar21 = 0x10;
      }
      uVar18 = 0x18;
      if (bVar17 != 0x5e) {
        uVar18 = uVar21;
      }
      uVar21 = 8;
      if (bVar17 != 0x3c) {
        uVar21 = uVar18;
      }
      *puVar13 = *puVar13 & 0xffffffc7 | uVar21;
      pbVar5 = pbVar5 + 1;
      uVar21 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *puVar13 = *puVar13 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar13 = *puVar13 | 0x1000;
    case 0x62:
      uVar21 = *puVar13 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *puVar13 = *puVar13 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar13 = *puVar13 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar13 = *puVar13 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar21) goto LAB_109445bf8;
      *puVar13 = *puVar13 | 0x4000;
      pbVar5 = pbVar5 + 1;
      uVar21 = 7;
      break;
    case 0x58:
      *puVar13 = *puVar13 | 0x1000;
    case 0x78:
      uVar21 = *puVar13 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *puVar13 = uVar21;
      pbVar5 = pbVar5 + 1;
      goto LAB_109445bc8;
    case 99:
      uVar21 = *puVar13 | 7;
      goto code_r0x000109445bc0;
    case 100:
      uVar21 = *puVar13 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar21 = *puVar13 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (pbVar5 == pbVar3) goto LAB_109445bc8;
    bVar17 = *pbVar5;
  } while( true );
}



/* Entry: 1098e2abc; end: 1098e2aef;  */

/* WARNING: Removing unreachable block (ram,0x000109445b90) */
/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */

undefined1  [16] FUN_1098e2abc(long *param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  uint *puVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uStack_c0;
  undefined1 uStack_bc;
  undefined4 uStack_bb;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar7 = (long)param_2 << 4;
    __Znwm(lVar7);
    auVar26._8_8_ = param_2;
    auVar26._0_8_ = lVar7;
    return auVar26;
  }
  func_0x000104c4f740();
  plVar21 = (long *)param_1[1];
  if (plVar21 < (long *)param_1[2]) {
    lVar7 = *param_2;
    plVar21[1] = param_2[1];
    *plVar21 = lVar7;
    plVar21 = plVar21 + 2;
    plVar10 = param_1;
    plVar18 = param_2;
LAB_1098e2bb0:
    param_1[1] = (long)plVar21;
    auVar27._8_8_ = plVar18;
    auVar27._0_8_ = plVar10;
    return auVar27;
  }
  lVar7 = (long)plVar21 - *param_1;
  plVar21 = (long *)((lVar7 >> 4) + 1);
  if ((ulong)plVar21 >> 0x3c == 0) {
    uVar15 = param_1[2] - *param_1;
    plVar18 = (long *)((long)uVar15 >> 3);
    if (plVar18 <= plVar21) {
      plVar18 = plVar21;
    }
    if (0x7fffffffffffffef < uVar15) {
      plVar18 = (long *)0xfffffffffffffff;
    }
    plVar8 = param_1;
    FUN_1098e2abc();
    plVar2 = (long *)((long)plVar8 + lVar7);
    lVar7 = *param_2;
    plVar2[1] = param_2[1];
    *plVar2 = lVar7;
    plVar21 = plVar2 + 2;
    plVar10 = (long *)*param_1;
    plVar4 = (long *)param_1[1];
    lVar7 = (long)plVar10 - (long)plVar4;
    plVar2 = (long *)((long)plVar2 + lVar7);
    plVar19 = plVar2;
    if (lVar7 != 0) {
      do {
        plVar9 = plVar10 + 2;
        lVar7 = *plVar10;
        plVar19[1] = plVar10[1];
        *plVar19 = lVar7;
        plVar10 = plVar9;
        plVar19 = plVar19 + 2;
      } while (plVar9 != plVar4);
      plVar10 = (long *)*param_1;
    }
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar21;
    param_1[2] = (long)(plVar8 + (long)plVar18 * 2);
    if (plVar10 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_1098e2bb0;
  }
  FUN_1098e2aa8();
  puVar11 = &uStack_c0;
  puVar12 = &uStack_c0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0x8000;
  uStack_bc = 0x20;
  uStack_bb = 0;
  uStack_b7 = 0xffffffff000000;
  FUN_1098e2c78();
  lVar7 = *param_2;
  *param_2 = (long)puVar11;
  param_2[1] = param_2[1] + (lVar7 - (long)puVar11);
  FUN_1098e2ca4(&uStack_c0,param_1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    auVar28._8_8_ = param_1;
    auVar28._0_8_ = puVar12;
    return auVar28;
  }
  ___stack_chk_fail();
  pbVar5 = (byte *)*param_1;
  if ((param_1[1] == 0) || (*pbVar5 == 0x7d)) {
    auVar29._8_8_ = param_1;
    auVar29._0_8_ = pbVar5;
    return auVar29;
  }
  pbVar3 = pbVar5 + param_1[1];
  pbVar13 = pbVar3;
  if ((long)pbVar3 - (long)pbVar5 < 2) {
    if (pbVar5 == pbVar3) {
LAB_109445bc8:
      auVar22._8_8_ = pbVar13;
      auVar22._0_8_ = pbVar5;
      return auVar22;
    }
  }
  else if (pbVar5[1] - 0x3c < 0x23 && (1L << ((ulong)(pbVar5[1] - 0x3c) & 0x3f) & 0x400000005U) != 0
          ) {
    bVar16 = 0;
    goto LAB_109445820;
  }
  bVar16 = *pbVar5;
LAB_109445820:
  uVar20 = 0;
  puVar11 = puVar12;
  do {
    switch(bVar16) {
    case 0x20:
    case 0x2b:
      uVar17 = 0xc00;
      if (bVar16 != 0x20) {
        uVar17 = 0x800;
      }
      *puVar12 = *puVar12 & 0xfffff3ff | uVar17;
    case 0x2d:
      if (1 < uVar20) goto LAB_109445bf8;
      pbVar5 = pbVar5 + 1;
      uVar20 = 2;
      break;
    default:
      bVar16 = *pbVar5;
      if (bVar16 == 0x7d) goto LAB_109445bc8;
      puVar11 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar16 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = pbVar5 + (long)puVar11;
      if ((long)pbVar3 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar16 == 0x7b) goto LAB_109445c10;
      bVar16 = *pbVar1;
      if (bVar16 == 0x3c) {
        uVar17 = 8;
      }
      else if (bVar16 == 0x5e) {
        uVar17 = 0x18;
      }
      else {
        if (bVar16 != 0x3e) goto LAB_109445bf8;
        uVar17 = 0x10;
      }
      if (uVar20 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar12);
      *puVar12 = *puVar12 & 0xffffffc7 | uVar17;
      uVar20 = 1;
      pbVar13 = pbVar5;
      pbVar5 = pbVar1 + 1;
      break;
    case 0x23:
      if (2 < uVar20) goto LAB_109445bf8;
      *puVar12 = *puVar12 | 0x2000;
      pbVar5 = pbVar5 + 1;
      uVar20 = 3;
      break;
    case 0x2e:
LAB_109445bf8:
      FUN_1099a5aa4(&UNK_10f56d78b);
      FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
      puVar6 = &UNK_10f3dbec2;
      FUN_1099a5aa4();
      pbVar5 = puVar6 + 1;
      if (pbVar5 != pbVar13) {
        FUN_109445cb8();
        *puVar11 = *puVar11 & 0xfffffcff | (int)pbVar13 << 8;
        auVar23._8_8_ = pbVar13;
        auVar23._0_8_ = pbVar5;
        return auVar23;
      }
      puVar12 = (uint *)&UNK_10f56d7a4;
      FUN_1099a5aa4();
      *puVar12 = *puVar12 & 0xfffc7fff | (int)puVar11 << 0xf;
      if (puVar11 != (uint *)0x0) {
        if (puVar11 == (uint *)0x1) {
          *(byte *)(puVar12 + 1) = *pbVar13;
          *(undefined2 *)((long)puVar12 + 5) = 0;
          auVar24._8_8_ = pbVar13;
          auVar24._0_8_ = puVar12;
          return auVar24;
        }
        puVar14 = (uint *)0x0;
        do {
          *(byte *)((long)puVar12 + ((ulong)puVar14 & 3) + 4) = pbVar13[(long)puVar14];
          puVar14 = (uint *)((long)puVar14 + 1);
        } while (puVar11 != puVar14);
      }
      auVar25._8_8_ = pbVar13;
      auVar25._0_8_ = puVar12;
      return auVar25;
    case 0x30:
      if (3 < uVar20) goto LAB_109445bf8;
      if ((*puVar12 & 0x38) == 0) {
        *(undefined1 *)(puVar12 + 1) = 0x30;
        *puVar12 = *puVar12 & 0xfffc7fc7 | 0x8020;
      }
      pbVar5 = pbVar5 + 1;
      uVar20 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar20) goto LAB_109445bf8;
      puVar11 = puVar12 + 2;
      pbVar13 = pbVar3;
      FUN_109445cb8();
      *puVar12 = *puVar12 & 0xffffff3f | (int)pbVar13 << 6;
      uVar20 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar20 != 0) goto LAB_109445bf8;
      uVar20 = 0;
      if (bVar16 == 0x3e) {
        uVar20 = 0x10;
      }
      uVar17 = 0x18;
      if (bVar16 != 0x5e) {
        uVar17 = uVar20;
      }
      uVar20 = 8;
      if (bVar16 != 0x3c) {
        uVar20 = uVar17;
      }
      *puVar12 = *puVar12 & 0xffffffc7 | uVar20;
      pbVar5 = pbVar5 + 1;
      uVar20 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *puVar12 = *puVar12 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar12 = *puVar12 | 0x1000;
    case 0x62:
      uVar20 = *puVar12 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *puVar12 = *puVar12 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar12 = *puVar12 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar12 = *puVar12 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar20) goto LAB_109445bf8;
      *puVar12 = *puVar12 | 0x4000;
      pbVar5 = pbVar5 + 1;
      uVar20 = 7;
      break;
    case 0x58:
      *puVar12 = *puVar12 | 0x1000;
    case 0x78:
      uVar20 = *puVar12 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *puVar12 = uVar20;
      pbVar5 = pbVar5 + 1;
      goto LAB_109445bc8;
    case 99:
      uVar20 = *puVar12 | 7;
      goto code_r0x000109445bc0;
    case 100:
      uVar20 = *puVar12 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar20 = *puVar12 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (pbVar5 == pbVar3) goto LAB_109445bc8;
    bVar16 = *pbVar5;
  } while( true );
}



/* Entry: 1098e2af0; end: 1098e2c77;  */

/* WARNING: Removing unreachable block (ram,0x000109445b90) */
/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */

uint * FUN_1098e2af0(uint *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined4 uStack_9b;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar16 = *(long **)(param_1 + 2);
  if (plVar16 < *(long **)(param_1 + 4)) {
    lVar17 = *param_2;
    plVar16[1] = param_2[1];
    *plVar16 = lVar17;
    plVar16 = plVar16 + 2;
    puVar6 = param_1;
LAB_1098e2bb0:
    *(long **)(param_1 + 2) = plVar16;
    return puVar6;
  }
  lVar17 = (long)plVar16 - *(long *)param_1;
  uVar1 = (lVar17 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar10 = (long)*(long **)(param_1 + 4) - *(long *)param_1;
    uVar13 = (long)uVar10 >> 3;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar13 = 0xfffffffffffffff;
    }
    puVar5 = param_1;
    FUN_1098e2abc();
    plVar3 = (long *)((long)puVar5 + lVar17);
    lVar17 = *param_2;
    plVar3[1] = param_2[1];
    *plVar3 = lVar17;
    plVar16 = plVar3 + 2;
    puVar6 = *(uint **)param_1;
    puVar9 = *(uint **)(param_1 + 2);
    lVar17 = (long)puVar6 - (long)puVar9;
    plVar3 = (long *)((long)plVar3 + lVar17);
    plVar14 = plVar3;
    if (lVar17 != 0) {
      do {
        puVar8 = puVar6 + 4;
        lVar17 = *(long *)puVar6;
        plVar14[1] = *(long *)(puVar6 + 2);
        *plVar14 = lVar17;
        puVar6 = puVar8;
        plVar14 = plVar14 + 2;
      } while (puVar8 != puVar9);
      puVar6 = *(uint **)param_1;
    }
    *(long **)param_1 = plVar3;
    *(long **)(param_1 + 2) = plVar16;
    *(uint **)(param_1 + 4) = puVar5 + uVar13 * 4;
    if (puVar6 != (uint *)0x0) {
      __ZdlPv();
    }
    goto LAB_1098e2bb0;
  }
  FUN_1098e2aa8();
  puVar6 = &uStack_a0;
  puVar9 = &uStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a0 = 0x8000;
  uStack_9c = 0x20;
  uStack_9b = 0;
  uStack_97 = 0xffffffff000000;
  FUN_1098e2c78();
  lVar17 = *param_2;
  *param_2 = (long)puVar6;
  param_2[1] = param_2[1] + (lVar17 - (long)puVar6);
  FUN_1098e2ca4(&uStack_a0,param_1,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar6 = *(uint **)param_1;
  if ((*(long *)(param_1 + 2) == 0) || ((byte)*puVar6 == 0x7d)) {
    return puVar6;
  }
  puVar5 = (uint *)((long)puVar6 + *(long *)(param_1 + 2));
  if ((long)puVar5 - (long)puVar6 < 2) {
    if (puVar6 == puVar5) {
LAB_109445bc8:
      return puVar6;
    }
  }
  else {
    uVar15 = *(byte *)((long)puVar6 + 1) - 0x3c;
    if (uVar15 < 0x23 && (1L << ((ulong)uVar15 & 0x3f) & 0x400000005U) != 0) {
      bVar11 = 0;
      goto LAB_109445820;
    }
  }
  bVar11 = (byte)*puVar6;
LAB_109445820:
  uVar15 = 0;
  puVar7 = puVar5;
  puVar8 = puVar9;
  do {
    switch(bVar11) {
    case 0x20:
    case 0x2b:
      uVar12 = 0xc00;
      if (bVar11 != 0x20) {
        uVar12 = 0x800;
      }
      *puVar9 = *puVar9 & 0xfffff3ff | uVar12;
    case 0x2d:
      if (1 < uVar15) goto LAB_109445bf8;
      puVar6 = (uint *)((long)puVar6 + 1);
      uVar15 = 2;
      break;
    default:
      bVar11 = (byte)*puVar6;
      if (bVar11 == 0x7d) {
        return puVar6;
      }
      puVar8 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar11 >> 2) & 0x3e) & 3) + 1);
      pbVar2 = (byte *)((long)puVar6 + (long)puVar8);
      if ((long)puVar5 - (long)pbVar2 < 1) goto LAB_109445bf8;
      if (bVar11 == 0x7b) goto LAB_109445c10;
      bVar11 = *pbVar2;
      if (bVar11 == 0x3c) {
        uVar12 = 8;
      }
      else if (bVar11 == 0x5e) {
        uVar12 = 0x18;
      }
      else {
        if (bVar11 != 0x3e) goto LAB_109445bf8;
        uVar12 = 0x10;
      }
      if (uVar15 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar9);
      *puVar9 = *puVar9 & 0xffffffc7 | uVar12;
      uVar15 = 1;
      puVar7 = puVar6;
      puVar6 = (uint *)(pbVar2 + 1);
      break;
    case 0x23:
      if (2 < uVar15) goto LAB_109445bf8;
      *puVar9 = *puVar9 | 0x2000;
      puVar6 = (uint *)((long)puVar6 + 1);
      uVar15 = 3;
      break;
    case 0x2e:
LAB_109445bf8:
      FUN_1099a5aa4(&UNK_10f56d78b);
      FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
      puVar4 = &UNK_10f3dbec2;
      FUN_1099a5aa4();
      puVar6 = (uint *)(puVar4 + 1);
      if (puVar6 != puVar7) {
        FUN_109445cb8();
        *puVar8 = *puVar8 & 0xfffffcff | (int)puVar7 << 8;
        return puVar6;
      }
      puVar6 = (uint *)&UNK_10f56d7a4;
      FUN_1099a5aa4();
      *puVar6 = *puVar6 & 0xfffc7fff | (int)puVar8 << 0xf;
      if (puVar8 != (uint *)0x0) {
        if (puVar8 == (uint *)0x1) {
          *(byte *)(puVar6 + 1) = (byte)*puVar7;
          *(undefined2 *)((long)puVar6 + 5) = 0;
          return puVar6;
        }
        puVar9 = (uint *)0x0;
        do {
          *(byte *)((long)puVar6 + ((ulong)puVar9 & 3) + 4) = *(byte *)((long)puVar7 + (long)puVar9)
          ;
          puVar9 = (uint *)((long)puVar9 + 1);
        } while (puVar8 != puVar9);
      }
      return puVar6;
    case 0x30:
      if (3 < uVar15) goto LAB_109445bf8;
      if ((*puVar9 & 0x38) == 0) {
        *(undefined1 *)(puVar9 + 1) = 0x30;
        *puVar9 = *puVar9 & 0xfffc7fc7 | 0x8020;
      }
      puVar6 = (uint *)((long)puVar6 + 1);
      uVar15 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar15) goto LAB_109445bf8;
      puVar8 = puVar9 + 2;
      puVar7 = puVar5;
      FUN_109445cb8();
      *puVar9 = *puVar9 & 0xffffff3f | (int)puVar7 << 6;
      uVar15 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar15 != 0) goto LAB_109445bf8;
      uVar15 = 0;
      if (bVar11 == 0x3e) {
        uVar15 = 0x10;
      }
      uVar12 = 0x18;
      if (bVar11 != 0x5e) {
        uVar12 = uVar15;
      }
      uVar15 = 8;
      if (bVar11 != 0x3c) {
        uVar15 = uVar12;
      }
      *puVar9 = *puVar9 & 0xffffffc7 | uVar15;
      puVar6 = (uint *)((long)puVar6 + 1);
      uVar15 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *puVar9 = *puVar9 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar9 = *puVar9 | 0x1000;
    case 0x62:
      uVar15 = *puVar9 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *puVar9 = *puVar9 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar9 = *puVar9 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar9 = *puVar9 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar15) goto LAB_109445bf8;
      *puVar9 = *puVar9 | 0x4000;
      puVar6 = (uint *)((long)puVar6 + 1);
      uVar15 = 7;
      break;
    case 0x58:
      *puVar9 = *puVar9 | 0x1000;
    case 0x78:
      uVar15 = *puVar9 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *puVar9 = uVar15;
      puVar6 = (uint *)((long)puVar6 + 1);
      goto LAB_109445bc8;
    case 99:
      uVar15 = *puVar9 | 7;
      goto code_r0x000109445bc0;
    case 100:
      uVar15 = *puVar9 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar15 = *puVar9 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar6 == puVar5) {
      return puVar6;
    }
    bVar11 = (byte)*puVar6;
  } while( true );
}



/* Entry: 1098e2c78; end: 1098e2ca3;  */

/* WARNING: Removing unreachable block (ram,0x000109445b90) */
/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */

uint * FUN_1098e2c78(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (uint *)*param_2;
  if ((param_2[1] == 0) || ((byte)*puVar2 == 0x7d)) {
    return puVar2;
  }
  puVar6 = (uint *)((long)puVar2 + param_2[1]);
  if ((long)puVar6 - (long)puVar2 < 2) {
    if (puVar2 == puVar6) {
LAB_109445bc8:
      return puVar2;
    }
  }
  else {
    uVar9 = *(byte *)((long)puVar2 + 1) - 0x3c;
    if (uVar9 < 0x23 && (1L << ((ulong)uVar9 & 0x3f) & 0x400000005U) != 0) {
      bVar7 = 0;
      goto LAB_109445820;
    }
  }
  bVar7 = (byte)*puVar2;
LAB_109445820:
  uVar9 = 0;
  puVar4 = puVar6;
  puVar5 = param_1;
  do {
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      uVar8 = 0xc00;
      if (bVar7 != 0x20) {
        uVar8 = 0x800;
      }
      *param_1 = *param_1 & 0xfffff3ff | uVar8;
    case 0x2d:
      if (1 < uVar9) goto LAB_109445bf8;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 2;
      break;
    default:
      bVar7 = (byte)*puVar2;
      if (bVar7 == 0x7d) {
        return puVar2;
      }
      puVar5 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar7 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar2 + (long)puVar5);
      if ((long)puVar6 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar7 == 0x7b) goto LAB_109445c10;
      bVar7 = *pbVar1;
      if (bVar7 == 0x3c) {
        uVar8 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar8 = 0x18;
      }
      else {
        if (bVar7 != 0x3e) goto LAB_109445bf8;
        uVar8 = 0x10;
      }
      if (uVar9 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_1);
      *param_1 = *param_1 & 0xffffffc7 | uVar8;
      uVar9 = 1;
      puVar4 = puVar2;
      puVar2 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if (2 < uVar9) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x2000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 3;
      break;
    case 0x2e:
LAB_109445bf8:
      FUN_1099a5aa4(&UNK_10f56d78b);
      FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
      puVar3 = &UNK_10f3dbec2;
      FUN_1099a5aa4();
      puVar2 = (uint *)(puVar3 + 1);
      if (puVar2 != puVar4) {
        FUN_109445cb8();
        *puVar5 = *puVar5 & 0xfffffcff | (int)puVar4 << 8;
        return puVar2;
      }
      puVar2 = (uint *)&UNK_10f56d7a4;
      FUN_1099a5aa4();
      *puVar2 = *puVar2 & 0xfffc7fff | (int)puVar5 << 0xf;
      if (puVar5 != (uint *)0x0) {
        if (puVar5 == (uint *)0x1) {
          *(byte *)(puVar2 + 1) = (byte)*puVar4;
          *(undefined2 *)((long)puVar2 + 5) = 0;
          return puVar2;
        }
        puVar6 = (uint *)0x0;
        do {
          *(byte *)((long)puVar2 + ((ulong)puVar6 & 3) + 4) = *(byte *)((long)puVar4 + (long)puVar6)
          ;
          puVar6 = (uint *)((long)puVar6 + 1);
        } while (puVar5 != puVar6);
      }
      return puVar2;
    case 0x30:
      if (3 < uVar9) goto LAB_109445bf8;
      if ((*param_1 & 0x38) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        *param_1 = *param_1 & 0xfffc7fc7 | 0x8020;
      }
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar9) goto LAB_109445bf8;
      puVar5 = param_1 + 2;
      puVar4 = puVar6;
      FUN_109445cb8();
      *param_1 = *param_1 & 0xffffff3f | (int)puVar4 << 6;
      uVar9 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar9 != 0) goto LAB_109445bf8;
      uVar9 = 0;
      if (bVar7 == 0x3e) {
        uVar9 = 0x10;
      }
      uVar8 = 0x18;
      if (bVar7 != 0x5e) {
        uVar8 = uVar9;
      }
      uVar9 = 8;
      if (bVar7 != 0x3c) {
        uVar9 = uVar8;
      }
      *param_1 = *param_1 & 0xffffffc7 | uVar9;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *param_1 = *param_1 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *param_1 = *param_1 | 0x1000;
    case 0x62:
      uVar9 = *param_1 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *param_1 = *param_1 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *param_1 = *param_1 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *param_1 = *param_1 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar9) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x4000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 7;
      break;
    case 0x58:
      *param_1 = *param_1 | 0x1000;
    case 0x78:
      uVar9 = *param_1 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *param_1 = uVar9;
      puVar2 = (uint *)((long)puVar2 + 1);
      goto LAB_109445bc8;
    case 99:
      uVar9 = *param_1 | 7;
      goto code_r0x000109445bc0;
    case 100:
      uVar9 = *param_1 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar9 = *param_1 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar2 == puVar6) {
      return puVar2;
    }
    bVar7 = (byte)*puVar2;
  } while( true );
}



/* Entry: 1098e2ca4; end: 1098e3123;  */

/* WARNING: Possible PIC construction at 0x0001098e2ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098e2de0) */

ulong * FUN_1098e2ca4(ulong *param_1,uint *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong *puVar5;
  bool bVar6;
  ulong *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong *unaff_x19;
  ulong *puVar19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  uint *unaff_x22;
  uint *puVar20;
  ulong *puVar21;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_100 [128];
  ulong uStack_80;
  undefined8 uStack_78;
  uint auStack_70 [4];
  undefined4 uStack_60;
  long lStack_48;
  
  puVar13 = &uStack_80;
  puVar5 = &uStack_80;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((uint)*param_1 & 0x3c0) == 0) {
    puVar19 = (ulong *)*param_3;
    uVar9 = *param_2;
    puVar20 = (uint *)(ulong)uVar9;
    puVar21 = param_1;
    puVar12 = param_2;
    puVar13 = param_3;
    if (((uint)*param_1 >> 0xe & 1) != 0) {
      uStack_60 = 1;
      puVar12 = auStack_70;
      puVar21 = puVar19;
      puVar13 = param_1;
      auStack_70[0] = uVar9;
      FUN_1099a58c4();
      if (((ulong)puVar21 & 1) != 0) goto LAB_1098e2de4;
    }
    if ((int)uVar9 < 0) {
      uVar15 = 0x100002d00000000;
      puVar20 = (uint *)(ulong)-uVar9;
    }
    else {
      uVar15 = (ulong)*(uint *)(&UNK_10e00b0d0 + ((ulong)((uint)*param_1 >> 10) & 3) * 4) << 0x20;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      puVar12 = (uint *)(uVar15 | (ulong)puVar20);
    }
    else {
LAB_1098e2e64:
      unaff_x22 = puVar20;
      unaff_x20 = param_1;
      unaff_x19 = puVar19;
      param_1 = puVar13;
      puVar19 = puVar21;
      unaff_x30 = 0x1098e2e68;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)&uStack_80;
      unaff_x21 = param_3;
      unaff_x29 = puVar1;
    }
  }
  else {
    uStack_80 = *param_1;
    uStack_78 = param_1[1];
    uVar15 = uStack_80;
    uVar10 = (uint)uStack_80;
    unaff_x23 = uStack_80 & 0xffffffff;
    uVar9 = (uint)uStack_80 >> 6 & 3;
    uStack_80 = uVar15;
    if (uVar9 != 0) {
      FUN_1094472f0(uVar9,param_1 + 2,param_3);
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar9);
    }
    uVar9 = uVar10 >> 8 & 3;
    if (uVar9 != 0) {
      FUN_1094472f0(uVar9,param_1 + 4,param_3);
      uStack_78 = CONCAT44(uVar9,(undefined4)uStack_78);
    }
    puVar19 = (ulong *)*param_3;
    uVar9 = *param_2;
    unaff_x20 = (ulong *)(ulong)uVar9;
    if ((uVar10 >> 0xe & 1) != 0) {
      uStack_60 = 1;
      puVar12 = auStack_70;
      puVar21 = puVar19;
      auStack_70[0] = uVar9;
      FUN_1099a58c4();
      param_1 = unaff_x20;
      puVar20 = param_2;
      if (((ulong)puVar21 & 1) != 0) {
LAB_1098e2de4:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return puVar19;
        }
        goto LAB_1098e2e64;
      }
    }
    if ((int)uVar9 < 0) {
      uVar15 = 0x100002d00000000;
      unaff_x20 = (ulong *)(ulong)-uVar9;
    }
    else {
      uVar15 = (ulong)*(uint *)(&UNK_10e00b0d0 + (uStack_80 >> 10 & 3) * 4) << 0x20;
    }
    puVar12 = (uint *)(uVar15 | (ulong)unaff_x20);
    unaff_x30 = 0x1098e2de0;
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
    param_1 = puVar5;
    unaff_x19 = puVar19;
    unaff_x21 = param_3;
    unaff_x22 = param_2;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (ulong)puVar12 >> 0x20;
  puVar13 = (ulong *)((long)register0x00000008 + -0x48);
  uVar11 = (uint)*param_1;
  uVar9 = uVar11 & 7;
  iVar8 = (int)puVar12;
  uVar10 = (uint)((ulong)puVar12 >> 0x20);
  puVar21 = puVar13;
  if (uVar9 < 6) {
    if (uVar9 == 4) {
      puVar4 = &UNK_10f416238;
      if ((uVar11 & 0x1000) != 0) {
        puVar4 = &DAT_10f3ddedc;
      }
      do {
        puVar21 = (ulong *)((long)puVar21 + -1);
        *(undefined *)puVar21 = puVar4[(ulong)puVar12 & 0xf];
        uVar9 = (uint)puVar12;
        puVar12 = (uint *)((ulong)puVar12 >> 4 & 0xfffffff);
      } while (0xf < uVar9);
      uVar17 = 0x5830;
      uVar9 = 0x7830;
LAB_1098e2fe8:
      if ((uVar11 & 0x1000) != 0) {
        uVar9 = uVar17;
      }
      if (uVar15 != 0) {
        uVar9 = uVar9 << 8;
      }
      if ((uVar11 & 0x2000) != 0) {
        uVar10 = (uVar9 | uVar10) + 0x2000000;
      }
      uVar15 = (ulong)uVar10;
    }
    else {
      if (uVar9 != 5) goto LAB_1098e2f60;
      lVar18 = 0;
      do {
        uVar9 = (uint)puVar12;
        puVar21 = (ulong *)((long)puVar21 + -1);
        *(byte *)puVar21 = (byte)puVar12 & 7 | 0x30;
        lVar18 = lVar18 + 1;
        puVar12 = (uint *)(ulong)(uVar9 >> 3);
      } while (7 < uVar9);
      if ((uVar11 >> 0xd & 1) != 0) {
        uVar9 = 0x30;
        if (uVar15 != 0) {
          uVar9 = 0x3000;
        }
        if ((int)*(uint *)((long)param_1 + 0xc) <= lVar18 && iVar8 != 0) {
          uVar10 = (uVar9 | uVar10) + 0x1000000;
        }
        uVar15 = (ulong)uVar10;
      }
    }
  }
  else {
    if (uVar9 == 6) {
      do {
        uVar9 = (uint)puVar12;
        puVar21 = (ulong *)((long)puVar21 + -1);
        *(byte *)puVar21 = (byte)puVar12 & 1 | 0x30;
        puVar12 = (uint *)(ulong)(uVar9 >> 1);
      } while (1 < uVar9);
      uVar17 = 0x4230;
      uVar9 = 0x6230;
      goto LAB_1098e2fe8;
    }
    if (uVar9 == 7) {
      *(bool *)((long)register0x00000008 + -0x80) = (uVar11 & 7) == 1;
      *(char *)((long)register0x00000008 + -0x7f) = (char)puVar12;
      puVar14 = (ulong *)0x1;
      FUN_1098e319c();
      puVar7 = puVar19;
      goto LAB_1098e30ec;
    }
LAB_1098e2f60:
    puVar21 = (ulong *)((long)register0x00000008 + -0x68);
    FUN_1098e3124();
  }
  iVar8 = (int)puVar13 - (int)puVar21;
  uVar11 = (uint)param_1[1];
  uVar17 = *(uint *)((long)param_1 + 0xc);
  uVar10 = (uint)uVar15;
  uVar9 = iVar8 + (uVar10 >> 0x18);
  if (uVar17 == 0xffffffff && uVar11 == 0) {
    if (puVar19[2] < puVar19[1] + (ulong)uVar9) {
      (*(code *)puVar19[3])(puVar19);
    }
    uVar10 = uVar10 & 0xffffff;
    if ((uVar15 & 0xffffff) != 0) {
      do {
        uVar16 = puVar19[1];
        uVar15 = uVar16 + 1;
        if (puVar19[2] < uVar15) {
          (*(code *)puVar19[3])(puVar19);
          uVar16 = puVar19[1];
          uVar15 = uVar16 + 1;
        }
        puVar19[1] = uVar15;
        *(char *)(*puVar19 + uVar16) = (char)uVar10;
        bVar6 = 0xff < uVar10;
        uVar10 = uVar10 >> 8;
      } while (bVar6);
    }
    puVar7 = puVar19;
    FUN_109446adc();
    param_1 = puVar21;
    puVar14 = puVar13;
  }
  else {
    uVar3 = uVar9;
    iVar2 = 0;
    if (uVar17 - iVar8 != 0 && iVar8 <= (int)uVar17) {
      uVar3 = uVar17 + (uVar10 >> 0x18);
      iVar2 = uVar17 - iVar8;
    }
    iVar8 = 0;
    if (uVar9 <= uVar11) {
      iVar8 = uVar11 - uVar9;
    }
    if (uVar9 > uVar11 || uVar11 - uVar9 == 0) {
      uVar11 = uVar9;
    }
    bVar6 = (*param_1 & 0x38) == 0x20;
    if (bVar6) {
      iVar2 = iVar8;
    }
    *(uint *)((long)register0x00000008 + -0x80) = uVar10;
    *(int *)((long)register0x00000008 + -0x7c) = iVar2;
    if (bVar6) {
      uVar3 = uVar11;
    }
    puVar14 = (ulong *)(ulong)uVar3;
    *(ulong **)((long)register0x00000008 + -0x78) = puVar21;
    *(ulong **)((long)register0x00000008 + -0x70) = puVar13;
    FUN_1098e33e4();
    puVar7 = puVar19;
  }
LAB_1098e30ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x48)) {
    ___stack_chk_fail();
    uVar9 = (uint)puVar14;
    uVar10 = (uint)param_1;
    if (99 < uVar10) {
      do {
        uVar15 = (ulong)param_1 & 0xffffffff;
        uVar10 = (uint)(uVar15 / 100);
        uVar11 = (uint)param_1;
        uVar9 = (int)puVar14 - 2;
        puVar14 = (ulong *)(ulong)uVar9;
        *(undefined2 *)((long)puVar7 + (long)puVar14) =
             *(undefined2 *)(&UNK_10e00b0ea + (ulong)(uVar11 + (int)(uVar15 / 100) * -100) * 2);
        param_1 = (ulong *)(uVar15 / 100);
      } while (0x270 < uVar11 >> 4);
    }
    if (uVar10 < 10) {
      uVar15 = (ulong)(uVar9 - 1);
      *(byte *)((long)puVar7 + uVar15) = (byte)uVar10 | 0x30;
    }
    else {
      uVar15 = (ulong)(uVar9 - 2);
      *(undefined2 *)((long)puVar7 + uVar15) = *(undefined2 *)(&UNK_10e00b0ea + (ulong)uVar10 * 2);
    }
    return (ulong *)((long)puVar7 + uVar15);
  }
  return puVar19;
}



/* Entry: 1098e3124; end: 1098e319b;  */

long FUN_1098e3124(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_2;
  if (99 < uVar1) {
    do {
      uVar3 = param_2 & 0xffffffff;
      uVar1 = (uint)(uVar3 / 100);
      uVar2 = (uint)param_2;
      param_3 = param_3 - 2;
      *(undefined2 *)(param_1 + (ulong)param_3) =
           *(undefined2 *)(&UNK_10e00b0ea + (ulong)(uVar2 + (int)(uVar3 / 100) * -100) * 2);
      param_2 = uVar3 / 100;
    } while (0x270 < uVar2 >> 4);
  }
  if (uVar1 < 10) {
    uVar3 = (ulong)(param_3 - 1);
    *(byte *)(param_1 + uVar3) = (byte)uVar1 | 0x30;
  }
  else {
    uVar3 = (ulong)(param_3 - 2);
    *(undefined2 *)(param_1 + uVar3) = *(undefined2 *)(&UNK_10e00b0ea + (ulong)uVar1 * 2);
  }
  return param_1 + uVar3;
}



/* Entry: 1098e319c; end: 1098e32af;  */

long * FUN_1098e319c(long *param_1,uint *param_2,long param_3,ulong param_4,char *param_5)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if (param_4 <= param_2[2]) {
    uVar5 = param_2[2] - param_4;
  }
  uVar4 = uVar5 >> ((long)(char)(&UNK_10e00b0e0)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar5 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar4 != 0) {
    FUN_1094471fc(param_1,uVar4,param_2);
  }
  cVar1 = param_5[1];
  if (*param_5 == '\x01') {
    FUN_1098e32b0(param_1,(long)cVar1);
  }
  else {
    lVar3 = param_1[1];
    uVar2 = lVar3 + 1;
    if ((ulong)param_1[2] < uVar2) {
      (*(code *)param_1[3])(param_1);
      lVar3 = param_1[1];
      uVar2 = lVar3 + 1;
    }
    param_1[1] = uVar2;
    *(char *)(*param_1 + lVar3) = cVar1;
  }
  if (uVar5 == uVar4) {
    return param_1;
  }
  lVar3 = uVar5 - uVar4;
  uVar5 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar5 == 1) {
    func_0x000109447280(param_1,lVar3,&stack0xffffffffffffffcf);
  }
  else if (lVar3 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar5);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 1098e32b0; end: 1098e33e3;  */

long * FUN_1098e32b0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  uint uStack_30;
  undefined1 uStack_21;
  
  uVar2 = (undefined1)param_2;
  lVar5 = param_1[1];
  uVar3 = lVar5 + 1;
  uStack_21 = uVar2;
  if ((ulong)param_1[2] < uVar3) {
    (*(code *)param_1[3])(param_1);
    lVar5 = param_1[1];
    uVar3 = lVar5 + 1;
  }
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + lVar5) = 0x27;
  uVar4 = 1;
  if ((((0x1f < param_2) && (param_2 != 0x22)) && (param_2 != 0x5c)) && (param_2 != 0x7f)) {
    uVar4 = param_2;
    FUN_1099a76e8();
    uVar4 = uVar4 ^ 1;
  }
  uVar1 = 0;
  if (param_2 != 0x22) {
    uVar1 = uVar4;
  }
  if ((param_2 == 0x27) || (uVar1 != 0)) {
    puStack_40 = &uStack_21;
    puStack_38 = &stack0xffffffffffffffe0;
    uStack_30 = param_2;
    FUN_10944667c(param_1,&puStack_40);
  }
  else {
    lVar5 = param_1[1];
    uVar3 = lVar5 + 1;
    if ((ulong)param_1[2] < uVar3) {
      (*(code *)param_1[3])(param_1);
      lVar5 = param_1[1];
      uVar3 = lVar5 + 1;
    }
    param_1[1] = uVar3;
    *(undefined1 *)(*param_1 + lVar5) = uVar2;
  }
  lVar5 = param_1[1];
  uVar3 = lVar5 + 1;
  if ((ulong)param_1[2] < uVar3) {
    (*(code *)param_1[3])(param_1);
    lVar5 = param_1[1];
    uVar3 = lVar5 + 1;
  }
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + lVar5) = 0x27;
  return param_1;
}



/* Entry: 1098e33e4; end: 1098e350b;  */

long * FUN_1098e33e4(long *param_1,uint *param_2,long param_3,ulong param_4,uint *param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 uStack_41;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar5 = uVar2 >> ((long)(char)(&UNK_10e00b0e5)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar5 != 0) {
    FUN_1094471fc(param_1,uVar5,param_2);
  }
  uVar6 = *param_5 & 0xffffff;
  if ((*param_5 & 0xffffff) != 0) {
    do {
      lVar4 = param_1[1];
      uVar3 = lVar4 + 1;
      if ((ulong)param_1[2] < uVar3) {
        (*(code *)param_1[3])(param_1);
        lVar4 = param_1[1];
        uVar3 = lVar4 + 1;
      }
      param_1[1] = uVar3;
      *(char *)(*param_1 + lVar4) = (char)uVar6;
      bVar1 = 0xff < uVar6;
      uVar6 = uVar6 >> 8;
    } while (bVar1);
  }
  uStack_41 = 0x30;
  FUN_1098e350c(param_1,param_5[1],&uStack_41);
  FUN_109446adc();
  if (uVar2 != uVar5) {
    FUN_1094471fc(param_1,uVar2 - uVar5,param_2);
  }
  return param_1;
}



/* Entry: 1098e350c; end: 1098e357b;  */

long * FUN_1098e350c(long *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *param_3;
    lVar3 = param_1[1];
    uVar2 = lVar3 + 1;
    if ((ulong)param_1[2] < uVar2) {
      (*(code *)param_1[3])(param_1);
      lVar3 = param_1[1];
      uVar2 = lVar3 + 1;
    }
    param_1[1] = uVar2;
    *(undefined1 *)(*param_1 + lVar3) = uVar1;
  }
  return param_1;
}



/* Entry: 1098e357c; end: 1098e384b;  */

void FUN_1098e357c(double param_1,ulong param_2,ulong param_3,long ****param_4,double **param_5,
                  double *param_6,long ****param_7,double *param_8,long ****param_9,double *param_10
                  )

{
  long ***ppplVar1;
  long ***ppplVar2;
  ulong uVar3;
  long ***ppplVar4;
  ulong uVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  double **ppdVar8;
  double *pdVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  double *pdVar12;
  long ****pppplVar13;
  long ***ppplVar14;
  ulong uVar15;
  ulong uVar16;
  long ***ppplVar17;
  long ***ppplVar18;
  long lVar19;
  long ***ppplVar20;
  long ***ppplVar21;
  double *pdVar22;
  long ***ppplVar23;
  ulong uVar24;
  long lVar25;
  long ****pppplVar26;
  double *pdVar27;
  long ****pppplVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double *pdStack_1f8;
  long ***ppplStack_1f0;
  long ***ppplStack_1e8;
  undefined1 uStack_191;
  long ***ppplStack_190;
  double **ppdStack_188;
  ulong uStack_180;
  long ***ppplStack_178;
  ulong uStack_168;
  long ***ppplStack_160;
  ulong uStack_158;
  ulong uStack_150;
  double **ppdStack_148;
  long lStack_138;
  undefined8 uStack_130;
  double **ppdStack_128;
  long lStack_118;
  double **ppdStack_110;
  long lStack_108;
  ulong uStack_100;
  double *pdStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  ulong uStack_c8;
  double *pdStack_b8;
  long ***ppplStack_b0;
  double **ppdStack_a0;
  long lStack_98;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = param_3;
  if ((long)param_2 <= (long)param_3) {
    uVar16 = param_2;
  }
  uVar24 = param_3;
  pppplVar6 = param_4;
  ppdVar8 = param_5;
  pdVar12 = param_6;
  pppplVar13 = param_7;
  if (0 < (long)uVar16) {
    lVar19 = 0;
    ppplStack_1e8 = (long ***)(param_4 + 1);
    uVar5 = uVar16;
    pdVar22 = param_6;
    pdStack_1f8 = param_8;
    ppplStack_1f0 = (long ***)param_4;
    do {
      uVar3 = uVar5 - 8;
      uVar24 = uVar5;
      if (7 < (long)uVar5) {
        uVar24 = 8;
      }
      if ((long)uVar5 < 2) {
        uVar5 = 1;
      }
      if (7 < (long)uVar5) {
        uVar5 = 8;
      }
      uVar15 = uVar16 - lVar19;
      param_2 = uVar15;
      if (7 < (long)uVar15) {
        param_2 = 8;
      }
      if (0 < (long)uVar15) {
        uVar15 = 0;
        lVar25 = 8;
        pppplVar26 = (long ****)ppplStack_1f0;
        pdVar27 = pdStack_1f8;
        pppplVar28 = (long ****)ppplStack_1e8;
        do {
          uVar24 = uVar24 - 1;
          if ((long)uVar24 < 1) {
            param_1 = *pdVar27;
          }
          else {
            lStack_138 = lVar19 + uVar15;
            dVar42 = *param_10;
            lStack_118 = lStack_138 + 1;
            lStack_108 = (long)pdVar22 + lVar25;
            uStack_130 = 0;
            uStack_e0 = 0;
            pppplVar6 = &ppplStack_190;
            ppplStack_190 = (long ***)pppplVar28;
            uStack_180 = uVar24;
            ppplStack_178 = (long ***)pppplVar26;
            uStack_168 = param_3;
            ppplStack_160 = (long ***)param_4;
            uStack_158 = uVar16;
            uStack_150 = param_3;
            ppdStack_148 = param_5;
            ppdStack_128 = param_5;
            ppdStack_110 = param_5;
            uStack_100 = uVar24;
            pdStack_f0 = param_6;
            uStack_e8 = param_3;
            lStack_d8 = lStack_118;
            uStack_c8 = param_3;
            ppplStack_b0 = (long ***)pppplVar28;
            ppdStack_a0 = param_5;
            lStack_98 = lStack_108;
            uStack_88 = param_3;
            FUN_1098e3f44(&pdStack_b8,&uStack_191);
            param_1 = *pdVar27 + param_1 * dVar42;
            *pdVar27 = param_1;
          }
          param_1 = param_1 + pdVar22[uVar15] * *param_10;
          uVar15 = uVar15 + 1;
          *pdVar27 = param_1;
          pdVar27 = pdVar27 + (long)param_9;
          pppplVar26 = pppplVar26 + (long)param_5;
          pppplVar28 = pppplVar28 + (long)param_5 + 1;
          lVar25 = lVar25 + 8;
        } while (uVar5 != uVar15);
      }
      lVar25 = param_2 + lVar19;
      uVar24 = param_3 - lVar25;
      if (0 < (long)uVar24) {
        ppplStack_190 = (long ***)(param_4 + lVar25 + lVar19 * (long)param_5);
        pdStack_b8 = param_6 + lVar25;
        pdVar12 = param_8 + lVar19 * (long)param_9;
        param_1 = *param_10;
        pppplVar6 = &ppplStack_190;
        ppdVar8 = &pdStack_b8;
        pppplVar13 = param_9;
        ppdStack_188 = param_5;
        ppplStack_b0 = (long ***)param_7;
        FUN_1098e384c();
      }
      lVar19 = lVar19 + 8;
      pdVar22 = pdVar22 + 8;
      pdStack_1f8 = pdStack_1f8 + (long)param_9 * 8;
      ppplStack_1f0 = ppplStack_1f0 + (long)param_5 * 8;
      ppplStack_1e8 = ppplStack_1e8 + (long)param_5 * 8 + 8;
      uVar5 = uVar3;
    } while (lVar19 < (long)uVar16);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar16 = 0;
    ppplVar18 = *pppplVar6;
    ppplVar2 = pppplVar6[1];
    if ((7 < (long)param_2) && ((ulong)((long)ppplVar2 * 8) < 0x7d01)) {
      uVar16 = 0;
      pdVar22 = *ppdVar8;
      pdVar27 = ppdVar8[1];
      ppplVar4 = ppplVar18 + (long)ppplVar2 * 7;
      ppplVar10 = ppplVar18 + (long)ppplVar2 * 6;
      ppplVar14 = ppplVar18 + (long)ppplVar2 * 5;
      ppplVar17 = ppplVar18 + (long)ppplVar2 * 4;
      ppplVar21 = ppplVar18 + (long)ppplVar2 * 3;
      ppplVar23 = ppplVar18 + (long)ppplVar2;
      ppplVar7 = ppplVar18 + (long)ppplVar2 * 2;
      ppplVar11 = ppplVar18;
      do {
        if ((long)uVar24 < 2) {
          dVar42 = 0.0;
          dVar44 = 0.0;
          dVar29 = 0.0;
          dVar45 = 0.0;
          dVar31 = 0.0;
          dVar36 = 0.0;
          dVar32 = 0.0;
          dVar33 = 0.0;
          dVar34 = 0.0;
          dVar35 = 0.0;
          dVar37 = 0.0;
          dVar46 = 0.0;
          dVar40 = 0.0;
          dVar38 = 0.0;
          dVar43 = 0.0;
          dVar30 = 0.0;
          uVar5 = 0;
        }
        else {
          dVar43 = 0.0;
          dVar30 = 0.0;
          dVar40 = 0.0;
          dVar38 = 0.0;
          lVar19 = 2;
          dVar37 = 0.0;
          dVar46 = 0.0;
          dVar34 = 0.0;
          dVar35 = 0.0;
          dVar32 = 0.0;
          dVar33 = 0.0;
          dVar31 = 0.0;
          dVar36 = 0.0;
          dVar29 = 0.0;
          dVar45 = 0.0;
          dVar42 = 0.0;
          dVar44 = 0.0;
          pdVar9 = pdVar22;
          ppplVar20 = ppplVar11;
          do {
            dVar41 = pdVar9[1];
            dVar39 = *pdVar9;
            dVar43 = dVar43 + dVar39 * (double)*ppplVar20;
            dVar30 = dVar30 + dVar41 * (double)ppplVar20[1];
            ppplVar1 = ppplVar20 + (long)ppplVar2;
            dVar40 = dVar40 + dVar39 * (double)*ppplVar1;
            dVar38 = dVar38 + dVar41 * (double)ppplVar1[1];
            ppplVar1 = ppplVar1 + (long)ppplVar2;
            dVar37 = dVar37 + dVar39 * (double)*ppplVar1;
            dVar46 = dVar46 + dVar41 * (double)ppplVar1[1];
            ppplVar1 = ppplVar1 + (long)ppplVar2;
            dVar34 = dVar34 + dVar39 * (double)*ppplVar1;
            dVar35 = dVar35 + dVar41 * (double)ppplVar1[1];
            ppplVar1 = ppplVar1 + (long)ppplVar2;
            dVar32 = dVar32 + dVar39 * (double)*ppplVar1;
            dVar33 = dVar33 + dVar41 * (double)ppplVar1[1];
            ppplVar1 = ppplVar1 + (long)ppplVar2;
            dVar31 = dVar31 + dVar39 * (double)*ppplVar1;
            dVar36 = dVar36 + dVar41 * (double)ppplVar1[1];
            ppplVar1 = ppplVar1 + (long)ppplVar2;
            dVar29 = dVar29 + dVar39 * (double)*ppplVar1;
            dVar45 = dVar45 + dVar41 * (double)ppplVar1[1];
            dVar42 = dVar42 + dVar39 * (double)ppplVar1[(long)ppplVar2];
            dVar44 = dVar44 + dVar41 * (double)(ppplVar1 + (long)ppplVar2)[1];
            lVar19 = lVar19 + 2;
            ppplVar20 = ppplVar20 + 2;
            pdVar9 = pdVar9 + (long)pdVar27 * 2;
            uVar5 = uVar24 & 0xfffffffffffffffe;
          } while (lVar19 <= (long)uVar24);
        }
        dVar43 = dVar43 + dVar30;
        dVar40 = dVar40 + dVar38;
        dVar37 = dVar37 + dVar46;
        dVar34 = dVar34 + dVar35;
        dVar32 = dVar32 + dVar33;
        dVar31 = dVar31 + dVar36;
        dVar29 = dVar29 + dVar45;
        dVar42 = dVar42 + dVar44;
        if ((long)uVar5 < (long)uVar24) {
          lVar19 = 0;
          pdVar9 = (double *)((long)pdVar22 + (long)pdVar27 * 8 * uVar5);
          do {
            dVar44 = *pdVar9;
            dVar43 = dVar43 + dVar44 * (double)ppplVar11[uVar5 + lVar19];
            dVar40 = dVar40 + dVar44 * (double)ppplVar23[uVar5 + lVar19];
            dVar37 = dVar37 + dVar44 * (double)ppplVar7[uVar5 + lVar19];
            dVar34 = dVar34 + dVar44 * (double)ppplVar21[uVar5 + lVar19];
            dVar32 = dVar32 + dVar44 * (double)ppplVar17[uVar5 + lVar19];
            dVar31 = dVar31 + dVar44 * (double)ppplVar14[uVar5 + lVar19];
            dVar29 = dVar29 + dVar44 * (double)ppplVar10[uVar5 + lVar19];
            dVar42 = dVar42 + dVar44 * (double)ppplVar4[uVar5 + lVar19];
            lVar19 = lVar19 + 1;
            pdVar9 = pdVar9 + (long)pdVar27;
          } while (uVar24 - uVar5 != lVar19);
        }
        pdVar12[uVar16 * (long)pppplVar13] = pdVar12[uVar16 * (long)pppplVar13] + dVar43 * param_1;
        lVar19 = (uVar16 | 1) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar40 * param_1;
        lVar19 = (uVar16 | 2) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar37 * param_1;
        lVar19 = (uVar16 | 3) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar34 * param_1;
        lVar19 = (uVar16 | 4) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar32 * param_1;
        lVar19 = (uVar16 | 5) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar31 * param_1;
        lVar19 = (uVar16 | 6) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar29 * param_1;
        lVar19 = (uVar16 | 7) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar42 * param_1;
        uVar16 = uVar16 + 8;
        ppplVar11 = ppplVar11 + (long)ppplVar2 * 8;
        ppplVar4 = ppplVar4 + (long)ppplVar2 * 8;
        ppplVar10 = ppplVar10 + (long)ppplVar2 * 8;
        ppplVar14 = ppplVar14 + (long)ppplVar2 * 8;
        ppplVar17 = ppplVar17 + (long)ppplVar2 * 8;
        ppplVar21 = ppplVar21 + (long)ppplVar2 * 8;
        ppplVar7 = ppplVar7 + (long)ppplVar2 * 8;
        ppplVar23 = ppplVar23 + (long)ppplVar2 * 8;
      } while ((long)uVar16 < (long)(param_2 - 7));
    }
    if ((long)uVar16 < (long)(param_2 - 3)) {
      pdVar22 = *ppdVar8;
      pdVar27 = ppdVar8[1];
      ppplVar17 = ppplVar18 + (long)ppplVar2 * (uVar16 + 3);
      ppplVar23 = ppplVar18 + (long)ppplVar2 * (uVar16 + 2);
      ppplVar7 = ppplVar18 + (long)((long)ppplVar2 + uVar16 * (long)ppplVar2);
      ppplVar11 = ppplVar18 + uVar16 * (long)ppplVar2;
      do {
        if ((long)uVar24 < 2) {
          dVar44 = 0.0;
          dVar36 = 0.0;
          dVar30 = 0.0;
          dVar32 = 0.0;
          dVar29 = 0.0;
          dVar31 = 0.0;
          dVar42 = 0.0;
          dVar43 = 0.0;
          uVar5 = 0;
        }
        else {
          dVar42 = 0.0;
          dVar43 = 0.0;
          dVar29 = 0.0;
          dVar31 = 0.0;
          lVar19 = 2;
          dVar30 = 0.0;
          dVar32 = 0.0;
          dVar44 = 0.0;
          dVar36 = 0.0;
          ppplVar4 = ppplVar23;
          ppplVar10 = ppplVar17;
          pdVar9 = pdVar22;
          ppplVar14 = ppplVar11;
          ppplVar21 = ppplVar7;
          do {
            dVar34 = pdVar9[1];
            dVar33 = *pdVar9;
            dVar42 = dVar42 + dVar33 * (double)*ppplVar14;
            dVar43 = dVar43 + dVar34 * (double)ppplVar14[1];
            dVar29 = dVar29 + dVar33 * (double)*ppplVar21;
            dVar31 = dVar31 + dVar34 * (double)ppplVar21[1];
            dVar30 = dVar30 + dVar33 * (double)*ppplVar4;
            dVar32 = dVar32 + dVar34 * (double)ppplVar4[1];
            dVar44 = dVar44 + dVar33 * (double)*ppplVar10;
            dVar36 = dVar36 + dVar34 * (double)ppplVar10[1];
            lVar19 = lVar19 + 2;
            pdVar9 = pdVar9 + (long)pdVar27 * 2;
            ppplVar4 = ppplVar4 + 2;
            ppplVar10 = ppplVar10 + 2;
            ppplVar14 = ppplVar14 + 2;
            ppplVar21 = ppplVar21 + 2;
            uVar5 = uVar24 & 0xfffffffffffffffe;
          } while (lVar19 <= (long)uVar24);
        }
        dVar42 = dVar42 + dVar43;
        dVar29 = dVar29 + dVar31;
        dVar30 = dVar30 + dVar32;
        dVar44 = dVar44 + dVar36;
        if ((long)uVar5 < (long)uVar24) {
          lVar19 = 0;
          pdVar9 = (double *)((long)pdVar22 + (long)pdVar27 * 8 * uVar5);
          do {
            dVar43 = *pdVar9;
            dVar42 = dVar42 + dVar43 * (double)ppplVar11[uVar5 + lVar19];
            dVar29 = dVar29 + dVar43 * (double)ppplVar7[uVar5 + lVar19];
            dVar30 = dVar30 + dVar43 * (double)ppplVar23[uVar5 + lVar19];
            dVar44 = dVar44 + dVar43 * (double)ppplVar17[uVar5 + lVar19];
            lVar19 = lVar19 + 1;
            pdVar9 = pdVar9 + (long)pdVar27;
          } while (uVar24 - uVar5 != lVar19);
        }
        pdVar12[uVar16 * (long)pppplVar13] = pdVar12[uVar16 * (long)pppplVar13] + dVar42 * param_1;
        lVar19 = (uVar16 + 1) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar29 * param_1;
        lVar19 = (uVar16 + 2) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar30 * param_1;
        lVar19 = (uVar16 + 3) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar44 * param_1;
        uVar16 = uVar16 + 4;
        ppplVar17 = ppplVar17 + (long)ppplVar2 * 4;
        ppplVar23 = ppplVar23 + (long)ppplVar2 * 4;
        ppplVar7 = ppplVar7 + (long)ppplVar2 * 4;
        ppplVar11 = ppplVar11 + (long)ppplVar2 * 4;
      } while ((long)uVar16 < (long)(param_2 - 3));
    }
    if ((long)uVar16 < (long)(param_2 - 1)) {
      ppplVar17 = ppplVar18 + (long)((long)ppplVar2 + uVar16 * (long)ppplVar2);
      pdVar22 = *ppdVar8;
      pdVar27 = ppdVar8[1];
      ppplVar23 = ppplVar18 + uVar16 * (long)ppplVar2;
      do {
        if ((long)uVar24 < 2) {
          dVar43 = 0.0;
          dVar29 = 0.0;
          dVar42 = 0.0;
          dVar44 = 0.0;
          uVar5 = 0;
        }
        else {
          dVar42 = 0.0;
          dVar44 = 0.0;
          lVar19 = 2;
          dVar43 = 0.0;
          dVar29 = 0.0;
          pdVar9 = pdVar22;
          ppplVar7 = ppplVar23;
          ppplVar11 = ppplVar17;
          do {
            dVar43 = dVar43 + *pdVar9 * (double)*ppplVar7;
            dVar29 = dVar29 + pdVar9[1] * (double)ppplVar7[1];
            dVar42 = dVar42 + *pdVar9 * (double)*ppplVar11;
            dVar44 = dVar44 + pdVar9[1] * (double)ppplVar11[1];
            lVar19 = lVar19 + 2;
            pdVar9 = pdVar9 + (long)pdVar27 * 2;
            uVar5 = uVar24 & 0xfffffffffffffffe;
            ppplVar7 = ppplVar7 + 2;
            ppplVar11 = ppplVar11 + 2;
          } while (lVar19 <= (long)uVar24);
        }
        dVar43 = dVar43 + dVar29;
        dVar42 = dVar42 + dVar44;
        if ((long)uVar5 < (long)uVar24) {
          pdVar9 = (double *)((long)pdVar22 + (long)pdVar27 * 8 * uVar5);
          do {
            dVar43 = dVar43 + *pdVar9 * (double)ppplVar23[uVar5];
            dVar42 = dVar42 + *pdVar9 * (double)ppplVar17[uVar5];
            uVar5 = uVar5 + 1;
            pdVar9 = pdVar9 + (long)pdVar27;
          } while (uVar24 != uVar5);
        }
        pdVar12[uVar16 * (long)pppplVar13] = pdVar12[uVar16 * (long)pppplVar13] + dVar43 * param_1;
        lVar19 = (uVar16 + 1) * (long)pppplVar13;
        pdVar12[lVar19] = pdVar12[lVar19] + dVar42 * param_1;
        uVar16 = uVar16 + 2;
        ppplVar17 = ppplVar17 + (long)ppplVar2 * 2;
        ppplVar23 = ppplVar23 + (long)ppplVar2 * 2;
      } while ((long)uVar16 < (long)(param_2 - 1));
    }
    if ((long)uVar16 < (long)param_2) {
      ppplVar18 = ppplVar18 + uVar16 * (long)ppplVar2;
      pdVar22 = *ppdVar8;
      pdVar27 = ppdVar8[1];
      do {
        if ((long)uVar24 < 2) {
          dVar42 = 0.0;
          dVar44 = 0.0;
          uVar5 = 0;
        }
        else {
          dVar42 = 0.0;
          dVar44 = 0.0;
          lVar19 = 2;
          pdVar9 = pdVar22;
          ppplVar17 = ppplVar18;
          do {
            dVar42 = dVar42 + *pdVar9 * (double)*ppplVar17;
            dVar44 = dVar44 + pdVar9[1] * (double)ppplVar17[1];
            lVar19 = lVar19 + 2;
            pdVar9 = pdVar9 + (long)pdVar27 * 2;
            uVar5 = uVar24 & 0xfffffffffffffffe;
            ppplVar17 = ppplVar17 + 2;
          } while (lVar19 <= (long)uVar24);
        }
        dVar42 = dVar42 + dVar44;
        if ((long)uVar5 < (long)uVar24) {
          pdVar9 = (double *)((long)pdVar22 + (long)pdVar27 * 8 * uVar5);
          do {
            dVar42 = dVar42 + (double)ppplVar18[uVar5] * *pdVar9;
            uVar5 = uVar5 + 1;
            pdVar9 = pdVar9 + (long)pdVar27;
          } while (uVar24 != uVar5);
        }
        pdVar12[uVar16 * (long)pppplVar13] = pdVar12[uVar16 * (long)pppplVar13] + dVar42 * param_1;
        uVar16 = uVar16 + 1;
        ppplVar18 = ppplVar18 + (long)ppplVar2;
      } while (uVar16 != param_2);
    }
    return;
  }
  return;
}



/* Entry: 1098e384c; end: 1098e3f43;  */

void FUN_1098e384c(double param_1,ulong param_2,ulong param_3,long *param_4,long *param_5,
                  long param_6,long param_7)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  double *pdVar4;
  ulong uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  ulong uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  long lVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  uVar11 = 0;
  pdVar14 = (double *)*param_4;
  lVar2 = param_4[1];
  if ((7 < (long)param_2) && ((ulong)(lVar2 * 8) < 0x7d01)) {
    uVar11 = 0;
    pdVar15 = (double *)*param_5;
    lVar3 = param_5[1];
    pdVar7 = pdVar14 + lVar2 * 7;
    pdVar18 = pdVar14 + lVar2 * 6;
    pdVar4 = pdVar14 + lVar2 * 5;
    pdVar13 = pdVar14 + lVar2 * 4;
    pdVar9 = pdVar14 + lVar2 * 3;
    pdVar16 = pdVar14 + lVar2;
    pdVar6 = pdVar14 + lVar2 * 2;
    pdVar10 = pdVar14;
    do {
      if ((long)param_3 < 2) {
        dVar19 = 0.0;
        dVar34 = 0.0;
        dVar20 = 0.0;
        dVar35 = 0.0;
        dVar22 = 0.0;
        dVar27 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        dVar28 = 0.0;
        dVar36 = 0.0;
        dVar31 = 0.0;
        dVar29 = 0.0;
        dVar33 = 0.0;
        dVar21 = 0.0;
        uVar5 = 0;
      }
      else {
        dVar33 = 0.0;
        dVar21 = 0.0;
        dVar31 = 0.0;
        dVar29 = 0.0;
        lVar17 = 2;
        dVar28 = 0.0;
        dVar36 = 0.0;
        dVar25 = 0.0;
        dVar26 = 0.0;
        dVar23 = 0.0;
        dVar24 = 0.0;
        dVar22 = 0.0;
        dVar27 = 0.0;
        dVar20 = 0.0;
        dVar35 = 0.0;
        dVar19 = 0.0;
        dVar34 = 0.0;
        pdVar12 = pdVar15;
        pdVar8 = pdVar10;
        do {
          dVar32 = pdVar12[1];
          dVar30 = *pdVar12;
          dVar33 = dVar33 + dVar30 * *pdVar8;
          dVar21 = dVar21 + dVar32 * pdVar8[1];
          pdVar1 = pdVar8 + lVar2;
          dVar31 = dVar31 + dVar30 * *pdVar1;
          dVar29 = dVar29 + dVar32 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar28 = dVar28 + dVar30 * *pdVar1;
          dVar36 = dVar36 + dVar32 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar25 = dVar25 + dVar30 * *pdVar1;
          dVar26 = dVar26 + dVar32 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar23 = dVar23 + dVar30 * *pdVar1;
          dVar24 = dVar24 + dVar32 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar22 = dVar22 + dVar30 * *pdVar1;
          dVar27 = dVar27 + dVar32 * pdVar1[1];
          pdVar1 = pdVar1 + lVar2;
          dVar20 = dVar20 + dVar30 * *pdVar1;
          dVar35 = dVar35 + dVar32 * pdVar1[1];
          dVar19 = dVar19 + dVar30 * pdVar1[lVar2];
          dVar34 = dVar34 + dVar32 * (pdVar1 + lVar2)[1];
          lVar17 = lVar17 + 2;
          pdVar8 = pdVar8 + 2;
          pdVar12 = pdVar12 + lVar3 * 2;
          uVar5 = param_3 & 0xfffffffffffffffe;
        } while (lVar17 <= (long)param_3);
      }
      dVar33 = dVar33 + dVar21;
      dVar31 = dVar31 + dVar29;
      dVar28 = dVar28 + dVar36;
      dVar25 = dVar25 + dVar26;
      dVar23 = dVar23 + dVar24;
      dVar22 = dVar22 + dVar27;
      dVar20 = dVar20 + dVar35;
      dVar19 = dVar19 + dVar34;
      if ((long)uVar5 < (long)param_3) {
        lVar17 = 0;
        pdVar8 = (double *)((long)pdVar15 + lVar3 * 8 * uVar5);
        do {
          dVar34 = *pdVar8;
          dVar33 = dVar33 + dVar34 * pdVar10[uVar5 + lVar17];
          dVar31 = dVar31 + dVar34 * pdVar16[uVar5 + lVar17];
          dVar28 = dVar28 + dVar34 * pdVar6[uVar5 + lVar17];
          dVar25 = dVar25 + dVar34 * pdVar9[uVar5 + lVar17];
          dVar23 = dVar23 + dVar34 * pdVar13[uVar5 + lVar17];
          dVar22 = dVar22 + dVar34 * pdVar4[uVar5 + lVar17];
          dVar20 = dVar20 + dVar34 * pdVar18[uVar5 + lVar17];
          dVar19 = dVar19 + dVar34 * pdVar7[uVar5 + lVar17];
          lVar17 = lVar17 + 1;
          pdVar8 = pdVar8 + lVar3;
        } while (param_3 - uVar5 != lVar17);
      }
      *(double *)(param_6 + uVar11 * param_7 * 8) =
           *(double *)(param_6 + uVar11 * param_7 * 8) + dVar33 * param_1;
      lVar17 = (uVar11 | 1) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar31 * param_1;
      lVar17 = (uVar11 | 2) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar28 * param_1;
      lVar17 = (uVar11 | 3) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar25 * param_1;
      lVar17 = (uVar11 | 4) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar23 * param_1;
      lVar17 = (uVar11 | 5) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar22 * param_1;
      lVar17 = (uVar11 | 6) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar20 * param_1;
      lVar17 = (uVar11 | 7) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar19 * param_1;
      uVar11 = uVar11 + 8;
      pdVar10 = pdVar10 + lVar2 * 8;
      pdVar7 = pdVar7 + lVar2 * 8;
      pdVar18 = pdVar18 + lVar2 * 8;
      pdVar4 = pdVar4 + lVar2 * 8;
      pdVar13 = pdVar13 + lVar2 * 8;
      pdVar9 = pdVar9 + lVar2 * 8;
      pdVar6 = pdVar6 + lVar2 * 8;
      pdVar16 = pdVar16 + lVar2 * 8;
    } while ((long)uVar11 < (long)(param_2 - 7));
  }
  if ((long)uVar11 < (long)(param_2 - 3)) {
    pdVar7 = (double *)*param_5;
    lVar3 = param_5[1];
    pdVar13 = pdVar14 + lVar2 * (uVar11 + 3);
    pdVar16 = pdVar14 + lVar2 * (uVar11 + 2);
    pdVar6 = pdVar14 + lVar2 + uVar11 * lVar2;
    pdVar10 = pdVar14 + uVar11 * lVar2;
    do {
      if ((long)param_3 < 2) {
        dVar34 = 0.0;
        dVar27 = 0.0;
        dVar21 = 0.0;
        dVar23 = 0.0;
        dVar20 = 0.0;
        dVar22 = 0.0;
        dVar19 = 0.0;
        dVar33 = 0.0;
        uVar5 = 0;
      }
      else {
        dVar19 = 0.0;
        dVar33 = 0.0;
        dVar20 = 0.0;
        dVar22 = 0.0;
        lVar17 = 2;
        dVar21 = 0.0;
        dVar23 = 0.0;
        dVar34 = 0.0;
        dVar27 = 0.0;
        pdVar4 = pdVar16;
        pdVar9 = pdVar13;
        pdVar18 = pdVar7;
        pdVar15 = pdVar10;
        pdVar8 = pdVar6;
        do {
          dVar25 = pdVar18[1];
          dVar24 = *pdVar18;
          dVar19 = dVar19 + dVar24 * *pdVar15;
          dVar33 = dVar33 + dVar25 * pdVar15[1];
          dVar20 = dVar20 + dVar24 * *pdVar8;
          dVar22 = dVar22 + dVar25 * pdVar8[1];
          dVar21 = dVar21 + dVar24 * *pdVar4;
          dVar23 = dVar23 + dVar25 * pdVar4[1];
          dVar34 = dVar34 + dVar24 * *pdVar9;
          dVar27 = dVar27 + dVar25 * pdVar9[1];
          lVar17 = lVar17 + 2;
          pdVar18 = pdVar18 + lVar3 * 2;
          pdVar4 = pdVar4 + 2;
          pdVar9 = pdVar9 + 2;
          pdVar15 = pdVar15 + 2;
          pdVar8 = pdVar8 + 2;
          uVar5 = param_3 & 0xfffffffffffffffe;
        } while (lVar17 <= (long)param_3);
      }
      dVar19 = dVar19 + dVar33;
      dVar20 = dVar20 + dVar22;
      dVar21 = dVar21 + dVar23;
      dVar34 = dVar34 + dVar27;
      if ((long)uVar5 < (long)param_3) {
        lVar17 = 0;
        pdVar18 = (double *)((long)pdVar7 + lVar3 * 8 * uVar5);
        do {
          dVar33 = *pdVar18;
          dVar19 = dVar19 + dVar33 * pdVar10[uVar5 + lVar17];
          dVar20 = dVar20 + dVar33 * pdVar6[uVar5 + lVar17];
          dVar21 = dVar21 + dVar33 * pdVar16[uVar5 + lVar17];
          dVar34 = dVar34 + dVar33 * pdVar13[uVar5 + lVar17];
          lVar17 = lVar17 + 1;
          pdVar18 = pdVar18 + lVar3;
        } while (param_3 - uVar5 != lVar17);
      }
      *(double *)(param_6 + uVar11 * param_7 * 8) =
           *(double *)(param_6 + uVar11 * param_7 * 8) + dVar19 * param_1;
      lVar17 = (uVar11 + 1) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar20 * param_1;
      lVar17 = (uVar11 + 2) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar21 * param_1;
      lVar17 = (uVar11 + 3) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar34 * param_1;
      uVar11 = uVar11 + 4;
      pdVar13 = pdVar13 + lVar2 * 4;
      pdVar16 = pdVar16 + lVar2 * 4;
      pdVar6 = pdVar6 + lVar2 * 4;
      pdVar10 = pdVar10 + lVar2 * 4;
    } while ((long)uVar11 < (long)(param_2 - 3));
  }
  if ((long)uVar11 < (long)(param_2 - 1)) {
    pdVar13 = pdVar14 + lVar2 + uVar11 * lVar2;
    pdVar6 = (double *)*param_5;
    lVar3 = param_5[1];
    pdVar16 = pdVar14 + uVar11 * lVar2;
    do {
      if ((long)param_3 < 2) {
        dVar33 = 0.0;
        dVar20 = 0.0;
        dVar19 = 0.0;
        dVar34 = 0.0;
        uVar5 = 0;
      }
      else {
        dVar19 = 0.0;
        dVar34 = 0.0;
        lVar17 = 2;
        dVar33 = 0.0;
        dVar20 = 0.0;
        pdVar10 = pdVar6;
        pdVar7 = pdVar16;
        pdVar18 = pdVar13;
        do {
          dVar33 = dVar33 + *pdVar10 * *pdVar7;
          dVar20 = dVar20 + pdVar10[1] * pdVar7[1];
          dVar19 = dVar19 + *pdVar10 * *pdVar18;
          dVar34 = dVar34 + pdVar10[1] * pdVar18[1];
          lVar17 = lVar17 + 2;
          pdVar10 = pdVar10 + lVar3 * 2;
          uVar5 = param_3 & 0xfffffffffffffffe;
          pdVar7 = pdVar7 + 2;
          pdVar18 = pdVar18 + 2;
        } while (lVar17 <= (long)param_3);
      }
      dVar33 = dVar33 + dVar20;
      dVar19 = dVar19 + dVar34;
      if ((long)uVar5 < (long)param_3) {
        pdVar10 = (double *)((long)pdVar6 + lVar3 * 8 * uVar5);
        do {
          dVar33 = dVar33 + *pdVar10 * pdVar16[uVar5];
          dVar19 = dVar19 + *pdVar10 * pdVar13[uVar5];
          uVar5 = uVar5 + 1;
          pdVar10 = pdVar10 + lVar3;
        } while (param_3 != uVar5);
      }
      *(double *)(param_6 + uVar11 * param_7 * 8) =
           *(double *)(param_6 + uVar11 * param_7 * 8) + dVar33 * param_1;
      lVar17 = (uVar11 + 1) * param_7;
      *(double *)(param_6 + lVar17 * 8) = *(double *)(param_6 + lVar17 * 8) + dVar19 * param_1;
      uVar11 = uVar11 + 2;
      pdVar13 = pdVar13 + lVar2 * 2;
      pdVar16 = pdVar16 + lVar2 * 2;
    } while ((long)uVar11 < (long)(param_2 - 1));
  }
  if ((long)uVar11 < (long)param_2) {
    pdVar14 = pdVar14 + uVar11 * lVar2;
    pdVar13 = (double *)*param_5;
    lVar3 = param_5[1];
    do {
      if ((long)param_3 < 2) {
        dVar19 = 0.0;
        dVar34 = 0.0;
        uVar5 = 0;
      }
      else {
        dVar19 = 0.0;
        dVar34 = 0.0;
        lVar17 = 2;
        pdVar16 = pdVar13;
        pdVar6 = pdVar14;
        do {
          dVar19 = dVar19 + *pdVar16 * *pdVar6;
          dVar34 = dVar34 + pdVar16[1] * pdVar6[1];
          lVar17 = lVar17 + 2;
          pdVar16 = pdVar16 + lVar3 * 2;
          uVar5 = param_3 & 0xfffffffffffffffe;
          pdVar6 = pdVar6 + 2;
        } while (lVar17 <= (long)param_3);
      }
      dVar19 = dVar19 + dVar34;
      if ((long)uVar5 < (long)param_3) {
        pdVar16 = (double *)((long)pdVar13 + lVar3 * 8 * uVar5);
        do {
          dVar19 = dVar19 + pdVar14[uVar5] * *pdVar16;
          uVar5 = uVar5 + 1;
          pdVar16 = pdVar16 + lVar3;
        } while (param_3 != uVar5);
      }
      *(double *)(param_6 + uVar11 * param_7 * 8) =
           *(double *)(param_6 + uVar11 * param_7 * 8) + dVar19 * param_1;
      uVar11 = uVar11 + 1;
      pdVar14 = pdVar14 + lVar2;
    } while (uVar11 != param_2);
  }
  return;
}



/* Entry: 1098e3f44; end: 1098e4037;  */

double FUN_1098e3f44(long param_1,undefined8 param_2,long param_3)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar3 = *(ulong *)(param_3 + 0x90);
  uVar5 = uVar3 + 3;
  if (-1 < (long)uVar3) {
    uVar5 = uVar3;
  }
  pdVar1 = *(double **)(param_1 + 8);
  pdVar2 = *(double **)(param_1 + 0x20);
  if (uVar3 + 1 < 3) {
    return *pdVar1 * *pdVar2;
  }
  uVar4 = uVar3 - ((long)uVar3 >> 0x3f) & 0xfffffffffffffffe;
  dVar9 = *pdVar1 * *pdVar2;
  dVar10 = pdVar1[1] * pdVar2[1];
  if (3 < (long)uVar3) {
    uVar5 = uVar5 & 0xfffffffffffffffc;
    dVar11 = pdVar1[2] * pdVar2[2];
    dVar12 = pdVar1[3] * pdVar2[3];
    if (7 < uVar3) {
      pdVar6 = pdVar2 + 6;
      pdVar7 = pdVar1 + 6;
      lVar8 = 4;
      do {
        dVar9 = dVar9 + pdVar7[-2] * pdVar6[-2];
        dVar10 = dVar10 + pdVar7[-1] * pdVar6[-1];
        dVar11 = dVar11 + *pdVar7 * *pdVar6;
        dVar12 = dVar12 + pdVar7[1] * pdVar6[1];
        lVar8 = lVar8 + 4;
        pdVar6 = pdVar6 + 4;
        pdVar7 = pdVar7 + 4;
      } while (lVar8 < (long)uVar5);
    }
    dVar9 = dVar11 + dVar9;
    dVar10 = dVar12 + dVar10;
    if ((long)uVar5 < (long)uVar4) {
      dVar9 = dVar9 + pdVar1[uVar5] * pdVar2[uVar5];
      dVar10 = dVar10 + (pdVar1 + uVar5)[1] * (pdVar2 + uVar5)[1];
    }
  }
  dVar9 = dVar9 + dVar10;
  lVar8 = (long)uVar3 % 2;
  if (lVar8 != 0 && lVar8 < 0 == SBORROW8(uVar3,uVar4)) {
    pdVar1 = pdVar1 + ((long)uVar3 / 2) * 2;
    pdVar2 = pdVar2 + ((long)uVar3 / 2) * 2;
    do {
      dVar9 = dVar9 + *pdVar1 * *pdVar2;
      lVar8 = lVar8 + -1;
      pdVar1 = pdVar1 + 1;
      pdVar2 = pdVar2 + 1;
    } while (lVar8 != 0);
  }
  return dVar9;
}



/* Entry: 1098e4038; end: 1098e46ab;  */

void FUN_1098e4038(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 *param_8,undefined4 param_9,undefined4 param_10,
                  undefined8 param_11,undefined8 *param_12,undefined8 *param_13)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined1 auStack_610 [8];
  undefined1 *puStack_608;
  undefined1 *puStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined8 *puStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 uStack_540;
  undefined8 *puStack_538;
  undefined1 *puStack_530;
  long lStack_528;
  undefined1 uStack_519;
  undefined8 *puStack_518;
  long lStack_510;
  undefined1 uStack_503;
  undefined1 uStack_502;
  undefined1 uStack_501;
  undefined8 auStack_500 [13];
  undefined8 uStack_498;
  undefined8 uStack_430;
  undefined8 uStack_3c8;
  undefined8 uStack_360;
  undefined8 uStack_2f8;
  undefined8 uStack_290;
  undefined8 uStack_228;
  undefined8 uStack_1c0;
  undefined8 uStack_158;
  undefined8 uStack_f0;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar8 = auStack_610;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_5a8 = param_3;
  if (param_1 <= param_3) {
    lStack_5a8 = param_1;
  }
  lVar19 = param_13[4];
  lVar16 = param_13[2];
  lStack_570 = lVar16;
  if (lStack_5a8 <= lVar16) {
    lStack_570 = lStack_5a8;
  }
  lStack_588 = lStack_570;
  if (lVar19 <= lStack_570) {
    lStack_588 = lVar19;
  }
  if (0xb < lStack_588) {
    lStack_588 = 0xc;
  }
  uVar18 = lStack_570 * lVar19;
  lStack_5d0 = param_6;
  uStack_5c8 = param_7;
  lStack_5c0 = param_4;
  lStack_550 = param_5;
  lStack_528 = param_2;
  if (uVar18 >> 0x3d == 0) {
    puVar15 = (undefined1 *)*param_13;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = (undefined1 *)(uVar18 * 8);
      if (uVar18 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar8 = auStack_610 + -((ulong)(puVar15 + 0x1e) & 0xfffffffffffffff0);
        puVar15 = auStack_610 + -((ulong)(puVar15 + 0x1e) & 0xfffffffffffffff0);
        puStack_600 = puVar15;
      }
      else {
        _malloc();
        puStack_600 = puVar15;
        if (puVar15 == (undefined1 *)0x0) goto LAB_1098e45e4;
      }
    }
    else {
      puStack_600 = (undefined1 *)0x0;
      puVar8 = auStack_610;
    }
    uVar9 = lVar19 * lStack_528;
    if (uVar9 >> 0x3d == 0) {
      puStack_530 = (undefined1 *)param_13[1];
      uStack_5f8 = uVar9;
      uStack_5f0 = uVar18;
      if (puStack_530 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)(uVar9 * 8);
        if (uVar9 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar8 = puVar8 + -((ulong)(puVar7 + 0x1e) & 0xfffffffffffffff0);
          puStack_608 = puVar8;
          puStack_530 = puVar8;
          goto LAB_1098e41ac;
        }
        _malloc();
        puStack_608 = puVar7;
        puStack_530 = puVar7;
        if (puVar7 != (undefined1 *)0x0) goto LAB_1098e41ac;
      }
      else {
        puStack_608 = (undefined1 *)0x0;
LAB_1098e41ac:
        _bzero(auStack_500,0x480);
        lVar5 = lStack_550;
        auStack_500[0] = 0x3ff0000000000000;
        uStack_498 = 0x3ff0000000000000;
        uStack_430 = 0x3ff0000000000000;
        uStack_3c8 = 0x3ff0000000000000;
        uStack_360 = 0x3ff0000000000000;
        uStack_2f8 = 0x3ff0000000000000;
        uStack_290 = 0x3ff0000000000000;
        uStack_228 = 0x3ff0000000000000;
        uStack_1c0 = 0x3ff0000000000000;
        uStack_158 = 0x3ff0000000000000;
        uStack_f0 = 0x3ff0000000000000;
        uStack_88 = 0x3ff0000000000000;
        if (0 < param_3) {
          lVar14 = 0;
          puStack_538 = param_12;
          uStack_540 = param_11;
          lStack_5d8 = lStack_5a8 - lVar19;
          if (lVar19 <= lVar16) {
            lVar16 = lVar19;
          }
          if (param_3 <= lVar16) {
            lVar16 = param_3;
          }
          lStack_590 = lVar16;
          if (param_1 <= lVar16) {
            lStack_590 = param_1;
          }
          lStack_5e8 = lStack_550 * 8 + 8;
          lStack_598 = lStack_588 * lStack_5e8;
          lStack_578 = lStack_570 << 3;
          lStack_580 = lStack_550 * lStack_570 * 8;
          lStack_5e0 = lVar19;
          puStack_5b8 = param_8;
          lStack_560 = param_1;
          lStack_558 = param_3;
          do {
            lVar19 = lStack_560;
            puVar17 = puStack_5b8;
            lVar16 = lStack_5e0;
            if (lStack_558 - lVar14 <= lStack_5e0) {
              lVar16 = lStack_558 - lVar14;
            }
            lStack_5b0 = lStack_5d8;
            lVar4 = lStack_5a8 - lVar14;
            if (lStack_560 <= lVar14 || lVar16 + lVar14 <= lStack_5a8) {
              lStack_5b0 = lVar14;
              lVar4 = lVar16;
            }
            puStack_518 = (undefined8 *)(lStack_5d0 + lVar14 * 8);
            lStack_510 = uStack_5c8;
            FUN_1098e46ac(&uStack_503,puStack_530,&puStack_518,lVar4,lStack_528,0,0);
            lStack_548 = lVar14;
            if ((lVar14 < lVar19) && (0 < lVar4)) {
              lVar16 = 0;
              lStack_568 = lStack_5c0 + lVar14 * lStack_550 * 8;
              puStack_5a0 = puVar17 + lVar14;
              puVar20 = (undefined8 *)(lStack_5c0 + lStack_5e8 * lVar14);
              lVar19 = lVar4;
              do {
                lVar14 = lStack_590;
                if (lVar19 <= lStack_590) {
                  lVar14 = lVar19;
                }
                if (0xb < lVar14) {
                  lVar14 = 0xc;
                }
                lVar1 = lStack_588;
                if (lVar4 - lVar16 <= lStack_588) {
                  lVar1 = lVar4 - lVar16;
                }
                if (0 < lVar1) {
                  lVar10 = 0;
                  puVar2 = auStack_500;
                  puVar3 = puVar20;
                  puVar13 = puVar20;
                  puVar12 = puVar2;
                  lVar11 = lVar10;
                  do {
                    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *puVar2 = *puVar3;
                      puVar2 = puVar2 + 0xc;
                      puVar3 = puVar3 + lVar5;
                    }
                    lVar10 = lVar11 + 1;
                    puVar2 = puVar12 + 1;
                    puVar3 = puVar13 + 1;
                    puVar13 = puVar3;
                    puVar12 = puVar2;
                    lVar11 = lVar10;
                  } while (lVar10 != lVar14);
                }
                puStack_518 = auStack_500;
                lStack_510 = 0xc;
                FUN_1098e479c(&uStack_502,puVar15,&puStack_518,lVar1,lVar1,0,0);
                lVar14 = lVar16 + lStack_548;
                puStack_518 = puVar17 + lVar14;
                lStack_510 = uStack_540;
                uVar21 = *puStack_538;
                *(undefined8 *)(puVar8 + -0x18) = 0;
                *(long *)(puVar8 + -0x10) = lVar16;
                *(long *)(puVar8 + -0x20) = lVar4;
                FUN_109404e14(uVar21,&uStack_501,&puStack_518,puVar15,puStack_530,lVar1,lVar1,
                              lStack_528,lVar1);
                if (0 < lVar16) {
                  puStack_518 = (undefined8 *)(lStack_568 + lVar14 * 8);
                  lStack_510 = lStack_550;
                  FUN_1098e479c(&uStack_502,puVar15,&puStack_518,lVar1,lVar16,0,0);
                  puStack_518 = puStack_5a0;
                  lStack_510 = uStack_540;
                  uVar21 = *puStack_538;
                  *(undefined8 *)(puVar8 + -0x18) = 0;
                  *(long *)(puVar8 + -0x10) = lVar16;
                  *(long *)(puVar8 + -0x20) = lVar4;
                  FUN_109404e14(uVar21,&uStack_501,&puStack_518,puVar15,puStack_530,lVar16,lVar1,
                                lStack_528,lVar1);
                }
                lVar16 = lVar16 + lStack_588;
                lVar19 = lVar19 - lStack_588;
                puVar20 = (undefined8 *)((long)puVar20 + lStack_598);
              } while (lVar16 < lVar4);
            }
            lStack_568 = lStack_5a8;
            if (lStack_548 <= lStack_5a8) {
              lStack_568 = lStack_548;
            }
            if (0 < lStack_568) {
              lVar14 = 0;
              lVar16 = 0;
              puVar17 = (undefined8 *)(lStack_5c0 + lStack_548 * 8);
              puVar20 = puStack_5b8;
              lVar19 = lStack_570;
              do {
                lVar1 = lStack_548;
                if (lStack_558 <= lStack_548) {
                  lVar1 = lStack_558;
                }
                if (lStack_560 <= lVar1) {
                  lVar1 = lStack_560;
                }
                if (lVar19 <= lVar1) {
                  lVar1 = lVar19;
                }
                lStack_510 = lStack_550;
                puStack_518 = puVar17;
                FUN_1098e479c(&uStack_519,puVar15,&puStack_518,lVar4,lVar1 + lVar14,0,0);
                lStack_510 = uStack_540;
                uVar21 = *puStack_538;
                puStack_518 = puVar20;
                *(undefined8 *)(puVar8 + -0x18) = 0;
                *(undefined8 *)(puVar8 + -0x10) = 0;
                *(undefined8 *)(puVar8 + -0x20) = 0xffffffffffffffff;
                FUN_109404e14(uVar21,&uStack_501,&puStack_518,puVar15,puStack_530,lVar1 + lVar14,
                              lVar4,lStack_528,0xffffffffffffffff);
                lVar16 = lVar16 + lStack_570;
                puVar20 = (undefined8 *)((long)puVar20 + lStack_578);
                puVar17 = (undefined8 *)((long)puVar17 + lStack_580);
                lVar19 = lVar19 + lStack_570;
                lVar14 = lVar14 - lStack_570;
              } while (lVar16 < lStack_568);
            }
            lVar14 = lStack_5b0 + lStack_5e0;
          } while (lVar14 < lStack_558);
        }
        if (0x4000 < uStack_5f8) {
          _free(puStack_608);
        }
        if (0x4000 < uStack_5f0) {
          _free(puStack_600);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098e464c;
    }
  }
  else {
LAB_1098e45e4:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1098e464c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098e4650);
  (*pcVar6)();
}



/* Entry: 1098e46ac; end: 1098e479b;  */

void FUN_1098e46ac(undefined8 param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_5 + 3;
  if (-1 < (long)param_5) {
    uVar1 = param_5;
  }
  uVar5 = uVar1 & 0xfffffffffffffffc;
  if ((long)param_5 < 4) {
    lVar6 = 0;
  }
  else {
    lVar8 = 0;
    lVar6 = 0;
    puVar7 = (undefined8 *)*param_3;
    lVar9 = param_3[1];
    do {
      if (0 < param_4) {
        puVar2 = (undefined8 *)(param_2 + 0x10 + lVar6 * 8);
        lVar6 = param_4 * 4 + lVar6;
        puVar3 = puVar7;
        lVar4 = param_4;
        do {
          puVar2[-2] = *puVar3;
          puVar2[-1] = puVar3[lVar9];
          *puVar2 = puVar3[lVar9 * 2];
          puVar2[1] = puVar3[lVar9 * 3];
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      lVar8 = lVar8 + 4;
      puVar7 = puVar7 + lVar9 * 4;
    } while (lVar8 < (long)uVar5);
  }
  if ((long)uVar5 < (long)param_5) {
    lVar8 = param_3[1];
    puVar7 = (undefined8 *)(*param_3 + lVar8 * ((long)uVar1 >> 2) * 0x20);
    do {
      puVar3 = puVar7;
      lVar9 = param_4;
      if (0 < param_4) {
        do {
          *(undefined8 *)(param_2 + lVar6 * 8) = *puVar3;
          lVar6 = lVar6 + 1;
          lVar9 = lVar9 + -1;
          puVar3 = puVar3 + 1;
        } while (lVar9 != 0);
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + lVar8;
    } while (uVar5 != param_5);
  }
  return;
}



/* Entry: 1098e479c; end: 1098e49a7;  */

void FUN_1098e479c(undefined8 param_1,long param_2,long *param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar5 = 0;
  lVar9 = 0;
  lVar10 = param_2 + 0x30;
  lVar12 = -6;
  uVar13 = 6;
  lVar14 = 0x60;
  do {
    lVar2 = 0;
    if (uVar13 != 0) {
      lVar2 = (param_5 - lVar9) / (long)uVar13;
    }
    lVar2 = param_5 + (lVar2 * uVar13 - (param_5 - lVar9));
    if (lVar9 < lVar2) {
      do {
        if (param_4 < 2) {
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          puVar11 = (undefined8 *)(lVar10 + lVar5 * 8);
          puVar6 = (undefined8 *)(param_2 + lVar5 * 8);
          do {
            uVar7 = 0;
            puVar8 = puVar6;
            puVar17 = puVar11;
            do {
              lVar19 = *param_3 + lVar15 * 8;
              lVar18 = param_3[1] * (lVar9 + uVar7);
              puVar3 = (undefined8 *)(lVar19 + lVar18 * 8);
              uVar22 = puVar3[1];
              uVar21 = *puVar3;
              puVar3 = (undefined8 *)(lVar19 + (param_3[1] + lVar18) * 8);
              uVar23 = puVar3[1];
              puVar8[1] = *puVar3;
              *puVar8 = uVar21;
              puVar17[1] = uVar23;
              *puVar17 = uVar22;
              uVar7 = uVar7 + 2;
              puVar8 = puVar8 + 2;
              puVar17 = puVar17 + 2;
            } while (uVar7 < uVar13);
            lVar5 = lVar5 + uVar13 * 2;
            lVar15 = lVar15 + 2;
            puVar11 = (undefined8 *)((long)puVar11 + lVar14);
            puVar6 = (undefined8 *)((long)puVar6 + lVar14);
          } while (lVar15 < (long)(param_4 - (param_4 >> 0x3f) & 0xfffffffffffffffeU));
        }
        if (lVar15 < param_4) {
          lVar18 = *param_3;
          lVar1 = param_3[1];
          lVar19 = lVar18 + lVar15 * 8;
          do {
            if (uVar13 < 4) {
              uVar7 = 0;
            }
            else {
              lVar20 = lVar18 + lVar15 * 8;
              uVar21 = *(undefined8 *)(lVar20 + (lVar1 + lVar1 * lVar9) * 8);
              uVar22 = *(undefined8 *)(lVar20 + lVar1 * (lVar9 + 2) * 8);
              uVar23 = *(undefined8 *)(lVar20 + lVar1 * (lVar9 + 3) * 8);
              puVar11 = (undefined8 *)(param_2 + lVar5 * 8);
              *puVar11 = *(undefined8 *)(lVar20 + lVar1 * lVar9 * 8);
              puVar11[1] = uVar21;
              lVar5 = lVar5 + 4;
              puVar11[2] = uVar22;
              puVar11[3] = uVar23;
              uVar7 = 4;
            }
            if ((((uint)uVar13 >> 1 & 1) != 0) && (uVar7 < uVar13)) {
              lVar20 = lVar12 + uVar7;
              puVar11 = (undefined8 *)(lVar19 + lVar1 * 8 * (lVar9 + uVar7));
              lVar16 = lVar5;
              do {
                lVar5 = lVar16 + 1;
                *(undefined8 *)(param_2 + lVar16 * 8) = *puVar11;
                puVar11 = puVar11 + lVar1;
                bVar4 = lVar20 != -1;
                lVar20 = lVar20 + 1;
                lVar16 = lVar5;
              } while (bVar4);
            }
            lVar15 = lVar15 + 1;
            lVar19 = lVar19 + 8;
          } while (lVar15 != param_4);
        }
        lVar9 = lVar9 + uVar13;
      } while (lVar9 < lVar2);
    }
    lVar10 = lVar10 + -0x10;
    lVar14 = lVar14 + -0x20;
    lVar12 = lVar12 + 2;
    bVar4 = 1 < uVar13;
    uVar13 = uVar13 - 2;
  } while (bVar4 && uVar13 != 0);
  if (lVar9 < param_5) {
    lVar10 = param_3[1];
    puVar11 = (undefined8 *)(*param_3 + lVar10 * 8 * lVar9);
    do {
      puVar6 = puVar11;
      lVar12 = param_4;
      if (0 < param_4) {
        do {
          *(undefined8 *)(param_2 + lVar5 * 8) = *puVar6;
          lVar5 = lVar5 + 1;
          lVar12 = lVar12 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar12 != 0);
      }
      lVar9 = lVar9 + 1;
      puVar11 = puVar11 + lVar10;
    } while (lVar9 != param_5);
  }
  return;
}



/* Entry: 1098e49a8; end: 1098e507b;  */

void FUN_1098e49a8(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 *param_8,undefined4 param_9,undefined4 param_10,
                  undefined8 param_11,undefined8 *param_12,undefined8 *param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long extraout_x12;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auStack_620 [8];
  undefined1 *puStack_618;
  undefined1 *puStack_610;
  ulong uStack_608;
  ulong uStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined8 *puStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  undefined8 *puStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 *puStack_548;
  undefined1 *puStack_540;
  undefined1 *puStack_538;
  long lStack_530;
  long lStack_528;
  undefined1 uStack_519;
  undefined8 *puStack_518;
  long lStack_510;
  undefined1 uStack_503;
  undefined1 uStack_502;
  undefined1 uStack_501;
  undefined8 auStack_500 [13];
  undefined8 uStack_498;
  undefined8 uStack_430;
  undefined8 uStack_3c8;
  undefined8 uStack_360;
  undefined8 uStack_2f8;
  undefined8 uStack_290;
  undefined8 uStack_228;
  undefined8 uStack_1c0;
  undefined8 uStack_158;
  undefined8 uStack_f0;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar9 = auStack_620;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_5c0 = param_3;
  if (param_1 <= param_3) {
    lStack_5c0 = param_1;
  }
  lVar14 = param_13[4];
  lVar16 = param_13[2];
  lStack_580 = lVar16;
  if (lStack_5c0 <= lVar16) {
    lStack_580 = lStack_5c0;
  }
  lStack_5a0 = lStack_580;
  if (lVar14 <= lStack_580) {
    lStack_5a0 = lVar14;
  }
  if (0xb < lStack_5a0) {
    lStack_5a0 = 0xc;
  }
  uVar20 = lStack_580 * lVar14;
  lStack_5e8 = param_6;
  uStack_5e0 = param_7;
  lStack_530 = param_2;
  if (uVar20 >> 0x3d == 0) {
    puStack_540 = (undefined1 *)*param_13;
    lStack_5d8 = lVar14;
    if (puStack_540 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)(uVar20 * 8);
      if (uVar20 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar9 = auStack_620 + -((ulong)(puVar8 + 0x1e) & 0xfffffffffffffff0);
        lVar14 = extraout_x12;
        puStack_610 = auStack_620 + -((ulong)(puVar8 + 0x1e) & 0xfffffffffffffff0);
        puStack_540 = auStack_620 + -((ulong)(puVar8 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        lVar14 = lStack_5d8;
        puStack_610 = puVar8;
        puStack_540 = puVar8;
        if (puVar8 == (undefined1 *)0x0) goto LAB_1098e4fb4;
      }
    }
    else {
      puStack_610 = (undefined1 *)0x0;
      puVar9 = auStack_620;
    }
    uVar10 = lVar14 * lStack_530;
    if (uVar10 >> 0x3d == 0) {
      puStack_538 = (undefined1 *)param_13[1];
      uStack_608 = uVar10;
      uStack_600 = uVar20;
      lStack_560 = param_5;
      if (puStack_538 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)(uVar10 * 8);
        if (uVar10 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar9 = puVar9 + -((ulong)(puVar8 + 0x1e) & 0xfffffffffffffff0);
          puStack_618 = puVar9;
          puStack_538 = puVar9;
          goto LAB_1098e4b30;
        }
        _malloc();
        puStack_618 = puVar8;
        puStack_538 = puVar8;
        if (puVar8 != (undefined1 *)0x0) goto LAB_1098e4b30;
      }
      else {
        puStack_618 = (undefined1 *)0x0;
LAB_1098e4b30:
        _bzero(auStack_500,0x480);
        lVar14 = lStack_560;
        auStack_500[0] = 0x3ff0000000000000;
        uStack_498 = 0x3ff0000000000000;
        uStack_430 = 0x3ff0000000000000;
        uStack_3c8 = 0x3ff0000000000000;
        uStack_360 = 0x3ff0000000000000;
        uStack_2f8 = 0x3ff0000000000000;
        uStack_290 = 0x3ff0000000000000;
        uStack_228 = 0x3ff0000000000000;
        uStack_1c0 = 0x3ff0000000000000;
        uStack_158 = 0x3ff0000000000000;
        uStack_f0 = 0x3ff0000000000000;
        uStack_88 = 0x3ff0000000000000;
        if (0 < param_3) {
          lVar15 = 0;
          puStack_548 = param_12;
          uStack_550 = param_11;
          lStack_5f0 = lStack_5c0 - lStack_5d8;
          if (lStack_5d8 <= lVar16) {
            lVar16 = lStack_5d8;
          }
          if (param_3 <= lVar16) {
            lVar16 = param_3;
          }
          lStack_5a8 = lVar16;
          if (param_1 <= lVar16) {
            lStack_5a8 = param_1;
          }
          lStack_5f8 = lStack_560 * 8 + 8;
          lStack_5b0 = lStack_5a0 * lStack_5f8;
          lStack_588 = lStack_580 << 3;
          lStack_590 = lStack_560 * lStack_580 * 8;
          puStack_5d0 = param_8;
          lStack_598 = param_4;
          lStack_570 = param_1;
          lStack_568 = param_3;
          do {
            lVar2 = lStack_570;
            lVar21 = lStack_598;
            lVar19 = lStack_5a0;
            puVar18 = puStack_5d0;
            lVar16 = lStack_5d8;
            if (lStack_568 - lVar15 <= lStack_5d8) {
              lVar16 = lStack_568 - lVar15;
            }
            lStack_5c8 = lStack_5f0;
            lStack_528 = lStack_5c0 - lVar15;
            if (lStack_570 <= lVar15 || lVar16 + lVar15 <= lStack_5c0) {
              lStack_5c8 = lVar15;
              lStack_528 = lVar16;
            }
            puStack_518 = (undefined8 *)(lStack_5e8 + lVar15 * 8);
            lStack_510 = uStack_5e0;
            FUN_1098e46ac(&uStack_503,puStack_538,&puStack_518,lStack_528,lStack_530,0,0);
            lStack_558 = lVar15;
            if ((lVar15 < lVar2) && (0 < lStack_528)) {
              lVar16 = 0;
              lStack_578 = lVar21 + lVar15 * lStack_560 * 8;
              puStack_5b8 = puVar18 + lVar15;
              puVar17 = (undefined8 *)(lVar21 + lStack_5f8 * lVar15);
              lVar15 = lStack_528;
              do {
                puVar8 = puStack_540;
                lVar6 = lStack_560;
                puStack_518 = auStack_500;
                lVar2 = lStack_5a8;
                if (lVar15 <= lStack_5a8) {
                  lVar2 = lVar15;
                }
                if (0xb < lVar2) {
                  lVar2 = 0xc;
                }
                if (lStack_528 - lVar16 <= lVar19) {
                  lVar19 = lStack_528 - lVar16;
                }
                lVar1 = lVar16 + lStack_558;
                if (0 < lVar19) {
                  lVar11 = 0;
                  puVar12 = auStack_500;
                  puVar13 = puVar17;
                  do {
                    puStack_518[lVar11 * 0xd] =
                         *(undefined8 *)
                          (lVar21 + (lVar11 + lVar1) * lStack_560 * 8 + (lVar11 + lVar1) * 8);
                    puVar4 = puVar12;
                    puVar5 = puVar13;
                    for (lVar3 = lVar11; lVar3 != 0; lVar3 = lVar3 + -1) {
                      *puVar4 = *puVar5;
                      puVar5 = puVar5 + lVar14;
                      puVar4 = puVar4 + 0xc;
                    }
                    lVar11 = lVar11 + 1;
                    puVar12 = puVar12 + 1;
                    puVar13 = puVar13 + 1;
                  } while (lVar11 != lVar2);
                }
                lStack_510 = 0xc;
                FUN_1098e479c(&uStack_502,puStack_540,&puStack_518,lVar19,lVar19,0,0);
                puStack_518 = puVar18 + lVar1;
                lStack_510 = uStack_550;
                uVar22 = *puStack_548;
                *(undefined8 *)(puVar9 + -0x18) = 0;
                *(long *)(puVar9 + -0x10) = lVar16;
                *(long *)(puVar9 + -0x20) = lStack_528;
                FUN_109404e14(uVar22,&uStack_501,&puStack_518,puVar8,puStack_538,lVar19,lVar19,
                              lStack_530,lVar19);
                puVar8 = puStack_540;
                lVar21 = lStack_598;
                if (0 < lVar16) {
                  puStack_518 = (undefined8 *)(lStack_578 + lVar1 * 8);
                  lStack_510 = lVar6;
                  FUN_1098e479c(&uStack_502,puStack_540,&puStack_518,lVar19,lVar16,0,0);
                  puStack_518 = puStack_5b8;
                  lStack_510 = uStack_550;
                  uVar22 = *puStack_548;
                  *(undefined8 *)(puVar9 + -0x18) = 0;
                  *(long *)(puVar9 + -0x10) = lVar16;
                  *(long *)(puVar9 + -0x20) = lStack_528;
                  FUN_109404e14(uVar22,&uStack_501,&puStack_518,puVar8,puStack_538,lVar16,lVar19,
                                lStack_530,lVar19);
                }
                lVar16 = lVar16 + lStack_5a0;
                lVar15 = lVar15 - lStack_5a0;
                puVar17 = (undefined8 *)((long)puVar17 + lStack_5b0);
                lVar19 = lStack_5a0;
              } while (lVar16 < lStack_528);
            }
            lStack_578 = lStack_5c0;
            if (lStack_558 <= lStack_5c0) {
              lStack_578 = lStack_558;
            }
            if (0 < lStack_578) {
              lVar19 = 0;
              lVar16 = 0;
              puVar18 = (undefined8 *)(lStack_598 + lStack_558 * 8);
              lVar15 = lStack_580;
              puVar17 = puStack_5d0;
              do {
                lVar2 = lStack_528;
                puVar8 = puStack_540;
                lVar21 = lStack_558;
                if (lStack_568 <= lStack_558) {
                  lVar21 = lStack_568;
                }
                if (lStack_570 <= lVar21) {
                  lVar21 = lStack_570;
                }
                if (lVar15 <= lVar21) {
                  lVar21 = lVar15;
                }
                lStack_510 = lStack_560;
                puStack_518 = puVar18;
                FUN_1098e479c(&uStack_519,puStack_540,&puStack_518,lStack_528,lVar21 + lVar19,0,0);
                lStack_510 = uStack_550;
                uVar22 = *puStack_548;
                puStack_518 = puVar17;
                *(undefined8 *)(puVar9 + -0x18) = 0;
                *(undefined8 *)(puVar9 + -0x10) = 0;
                *(undefined8 *)(puVar9 + -0x20) = 0xffffffffffffffff;
                FUN_109404e14(uVar22,&uStack_501,&puStack_518,puVar8,puStack_538,lVar21 + lVar19,
                              lVar2,lStack_530,0xffffffffffffffff);
                lVar16 = lVar16 + lStack_580;
                puVar17 = (undefined8 *)((long)puVar17 + lStack_588);
                puVar18 = (undefined8 *)((long)puVar18 + lStack_590);
                lVar15 = lVar15 + lStack_580;
                lVar19 = lVar19 - lStack_580;
              } while (lVar16 < lStack_578);
            }
            lVar15 = lStack_5c8 + lStack_5d8;
          } while (lVar15 < lStack_568);
        }
        if (0x4000 < uStack_608) {
          _free(puStack_618);
        }
        if (0x4000 < uStack_600) {
          _free(puStack_610);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098e501c;
    }
  }
  else {
LAB_1098e4fb4:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1098e501c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1098e5020);
  (*pcVar7)();
}



/* Entry: 1098e507c; end: 1098e578f;  */

void FUN_1098e507c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,long param_8,undefined4 param_9,undefined4 param_10,
                  undefined8 param_11,undefined8 *param_12,long *param_13)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 *puStack_650;
  long lStack_648;
  ulong uStack_640;
  ulong uStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined8 uStack_618;
  long lStack_610;
  undefined8 *puStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  undefined8 *puStack_550;
  long lStack_548;
  undefined1 *puStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  undefined1 uStack_519;
  undefined8 *puStack_518;
  long lStack_510;
  undefined1 uStack_503;
  undefined1 uStack_502;
  undefined1 uStack_501;
  undefined8 uStack_500;
  undefined1 auStack_4f8 [96];
  undefined8 uStack_498;
  undefined8 uStack_430;
  undefined8 uStack_3c8;
  undefined8 uStack_360;
  undefined8 uStack_2f8;
  undefined8 uStack_290;
  undefined8 uStack_228;
  undefined8 uStack_1c0;
  undefined8 uStack_158;
  undefined8 uStack_f0;
  undefined8 uStack_88;
  long lStack_78;
  
  ppuVar4 = &puStack_650;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  lVar13 = param_13[4];
  lStack_5b0 = param_13[2];
  lStack_5c0 = lStack_5b0;
  if (param_1 <= lStack_5b0) {
    lStack_5c0 = param_1;
  }
  lVar12 = lStack_5c0;
  if (lVar13 <= lStack_5c0) {
    lVar12 = lVar13;
  }
  if (0xb < lVar12) {
    lVar12 = 0xc;
  }
  uVar8 = lStack_5c0 * lVar13;
  lStack_620 = param_6;
  uStack_618 = param_7;
  lStack_5d0 = param_4;
  lStack_590 = param_5;
  lStack_588 = param_8;
  if (uVar8 >> 0x3d == 0) {
    lStack_570 = *param_13;
    if (lStack_570 == 0) {
      lVar2 = uVar8 * 8;
      if (uVar8 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar2 = -(lVar2 + 0x1eU & 0xfffffffffffffff0);
        ppuVar4 = (undefined1 **)((long)&puStack_650 + lVar2);
        lStack_648 = (long)&puStack_650 + lVar2;
        lStack_570 = lStack_648;
      }
      else {
        _malloc();
        lStack_648 = lVar2;
        lStack_570 = lVar2;
        if (lVar2 == 0) goto LAB_1098e56c8;
      }
    }
    else {
      lStack_648 = 0;
      ppuVar4 = &puStack_650;
    }
    uVar5 = lVar13 * param_2;
    if (uVar5 >> 0x3d == 0) {
      puStack_540 = (undefined1 *)param_13[1];
      uStack_640 = uVar5;
      uStack_638 = uVar8;
      if (puStack_540 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(uVar5 * 8);
        if (uVar5 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          ppuVar4 = (undefined1 **)((long)ppuVar4 + -((ulong)(puVar3 + 0x1e) & 0xfffffffffffffff0));
          puStack_650 = (undefined1 *)ppuVar4;
          puStack_540 = (undefined1 *)ppuVar4;
          goto LAB_1098e51e8;
        }
        _malloc();
        puStack_650 = puVar3;
        puStack_540 = puVar3;
        if (puVar3 != (undefined1 *)0x0) goto LAB_1098e51e8;
      }
      else {
        puStack_650 = (undefined1 *)0x0;
LAB_1098e51e8:
        _bzero(&uStack_500,0x480);
        uStack_500 = 0x3ff0000000000000;
        uStack_498 = 0x3ff0000000000000;
        uStack_430 = 0x3ff0000000000000;
        uStack_3c8 = 0x3ff0000000000000;
        uStack_360 = 0x3ff0000000000000;
        uStack_2f8 = 0x3ff0000000000000;
        uStack_290 = 0x3ff0000000000000;
        uStack_228 = 0x3ff0000000000000;
        uStack_1c0 = 0x3ff0000000000000;
        uStack_158 = 0x3ff0000000000000;
        uStack_f0 = 0x3ff0000000000000;
        uStack_88 = 0x3ff0000000000000;
        if (0 < param_3) {
          lStack_610 = lStack_590 * 8;
          lVar2 = lStack_610 + 8;
          lStack_5f0 = lStack_5d0 + param_3 * 8;
          lStack_5e0 = lStack_5f0 + 8;
          lStack_5b8 = lVar12 * lVar2;
          lStack_628 = lVar13 << 3;
          lStack_5c8 = lStack_5c0 << 3;
          puStack_550 = param_12;
          uStack_558 = param_11;
          lStack_5f8 = lStack_5c0 + param_3;
          lStack_600 = -param_3;
          lStack_630 = lVar13 * -8;
          puStack_608 = (undefined8 *)(lStack_588 + param_3 * 8);
          lStack_5e8 = lStack_5f0;
          lStack_5a8 = lVar12;
          lStack_5a0 = lVar13;
          lStack_580 = param_1;
          lStack_578 = param_2;
          do {
            lVar12 = lStack_5a0;
            lVar10 = lStack_5a8;
            lVar13 = lStack_5a0;
            if (param_3 <= lStack_5a0) {
              lVar13 = param_3;
            }
            lStack_598 = param_3 - lVar13;
            puStack_518 = (undefined8 *)(lStack_620 + lStack_598 * 8);
            lStack_510 = uStack_618;
            lStack_5d8 = param_3;
            FUN_1098e46ac(&uStack_503,puStack_540,&puStack_518,lVar13,param_2,0,0);
            lStack_548 = lVar13;
            if (0 < lVar12) {
              lVar16 = 0;
              lVar9 = lStack_610 * lStack_598;
              lStack_530 = lStack_5e0 + lVar13 * -8;
              lStack_538 = lStack_5e8 + lVar13 * -8;
              lVar11 = lVar13;
              do {
                if (lStack_5b0 <= lVar12) {
                  lVar12 = lStack_5b0;
                }
                if (param_1 <= lVar12) {
                  lVar12 = param_1;
                }
                if (lVar13 <= lVar12) {
                  lVar12 = lVar13;
                }
                if (0xb < lVar12) {
                  lVar12 = 0xc;
                }
                lStack_560 = lVar11 - lVar16;
                if (lStack_560 <= lVar10) {
                  lVar10 = lStack_560;
                }
                lStack_568 = lVar13;
                lStack_528 = lVar16;
                if (0 < lVar10) {
                  lVar13 = 0;
                  lVar6 = lVar12 * 8;
                  lVar16 = 1;
                  lVar11 = lStack_538;
                  lVar15 = lStack_530;
                  do {
                    lVar6 = lVar6 + -8;
                    *(undefined8 *)(auStack_4f8 + lVar13 + -8) = *(undefined8 *)(lVar11 + lVar9);
                    if (lVar16 < lVar10) {
                      _memcpy(auStack_4f8 + lVar13,lVar15 + lVar9,lVar6);
                    }
                    lVar11 = lVar11 + lVar2;
                    lVar13 = lVar13 + 0x68;
                    lVar15 = lVar15 + lVar2;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 - lVar12 != 1);
                }
                lVar12 = lStack_570;
                puStack_518 = &uStack_500;
                lStack_510 = 0xc;
                FUN_109404b80(&uStack_502,lStack_570,&puStack_518,lVar10,lVar10,0,0);
                lVar16 = lStack_528;
                lVar13 = lStack_528 + lStack_598;
                puStack_518 = (undefined8 *)(lStack_588 + lVar13 * 8);
                lStack_510 = uStack_558;
                uVar17 = *puStack_550;
                *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                *(long *)((long)ppuVar4 + -0x10) = lVar16;
                lVar11 = lStack_548;
                *(long *)((long)ppuVar4 + -0x20) = lStack_548;
                param_2 = lStack_578;
                FUN_109404e14(uVar17,&uStack_501,&puStack_518,lVar12,puStack_540,lVar10,lVar10,
                              lStack_578,lVar10);
                param_1 = lStack_580;
                lVar15 = lStack_560 - lVar10;
                if (0 < lVar15) {
                  puStack_518 = (undefined8 *)
                                (lStack_5d0 + lVar13 * lStack_590 * 8 + (lVar10 + lVar13) * 8);
                  lStack_510 = lStack_590;
                  FUN_109404b80(&uStack_502,lVar12,&puStack_518,lVar10,lVar15,0,0);
                  lVar16 = lStack_528;
                  puStack_518 = (undefined8 *)(lStack_588 + (lVar10 + lVar13) * 8);
                  lStack_510 = uStack_558;
                  uVar17 = *puStack_550;
                  *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                  *(long *)((long)ppuVar4 + -0x10) = lVar16;
                  lVar11 = lStack_548;
                  *(long *)((long)ppuVar4 + -0x20) = lStack_548;
                  FUN_109404e14(uVar17,&uStack_501,&puStack_518,lVar12,puStack_540,lVar15,lVar10,
                                param_2,lVar10);
                  lVar16 = lStack_528;
                }
                lVar16 = lVar16 + lStack_5a8;
                lVar13 = lStack_568 - lStack_5a8;
                lStack_530 = lStack_530 + lStack_5b8;
                lStack_538 = lStack_538 + lStack_5b8;
                lVar12 = lStack_5a0;
                lVar10 = lStack_5a8;
              } while (lVar16 < lVar11);
            }
            if (lStack_5d8 < param_1) {
              puVar7 = (undefined8 *)(lStack_5f0 + lStack_610 * lStack_598);
              lVar10 = lStack_600;
              lVar12 = lStack_5f8;
              puVar14 = puStack_608;
              lVar13 = lStack_5d8;
              do {
                lVar11 = lStack_548;
                lVar16 = lStack_570;
                if (lVar12 <= param_1) {
                  param_1 = lVar12;
                }
                lStack_510 = lStack_590;
                puStack_518 = puVar7;
                FUN_109404b80(&uStack_519,lStack_570,&puStack_518,lStack_548,param_1 + lVar10,0,0);
                lStack_510 = uStack_558;
                uVar17 = *puStack_550;
                puStack_518 = puVar14;
                *(undefined8 *)((long)ppuVar4 + -0x18) = 0;
                *(undefined8 *)((long)ppuVar4 + -0x10) = 0;
                *(undefined8 *)((long)ppuVar4 + -0x20) = 0xffffffffffffffff;
                param_2 = lStack_578;
                FUN_109404e14(uVar17,&uStack_501,&puStack_518,lVar16,puStack_540,param_1 + lVar10,
                              lVar11,lStack_578,0xffffffffffffffff);
                lVar13 = lVar13 + lStack_5c0;
                puVar14 = (undefined8 *)((long)puVar14 + lStack_5c8);
                puVar7 = (undefined8 *)((long)puVar7 + lStack_5c8);
                lVar12 = lVar12 + lStack_5c0;
                lVar10 = lVar10 - lStack_5c0;
                param_1 = lStack_580;
              } while (lVar13 < lStack_580);
            }
            lStack_5e0 = lStack_5e0 + lStack_630;
            lStack_5e8 = lStack_5e8 + lStack_630;
            puStack_608 = (undefined8 *)((long)puStack_608 - lStack_628);
            lStack_5f0 = lStack_5f0 - lStack_628;
            lStack_5f8 = lStack_5f8 - lStack_5a0;
            lStack_600 = lStack_600 + lStack_5a0;
            param_3 = lStack_5d8 - lStack_5a0;
          } while (param_3 != 0 && lStack_5a0 <= lStack_5d8);
        }
        if (0x4000 < uStack_640) {
          _free(puStack_650);
        }
        if (0x4000 < uStack_638) {
          _free(lStack_648);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098e5730;
    }
  }
  else {
LAB_1098e56c8:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1098e5730:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098e5734);
  (*pcVar1)();
}



/* Entry: 1098e5790; end: 1098e5e57;  */

void FUN_1098e5790(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,long param_8,undefined4 param_9,undefined4 param_10,
                  undefined8 param_11,undefined8 *param_12,undefined8 *param_13)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_640 [8];
  undefined1 *puStack_638;
  undefined1 *puStack_630;
  ulong uStack_628;
  ulong uStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  ulong uStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 *puStack_548;
  undefined1 *puStack_540;
  undefined1 *puStack_538;
  long lStack_530;
  long lStack_528;
  undefined1 uStack_519;
  undefined8 *puStack_518;
  long lStack_510;
  undefined1 uStack_503;
  undefined1 uStack_502;
  undefined1 uStack_501;
  undefined8 auStack_500 [13];
  undefined8 uStack_498;
  undefined8 uStack_430;
  undefined8 uStack_3c8;
  undefined8 uStack_360;
  undefined8 uStack_2f8;
  undefined8 uStack_290;
  undefined8 uStack_228;
  undefined8 uStack_1c0;
  undefined8 uStack_158;
  undefined8 uStack_f0;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar5 = auStack_640;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  lVar12 = param_13[4];
  lStack_598 = param_13[2];
  lStack_5a8 = lStack_598;
  if (param_1 <= lStack_598) {
    lStack_5a8 = param_1;
  }
  lVar11 = lStack_5a8;
  if (lVar12 <= lStack_5a8) {
    lVar11 = lVar12;
  }
  if (0xb < lVar11) {
    lVar11 = 0xc;
  }
  uVar10 = lStack_5a8 * lVar12;
  lStack_608 = param_6;
  uStack_600 = param_7;
  lStack_5b8 = param_4;
  lStack_578 = param_5;
  lStack_570 = param_8;
  if (uVar10 >> 0x3d == 0) {
    puStack_540 = (undefined1 *)*param_13;
    if (puStack_540 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(uVar10 * 8);
      if (uVar10 < 0x4001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar5 = auStack_640 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_630 = auStack_640 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
        puStack_540 = auStack_640 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
      }
      else {
        _malloc();
        puStack_630 = puVar4;
        puStack_540 = puVar4;
        if (puVar4 == (undefined1 *)0x0) goto LAB_1098e5d90;
      }
    }
    else {
      puStack_630 = (undefined1 *)0x0;
      puVar5 = auStack_640;
    }
    uVar6 = lVar12 * param_2;
    if (uVar6 >> 0x3d == 0) {
      puStack_538 = (undefined1 *)param_13[1];
      uStack_628 = uVar6;
      uStack_620 = uVar10;
      if (puStack_538 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(uVar6 * 8);
        if (uVar6 < 0x4001) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          puVar5 = puVar5 + -((ulong)(puVar4 + 0x1e) & 0xfffffffffffffff0);
          puStack_638 = puVar5;
          puStack_538 = puVar5;
          goto LAB_1098e58fc;
        }
        _malloc();
        puStack_638 = puVar4;
        puStack_538 = puVar4;
        if (puVar4 != (undefined1 *)0x0) goto LAB_1098e58fc;
      }
      else {
        puStack_638 = (undefined1 *)0x0;
LAB_1098e58fc:
        _bzero(auStack_500,0x480);
        auStack_500[0] = 0x3ff0000000000000;
        uStack_498 = 0x3ff0000000000000;
        uStack_430 = 0x3ff0000000000000;
        uStack_3c8 = 0x3ff0000000000000;
        uStack_360 = 0x3ff0000000000000;
        uStack_2f8 = 0x3ff0000000000000;
        uStack_290 = 0x3ff0000000000000;
        uStack_228 = 0x3ff0000000000000;
        uStack_1c0 = 0x3ff0000000000000;
        uStack_158 = 0x3ff0000000000000;
        uStack_f0 = 0x3ff0000000000000;
        uStack_88 = 0x3ff0000000000000;
        if (0 < param_3) {
          puStack_548 = param_12;
          uStack_550 = param_11;
          lStack_5f8 = lStack_578 * 8;
          lVar1 = lStack_5f8 + 8;
          uStack_5c0 = (ulong)auStack_500 | 8;
          lStack_5d8 = lStack_5b8 + param_3 * 8;
          lStack_5d0 = lStack_5d8 + 8;
          lStack_610 = lVar12 << 3;
          lStack_5a0 = lVar11 * lVar1;
          lStack_5b0 = lStack_5a8 << 3;
          lStack_5e0 = lStack_5a8 + param_3;
          lStack_5e8 = -param_3;
          lStack_618 = lVar12 * -8;
          puStack_5f0 = (undefined8 *)(lStack_570 + param_3 * 8);
          lStack_590 = lVar12;
          lStack_588 = lVar11;
          lStack_568 = param_1;
          lStack_560 = param_2;
          do {
            lVar8 = lStack_588;
            lVar11 = lStack_590;
            lVar12 = lStack_590;
            if (param_3 <= lStack_590) {
              lVar12 = param_3;
            }
            lStack_580 = param_3 - lVar12;
            puStack_518 = (undefined8 *)(lStack_608 + lStack_580 * 8);
            lStack_510 = uStack_600;
            lStack_5c8 = param_3;
            FUN_1098e46ac(&uStack_503,puStack_538,&puStack_518,lVar12,param_2,0,0);
            lStack_528 = lVar12;
            if (0 < lVar11) {
              lVar15 = 0;
              lStack_530 = lStack_5d0 + lStack_5f8 * lStack_580 + lVar12 * -8;
              do {
                if (lStack_598 <= lVar11) {
                  lVar11 = lStack_598;
                }
                if (param_1 <= lVar11) {
                  lVar11 = param_1;
                }
                if (lVar12 <= lVar11) {
                  lVar11 = lVar12;
                }
                if (0xb < lVar11) {
                  lVar11 = 0xc;
                }
                lStack_558 = lStack_528 - lVar15;
                lVar2 = lVar8;
                if (lStack_558 <= lVar8) {
                  lVar2 = lStack_558;
                }
                if (0 < lVar2) {
                  lVar7 = lVar11 * 8;
                  lVar8 = 1;
                  lVar14 = lStack_530;
                  uVar10 = uStack_5c0;
                  do {
                    lVar7 = lVar7 + -8;
                    if (lVar8 < lVar2) {
                      _memcpy(uVar10,lVar14,lVar7);
                    }
                    uVar10 = uVar10 + 0x68;
                    lVar14 = lVar14 + lVar1;
                    lVar8 = lVar8 + 1;
                  } while (lVar8 - lVar11 != 1);
                }
                puVar4 = puStack_540;
                puStack_518 = auStack_500;
                lStack_510 = 0xc;
                FUN_109404b80(&uStack_502,puStack_540,&puStack_518,lVar2,lVar2,0,0);
                lVar11 = lVar15 + lStack_580;
                puStack_518 = (undefined8 *)(lStack_570 + lVar11 * 8);
                lStack_510 = uStack_550;
                uVar16 = *puStack_548;
                *(undefined8 *)(puVar5 + -0x18) = 0;
                *(long *)(puVar5 + -0x10) = lVar15;
                *(long *)(puVar5 + -0x20) = lStack_528;
                param_2 = lStack_560;
                FUN_109404e14(uVar16,&uStack_501,&puStack_518,puVar4,puStack_538,lVar2,lVar2,
                              lStack_560,lVar2);
                puVar4 = puStack_540;
                lVar8 = lStack_588;
                lVar14 = lStack_558 - lVar2;
                if (0 < lVar14) {
                  puStack_518 = (undefined8 *)
                                (lStack_5b8 + lVar11 * lStack_578 * 8 + (lVar2 + lVar11) * 8);
                  lStack_510 = lStack_578;
                  FUN_109404b80(&uStack_502,puStack_540,&puStack_518,lVar2,lVar14,0,0);
                  puStack_518 = (undefined8 *)(lStack_570 + (lVar2 + lVar11) * 8);
                  lStack_510 = uStack_550;
                  uVar16 = *puStack_548;
                  *(undefined8 *)(puVar5 + -0x18) = 0;
                  *(long *)(puVar5 + -0x10) = lVar15;
                  *(long *)(puVar5 + -0x20) = lStack_528;
                  FUN_109404e14(uVar16,&uStack_501,&puStack_518,puVar4,puStack_538,lVar14,lVar2,
                                param_2,lVar2);
                }
                lVar15 = lVar15 + lVar8;
                lVar12 = lVar12 - lVar8;
                lStack_530 = lStack_530 + lStack_5a0;
                lVar11 = lStack_590;
                param_1 = lStack_568;
              } while (lVar15 < lStack_528);
            }
            if (lStack_5c8 < param_1) {
              puVar9 = (undefined8 *)(lStack_5d8 + lStack_5f8 * lStack_580);
              lVar8 = lStack_5e8;
              lVar11 = lStack_5e0;
              puVar13 = puStack_5f0;
              lVar12 = lStack_5c8;
              do {
                lVar15 = lStack_528;
                puVar4 = puStack_540;
                if (lVar11 <= param_1) {
                  param_1 = lVar11;
                }
                lStack_510 = lStack_578;
                puStack_518 = puVar9;
                FUN_109404b80(&uStack_519,puStack_540,&puStack_518,lStack_528,param_1 + lVar8,0,0);
                lStack_510 = uStack_550;
                uVar16 = *puStack_548;
                puStack_518 = puVar13;
                *(undefined8 *)(puVar5 + -0x18) = 0;
                *(undefined8 *)(puVar5 + -0x10) = 0;
                *(undefined8 *)(puVar5 + -0x20) = 0xffffffffffffffff;
                param_2 = lStack_560;
                FUN_109404e14(uVar16,&uStack_501,&puStack_518,puVar4,puStack_538,param_1 + lVar8,
                              lVar15,lStack_560,0xffffffffffffffff);
                lVar12 = lVar12 + lStack_5a8;
                puVar13 = (undefined8 *)((long)puVar13 + lStack_5b0);
                puVar9 = (undefined8 *)((long)puVar9 + lStack_5b0);
                lVar11 = lVar11 + lStack_5a8;
                lVar8 = lVar8 - lStack_5a8;
                param_1 = lStack_568;
              } while (lVar12 < lStack_568);
            }
            lStack_5d0 = lStack_5d0 + lStack_618;
            puStack_5f0 = (undefined8 *)((long)puStack_5f0 - lStack_610);
            lStack_5d8 = lStack_5d8 - lStack_610;
            lStack_5e0 = lStack_5e0 - lStack_590;
            lStack_5e8 = lStack_5e8 + lStack_590;
            param_3 = lStack_5c8 - lStack_590;
          } while (param_3 != 0 && lStack_590 <= lStack_5c8);
        }
        if (0x4000 < uStack_628) {
          _free(puStack_638);
        }
        if (0x4000 < uStack_620) {
          _free(puStack_630);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_1098e5df8;
    }
  }
  else {
LAB_1098e5d90:
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_1098e5df8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1098e5dfc);
  (*pcVar3)();
}



/* Entry: 1098e5e58; end: 1098e5ef7;  */

bool FUN_1098e5e58(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = ABS(*param_3);
  dVar1 = dVar2 + dVar2;
  if (dVar1 < 2.2250738585072014e-308) {
    dVar4 = 1.0;
    dVar2 = 0.0;
  }
  else {
    dVar3 = (*param_2 - *param_4) / dVar1;
    dVar4 = SQRT(dVar3 * dVar3 + 1.0);
    if (dVar3 <= 0.0) {
      dVar4 = -dVar4;
    }
    dVar5 = 1.0 / (dVar3 + dVar4);
    dVar4 = 1.0 / SQRT(dVar5 * dVar5 + 1.0);
    dVar2 = *param_3 / dVar2;
    dVar3 = -dVar2;
    if (dVar5 <= 0.0) {
      dVar3 = dVar2;
    }
    dVar2 = ABS(dVar5) * dVar3 * dVar4;
  }
  *param_1 = dVar4;
  param_1[1] = dVar2;
  return 2.2250738585072014e-308 <= dVar1;
}



/* Entry: 1098e5ef8; end: 1098e6033;  */

long FUN_1098e5ef8(long param_1)

{
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  return param_1;
}



/* Entry: 1098e6034; end: 1098e60a3;  */

undefined8 * FUN_1098e6034(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_1093aca70(param_1,0x32);
  return param_1;
}



/* Entry: 1098e60a4; end: 1098e6137;  */

bool FUN_1098e60a4(long *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined2 uStack_32;
  
  uStack_32 = (undefined2)param_3;
  uVar1 = (param_1[1] - *param_1 >> 2) * -0x5555555555555555;
  if ((uVar1 < 0x32) && (FUN_1093aa034(), (param_3 >> 8 & 1) != 0)) {
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x000107c31950(param_1 + 3,0x32);
    }
    FUN_1093ae29c(param_1 + 3,&uStack_32);
  }
  return uVar1 < 0x32;
}



/* Entry: 1098e6138; end: 1098e634b;  */

void FUN_1098e6138(long *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = param_2 << 1 | 1;
  uVar5 = uVar5 * uVar5 * uVar5;
  uVar9 = (ulong)uVar5;
  if ((int)uVar5 < 0) {
    FUN_1093a6ddc();
LAB_1098e6324:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1098e6328);
    (*pcVar6)();
  }
  plVar8 = param_1;
  FUN_1093a6df0();
  puVar10 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)plVar8 + ((long)puVar10 - (long)puVar2));
  puVar13 = puVar1;
  if (puVar2 != puVar10) {
    do {
      uVar3 = *puVar10;
      *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
      *puVar13 = uVar3;
      puVar10 = (undefined4 *)((long)puVar10 + 6);
      puVar13 = (undefined4 *)((long)puVar13 + 6);
    } while (puVar10 != puVar2);
    puVar10 = (undefined4 *)*param_1;
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)plVar8;
  param_1[2] = (long)plVar8 + uVar9 * 6;
  if (puVar10 != (undefined4 *)0x0) {
    __ZdlPv(puVar10);
  }
  if (-1 < param_2) {
    iVar4 = -param_2;
    puVar15 = (undefined2 *)param_1[1];
    iVar14 = iVar4;
    iVar17 = iVar4;
    iVar18 = iVar4;
    do {
      if (puVar15 < (undefined2 *)param_1[2]) {
        *puVar15 = (short)iVar17;
        puVar15[1] = (short)iVar18;
        puVar15[2] = (short)iVar14;
        puVar15 = puVar15 + 3;
      }
      else {
        lVar16 = (long)puVar15 - *param_1;
        uVar9 = (lVar16 >> 1) * -0x5555555555555555 + 1;
        if (0x2aaaaaaaaaaaaaaa < uVar9) {
          FUN_1093a6ddc();
          goto LAB_1098e6324;
        }
        lVar11 = param_1[2] - *param_1 >> 1;
        uVar12 = lVar11 * 0x5555555555555556;
        if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
          uVar12 = uVar9;
        }
        if (0x1555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar12 = 0x2aaaaaaaaaaaaaaa;
        }
        plVar8 = param_1;
        FUN_1093a6df0();
        puVar10 = (undefined4 *)*param_1;
        puVar2 = (undefined4 *)param_1[1];
        puVar15 = (undefined2 *)((long)plVar8 + lVar16);
        *puVar15 = (short)iVar17;
        puVar15[1] = (short)iVar18;
        puVar15[2] = (short)iVar14;
        lVar16 = (long)puVar10 - (long)puVar2;
        puVar1 = (undefined4 *)((long)puVar15 + lVar16);
        puVar13 = puVar1;
        if (lVar16 != 0) {
          do {
            uVar3 = *puVar10;
            *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar10 + 1);
            *puVar13 = uVar3;
            puVar10 = (undefined4 *)((long)puVar10 + 6);
            puVar13 = (undefined4 *)((long)puVar13 + 6);
          } while (puVar10 != puVar2);
          puVar10 = (undefined4 *)*param_1;
        }
        puVar15 = puVar15 + 3;
        *param_1 = (long)puVar1;
        param_1[1] = (long)puVar15;
        param_1[2] = (long)plVar8 + uVar12 * 6;
        if (puVar10 != (undefined4 *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar15;
      bVar7 = iVar14 != param_2;
      iVar14 = iVar14 + 1;
    } while (((bVar7) || (bVar7 = iVar18 != param_2, iVar14 = iVar4, iVar18 = iVar18 + 1, bVar7)) ||
            (bVar7 = iVar17 != param_2, iVar17 = iVar17 + 1, iVar18 = iVar4, bVar7));
  }
  return;
}



/* Entry: 1098e634c; end: 1098e63f7;  */

void FUN_1098e634c(long *param_1)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  ulong uVar6;
  
  FUN_1098e6138(1);
  psVar4 = (short *)param_1[1];
  psVar3 = (short *)*param_1;
  psVar5 = psVar3;
  psVar1 = psVar3;
  for (; (psVar3 != psVar4 &&
         (((*psVar3 != 0 || (psVar3[1] != 0)) || (psVar5 = psVar1, psVar3[2] != 0))));
      psVar3 = psVar3 + 3) {
    psVar1 = psVar1 + 3;
    psVar5 = psVar4;
  }
  psVar3 = psVar5 + 3;
  if (psVar3 != psVar4) {
    uVar6 = (long)psVar4 + (-0xc - (long)psVar5);
    lVar2 = (uVar6 / 6) * 2 + uVar6 / 6;
    _memmove(psVar5,psVar3,lVar2 * 2 + 6);
    psVar5 = psVar3 + lVar2;
  }
  param_1[1] = (long)psVar5;
  return;
}



/* Entry: 1098e63f8; end: 1098e64b3;  */

void FUN_1098e63f8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  plStack_38 = (long *)param_2[4];
  uStack_40 = param_2[3];
  if (param_2[4] != 0) {
    plVar1 = (long *)(param_2[4] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1094494b8(param_1,&uStack_28,&uStack_40,*(undefined4 *)(param_2 + 1),param_2[2],param_2[5],
                *(undefined4 *)(param_2 + 6));
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 1098e64b4; end: 1098e64df;  */

/* WARNING: Removing unreachable block (ram,0x000109445aa8) */
/* WARNING: Removing unreachable block (ram,0x000109445ac0) */
/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b24) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

uint * FUN_1098e64b4(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (uint *)*param_2;
  if ((param_2[1] == 0) || ((byte)*puVar2 == 0x7d)) {
    return puVar2;
  }
  puVar6 = (uint *)((long)puVar2 + param_2[1]);
  if ((long)puVar6 - (long)puVar2 < 2) {
    if (puVar2 == puVar6) {
LAB_109445bc8:
      return puVar2;
    }
  }
  else {
    uVar9 = *(byte *)((long)puVar2 + 1) - 0x3c;
    if (uVar9 < 0x23 && (1L << ((ulong)uVar9 & 0x3f) & 0x400000005U) != 0) {
      bVar7 = 0;
      goto LAB_109445820;
    }
  }
  bVar7 = (byte)*puVar2;
LAB_109445820:
  uVar9 = 0;
  puVar4 = puVar6;
  puVar5 = param_1;
  do {
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      uVar8 = 0xc00;
      if (bVar7 != 0x20) {
        uVar8 = 0x800;
      }
      *param_1 = *param_1 & 0xfffff3ff | uVar8;
    case 0x2d:
      if (1 < uVar9) goto LAB_109445bf8;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 2;
      break;
    default:
      bVar7 = (byte)*puVar2;
      if (bVar7 == 0x7d) {
        return puVar2;
      }
      puVar5 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar7 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar2 + (long)puVar5);
      if ((long)puVar6 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar7 == 0x7b) goto LAB_109445c10;
      bVar7 = *pbVar1;
      if (bVar7 == 0x3c) {
        uVar8 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar8 = 0x18;
      }
      else {
        if (bVar7 != 0x3e) goto LAB_109445bf8;
        uVar8 = 0x10;
      }
      if (uVar9 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_1);
      *param_1 = *param_1 & 0xffffffc7 | uVar8;
      uVar9 = 1;
      puVar4 = puVar2;
      puVar2 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if (2 < uVar9) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x2000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 3;
      break;
    case 0x2e:
      if (5 < uVar9) goto LAB_109445bf8;
      puVar4 = puVar6;
      puVar5 = param_1;
      FUN_109445c1c();
      uVar9 = 6;
      break;
    case 0x30:
      if (3 < uVar9) goto LAB_109445bf8;
      if ((*param_1 & 0x38) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        *param_1 = *param_1 & 0xfffc7fc7 | 0x8020;
      }
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar9) goto LAB_109445bf8;
      puVar5 = param_1 + 2;
      puVar4 = puVar6;
      FUN_109445cb8();
      *param_1 = *param_1 & 0xffffff3f | (int)puVar4 << 6;
      uVar9 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar9 != 0) goto LAB_109445bf8;
      uVar9 = 0;
      if (bVar7 == 0x3e) {
        uVar9 = 0x10;
      }
      uVar8 = 0x18;
      if (bVar7 != 0x5e) {
        uVar8 = uVar9;
      }
      uVar9 = 8;
      if (bVar7 != 0x3c) {
        uVar9 = uVar8;
      }
      *param_1 = *param_1 & 0xffffffc7 | uVar9;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 1;
      break;
    case 0x3f:
LAB_109445bf8:
      FUN_1099a5aa4(&UNK_10f56d78b);
      FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
      puVar3 = &UNK_10f3dbec2;
      FUN_1099a5aa4();
      puVar2 = (uint *)(puVar3 + 1);
      if (puVar2 != puVar4) {
        FUN_109445cb8();
        *puVar5 = *puVar5 & 0xfffffcff | (int)puVar4 << 8;
        return puVar2;
      }
      puVar2 = (uint *)&UNK_10f56d7a4;
      FUN_1099a5aa4();
      *puVar2 = *puVar2 & 0xfffc7fff | (int)puVar5 << 0xf;
      if (puVar5 != (uint *)0x0) {
        if (puVar5 == (uint *)0x1) {
          *(byte *)(puVar2 + 1) = (byte)*puVar4;
          *(undefined2 *)((long)puVar2 + 5) = 0;
          return puVar2;
        }
        puVar6 = (uint *)0x0;
        do {
          *(byte *)((long)puVar2 + ((ulong)puVar6 & 3) + 4) = *(byte *)((long)puVar4 + (long)puVar6)
          ;
          puVar6 = (uint *)((long)puVar6 + 1);
        } while (puVar5 != puVar6);
      }
      return puVar2;
    case 0x41:
      *param_1 = *param_1 | 0x1000;
    case 0x61:
      uVar9 = *param_1 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *param_1 = uVar9;
      return (uint *)((long)puVar2 + 1);
    case 0x42:
      *param_1 = *param_1 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *param_1 = *param_1 | 0x1000;
    case 0x65:
      uVar9 = *param_1 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x46:
      *param_1 = *param_1 | 0x1000;
    case 0x66:
      uVar9 = *param_1 & 0xfffffff8 | 2;
      goto code_r0x000109445bc0;
    case 0x47:
      *param_1 = *param_1 | 0x1000;
    case 0x67:
      uVar9 = *param_1 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x4c:
      if (6 < uVar9) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x4000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 7;
      break;
    case 0x58:
      *param_1 = *param_1 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar2 == puVar6) {
      return puVar2;
    }
    bVar7 = (byte)*puVar2;
  } while( true );
}



/* Entry: 1098e64e0; end: 1098e6583;  */

long * FUN_1098e64e0(ushort *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  uint **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined8 unaff_x22;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  ulong uStack_2f8;
  long *plStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [504];
  long lStack_d8;
  uint uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  uint *puStack_70;
  undefined1 *puStack_68;
  uint auStack_60 [4];
  undefined4 uStack_50;
  
  if ((*param_1 & 0x3c0) == 0) {
    plVar7 = (long *)*param_3;
    uVar18 = *param_2;
    puVar9 = *(uint **)param_1;
    puVar15 = *(undefined1 **)(param_1 + 4);
    uVar11 = param_3[3];
  }
  else {
    puVar9 = *(uint **)param_1;
    puVar15 = *(undefined1 **)(param_1 + 4);
    uVar18 = (uint)puVar9 >> 6 & 3;
    uVar6 = (ulong)uVar18;
    if (uVar18 != 0) {
      FUN_1094472f0(uVar6,param_1 + 8,param_3);
      puVar15 = (undefined1 *)((ulong)puVar15 & 0xffffffff00000000 | uVar6 & 0xffffffff);
    }
    uVar18 = (uint)puVar9 >> 8 & 3;
    uVar6 = (ulong)uVar18;
    if (uVar18 != 0) {
      FUN_1094472f0(uVar6,param_1 + 0x10,param_3);
      puVar15 = (undefined1 *)((ulong)puVar15 & 0xffffffff | uVar6 << 0x20);
    }
    plVar7 = (long *)*param_3;
    uVar18 = *param_2;
    uVar11 = param_3[3];
  }
  uVar6 = (ulong)uVar18;
  ppuVar10 = &puStack_70;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = puVar9;
  puStack_68 = puVar15;
  if (((uint)puVar9 >> 0xe & 1) == 0) {
LAB_1098e65e4:
    puVar9 = puStack_70;
    ppuVar10 = (uint **)puStack_68;
    uVar12 = uVar11;
    FUN_1098e662c();
    plVar8 = plVar7;
    uVar19 = uVar6;
  }
  else {
    uStack_50 = 9;
    puVar9 = auStack_60;
    plVar8 = plVar7;
    uVar12 = uVar11;
    uVar19 = uVar6;
    auStack_60[0] = uVar18;
    FUN_1099a58c4();
    if (((ulong)plVar8 & 1) == 0) goto LAB_1098e65e4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return plVar7;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1098e662c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar20 = (float)uVar19;
  uVar14 = (uint)puVar9;
  uVar18 = uVar14 >> 10 & 3;
  if ((int)fVar20 < 0) {
    uVar18 = 1;
  }
  uStack_310 = puVar9;
  uStack_308 = (undefined1 *)ppuVar10;
  uStack_90 = (uint *)uVar11;
  plStack_88 = plVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((uint)ABS(fVar20) < 0x7f800000) {
    plVar7 = plVar8;
    if (((uVar14 & 0x38) == 0x20) && (uVar18 != 0)) {
      lVar13 = plVar8[1];
      uVar6 = lVar13 + 1;
      if ((ulong)plVar8[2] < uVar6) {
        (*(code *)plVar8[3])();
        lVar13 = plVar8[1];
        uVar6 = lVar13 + 1;
      }
      plVar8[1] = uVar6;
      *(char *)(*plVar8 + lVar13) = (char)(0x202b2d00 >> (ulong)(uVar18 << 3));
      uVar18 = 0;
      if ((int)ppuVar10 != 0) {
        uStack_308 = (undefined1 *)CONCAT44(uStack_308._4_4_,(int)ppuVar10 + -1);
      }
    }
    uVar6 = (ulong)ppuVar10 >> 0x20;
    if ((long)ppuVar10 < 0) {
      if (((ulong)puVar9 & 7) != 0) {
        uVar6 = 6;
        goto LAB_1098e675c;
      }
      func_0x0001099a7914(uVar19);
      plStack_2f0 = plVar7;
      FUN_1098e7558(plVar8,&plStack_2f0,&uStack_310,uVar18,7,uVar12);
    }
    else {
LAB_1098e675c:
      uStack_2d8 = 0x1098e8c88;
      uStack_2e0 = 500;
      uStack_2e8 = 0;
      uVar1 = uVar14 & 7;
      uVar16 = (uint)uVar6;
      plStack_2f0 = (long *)auStack_2d0;
      if (uVar1 == 1) {
        if (uVar16 == 0x7fffffff) goto LAB_1098e68dc;
        uVar6 = (ulong)(uVar16 + 1);
LAB_1098e6800:
        if ((ulong)ppuVar10 >> 0x20 != 0) {
          uStack_310 = (uint *)(CONCAT44(uStack_310._4_4_,uVar14) | 0x2000);
        }
LAB_1098e6818:
        uVar5 = uVar17;
        FUN_1098e6d30((double)fVar20,uVar6,&uStack_310,1,&plStack_2f0);
        uVar17 = (undefined4)uVar6;
        uStack_308 = (undefined1 *)CONCAT44(uVar17,(undefined4)uStack_308);
        plStack_300 = plStack_2f0;
        uStack_2f8 = CONCAT44(uVar5,(int)uStack_2e8);
        FUN_1098ea190(plVar8,&plStack_300,&uStack_310,uVar18,7,uVar12);
      }
      else {
        if (uVar1 == 2) goto LAB_1098e6800;
        if (uVar1 != 4) {
          if (uVar16 < 2) {
            uVar16 = 1;
          }
          uVar6 = (ulong)uVar16;
          goto LAB_1098e6818;
        }
        if (uVar18 != 0) {
          auStack_2d0[0] = (undefined1)(0x202b2d00 >> (ulong)(uVar18 << 3));
        }
        uStack_2e8 = (ulong)(uVar18 != 0);
        FUN_1098e69b4(puVar9,uStack_308,&plStack_2f0);
        plStack_300 = plStack_2f0;
        uStack_2f8 = uStack_2e8;
        FUN_1098e8d3c(plVar8,&uStack_310,uStack_2e8,uStack_2e8,&plStack_300);
      }
      if (plStack_2f0 != (long *)auStack_2d0) {
        _free();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return plVar8;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    pcStack_78 = FUN_1098e662c;
    uStack_90 = puVar9;
    if ((((ulong)puVar9 & 0xff00000000) == 0x3000000000) && ((uVar14 & 0x38000) == 0x8000)) {
      uStack_90 = (uint *)CONCAT35((int3)((ulong)puVar9 >> 0x28),0x2000000000);
      uStack_90 = (uint *)CONCAT44(uStack_90._4_4_,uVar14);
    }
    bVar4 = ((ulong)puVar9 & 0x1000) != 0;
    pcStack_98 = "nan";
    if (bVar4) {
      pcStack_98 = "NAN";
    }
    pcVar2 = "inf";
    if (bVar4) {
      pcVar2 = "INF";
    }
    if (!NAN(fVar20)) {
      pcStack_98 = pcVar2;
    }
    uVar11 = 3;
    if (uVar18 != 0) {
      uVar11 = 4;
    }
    _uStack_a0 = CONCAT44((int)((ulong)unaff_x22 >> 0x20),uVar18);
    plStack_88 = (long *)ppuVar10;
    FUN_1098e7440(plVar8,&uStack_90,uVar11,uVar11,&uStack_a0);
    return plVar8;
  }
  ___stack_chk_fail();
LAB_1098e68dc:
  FUN_1099a5aa4(&UNK_10f3dbf55);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1098e68ec);
  (*pcVar3)();
}



/* Entry: 1098e6584; end: 1098e662b;  */

long * FUN_1098e6584(undefined8 param_1,long *param_2,undefined4 *param_3,undefined1 *param_4,
                    undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  ulong uStack_2f8;
  long *plStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [504];
  long lStack_d8;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined4 *puStack_70;
  undefined1 *puStack_68;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  long lStack_38;
  
  ppuVar7 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = param_3;
  puStack_68 = param_4;
  if (((uint)param_3 >> 0xe & 1) == 0) {
LAB_1098e65e4:
    puVar6 = puStack_70;
    ppuVar7 = (undefined4 **)puStack_68;
    uVar8 = param_5;
    FUN_1098e662c();
    plVar4 = param_2;
    uVar15 = param_1;
  }
  else {
    auStack_60[0] = (undefined4)param_1;
    uStack_50 = 9;
    puVar6 = auStack_60;
    plVar4 = param_2;
    uVar8 = param_5;
    uVar15 = param_1;
    FUN_1099a58c4();
    if (((ulong)plVar4 & 1) == 0) goto LAB_1098e65e4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1098e662c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar16 = (float)uVar15;
  uVar11 = (uint)puVar6;
  uVar10 = uVar11 >> 10 & 3;
  if ((int)fVar16 < 0) {
    uVar10 = 1;
  }
  uStack_310 = puVar6;
  uStack_308 = (undefined1 *)ppuVar7;
  uStack_90 = (undefined4 *)param_5;
  plStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((uint)ABS(fVar16) < 0x7f800000) {
    plVar5 = plVar4;
    if (((uVar11 & 0x38) == 0x20) && (uVar10 != 0)) {
      lVar9 = plVar4[1];
      uVar14 = lVar9 + 1;
      if ((ulong)plVar4[2] < uVar14) {
        (*(code *)plVar4[3])();
        lVar9 = plVar4[1];
        uVar14 = lVar9 + 1;
      }
      plVar4[1] = uVar14;
      *(char *)(*plVar4 + lVar9) = (char)(0x202b2d00 >> (ulong)(uVar10 << 3));
      uVar10 = 0;
      if ((int)ppuVar7 != 0) {
        uStack_308 = (undefined1 *)CONCAT44(uStack_308._4_4_,(int)ppuVar7 + -1);
      }
    }
    uVar14 = (ulong)ppuVar7 >> 0x20;
    if ((long)ppuVar7 < 0) {
      if (((ulong)puVar6 & 7) != 0) {
        uVar14 = 6;
        goto LAB_1098e675c;
      }
      func_0x0001099a7914(uVar15);
      plStack_2f0 = plVar5;
      FUN_1098e7558(plVar4,&plStack_2f0,&uStack_310,uVar10,7,uVar8);
    }
    else {
LAB_1098e675c:
      uStack_2d8 = 0x1098e8c88;
      uStack_2e0 = 500;
      uStack_2e8 = 0;
      uVar1 = uVar11 & 7;
      uVar12 = (uint)uVar14;
      plStack_2f0 = (long *)auStack_2d0;
      if (uVar1 == 1) {
        if (uVar12 == 0x7fffffff) goto LAB_1098e68dc;
        uVar14 = (ulong)(uVar12 + 1);
LAB_1098e6800:
        if ((ulong)ppuVar7 >> 0x20 != 0) {
          uStack_310 = (undefined4 *)(CONCAT44(uStack_310._4_4_,uVar11) | 0x2000);
        }
LAB_1098e6818:
        uVar3 = uVar13;
        FUN_1098e6d30((double)fVar16,uVar14,&uStack_310,1,&plStack_2f0);
        uVar13 = (undefined4)uVar14;
        uStack_308 = (undefined1 *)CONCAT44(uVar13,(undefined4)uStack_308);
        plStack_300 = plStack_2f0;
        uStack_2f8 = CONCAT44(uVar3,(int)uStack_2e8);
        FUN_1098ea190(plVar4,&plStack_300,&uStack_310,uVar10,7,uVar8);
      }
      else {
        if (uVar1 == 2) goto LAB_1098e6800;
        if (uVar1 != 4) {
          if (uVar12 < 2) {
            uVar12 = 1;
          }
          uVar14 = (ulong)uVar12;
          goto LAB_1098e6818;
        }
        if (uVar10 != 0) {
          auStack_2d0[0] = (undefined1)(0x202b2d00 >> (ulong)(uVar10 << 3));
        }
        uStack_2e8 = (ulong)(uVar10 != 0);
        FUN_1098e69b4(puVar6,uStack_308,&plStack_2f0);
        plStack_300 = plStack_2f0;
        uStack_2f8 = uStack_2e8;
        FUN_1098e8d3c(plVar4,&uStack_310,uStack_2e8,uStack_2e8,&plStack_300);
      }
      if (plStack_2f0 != (long *)auStack_2d0) {
        _free();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return plVar4;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    pcStack_78 = FUN_1098e662c;
    uStack_90 = puVar6;
    if ((((ulong)puVar6 & 0xff00000000) == 0x3000000000) && ((uVar11 & 0x38000) == 0x8000)) {
      uStack_90 = (undefined4 *)CONCAT35((int3)((ulong)puVar6 >> 0x28),0x2000000000);
      uStack_90 = (undefined4 *)CONCAT44(uStack_90._4_4_,uVar11);
    }
    uVar8 = 3;
    if (uVar10 != 0) {
      uVar8 = 4;
    }
    plStack_88 = (long *)ppuVar7;
    FUN_1098e7440(plVar4,&uStack_90,uVar8,uVar8,&stack0xffffffffffffff60);
    return plVar4;
  }
  ___stack_chk_fail();
LAB_1098e68dc:
  FUN_1099a5aa4(&UNK_10f3dbf55);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098e68ec);
  (*pcVar2)();
}



/* Entry: 1098e662c; end: 1098e6917;  */

long * FUN_1098e662c(undefined8 param_1,long *param_2,ulong param_3,ulong param_4,undefined8 param_5
                    )

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  ulong uStack_288;
  long *plStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [504];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar12 = (float)param_1;
  uVar8 = (uint)param_3;
  uVar7 = uVar8 >> 10 & 3;
  if ((int)fVar12 < 0) {
    uVar7 = 1;
  }
  uStack_2a0 = param_3;
  uStack_298 = param_4;
  if ((uint)ABS(fVar12) < 0x7f800000) {
    plVar5 = param_2;
    if (((uVar8 & 0x38) == 0x20) && (uVar7 != 0)) {
      lVar6 = param_2[1];
      uVar11 = lVar6 + 1;
      if ((ulong)param_2[2] < uVar11) {
        (*(code *)param_2[3])();
        lVar6 = param_2[1];
        uVar11 = lVar6 + 1;
      }
      param_2[1] = uVar11;
      *(char *)(*param_2 + lVar6) = (char)(0x202b2d00 >> (ulong)(uVar7 << 3));
      uVar7 = 0;
      if ((int)param_4 != 0) {
        uStack_298 = CONCAT44(uStack_298._4_4_,(int)param_4 + -1);
      }
    }
    uVar11 = param_4 >> 0x20;
    if ((long)param_4 < 0) {
      if ((param_3 & 7) != 0) {
        uVar11 = 6;
        goto LAB_1098e675c;
      }
      func_0x0001099a7914(param_1);
      plStack_280 = plVar5;
      FUN_1098e7558(param_2,&plStack_280,&uStack_2a0,uVar7,7,param_5);
    }
    else {
LAB_1098e675c:
      uStack_268 = 0x1098e8c88;
      uStack_270 = 500;
      uStack_278 = 0;
      uVar1 = uVar8 & 7;
      uVar9 = (uint)uVar11;
      plStack_280 = (long *)auStack_260;
      if (uVar1 == 1) {
        if (uVar9 == 0x7fffffff) goto LAB_1098e68dc;
        uVar11 = (ulong)(uVar9 + 1);
LAB_1098e6800:
        if (param_4 >> 0x20 != 0) {
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar8) | 0x2000;
        }
LAB_1098e6818:
        uVar4 = uVar10;
        FUN_1098e6d30((double)fVar12,uVar11,&uStack_2a0,1,&plStack_280);
        uVar10 = (undefined4)uVar11;
        uStack_298 = CONCAT44(uVar10,(undefined4)uStack_298);
        plStack_290 = plStack_280;
        uStack_288 = CONCAT44(uVar4,(int)uStack_278);
        FUN_1098ea190(param_2,&plStack_290,&uStack_2a0,uVar7,7,param_5);
      }
      else {
        if (uVar1 == 2) goto LAB_1098e6800;
        if (uVar1 != 4) {
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          uVar11 = (ulong)uVar9;
          goto LAB_1098e6818;
        }
        if (uVar7 != 0) {
          auStack_260[0] = (undefined1)(0x202b2d00 >> (ulong)(uVar7 << 3));
        }
        uStack_278 = (ulong)(uVar7 != 0);
        FUN_1098e69b4(param_3,uStack_298,&plStack_280);
        plStack_290 = plStack_280;
        uStack_288 = uStack_278;
        FUN_1098e8d3c(param_2,&uStack_2a0,uStack_278,uStack_278,&plStack_290);
      }
      if (plStack_280 != (long *)auStack_260) {
        _free();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_2;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    uVar2 = 3;
    if (uVar7 != 0) {
      uVar2 = 4;
    }
    FUN_1098e7440(param_2,&stack0xffffffffffffffe0,uVar2,uVar2,&stack0xffffffffffffffd0);
    return param_2;
  }
  ___stack_chk_fail();
LAB_1098e68dc:
  FUN_1099a5aa4(&UNK_10f3dbf55);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1098e68ec);
  (*pcVar3)();
}



/* Entry: 1098e6918; end: 1098e69b3;  */

void FUN_1098e6918(undefined8 param_1,int param_2,ulong param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  int aiStack_30 [2];
  char *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  if (((param_3 & 0xff00000000) == 0x3000000000) && (((uint)param_3 & 0x38000) == 0x8000)) {
    uStack_20 = CONCAT35((int3)(param_3 >> 0x28),0x2000000000);
    uStack_20 = CONCAT44(uStack_20._4_4_,(uint)param_3);
  }
  bVar3 = (param_3 & 0x1000) != 0;
  pcStack_28 = "nan";
  if (bVar3) {
    pcStack_28 = "NAN";
  }
  pcVar2 = "inf";
  if (bVar3) {
    pcVar2 = "INF";
  }
  if (param_2 == 0) {
    pcStack_28 = pcVar2;
  }
  uVar1 = 3;
  if (param_5 != 0) {
    uVar1 = 4;
  }
  aiStack_30[0] = param_5;
  uStack_18 = param_4;
  FUN_1098e7440(param_1,&uStack_20,uVar1,uVar1,aiStack_30);
  return;
}



/* Entry: 1098e69b4; end: 1098e6d2f;  */

long * FUN_1098e69b4(ulong param_1,ulong param_2,ulong param_3,long *param_4,long *param_5,
                    uint *param_6)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  bool bVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  uint *puVar18;
  undefined **ppuVar19;
  ulong uVar20;
  code *pcVar21;
  long *plVar22;
  int iVar23;
  undefined1 uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  char *pcVar29;
  uint uVar30;
  uint *puVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  uint uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 uStack_158;
  ulong uStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  uint uStack_114;
  ulong auStack_110 [2];
  int iStack_100;
  long lStack_e8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_68 [16];
  long lStack_58;
  
  uVar25 = (uint)(param_1 >> 0x20);
  uVar36 = (undefined4)param_1;
  uVar4 = ((uVar25 & 0x7ff00000) >> 0x14) - 0x3ff;
  bVar13 = (param_1 & 0x7ff0000000000000) != 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = param_1 & 0xfffffffffffff;
  if (bVar13) {
    uVar20 = param_1 & 0xfffffffffffff | 0x10000000000000;
  }
  uVar30 = 0xfffffc02;
  if (bVar13) {
    uVar30 = uVar4;
  }
  uVar35 = (uint)(param_3 >> 0x20);
  lVar27 = 1L << ((ulong)(uVar35 * -4 + 0x34) & 0x3f);
  uVar34 = uVar20;
  if ((uVar20 >> ((ulong)(uVar35 * -4 + 0x30) & 0x3f) & 8) != 0) {
    uVar34 = lVar27 + uVar20 & -lVar27;
  }
  uVar32 = uVar20;
  if ((int)uVar35 < 0xd) {
    uVar32 = uVar34;
  }
  uVar28 = 0xd;
  if ((int)uVar35 < 0xd) {
    uVar28 = uVar35;
  }
  uVar2 = 0xd;
  if ((param_3 & 0x8000000000000000) == 0) {
    uVar2 = uVar28;
    uVar20 = uVar32;
  }
  uVar34 = (ulong)uVar2;
  builtin_strncpy(acStack_68,"0000000000000000",0x10);
  puVar3 = &UNK_10f416238;
  if ((param_2 & 0x1000) != 0) {
    puVar3 = &DAT_10f3ddedc;
  }
  lVar27 = 0xd;
  do {
    acStack_68[lVar27] = puVar3[uVar20 & 0xf];
    lVar27 = lVar27 + -1;
    bVar13 = 0xf < uVar20;
    uVar20 = uVar20 >> 4;
  } while (bVar13);
  if ((int)uVar2 < 1) {
    bVar13 = false;
  }
  else {
    do {
      bVar13 = acStack_68[uVar34] != '0';
      if (bVar13) goto LAB_1098e6adc;
      iVar33 = (int)uVar34;
      uVar28 = iVar33 - 1;
      uVar34 = (ulong)uVar28;
    } while (uVar28 != 0 && 0 < iVar33);
    uVar34 = 0;
  }
LAB_1098e6adc:
  lVar27 = param_4[1];
  uVar20 = lVar27 + 1;
  if ((ulong)param_4[2] < uVar20) {
    (*(code *)param_4[3])(param_4);
    lVar27 = param_4[1];
    uVar20 = lVar27 + 1;
  }
  param_4[1] = uVar20;
  *(undefined1 *)(*param_4 + lVar27) = 0x30;
  uVar24 = 0x78;
  if ((param_2 & 0x1000) != 0) {
    uVar24 = 0x58;
  }
  lVar27 = param_4[1];
  uVar20 = lVar27 + 1;
  if ((ulong)param_4[2] < uVar20) {
    (*(code *)param_4[3])(param_4);
    lVar27 = param_4[1];
    uVar20 = lVar27 + 1;
  }
  param_4[1] = uVar20;
  *(undefined1 *)(*param_4 + lVar27) = uVar24;
  lVar27 = param_4[1];
  uVar20 = lVar27 + 1;
  if ((ulong)param_4[2] < uVar20) {
    (*(code *)param_4[3])(param_4);
    lVar27 = param_4[1];
    uVar20 = lVar27 + 1;
  }
  param_4[1] = uVar20;
  *(char *)(*param_4 + lVar27) = acStack_68[0];
  iVar33 = (int)uVar34;
  if ((iVar33 < (int)uVar35) || (bVar13 || (param_2 & 0x2000) != 0)) {
    lVar27 = param_4[1];
    uVar20 = lVar27 + 1;
    if ((ulong)param_4[2] < uVar20) {
      (*(code *)param_4[3])(param_4);
      lVar27 = param_4[1];
      uVar20 = lVar27 + 1;
    }
    param_4[1] = uVar20;
    *(undefined1 *)(*param_4 + lVar27) = 0x2e;
  }
  FUN_109446adc(param_4,(ulong)acStack_68 | 1,((ulong)acStack_68 | 1) + (long)iVar33);
  iVar23 = uVar35 - iVar33;
  if (iVar23 != 0 && iVar33 <= (int)uVar35) {
    do {
      lVar27 = param_4[1];
      uVar20 = lVar27 + 1;
      if ((ulong)param_4[2] < uVar20) {
        (*(code *)param_4[3])(param_4);
        lVar27 = param_4[1];
        uVar20 = lVar27 + 1;
      }
      param_4[1] = uVar20;
      *(undefined1 *)(*param_4 + lVar27) = 0x30;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  uVar24 = 0x70;
  if ((param_2 & 0x1000) != 0) {
    uVar24 = 0x50;
  }
  lVar27 = param_4[1];
  uVar20 = lVar27 + 1;
  if ((ulong)param_4[2] < uVar20) {
    (*(code *)param_4[3])(param_4);
    lVar27 = param_4[1];
    uVar20 = lVar27 + 1;
  }
  param_4[1] = uVar20;
  *(undefined1 *)(*param_4 + lVar27) = uVar24;
  lVar27 = param_4[1];
  uVar20 = lVar27 + 1;
  if ((int)uVar30 < 0) {
    if ((ulong)param_4[2] < uVar20) {
      (*(code *)param_4[3])(param_4);
      lVar27 = param_4[1];
      uVar20 = lVar27 + 1;
    }
    param_4[1] = uVar20;
    *(undefined1 *)(*param_4 + lVar27) = 0x2d;
    uVar4 = -uVar30;
  }
  else {
    if ((ulong)param_4[2] < uVar20) {
      (*(code *)param_4[3])(param_4);
      lVar27 = param_4[1];
      uVar20 = lVar27 + 1;
    }
    param_4[1] = uVar20;
    *(undefined1 *)(*param_4 + lVar27) = 0x2b;
  }
  puVar31 = (uint *)(ulong)uVar4;
  uVar20 = (ulong)(*(long *)(&UNK_10e00b240 + (ulong)((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 8) +
                  (long)puVar31) >> 0x20;
  FUN_1098e84f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_4;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1098e6d30;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *puVar31 & 7;
  iVar33 = (int)param_4;
  plVar22 = param_5;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((double)CONCAT44(uVar25,uVar36) == 0.0) {
    uVar20 = (ulong)uVar30;
    if ((iVar33 < 1) || (uVar4 != 2)) {
      lVar27 = param_5[1];
      uVar34 = lVar27 + 1;
      if ((ulong)param_5[2] < uVar34) {
        (*(code *)param_5[3])(param_5);
        lVar27 = param_5[1];
        uVar34 = lVar27 + 1;
      }
      plVar14 = (long *)0x0;
      param_5[1] = uVar34;
      *(undefined1 *)(*param_5 + lVar27) = 0x30;
    }
    else {
      uVar32 = (ulong)param_4 & 0xffffffff;
      uVar34 = param_5[2];
      if (uVar34 < ((ulong)param_4 & 0xffffffff)) {
        (*(code *)param_5[3])(param_5,uVar32);
        uVar34 = param_5[2];
      }
      uVar26 = uVar32;
      if (uVar34 <= uVar32) {
        uVar26 = uVar34;
      }
      param_5[1] = uVar26;
      _memset(*param_5,0x30,uVar32);
      plVar14 = (long *)(ulong)(uint)-iVar33;
    }
  }
  else {
    uVar34 = CONCAT44(uVar25,uVar36) & 0xfffffffffffff;
    uVar35 = uVar25 >> 0x14 & 0x7ff;
    uVar30 = uVar25 & 0x7ff00000;
    if (uVar30 == 0) {
      iVar23 = -0x427 - (int)LZCOUNT(uVar34);
      uVar32 = uVar34 << ((ulong)((int)LZCOUNT(uVar34) - 10) & 0x3f);
    }
    else {
      iVar23 = uVar35 - 0x433;
      uVar32 = uVar34 << 1 | 0x20000000000000;
    }
    iVar1 = iVar23 * 0x4d105 >> 0x14;
    iVar5 = iVar1 + -2;
    uVar28 = 2 - iVar1;
    uVar15 = (ulong)uVar28;
    uVar32 = uVar32 << ((ulong)(uint)(iVar23 + ((int)(uVar28 * 0x1a934f) >> 0x13)) & 0x3f);
    puVar18 = puVar31;
    FUN_1099a62e4();
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar32;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = puVar18;
    uVar26 = SUB168(auVar6 * auVar10,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar32;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar15;
    uVar15 = SUB168(auVar7 * auVar11,8);
    plVar14 = (long *)(uVar32 * (long)puVar18 + uVar15);
    if (CARRY8(uVar32 * (long)puVar18,uVar15)) {
      uVar26 = uVar26 + 1;
    }
    uVar32 = uVar26 * 10;
    iVar23 = 0x12;
    if (999999999999999999 < uVar26) {
      iVar23 = 0x13;
      uVar32 = uVar26;
    }
    if (uVar4 == 2) {
      uVar28 = iVar23 + iVar5;
      if (0 < (int)uVar28 && (int)(uVar28 ^ 0x7fffffff) < iVar33) goto LAB_1098e73f4;
      param_4 = (long *)(ulong)(uVar28 + iVar33);
    }
    uVar28 = (uint)param_4;
    if (iVar23 - uVar28 == 0 || iVar23 < (int)uVar28) {
      uStack_114 = (iVar23 + iVar5) - 1;
      if ((int)uVar20 == 0) {
        auStack_110[0] = uVar34;
        if (uVar30 != 0) {
          auStack_110[0] = uVar34 | 0x10000000000000;
        }
        iStack_100 = -0x432;
        if (uVar30 != 0) {
          iStack_100 = uVar35 - 0x433;
        }
        bVar12 = (uVar25 & 0x7fe00000) != 0 && uVar34 == 0;
      }
      else {
        fVar37 = (float)(double)CONCAT44(uVar25,uVar36);
        uVar25 = (uint)fVar37 & 0x7fffff;
        bVar13 = ((uint)fVar37 & 0x7f800000) != 0;
        auStack_110[0] = (ulong)uVar25;
        if (bVar13) {
          auStack_110[0] = (ulong)uVar25 | 0x800000;
        }
        iStack_100 = -0x95;
        if (bVar13) {
          iStack_100 = (((uint)fVar37 & 0x7f800000) >> 0x17) - 0x96;
        }
        bVar12 = ((uint)fVar37 & 0x7f000000) != 0 && uVar25 == 0;
      }
      if (uVar4 == 2) {
        bVar12 = bVar12 | 4;
      }
      if (0x2fe < uVar28) {
        uVar28 = 0x2ff;
      }
      auStack_110[1] = 0;
      param_6 = &uStack_114;
      plVar22 = param_5;
      FUN_1098e8e0c(auStack_110,bVar12,uVar28);
    }
    else if ((int)uVar28 < 1) {
      uStack_114 = iVar23 + iVar5;
      if ((int)uVar28 < 0) {
        param_5[1] = 0;
      }
      else {
        if (param_5[2] == 0) {
          (*(code *)param_5[3])(param_5,1);
          uVar34 = (ulong)(param_5[2] != 0);
          param_4 = plVar14;
        }
        else {
          uVar34 = 1;
        }
        param_5[1] = uVar34;
        if ((uVar32 | plVar14 != (long *)0x0) < 0x4563918244f40001) {
          uVar24 = 0x30;
        }
        else {
          uVar24 = 0x31;
        }
        *(undefined1 *)*param_5 = uVar24;
      }
    }
    else {
      uStack_114 = (iVar23 - uVar28) + iVar5;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar32;
      uVar20 = SUB168(auVar8 * ZEXT816(0x6df37f675ef6eae0),8) >> 0x20;
      uVar25 = uVar28;
      if (8 < uVar28) {
        uVar25 = 9;
      }
      pcVar29 = (char *)*param_5;
      if ((uVar25 & 1) == 0) {
        uVar34 = (uVar20 * 0x1ad7f29b >> 0x14) + 1;
        uVar26 = uVar34 >> 0x20;
        *(undefined2 *)pcVar29 = *(undefined2 *)(&UNK_10e00b0ea + uVar26 * 2);
        uVar30 = 2;
      }
      else {
        uVar34 = (uVar20 * 0x2af31dc5 >> 0x18) + 1;
        uVar26 = uVar34 >> 0x20;
        *pcVar29 = (char)(uVar34 >> 0x20) + '0';
        uVar30 = 1;
      }
      uVar32 = uVar32 + uVar20 * -10000000000;
      if (uVar30 < uVar28) {
        uVar20 = (ulong)uVar30;
        do {
          uVar34 = (uVar34 & 0xffffffff) * 100;
          uVar26 = uVar34 >> 0x20;
          *(undefined2 *)(pcVar29 + uVar20) = *(undefined2 *)(&UNK_10e00b0ea + uVar26 * 2);
          uVar20 = uVar20 + 2;
        } while (uVar20 < uVar25);
        uVar30 = uVar28 - 9;
        if (8 < uVar28 && uVar30 != 0) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar32;
          pcVar29 = (char *)(*param_5 + 9);
          uVar20 = SUB168(auVar9 * ZEXT816(0x199999999999999a),8) & 0xffffffff;
          if ((uVar30 & 1) == 0) {
            uVar20 = (uVar20 * 0x1ad7f29b >> 0x14) + 1;
            uVar34 = uVar20 >> 0x20;
            *(undefined2 *)pcVar29 = *(undefined2 *)(&UNK_10e00b0ea + uVar34 * 2);
            uVar25 = 2;
          }
          else {
            uVar20 = (uVar20 * 0x2af31dc5 >> 0x18) + 1;
            uVar34 = uVar20 >> 0x20;
            *pcVar29 = (char)(uVar20 >> 0x20) + '0';
            uVar25 = 1;
          }
          uVar35 = (int)uVar32 + SUB164(auVar9 * ZEXT816(0x199999999999999a),8) * -10;
          if (uVar25 < uVar30) {
            uVar32 = (ulong)uVar25;
            do {
              uVar20 = (uVar20 & 0xffffffff) * 100;
              uVar34 = uVar20 >> 0x20;
              *(undefined2 *)(pcVar29 + uVar32) = *(undefined2 *)(&UNK_10e00b0ea + uVar34 * 2);
              uVar32 = uVar32 + 2;
            } while (uVar32 < uVar30);
            if (0x11 < uVar28) {
              if ((5 < uVar35) ||
                 ((uVar35 == 5 && (((uVar34 & 1) != 0 || (plVar14 != (long *)0x0))))))
              goto LAB_1098e7274;
              param_4 = (long *)0x12;
              goto LAB_1098e7308;
            }
          }
          if ((uint)uVar20 < *(uint *)(&UNK_10e00b200 + (ulong)(0x11 - uVar28) * 4)) {
            uVar25 = (uint)uVar34 & 1;
            if (plVar14 != (long *)0x0 || uVar35 != 0) {
              uVar25 = 1;
            }
            if ((uVar25 & (uint)uVar20 >> 0x1f) == 0) goto LAB_1098e7308;
          }
LAB_1098e7274:
          lVar27 = *param_5 + ((ulong)param_4 & 0xffffffff);
          *(char *)(lVar27 + -1) = *(char *)(lVar27 + -1) + '\x01';
LAB_1098e728c:
          uVar20 = (ulong)param_4 & 0xffffffff;
          lVar27 = uVar20 - 2;
          do {
            uVar25 = (int)lVar27 + 1;
            if (*(char *)(*param_5 + (ulong)uVar25) < ':') break;
            *(undefined1 *)(*param_5 + (ulong)uVar25) = 0x30;
            *(char *)(*param_5 + lVar27) = *(char *)(*param_5 + lVar27) + '\x01';
            uVar34 = lVar27 + 2;
            lVar27 = lVar27 + -1;
          } while (2 < uVar34);
          goto LAB_1098e72cc;
        }
        if (uVar30 != 0) goto LAB_1098e70b0;
        if ((5000000000 < uVar32) ||
           ((uVar32 == 5000000000 && (((uVar26 & 1) != 0 || (plVar14 != (long *)0x0))))))
        goto LAB_1098e7274;
        param_4 = (long *)0x9;
      }
      else {
LAB_1098e70b0:
        if ((*(uint *)(&UNK_10e00b200 + (8 - (long)(int)uVar25) * 4) <= (uint)uVar34) ||
           ((((uint)uVar26 | (uint)(uVar32 != 0 || plVar14 != (long *)0x0)) & (uint)uVar34 >> 0x1f)
            != 0)) {
          lVar27 = *param_5 + ((ulong)param_4 & 0xffffffff);
          *(char *)(lVar27 + -1) = *(char *)(lVar27 + -1) + '\x01';
          if (uVar28 != 1) goto LAB_1098e728c;
          uVar20 = 1;
LAB_1098e72cc:
          if ('9' < *(char *)*param_5) {
            *(char *)*param_5 = '1';
            if (uVar4 == 2) {
              param_4 = (long *)(ulong)(uVar28 + 1);
              *(undefined1 *)(*param_5 + uVar20) = 0x30;
            }
            else {
              uStack_114 = uStack_114 + 1;
            }
          }
        }
      }
LAB_1098e7308:
      uVar20 = (ulong)param_4 & 0xffffffff;
      uVar34 = param_5[2];
      if (uVar34 < ((ulong)param_4 & 0xffffffff)) {
        (*(code *)param_5[3])(param_5,uVar20);
        uVar34 = param_5[2];
      }
      uVar32 = uVar20;
      if (uVar34 <= uVar20) {
        uVar32 = uVar34;
      }
      param_5[1] = uVar32;
    }
    if ((uVar4 != 2) && ((*(byte *)((long)puVar31 + 1) >> 5 & 1) == 0)) {
      uVar34 = param_5[1];
      if (uVar34 != 0) {
        do {
          uVar25 = uStack_114 + 1;
          if (*(char *)(*param_5 + -1 + uVar34) != '0') {
            uVar32 = param_5[2];
            if (uVar34 <= uVar32) goto LAB_1098e7384;
            (*(code *)param_5[3])(param_5,uVar34);
            goto LAB_1098e7380;
          }
          uVar34 = uVar34 - 1;
          uStack_114 = uVar25;
        } while (uVar34 != 0);
      }
      uVar34 = 0;
LAB_1098e7380:
      uVar32 = param_5[2];
LAB_1098e7384:
      if (uVar32 <= uVar34) {
        uVar34 = uVar32;
      }
      param_5[1] = uVar34;
    }
    plVar14 = (long *)(ulong)uStack_114;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return plVar14;
  }
  ___stack_chk_fail(plVar14);
LAB_1098e73f4:
  plVar16 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_1098e9684();
  ppuVar19 = &PTR_DAT_110b1c7b8;
  pcVar21 = FUN_1098e96a4;
  plVar14 = plVar16;
  ___cxa_throw();
  ___cxa_free_exception(plVar16);
  plVar17 = plVar14;
  __Unwind_Resume();
  pcStack_128 = FUN_1098e7440;
  uVar34 = 0;
  if (plVar22 <= (long *)(ulong)*(uint *)(ppuVar19 + 1)) {
    uVar34 = (long)(ulong)*(uint *)(ppuVar19 + 1) - (long)plVar22;
  }
  uVar32 = uVar34 >> ((long)(char)(&UNK_10e00b1f4)[(ulong)(*(uint *)ppuVar19 >> 3) & 7] & 0x3fU);
  uStack_158 = (ulong)uVar4;
  uStack_150 = uVar20;
  plStack_148 = param_4;
  plStack_140 = plVar14;
  plStack_138 = plVar16;
  ppuStack_130 = &puStack_80;
  if ((code *)plVar17[2] < pcVar21 + uVar34 * ((ulong)(*(uint *)ppuVar19 >> 0xf) & 7) + plVar17[1])
  {
    (*(code *)plVar17[3])(plVar17);
  }
  if (uVar32 != 0) {
    FUN_1094471fc(plVar17,uVar32,ppuVar19);
  }
  uVar4 = *param_6;
  if (uVar4 != 0) {
    lVar27 = plVar17[1];
    uVar20 = lVar27 + 1;
    if ((ulong)plVar17[2] < uVar20) {
      (*(code *)plVar17[3])(plVar17);
      lVar27 = plVar17[1];
      uVar20 = lVar27 + 1;
    }
    plVar17[1] = uVar20;
    *(char *)(*plVar17 + lVar27) = (char)(0x202b2d00 >> (ulong)((uVar4 & 3) << 3));
  }
  FUN_109446adc(plVar17,*(long *)(param_6 + 2),*(long *)(param_6 + 2) + 3);
  if (uVar34 == uVar32) {
    return plVar17;
  }
  lVar27 = uVar34 - uVar32;
  uVar20 = (ulong)(*(uint *)ppuVar19 >> 0xf) & 7;
  if ((int)uVar20 == 1) {
    uStack_158 = CONCAT17(*(undefined1 *)((long)ppuVar19 + 4),(undefined7)uStack_158);
    func_0x000109447280(plVar17,lVar27,(long)&uStack_158 + 7);
  }
  else if (lVar27 != 0) {
    do {
      FUN_109446adc(plVar17,(long)ppuVar19 + 4,(long)ppuVar19 + 4 + uVar20);
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  return plVar17;
}



/* Entry: 1098e6d30; end: 1098e743f;  */

long * FUN_1098e6d30(double param_1,ulong param_2,uint *param_3,ulong param_4,long *param_5,
                    uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  bool bVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  undefined **ppuVar18;
  code *pcVar19;
  long *plVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  undefined1 uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  char *pcVar28;
  uint uVar29;
  ulong uVar30;
  int iVar31;
  ulong unaff_x22;
  uint uVar32;
  float fVar33;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  uint uStack_a4;
  ulong auStack_a0 [2];
  int iStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_3 & 7;
  iVar31 = (int)param_2;
  plVar20 = param_5;
  if (param_1 == 0.0) {
    param_4 = unaff_x22;
    if ((iVar31 < 1) || (uVar1 != 2)) {
      lVar23 = param_5[1];
      uVar22 = lVar23 + 1;
      if ((ulong)param_5[2] < uVar22) {
        (*(code *)param_5[3])(param_5);
        lVar23 = param_5[1];
        uVar22 = lVar23 + 1;
      }
      plVar13 = (long *)0x0;
      param_5[1] = uVar22;
      *(undefined1 *)(*param_5 + lVar23) = 0x30;
    }
    else {
      uVar30 = param_2 & 0xffffffff;
      uVar22 = param_5[2];
      if (uVar22 < (param_2 & 0xffffffff)) {
        (*(code *)param_5[3])(param_5,uVar30);
        uVar22 = param_5[2];
      }
      uVar14 = uVar30;
      if (uVar22 <= uVar30) {
        uVar14 = uVar22;
      }
      param_5[1] = uVar14;
      _memset(*param_5,0x30,uVar30);
      plVar13 = (long *)(ulong)(uint)-iVar31;
    }
  }
  else {
    uVar22 = (ulong)param_1 & 0xfffffffffffff;
    uVar32 = (uint)((ulong)param_1 >> 0x34) & 0x7ff;
    if (((ulong)param_1 & 0x7ff0000000000000) == 0) {
      iVar21 = -0x427 - (int)LZCOUNT(uVar22);
      uVar30 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 10) & 0x3f);
    }
    else {
      iVar21 = uVar32 - 0x433;
      uVar30 = uVar22 << 1 | 0x20000000000000;
    }
    iVar2 = iVar21 * 0x4d105 >> 0x14;
    iVar4 = iVar2 + -2;
    uVar27 = 2 - iVar2;
    uVar14 = (ulong)uVar27;
    uVar30 = uVar30 << ((ulong)(uint)(iVar21 + ((int)(uVar27 * 0x1a934f) >> 0x13)) & 0x3f);
    puVar17 = param_3;
    FUN_1099a62e4();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar30;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = puVar17;
    uVar25 = SUB168(auVar5 * auVar9,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar30;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar14;
    uVar26 = SUB168(auVar6 * auVar10,8);
    uVar14 = uVar30 * (long)puVar17 + uVar26;
    if (CARRY8(uVar30 * (long)puVar17,uVar26)) {
      uVar25 = uVar25 + 1;
    }
    uVar30 = uVar25 * 10;
    iVar21 = 0x12;
    if (999999999999999999 < uVar25) {
      iVar21 = 0x13;
      uVar30 = uVar25;
    }
    if (uVar1 == 2) {
      uVar27 = iVar21 + iVar4;
      if (0 < (int)uVar27 && (int)(uVar27 ^ 0x7fffffff) < iVar31) goto LAB_1098e73f4;
      param_2 = (ulong)(uVar27 + iVar31);
    }
    uVar27 = (uint)param_2;
    if (iVar21 - uVar27 == 0 || iVar21 < (int)uVar27) {
      uStack_a4 = (iVar21 + iVar4) - 1;
      if ((int)param_4 == 0) {
        bVar12 = ((ulong)param_1 & 0x7ff0000000000000) != 0;
        auStack_a0[0] = uVar22;
        if (bVar12) {
          auStack_a0[0] = uVar22 | 0x10000000000000;
        }
        iStack_90 = -0x432;
        if (bVar12) {
          iStack_90 = uVar32 - 0x433;
        }
        bVar11 = ((ulong)param_1 & 0x7fe0000000000000) != 0 && uVar22 == 0;
      }
      else {
        fVar33 = (float)param_1;
        uVar32 = (uint)fVar33 & 0x7fffff;
        bVar12 = ((uint)fVar33 & 0x7f800000) != 0;
        auStack_a0[0] = (ulong)uVar32;
        if (bVar12) {
          auStack_a0[0] = (ulong)uVar32 | 0x800000;
        }
        iStack_90 = -0x95;
        if (bVar12) {
          iStack_90 = (((uint)fVar33 & 0x7f800000) >> 0x17) - 0x96;
        }
        bVar11 = ((uint)fVar33 & 0x7f000000) != 0 && uVar32 == 0;
      }
      if (uVar1 == 2) {
        bVar11 = bVar11 | 4;
      }
      if (0x2fe < uVar27) {
        uVar27 = 0x2ff;
      }
      auStack_a0[1] = 0;
      param_6 = &uStack_a4;
      plVar20 = param_5;
      FUN_1098e8e0c(auStack_a0,bVar11,uVar27);
    }
    else if ((int)uVar27 < 1) {
      uStack_a4 = iVar21 + iVar4;
      if ((int)uVar27 < 0) {
        param_5[1] = 0;
      }
      else {
        if (param_5[2] == 0) {
          (*(code *)param_5[3])(param_5,1);
          uVar22 = (ulong)(param_5[2] != 0);
          param_2 = uVar14;
        }
        else {
          uVar22 = 1;
        }
        param_5[1] = uVar22;
        if ((uVar30 | uVar14 != 0) < 0x4563918244f40001) {
          uVar24 = 0x30;
        }
        else {
          uVar24 = 0x31;
        }
        *(undefined1 *)*param_5 = uVar24;
      }
    }
    else {
      uStack_a4 = (iVar21 - uVar27) + iVar4;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar30;
      uVar22 = SUB168(auVar7 * ZEXT816(0x6df37f675ef6eae0),8) >> 0x20;
      uVar32 = uVar27;
      if (8 < uVar27) {
        uVar32 = 9;
      }
      pcVar28 = (char *)*param_5;
      if ((uVar32 & 1) == 0) {
        uVar25 = (uVar22 * 0x1ad7f29b >> 0x14) + 1;
        uVar26 = uVar25 >> 0x20;
        *(undefined2 *)pcVar28 = *(undefined2 *)(&UNK_10e00b0ea + uVar26 * 2);
        uVar29 = 2;
      }
      else {
        uVar25 = (uVar22 * 0x2af31dc5 >> 0x18) + 1;
        uVar26 = uVar25 >> 0x20;
        *pcVar28 = (char)(uVar25 >> 0x20) + '0';
        uVar29 = 1;
      }
      uVar30 = uVar30 + uVar22 * -10000000000;
      if (uVar29 < uVar27) {
        uVar22 = (ulong)uVar29;
        do {
          uVar25 = (uVar25 & 0xffffffff) * 100;
          uVar26 = uVar25 >> 0x20;
          *(undefined2 *)(pcVar28 + uVar22) = *(undefined2 *)(&UNK_10e00b0ea + uVar26 * 2);
          uVar22 = uVar22 + 2;
        } while (uVar22 < uVar32);
        uVar29 = uVar27 - 9;
        if (8 < uVar27 && uVar29 != 0) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar30;
          pcVar28 = (char *)(*param_5 + 9);
          uVar22 = SUB168(auVar8 * ZEXT816(0x199999999999999a),8) & 0xffffffff;
          if ((uVar29 & 1) == 0) {
            uVar22 = (uVar22 * 0x1ad7f29b >> 0x14) + 1;
            uVar25 = uVar22 >> 0x20;
            *(undefined2 *)pcVar28 = *(undefined2 *)(&UNK_10e00b0ea + uVar25 * 2);
            uVar32 = 2;
          }
          else {
            uVar22 = (uVar22 * 0x2af31dc5 >> 0x18) + 1;
            uVar25 = uVar22 >> 0x20;
            *pcVar28 = (char)(uVar22 >> 0x20) + '0';
            uVar32 = 1;
          }
          uVar3 = (int)uVar30 + SUB164(auVar8 * ZEXT816(0x199999999999999a),8) * -10;
          if (uVar32 < uVar29) {
            uVar30 = (ulong)uVar32;
            do {
              uVar22 = (uVar22 & 0xffffffff) * 100;
              uVar25 = uVar22 >> 0x20;
              *(undefined2 *)(pcVar28 + uVar30) = *(undefined2 *)(&UNK_10e00b0ea + uVar25 * 2);
              uVar30 = uVar30 + 2;
            } while (uVar30 < uVar29);
            if (0x11 < uVar27) {
              if ((5 < uVar3) || ((uVar3 == 5 && (((uVar25 & 1) != 0 || (uVar14 != 0))))))
              goto LAB_1098e7274;
              param_2 = 0x12;
              goto LAB_1098e7308;
            }
          }
          if ((uint)uVar22 < *(uint *)(&UNK_10e00b200 + (ulong)(0x11 - uVar27) * 4)) {
            uVar32 = (uint)uVar25 & 1;
            if (uVar14 != 0 || uVar3 != 0) {
              uVar32 = 1;
            }
            if ((uVar32 & (uint)uVar22 >> 0x1f) == 0) goto LAB_1098e7308;
          }
LAB_1098e7274:
          lVar23 = *param_5 + (param_2 & 0xffffffff);
          *(char *)(lVar23 + -1) = *(char *)(lVar23 + -1) + '\x01';
LAB_1098e728c:
          uVar22 = param_2 & 0xffffffff;
          lVar23 = uVar22 - 2;
          do {
            uVar32 = (int)lVar23 + 1;
            if (*(char *)(*param_5 + (ulong)uVar32) < ':') break;
            *(undefined1 *)(*param_5 + (ulong)uVar32) = 0x30;
            *(char *)(*param_5 + lVar23) = *(char *)(*param_5 + lVar23) + '\x01';
            uVar30 = lVar23 + 2;
            lVar23 = lVar23 + -1;
          } while (2 < uVar30);
          goto LAB_1098e72cc;
        }
        if (uVar29 != 0) goto LAB_1098e70b0;
        if ((5000000000 < uVar30) ||
           ((uVar30 == 5000000000 && (((uVar26 & 1) != 0 || (uVar14 != 0)))))) goto LAB_1098e7274;
        param_2 = 9;
      }
      else {
LAB_1098e70b0:
        if ((*(uint *)(&UNK_10e00b200 + (8 - (long)(int)uVar32) * 4) <= (uint)uVar25) ||
           ((((uint)uVar26 | (uint)(uVar30 != 0 || uVar14 != 0)) & (uint)uVar25 >> 0x1f) != 0)) {
          lVar23 = *param_5 + (param_2 & 0xffffffff);
          *(char *)(lVar23 + -1) = *(char *)(lVar23 + -1) + '\x01';
          if (uVar27 != 1) goto LAB_1098e728c;
          uVar22 = 1;
LAB_1098e72cc:
          if ('9' < *(char *)*param_5) {
            *(char *)*param_5 = '1';
            if (uVar1 == 2) {
              param_2 = (ulong)(uVar27 + 1);
              *(undefined1 *)(*param_5 + uVar22) = 0x30;
            }
            else {
              uStack_a4 = uStack_a4 + 1;
            }
          }
        }
      }
LAB_1098e7308:
      param_4 = param_2 & 0xffffffff;
      uVar22 = param_5[2];
      if (uVar22 < (param_2 & 0xffffffff)) {
        (*(code *)param_5[3])(param_5,param_4);
        uVar22 = param_5[2];
      }
      uVar30 = param_4;
      if (uVar22 <= param_4) {
        uVar30 = uVar22;
      }
      param_5[1] = uVar30;
    }
    if ((uVar1 != 2) && ((*(byte *)((long)param_3 + 1) >> 5 & 1) == 0)) {
      uVar22 = param_5[1];
      if (uVar22 != 0) {
        do {
          uVar32 = uStack_a4 + 1;
          if (*(char *)(*param_5 + -1 + uVar22) != '0') {
            uVar30 = param_5[2];
            if (uVar22 <= uVar30) goto LAB_1098e7384;
            (*(code *)param_5[3])(param_5,uVar22);
            goto LAB_1098e7380;
          }
          uVar22 = uVar22 - 1;
          uStack_a4 = uVar32;
        } while (uVar22 != 0);
      }
      uVar22 = 0;
LAB_1098e7380:
      uVar30 = param_5[2];
LAB_1098e7384:
      if (uVar30 <= uVar22) {
        uVar22 = uVar30;
      }
      param_5[1] = uVar22;
    }
    plVar13 = (long *)(ulong)uStack_a4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar13;
  }
  ___stack_chk_fail(plVar13);
LAB_1098e73f4:
  plVar15 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_1098e9684();
  ppuVar18 = &PTR_DAT_110b1c7b8;
  pcVar19 = FUN_1098e96a4;
  plVar13 = plVar15;
  ___cxa_throw();
  ___cxa_free_exception(plVar15);
  plVar16 = plVar13;
  __Unwind_Resume();
  pcStack_b8 = FUN_1098e7440;
  uVar22 = 0;
  if (plVar20 <= (long *)(ulong)*(uint *)(ppuVar18 + 1)) {
    uVar22 = (long)(ulong)*(uint *)(ppuVar18 + 1) - (long)plVar20;
  }
  uVar30 = uVar22 >> ((long)(char)(&UNK_10e00b1f4)[(ulong)(*(uint *)ppuVar18 >> 3) & 7] & 0x3fU);
  uStack_e8 = (ulong)uVar1;
  uStack_e0 = param_4;
  uStack_d8 = param_2;
  plStack_d0 = plVar13;
  plStack_c8 = plVar15;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((code *)plVar16[2] < pcVar19 + uVar22 * ((ulong)(*(uint *)ppuVar18 >> 0xf) & 7) + plVar16[1])
  {
    (*(code *)plVar16[3])(plVar16);
  }
  if (uVar30 != 0) {
    FUN_1094471fc(plVar16,uVar30,ppuVar18);
  }
  uVar1 = *param_6;
  if (uVar1 != 0) {
    lVar23 = plVar16[1];
    uVar14 = lVar23 + 1;
    if ((ulong)plVar16[2] < uVar14) {
      (*(code *)plVar16[3])(plVar16);
      lVar23 = plVar16[1];
      uVar14 = lVar23 + 1;
    }
    plVar16[1] = uVar14;
    *(char *)(*plVar16 + lVar23) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_109446adc(plVar16,*(long *)(param_6 + 2),*(long *)(param_6 + 2) + 3);
  if (uVar22 != uVar30) {
    lVar23 = uVar22 - uVar30;
    uVar22 = (ulong)(*(uint *)ppuVar18 >> 0xf) & 7;
    if ((int)uVar22 == 1) {
      uStack_e8 = CONCAT17(*(undefined1 *)((long)ppuVar18 + 4),(undefined7)uStack_e8);
      func_0x000109447280(plVar16,lVar23,(long)&uStack_e8 + 7);
    }
    else if (lVar23 != 0) {
      do {
        FUN_109446adc(plVar16,(long)ppuVar18 + 4,(long)ppuVar18 + 4 + uVar22);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    return plVar16;
  }
  return plVar16;
}



/* Entry: 1098e7440; end: 1098e7557;  */

long * FUN_1098e7440(long *param_1,uint *param_2,long param_3,ulong param_4,uint *param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  if (param_4 <= param_2[2]) {
    uVar4 = param_2[2] - param_4;
  }
  uVar5 = uVar4 >> ((long)(char)(&UNK_10e00b1f4)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar4 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar5 != 0) {
    FUN_1094471fc(param_1,uVar5,param_2);
  }
  uVar1 = *param_5;
  if (uVar1 != 0) {
    lVar3 = param_1[1];
    uVar2 = lVar3 + 1;
    if ((ulong)param_1[2] < uVar2) {
      (*(code *)param_1[3])(param_1);
      lVar3 = param_1[1];
      uVar2 = lVar3 + 1;
    }
    param_1[1] = uVar2;
    *(char *)(*param_1 + lVar3) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_109446adc(param_1,*(long *)(param_5 + 2),*(long *)(param_5 + 2) + 3);
  if (uVar4 == uVar5) {
    return param_1;
  }
  lVar3 = uVar4 - uVar5;
  uVar4 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar4 == 1) {
    func_0x000109447280(param_1,lVar3,&stack0xffffffffffffffcf);
  }
  else if (lVar3 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar4);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 1098e7558; end: 1098e793f;  */

undefined1 *
FUN_1098e7558(undefined1 *param_1,uint *param_2,uint *param_3,int param_4,uint param_5,ulong param_6
             )

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  uint *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  undefined1 *puStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  char cStack_91;
  undefined8 uStack_90;
  char cStack_79;
  uint uStack_78;
  uint uStack_74;
  undefined1 auStack_6e [2];
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  
  puVar10 = &uStack_f0;
  uVar5 = *param_2;
  uVar17 = *(long *)(&UNK_10e00b240 + (ulong)((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 8) + (ulong)uVar5
           >> 0x20;
  uVar16 = (uint)(*(long *)(&UNK_10e00b240 + (ulong)((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 8) +
                  (ulong)uVar5 >> 0x20);
  auStack_6e[1] = 0x30;
  uVar3 = uVar16;
  if (param_4 != 0) {
    uVar3 = uVar16 + 1;
  }
  uVar15 = (ulong)uVar3;
  uVar3 = *param_3;
  uStack_6c = uVar16;
  uStack_68 = uVar5;
  iStack_64 = param_4;
  if ((uVar3 >> 0xe & 1) == 0) {
    uVar8 = 0x2e;
  }
  else {
    uVar8 = param_6;
    FUN_1099a8090();
    uVar3 = *param_3;
  }
  auStack_6e[0] = (undefined1)uVar8;
  uVar6 = param_2[1];
  uVar1 = uVar6 + uVar16;
  uVar7 = param_3[3];
  uVar12 = uVar3 & 7;
  if (uVar12 == 1) goto LAB_1098e765c;
  if (uVar12 != 2) {
    if ((int)uVar1 < -3) {
LAB_1098e765c:
      if ((uVar3 >> 0xd & 1) == 0) {
        if (uVar17 == 1) {
          uVar8 = 0;
          uVar12 = 0;
          auStack_6e[0] = 0;
        }
        else {
          uVar12 = 0;
        }
      }
      else {
        uVar12 = uVar7 - uVar16 & ((int)(uVar7 - uVar16) >> 0x1f ^ 0xffffffffU);
        uVar15 = uVar15 + uVar12;
      }
      iVar11 = 1 - uVar1;
      if (1 - uVar1 == 0 || 1 < (int)uVar1) {
        iVar11 = uVar1 - 1;
      }
      lVar14 = 3;
      if (999 < iVar11) {
        lVar14 = 4;
      }
      if (iVar11 < 100) {
        lVar14 = 2;
      }
      lVar2 = 2;
      if ((uVar8 & 0xff) != 0) {
        lVar2 = 3;
      }
      lVar2 = uVar15 + lVar14 + lVar2;
      uVar13 = 0x65;
      if ((uVar3 & 0x1000) != 0) {
        uVar13 = 0x45;
      }
      uStack_f0 = (int *)CONCAT44(uVar5,param_4);
      uStack_e8._0_5_ = CONCAT14((char)uVar8,uVar16);
      uStack_e0._0_6_ = CONCAT15(uVar13,CONCAT14(0x30,uVar12));
      puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,uVar1 - 1);
      if ((int)param_3[2] < 1) {
        if (*(ulong *)(param_1 + 0x10) < (ulong)(*(long *)(param_1 + 8) + lVar2)) {
          (**(code **)(param_1 + 0x18))(param_1);
        }
        func_0x0001098e7940(&uStack_f0,param_1);
      }
      else {
        FUN_1098e7bcc(param_1,param_3,lVar2,lVar2,&uStack_f0);
        puVar10 = (undefined8 *)param_1;
      }
      return (undefined1 *)puVar10;
    }
    uVar4 = uVar7;
    if ((int)uVar7 < 1) {
      uVar4 = param_5;
    }
    if ((int)uVar4 < (int)uVar1) goto LAB_1098e765c;
  }
  uStack_74 = uVar1;
  if (-1 < (int)uVar6) {
    lVar2 = uVar15 + uVar6;
    uStack_78 = uVar7 - uVar1;
    lVar14 = lVar2;
    if ((uVar3 >> 0xd & 1) != 0) {
      lVar14 = lVar2 + 1;
      if ((uVar12 == 2) || (0 < (int)uStack_78)) {
        lVar14 = lVar14 + (ulong)uStack_78;
        if ((int)uStack_78 < 1) {
          lVar14 = lVar2 + 1;
        }
      }
      else {
        uStack_78 = 0;
      }
    }
    FUN_1098e7eac(&uStack_a8,param_6,uVar3 >> 0xe & 1);
    puVar9 = &uStack_a8;
    func_0x0001098e7b24(puVar9,uVar1);
    uStack_f0 = &iStack_64;
    uStack_e8 = &uStack_68;
    lVar14 = lVar14 + ((ulong)puVar9 & 0xffffffff);
    uStack_e0 = &uStack_6c;
    puStack_c0 = (uint *)auStack_6e;
    puStack_b8 = &uStack_78;
    puStack_b0 = auStack_6e + 1;
    puStack_d8 = param_2;
    puStack_d0 = &uStack_a8;
    puStack_c8 = param_3;
    FUN_1098e804c(param_1,param_3,lVar14,lVar14,&uStack_f0);
LAB_1098e7840:
    if (cStack_79 < '\0') {
      __ZdlPv(uStack_90);
    }
    if (-1 < cStack_91) {
      return param_1;
    }
    __ZdlPv(CONCAT44(uStack_a4,uStack_a8));
    return param_1;
  }
  if (0 < (int)uVar1) {
    uVar5 = uVar7 - uVar16 & (int)(uVar3 << 0x12) >> 0x1f;
    uStack_78 = uVar5;
    FUN_1098e7eac(&uStack_a8,param_6,uVar3 >> 0xe & 1);
    puVar9 = &uStack_a8;
    func_0x0001098e7b24(puVar9,uVar1);
    uStack_f0 = &iStack_64;
    uStack_e8 = &uStack_68;
    uStack_e0 = &uStack_6c;
    puStack_d8 = &uStack_74;
    lVar14 = uVar15 + ((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) + 1) +
             ((ulong)puVar9 & 0xffffffff);
    puStack_d0 = (uint *)auStack_6e;
    puStack_c0 = &uStack_78;
    puStack_b8 = (uint *)(auStack_6e + 1);
    puStack_c8 = &uStack_a8;
    FUN_1098e86a0(param_1,param_3,lVar14,lVar14,&uStack_f0);
    goto LAB_1098e7840;
  }
  uStack_a8 = -uVar1;
  if (uVar17 == 0) {
    if ((-1 < (int)uVar7) && ((int)uVar7 < (int)uStack_a8)) {
      uStack_a8 = uVar7;
    }
    if (uStack_a8 == 0) {
      uStack_78 = CONCAT31(uStack_78._1_3_,(char)((uVar3 & 0x2000) >> 0xd));
      iVar11 = 1;
      if ((uVar3 & 0x2000) != 0) {
        iVar11 = 2;
      }
      goto LAB_1098e7898;
    }
  }
  uStack_78 = CONCAT31(uStack_78._1_3_,1);
  iVar11 = 2;
LAB_1098e7898:
  uStack_f0 = &iStack_64;
  uStack_e8 = &uStack_78;
  uStack_e0 = (uint *)auStack_6e;
  puStack_d8 = &uStack_a8;
  puStack_d0 = (uint *)(auStack_6e + 1);
  puStack_c8 = &uStack_68;
  puStack_c0 = &uStack_6c;
  FUN_1098e8aa4(param_1,param_3,uVar15 + (iVar11 + uStack_a8),uVar15 + (iVar11 + uStack_a8),
                &uStack_f0);
  return param_1;
}



/* Entry: 1098e7940; end: 1098e7b8b;  */

ulong * FUN_1098e7940(uint *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puStack_90;
  undefined4 uStack_88;
  long lStack_80;
  ulong uStack_78;
  byte *pbStack_70;
  uint *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  byte abStack_43 [11];
  long lStack_38;
  byte *pbVar7;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  if (uVar1 != 0) {
    lVar8 = param_2[1];
    uVar9 = lVar8 + 1;
    if ((ulong)param_2[2] < uVar9) {
      (*(code *)param_2[3])(param_2);
      lVar8 = param_2[1];
      uVar9 = lVar8 + 1;
    }
    param_2[1] = uVar9;
    *(char *)(*param_2 + lVar8) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  uVar9 = (ulong)param_1[1];
  uVar1 = param_1[2];
  lVar8 = (long)(int)uVar1;
  uVar3 = param_1[3];
  if ((byte)uVar3 == 0) {
    FUN_1098e3124(abStack_43,uVar9,lVar8);
    pbVar7 = abStack_43 + lVar8;
  }
  else {
    pbVar7 = abStack_43 + lVar8 + 1;
    pbVar11 = pbVar7;
    if (2 < (int)uVar1) {
      uVar13 = (uVar1 - 1 >> 1) + 1;
      uVar12 = uVar9;
      do {
        uVar9 = uVar12 / 100;
        pbVar11 = pbVar11 + -2;
        *(undefined2 *)pbVar11 =
             *(undefined2 *)
              (&UNK_10e00b0ea + (ulong)(uint)((int)uVar12 + (int)(uVar12 / 100) * -100) * 2);
        uVar13 = uVar13 - 1;
        uVar12 = uVar9;
      } while (1 < uVar13);
    }
    uVar12 = uVar9;
    if ((uVar1 - 1 & 1) != 0) {
      uVar12 = uVar9 / 10;
      pbVar11 = pbVar11 + -1;
      *pbVar11 = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
    }
    pbVar11[-1] = (byte)uVar3;
    FUN_1098e3124(pbVar11 + -2,uVar12,1);
  }
  pbVar11 = abStack_43;
  FUN_1098c2be4(pbVar11,pbVar7,param_2);
  if (0 < (int)param_1[4]) {
    FUN_1098e7c90(pbVar11,param_1[4],param_1 + 5);
  }
  bVar2 = *(byte *)((long)param_1 + 0x15);
  lVar10 = *(long *)(pbVar11 + 8);
  uVar9 = lVar10 + 1;
  if (*(ulong *)(pbVar11 + 0x10) < uVar9) {
    (**(code **)(pbVar11 + 0x18))(pbVar11);
    lVar10 = *(long *)(pbVar11 + 8);
    uVar9 = lVar10 + 1;
  }
  *(ulong *)(pbVar11 + 8) = uVar9;
  *(byte *)(*(long *)pbVar11 + lVar10) = bVar2;
  puVar4 = (ulong *)(ulong)param_1[6];
  pbVar7 = pbVar11;
  FUN_1098e7d04();
  iVar6 = (int)pbVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uStack_58 = 0x1098e7b24;
    puStack_90 = puVar4;
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      puStack_90 = (ulong *)*puVar4;
    }
    uStack_88 = 0;
    puVar14 = (ulong *)0xffffffff;
    lStack_80 = lVar8;
    uStack_78 = (ulong)bVar2;
    pbStack_70 = pbVar11;
    puStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    do {
      puVar5 = puVar4;
      FUN_1098e7fc0(puVar4,&puStack_90);
      puVar14 = (ulong *)(ulong)((int)puVar14 + 1);
    } while ((int)puVar5 < iVar6);
    return puVar14;
  }
  return puVar4;
}



/* Entry: 1098e7b8c; end: 1098e7bcb;  */

undefined8 * FUN_1098e7b8c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1098e7bcc; end: 1098e7c8f;  */

undefined8 FUN_1098e7bcc(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_1098e7940(param_5,param_1);
  if (uVar2 == uVar3) {
    return param_5;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_5,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_5;
}



/* Entry: 1098e7c90; end: 1098e7d03;  */

long * FUN_1098e7c90(long *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < param_2) {
    do {
      uVar1 = *param_3;
      lVar3 = param_1[1];
      uVar2 = lVar3 + 1;
      if ((ulong)param_1[2] < uVar2) {
        (*(code *)param_1[3])(param_1);
        lVar3 = param_1[1];
        uVar2 = lVar3 + 1;
      }
      param_1[1] = uVar2;
      *(undefined1 *)(*param_1 + lVar3) = uVar1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_1;
}



/* Entry: 1098e7d04; end: 1098e7eab;  */

long * FUN_1098e7d04(uint param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  uVar3 = lVar4 + 1;
  if ((int)param_1 < 0) {
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar4) = 0x2d;
    param_1 = -param_1;
  }
  else {
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar4) = 0x2b;
  }
  if (99 < param_1) {
    uVar2 = param_1 / 100 << 1;
    if (999 < param_1) {
      uVar1 = (&UNK_10e00b0ea)[uVar2];
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
      if ((ulong)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2);
        lVar4 = param_2[1];
        uVar3 = lVar4 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + lVar4) = uVar1;
    }
    uVar1 = (&UNK_10e00b0eb)[uVar2];
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar4) = uVar1;
    param_1 = param_1 % 100;
  }
  uVar1 = (&UNK_10e00b0ea)[(ulong)param_1 * 2];
  lVar4 = param_2[1];
  uVar3 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2);
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)(*param_2 + lVar4) = uVar1;
  uVar1 = (&UNK_10e00b0eb)[(ulong)param_1 * 2];
  lVar4 = param_2[1];
  uVar3 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2);
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)(*param_2 + lVar4) = uVar1;
  return param_2;
}



/* Entry: 1098e7eac; end: 1098e7fbf;  */

undefined8 * FUN_1098e7eac(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_49;
  char cStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char cStack_29;
  char cStack_28;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3 != 0) {
    FUN_1099a7fb0(&uStack_40,param_2);
    if (cStack_29 < '\0') {
      func_0x000107c3192c(&uStack_60,uStack_40,uStack_38);
      cStack_48 = cStack_28;
      if (cStack_29 < '\0') {
        __ZdlPv(uStack_40);
      }
    }
    else {
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      cStack_49 = cStack_29;
      cStack_48 = cStack_28;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,&uStack_60);
    if (cStack_48 != '\0') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEmc(param_1 + 3,1);
    }
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
  }
  return param_1;
}



/* Entry: 1098e7fc0; end: 1098e804b;  */

int FUN_1098e7fc0(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    if (param_1[4] == 0) {
      return 0x7fffffff;
    }
  }
  else if (*(char *)((long)param_1 + 0x2f) == '\0') {
    return 0x7fffffff;
  }
  lVar3 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar3 < 0) {
    plVar2 = (long *)*param_1;
    lVar3 = param_1[1];
    pbVar4 = (byte *)*param_2;
    param_1 = plVar2;
    if (pbVar4 != (byte *)((long)plVar2 + lVar3)) goto LAB_1098e8008;
  }
  else {
    pbVar4 = (byte *)*param_2;
    if (pbVar4 != (byte *)((long)param_1 + lVar3)) {
LAB_1098e8008:
      if (*pbVar4 - 0x7f < 0xffffff82) {
        return 0x7fffffff;
      }
      *param_2 = (long)(pbVar4 + 1);
      goto LAB_1098e8038;
    }
  }
  pbVar4 = (byte *)((long)param_1 + lVar3 + -1);
LAB_1098e8038:
  iVar1 = (int)param_2[1] + (int)(char)*pbVar4;
  *(int *)(param_2 + 1) = iVar1;
  return iVar1;
}



/* Entry: 1098e804c; end: 1098e810f;  */

undefined8 FUN_1098e804c(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_1098e8110(param_5,param_1);
  if (uVar2 == uVar3) {
    return param_5;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_5,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_5;
}



/* Entry: 1098e8110; end: 1098e8213;  */

long * FUN_1098e8110(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = *(uint *)*param_1;
  if (uVar1 != 0) {
    lVar5 = param_2[1];
    uVar3 = lVar5 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar5 = param_2[1];
      uVar3 = lVar5 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + lVar5) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098e8214(param_2,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],
                *(undefined4 *)(param_1[3] + 4),param_1[4]);
  if ((*(byte *)(param_1[5] + 1) >> 5 & 1) != 0) {
    uVar2 = *(undefined1 *)param_1[6];
    lVar5 = param_2[1];
    uVar3 = lVar5 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar5 = param_2[1];
      uVar3 = lVar5 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar5) = uVar2;
    iVar6 = *(int *)param_1[7];
    if (0 < iVar6) {
      puVar4 = (undefined1 *)param_1[8];
      if (0 < iVar6) {
        do {
          uVar2 = *puVar4;
          lVar5 = param_2[1];
          uVar3 = lVar5 + 1;
          if ((ulong)param_2[2] < uVar3) {
            (*(code *)param_2[3])(param_2);
            lVar5 = param_2[1];
            uVar3 = lVar5 + 1;
          }
          param_2[1] = uVar3;
          *(undefined1 *)(*param_2 + lVar5) = uVar2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      return param_2;
    }
  }
  return param_2;
}



/* Entry: 1098e8214; end: 1098e834b;  */

long **** FUN_1098e8214(long ****param_1,undefined8 param_2,undefined8 param_3,long ****param_4,
                       long ****param_5)

{
  undefined1 uVar1;
  int iVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  ulong uVar9;
  long ***ppplStack_ad0;
  undefined4 uStack_ac8;
  undefined4 *puStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  code *pcStack_aa8;
  undefined4 auStack_aa0 [500];
  undefined1 uStack_261;
  long ***ppplStack_260;
  long ***ppplStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long **applStack_240 [63];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplVar6 = param_5[4];
  if (-1 < (char)*(byte *)((long)param_5 + 0x2f)) {
    ppplVar6 = (long ***)(ulong)*(byte *)((long)param_5 + 0x2f);
  }
  if (ppplVar6 == (long ***)0x0) {
    pppplVar8 = param_4;
    FUN_1098e84f4();
    ppplStack_260 = (long ***)CONCAT71(ppplStack_260._1_7_,0x30);
    pppplVar5 = &ppplStack_260;
    FUN_1098e7c90();
    pppplVar3 = param_1;
    param_5 = param_1;
  }
  else {
    uStack_248 = 0x1098e8c88;
    uStack_250 = 500;
    ppplStack_258 = (long ***)0x0;
    ppplStack_260 = applStack_240;
    FUN_1098e84f4(&ppplStack_260);
    uStack_261 = 0x30;
    FUN_1098e7c90(&ppplStack_260,param_4,&uStack_261);
    pppplVar5 = (long ****)ppplStack_260;
    pppplVar8 = (long ****)ppplStack_258;
    FUN_1098e834c(param_5);
    pppplVar3 = (long ****)ppplStack_260;
    param_4 = param_1;
    if (ppplStack_260 != applStack_240) {
      _free();
      param_4 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_aa8 = (code *)0x1098e85d0;
    uStack_ab0 = 500;
    uStack_ab8 = 1;
    auStack_aa0[0] = 0;
    ppplStack_ad0 = (long ***)pppplVar3;
    if (*(char *)((long)pppplVar3 + 0x17) < '\0') {
      ppplStack_ad0 = *pppplVar3;
    }
    uStack_ac8 = 0;
    puStack_ac0 = auStack_aa0;
    while( true ) {
      pppplVar4 = pppplVar3;
      FUN_1098e7fc0(pppplVar3,&ppplStack_ad0);
      iVar2 = (int)pppplVar4;
      if ((iVar2 == 0) || ((int)pppplVar8 <= iVar2)) break;
      uVar9 = uStack_ab8 + 1;
      if (uStack_ab0 < uVar9) {
        (*pcStack_aa8)(&puStack_ac0);
        uVar9 = uStack_ab8 + 1;
      }
      puStack_ac0[uStack_ab8] = iVar2;
      uStack_ab8 = uVar9;
    }
    if (0 < (int)pppplVar8) {
      iVar2 = (int)uStack_ab8 + -1;
      uVar9 = (ulong)pppplVar8 & 0x7fffffff;
      do {
        if ((int)pppplVar8 == puStack_ac0[iVar2]) {
          ppplVar6 = (long ***)(long)*(char *)((long)pppplVar3 + 0x2f);
          pppplVar4 = pppplVar3 + 3;
          if ((long)ppplVar6 < 0) {
            ppplVar6 = pppplVar3[4];
            pppplVar4 = (long ****)pppplVar3[3];
          }
          FUN_109446adc(param_4,pppplVar4,(long)pppplVar4 + (long)ppplVar6);
          iVar2 = iVar2 + -1;
        }
        uVar1 = *(undefined1 *)pppplVar5;
        ppplVar7 = param_4[1];
        ppplVar6 = (long ***)((long)ppplVar7 + 1);
        if (param_4[2] < ppplVar6) {
          (*(code *)param_4[3])(param_4);
          ppplVar7 = param_4[1];
          ppplVar6 = (long ***)((long)ppplVar7 + 1);
        }
        param_4[1] = ppplVar6;
        *(undefined1 *)((long)*param_4 + (long)ppplVar7) = uVar1;
        pppplVar5 = (long ****)((long)pppplVar5 + 1);
        pppplVar8 = (long ****)(ulong)((int)pppplVar8 - 1);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (puStack_ac0 != auStack_aa0) {
      _free();
    }
    return param_4;
  }
  return param_5;
}



/* Entry: 1098e834c; end: 1098e84f3;  */

long * FUN_1098e834c(long *param_1,long *param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lStack_860;
  undefined4 uStack_858;
  undefined4 *puStack_850;
  ulong uStack_848;
  ulong uStack_840;
  code *pcStack_838;
  undefined4 auStack_830 [500];
  
  pcStack_838 = (code *)0x1098e85d0;
  uStack_840 = 500;
  uStack_848 = 1;
  auStack_830[0] = 0;
  lStack_860 = (long)param_1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    lStack_860 = *param_1;
  }
  uStack_858 = 0;
  puStack_850 = auStack_830;
  while( true ) {
    plVar3 = param_1;
    FUN_1098e7fc0(param_1,&lStack_860);
    iVar2 = (int)plVar3;
    if ((iVar2 == 0) || ((int)param_4 <= iVar2)) break;
    uVar6 = uStack_848 + 1;
    if (uStack_840 < uVar6) {
      (*pcStack_838)(&puStack_850);
      uVar6 = uStack_848 + 1;
    }
    puStack_850[uStack_848] = iVar2;
    uStack_848 = uVar6;
  }
  if (0 < (int)param_4) {
    iVar2 = (int)uStack_848 + -1;
    uVar6 = param_4 & 0x7fffffff;
    do {
      if ((int)param_4 == puStack_850[iVar2]) {
        lVar5 = (long)*(char *)((long)param_1 + 0x2f);
        plVar3 = param_1 + 3;
        if (lVar5 < 0) {
          lVar5 = param_1[4];
          plVar3 = (long *)param_1[3];
        }
        FUN_109446adc(param_2,plVar3,(long)plVar3 + lVar5);
        iVar2 = iVar2 + -1;
      }
      uVar1 = *param_3;
      lVar5 = param_2[1];
      uVar4 = lVar5 + 1;
      if ((ulong)param_2[2] < uVar4) {
        (*(code *)param_2[3])(param_2);
        lVar5 = param_2[1];
        uVar4 = lVar5 + 1;
      }
      param_2[1] = uVar4;
      *(undefined1 *)(*param_2 + lVar5) = uVar1;
      param_3 = param_3 + 1;
      param_4 = (ulong)((int)param_4 - 1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (puStack_850 != auStack_830) {
    _free();
  }
  return param_2;
}



/* Entry: 1098e84f4; end: 1098e8663;  */

long * FUN_1098e84f4(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lStack_42;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar4 = lVar5 + (param_3 & 0xffffffff);
  if (uVar6 < uVar4) {
    (*(code *)param_1[3])(param_1);
    lVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar4 = lVar5 + (param_3 & 0xffffffff);
  }
  if (uVar4 <= uVar6) {
    param_1[1] = uVar4;
    if (*param_1 != 0) {
      plVar1 = (long *)(*param_1 + lVar5);
      FUN_1098e3124(plVar1,param_2,param_3);
      goto LAB_1098e859c;
    }
  }
  FUN_1098e3124(&lStack_42,param_2,param_3);
  param_2 = (long)&lStack_42 + (long)(int)param_3;
  plVar1 = &lStack_42;
  FUN_1098c2be4(plVar1,param_2,param_1);
  param_1 = plVar1;
LAB_1098e859c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar4 = plVar1[2] + ((ulong)plVar1[2] >> 1);
  uVar6 = param_2;
  if (param_2 < 0x4000000000000000) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar4 >> 0x3e == 0) {
    uVar6 = uVar4;
  }
  if (param_2 <= uVar4) {
    param_2 = uVar6;
  }
  plVar7 = (long *)*plVar1;
  plVar2 = plVar1;
  FUN_1098e8664();
  plVar3 = plVar2;
  _memcpy();
  *plVar1 = (long)plVar2;
  plVar1[2] = param_2;
  if (plVar7 != plVar1 + 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar7);
    return plVar7;
  }
  return plVar3;
}



/* Entry: 1098e8664; end: 1098e869f;  */

long * FUN_1098e8664(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                    undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  plVar2 = (long *)(param_2 << 2);
  _malloc();
  if (plVar2 != (long *)0x0) {
    return plVar2;
  }
  plVar2 = (long *)0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar3 = (uint *)PTR___ZTISt9bad_alloc_110346a68;
  puVar5 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  uVar8 = 0;
  if (param_4 <= puVar3[2]) {
    uVar8 = puVar3[2] - param_4;
  }
  uVar7 = uVar8 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*puVar3 >> 3) & 7] & 0x3fU);
  if ((undefined *)plVar2[2] < puVar5 + uVar8 * ((ulong)(*puVar3 >> 0xf) & 7) + plVar2[1]) {
    (*(code *)plVar2[3])(plVar2);
  }
  if (uVar7 != 0) {
    FUN_1094471fc(plVar2,uVar7,puVar3);
  }
  uVar1 = *(uint *)*param_5;
  if (uVar1 != 0) {
    lVar6 = plVar2[1];
    uVar4 = lVar6 + 1;
    if ((ulong)plVar2[2] < uVar4) {
      (*(code *)plVar2[3])(plVar2);
      lVar6 = plVar2[1];
      uVar4 = lVar6 + 1;
    }
    plVar2[1] = uVar4;
    *(char *)(*plVar2 + lVar6) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098e87e0(plVar2,*(undefined4 *)param_5[1],*(undefined4 *)param_5[2],*(undefined4 *)param_5[3]
                ,(long)*(char *)param_5[4],param_5[5]);
  if (0 < *(int *)param_5[6]) {
    FUN_1098e7c90();
  }
  if (uVar8 == uVar7) {
    return plVar2;
  }
  lVar6 = uVar8 - uVar7;
  uVar8 = (ulong)(*puVar3 >> 0xf) & 7;
  if ((int)uVar8 == 1) {
    func_0x000109447280(plVar2,lVar6,&stack0xffffffffffffffbf);
  }
  else if (lVar6 != 0) {
    do {
      FUN_109446adc(plVar2,puVar3 + 1,(long)(puVar3 + 1) + uVar8);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return plVar2;
}



/* Entry: 1098e86a0; end: 1098e87df;  */

long * FUN_1098e86a0(long *param_1,uint *param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if (param_4 <= param_2[2]) {
    uVar5 = param_2[2] - param_4;
  }
  uVar4 = uVar5 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar5 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar4 != 0) {
    FUN_1094471fc(param_1,uVar4,param_2);
  }
  uVar1 = *(uint *)*param_5;
  if (uVar1 != 0) {
    lVar3 = param_1[1];
    uVar2 = lVar3 + 1;
    if ((ulong)param_1[2] < uVar2) {
      (*(code *)param_1[3])(param_1);
      lVar3 = param_1[1];
      uVar2 = lVar3 + 1;
    }
    param_1[1] = uVar2;
    *(char *)(*param_1 + lVar3) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098e87e0(param_1,*(undefined4 *)param_5[1],*(undefined4 *)param_5[2],
                *(undefined4 *)param_5[3],(long)*(char *)param_5[4],param_5[5]);
  if (0 < *(int *)param_5[6]) {
    FUN_1098e7c90();
  }
  if (uVar5 == uVar4) {
    return param_1;
  }
  lVar3 = uVar5 - uVar4;
  uVar5 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar5 == 1) {
    func_0x000109447280(param_1,lVar3,&stack0xffffffffffffffcf);
  }
  else if (lVar3 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar5);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 1098e87e0; end: 1098e8aa3;  */

undefined1 *
FUN_1098e87e0(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4,undefined8 param_5,
             uint *param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  byte *unaff_x22;
  ulong uVar15;
  int iVar16;
  undefined8 uStack_2b8;
  byte *pbStack_2b0;
  uint *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [509];
  byte abStack_63 [11];
  long lStack_58;
  
  uVar8 = (undefined4)((ulong)param_5 >> 0x20);
  iVar7 = (int)param_5;
  puVar3 = &uStack_280;
  puVar14 = &uStack_280;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(ulong *)(param_6 + 8);
  if (-1 < (char)*(byte *)((long)param_6 + 0x2f)) {
    uVar11 = (ulong)*(byte *)((long)param_6 + 0x2f);
  }
  iVar16 = (int)param_3;
  iVar13 = (int)param_4;
  if (uVar11 == 0) {
    if (iVar7 == 0) {
      FUN_1098e3124(&uStack_280,param_2,param_3);
      param_6 = (uint *)((long)&uStack_280 + (long)iVar16);
      puVar6 = param_4;
    }
    else {
      param_6 = (uint *)((long)&uStack_280 + (long)iVar16 + 1);
      uVar1 = iVar16 - iVar13;
      puVar10 = param_6;
      if (1 < (int)uVar1) {
        uVar12 = (uVar1 >> 1) + 1;
        uVar11 = param_2;
        do {
          param_2 = (uVar11 & 0xffffffff) / 100;
          puVar10 = (uint *)((long)puVar10 + -2);
          *(undefined2 *)puVar10 =
               *(undefined2 *)
                (&UNK_10e00b0ea +
                (ulong)(uint)((int)uVar11 + (int)((uVar11 & 0xffffffff) / 100) * -100) * 2);
          uVar12 = uVar12 - 1;
          uVar11 = param_2;
        } while (1 < uVar12);
      }
      uVar11 = param_2;
      if ((uVar1 & 1) != 0) {
        uVar11 = (param_2 & 0xffffffff) / 10;
        puVar10 = (uint *)((long)puVar10 + -1);
        *(byte *)puVar10 = (char)param_2 + (char)((param_2 & 0xffffffff) / 10) * -10 | 0x30;
      }
      *(byte *)((long)puVar10 + -1) = (byte)param_5;
      puVar6 = param_4;
      FUN_1098e3124(((long)puVar10 + -1) - (long)iVar13,uVar11,param_4);
      puVar14 = (undefined8 *)param_4;
    }
    puVar10 = param_6;
    FUN_1098c2be4();
    puVar2 = (undefined1 *)puVar3;
  }
  else {
    uStack_268 = 0x1098e8c88;
    uStack_270 = 500;
    lStack_278 = 0;
    uStack_280 = auStack_260;
    if (iVar7 == 0) {
      FUN_1098e3124(abStack_63,param_2,param_3);
      unaff_x22 = abStack_63 + iVar16;
    }
    else {
      unaff_x22 = abStack_63 + (long)iVar16 + 1;
      uVar1 = iVar16 - iVar13;
      pbVar9 = unaff_x22;
      if (1 < (int)uVar1) {
        uVar12 = (uVar1 >> 1) + 1;
        uVar11 = param_2;
        do {
          param_2 = (uVar11 & 0xffffffff) / 100;
          pbVar9 = pbVar9 + -2;
          *(undefined2 *)pbVar9 =
               *(undefined2 *)
                (&UNK_10e00b0ea +
                (ulong)(uint)((int)uVar11 + (int)((uVar11 & 0xffffffff) / 100) * -100) * 2);
          uVar12 = uVar12 - 1;
          uVar11 = param_2;
        } while (1 < uVar12);
      }
      uVar11 = param_2;
      if ((uVar1 & 1) != 0) {
        uVar11 = (param_2 & 0xffffffff) / 10;
        pbVar9 = pbVar9 + -1;
        *pbVar9 = (char)param_2 + (char)((param_2 & 0xffffffff) / 10) * -10 | 0x30;
      }
      pbVar9[-1] = (byte)param_5;
      FUN_1098e3124((long)(pbVar9 + -1) - (long)iVar13,uVar11,param_4);
    }
    FUN_1098c2be4(abStack_63,unaff_x22,&uStack_280);
    puVar6 = (undefined1 *)((ulong)param_4 & 0xffffffff);
    FUN_1098e834c(param_6,param_1,uStack_280);
    puVar2 = uStack_280 + iVar13;
    puVar10 = (uint *)(uStack_280 + lStack_278);
    FUN_1098c2be4(puVar2);
    puVar3 = (undefined8 *)uStack_280;
    puVar14 = (undefined8 *)param_4;
    if (uStack_280 != auStack_260) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar4 = (undefined1 *)puVar3;
  __Unwind_Resume();
  pcStack_288 = FUN_1098e8aa4;
  puVar2 = (undefined1 *)CONCAT44(uVar8,iVar7);
  uVar11 = 0;
  if (puVar6 <= (undefined1 *)(ulong)puVar10[2]) {
    uVar11 = (long)(ulong)puVar10[2] - (long)puVar6;
  }
  uVar15 = uVar11 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*puVar10 >> 3) & 7] & 0x3fU);
  uStack_2b8 = param_3;
  pbStack_2b0 = unaff_x22;
  puStack_2a8 = param_6;
  puStack_2a0 = (undefined1 *)puVar14;
  puStack_298 = (undefined1 *)puVar3;
  puStack_290 = &stack0xfffffffffffffff0;
  if (*(ulong *)(puVar4 + 0x10) <
      *(long *)(puVar4 + 8) + param_1 + uVar11 * ((ulong)(*puVar10 >> 0xf) & 7)) {
    (**(code **)(puVar4 + 0x18))(puVar4);
  }
  if (uVar15 != 0) {
    FUN_1094471fc(puVar4,uVar15,puVar10);
  }
  FUN_1098e8b68(puVar2,puVar4);
  if (uVar11 != uVar15) {
    lVar5 = uVar11 - uVar15;
    uVar11 = (ulong)(*puVar10 >> 0xf) & 7;
    if ((int)uVar11 == 1) {
      uStack_2b8 = CONCAT17((char)puVar10[1],(undefined7)uStack_2b8);
      func_0x000109447280(puVar2,lVar5,(long)&uStack_2b8 + 7);
    }
    else if (lVar5 != 0) {
      do {
        FUN_109446adc(puVar2,puVar10 + 1,(long)(puVar10 + 1) + uVar11);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1098e8aa4; end: 1098e8b67;  */

undefined8 FUN_1098e8aa4(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_1098e8b68(param_5,param_1);
  if (uVar2 == uVar3) {
    return param_5;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_5,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_5;
}



/* Entry: 1098e8b68; end: 1098e8cff;  */

long * FUN_1098e8b68(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lStack_42;
  long lStack_38;
  
  uVar1 = *(uint *)*param_1;
  if (uVar1 != 0) {
    lVar9 = param_2[1];
    uVar6 = lVar9 + 1;
    if ((ulong)param_2[2] < uVar6) {
      (*(code *)param_2[3])(param_2);
      lVar9 = param_2[1];
      uVar6 = lVar9 + 1;
    }
    param_2[1] = uVar6;
    *(char *)(*param_2 + lVar9) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  lVar9 = param_2[1];
  uVar6 = lVar9 + 1;
  if ((ulong)param_2[2] < uVar6) {
    (*(code *)param_2[3])(param_2);
    lVar9 = param_2[1];
    uVar6 = lVar9 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)(*param_2 + lVar9) = 0x30;
  if (*(char *)param_1[1] != '\x01') {
    return param_2;
  }
  uVar2 = *(undefined1 *)param_1[2];
  lVar9 = param_2[1];
  uVar6 = lVar9 + 1;
  if ((ulong)param_2[2] < uVar6) {
    (*(code *)param_2[3])(param_2);
    lVar9 = param_2[1];
    uVar6 = lVar9 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)(*param_2 + lVar9) = uVar2;
  FUN_1098e7c90(param_2,*(undefined4 *)param_1[3],param_1[4]);
  uVar7 = (ulong)*(uint *)param_1[5];
  uVar1 = *(uint *)param_1[6];
  uVar8 = (ulong)uVar1;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar6 = lVar9 + uVar8;
  if (uVar10 < uVar6) {
    (*(code *)param_2[3])(param_2);
    lVar9 = param_2[1];
    uVar10 = param_2[2];
    uVar6 = lVar9 + uVar8;
  }
  if (uVar6 <= uVar10) {
    param_2[1] = uVar6;
    if (*param_2 != 0) {
      plVar3 = (long *)(*param_2 + lVar9);
      FUN_1098e3124(plVar3,uVar7,uVar8);
      goto LAB_1098e859c;
    }
  }
  FUN_1098e3124(&lStack_42,uVar7,uVar8);
  uVar7 = (long)&lStack_42 + (long)(int)uVar1;
  plVar3 = &lStack_42;
  FUN_1098c2be4(plVar3,uVar7,param_2);
  param_2 = plVar3;
LAB_1098e859c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar6 = plVar3[2] + ((ulong)plVar3[2] >> 1);
  uVar10 = uVar7;
  if (uVar7 < 0x4000000000000000) {
    uVar10 = 0x3fffffffffffffff;
  }
  if (uVar6 >> 0x3e == 0) {
    uVar10 = uVar6;
  }
  if (uVar7 <= uVar6) {
    uVar7 = uVar10;
  }
  plVar11 = (long *)*plVar3;
  plVar4 = plVar3;
  FUN_1098e8664();
  plVar5 = plVar4;
  _memcpy();
  *plVar3 = (long)plVar4;
  plVar3[2] = uVar7;
  if (plVar11 != plVar3 + 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar11);
    return plVar11;
  }
  return plVar5;
}



/* Entry: 1098e8d00; end: 1098e8d3b;  */

long FUN_1098e8d00(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long *param_5)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _malloc();
  if (param_2 != 0) {
    return param_2;
  }
  lVar1 = 8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  puVar2 = (uint *)PTR___ZTISt9bad_alloc_110346a68;
  puVar4 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  uVar5 = 0;
  if (param_4 <= puVar2[2]) {
    uVar5 = puVar2[2] - param_4;
  }
  uVar6 = uVar5 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*puVar2 >> 3) & 7] & 0x3fU);
  if (*(undefined **)(lVar1 + 0x10) <
      puVar4 + uVar5 * ((ulong)(*puVar2 >> 0xf) & 7) + *(long *)(lVar1 + 8)) {
    (**(code **)(lVar1 + 0x18))(lVar1);
  }
  if (uVar6 != 0) {
    FUN_1094471fc(lVar1,uVar6,puVar2);
  }
  FUN_109446adc(lVar1,*param_5,*param_5 + param_5[1]);
  if (uVar5 == uVar6) {
    return lVar1;
  }
  lVar3 = uVar5 - uVar6;
  uVar5 = (ulong)(*puVar2 >> 0xf) & 7;
  if ((int)uVar5 == 1) {
    func_0x000109447280(lVar1,lVar3,&stack0xffffffffffffffbf);
  }
  else if (lVar3 != 0) {
    do {
      FUN_109446adc(lVar1,puVar2 + 1,(long)(puVar2 + 1) + uVar5);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return lVar1;
}



/* Entry: 1098e8d3c; end: 1098e8e0b;  */

long FUN_1098e8d3c(long param_1,uint *param_2,long param_3,ulong param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_109446adc(param_1,*param_5,*param_5 + param_5[1]);
  if (uVar2 == uVar3) {
    return param_1;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_1,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_1;
}



/* Entry: 1098e8e0c; end: 1098e9683;  */

void FUN_1098e8e0c(ulong *param_1,uint param_2,uint param_3,long *param_4,int *param_5)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  undefined4 **ppuVar6;
  undefined4 **ppuVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  int iVar15;
  ulong uVar16;
  undefined4 **ppuVar17;
  long lVar18;
  undefined4 *puStack_308;
  ulong uStack_300;
  long lStack_2f8;
  code *pcStack_2f0;
  undefined4 auStack_2e8 [32];
  undefined4 uStack_268;
  undefined4 *puStack_260;
  ulong uStack_258;
  long lStack_250;
  code *pcStack_248;
  undefined4 auStack_240 [32];
  undefined4 uStack_1c0;
  undefined4 *puStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  undefined4 auStack_198 [32];
  undefined4 uStack_118;
  undefined4 *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  undefined4 auStack_f0 [32];
  undefined4 uStack_70;
  
  pcStack_f8 = FUN_1098e9b10;
  uStack_100 = 0x20;
  uStack_108 = 0;
  uStack_70 = 0;
  pcStack_1a0 = FUN_1098e9b10;
  lStack_1a8 = 0x20;
  uStack_1b0 = 0;
  uStack_118 = 0;
  pcStack_248 = FUN_1098e9b10;
  lStack_250 = 0x20;
  uStack_258 = 0;
  uStack_1c0 = 0;
  pcStack_2f0 = FUN_1098e9b10;
  lStack_2f8 = 0x20;
  uStack_300 = 0;
  uStack_268 = 0;
  uVar2 = param_2 & 1;
  iVar15 = uVar2 + 1;
  uVar10 = (uint)param_1[2];
  puStack_308 = auStack_2e8;
  puStack_260 = auStack_240;
  puStack_1b8 = auStack_198;
  puStack_110 = auStack_f0;
  if ((int)uVar10 < 0) {
    if (*param_5 < 0) {
      FUN_1098e976c(&puStack_110,-*param_5);
      func_0x0001098e9868(&puStack_260,&puStack_110);
      if (uVar2 == 0) {
        ppuVar17 = (undefined4 **)0x0;
      }
      else {
        func_0x0001098e9868(&puStack_308,&puStack_110);
        ppuVar17 = &puStack_308;
        FUN_1098e96bc(&puStack_308,1);
      }
      FUN_1098e9ef8(&puStack_110,*param_1,param_1[1]);
      FUN_1098e96bc(&puStack_110,iVar15);
      uVar9 = 1;
      *puStack_1b8 = 1;
      if (lStack_1a8 == 0) {
        (*pcStack_1a0)(&puStack_1b8,1);
        uVar9 = (ulong)(lStack_1a8 != 0);
      }
      uStack_118 = 0;
      uStack_1b0 = uVar9;
      FUN_1098e96bc(&puStack_1b8,iVar15 - (uint)param_1[2]);
    }
    else {
      uVar12 = *param_1;
      uVar13 = param_1[1];
      uVar9 = 0;
      do {
        uVar16 = uVar9;
        uVar9 = uVar16 + 1;
        auStack_f0[uVar16] = (int)uVar12;
        uVar12 = uVar12 >> 0x20 | uVar13 << 0x20;
        uVar1 = uVar13 >> 0x20;
        uVar13 = uVar13 >> 0x20;
      } while (uVar12 != 0 || uVar1 != 0);
      if (0x1f < uVar16) {
        FUN_1098e9b10(&puStack_110,uVar9);
      }
      uStack_108 = uVar9;
      if (uStack_100 <= uVar9) {
        uStack_108 = uStack_100;
      }
      uStack_70 = 0;
      FUN_1098e96bc(&puStack_110,iVar15);
      FUN_1098e976c(&puStack_1b8,*param_5);
      FUN_1098e96bc(&puStack_1b8,iVar15 - (uint)param_1[2]);
      uVar9 = 1;
      *puStack_260 = 1;
      if (lStack_250 == 0) {
        (*pcStack_248)(&puStack_260,1);
        uVar9 = (ulong)(lStack_250 != 0);
      }
      uStack_1c0 = 0;
      uStack_258 = uVar9;
      if (uVar2 == 0) {
        ppuVar17 = (undefined4 **)0x0;
      }
      else {
        *puStack_308 = 2;
        if (lStack_2f8 == 0) {
          (*pcStack_2f0)(&puStack_308,1);
          uStack_300 = (ulong)(lStack_2f8 != 0);
        }
        else {
          uStack_300 = 1;
        }
        uStack_268 = 0;
        ppuVar17 = &puStack_308;
      }
    }
  }
  else {
    uVar12 = *param_1;
    uVar13 = param_1[1];
    uVar9 = 0;
    do {
      uVar16 = uVar9;
      uVar9 = uVar16 + 1;
      auStack_f0[uVar16] = (int)uVar12;
      uVar12 = uVar12 >> 0x20 | uVar13 << 0x20;
      uVar1 = uVar13 >> 0x20;
      uVar13 = uVar13 >> 0x20;
    } while (uVar12 != 0 || uVar1 != 0);
    if (0x1f < uVar16) {
      FUN_1098e9b10(&puStack_110,uVar9);
      uVar10 = (uint)param_1[2];
    }
    uStack_108 = uVar9;
    if (uStack_100 <= uVar9) {
      uStack_108 = uStack_100;
    }
    uStack_70 = 0;
    FUN_1098e96bc(&puStack_110,uVar10 + iVar15);
    uVar9 = 1;
    *puStack_260 = 1;
    if (lStack_250 == 0) {
      (*pcStack_248)(&puStack_260,1);
      uVar9 = (ulong)(lStack_250 != 0);
    }
    uStack_1c0 = 0;
    uStack_258 = uVar9;
    FUN_1098e96bc(&puStack_260,(uint)param_1[2]);
    if (uVar2 == 0) {
      ppuVar17 = (undefined4 **)0x0;
    }
    else {
      uVar9 = 1;
      *puStack_308 = 1;
      if (lStack_2f8 == 0) {
        (*pcStack_2f0)(&puStack_308,1);
        uVar9 = (ulong)(lStack_2f8 != 0);
      }
      uStack_268 = 0;
      ppuVar17 = &puStack_308;
      uStack_300 = uVar9;
      FUN_1098e96bc(&puStack_308,(uint)param_1[2] + 1);
    }
    FUN_1098e976c(&puStack_1b8,*param_5);
    FUN_1098e96bc(&puStack_1b8,iVar15);
  }
  uVar2 = ((uint)*param_1 ^ 0xffffffff) & 1;
  ppuVar5 = &puStack_260;
  if (ppuVar17 != (undefined4 **)0x0) {
    ppuVar5 = ppuVar17;
  }
  uVar10 = param_3;
  if ((param_2 >> 1 & 1) != 0) {
    ppuVar4 = &puStack_110;
    FUN_1098e98f0(ppuVar4,ppuVar5,&puStack_1b8);
    iVar15 = (int)ppuVar4 + uVar2;
    if (iVar15 == 0 || iVar15 < 0 != SCARRY4((int)ppuVar4,uVar2)) {
      *param_5 = *param_5 + -1;
      FUN_1098e9fd4(&puStack_110,10);
      if (((int)param_3 < 0) && (FUN_1098e9fd4(&puStack_260,10), ppuVar17 != (undefined4 **)0x0)) {
        FUN_1098e9fd4(ppuVar17,10);
      }
    }
    if ((param_2 >> 2 & 1) != 0) {
      iVar15 = *param_5;
      if ((-1 < iVar15) && (0x7ffffffe - iVar15 < (int)param_3)) {
        puVar8 = (undefined8 *)0x10;
        ___cxa_allocate_exception();
        __ZNSt13runtime_errorC2EPKc();
        *puVar8 = &PTR_FUN_110b1c7e0;
        ___cxa_throw(puVar8,&PTR_DAT_110b1c7b8,FUN_1098e96a4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1098e95ec);
        (*pcVar3)();
      }
      uVar10 = param_3 + iVar15 + 1;
    }
  }
  if ((int)param_3 < 0) {
    lVar18 = 0;
    lVar11 = *param_4;
    while( true ) {
      ppuVar4 = &puStack_110;
      FUN_1098e9a10(ppuVar4,&puStack_1b8);
      ppuVar6 = &puStack_110;
      FUN_1098e9a7c(ppuVar6,&puStack_260);
      ppuVar7 = &puStack_110;
      FUN_1098e98f0(ppuVar7,ppuVar5,&puStack_1b8);
      *(char *)(lVar11 + lVar18) = (char)ppuVar4 + '0';
      if (((int)ppuVar6 < (int)uVar2) || ((int)-uVar2 < (int)ppuVar7)) break;
      FUN_1098e9fd4(&puStack_110,10);
      FUN_1098e9fd4(&puStack_260,10);
      if (ppuVar17 != (undefined4 **)0x0) {
        FUN_1098e9fd4(ppuVar17,10);
      }
      lVar18 = lVar18 + 1;
    }
    uVar9 = lVar18 + 1;
    if ((int)ppuVar6 < (int)uVar2) {
      if ((int)-uVar2 < (int)ppuVar7) {
        ppuVar17 = &puStack_110;
        FUN_1098e98f0(ppuVar17,&puStack_110,&puStack_1b8);
        if ((0 < (int)ppuVar17) || (((int)ppuVar17 == 0 && (((ulong)ppuVar4 & 1) != 0))))
        goto LAB_1098e92bc;
      }
    }
    else {
LAB_1098e92bc:
      lVar11 = lVar11 + (uVar9 & 0xffffffff);
      *(char *)(lVar11 + -1) = *(char *)(lVar11 + -1) + '\x01';
    }
    uVar12 = uVar9 & 0xffffffff;
    uVar13 = param_4[2];
    if (uVar13 < (uVar9 & 0xffffffff)) {
      (*(code *)param_4[3])(param_4,uVar12);
      uVar13 = param_4[2];
    }
    if (uVar13 <= uVar12) {
      uVar12 = uVar13;
    }
    param_4[1] = uVar12;
    iVar15 = *param_5 - (int)lVar18;
LAB_1098e9308:
    *param_5 = iVar15;
  }
  else {
    uVar2 = uVar10 - 1;
    *param_5 = *param_5 - uVar2;
    if ((int)uVar10 < 1) {
      if (uVar10 == 0) {
        FUN_1098e9fd4(&puStack_1b8,10);
        ppuVar17 = &puStack_110;
        FUN_1098e98f0(ppuVar17,&puStack_110,&puStack_1b8);
        uVar14 = 0x30;
        if (0 < (int)ppuVar17) {
          uVar14 = 0x31;
        }
      }
      else {
        uVar14 = 0x30;
      }
      lVar11 = param_4[1];
      uVar9 = lVar11 + 1;
      if ((ulong)param_4[2] < uVar9) {
        (*(code *)param_4[3])(param_4);
        lVar11 = param_4[1];
        uVar9 = lVar11 + 1;
      }
      param_4[1] = uVar9;
      *(undefined1 *)(*param_4 + lVar11) = uVar14;
      goto LAB_1098e9454;
    }
    uVar12 = (ulong)uVar10;
    uVar9 = param_4[2];
    if (uVar9 < uVar10) {
      (*(code *)param_4[3])(param_4,uVar12);
      uVar9 = param_4[2];
    }
    uVar13 = uVar12;
    if (uVar9 <= uVar12) {
      uVar13 = uVar9;
    }
    param_4[1] = uVar13;
    if (uVar10 != 1) {
      uVar9 = 0;
      do {
        ppuVar17 = &puStack_110;
        FUN_1098e9a10(ppuVar17,&puStack_1b8);
        *(char *)(*param_4 + uVar9) = (char)ppuVar17 + '0';
        FUN_1098e9fd4(&puStack_110,10);
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    ppuVar17 = &puStack_110;
    FUN_1098e9a10(ppuVar17,&puStack_1b8);
    ppuVar5 = &puStack_110;
    FUN_1098e98f0(ppuVar5,&puStack_110,&puStack_1b8);
    iVar15 = (int)ppuVar17;
    if ((0 < (int)ppuVar5) || (((int)ppuVar5 == 0 && (((ulong)ppuVar17 & 1) != 0)))) {
      if (iVar15 == 9) {
        *(undefined1 *)(*param_4 + (long)(int)uVar2) = 0x3a;
        if (uVar10 != 1) {
          iVar15 = uVar10 + 1;
          lVar11 = uVar12 - 2;
          do {
            uVar2 = (int)lVar11 + 1;
            if (*(char *)(*param_4 + (ulong)uVar2) != ':') break;
            *(undefined1 *)(*param_4 + (ulong)uVar2) = 0x30;
            *(char *)(*param_4 + lVar11) = *(char *)(*param_4 + lVar11) + '\x01';
            iVar15 = iVar15 + -1;
            lVar11 = lVar11 + -1;
          } while (2 < iVar15);
        }
        if (*(char *)*param_4 != ':') goto LAB_1098e9454;
        *(char *)*param_4 = '1';
        if ((param_2 >> 2 & 1) != 0) {
          lVar11 = param_4[1];
          uVar9 = lVar11 + 1;
          if ((ulong)param_4[2] < uVar9) {
            (*(code *)param_4[3])(param_4);
            lVar11 = param_4[1];
            uVar9 = lVar11 + 1;
          }
          param_4[1] = uVar9;
          *(undefined1 *)(*param_4 + lVar11) = 0x30;
          goto LAB_1098e9454;
        }
        iVar15 = *param_5 + 1;
        goto LAB_1098e9308;
      }
      iVar15 = iVar15 + 1;
    }
    *(char *)(*param_4 + (long)(int)uVar2) = (char)iVar15 + '0';
  }
LAB_1098e9454:
  if (puStack_308 != auStack_2e8) {
    _free();
  }
  if (puStack_260 != auStack_240) {
    _free();
  }
  if (puStack_1b8 != auStack_198) {
    _free();
  }
  if (puStack_110 != auStack_f0) {
    _free();
  }
  return;
}



/* Entry: 1098e9684; end: 1098e96a3;  */

void FUN_1098e9684(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_110b1c7e0;
  return;
}



/* Entry: 1098e96a4; end: 1098e96a7;  */

void FUN_1098e96a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1098e96a8; end: 1098e96bb;  */

void FUN_1098e96a8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098e96bc; end: 1098e976b;  */

long * FUN_1098e96bc(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  iVar1 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x14) = (int)param_1[0x14] + (iVar1 >> 5);
  uVar3 = param_2 % 0x20;
  if ((uVar3 != 0) && (lVar5 = param_1[1], lVar5 != 0)) {
    lVar7 = 0;
    uVar8 = 0;
    lVar6 = *param_1;
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      iVar1 = (uVar2 << (ulong)(uVar3 & 0x1f)) + uVar8;
      uVar8 = uVar2 >> (ulong)(0x20 - uVar3 & 0x1f);
      *(int *)(lVar6 + lVar7 * 4) = iVar1;
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar7);
    if (uVar8 != 0) {
      uVar4 = lVar5 + 1;
      if ((ulong)param_1[2] < uVar4) {
        (*(code *)param_1[3])(param_1);
        lVar6 = *param_1;
        lVar5 = param_1[1];
        uVar4 = lVar5 + 1;
      }
      param_1[1] = uVar4;
      *(uint *)(lVar6 + lVar5 * 4) = uVar8;
    }
  }
  return param_1;
}



/* Entry: 1098e976c; end: 1098e98ef;  */

long * FUN_1098e976c(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if (param_2 != 0) {
    *(undefined4 *)*param_1 = 5;
    if (param_1[2] == 0) {
      (*(code *)param_1[3])(param_1,1);
      uVar5 = (ulong)(param_1[2] != 0);
    }
    else {
      uVar5 = 1;
    }
    param_1[1] = uVar5;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((uint)LZCOUNT(param_2) != 0x1f) {
      uVar8 = 1 << (ulong)(((uint)LZCOUNT(param_2) ^ 0x1f) & 0x1f);
      do {
        FUN_1098e9be0(param_1);
        uVar8 = (int)uVar8 >> 1;
        if ((param_2 & uVar8) != 0) {
          FUN_1098e9fd4(param_1,5);
        }
      } while (1 < uVar8);
    }
    uVar8 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar8 = param_2;
    }
    *(int *)(param_1 + 0x14) = (int)param_1[0x14] + ((int)uVar8 >> 5);
    param_2 = (int)param_2 % 0x20;
    if ((param_2 != 0) && (lVar4 = param_1[1], lVar4 != 0)) {
      lVar7 = 0;
      uVar8 = 0;
      lVar6 = *param_1;
      do {
        uVar2 = *(uint *)(lVar6 + lVar7 * 4);
        iVar1 = (uVar2 << (ulong)(param_2 & 0x1f)) + uVar8;
        uVar8 = uVar2 >> (ulong)(0x20 - param_2 & 0x1f);
        *(int *)(lVar6 + lVar7 * 4) = iVar1;
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      if (uVar8 != 0) {
        uVar5 = lVar4 + 1;
        if ((ulong)param_1[2] < uVar5) {
          (*(code *)param_1[3])(param_1);
          lVar6 = *param_1;
          lVar4 = param_1[1];
          uVar5 = lVar4 + 1;
        }
        param_1[1] = uVar5;
        *(uint *)(lVar6 + lVar4 * 4) = uVar8;
      }
    }
    return param_1;
  }
  uVar5 = 1;
  *(undefined4 *)*param_1 = 1;
  plVar3 = param_1;
  if (param_1[2] == 0) {
    (*(code *)param_1[3])(param_1,1);
    uVar5 = (ulong)(param_1[2] != 0);
  }
  param_1[1] = uVar5;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return plVar3;
}



/* Entry: 1098e98f0; end: 1098e9a0f;  */

int FUN_1098e98f0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  uint *puVar17;
  
  iVar3 = (int)param_1[0x14];
  lVar8 = (long)iVar3;
  lVar1 = lVar8 + (int)param_1[1];
  iVar4 = (int)param_2[0x14];
  lVar10 = (long)iVar4;
  lVar2 = lVar10 + (int)param_2[1];
  iVar9 = (int)lVar1;
  iVar11 = (int)lVar2;
  if (iVar9 <= iVar11) {
    iVar9 = iVar11;
  }
  iVar11 = (int)param_3[0x14];
  lVar12 = (long)iVar11;
  iVar16 = (int)param_3[1];
  iVar13 = (int)(lVar12 + iVar16);
  if (iVar9 + 1 < iVar13) {
    return -1;
  }
  if (iVar9 <= iVar13) {
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    if (iVar11 <= iVar3) {
      iVar3 = iVar11;
    }
    if (iVar13 <= iVar3) {
      return 0;
    }
    uVar15 = 0;
    lVar14 = lVar12 + iVar16;
    puVar17 = (uint *)(*param_3 + (long)iVar16 * 4);
    while( true ) {
      puVar17 = puVar17 + -1;
      uVar5 = 0;
      if ((lVar8 < lVar14) && (lVar14 <= lVar1)) {
        uVar5 = (ulong)*(uint *)(*param_1 + lVar8 * -4 + -4 + lVar14 * 4);
      }
      uVar6 = 0;
      if ((lVar10 < lVar14) && (lVar14 <= lVar2)) {
        uVar6 = (ulong)*(uint *)(*param_2 + lVar10 * -4 + -4 + lVar14 * 4);
      }
      uVar7 = 0;
      if ((lVar12 < lVar14) && (lVar14 <= lVar12 + iVar16)) {
        uVar7 = (ulong)*puVar17;
      }
      uVar6 = uVar6 + uVar5;
      uVar7 = uVar7 | uVar15;
      if (uVar7 < uVar6) break;
      if (1 < uVar7 - uVar6) {
        return -1;
      }
      lVar14 = lVar14 + -1;
      uVar15 = uVar7 - uVar6 << 0x20;
      if (lVar14 <= iVar3) {
        return -(uint)(uVar7 != uVar6);
      }
    }
  }
  return 1;
}



/* Entry: 1098e9a10; end: 1098e9a7b;  */

int FUN_1098e9a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = param_1;
  FUN_1098e9a7c();
  if ((int)uVar1 < 0) {
    iVar2 = 0;
  }
  else {
    FUN_1098ea054(param_1,param_2);
    iVar2 = 0;
    do {
      FUN_1098ea104(param_1,param_2);
      iVar2 = iVar2 + 1;
      uVar1 = param_1;
      FUN_1098e9a7c(param_1,param_2);
    } while (-1 < (int)uVar1);
  }
  return iVar2;
}



/* Entry: 1098e9a7c; end: 1098e9b0f;  */

undefined4 FUN_1098e9a7c(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  
  iVar9 = (int)param_1[1];
  iVar1 = (int)param_1[0x14] + iVar9;
  iVar11 = (int)param_2[1];
  iVar2 = (int)param_2[0x14] + iVar11;
  if (iVar1 != iVar2) {
    uVar3 = 0xffffffff;
    if (iVar2 < iVar1) {
      uVar3 = 1;
    }
    return uVar3;
  }
  uVar8 = (ulong)(iVar9 - iVar11 & (iVar9 - iVar11 >> 0x1f ^ 0xffffffffU));
  uVar12 = (ulong)iVar9;
  uVar10 = (ulong)iVar11;
  uVar5 = uVar12;
  if ((long)uVar8 <= (long)uVar12) {
    uVar5 = uVar8;
  }
  do {
    if ((long)uVar12 <= (long)uVar8) {
      uVar3 = 0xffffffff;
      if ((long)uVar10 < (long)uVar5) {
        uVar3 = 1;
      }
      uVar4 = 0;
      if (uVar5 != uVar10) {
        uVar4 = uVar3;
      }
      return uVar4;
    }
    uVar6 = *(uint *)(*param_1 + -4 + uVar12 * 4);
    uVar12 = uVar12 - 1;
    uVar7 = *(uint *)(*param_2 + -4 + uVar10 * 4);
    uVar10 = uVar10 - 1;
  } while (uVar6 == uVar7);
  uVar3 = 0xffffffff;
  if (uVar7 < uVar6) {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1098e9b10; end: 1098e9ba3;  */

void FUN_1098e9b10(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = param_1[2] + ((ulong)param_1[2] >> 1);
  uVar2 = param_2;
  if (param_2 < 0x4000000000000000) {
    uVar2 = 0x3fffffffffffffff;
  }
  if (uVar1 >> 0x3e == 0) {
    uVar2 = uVar1;
  }
  if (param_2 <= uVar1) {
    param_2 = uVar2;
  }
  plVar4 = (long *)*param_1;
  plVar3 = param_1;
  FUN_1098e9ba4(param_1,param_2);
  _memcpy();
  *param_1 = (long)plVar3;
  param_1[2] = param_2;
  if (plVar4 != param_1 + 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar4);
    return;
  }
  return;
}



/* Entry: 1098e9ba4; end: 1098e9bdf;  */

void FUN_1098e9ba4(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  undefined1 *apuStack_e0 [4];
  undefined1 auStack_c0 [128];
  
  param_2 = param_2 << 2;
  _malloc();
  if (param_2 == 0) {
    plVar4 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    uVar18 = plVar4[1];
    iVar17 = (int)uVar18;
    uVar1 = iVar17 * 2;
    uVar16 = (ulong)uVar1;
    FUN_1098e9e24(apuStack_e0,plVar4);
    uVar9 = plVar4[2];
    if (uVar9 < uVar16) {
      (*(code *)plVar4[3])(plVar4,uVar16);
      uVar9 = plVar4[2];
    }
    if (uVar9 <= uVar16) {
      uVar16 = uVar9;
    }
    plVar4[1] = uVar16;
    if (iVar17 < 1) {
      uVar16 = 0;
      uVar9 = 0;
    }
    else {
      lVar10 = 0;
      uVar11 = 0;
      uVar16 = 0;
      uVar9 = 0;
      lVar12 = *plVar4;
      lVar13 = 1;
      do {
        lVar15 = 0;
        lVar5 = lVar10;
        do {
          bVar3 = CARRY8(uVar16,(ulong)*(uint *)(apuStack_e0[0] + lVar5) *
                                (ulong)*(uint *)(apuStack_e0[0] + lVar15 * 4));
          uVar16 = uVar16 + (ulong)*(uint *)(apuStack_e0[0] + lVar5) *
                            (ulong)*(uint *)(apuStack_e0[0] + lVar15 * 4);
          if (bVar3) {
            uVar9 = uVar9 + 1;
          }
          lVar15 = lVar15 + 1;
          lVar5 = lVar5 + -4;
        } while (lVar13 != lVar15);
        *(int *)(lVar12 + uVar11 * 4) = (int)uVar16;
        uVar16 = uVar16 >> 0x20 | uVar9 << 0x20;
        uVar9 = uVar9 >> 0x20;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
        lVar10 = lVar10 + 4;
      } while (uVar11 != (uVar18 & 0x7fffffff));
    }
    if (iVar17 < (int)uVar1) {
      lVar15 = *plVar4;
      lVar12 = (long)iVar17;
      iVar2 = iVar17 + -1;
      lVar13 = (long)iVar17;
      lVar10 = (long)iVar17;
      iVar14 = 1;
      do {
        iVar17 = iVar17 + -1;
        if (lVar12 < iVar2 + lVar13) {
          puVar6 = (uint *)(apuStack_e0[0] + (long)iVar14 * 4);
          puVar8 = (uint *)(apuStack_e0[0] + lVar10 * 4);
          iVar7 = iVar17;
          do {
            puVar8 = puVar8 + -1;
            bVar3 = CARRY8(uVar16,(ulong)*puVar8 * (ulong)*puVar6);
            uVar16 = uVar16 + (ulong)*puVar8 * (ulong)*puVar6;
            if (bVar3) {
              uVar9 = uVar9 + 1;
            }
            iVar7 = iVar7 + -1;
            puVar6 = puVar6 + 1;
          } while (iVar7 != 0);
        }
        *(int *)(lVar15 + lVar12 * 4) = (int)uVar16;
        uVar16 = uVar16 >> 0x20 | uVar9 << 0x20;
        uVar9 = uVar9 >> 0x20;
        lVar12 = lVar12 + 1;
        iVar14 = iVar14 + 1;
      } while (lVar12 != (int)uVar1);
    }
    FUN_1098e9da0(plVar4);
    *(int *)(plVar4 + 0x14) = (int)plVar4[0x14] << 1;
    if (apuStack_e0[0] != auStack_c0) {
      _free();
    }
    return;
  }
  return;
}



/* Entry: 1098e9be0; end: 1098e9d9f;  */

void FUN_1098e9be0(long *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined1 *apuStack_d0 [4];
  undefined1 auStack_b0 [128];
  
  uVar17 = param_1[1];
  iVar16 = (int)uVar17;
  uVar1 = iVar16 * 2;
  uVar15 = (ulong)uVar1;
  FUN_1098e9e24(apuStack_d0,param_1);
  uVar8 = param_1[2];
  if (uVar8 < uVar15) {
    (*(code *)param_1[3])(param_1,uVar15);
    uVar8 = param_1[2];
  }
  if (uVar8 <= uVar15) {
    uVar15 = uVar8;
  }
  param_1[1] = uVar15;
  if (iVar16 < 1) {
    uVar15 = 0;
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    uVar10 = 0;
    uVar15 = 0;
    uVar8 = 0;
    lVar11 = *param_1;
    lVar12 = 1;
    do {
      lVar14 = 0;
      lVar4 = lVar9;
      do {
        bVar3 = CARRY8(uVar15,(ulong)*(uint *)(apuStack_d0[0] + lVar4) *
                              (ulong)*(uint *)(apuStack_d0[0] + lVar14 * 4));
        uVar15 = uVar15 + (ulong)*(uint *)(apuStack_d0[0] + lVar4) *
                          (ulong)*(uint *)(apuStack_d0[0] + lVar14 * 4);
        if (bVar3) {
          uVar8 = uVar8 + 1;
        }
        lVar14 = lVar14 + 1;
        lVar4 = lVar4 + -4;
      } while (lVar12 != lVar14);
      *(int *)(lVar11 + uVar10 * 4) = (int)uVar15;
      uVar15 = uVar15 >> 0x20 | uVar8 << 0x20;
      uVar8 = uVar8 >> 0x20;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 1;
      lVar9 = lVar9 + 4;
    } while (uVar10 != (uVar17 & 0x7fffffff));
  }
  if (iVar16 < (int)uVar1) {
    lVar14 = *param_1;
    lVar11 = (long)iVar16;
    iVar2 = iVar16 + -1;
    lVar12 = (long)iVar16;
    lVar9 = (long)iVar16;
    iVar13 = 1;
    do {
      iVar16 = iVar16 + -1;
      if (lVar11 < iVar2 + lVar12) {
        puVar5 = (uint *)(apuStack_d0[0] + (long)iVar13 * 4);
        puVar7 = (uint *)(apuStack_d0[0] + lVar9 * 4);
        iVar6 = iVar16;
        do {
          puVar7 = puVar7 + -1;
          bVar3 = CARRY8(uVar15,(ulong)*puVar7 * (ulong)*puVar5);
          uVar15 = uVar15 + (ulong)*puVar7 * (ulong)*puVar5;
          if (bVar3) {
            uVar8 = uVar8 + 1;
          }
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + 1;
        } while (iVar6 != 0);
      }
      *(int *)(lVar14 + lVar11 * 4) = (int)uVar15;
      uVar15 = uVar15 >> 0x20 | uVar8 << 0x20;
      uVar8 = uVar8 >> 0x20;
      lVar11 = lVar11 + 1;
      iVar13 = iVar13 + 1;
    } while (lVar11 != (int)uVar1);
  }
  FUN_1098e9da0(param_1);
  *(int *)(param_1 + 0x14) = (int)param_1[0x14] << 1;
  if (apuStack_d0[0] != auStack_b0) {
    _free();
  }
  return;
}



/* Entry: 1098e9da0; end: 1098e9e23;  */

void FUN_1098e9da0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = param_1[1];
  uVar2 = (uint)uVar4;
  if (0 < (int)uVar2) {
    uVar2 = 1;
  }
  lVar6 = (uVar4 & 0xffffffff) * 4;
  do {
    lVar6 = lVar6 + -4;
    uVar3 = (uint)uVar4;
    uVar1 = uVar2;
    if ((int)uVar3 < 2) break;
    uVar4 = (ulong)(uVar3 - 1);
    uVar1 = uVar3;
  } while (*(int *)(*param_1 + lVar6) == 0);
  uVar4 = (ulong)uVar1;
  uVar5 = param_1[2];
  if (uVar5 < uVar1) {
    (*(code *)param_1[3])(param_1,uVar4);
    uVar5 = param_1[2];
  }
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  param_1[1] = uVar4;
  return;
}



/* Entry: 1098e9e24; end: 1098e9e5b;  */

undefined8 * FUN_1098e9e24(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = FUN_1098e9b10;
  FUN_1098e9e5c();
  return param_1;
}



/* Entry: 1098e9e5c; end: 1098e9ef7;  */

void FUN_1098e9e5c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = param_2[1];
  uVar1 = param_2[2];
  plVar2 = param_2 + 4;
  if ((long *)*param_2 == plVar2) {
    *param_1 = (long)(param_1 + 4);
    param_1[2] = uVar1;
    if (uVar5 != 0) {
      lVar4 = uVar5 << 2;
      plVar3 = param_1 + 4;
      do {
        *(undefined4 *)plVar3 = *(undefined4 *)plVar2;
        lVar4 = lVar4 + -4;
        plVar2 = (long *)((long)plVar2 + 4);
        plVar3 = (long *)((long)plVar3 + 4);
      } while (lVar4 != 0);
    }
  }
  else {
    *param_1 = *param_2;
    param_1[2] = uVar1;
    *param_2 = (long)plVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar1 = param_1[2];
  }
  if (uVar1 < uVar5) {
    (*(code *)param_1[3])(param_1,uVar5);
    uVar1 = param_1[2];
  }
  if (uVar1 <= uVar5) {
    uVar5 = uVar1;
  }
  param_1[1] = uVar5;
  return;
}



/* Entry: 1098e9ef8; end: 1098e9fd3;  */

void FUN_1098e9ef8(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar15 = 0;
    uVar16 = 0;
    uVar10 = 0;
    lVar9 = *param_1;
    do {
      uVar11 = CONCAT44(0,*(uint *)(lVar9 + uVar10 * 4));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar11;
      uVar13 = SUB168(auVar3 * auVar5,8);
      uVar1 = param_2 * uVar11 + (uVar15 & 0xffffffff);
      if (CARRY8(param_2 * uVar11,uVar15 & 0xffffffff)) {
        uVar13 = uVar13 + 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_3 << 0x20;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
      uVar12 = (param_3 << 0x20) * uVar11;
      uVar14 = uVar1 >> 0x20 | uVar13 << 0x20;
      uVar7 = uVar15 >> 0x20 | uVar16 << 0x20;
      uVar2 = uVar12 + uVar7;
      uVar15 = uVar2 + uVar14;
      uVar16 = SUB168(auVar4 * auVar6,8) + (param_3 >> 0x20) * uVar11 + (uVar16 >> 0x20) +
               (ulong)CARRY8(uVar12,uVar7) + (uVar13 >> 0x20) + (ulong)CARRY8(uVar2,uVar14);
      *(int *)(lVar9 + uVar10 * 4) = (int)uVar1;
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
    if (uVar15 != 0 || uVar16 != 0) {
      do {
        uVar10 = uVar8 + 1;
        if ((ulong)param_1[2] < uVar10) {
          (*(code *)param_1[3])(param_1);
          lVar9 = *param_1;
          uVar8 = param_1[1];
          uVar10 = uVar8 + 1;
        }
        param_1[1] = uVar10;
        *(int *)(lVar9 + uVar8 * 4) = (int)uVar15;
        uVar15 = uVar15 >> 0x20 | uVar16 << 0x20;
        uVar1 = uVar16 >> 0x20;
        uVar16 = uVar16 >> 0x20;
        uVar8 = uVar10;
      } while (uVar15 != 0 || uVar1 != 0);
    }
  }
  return;
}


