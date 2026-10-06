/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006ea61c; end: 006ea647;  */

undefined8 FUN_006ea61c(void)

{
  func_0x00706544(0xb29a68,FUN_006ea648);
  return 0xb6cad8;
}



/* Entry: 006ea648; end: 006ea68f;  */

void FUN_006ea648(void)

{
  undefined4 *extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x30;
  
  func_0x006fec84(0xb6cad8);
  *extraout_x8 = 0x10100c20;
  extraout_x8[1] = 1;
  func_0x006fec98(unaff_x30);
  *(code **)(extraout_x8_00 + 0x28) = FUN_006f9198;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0x6f8fc4;
  return;
}



/* Entry: 006ea690; end: 006ea6bb;  */

undefined8 FUN_006ea690(void)

{
  func_0x00706544(0xb29a78,FUN_006ea6bc);
  return 0xb6cb20;
}



/* Entry: 006ea6bc; end: 006ea703;  */

void FUN_006ea6bc(void)

{
  undefined4 *extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x30;
  
  func_0x006fec84(0xb6cb20);
  *extraout_x8 = 0x10100c10;
  extraout_x8[1] = 1;
  func_0x006fec98(unaff_x30);
  *(code **)(extraout_x8_00 + 0x28) = FUN_006f9248;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0x6f8fc4;
  return;
}



/* Entry: 006ea704; end: 006ea72f;  */

undefined8 FUN_006ea704(void)

{
  func_0x00706544(0xb29a88,FUN_006ea730);
  return 0xb6cb68;
}



/* Entry: 006ea730; end: 006ea777;  */

void FUN_006ea730(void)

{
  undefined4 *extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x30;
  
  func_0x006fec84(0xb6cb68);
  *extraout_x8 = 0x10100c20;
  extraout_x8[1] = 1;
  func_0x006fec98(unaff_x30);
  *(code **)(extraout_x8_00 + 0x28) = FUN_006f9248;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0x6f8fc4;
  return;
}



/* Entry: 006ea778; end: 006ea7fb;  */

undefined1 * FUN_006ea778(void)

{
  long *plVar1;
  undefined8 in_x4;
  code *extraout_x8;
  long alStack_60 [4];
  
  plVar1 = alStack_60;
  func_0x006fe0f0();
  alStack_60[1] = 0;
  alStack_60[0] = 0;
  alStack_60[3] = 0;
  alStack_60[2] = 0;
  FUN_006ea94c(alStack_60,in_x4);
  if ((int)plVar1 != 0) {
    func_0x006fe1e4(*(undefined8 *)(alStack_60[0] + 0x18),alStack_60);
    (*extraout_x8)();
    func_0x006fdbc4(alStack_60);
    FUN_006ea9b8();
  }
  FUN_006ea7fc(alStack_60);
  return (undefined1 *)plVar1;
}



/* Entry: 006ea7fc; end: 006ea837;  */

undefined8 FUN_006ea7fc(long param_1)

{
  func_0x00701ed0(*(undefined8 *)(param_1 + 8));
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x006fe580();
  return 1;
}



/* Entry: 006ea838; end: 006ea923;  */

undefined8 FUN_006ea838(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar4;
  
  if (param_2 == 0) {
LAB_006ea8a8:
    uVar2 = 100;
LAB_006ea914:
    func_0x006fd5dc(0x1d,0,uVar2);
    uVar2 = 0;
  }
  else {
    func_0x006fd8fc();
    lVar1 = *(long *)(param_2 + 0x10);
    if (lVar1 == 0) {
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto LAB_006ea8a8;
      lVar1 = 0;
LAB_006ea888:
      if (*unaff_x20 == lVar3) {
        uVar4 = unaff_x20[1];
        unaff_x20[1] = 0;
      }
      else {
        uVar4 = (ulong)*(uint *)(lVar3 + 0x2c);
        FUN_00701e90();
        if (uVar4 == 0) {
          if (lVar1 != 0) {
            (**(code **)unaff_x19[3])(lVar1);
          }
          goto LAB_006ea908;
        }
      }
    }
    else {
      (**(code **)(unaff_x19[3] + 8))();
      if (lVar1 == 0) {
LAB_006ea908:
        uVar2 = 0x41;
        goto LAB_006ea914;
      }
      lVar3 = *unaff_x19;
      if (lVar3 != 0) goto LAB_006ea888;
      uVar4 = 0;
    }
    FUN_006ea7fc();
    lVar3 = *unaff_x19;
    *unaff_x20 = lVar3;
    unaff_x20[1] = uVar4;
    if (lVar3 != 0) {
      func_0x006e3440(uVar4,unaff_x19[1],*(undefined4 *)(lVar3 + 0x2c));
    }
    lVar3 = unaff_x19[3];
    unaff_x20[2] = lVar1;
    unaff_x20[3] = lVar3;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 006ea924; end: 006ea94b;  */

void FUN_006ea924(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x006fd8fc();
  FUN_006ea7fc();
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar3;
  unaff_x20[3] = uVar2;
  unaff_x20[2] = uVar1;
  func_0x006fe580();
  return;
}



/* Entry: 006ea94c; end: 006ea9b7;  */

undefined8 FUN_006ea94c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != param_2) {
    uVar1 = (ulong)*(uint *)(param_2 + 0x2c);
    FUN_00701e90();
    if (uVar1 == 0) {
      func_0x006fd520(0x1d);
      return 0;
    }
    func_0x00701ed0(param_1[1]);
    *param_1 = param_2;
    param_1[1] = uVar1;
    lVar2 = param_2;
  }
  func_0x006fe7d4(*(undefined8 *)(lVar2 + 0x10));
  return 1;
}



/* Entry: 006ea9b8; end: 006ea9ff;  */

undefined8 FUN_006ea9b8(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x20))();
  lVar1 = *param_1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar1 + 4);
  }
  FUN_00701f08(param_1[1],*(undefined4 *)(lVar1 + 0x2c));
  return 1;
}



/* Entry: 006eaa00; end: 006eaa2b;  */

undefined8 FUN_006eaa00(void)

{
  func_0x00706544(0xb29a98,FUN_006eaa2c);
  return 0xb63da8;
}



/* Entry: 006eaa2c; end: 006eaa6f;  */

void FUN_006eaa2c(void)

{
  uRam0000000000b63da8 = 0x1000000101;
  uRam0000000000b63db0 = 0;
  pcRam0000000000b63db8 = FUN_006f92e4;
  uRam0000000000b63dc0 = 0x6f9308;
  pcRam0000000000b63dc8 = FUN_006f9330;
  uRam0000000000b63dd0 = 0x5c00000040;
  return;
}



/* Entry: 006eaa70; end: 006eaa9b;  */

undefined8 FUN_006eaa70(void)

{
  func_0x00706544(0xb29aa8,FUN_006eaa9c);
  return 0xb6cbb0;
}



/* Entry: 006eaa9c; end: 006eaadf;  */

void FUN_006eaa9c(void)

{
  uRam0000000000b6cbb0 = 0x1000000004;
  uRam0000000000b6cbb8 = 0;
  pcRam0000000000b6cbc0 = FUN_006f9388;
  uRam0000000000b6cbc8 = 0x6f93ac;
  uRam0000000000b6cbd0 = 0x6f93b4;
  uRam0000000000b6cbd8 = 0x5c00000040;
  return;
}



/* Entry: 006eaae0; end: 006eab0b;  */

undefined8 FUN_006eaae0(void)

{
  func_0x00706544(0xb29ab8,FUN_006eab0c);
  return 0xb6cbe0;
}



/* Entry: 006eab0c; end: 006eab4f;  */

void FUN_006eab0c(void)

{
  uRam0000000000b6cbe0 = 0x1400000040;
  uRam0000000000b6cbe8 = 0;
  uRam0000000000b6cbf0 = 0x6f93c4;
  uRam0000000000b6cbf8 = 0x6f93f0;
  uRam0000000000b6cc00 = 0x6f93f8;
  uRam0000000000b6cc08 = 0x6000000040;
  return;
}



/* Entry: 006eab50; end: 006eab7b;  */

undefined8 FUN_006eab50(void)

{
  func_0x00706544(0xb29ac8,FUN_006eab7c);
  return 0xb63dd8;
}



/* Entry: 006eab7c; end: 006eabbf;  */

void FUN_006eab7c(void)

{
  uRam0000000000b63dd8 = 0x1c000002a3;
  uRam0000000000b63de0 = 0;
  uRam0000000000b63de8 = 0x6f9408;
  uRam0000000000b63df0 = 0x6f943c;
  uRam0000000000b63df8 = 0x6f9444;
  uRam0000000000b63e00 = 0x7000000040;
  return;
}



/* Entry: 006eabc0; end: 006eabeb;  */

undefined8 FUN_006eabc0(void)

{
  func_0x00706544(0xb29ad8,FUN_006eabec);
  return 0xb6cc10;
}



/* Entry: 006eabec; end: 006eac2f;  */

void FUN_006eabec(void)

{
  uRam0000000000b6cc10 = 0x20000002a0;
  uRam0000000000b6cc18 = 0;
  uRam0000000000b6cc20 = 0x6f9448;
  uRam0000000000b6cc28 = 0x6f9450;
  uRam0000000000b6cc30 = 0x6f9458;
  uRam0000000000b6cc38 = 0x7000000040;
  return;
}



/* Entry: 006eac30; end: 006eac5b;  */

undefined8 FUN_006eac30(void)

{
  func_0x00706544(0xb29ae8,FUN_006eac5c);
  return 0xb6cc40;
}



/* Entry: 006eac5c; end: 006eac9f;  */

void FUN_006eac5c(void)

{
  uRam0000000000b6cc40 = 0x30000002a1;
  uRam0000000000b6cc48 = 0;
  uRam0000000000b6cc50 = 0x6f945c;
  uRam0000000000b6cc58 = 0x6f949c;
  uRam0000000000b6cc60 = 0x6f94a0;
  uRam0000000000b6cc68 = 0xd800000080;
  return;
}



/* Entry: 006eaca0; end: 006eaccb;  */

undefined8 FUN_006eaca0(void)

{
  func_0x00706544(0xb29af8,FUN_006eaccc);
  return 0xb63e08;
}



/* Entry: 006eaccc; end: 006ead0f;  */

void FUN_006eaccc(void)

{
  uRam0000000000b63e08 = 0x40000002a2;
  uRam0000000000b63e10 = 0;
  uRam0000000000b63e18 = 0x6f94a4;
  uRam0000000000b63e20 = 0x6f94ac;
  uRam0000000000b63e28 = 0x6f94b0;
  uRam0000000000b63e30 = 0xd800000080;
  return;
}



/* Entry: 006ead10; end: 006ead3b;  */

undefined8 FUN_006ead10(void)

{
  func_0x00706544(0xb29b08,FUN_006ead3c);
  return 0xb63e38;
}



/* Entry: 006ead3c; end: 006ead7f;  */

void FUN_006ead3c(void)

{
  uRam0000000000b63e38 = 0x20000003c2;
  uRam0000000000b63e40 = 0;
  uRam0000000000b63e48 = 0x6f94b4;
  uRam0000000000b63e50 = 0x6f94f4;
  uRam0000000000b63e58 = 0x6f94f8;
  uRam0000000000b63e60 = 0xd800000080;
  return;
}



/* Entry: 006ead80; end: 006eadab;  */

undefined8 FUN_006ead80(void)

{
  func_0x00706544(0xb29b18,FUN_006eadac);
  return 0xb6cc70;
}



/* Entry: 006eadac; end: 006eadef;  */

void FUN_006eadac(void)

{
  uRam0000000000b6cc70 = 0x2400000072;
  uRam0000000000b6cc78 = 0;
  uRam0000000000b6cc80 = 0x6f94fc;
  pcRam0000000000b6cc88 = FUN_006f9544;
  pcRam0000000000b6cc90 = FUN_006f9580;
  uRam0000000000b6cc98 = 0xbc00000040;
  return;
}



/* Entry: 006eadf0; end: 006eaeaf;  */

uint FUN_006eadf0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  if (param_1 == param_2) {
    return 0;
  }
  func_0x006fda04();
  if (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) {
    if (*(int *)(param_1 + 0x28) != 0) {
      return 0;
    }
    if (((*unaff_x19 == *unaff_x20) && (unaff_x19[1] != 0)) && (unaff_x20[1] != 0)) {
      plVar2 = unaff_x19 + 2;
      FUN_006e4264(plVar2,unaff_x20 + 2);
      if ((int)plVar2 == 0) {
        plVar2 = unaff_x19 + 7;
        FUN_006e4264(plVar2,unaff_x20 + 7);
        iVar1 = (int)plVar2;
        if (((iVar1 == 0) && (func_0x006fe2dc(), iVar1 != 0)) && (func_0x006fe2dc(), iVar1 != 0)) {
          FUN_006ebde4();
          return (uint)unaff_x19 ^ 1;
        }
      }
    }
  }
  return 1;
}



/* Entry: 006eaeb0; end: 006eaf0b;  */

undefined8 FUN_006eaeb0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x006fd8fc(param_1,param_2,0x43);
    (**(code **)(*param_1 + 0x38))();
    iVar1 = (int)param_1;
    func_0x006fdcc4();
    FUN_006ec0d0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  func_0x006fd880();
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006eaf0c; end: 006eafa7;  */

void FUN_006eaf0c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  ulong *unaff_x19;
  long *unaff_x21;
  
  func_0x006fd720();
  func_0x006fddec();
  iVar1 = (int)param_1;
  if (param_4 < (param_1 & 0xffffffff)) {
    func_0x006fd880();
    func_0x006fd5dc();
  }
  else {
    func_0x006fe0d8(*(undefined8 *)(*unaff_x21 + 0x18));
    (*extraout_x8)();
    if (iVar1 != 0) {
      func_0x006fe9ec();
      func_0x006fdbc4();
      (*extraout_x8_00)();
      *unaff_x19 = param_1 & 0xffffffff;
    }
  }
  return;
}



/* Entry: 006eafa8; end: 006eb00b;  */

dword * FUN_006eafa8(undefined8 param_1,undefined8 param_2,dword *param_3)

{
  undefined1 in_ZR;
  dword *pdVar1;
  dword *pdVar2;
  undefined8 extraout_x8;
  dword *unaff_x19;
  dword *pdVar3;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  func_0x006fd720();
  func_0x006fd5fc();
  uStack_38 = extraout_x8;
  FUN_006f5b5c(auStack_a8);
  func_0x006fda18(auStack_a8);
  FUN_006f5b8c();
  FUN_006f6774();
  func_0x006fd534(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x006fd5e8();
  uStack_1a8 = 0xbb67ae8584caa73b;
  uStack_1b0 = 0x6a09e667f3bcc908;
  uStack_198 = 0xa54ff53a5f1d36f1;
  uStack_1a0 = 0x3c6ef372fe94f82b;
  uStack_188 = 0x9b05688c2b3e6c1f;
  uStack_190 = 0x510e527fade682d1;
  uStack_178 = 0x5be0cd19137e2179;
  uStack_180 = 0x1f83d9abfb41bd6b;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_e0 = 0x4000000000;
  FUN_006eb66c(&uStack_1b0);
  func_0x006fe0e4();
  FUN_006f67d0();
  func_0x006fd534(uStack_d8);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  pdVar3 = &MACH_HEADER.ncmds;
  FUN_00701e90();
  if (pdVar3 != (dword *)0x0) {
    pdVar1 = pdVar3;
    FUN_006e3c80();
    *(dword **)pdVar3 = pdVar1;
    pdVar2 = pdVar1;
    FUN_006e3c80();
    *(dword **)(pdVar3 + 2) = pdVar2;
    if ((pdVar1 == (dword *)0x0) || (pdVar2 == (dword *)0x0)) {
      func_0x006eb0e8(pdVar3);
      pdVar3 = (dword *)0x0;
    }
  }
  return pdVar3;
}



/* Entry: 006eb00c; end: 006eb113;  */

dword * FUN_006eb00c(undefined8 param_1,undefined8 param_2,dword *param_3)

{
  undefined1 in_ZR;
  dword *pdVar1;
  dword *pdVar2;
  dword *pdVar3;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x006fd5e8(param_1,param_1,param_2);
  uStack_f8 = 0xbb67ae8584caa73b;
  uStack_100 = 0x6a09e667f3bcc908;
  uStack_e8 = 0xa54ff53a5f1d36f1;
  uStack_f0 = 0x3c6ef372fe94f82b;
  uStack_d8 = 0x9b05688c2b3e6c1f;
  uStack_e0 = 0x510e527fade682d1;
  uStack_c8 = 0x5be0cd19137e2179;
  uStack_d0 = 0x1f83d9abfb41bd6b;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_30 = 0x4000000000;
  FUN_006eb66c(&uStack_100);
  func_0x006fe0e4();
  FUN_006f67d0();
  func_0x006fd534(uStack_28);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  pdVar3 = &MACH_HEADER.ncmds;
  FUN_00701e90();
  if (pdVar3 != (dword *)0x0) {
    pdVar1 = pdVar3;
    FUN_006e3c80();
    *(dword **)pdVar3 = pdVar1;
    pdVar2 = pdVar1;
    FUN_006e3c80();
    *(dword **)(pdVar3 + 2) = pdVar2;
    if ((pdVar1 == (dword *)0x0) || (pdVar2 == (dword *)0x0)) {
      func_0x006eb0e8(pdVar3);
      pdVar3 = (dword *)0x0;
    }
  }
  return pdVar3;
}



/* Entry: 006eb114; end: 006eb27f;  */

undefined8
FUN_006eb114(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_2d8 [288];
  undefined1 auStack_1b8 [216];
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [72];
  
  if (((param_3 == (undefined8 *)0x0) || (plVar5 = (long *)*param_4, plVar5 == (long *)0x0)) ||
     (param_4[1] == 0)) {
    func_0x006fe094();
    goto LAB_006eb170;
  }
  puVar4 = param_3;
  func_0x006fdb2c();
  uVar6 = *puVar4;
  uVar2 = uVar6;
  FUN_006e3858();
  if (((int)uVar2 == 0) &&
     (plVar3 = plVar5, FUN_006eb280(plVar5,auStack_98,uVar6), (int)plVar3 != 0)) {
    uVar6 = param_3[1];
    uVar2 = uVar6;
    FUN_006e3858();
    if (((int)uVar2 == 0) &&
       (plVar3 = plVar5, FUN_006eb280(plVar5,auStack_e0,uVar6), (int)plVar3 != 0)) {
      plVar3 = plVar5;
      (**(code **)(*plVar5 + 0xa8))(plVar5,auStack_1b8,auStack_e0);
      iVar1 = (int)plVar3;
      if (iVar1 == 0) {
        func_0x006fe094();
        goto LAB_006eb170;
      }
      func_0x006fdcb8();
      FUN_006eb2d0();
      func_0x006fe698();
      func_0x006fe698();
      if (*(long *)(*plVar5 + 0x50) == 0) {
        func_0x006fe5c8(*(undefined8 *)(*plVar5 + 0x58));
        (*extraout_x8_00)();
        if (iVar1 != 0) goto LAB_006eb248;
      }
      else {
        func_0x006fe5c8();
        (*extraout_x8)();
LAB_006eb248:
        (**(code **)(*plVar5 + 0xb0))(plVar5,auStack_2d8,auStack_98);
        if ((int)plVar5 != 0) {
          return 1;
        }
      }
      func_0x006fe094();
      goto LAB_006eb170;
    }
  }
  func_0x006fe094();
LAB_006eb170:
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006eb280; end: 006eb2cf;  */

undefined8 FUN_006eb280(void)

{
  undefined8 uVar1;
  int unaff_w19;
  
  func_0x006fd8fc();
  func_0x006e3f20();
  if ((unaff_w19 == 0) || (func_0x006fe7b8(), unaff_w19 == 0)) {
    func_0x006fd880();
    func_0x006fd5dc();
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 006eb2d0; end: 006eb383;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 *
FUN_006eb2d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar17;
  long extraout_x9;
  uint uVar18;
  long lVar19;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar20;
  ulong uVar21;
  undefined8 in_register_00005008;
  ulong auStack_1e0 [5];
  long lStack_1b8;
  undefined8 *puStack_1b0;
  uint uStack_1a4;
  long lStack_1a0;
  long lStack_198;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 auStack_148 [5];
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined8 uStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_38;
  long *plVar10;
  
  func_0x006fe32c();
  func_0x006fd8fc();
  func_0x006fd5fc();
  uStack_38 = extraout_x8_01;
  func_0x006fe998();
  func_0x006fe580();
  *(undefined8 *)(unaff_x19 + 0x28) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  *(undefined8 *)(unaff_x19 + 0x38) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  for (lVar19 = extraout_x9; lVar19 != 0; lVar19 = lVar19 + -1) {
    *unaff_x19 = *(undefined1 *)((long)unaff_x22 + lVar19 + -1);
    unaff_x19 = unaff_x19 + 1;
  }
  uVar5 = extraout_x8_02 == extraout_x9 * 8;
  if (extraout_x8_02 < (ulong)(extraout_x9 * 8)) {
    param_5 = (undefined8 *)(long)*(int *)(unaff_x20 + 0x18);
    func_0x006fe574();
    FUN_006e977c();
  }
  puVar12 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x006fe3a4();
  puVar11 = (undefined8 *)0x0;
  FUN_006e4ca8();
  func_0x006fd534(uStack_38);
  if ((bool)uVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar14 = (undefined8 *)(long)*(int *)(param_2 + 3);
  uVar15 = param_2[6];
  pcStack_88 = FUN_006eb384;
  uVar21 = uVar15;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  puVar8 = puVar14;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar14 ||
      puVar14 != (undefined8 *)(long)*(int *)(uVar21 + 0x20)) {
LAB_006e5c40:
    puVar14 = puVar12;
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar14 << 1);
    uVar5 = puVar12 == param_5;
    uStack_b8 = extraout_x8;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_148,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    param_5 = auStack_148;
    puVar8 = unaff_x22;
    FUN_006e8214();
    puVar12 = puVar14;
    if ((int)puVar11 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_b8);
    if ((bool)uVar5) {
      return puVar11;
    }
  }
  ___stack_chk_fail();
  puVar13 = auStack_1e0;
  pcStack_158 = FUN_006e5c48;
  ppuStack_160 = &puStack_90;
  func_0x006fd5fc();
  lStack_198 = extraout_x8_00;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_5 ||
      param_5 != (undefined8 *)(long)*(int *)(puVar8 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar14 = (undefined8 *)puVar8[3];
    param_5 = (undefined8 *)((long)param_5 << 3);
    func_0x006e3440(auStack_1e0);
    uVar5 = auStack_1e0[0] - 2 == 0;
    uVar21 = auStack_1e0[0] - 2;
    if (auStack_1e0[0] < 2) {
      auStack_1e0[0] = auStack_1e0[0] | 0xfffffffffffffffe;
      uVar20 = 1;
      do {
        uVar5 = uVar20 == uVar15;
        uVar21 = auStack_1e0[0];
        if (uVar15 <= uVar20) break;
        uVar17 = auStack_1e0[uVar20];
        auStack_1e0[uVar20] = uVar17 - 1;
        uVar20 = uVar20 + 1;
      } while (uVar17 == 0);
    }
    auStack_1e0[0] = uVar21;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_198);
    puVar11 = unaff_x22;
    puVar8 = puVar13;
    unaff_x23 = auStack_1e0;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar16 = FUN_006e5d10;
  func_0x006fec68();
  pppuStack_120 = &ppuStack_160;
  pcStack_118 = pcVar16;
  if ((*(int *)(puVar8 + 1) < 1) || ((*(byte *)*puVar8 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar8 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar14 + 2) == 0) {
    func_0x006feb2c();
    puVar12 = puVar11;
    func_0x006fd9d0();
    iVar7 = (int)puVar12;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_5 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar8 != 0) {
          *(undefined4 *)(puVar11 + 2) = 0;
          *(undefined4 *)(puVar11 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar12 = puVar11;
        FUN_006e35dc(puVar11,1);
        if ((int)puVar12 != 0) {
          *(undefined4 *)(puVar11 + 2) = 0;
          *(undefined8 *)*puVar11 = 1;
          *(undefined4 *)(puVar11 + 1) = 1;
          puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar12;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar8,unaff_x23);
        unaff_x24 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
          uVar21 = 0;
          uVar18 = 0;
          lVar19 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar8 = (undefined8 *)0x0;
      }
      puStack_1b0 = puVar8;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar19 = (long)(int)uVar2;
      uVar18 = 3;
      if (iVar7 != 1) {
        uVar18 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar18;
      }
      uVar18 = 5;
      if (iVar7 < 5) {
        uVar18 = uVar3;
      }
      uStack_1a4 = 6;
      if (iVar7 < 0xf) {
        uStack_1a4 = uVar18;
      }
      uVar3 = 1 << (ulong)uStack_1a4;
      auStack_1e0[1] = (ulong)uVar3;
      uVar21 = (ulong)uStack_1a4;
      auStack_1e0[0] = lVar19 << 1;
      uVar18 = (uint)auStack_1e0[0];
      if ((int)(uint)auStack_1e0[0] <= (int)uVar3) {
        uVar18 = uVar3;
      }
      uVar18 = (uVar18 + (uVar2 << uVar21)) * 8;
      uVar15 = (ulong)(int)(uVar18 + 0x40);
      FUN_00701e90();
      if (uVar15 == 0) {
        puVar11 = (undefined8 *)0x0;
        uVar21 = 0;
        lVar19 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar15 & 0xffffffffffffffc0) + 0x40;
      auStack_1e0[2] = uVar15;
      auStack_1e0[3] = (ulong)uVar18;
      auStack_1e0[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_1a0 = lVar1 + (long)(int)(uVar2 << uVar21) * 8 + lVar19 * 8;
      lStack_198 = auStack_1e0[4] << 0x20;
      puVar9 = &stack0xfffffffffffffe78;
      lStack_1b8 = lVar1;
      FUN_006e60ec(puVar9,unaff_x24,unaff_x23);
      if ((int)puVar9 == 0) {
        puVar11 = (undefined8 *)0x0;
        uVar18 = (uint)auStack_1e0[3];
        lVar19 = lStack_1b8;
        uVar21 = auStack_1e0[2];
        goto LAB_006e60b0;
      }
      plVar10 = &lStack_1a0;
      func_0x006fe0c0(plVar10,puVar14);
      iVar6 = (int)plVar10;
      func_0x006e5778();
      lVar1 = lStack_1b8;
      uVar21 = auStack_1e0[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        puVar11 = (undefined8 *)0x0;
        lVar19 = lStack_1b8;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar19 * 8,lVar19,&lStack_1a0);
        uVar15 = auStack_1e0[1];
        if (1 < uStack_1a4) {
          puVar9 = &stack0xfffffffffffffe78;
          func_0x006fdaf8(puVar9,&lStack_1a0,&lStack_1a0);
          if ((int)puVar9 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_1b8 + auStack_1e0[0] * 8,lVar19,&stack0xfffffffffffffe78);
          auStack_1e0[0] = lVar19 << 3;
          for (uVar20 = 3; uVar20 < uVar15; uVar20 = uVar20 + 1) {
            puVar9 = &stack0xfffffffffffffe78;
            func_0x006fdaf8(auStack_1e0[0],puVar9,&lStack_1a0,&stack0xfffffffffffffe78);
            if ((int)puVar9 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar19 = lStack_1b8;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_1a4 != 0) {
          iVar7 = iVar6 / (int)uStack_1a4;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_1a4; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(param_5,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xfffffffffffffe78;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(puVar11,&stack0xfffffffffffffe78);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_1a4;
          for (iVar7 = 0; uStack_1a4 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar9 = &stack0xfffffffffffffe78;
            func_0x006fdaf8(puVar9,&stack0xfffffffffffffe78,&stack0xfffffffffffffe78);
            if ((int)puVar9 == 0) goto LAB_006e60a4;
            func_0x006e5334(param_5,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_1a0;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar9 = &stack0xfffffffffffffe78;
          func_0x006fdaf8(puVar9,&stack0xfffffffffffffe78,&lStack_1a0);
          iVar6 = iVar4;
          iVar7 = (int)puVar9;
        }
LAB_006e60a4:
        puVar11 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar18 = (uint)auStack_1e0[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar21 == 0) && (lVar19 != 0)) {
        FUN_00701f08(lVar19,(long)(int)uVar18);
      }
      func_0x00701ed0(uVar21);
      return puVar11;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006eb384; end: 006eb393;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006eb384(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  code *pcVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  uint uVar17;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong auStack_160 [5];
  long lStack_138;
  undefined8 *puStack_130;
  uint uStack_124;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 auStack_c8 [5];
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_38;
  long *plVar11;
  
  puVar13 = (undefined8 *)(long)*(int *)(param_1 + 0x18);
  uVar14 = *(ulong *)(param_1 + 0x30);
  uVar20 = uVar14;
  func_0x006fd5fc();
  puVar9 = puVar13;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar13 ||
      puVar13 != (undefined8 *)(long)*(int *)(uVar20 + 0x20)) {
LAB_006e5c40:
    puVar13 = param_3;
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar13 << 1);
    uVar5 = param_3 == param_4;
    uStack_38 = extraout_x8;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_c8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    param_4 = auStack_c8;
    puVar9 = unaff_x22;
    FUN_006e8214();
    param_3 = puVar13;
    if ((int)param_2 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_38);
    if ((bool)uVar5) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  puVar12 = auStack_160;
  pcStack_d8 = FUN_006e5c48;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  lStack_118 = extraout_x8_00;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_4 ||
      param_4 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar13 = (undefined8 *)puVar9[3];
    param_4 = (undefined8 *)((long)param_4 << 3);
    func_0x006e3440(auStack_160);
    uVar5 = auStack_160[0] - 2 == 0;
    uVar20 = auStack_160[0] - 2;
    if (auStack_160[0] < 2) {
      auStack_160[0] = auStack_160[0] | 0xfffffffffffffffe;
      uVar19 = 1;
      do {
        uVar5 = uVar19 == uVar14;
        uVar20 = auStack_160[0];
        if (uVar14 <= uVar19) break;
        uVar16 = auStack_160[uVar19];
        auStack_160[uVar19] = uVar16 - 1;
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    auStack_160[0] = uVar20;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_118);
    param_2 = unaff_x22;
    puVar9 = puVar12;
    unaff_x23 = auStack_160;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar15 = FUN_006e5d10;
  func_0x006fec68();
  ppuStack_a0 = &puStack_e0;
  pcStack_98 = pcVar15;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar13 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = param_2;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_4 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_2 + 2) = 0;
          *(undefined4 *)(param_2 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar9 = param_2;
        FUN_006e35dc(param_2,1);
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_2 + 2) = 0;
          *(undefined8 *)*param_2 = 1;
          *(undefined4 *)(param_2 + 1) = 1;
          puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar9;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          param_2 = (undefined8 *)0x0;
          uVar20 = 0;
          uVar17 = 0;
          lVar18 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_130 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar18 = (long)(int)uVar2;
      uVar17 = 3;
      if (iVar7 != 1) {
        uVar17 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar17;
      }
      uVar17 = 5;
      if (iVar7 < 5) {
        uVar17 = uVar3;
      }
      uStack_124 = 6;
      if (iVar7 < 0xf) {
        uStack_124 = uVar17;
      }
      uVar3 = 1 << (ulong)uStack_124;
      auStack_160[1] = (ulong)uVar3;
      uVar20 = (ulong)uStack_124;
      auStack_160[0] = lVar18 << 1;
      uVar17 = (uint)auStack_160[0];
      if ((int)(uint)auStack_160[0] <= (int)uVar3) {
        uVar17 = uVar3;
      }
      uVar17 = (uVar17 + (uVar2 << uVar20)) * 8;
      uVar14 = (ulong)(int)(uVar17 + 0x40);
      FUN_00701e90();
      if (uVar14 == 0) {
        param_2 = (undefined8 *)0x0;
        uVar20 = 0;
        lVar18 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar14 & 0xffffffffffffffc0) + 0x40;
      auStack_160[2] = uVar14;
      auStack_160[3] = (ulong)uVar17;
      auStack_160[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_120 = lVar1 + (long)(int)(uVar2 << uVar20) * 8 + lVar18 * 8;
      lStack_118 = auStack_160[4] << 0x20;
      puVar10 = &stack0xfffffffffffffef8;
      lStack_138 = lVar1;
      FUN_006e60ec(puVar10,unaff_x24,unaff_x23);
      if ((int)puVar10 == 0) {
        param_2 = (undefined8 *)0x0;
        uVar17 = (uint)auStack_160[3];
        lVar18 = lStack_138;
        uVar20 = auStack_160[2];
        goto LAB_006e60b0;
      }
      plVar11 = &lStack_120;
      func_0x006fe0c0(plVar11,puVar13);
      iVar6 = (int)plVar11;
      func_0x006e5778();
      lVar1 = lStack_138;
      uVar20 = auStack_160[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        param_2 = (undefined8 *)0x0;
        lVar18 = lStack_138;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar18 * 8,lVar18,&lStack_120);
        uVar14 = auStack_160[1];
        if (1 < uStack_124) {
          puVar10 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar10,&lStack_120,&lStack_120);
          if ((int)puVar10 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_138 + auStack_160[0] * 8,lVar18,&stack0xfffffffffffffef8);
          auStack_160[0] = lVar18 << 3;
          for (uVar19 = 3; uVar19 < uVar14; uVar19 = uVar19 + 1) {
            puVar10 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(auStack_160[0],puVar10,&lStack_120,&stack0xfffffffffffffef8);
            if ((int)puVar10 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar18 = lStack_138;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_124 != 0) {
          iVar7 = iVar6 / (int)uStack_124;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_124; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(param_4,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xfffffffffffffef8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(param_2,&stack0xfffffffffffffef8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_124;
          for (iVar7 = 0; uStack_124 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar10 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(puVar10,&stack0xfffffffffffffef8,&stack0xfffffffffffffef8);
            if ((int)puVar10 == 0) goto LAB_006e60a4;
            func_0x006e5334(param_4,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_120;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar10 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar10,&stack0xfffffffffffffef8,&lStack_120);
          iVar6 = iVar4;
          iVar7 = (int)puVar10;
        }
LAB_006e60a4:
        param_2 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar17 = (uint)auStack_160[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar20 == 0) && (lVar18 != 0)) {
        FUN_00701f08(lVar18,(long)(int)uVar17);
      }
      func_0x00701ed0(uVar20);
      return param_2;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006eb394; end: 006eb4ff;  */

long * FUN_006eb394(uint param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  code *extraout_x8;
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [288];
  
  func_0x006fda04();
  *param_2 = 0;
  func_0x006fe998();
  if (param_1 < 0xa0) {
    func_0x006fe094();
    func_0x006fd5dc();
  }
  else {
    func_0x006fdcb8();
    FUN_006ec820();
    if ((param_1 != 0) && (plVar1 = unaff_x19, FUN_006ec8f8(), (int)plVar1 != 0)) {
      plVar1 = unaff_x19;
      func_0x006ee734();
      if ((int)plVar1 == 0) {
        func_0x006ee760();
        FUN_006eb384();
        func_0x006fe0e4();
        func_0x006fe200();
        FUN_006eb2d0();
        func_0x006febb8();
        func_0x006fe3a4();
        FUN_006ee778();
        func_0x006fdcb8(*(undefined8 *)(*unaff_x19 + 0xa0));
        (*extraout_x8)();
        func_0x006fe1d8();
        FUN_006ee7cc();
        func_0x006febb8();
        func_0x006fe3a4();
        FUN_006eb384();
        plVar1 = unaff_x19;
        func_0x006ee734();
        if ((int)plVar1 == 0) {
          func_0x006eb098();
          if (plVar1 != (long *)0x0) {
            lVar2 = *plVar1;
            FUN_006e3edc(lVar2,auStack_170,(long)(int)unaff_x19[3]);
            if ((int)lVar2 != 0) {
              lVar2 = plVar1[1];
              FUN_006e3edc(lVar2,auStack_1b8,(long)(int)unaff_x19[3]);
              if ((int)lVar2 != 0) {
                return plVar1;
              }
            }
          }
          func_0x006eb0e8(plVar1);
          return (long *)0x0;
        }
      }
      *unaff_x20 = 1;
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 006eb500; end: 006eb62f;  */

undefined8 * FUN_006eb500(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *puVar2;
  long lVar3;
  int iStack_1ac;
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [64];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x006fd8fc();
  func_0x006fd5fc();
  uStack_48 = extraout_x8;
  if ((param_3[5] == 0) || (*(long *)(param_3[5] + 0x28) == 0)) {
    puVar2 = (undefined8 *)*param_3;
    if ((puVar2 != (undefined8 *)0x0) && (lVar3 = param_3[2], lVar3 != 0)) {
      uStack_118 = 0xbb67ae8584caa73b;
      uStack_120 = 0x6a09e667f3bcc908;
      uStack_108 = 0xa54ff53a5f1d36f1;
      uStack_110 = 0x3c6ef372fe94f82b;
      uStack_f8 = 0x9b05688c2b3e6c1f;
      uStack_100 = 0x510e527fade682d1;
      uStack_e8 = 0x5be0cd19137e2179;
      uStack_f0 = 0x1f83d9abfb41bd6b;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_50 = 0x4000000000;
      FUN_006eb66c(&uStack_120,lVar3 + 0x18,(long)*(int *)(puVar2 + 3) << 3);
      func_0x006fdbc4(&uStack_120);
      FUN_006eb66c();
      FUN_006f67d0(auStack_160,&uStack_120);
      do {
        puVar1 = puVar2;
        FUN_006eb73c(puVar2,auStack_1a8,auStack_160);
        if ((int)puVar1 == 0) goto LAB_006eb604;
        puVar1 = puVar2;
        FUN_006eb394(puVar2,&iStack_1ac,lVar3 + 0x18,auStack_1a8);
      } while ((puVar1 == (undefined8 *)0x0) && (iStack_1ac != 0));
      goto LAB_006eb608;
    }
    func_0x006fe094();
  }
  else {
    func_0x006fe094();
  }
  func_0x006fd5dc();
LAB_006eb604:
  puVar1 = (undefined8 *)0x0;
LAB_006eb608:
  func_0x006fd534(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar1[1] = 0xbb67ae8584caa73b;
    *puVar1 = 0x6a09e667f3bcc908;
    puVar1[3] = 0xa54ff53a5f1d36f1;
    puVar1[2] = 0x3c6ef372fe94f82b;
    puVar1[5] = 0x9b05688c2b3e6c1f;
    puVar1[4] = 0x510e527fade682d1;
    puVar1[7] = 0x5be0cd19137e2179;
    puVar1[6] = 0x1f83d9abfb41bd6b;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0x1a] = 0x4000000000;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  return puVar1;
}



/* Entry: 006eb630; end: 006eb66b;  */

undefined8 FUN_006eb630(undefined8 *param_1)

{
  param_1[1] = 0xbb67ae8584caa73b;
  *param_1 = 0x6a09e667f3bcc908;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[4] = 0x510e527fade682d1;
  param_1[7] = 0x5be0cd19137e2179;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x1a] = 0x4000000000;
  return 1;
}



/* Entry: 006eb66c; end: 006eb73b;  */

undefined8 FUN_006eb66c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar3;
  
  if (param_3 == 0) {
    return 1;
  }
  func_0x006fd94c();
  lVar1 = param_1 + 0x50;
  uVar3 = *(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x40) = uVar3 + param_3 * 8;
  *(ulong *)(param_1 + 0x48) =
       *(long *)(param_1 + 0x48) + (param_3 >> 0x3d) + (ulong)CARRY8(uVar3,param_3 * 8);
  uVar2 = (ulong)*(uint *)(param_1 + 0xd0);
  uVar3 = unaff_x20;
  if (*(uint *)(param_1 + 0xd0) != 0) {
    uVar3 = unaff_x20 - (0x80 - uVar2);
    if (unaff_x20 < 0x80 - uVar2) {
      func_0x006fda18(lVar1 + uVar2);
      func_0x006e3440();
      uVar3 = (ulong)(uint)(*(int *)(unaff_x19 + 0xd0) + (int)unaff_x20);
      goto LAB_006eb724;
    }
    func_0x006fde2c(lVar1 + uVar2);
    *(undefined4 *)(unaff_x19 + 0xd0) = 0;
    func_0x006fe958();
  }
  if (0x7f < uVar3) {
    func_0x006fdab0();
    FUN_006f6878();
    uVar3 = uVar3 & 0x7f;
  }
  if (uVar3 == 0) {
    return 1;
  }
  func_0x006fda18(lVar1);
  func_0x006e3440();
LAB_006eb724:
  *(int *)(unaff_x19 + 0xd0) = (int)uVar3;
  return 1;
}



/* Entry: 006eb73c; end: 006eb753;  */

void FUN_006eb73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long unaff_x22;
  uint uVar5;
  ulong in_stack_00000000;
  long in_stack_00000008;
  long lVar4;
  
  func_0x006fdc38(param_2,1,*(undefined8 *)(param_1 + 0x10),(long)*(int *)(param_1 + 0x18),param_3);
  func_0x006fdbac();
  iVar3 = (int)&stack0x00000008;
  FUN_006e9430();
  if (iVar3 != 0) {
    lVar1 = unaff_x22 + in_stack_00000008 * 8;
    func_0x006fd9c0(lVar1);
    uVar5 = 0xffffff9c;
    do {
      bVar2 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      if (bVar2) {
        func_0x006fd894();
        func_0x006fd5dc();
        return;
      }
      FUN_006e94a4();
      *(ulong *)(lVar1 + -8) = *(ulong *)(lVar1 + -8) & in_stack_00000000;
      lVar4 = unaff_x22;
      func_0x006fda18();
      iVar3 = (int)lVar4;
      FUN_006e92f4();
    } while (iVar3 == 0);
  }
  return;
}



/* Entry: 006eb754; end: 006eb77f;  */

undefined8 FUN_006eb754(void)

{
  func_0x00706544(0xb29b28,FUN_006eb780);
  return 0xb6cca0;
}



/* Entry: 006eb780; end: 006eb8d7;  */

void FUN_006eb780(void)

{
  uRam0000000000b6cca0 = 0x2cc;
  puRam0000000000b6cca8 = &UNK_00836e78;
  uRam0000000000b6ccb0 = 5;
  puRam0000000000b6ccb8 = &UNK_00916778;
  uRam0000000000b6ccc0 = 0x42;
  puRam0000000000b6ccc8 = &UNK_00836e7d;
  FUN_006eb8d8();
  uRam0000000000b6ccd0 = 0xb63ec0;
  uRam0000000000b6ccd8 = 0x2cb;
  puRam0000000000b6cce0 = &UNK_00837009;
  uRam0000000000b6cce8 = 5;
  puRam0000000000b6ccf0 = &UNK_00916783;
  uRam0000000000b6ccf8 = 0x30;
  puRam0000000000b6cd00 = &UNK_0083700e;
  FUN_006eb8d8();
  uRam0000000000b6cd08 = 0xb63ec0;
  uRam0000000000b6cd10 = 0x19f;
  puRam0000000000b6cd18 = &UNK_0083712e;
  uRam0000000000b6cd20 = 8;
  puRam0000000000b6cd28 = &UNK_0091678e;
  uRam0000000000b6cd30 = 0x20;
  puRam0000000000b6cd38 = &UNK_00837136;
  func_0x00706544(0xb29e10,0x6ee678);
  uRam0000000000b6cd40 = 0xb64030;
  uRam0000000000b6cd48 = 0x2c9;
  puRam0000000000b6cd50 = &UNK_008371f6;
  uRam0000000000b6cd58 = 5;
  puRam0000000000b6cd60 = &UNK_00916799;
  uRam0000000000b6cd68 = 0x1c;
  puRam0000000000b6cd70 = &UNK_008371fb;
  func_0x00706544(0xb29e00,FUN_006ee5c8);
  uRam0000000000b6cd78 = 0xb63f78;
  return;
}



/* Entry: 006eb8d8; end: 006eb8eb;  */

void FUN_006eb8d8(void)

{
  int iVar1;
  
  iVar1 = 0xb29cd8;
  _pthread_once(0xb29cd8,FUN_006ed814);
  if (iVar1 != 0) {
    _abort();
    FUN_0070673c();
    if (iRam0000000000b6cdd0 != 0) {
      _pthread_getspecific();
    }
    return;
  }
  return;
}



/* Entry: 006eb8ec; end: 006eb953;  */

void FUN_006eb8ec(long *param_1)

{
  int iVar1;
  
  if ((param_1 != (long *)0x0) && ((int)param_1[5] == 0)) {
    iVar1 = (int)param_1 + 0x130;
    func_0x00705a98();
    if (iVar1 != 0) {
      if (*(long *)(*param_1 + 8) != 0) {
        func_0x006fe7d4();
      }
      FUN_006ebd54(param_1[1],0);
      FUN_006e3cd0(param_1 + 2);
      FUN_006e5880(param_1[6]);
      if (param_1 != (long *)0x0) {
        param_1 = param_1 + -1;
        FUN_00701f08(param_1,*param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(param_1);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 006eb954; end: 006ebd53;  */

dword * FUN_006eb954(int param_1)

{
  long lVar1;
  dword *pdVar2;
  undefined8 *puVar3;
  dword *pdVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  dword *pdVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_1a0 [72];
  undefined1 auStack_158 [72];
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_006eb754();
  lVar13 = 0;
  puVar3 = (undefined8 *)0xb6ccd0;
  while( true ) {
    if (lVar13 == 0x20) {
      func_0x006fd880();
      func_0x006fd5dc();
      return (dword *)0x0;
    }
    if (*(int *)(puVar3 + -6) == param_1) break;
    lVar13 = lVar13 + 8;
    puVar3 = puVar3 + 7;
  }
  lVar1 = 0xb29b38;
  func_0x007064d4(0xb29b38);
  pdVar4 = *(dword **)(lVar13 + 0xb63e68);
  func_0x0070650c();
  if (pdVar4 != (dword *)0x0) {
    return pdVar4;
  }
  FUN_006e4450();
  if (lVar1 == 0) {
    pdVar4 = (dword *)0x0;
    lVar5 = 0;
    lVar6 = 0;
    lVar12 = 0;
    lVar8 = 0;
    goto LAB_006ebc40;
  }
  uVar10 = (ulong)*(byte *)(puVar3 + -2);
  lVar11 = puVar3[-1];
  lVar5 = lVar11;
  func_0x006fdaa4();
  if (lVar5 == 0) {
    lVar6 = 0;
LAB_006ebc34:
    lVar8 = 0;
LAB_006ebc3c:
    lVar12 = 0;
    pdVar4 = (dword *)0x0;
LAB_006ebc40:
    func_0x006fd880();
    func_0x006fd5dc();
  }
  else {
    lVar6 = lVar11 + uVar10;
    func_0x006fdaa4();
    if (lVar6 == 0) goto LAB_006ebc34;
    lVar8 = lVar11 + uVar10 * 2;
    func_0x006fdaa4();
    if (lVar8 == 0) goto LAB_006ebc3c;
    lVar12 = lVar11 + uVar10 * 5;
    func_0x006fdaa4();
    if (lVar12 == 0) goto LAB_006ebc3c;
    plVar7 = (long *)*puVar3;
    if (plVar7 == (long *)0x0) {
      func_0x006fd880();
LAB_006ebcf8:
      func_0x006fd5dc();
      pdVar4 = (dword *)0x0;
      goto LAB_006ebc40;
    }
    if (*plVar7 == 0) {
      func_0x006fd880();
      goto LAB_006ebcf8;
    }
    pdVar4 = &section_00000158.offset;
    FUN_00701e90();
    if (pdVar4 == (dword *)0x0) {
      func_0x006fd520(0xf);
      goto LAB_006ebc40;
    }
    _bzero(pdVar4,0x188);
    pdVar4[0x4c] = 1;
    *(long **)pdVar4 = plVar7;
    pdVar9 = pdVar4 + 4;
    *(undefined8 *)pdVar9 = 0;
    *(undefined8 *)(pdVar4 + 6) = 0;
    *(undefined8 *)(pdVar4 + 8) = 0;
    pdVar2 = pdVar4;
    (*(code *)*plVar7)();
    if ((int)pdVar2 == 0) {
      func_0x00701ed0(pdVar4);
      pdVar4 = (dword *)0x0;
      goto LAB_006ebc40;
    }
    pdVar2 = pdVar4;
    (**(code **)(*(long *)pdVar4 + 0x10))(pdVar4,lVar5,lVar6,lVar8,lVar1);
    if ((int)pdVar2 == 0) goto LAB_006ebc40;
    pdVar2 = pdVar4;
    (**(code **)(*(long *)pdVar4 + 0x88))(pdVar4,auStack_158,lVar11 + uVar10 * 3,uVar10);
    if (((((int)pdVar2 != 0) &&
         (pdVar2 = pdVar4,
         (**(code **)(*(long *)pdVar4 + 0x88))(pdVar4,auStack_1a0,lVar11 + uVar10 * 4,uVar10),
         (int)pdVar2 != 0)) &&
        (pdVar2 = pdVar4, FUN_006ec368(pdVar4,auStack_110,auStack_158,auStack_1a0), (int)pdVar2 != 0
        )) && (pdVar2 = pdVar9, func_0x006fe690(), pdVar2 != (dword *)0x0)) {
      FUN_006e374c(pdVar9);
      FUN_006e5880(*(undefined8 *)(pdVar4 + 0xc));
      FUN_006e6234(pdVar9,0);
      *(dword **)(pdVar4 + 0xc) = pdVar9;
      if (pdVar9 != (dword *)0x0) {
        lVar1 = (long)(pdVar4 + 0xe);
        FUN_006e4264(lVar1,lVar12);
        pdVar4[0x39] = (uint)(0 < (int)lVar1);
        if ((int)lVar1 < 1) {
LAB_006ebbb0:
          pdVar2 = pdVar4;
          FUN_006ebef0();
          *(dword **)(pdVar4 + 2) = pdVar2;
          if (pdVar2 != (dword *)0x0) {
            func_0x006fd840(pdVar2 + 2,auStack_110);
            func_0x006fd840(pdVar2 + 0x14,auStack_c8);
            func_0x006fd840(pdVar2 + 0x26,pdVar4 + 0x50);
            func_0x00705a98(pdVar4 + 0x4c);
            goto LAB_006ebc58;
          }
        }
        else {
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          puVar3 = &uStack_80;
          FUN_006e3994(puVar3,pdVar4 + 0xe,lVar12);
          if ((int)puVar3 == 0) {
            FUN_006e3cd0(&uStack_80);
          }
          else {
            lVar1 = (long)(pdVar4 + 0x3a);
            func_0x006e3f20(lVar1,(long)(int)pdVar4[0x10],&uStack_80);
            FUN_006e3cd0(&uStack_80);
            if ((int)lVar1 != 0) goto LAB_006ebbb0;
          }
        }
      }
    }
  }
  FUN_006eb8ec(pdVar4);
  pdVar4 = (dword *)0x0;
LAB_006ebc58:
  func_0x006fdda8();
  FUN_006e3cd0(lVar5);
  FUN_006e3cd0(lVar6);
  FUN_006e3cd0(lVar8);
  FUN_006e3cd0(lVar12);
  if (pdVar4 == (dword *)0x0) {
    return (dword *)0x0;
  }
  func_0x007064f0(0xb29b38);
  pdVar2 = *(dword **)(lVar13 + 0xb63e68);
  pdVar9 = pdVar4;
  if (*(dword **)(lVar13 + 0xb63e68) == (dword *)0x0) {
    *(dword **)(lVar13 + 0xb63e68) = pdVar4;
    pdVar4[10] = param_1;
    pdVar9 = (dword *)0x0;
    pdVar2 = pdVar4;
  }
  func_0x00706528(0xb29b38);
  FUN_006eb8ec(pdVar9);
  return pdVar2;
}



/* Entry: 006ebd54; end: 006ebdb3;  */

void FUN_006ebd54(undefined8 *param_1,int param_2)

{
  long *plVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 != 0) {
    FUN_006eb8ec(*param_1);
  }
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = param_1 + -1;
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 006ebdb4; end: 006ebde3;  */

bool FUN_006ebdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00701f80(param_2,param_3,(long)*(int *)(param_1 + 0x40) << 3);
  return (int)param_2 == 0;
}



/* Entry: 006ebde4; end: 006ebeef;  */

uint FUN_006ebde4(long *param_1)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_w20;
  
  func_0x006fd9b0();
  pcVar1 = *(code **)(*param_1 + 0x70);
  pcVar2 = *(code **)(*param_1 + 0x78);
  (*pcVar2)();
  func_0x006fe3e4();
  (*pcVar1)();
  (*pcVar2)();
  (*pcVar1)();
  func_0x006fdb74();
  uVar3 = unaff_w20;
  FUN_006ed7f8();
  func_0x006fe3dc();
  func_0x006fe1d8();
  func_0x006fe400();
  func_0x006fe400();
  func_0x006febb8();
  func_0x006fe400();
  func_0x006fe400();
  func_0x006fdb74();
  FUN_006ed7f8();
  func_0x006fe3dc();
  uVar3 = unaff_w20 | uVar3;
  func_0x006fe3dc();
  uVar4 = unaff_w20;
  func_0x006fe3dc();
  return (unaff_w20 & (uVar3 ^ 0xffffffff) & uVar4 | (uVar4 | unaff_w20) ^ 0xffffffff) & 1;
}



/* Entry: 006ebef0; end: 006ebf83;  */

qword * FUN_006ebef0(qword param_1)

{
  qword *pqVar1;
  
  if (param_1 == 0) {
    func_0x006fd880();
    func_0x006fd5dc();
    pqVar1 = (qword *)0x0;
  }
  else {
    pqVar1 = &section_000000b8.size;
    FUN_00701e90();
    if (pqVar1 == (qword *)0x0) {
      func_0x006fd520(0xf);
    }
    else {
      func_0x006ebd84(param_1);
      *pqVar1 = param_1;
      pqVar1[2] = 0;
      pqVar1[1] = 0;
      pqVar1[4] = 0;
      pqVar1[3] = 0;
      pqVar1[6] = 0;
      pqVar1[5] = 0;
      pqVar1[8] = 0;
      pqVar1[7] = 0;
      pqVar1[9] = 0;
      pqVar1[0xb] = 0;
      pqVar1[10] = 0;
      pqVar1[0xd] = 0;
      pqVar1[0xc] = 0;
      pqVar1[0xf] = 0;
      pqVar1[0xe] = 0;
      pqVar1[0x11] = 0;
      pqVar1[0x10] = 0;
      pqVar1[0x12] = 0;
      pqVar1[0x14] = 0;
      pqVar1[0x13] = 0;
      pqVar1[0x16] = 0;
      pqVar1[0x15] = 0;
      pqVar1[0x18] = 0;
      pqVar1[0x17] = 0;
      pqVar1[0x1a] = 0;
      pqVar1[0x19] = 0;
      pqVar1[0x1b] = 0;
    }
  }
  return pqVar1;
}



/* Entry: 006ebf84; end: 006ebf8b;  */

void FUN_006ebf84(undefined8 *param_1)

{
  long *plVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_006eb8ec(*param_1);
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  plVar1 = param_1 + -1;
  FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(plVar1);
  return;
}



/* Entry: 006ebf8c; end: 006ec073;  */

undefined8 FUN_006ebf8c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x006fd8fc();
  iVar1 = (int)*param_1;
  func_0x006fdb6c();
  if (iVar1 == 0) {
    if (unaff_x20 != unaff_x19) {
      func_0x006fd840(unaff_x20 + 8,unaff_x19 + 8);
      func_0x006fd840(unaff_x20 + 0x50,unaff_x19 + 0x50);
      func_0x006fd840(unaff_x20 + 0x98,unaff_x19 + 0x98);
    }
    uVar2 = 1;
  }
  else {
    func_0x006fd710();
    func_0x006fd5dc();
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 006ec074; end: 006ec093;  */

bool FUN_006ec074(long param_1,long param_2)

{
  FUN_006ed7cc(param_1,param_2 + 0x90);
  return param_1 == 0;
}



/* Entry: 006ec094; end: 006ec0cf;  */

uint FUN_006ec094(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  func_0x006fda04();
  func_0x006fdb6c();
  if ((int)param_1 != 0) {
    func_0x006fd710();
    func_0x006fd5dc();
    return 0;
  }
  func_0x006fea1c();
  func_0x006fda04();
  pcVar1 = *(code **)(*param_1 + 0x70);
  (**(code **)(*param_1 + 0x78))();
  func_0x006fe7e8();
  func_0x006fe7e8();
  (*pcVar1)(unaff_x19,auStack_160,auStack_118,auStack_d0);
  if (*(int *)(unaff_x19 + 0xe0) == 0) {
    (*pcVar1)(unaff_x19,auStack_d0,auStack_118,unaff_x19 + 0x50);
    func_0x006fdb74();
    func_0x006fd908();
  }
  else {
    func_0x006fd908();
    func_0x006fd908();
    func_0x006fdb74();
    func_0x006fdc74();
  }
  (*pcVar1)(unaff_x19,auStack_88,auStack_88,unaff_x20);
  func_0x006fe3a4();
  (*pcVar1)();
  func_0x006fdb74();
  func_0x006fd908();
  func_0x006fe7e8();
  func_0x006fdc74();
  lVar2 = unaff_x19;
  FUN_006ed7cc(unaff_x19,auStack_d0);
  FUN_006ed7cc(unaff_x19,unaff_x20 + 0x90);
  return ((uint)unaff_x19 & (uint)lVar2 ^ 0xffffffff) & 1;
}



/* Entry: 006ec0d0; end: 006ec1f3;  */

uint FUN_006ec0d0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  
  func_0x006fda04();
  pcVar1 = *(code **)(*param_1 + 0x70);
  (**(code **)(*param_1 + 0x78))();
  func_0x006fe7e8();
  func_0x006fe7e8();
  (*pcVar1)();
  if (*(int *)(unaff_x19 + 0xe0) == 0) {
    (*pcVar1)();
    func_0x006fdb74();
    func_0x006fd908();
  }
  else {
    func_0x006fd908();
    func_0x006fd908();
    func_0x006fdb74();
    func_0x006fdc74();
  }
  (*pcVar1)();
  func_0x006fe3a4();
  (*pcVar1)();
  func_0x006fdb74();
  func_0x006fd908();
  func_0x006fe7e8();
  func_0x006fdc74();
  lVar2 = unaff_x19;
  FUN_006ed7cc();
  FUN_006ed7cc();
  return ((uint)unaff_x19 & (uint)lVar2 ^ 0xffffffff) & 1;
}



/* Entry: 006ec1f4; end: 006ec303;  */

uint FUN_006ec1f4(int param_1)

{
  uint uVar1;
  uint unaff_w20;
  
  func_0x006fd9b0();
  func_0x006fdb6c();
  if ((param_1 == 0) && (uVar1 = unaff_w20, FUN_006eadf0(), uVar1 == 0)) {
    FUN_006ebde4();
    uVar1 = unaff_w20 ^ 1;
  }
  else {
    func_0x006fd710();
    func_0x006fd5dc();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 006ec304; end: 006ec367;  */

long * FUN_006ec304(long *param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uStack_78;
  long alStack_6a [8];
  undefined8 uStack_28;
  
  func_0x006fd5e8();
  (**(code **)(*param_1 + 0x80))();
  plVar5 = alStack_6a;
  FUN_006e405c(plVar5,uStack_78,param_2);
  func_0x006fea5c();
  func_0x006fd534(uStack_28);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x006fe32c();
  func_0x006fd8fc();
  pcVar1 = *(code **)(*plVar5 + 0x70);
  pcVar2 = *(code **)(*plVar5 + 0x78);
  (*pcVar2)();
  (*pcVar2)();
  func_0x006fe1d8();
  lVar4 = unaff_x20;
  FUN_006ec450();
  iVar3 = (int)lVar4;
  func_0x006fdf98();
  (*pcVar1)();
  func_0x006fdf98();
  FUN_006ec450();
  func_0x006fdf98();
  FUN_006ebdb4();
  if (iVar3 == 0) {
    func_0x006fd880();
    func_0x006fd5dc();
    if (*(long *)(unaff_x20 + 8) != 0) {
      func_0x006fd840(param_2,*(long *)(unaff_x20 + 8) + 8);
      func_0x006fd840(param_2 + 0x48,*(long *)(unaff_x20 + 8) + 0x50);
    }
    plVar5 = (long *)0x0;
  }
  else {
    func_0x006fd840(param_2);
    func_0x006fd840(param_2 + 0x48);
    plVar5 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  return plVar5;
}



/* Entry: 006ec368; end: 006ec44f;  */

undefined8 FUN_006ec368(long *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  
  func_0x006fe32c();
  func_0x006fd8fc();
  pcVar1 = *(code **)(*param_1 + 0x70);
  pcVar2 = *(code **)(*param_1 + 0x78);
  (*pcVar2)();
  (*pcVar2)();
  func_0x006fe1d8();
  lVar4 = unaff_x20;
  FUN_006ec450();
  iVar3 = (int)lVar4;
  func_0x006fdf98();
  (*pcVar1)();
  func_0x006fdf98();
  FUN_006ec450();
  func_0x006fdf98();
  FUN_006ebdb4();
  if (iVar3 == 0) {
    func_0x006fd880();
    func_0x006fd5dc();
    if (*(long *)(unaff_x20 + 8) != 0) {
      func_0x006fd840();
      func_0x006fd840(unaff_x19 + 0x48,*(long *)(unaff_x20 + 8) + 0x50);
    }
    uVar5 = 0;
  }
  else {
    func_0x006fd840();
    func_0x006fd840(unaff_x19 + 0x48);
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 006ec450; end: 006ec46b;  */

void FUN_006ec450(void)

{
  func_0x006fe114();
  FUN_006e4d44();
  return;
}



/* Entry: 006ec46c; end: 006ec533;  */

undefined8 FUN_006ec46c(int param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [216];
  
  func_0x006fe32c();
  func_0x006fda04();
  func_0x006fdb6c();
  if (param_1 == 0) {
    if ((unaff_x22 != 0) && (unaff_x21 != 0)) {
      lVar2 = unaff_x19;
      FUN_006ec534();
      iVar1 = (int)lVar2;
      if (iVar1 != 0) {
        func_0x006fdcb8();
        FUN_006ec534();
        if ((iVar1 != 0) && (lVar2 = unaff_x19, FUN_006ec368(), (int)lVar2 != 0)) {
          func_0x006fd840(unaff_x20 + 8,auStack_160);
          func_0x006fd840(unaff_x20 + 0x50,auStack_118);
          func_0x006fd840(unaff_x20 + 0x98,unaff_x19 + 0x140);
          return 1;
        }
      }
      func_0x006fea1c();
      FUN_006ec5d0();
      return 0;
    }
    func_0x006fd880();
  }
  else {
    func_0x006fd710();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006ec534; end: 006ec5cf;  */

void FUN_006ec534(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x20;
  long lVar2;
  long in_register_00005008;
  undefined1 auStack_7a [66];
  undefined8 uStack_38;
  
  func_0x006fd8fc();
  func_0x006fd5fc();
  uStack_38 = extraout_x8;
  func_0x006fddec();
  if (*(int *)(param_4 + 0x10) == 0) {
    param_3 = unaff_x20 + 7;
    FUN_006e4264();
    if ((int)param_4 < 0) {
      puVar1 = auStack_7a;
      func_0x006fdc08();
      FUN_006e4138();
      if ((int)puVar1 != 0) {
        func_0x006fdcc4(*(undefined8 *)(*unaff_x20 + 0x88));
        (*extraout_x8_00)();
        goto LAB_006ec588;
      }
    }
  }
  func_0x006fd880();
  func_0x006fd5dc();
  puVar1 = (undefined1 *)0x0;
LAB_006ec588:
  func_0x006fd534(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(puVar1 + 8);
  if (lVar2 != 0) {
    func_0x006fea1c();
    func_0x006fd840();
    func_0x006fd840(param_3 + 9,lVar2 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_3 + 0x12,lVar2 + 0x98,0x48);
    return;
  }
  func_0x006fd618();
  param_3[0x11] = 0;
  param_3[0x13] = in_register_00005008;
  param_3[0x12] = param_1;
  param_3[0x15] = in_register_00005008;
  param_3[0x14] = param_1;
  param_3[0x17] = in_register_00005008;
  param_3[0x16] = param_1;
  param_3[0x19] = in_register_00005008;
  param_3[0x18] = param_1;
  param_3[0x1a] = 0;
  return;
}



/* Entry: 006ec5d0; end: 006ec62f;  */

void FUN_006ec5d0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 in_register_00005008;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    func_0x006fea1c();
    func_0x006fd840();
    func_0x006fd840(param_3 + 0x48,lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_3 + 0x90,lVar1 + 0x98,0x48);
    return;
  }
  func_0x006fd618();
  *(undefined8 *)(param_3 + 0x88) = 0;
  *(undefined8 *)(param_3 + 0x98) = in_register_00005008;
  *(undefined8 *)(param_3 + 0x90) = param_1;
  *(undefined8 *)(param_3 + 0xa8) = in_register_00005008;
  *(undefined8 *)(param_3 + 0xa0) = param_1;
  *(undefined8 *)(param_3 + 0xb8) = in_register_00005008;
  *(undefined8 *)(param_3 + 0xb0) = param_1;
  *(undefined8 *)(param_3 + 200) = in_register_00005008;
  *(undefined8 *)(param_3 + 0xc0) = param_1;
  *(undefined8 *)(param_3 + 0xd0) = 0;
  return;
}



/* Entry: 006ec630; end: 006ec7a3;  */

undefined8
FUN_006ec630(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_170 [288];
  
  if (((param_4 == 0) != (param_5 == 0)) || (param_3 == 0 && param_5 == 0)) {
    func_0x006fd880();
LAB_006ec6a0:
    func_0x006fd5dc();
    return 0;
  }
  func_0x006fd8fc();
  func_0x006fdb6c();
  if (((int)param_1 != 0) ||
     ((param_4 != 0 && (param_1 = unaff_x20, FUN_006eadf0(), (int)param_1 != 0)))) {
    func_0x006fd710();
    goto LAB_006ec6a0;
  }
  if (param_6 == 0) {
    func_0x006e4450();
    if (param_1 != (long *)0x0) goto LAB_006ec6f8;
  }
  else {
    param_1 = (long *)0x0;
LAB_006ec6f8:
    if (param_3 == 0) {
LAB_006ec724:
      if (param_5 != 0) {
        plVar2 = unaff_x20;
        FUN_006ec7a4();
        if (((int)plVar2 == 0) || (plVar2 = unaff_x20, FUN_006eaeb0(), (int)plVar2 == 0))
        goto LAB_006ec77c;
        if (param_3 == 0) {
          _memcpy(unaff_x19 + 8,auStack_170,0xd8);
        }
        else {
          (**(code **)(*unaff_x20 + 0x28))();
        }
      }
      uVar3 = 1;
      goto LAB_006ec798;
    }
    plVar2 = unaff_x20;
    FUN_006ec7a4();
    iVar1 = (int)plVar2;
    if (iVar1 != 0) {
      func_0x006fdf98();
      FUN_006ec820();
      if (iVar1 != 0) goto LAB_006ec724;
    }
  }
LAB_006ec77c:
  uVar3 = 0;
LAB_006ec798:
  func_0x006e4490(param_1);
  return uVar3;
}



/* Entry: 006ec7a4; end: 006ec81f;  */

long FUN_006ec7a4(long param_1)

{
  func_0x006fdb2c();
  FUN_006eb280();
  if ((int)param_1 == 0) {
    FUN_006de5b0();
    func_0x006fda24();
    func_0x006fd82c();
    if ((param_1 == 0) || (func_0x006fdea4(), (int)param_1 == 0)) {
      param_1 = 0;
    }
    else {
      func_0x006fdc54();
      FUN_006eb280();
    }
    func_0x006fd8f4();
  }
  else {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 006ec820; end: 006ec873;  */

undefined8 FUN_006ec820(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    func_0x006fd8fc();
    (**(code **)(*param_1 + 0x40))();
    iVar1 = (int)param_1;
    func_0x006fdcc4();
    FUN_006ec0d0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  func_0x006fd880();
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006ec874; end: 006ec8db;  */

void FUN_006ec874(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long in_x4;
  long lVar4;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  
  func_0x006fd848();
  FUN_006ec8dc(*(undefined4 *)(param_1 + 0x40));
  FUN_006ec8dc(*(undefined4 *)(param_1 + 0x40),unaff_x22 + 0x48);
  puVar1 = (ulong *)(unaff_x22 + 0x90);
  puVar2 = (ulong *)(unaff_x20 + 0x90);
  puVar3 = (ulong *)(in_x4 + 0x90);
  for (lVar4 = (long)*(int *)(param_1 + 0x40); lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar1 = *puVar3 & ~unaff_x21 | *puVar2 & unaff_x21;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



/* Entry: 006ec8dc; end: 006ec8f7;  */

void FUN_006ec8dc(int param_1,ulong *param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  
  for (lVar1 = (long)param_1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *param_5 & ~param_3 | *param_4 & param_3;
    param_5 = param_5 + 1;
    param_2 = param_2 + 1;
    param_4 = param_4 + 1;
  }
  return;
}



/* Entry: 006ec8f8; end: 006ec99b;  */

/* WARNING: Removing unreachable block (ram,0x006ec9d8) */

qword * FUN_006ec8f8(qword *param_1)

{
  undefined1 in_ZR;
  qword *pqVar1;
  undefined1 *puVar2;
  long unaff_x19;
  qword *pqVar3;
  long unaff_x20;
  long lStack_c0;
  undefined1 auStack_6a [66];
  undefined8 uStack_28;
  
  func_0x006fd8fc();
  func_0x006fd5e8();
  FUN_006eaf0c();
  if ((int)param_1 != 0) {
    func_0x006fd6fc();
    puVar2 = auStack_6a;
    while (lStack_c0 = lStack_c0 + -1, lStack_c0 != -1) {
      *(undefined1 *)(unaff_x19 + lStack_c0) = *puVar2;
      puVar2 = puVar2 + 1;
    }
    in_ZR = *(int *)(unaff_x20 + 0x18) == 9;
    FUN_006e4ca8();
    param_1 = (qword *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006fd534(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pqVar3 = &segment_command_00000020.vmaddr;
    FUN_00701e90();
    if (pqVar3 == (qword *)0x0) {
      func_0x006fd520(0xf);
    }
    else {
      pqVar3[6] = 0;
      pqVar3[3] = 0;
      pqVar3[2] = 0;
      pqVar3[5] = 0;
      pqVar3[4] = 0;
      pqVar3[1] = 0;
      *pqVar3 = 0;
      pqVar3[6] = 0;
      *(undefined8 *)((long)pqVar3 + 0x1c) = 0x100000004;
      if (((pqVar3[5] != 0) && (*(long *)(pqVar3[5] + 0x10) != 0)) &&
         (pqVar1 = pqVar3, func_0x006fe2d4(), (int)pqVar1 == 0)) {
        func_0x006fe77c(0xb29c00);
        func_0x006fdb84();
        pqVar3 = (qword *)0x0;
      }
    }
    return pqVar3;
  }
  return param_1;
}



/* Entry: 006ec99c; end: 006ec9a3;  */

/* WARNING: Removing unreachable block (ram,0x006ec9d8) */

qword * FUN_006ec99c(void)

{
  qword *pqVar1;
  qword *pqVar2;
  
  pqVar2 = &segment_command_00000020.vmaddr;
  FUN_00701e90();
  if (pqVar2 == (qword *)0x0) {
    func_0x006fd520(0xf);
  }
  else {
    pqVar2[6] = 0;
    pqVar2[3] = 0;
    pqVar2[2] = 0;
    pqVar2[5] = 0;
    pqVar2[4] = 0;
    pqVar2[1] = 0;
    *pqVar2 = 0;
    pqVar2[6] = 0;
    *(undefined8 *)((long)pqVar2 + 0x1c) = 0x100000004;
    if (((pqVar2[5] != 0) && (*(long *)(pqVar2[5] + 0x10) != 0)) &&
       (pqVar1 = pqVar2, func_0x006fe2d4(), (int)pqVar1 == 0)) {
      func_0x006fe77c(0xb29c00);
      func_0x006fdb84();
      pqVar2 = (qword *)0x0;
    }
  }
  return pqVar2;
}



/* Entry: 006ec9a4; end: 006ecbbb;  */

qword * FUN_006ec9a4(long param_1)

{
  qword *pqVar1;
  long lVar2;
  qword *pqVar3;
  
  pqVar3 = &segment_command_00000020.vmaddr;
  FUN_00701e90();
  if (pqVar3 == (qword *)0x0) {
    func_0x006fd520(0xf);
  }
  else {
    pqVar3[6] = 0;
    pqVar3[3] = 0;
    pqVar3[2] = 0;
    pqVar3[5] = 0;
    pqVar3[4] = 0;
    pqVar3[1] = 0;
    *pqVar3 = 0;
    if (param_1 == 0) {
      lVar2 = pqVar3[5];
    }
    else {
      lVar2 = *(long *)(param_1 + 8);
      pqVar3[5] = lVar2;
    }
    pqVar3[6] = 0;
    *(undefined8 *)((long)pqVar3 + 0x1c) = 0x100000004;
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) &&
       (pqVar1 = pqVar3, func_0x006fe2d4(), (int)pqVar1 == 0)) {
      func_0x006fe77c(0xb29c00);
      func_0x006fdb84();
      pqVar3 = (qword *)0x0;
    }
  }
  return pqVar3;
}



/* Entry: 006ecbbc; end: 006ecc3b;  */

void FUN_006ecbbc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x006fd880();
    func_0x006fd5dc();
  }
  else {
    FUN_006ecc3c();
    if (lVar1 != 0) {
      lVar2 = *param_1;
      FUN_006eb280(lVar2,lVar1 + 0x18,param_2);
      if ((int)lVar2 == 0) {
        func_0x006fd880();
        func_0x006fd5dc();
        func_0x006fdb84();
      }
      else {
        func_0x00701ed0(param_1[2]);
        param_1[2] = lVar1;
      }
    }
  }
  return;
}



/* Entry: 006ecc3c; end: 006ecd53;  */

dword * FUN_006ecc3c(long param_1,long param_2)

{
  undefined4 uVar1;
  dword *pdVar2;
  long in_register_00005008;
  
  pdVar2 = &segment_command_00000020.nsects;
  FUN_00701e90();
  if (pdVar2 == (dword *)0x0) {
    func_0x006fd520(0xf);
  }
  else {
    func_0x006fe580();
    *(long *)(pdVar2 + 0x12) = in_register_00005008;
    *(long *)(pdVar2 + 0x10) = param_1;
    *(long *)(pdVar2 + 0x16) = in_register_00005008;
    *(long *)(pdVar2 + 0x14) = param_1;
    *(long *)(pdVar2 + 10) = in_register_00005008;
    *(long *)(pdVar2 + 8) = param_1;
    *(long *)(pdVar2 + 0xe) = in_register_00005008;
    *(long *)(pdVar2 + 0xc) = param_1;
    *(dword **)pdVar2 = pdVar2 + 6;
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    pdVar2[2] = uVar1;
    pdVar2[3] = uVar1;
    pdVar2[5] = 2;
  }
  return pdVar2;
}



/* Entry: 006ecd54; end: 006ecde7;  */

void FUN_006ecd54(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  func_0x006fdf8c();
  plVar1 = param_1;
  func_0x006fdb6c();
  if ((int)plVar1 == 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x18))(param_1,param_2 + 8,auStack_d0,auStack_88);
    if ((int)plVar1 != 0) {
      FUN_006ed960(param_1,auStack_d0,param_3);
    }
  }
  else {
    func_0x006fd710();
    func_0x006fd5dc();
  }
  return;
}



/* Entry: 006ecde8; end: 006eceaf;  */

undefined8 FUN_006ecde8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    func_0x006fd880();
  }
  else {
    uVar1 = (int)lVar4 + 0x10;
    FUN_006e3e84();
    if (0x9f < uVar1) {
      FUN_006ecc3c();
      lVar2 = *param_1;
      FUN_006ebef0();
      if ((lVar4 != 0) && (lVar2 != 0)) {
        lVar3 = *param_1;
        FUN_006eb73c(lVar3,lVar4 + 0x18,&UNK_008364e8);
        if ((int)lVar3 != 0) {
          lVar3 = *param_1;
          FUN_006ec820(lVar3,lVar2 + 8,lVar4 + 0x18);
          if ((int)lVar3 != 0) {
            func_0x006fe6e4();
            param_1[2] = lVar4;
            func_0x006fe6ec();
            param_1[1] = lVar2;
            return 1;
          }
        }
      }
      FUN_006ebf84(lVar2);
      func_0x006fe910();
      return 0;
    }
    func_0x006fd880();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006eceb0; end: 006eced3;  */

undefined8 FUN_006eceb0(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return 1;
}



/* Entry: 006eced4; end: 006ecef7;  */

/* WARNING: Possible PIC construction at 0x006e3cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006e3cf4) */

void FUN_006eced4(void)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long *plVar4;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  func_0x006fe804();
  unaff_x19[0x27] = 0;
  puVar2 = unaff_x19 + 7;
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if ((*(uint *)((long)unaff_x19 + 0x4c) >> 1 & 1) == 0) {
    unaff_x30 = 0x6e3cf4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar3 = (undefined8 *)*puVar2;
    unaff_x19 = puVar2;
    unaff_x29 = puVar1;
  }
  else {
    puVar3 = puVar2;
    if ((*(uint *)((long)unaff_x19 + 0x4c) & 1) == 0) {
      *puVar2 = 0;
      return;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar4 = puVar3 + -1;
    FUN_00701f08(plVar4,*plVar4 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar4);
    return;
  }
  return;
}



/* Entry: 006ecef8; end: 006eceff;  */

/* WARNING: Possible PIC construction at 0x006e3cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006e3cf4) */

void FUN_006ecef8(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long *plVar4;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = (undefined8 *)(param_1 + 0x38);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x4c) >> 1 & 1) == 0) {
    unaff_x30 = 0x6e3cf4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar3 = (undefined8 *)*puVar2;
    unaff_x19 = puVar2;
    unaff_x29 = puVar1;
  }
  else {
    puVar3 = puVar2;
    if ((*(uint *)(param_1 + 0x4c) & 1) == 0) {
      *puVar2 = 0;
      return;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar4 = puVar3 + -1;
    FUN_00701f08(plVar4,*plVar4 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar4);
    return;
  }
  return;
}



/* Entry: 006ecf00; end: 006ed097;  */

undefined8 FUN_006ecf00(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  func_0x006fe32c();
  func_0x006fe804();
  func_0x006fe3b0();
  *(long *)(unaff_x19 + 0x138) = param_2;
  if (param_2 == 0) {
    func_0x006fd880();
    func_0x006fd5dc();
    uVar3 = 0;
  }
  else {
    lVar2 = unaff_x19;
    func_0x006fe1e4();
    iVar1 = (int)lVar2;
    func_0x006fe108();
    func_0x006ecf7c();
    if (iVar1 == 0) {
      FUN_006e5880(*(undefined8 *)(unaff_x19 + 0x138));
      uVar3 = 0;
      *(undefined8 *)(unaff_x19 + 0x138) = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 006ed098; end: 006ed0bb;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006ed098(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  code *pcVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  uint uVar17;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong auStack_160 [5];
  long lStack_138;
  undefined8 *puStack_130;
  uint uStack_124;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 auStack_c8 [5];
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_38;
  long *plVar11;
  
  puVar13 = (undefined8 *)(long)*(int *)(param_1 + 0x40);
  uVar14 = *(ulong *)(param_1 + 0x138);
  uVar20 = uVar14;
  func_0x006fd5fc();
  puVar9 = puVar13;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar13 ||
      puVar13 != (undefined8 *)(long)*(int *)(uVar20 + 0x20)) {
LAB_006e5c40:
    puVar13 = param_3;
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar13 << 1);
    uVar5 = param_3 == param_4;
    uStack_38 = extraout_x8;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_c8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    param_4 = auStack_c8;
    puVar9 = unaff_x22;
    FUN_006e8214();
    param_3 = puVar13;
    if ((int)param_2 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_38);
    if ((bool)uVar5) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  puVar12 = auStack_160;
  pcStack_d8 = FUN_006e5c48;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  lStack_118 = extraout_x8_00;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_4 ||
      param_4 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar13 = (undefined8 *)puVar9[3];
    param_4 = (undefined8 *)((long)param_4 << 3);
    func_0x006e3440(auStack_160);
    uVar5 = auStack_160[0] - 2 == 0;
    uVar20 = auStack_160[0] - 2;
    if (auStack_160[0] < 2) {
      auStack_160[0] = auStack_160[0] | 0xfffffffffffffffe;
      uVar19 = 1;
      do {
        uVar5 = uVar19 == uVar14;
        uVar20 = auStack_160[0];
        if (uVar14 <= uVar19) break;
        uVar16 = auStack_160[uVar19];
        auStack_160[uVar19] = uVar16 - 1;
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    auStack_160[0] = uVar20;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_118);
    param_2 = unaff_x22;
    puVar9 = puVar12;
    unaff_x23 = auStack_160;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar15 = FUN_006e5d10;
  func_0x006fec68();
  ppuStack_a0 = &puStack_e0;
  pcStack_98 = pcVar15;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar13 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = param_2;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_4 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_2 + 2) = 0;
          *(undefined4 *)(param_2 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar9 = param_2;
        FUN_006e35dc(param_2,1);
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_2 + 2) = 0;
          *(undefined8 *)*param_2 = 1;
          *(undefined4 *)(param_2 + 1) = 1;
          puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar9;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          param_2 = (undefined8 *)0x0;
          uVar20 = 0;
          uVar17 = 0;
          lVar18 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_130 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar18 = (long)(int)uVar2;
      uVar17 = 3;
      if (iVar7 != 1) {
        uVar17 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar17;
      }
      uVar17 = 5;
      if (iVar7 < 5) {
        uVar17 = uVar3;
      }
      uStack_124 = 6;
      if (iVar7 < 0xf) {
        uStack_124 = uVar17;
      }
      uVar3 = 1 << (ulong)uStack_124;
      auStack_160[1] = (ulong)uVar3;
      uVar20 = (ulong)uStack_124;
      auStack_160[0] = lVar18 << 1;
      uVar17 = (uint)auStack_160[0];
      if ((int)(uint)auStack_160[0] <= (int)uVar3) {
        uVar17 = uVar3;
      }
      uVar17 = (uVar17 + (uVar2 << uVar20)) * 8;
      uVar14 = (ulong)(int)(uVar17 + 0x40);
      FUN_00701e90();
      if (uVar14 == 0) {
        param_2 = (undefined8 *)0x0;
        uVar20 = 0;
        lVar18 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar14 & 0xffffffffffffffc0) + 0x40;
      auStack_160[2] = uVar14;
      auStack_160[3] = (ulong)uVar17;
      auStack_160[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_120 = lVar1 + (long)(int)(uVar2 << uVar20) * 8 + lVar18 * 8;
      lStack_118 = auStack_160[4] << 0x20;
      puVar10 = &stack0xfffffffffffffef8;
      lStack_138 = lVar1;
      FUN_006e60ec(puVar10,unaff_x24,unaff_x23);
      if ((int)puVar10 == 0) {
        param_2 = (undefined8 *)0x0;
        uVar17 = (uint)auStack_160[3];
        lVar18 = lStack_138;
        uVar20 = auStack_160[2];
        goto LAB_006e60b0;
      }
      plVar11 = &lStack_120;
      func_0x006fe0c0(plVar11,puVar13);
      iVar6 = (int)plVar11;
      func_0x006e5778();
      lVar1 = lStack_138;
      uVar20 = auStack_160[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        param_2 = (undefined8 *)0x0;
        lVar18 = lStack_138;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar18 * 8,lVar18,&lStack_120);
        uVar14 = auStack_160[1];
        if (1 < uStack_124) {
          puVar10 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar10,&lStack_120,&lStack_120);
          if ((int)puVar10 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_138 + auStack_160[0] * 8,lVar18,&stack0xfffffffffffffef8);
          auStack_160[0] = lVar18 << 3;
          for (uVar19 = 3; uVar19 < uVar14; uVar19 = uVar19 + 1) {
            puVar10 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(auStack_160[0],puVar10,&lStack_120,&stack0xfffffffffffffef8);
            if ((int)puVar10 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar18 = lStack_138;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_124 != 0) {
          iVar7 = iVar6 / (int)uStack_124;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_124; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(param_4,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xfffffffffffffef8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(param_2,&stack0xfffffffffffffef8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_124;
          for (iVar7 = 0; uStack_124 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar10 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(puVar10,&stack0xfffffffffffffef8,&stack0xfffffffffffffef8);
            if ((int)puVar10 == 0) goto LAB_006e60a4;
            func_0x006e5334(param_4,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_120;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar10 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar10,&stack0xfffffffffffffef8,&lStack_120);
          iVar6 = iVar4;
          iVar7 = (int)puVar10;
        }
LAB_006e60a4:
        param_2 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar17 = (uint)auStack_160[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar20 == 0) && (lVar18 != 0)) {
        FUN_00701f08(lVar18,(long)(int)uVar17);
      }
      func_0x00701ed0(uVar20);
      return param_2;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006ed0bc; end: 006ed0fb;  */

void FUN_006ed0bc(long param_1)

{
  long unaff_x21;
  undefined1 auStack_78 [72];
  
  func_0x006fd720();
  FUN_006ed0fc(*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(unaff_x21 + 0x138),auStack_78);
  func_0x006fdbc4();
  FUN_006ed114();
  return;
}



/* Entry: 006ed0fc; end: 006ed113;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006ed0fc(int param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  code *pcVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong auStack_240 [5];
  long lStack_218;
  undefined8 *puStack_210;
  uint uStack_204;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 auStack_1a8 [5];
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 auStack_d8 [18];
  undefined8 uStack_48;
  
  puVar12 = (undefined8 *)(long)param_1;
  puVar14 = puVar12;
  func_0x006fd5fc();
  puVar8 = param_3;
  puVar13 = param_4;
  uVar22 = param_2;
  if (((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar12 ||
       puVar12 != (undefined8 *)(long)*(int *)(param_2 + 0x20)) ||
     (uVar5 = puVar14 == (undefined8 *)((long)puVar12 * 2), unaff_x19 = puVar12, unaff_x23 = puVar14
     , (undefined8 *)((long)puVar12 * 2) <= puVar14 && !(bool)uVar5)) {
LAB_006e5b94:
    _abort();
  }
  else {
    unaff_x24 = (undefined8 *)((long)puVar12 << 1);
    uStack_48 = extraout_x8;
    func_0x006fe440(auStack_d8);
    func_0x006e3440(auStack_d8,param_4,(long)puVar14 << 3);
    puVar13 = auStack_d8;
    puVar14 = unaff_x24;
    FUN_006e8214();
    unaff_x20 = param_2;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    if ((int)puVar8 == 0) goto LAB_006e5b94;
    func_0x006fdf34();
    func_0x006fd534(uStack_48);
    if ((bool)uVar5) {
      return puVar8;
    }
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_006e5b9c;
  uVar10 = uVar22;
  puStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  uStack_100 = unaff_x20;
  puStack_f8 = unaff_x19;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  puVar19 = puVar8;
  puVar9 = puVar14;
  puStack_1c8 = unaff_x19;
  puStack_1d8 = unaff_x21;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar14 ||
      puVar14 != (undefined8 *)(long)*(int *)(uVar10 + 0x20)) {
LAB_006e5c40:
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar14 << 1);
    uVar5 = puVar12 == puVar13;
    uStack_118 = extraout_x8_00;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_1a8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar13 = auStack_1a8;
    puVar12 = puVar14;
    puVar9 = unaff_x22;
    FUN_006e8214();
    puStack_1c8 = puVar14;
    puStack_1d8 = puVar8;
    if ((int)puVar19 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_118);
    if ((bool)uVar5) {
      return puVar19;
    }
  }
  ___stack_chk_fail();
  puVar15 = auStack_240;
  pcStack_1b8 = FUN_006e5c48;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = unaff_x23;
  puStack_1e0 = unaff_x22;
  uStack_1d0 = uVar22;
  ppuStack_1c0 = &puStack_f0;
  func_0x006fd5fc();
  lStack_1f8 = extraout_x8_01;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar13 ||
      puVar13 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar12 = (undefined8 *)puVar9[3];
    puVar13 = (undefined8 *)((long)puVar13 << 3);
    func_0x006e3440(auStack_240);
    uVar5 = auStack_240[0] - 2 == 0;
    uVar10 = auStack_240[0] - 2;
    if (auStack_240[0] < 2) {
      auStack_240[0] = auStack_240[0] | 0xfffffffffffffffe;
      uVar21 = 1;
      do {
        uVar5 = uVar21 == uVar22;
        uVar10 = auStack_240[0];
        if (uVar22 <= uVar21) break;
        uVar17 = auStack_240[uVar21];
        auStack_240[uVar21] = uVar17 - 1;
        uVar21 = uVar21 + 1;
      } while (uVar17 == 0);
    }
    auStack_240[0] = uVar10;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_1f8);
    puVar19 = unaff_x22;
    puVar9 = puVar15;
    unaff_x23 = auStack_240;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar16 = FUN_006e5d10;
  func_0x006fec68();
  pppuStack_180 = &ppuStack_1c0;
  pcStack_178 = pcVar16;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar12 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = puVar19;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar13 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(puVar19 + 2) = 0;
          *(undefined4 *)(puVar19 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar13 = puVar19;
        FUN_006e35dc(puVar19,1);
        if ((int)puVar13 != 0) {
          *(undefined4 *)(puVar19 + 2) = 0;
          *(undefined8 *)*puVar19 = 1;
          *(undefined4 *)(puVar19 + 1) = 1;
          puVar13 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar13;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          puVar19 = (undefined8 *)0x0;
          uVar22 = 0;
          uVar18 = 0;
          lVar20 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_210 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar20 = (long)(int)uVar2;
      uVar18 = 3;
      if (iVar7 != 1) {
        uVar18 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar18;
      }
      uVar18 = 5;
      if (iVar7 < 5) {
        uVar18 = uVar3;
      }
      uStack_204 = 6;
      if (iVar7 < 0xf) {
        uStack_204 = uVar18;
      }
      uVar3 = 1 << (ulong)uStack_204;
      auStack_240[1] = (ulong)uVar3;
      uVar22 = (ulong)uStack_204;
      auStack_240[0] = lVar20 << 1;
      uVar18 = (uint)auStack_240[0];
      if ((int)(uint)auStack_240[0] <= (int)uVar3) {
        uVar18 = uVar3;
      }
      uVar18 = (uVar18 + (uVar2 << uVar22)) * 8;
      uVar10 = (ulong)(int)(uVar18 + 0x40);
      FUN_00701e90();
      if (uVar10 == 0) {
        puVar19 = (undefined8 *)0x0;
        uVar22 = 0;
        lVar20 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar10 & 0xffffffffffffffc0) + 0x40;
      auStack_240[2] = uVar10;
      auStack_240[3] = (ulong)uVar18;
      auStack_240[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      puStack_1e8 = (undefined8 *)(lVar1 + (long)(int)(uVar2 << uVar22) * 8);
      puStack_200 = puStack_1e8 + lVar20;
      lStack_1f8 = auStack_240[4] << 0x20;
      puStack_1e0 = (undefined8 *)(auStack_240[4] << 0x20);
      puStack_1f0 = (undefined8 *)0x200000000;
      puStack_1d8 = (undefined8 *)0x200000000;
      ppuVar11 = &puStack_1e8;
      lStack_218 = lVar1;
      FUN_006e60ec(ppuVar11,unaff_x24,unaff_x23);
      if ((int)ppuVar11 == 0) {
        puVar19 = (undefined8 *)0x0;
        uVar18 = (uint)auStack_240[3];
        lVar20 = lStack_218;
        uVar22 = auStack_240[2];
        goto LAB_006e60b0;
      }
      ppuVar11 = &puStack_200;
      func_0x006fe0c0(ppuVar11,puVar12);
      iVar6 = (int)ppuVar11;
      func_0x006e5778();
      lVar1 = lStack_218;
      uVar22 = auStack_240[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        puVar19 = (undefined8 *)0x0;
        lVar20 = lStack_218;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar20 * 8,lVar20,&puStack_200);
        uVar10 = auStack_240[1];
        if (1 < uStack_204) {
          ppuVar11 = &puStack_1e8;
          func_0x006fdaf8(ppuVar11,&puStack_200,&puStack_200);
          if ((int)ppuVar11 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_218 + auStack_240[0] * 8,lVar20,&puStack_1e8);
          auStack_240[0] = lVar20 << 3;
          for (uVar21 = 3; uVar21 < uVar10; uVar21 = uVar21 + 1) {
            ppuVar11 = &puStack_1e8;
            func_0x006fdaf8(auStack_240[0],ppuVar11,&puStack_200,&puStack_1e8);
            if ((int)ppuVar11 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar20 = lStack_218;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_204 != 0) {
          iVar7 = iVar6 / (int)uStack_204;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_204; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar13,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&puStack_1e8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(puVar19,&puStack_1e8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_204;
          for (iVar7 = 0; uStack_204 + iVar7 != 0; iVar7 = iVar7 + -1) {
            ppuVar11 = &puStack_1e8;
            func_0x006fdaf8(ppuVar11,&puStack_1e8,&puStack_1e8);
            if ((int)ppuVar11 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar13,iVar6 + iVar7);
          }
          iVar7 = (int)&puStack_200;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          ppuVar11 = &puStack_1e8;
          func_0x006fdaf8(ppuVar11,&puStack_1e8,&puStack_200);
          iVar6 = iVar4;
          iVar7 = (int)ppuVar11;
        }
LAB_006e60a4:
        puVar19 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar18 = (uint)auStack_240[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar22 == 0) && (lVar20 != 0)) {
        FUN_00701f08(lVar20,(long)(int)uVar18);
      }
      func_0x00701ed0(uVar22);
      return puVar19;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006ed114; end: 006ed15f;  */

void FUN_006ed114(uint param_1,undefined1 *param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  
  func_0x006fddec();
  for (uVar1 = (ulong)param_1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *(undefined1 *)(param_4 + -1 + uVar1);
    param_2 = param_2 + 1;
  }
  *param_3 = (ulong)param_1;
  return;
}



/* Entry: 006ed160; end: 006ed18b;  */

void FUN_006ed160(int param_1)

{
  func_0x006fd8fc();
  FUN_006ed18c();
  if (param_1 != 0) {
    func_0x006fdeb4();
    FUN_006ed208();
  }
  return;
}



/* Entry: 006ed18c; end: 006ed207;  */

undefined8 FUN_006ed18c(ulong param_1,undefined1 *param_2,long param_3,ulong param_4)

{
  int iVar1;
  
  func_0x006fddec();
  iVar1 = (int)param_1;
  if (param_4 == (param_1 & 0xffffffff)) {
    func_0x006fd6fc();
    for (; param_4 != 0; param_4 = param_4 - 1) {
      *param_2 = *(undefined1 *)(param_3 + -1 + param_4);
      param_2 = param_2 + 1;
    }
    func_0x006fe7b8();
    if (iVar1 != 0) {
      return 1;
    }
  }
  func_0x006fd880();
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006ed208; end: 006ed223;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006ed208(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  code *pcVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  dword *pdVar17;
  uint uVar18;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong auStack_160 [5];
  long lStack_138;
  undefined8 *puStack_130;
  uint uStack_124;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 auStack_c8 [5];
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_38;
  long *plVar12;
  
  puVar14 = (undefined8 *)(long)param_1;
  puVar13 = (undefined8 *)*param_2;
  puVar8 = param_2;
  func_0x006fd5fc();
  puVar9 = puVar14;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar14 ||
      puVar14 != (undefined8 *)(long)*(int *)(puVar8 + 4)) {
LAB_006e5c40:
    puVar14 = param_4;
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar14 << 1);
    uVar5 = param_4 == puVar13;
    uStack_38 = extraout_x8;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_c8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar13 = auStack_c8;
    puVar9 = unaff_x22;
    FUN_006e8214();
    param_4 = puVar14;
    if ((int)param_3 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_38);
    if ((bool)uVar5) {
      return param_3;
    }
  }
  ___stack_chk_fail();
  puVar15 = auStack_160;
  pcStack_d8 = FUN_006e5c48;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  lStack_118 = extraout_x8_00;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar13 ||
      puVar13 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar14 = (undefined8 *)puVar9[3];
    puVar13 = (undefined8 *)((long)puVar13 << 3);
    func_0x006e3440(auStack_160);
    uVar5 = auStack_160[0] - 2 == 0;
    uVar21 = auStack_160[0] - 2;
    if (auStack_160[0] < 2) {
      auStack_160[0] = auStack_160[0] | 0xfffffffffffffffe;
      pdVar17 = &MACH_HEADER.magic;
      do {
        pdVar17 = (dword *)((long)pdVar17 + 1);
        uVar5 = pdVar17 == (dword *)param_2;
        uVar21 = auStack_160[0];
        if (param_2 <= pdVar17) break;
        uVar10 = auStack_160[(long)pdVar17];
        auStack_160[(long)pdVar17] = uVar10 - 1;
      } while (uVar10 == 0);
    }
    auStack_160[0] = uVar21;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_118);
    param_3 = unaff_x22;
    puVar9 = puVar15;
    unaff_x23 = auStack_160;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar16 = FUN_006e5d10;
  func_0x006fec68();
  ppuStack_a0 = &puStack_e0;
  pcStack_98 = pcVar16;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar14 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = param_3;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar13 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined4 *)(param_3 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar13 = param_3;
        FUN_006e35dc(param_3,1);
        if ((int)puVar13 != 0) {
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined8 *)*param_3 = 1;
          *(undefined4 *)(param_3 + 1) = 1;
          puVar13 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar13;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          param_3 = (undefined8 *)0x0;
          uVar21 = 0;
          uVar18 = 0;
          lVar19 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_130 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar19 = (long)(int)uVar2;
      uVar18 = 3;
      if (iVar7 != 1) {
        uVar18 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar18;
      }
      uVar18 = 5;
      if (iVar7 < 5) {
        uVar18 = uVar3;
      }
      uStack_124 = 6;
      if (iVar7 < 0xf) {
        uStack_124 = uVar18;
      }
      uVar3 = 1 << (ulong)uStack_124;
      auStack_160[1] = (ulong)uVar3;
      uVar21 = (ulong)uStack_124;
      auStack_160[0] = lVar19 << 1;
      uVar18 = (uint)auStack_160[0];
      if ((int)(uint)auStack_160[0] <= (int)uVar3) {
        uVar18 = uVar3;
      }
      uVar18 = (uVar18 + (uVar2 << uVar21)) * 8;
      uVar10 = (ulong)(int)(uVar18 + 0x40);
      FUN_00701e90();
      if (uVar10 == 0) {
        param_3 = (undefined8 *)0x0;
        uVar21 = 0;
        lVar19 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar10 & 0xffffffffffffffc0) + 0x40;
      auStack_160[2] = uVar10;
      auStack_160[3] = (ulong)uVar18;
      auStack_160[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_120 = lVar1 + (long)(int)(uVar2 << uVar21) * 8 + lVar19 * 8;
      lStack_118 = auStack_160[4] << 0x20;
      puVar11 = &stack0xfffffffffffffef8;
      lStack_138 = lVar1;
      FUN_006e60ec(puVar11,unaff_x24,unaff_x23);
      if ((int)puVar11 == 0) {
        param_3 = (undefined8 *)0x0;
        uVar18 = (uint)auStack_160[3];
        lVar19 = lStack_138;
        uVar21 = auStack_160[2];
        goto LAB_006e60b0;
      }
      plVar12 = &lStack_120;
      func_0x006fe0c0(plVar12,puVar14);
      iVar6 = (int)plVar12;
      func_0x006e5778();
      lVar1 = lStack_138;
      uVar21 = auStack_160[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        param_3 = (undefined8 *)0x0;
        lVar19 = lStack_138;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar19 * 8,lVar19,&lStack_120);
        uVar10 = auStack_160[1];
        if (1 < uStack_124) {
          puVar11 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar11,&lStack_120,&lStack_120);
          if ((int)puVar11 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_138 + auStack_160[0] * 8,lVar19,&stack0xfffffffffffffef8);
          auStack_160[0] = lVar19 << 3;
          for (uVar20 = 3; uVar20 < uVar10; uVar20 = uVar20 + 1) {
            puVar11 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(auStack_160[0],puVar11,&lStack_120,&stack0xfffffffffffffef8);
            if ((int)puVar11 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar19 = lStack_138;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_124 != 0) {
          iVar7 = iVar6 / (int)uStack_124;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_124; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar13,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xfffffffffffffef8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(param_3,&stack0xfffffffffffffef8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_124;
          for (iVar7 = 0; uStack_124 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar11 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(puVar11,&stack0xfffffffffffffef8,&stack0xfffffffffffffef8);
            if ((int)puVar11 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar13,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_120;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar11 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar11,&stack0xfffffffffffffef8,&lStack_120);
          iVar6 = iVar4;
          iVar7 = (int)puVar11;
        }
LAB_006e60a4:
        param_3 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar18 = (uint)auStack_160[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar21 == 0) && (lVar19 != 0)) {
        FUN_00701f08(lVar19,(long)(int)uVar18);
      }
      func_0x00701ed0(uVar21);
      return param_3;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006ed224; end: 006ed52f;  */

void FUN_006ed224(ulong param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_288 [216];
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [72];
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [72];
  undefined1 auStack_48 [72];
  
  func_0x006fe858();
  if (param_3 != param_4) {
    uVar2 = param_1;
    func_0x006fe418();
    uVar3 = uVar2;
    func_0x006fe418();
    func_0x006fe08c();
    func_0x006fe08c();
    FUN_006ed098(param_1,auStack_1b0,param_3,auStack_168);
    func_0x006fe938();
    func_0x006fe08c();
    func_0x006fdc00();
    func_0x006fdc00();
    func_0x006fdc28();
    func_0x006fdc28();
    uVar4 = param_1;
    FUN_006ed098(param_1,auStack_288,param_4,auStack_120);
    func_0x006fdc00();
    func_0x006fe418();
    uVar5 = uVar4;
    func_0x006fdc28();
    func_0x006fdc28();
    func_0x006fdc28();
    func_0x006fdc00();
    func_0x006fe938();
    func_0x006fe418();
    if ((uVar2 & ((uVar5 | uVar4) ^ 0xffffffffffffffff) & uVar3) == 0) {
      func_0x006fe938();
      func_0x006fe08c();
      func_0x006fdc28();
      func_0x006fdc28();
      func_0x006fe08c();
      func_0x006fdc00();
      func_0x006fdc00();
      func_0x006fdc00();
      func_0x006fdc00();
      func_0x006fdc28();
      func_0x006fdc28();
      func_0x006fdc00();
      func_0x006fdc00();
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      FUN_006ec8dc(uVar1,auStack_48,uVar2,auStack_48,param_4);
      FUN_006ec8dc(uVar1,param_2,uVar3,auStack_48,param_3);
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      FUN_006ec8dc(uVar1,auStack_90,uVar2,auStack_90,param_4 + 0x48);
      FUN_006ec8dc(uVar1,param_2 + 0x48,uVar3,auStack_90,param_3 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      FUN_006ec8dc(uVar1,auStack_d8,uVar2,auStack_d8,param_4 + 0x90);
      FUN_006ec8dc(uVar1,param_2 + 0x90,uVar3,auStack_d8,param_3 + 0x90);
    }
    else {
      func_0x006fdbc4(param_1);
      FUN_006ed530();
    }
    return;
  }
  func_0x006fdbc4();
  func_0x006fda04();
  if (*(int *)(param_1 + 0xe0) == 0) {
    func_0x006fdcb8();
    func_0x006ed0a8();
    func_0x006fdb8c();
    func_0x006fdb8c();
    func_0x006fdb8c();
    func_0x006fdcb8();
    FUN_006ec450();
    func_0x006fe5f8();
    func_0x006fdb8c();
    func_0x006fe5f8();
    func_0x006fdc74();
    func_0x006fe5f8();
    func_0x006fdc74();
    func_0x006fe5f8();
    func_0x006fd908();
    func_0x006fdb8c();
    func_0x006fdd44();
    func_0x006fd8d4();
    func_0x006fd8d4();
    func_0x006fd8d4();
    func_0x006fd9d0();
    func_0x006ed0a8();
    func_0x006fd9d0();
    func_0x006fe6b8();
    func_0x006fd9d0();
    func_0x006fe6b8();
    func_0x006fd908();
    func_0x006fea10();
    func_0x006fdb8c();
    func_0x006fea10();
    func_0x006fdc74();
    func_0x006fea10();
    func_0x006fdc74();
    func_0x006fd7f4();
    func_0x006fd7f4();
    func_0x006fd7f4();
    func_0x006fe7c0();
    func_0x006fdd44();
  }
  else {
    func_0x006fdb8c();
    func_0x006fdb8c();
    func_0x006fdcb8();
    FUN_006ed098();
    func_0x006fdcb8();
    FUN_006ed7f8();
    func_0x006fdcb8();
    FUN_006ec450();
    func_0x006fd908();
    func_0x006fe5f8();
    func_0x006fd908();
    func_0x006fdd44();
    func_0x006fd9d0();
    func_0x006ed0a8();
    func_0x006fd7f4();
    func_0x006fe1d8();
    func_0x006fd908();
    func_0x006fd908();
    func_0x006fd9d0();
    func_0x006fe6b8();
    func_0x006fd908();
    func_0x006fd908();
    func_0x006fdb8c();
    func_0x006fea10();
    func_0x006fdc74();
    func_0x006fe7c0();
    func_0x006fd908();
    func_0x006fdb8c();
    func_0x006fdd44();
    func_0x006fd908();
  }
  func_0x006fdc74();
  return;
}



/* Entry: 006ed530; end: 006ed7cb;  */

void FUN_006ed530(long param_1)

{
  func_0x006fda04();
  if (*(int *)(param_1 + 0xe0) == 0) {
    func_0x006fdcb8();
    func_0x006ed0a8();
    func_0x006fdb8c();
    func_0x006fdb8c();
    func_0x006fdb8c();
    func_0x006fdcb8();
    FUN_006ec450();
    func_0x006fe5f8();
    func_0x006fdb8c();
    func_0x006fe5f8();
    func_0x006fdc74();
    func_0x006fe5f8();
    func_0x006fdc74();
    func_0x006fe5f8();
    func_0x006fd908();
    func_0x006fdb8c();
    func_0x006fdd44();
    func_0x006fd8d4();
    func_0x006fd8d4();
    func_0x006fd8d4();
    func_0x006fd9d0();
    func_0x006ed0a8();
    func_0x006fd9d0();
    func_0x006fe6b8();
    func_0x006fd9d0();
    func_0x006fe6b8();
    func_0x006fd908();
    func_0x006fea10();
    func_0x006fdb8c();
    func_0x006fea10();
    func_0x006fdc74();
    func_0x006fea10();
    func_0x006fdc74();
    func_0x006fd7f4();
    func_0x006fd7f4();
    func_0x006fd7f4();
    func_0x006fe7c0();
    func_0x006fdd44();
  }
  else {
    func_0x006fdb8c();
    func_0x006fdb8c();
    func_0x006fdcb8();
    FUN_006ed098();
    func_0x006fdcb8();
    FUN_006ed7f8();
    func_0x006fdcb8();
    FUN_006ec450();
    func_0x006fd908();
    func_0x006fe5f8();
    func_0x006fd908();
    func_0x006fdd44();
    func_0x006fd9d0();
    func_0x006ed0a8();
    func_0x006fd7f4();
    func_0x006fe1d8();
    func_0x006fd908();
    func_0x006fd908();
    func_0x006fd9d0();
    func_0x006fe6b8();
    func_0x006fd908();
    func_0x006fd908();
    func_0x006fdb8c();
    func_0x006fea10();
    func_0x006fdc74();
    func_0x006fe7c0();
    func_0x006fd908();
    func_0x006fdb8c();
    func_0x006fdd44();
    func_0x006fd908();
  }
  func_0x006fdc74();
  return;
}



/* Entry: 006ed7cc; end: 006ed7f7;  */

long FUN_006ed7cc(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  for (uVar2 = (ulong)(*(uint *)(param_1 + 0x40) &
                      ((int)*(uint *)(param_1 + 0x40) >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    uVar1 = *param_2 | uVar1;
    param_2 = param_2 + 1;
  }
  return -(ulong)(uVar1 != 0);
}



/* Entry: 006ed7f8; end: 006ed813;  */

void FUN_006ed7f8(void)

{
  func_0x006fe114();
  FUN_006e4cf0();
  return;
}



/* Entry: 006ed814; end: 006ed8fb;  */

void FUN_006ed814(void)

{
  pcRam0000000000b63ec0 = FUN_006eceb0;
  pcRam0000000000b63ec8 = FUN_006eced4;
  pcRam0000000000b63ed0 = FUN_006ecf00;
  pcRam0000000000b63ed8 = FUN_006f95b4;
  pcRam0000000000b63ee0 = FUN_006f9650;
  pcRam0000000000b63ee8 = FUN_006ed224;
  pcRam0000000000b63ef0 = FUN_006ed530;
  pcRam0000000000b63ef8 = FUN_006ee8a8;
  pcRam0000000000b63f00 = FUN_006eeb20;
  pcRam0000000000b63f08 = FUN_006eeb30;
  pcRam0000000000b63f18 = FUN_006ef348;
  pcRam0000000000b63f20 = FUN_006eef04;
  pcRam0000000000b63f28 = FUN_006ef06c;
  pcRam0000000000b63f30 = FUN_006ed098;
  uRam0000000000b63f38 = 0x6ed0a8;
  pcRam0000000000b63f40 = FUN_006ed0bc;
  pcRam0000000000b63f48 = FUN_006ed160;
  pcRam0000000000b63f50 = FUN_006f97d4;
  pcRam0000000000b63f58 = FUN_006f980c;
  uRam0000000000b63f60 = 0x6ee7e0;
  pcRam0000000000b63f68 = FUN_006ee7f8;
  pcRam0000000000b63f70 = FUN_006f9824;
  return;
}



/* Entry: 006ed8fc; end: 006ed95f;  */

void FUN_006ed8fc(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x006fd8fc();
  FUN_006ed7cc();
  func_0x006e3b2c();
  for (lVar1 = 0; lVar1 < *(int *)(unaff_x20 + 0x40); lVar1 = lVar1 + 1) {
    *(ulong *)(unaff_x19 + lVar1 * 8) = *(ulong *)(unaff_x19 + lVar1 * 8) & param_1;
  }
  return;
}



/* Entry: 006ed960; end: 006eda6f;  */

byte * FUN_006ed960(ulong param_1,byte *param_2,dword *param_3,byte *param_4,byte *param_5)

{
  undefined1 uVar1;
  byte *pbVar2;
  int iVar3;
  dword *pdVar4;
  byte bVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  byte *unaff_x19;
  byte *pbVar6;
  ulong unaff_x21;
  ulong uVar7;
  dword *unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  ulong uVar8;
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [72];
  byte *pbStack_f0;
  byte *pbStack_e8;
  dword *pdStack_e0;
  ulong uStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  byte abStack_9b [67];
  undefined8 uStack_58;
  
  func_0x006fd5fc();
  iVar3 = (int)param_3;
  uVar1 = iVar3 == 2 || iVar3 == 4;
  uStack_58 = extraout_x8;
  if (iVar3 == 2 || iVar3 == 4) {
    uVar7 = param_1;
    pdVar4 = param_3;
    pbVar2 = param_4;
    func_0x006fddec();
    uVar8 = uVar7 & 0xffffffff;
    uVar1 = iVar3 == 4;
    if (!(bool)uVar1) {
      uVar8 = 0;
    }
    pbVar6 = (byte *)(uVar8 + (uVar7 & 0xffffffff) + 1);
    if (param_4 == (byte *)0x0) goto LAB_006eda44;
    uVar1 = param_5 == pbVar6;
    if (pbVar6 <= param_5) {
      func_0x006fe9ec();
      pdVar4 = (dword *)&lStack_a8;
      func_0x006fea04();
      pbVar2 = param_2;
      (*extraout_x8_00)();
      uVar1 = iVar3 == 4;
      if ((bool)uVar1) {
        func_0x006fe9ec();
        func_0x006fe1f0();
        bVar5 = 4;
        param_5 = param_4;
      }
      else {
        func_0x006fe9ec();
        param_5 = abStack_9b;
        func_0x006fe1f0();
        bVar5 = abStack_9b[lStack_a8] & 1 | (byte)param_3;
      }
      param_5 = param_5 + 1;
      *param_4 = bVar5;
      goto LAB_006eda44;
    }
    func_0x006fd880();
    pdVar4 = &segment_command_00000020.flags;
    unaff_x19 = param_4;
    unaff_x21 = param_1;
    unaff_x22 = param_3;
    unaff_x23 = param_2;
  }
  else {
    func_0x006fd880();
    pdVar4 = (dword *)(section_00000068.sectname + 7);
    uVar7 = param_1;
    pbVar2 = param_4;
    param_5 = unaff_x24;
  }
  func_0x006fd5dc();
  pbVar6 = (byte *)0x0;
  param_4 = unaff_x19;
  param_1 = unaff_x21;
  param_3 = unaff_x22;
  param_2 = unaff_x23;
LAB_006eda44:
  func_0x006fd534(uStack_58);
  if ((bool)uVar1) {
    return pbVar6;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_006eda70;
  pbStack_f0 = param_5;
  pbStack_e8 = param_2;
  pdStack_e0 = param_3;
  uStack_d8 = param_1;
  pbStack_d0 = pbVar6;
  pbStack_c8 = param_4;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x006fd8fc();
  func_0x006fddec();
  uVar7 = uVar7 & 0xffffffff;
  if ((pbVar2 == (byte *)(uVar7 << 1 | 1)) && ((char)*pdVar4 == '\x04')) {
    pbVar2 = pbVar6;
    (**(code **)(*(long *)pbVar6 + 0x88))(pbVar6,auStack_138,(char *)((long)pdVar4 + 1),uVar7);
    if (((int)pbVar2 != 0) &&
       ((**(code **)(*(long *)pbVar6 + 0x88))
                  (pbVar6,auStack_180,(char *)((long)pdVar4 + 1) + uVar7,uVar7), pbVar2 = pbVar6,
       (int)pbVar6 != 0)) {
      func_0x006fdcc4();
      FUN_006ec368();
      pbVar2 = pbVar6;
    }
  }
  else {
    func_0x006fd880();
    func_0x006fd5dc();
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}



/* Entry: 006eda70; end: 006edb33;  */

void FUN_006eda70(ulong param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  long *plVar1;
  long *unaff_x20;
  
  func_0x006fd8fc();
  func_0x006fddec();
  if ((param_4 != ((param_1 & 0xffffffff) << 1 | 1)) || (*param_3 != '\x04')) {
    func_0x006fd880();
    func_0x006fd5dc();
    return;
  }
  plVar1 = unaff_x20;
  (**(code **)(*unaff_x20 + 0x88))();
  if ((int)plVar1 == 0) {
    return;
  }
  (**(code **)(*unaff_x20 + 0x88))();
  if ((int)unaff_x20 == 0) {
    return;
  }
  func_0x006fdcc4();
  FUN_006ec368();
  return;
}



/* Entry: 006edb34; end: 006edca3;  */

ulong FUN_006edb34(int param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar4;
  long unaff_x20;
  ulong uVar5;
  long unaff_x22;
  ulong uVar6;
  byte *unaff_x23;
  ulong uVar7;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [72];
  long lVar3;
  
  func_0x006feae0();
  func_0x006fdae0();
  if (param_1 != 0) {
    func_0x006fd710();
LAB_006edb68:
    func_0x006fd5dc();
    return 0;
  }
  if (unaff_x22 == 0) {
    func_0x006fd880();
    goto LAB_006edb68;
  }
  bVar1 = *unaff_x23;
  if (bVar1 == 4) {
    lVar3 = unaff_x20;
    func_0x006fe200();
    iVar2 = (int)lVar3;
    FUN_006eda70();
    if (iVar2 == 0) {
      FUN_006ec5d0();
      return 0;
    }
    func_0x006fd840(param_2 + 8,auStack_e0);
    func_0x006fd840(param_2 + 0x50,auStack_98);
    func_0x006fd840(param_2 + 0x98,unaff_x20 + 0x140);
    return 1;
  }
  uVar5 = unaff_x20 + 0x38;
  FUN_006e3eb8();
  uVar7 = uVar5 & 0xffffffff;
  if ((bVar1 & 0xfe) != 2 || unaff_x22 != uVar7 + 1) {
    func_0x006fd880();
    goto LAB_006edb68;
  }
  if (param_5 == 0) {
    func_0x006e4450();
    uVar6 = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
  }
  else {
    uVar6 = 0;
  }
  func_0x006fda24();
  func_0x006fd82c();
  if (uVar5 != 0) {
    pbVar4 = unaff_x23 + 1;
    FUN_006e405c(pbVar4,uVar7,uVar5);
    if (pbVar4 != (byte *)0x0) {
      FUN_006e34dc(uVar5,unaff_x20 + 0x38);
      if ((int)uVar5 < 0) {
        func_0x006fdf28();
        FUN_006edca4();
        goto LAB_006edc78;
      }
      func_0x006fd880();
      func_0x006fd5dc();
    }
  }
  uVar5 = 0;
LAB_006edc78:
  func_0x006fd8f4();
  func_0x006e4490(uVar6);
  return uVar5;
}



/* Entry: 006edca4; end: 006ee5c7;  */

long FUN_006edca4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *unaff_x21;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  ulong uStack0000000000000010;
  uint uStack0000000000000020;
  int iStack000000000000003c;
  
  func_0x006fdfa4();
  func_0x006fdb48();
  lVar6 = param_1;
  func_0x006fdb6c();
  if ((int)lVar6 != 0) {
    func_0x006fd710();
LAB_006edcf8:
    func_0x006fd5dc();
    return 0;
  }
  if ((*(int *)(unaff_x21 + 2) != 0) || (FUN_006e4264(), -1 < (int)unaff_x21)) {
    func_0x006fd880();
    goto LAB_006edcf8;
  }
  FUN_006de5b0();
  if ((param_5 == 0) && (FUN_006e4450(), unaff_x21 == (undefined8 *)0x0)) {
    return 0;
  }
  func_0x006fda24();
  func_0x006fd82c();
  puVar7 = unaff_x21;
  func_0x006fd82c();
  puVar8 = puVar7;
  func_0x006fd82c();
  puVar9 = puVar8;
  func_0x006fd82c();
  puVar10 = puVar9;
  func_0x006fd82c();
  if ((((puVar10 != (undefined8 *)0x0) &&
       ((puVar8 == (undefined8 *)0x0 ||
        (lVar6 = param_1, FUN_006ec304(param_1,puVar8,param_1 + 0x50), (int)lVar6 != 0)))) &&
      ((puVar9 == (undefined8 *)0x0 ||
       (lVar6 = param_1, FUN_006ec304(param_1,puVar9,param_1 + 0x98), (int)lVar6 != 0)))) &&
     ((puVar9 = puVar7, func_0x006fdeac(), (int)puVar9 != 0 &&
      (puVar9 = unaff_x21, func_0x006fdbbc(unaff_x21,puVar7), (int)puVar9 != 0)))) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      func_0x006fdbbc(puVar7,puVar8);
      iVar3 = (int)puVar7;
      if (iVar3 != 0) {
        func_0x006fe308();
        func_0x006fe850();
joined_r0x006ede10:
        if (iVar3 != 0) {
          func_0x006fe308();
          func_0x006fe850();
          if (iVar3 != 0) {
            if ((*(int *)(param_1 + 0x40) < 1) || ((**(byte **)(param_1 + 0x38) & 1) == 0)) {
LAB_006ede7c:
              lVar6 = param_1 + 0x38;
              FUN_006e42e4(lVar6,2);
              uVar4 = (uint)lVar6;
              if (uVar4 == 0) {
                func_0x006fd894();
                func_0x006fd5dc();
              }
              else {
                if (*(int *)(unaff_x21 + 1) == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = *(ulong *)*unaff_x21 & 1;
                }
LAB_006eded8:
                puVar7 = puVar10;
                FUN_006e3860(puVar10,uVar18);
                uVar4 = 0;
                if ((int)puVar7 != 0) goto LAB_006edee4;
              }
LAB_006ee3f4:
              func_0x006de5a4();
              if ((uVar4 & 0xff000fff) == 0x300006e) {
                FUN_006de5b0();
                func_0x006fd880();
              }
              else {
                func_0x006fd880();
              }
            }
            else {
              iVar3 = (int)param_1 + 0x38;
              func_0x006fe8dc();
              if (iVar3 != 0) goto LAB_006ede7c;
              puVar7 = unaff_x21;
              FUN_006e3858();
              if (((int)puVar7 != 0) || (func_0x006fe300(), (int)puVar7 != 0)) {
                func_0x006fe300();
                uVar18 = (ulong)puVar7 & 0xffffffff;
                goto LAB_006eded8;
              }
              func_0x006fda24();
              func_0x006fd82c();
              puVar9 = puVar7;
              func_0x006fd82c();
              puVar11 = puVar9;
              func_0x006fd82c();
              puVar12 = puVar11;
              func_0x006fd82c();
              puVar13 = puVar12;
              func_0x006fd82c();
              puVar14 = puVar13;
              func_0x006fd82c();
              puVar8 = puVar14;
              if ((puVar14 == (undefined8 *)0x0) ||
                 (puVar8 = puVar7, func_0x006fdea4(puVar7,unaff_x21,param_1 + 0x38),
                 (int)puVar8 == 0)) {
LAB_006ee3e8:
                uVar4 = (uint)puVar8;
                puVar20 = (undefined8 *)0x0;
              }
              else {
                iVar3 = 0;
                do {
                  iVar3 = iVar3 + 1;
                  puVar8 = (undefined8 *)(param_1 + 0x38);
                  func_0x006e5334(puVar8,iVar3);
                } while ((int)puVar8 == 0);
                puVar20 = puVar10;
                if (iVar3 == 2) {
                  func_0x006fea68();
                  FUN_006e521c();
                  if (((int)puVar8 != 0) &&
                     (puVar8 = puVar11, FUN_006e4bd4(puVar11,param_1 + 0x38,3), (int)puVar8 != 0)) {
                    *(undefined4 *)(puVar11 + 2) = 0;
                    puVar8 = puVar9;
                    func_0x006fdabc(puVar9,puVar12,puVar11,param_1 + 0x38);
                    if (((int)puVar8 != 0) &&
                       ((((puVar8 = puVar14, func_0x006fdeac(puVar14,puVar9,param_1 + 0x38),
                          (int)puVar8 != 0 &&
                          (puVar8 = puVar12, func_0x006fdbbc(puVar12,puVar12,puVar14,param_1 + 0x38)
                          , (int)puVar8 != 0)) &&
                         (func_0x006fe8d4(), puVar8 = puVar12, (int)puVar12 != 0)) &&
                        (puVar8 = puVar13, func_0x006fdbbc(puVar13,puVar7,puVar9,param_1 + 0x38),
                        (int)puVar8 != 0)))) {
                      func_0x006fe4a0();
                      func_0x006fdbbc();
                      if ((int)puVar8 != 0) {
LAB_006ee110:
                        puVar8 = puVar10;
                        func_0x006e3d58(puVar10,puVar13);
                        if (puVar8 != (undefined8 *)0x0) goto LAB_006ee040;
                        puVar8 = (undefined8 *)0x0;
                      }
                    }
                  }
                  goto LAB_006ee3e8;
                }
                if (iVar3 != 1) {
                  puVar15 = puVar11;
                  func_0x006e3d58(puVar11,param_1 + 0x38);
                  puVar8 = (undefined8 *)0x0;
                  if (puVar15 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar11 + 2) = 0;
                    uStack0000000000000010 = 2;
                    do {
                      if (uStack0000000000000010 < 0x16) {
LAB_006ee1b4:
                        puVar8 = puVar14;
                        FUN_006e3860(puVar14,uStack0000000000000010);
                        if ((int)puVar8 == 0) goto LAB_006ee3e8;
                      }
                      else {
                        lVar6 = param_1 + 0x38;
                        FUN_006e3e84(lVar6);
                        puVar8 = puVar14;
                        FUN_006e91e8(puVar14,lVar6,0);
                        if ((int)puVar8 == 0) goto LAB_006ee3e8;
                        puVar8 = puVar14;
                        FUN_006e34dc(puVar14,param_1 + 0x38);
                        if (-1 < (int)puVar8) {
                          pcVar2 = FUN_006e3994;
                          if (*(int *)(param_1 + 0x48) != 0) {
                            pcVar2 = FUN_006e344c;
                          }
                          puVar8 = puVar14;
                          (*pcVar2)(puVar14,puVar14,param_1 + 0x38);
                          if ((int)puVar8 == 0) goto LAB_006ee3e8;
                        }
                        puVar8 = puVar14;
                        FUN_006e3858();
                        if ((int)puVar8 != 0) goto LAB_006ee1b4;
                      }
                      if ((*(int *)(puVar11 + 1) < 1) || ((*(byte *)*puVar11 & 1) == 0)) {
                        func_0x006fd894();
                        goto LAB_006ee3e4;
                      }
                      if (*(int *)(puVar11 + 2) != 0) {
                        func_0x006fd6a0();
                        goto LAB_006ee3e4;
                      }
                      func_0x006fda24();
                      func_0x006fd82c();
                      puVar16 = puVar8;
                      func_0x006fd82c();
                      puVar15 = puVar16;
                      if (puVar16 == (undefined8 *)0x0) {
LAB_006ee328:
                        iVar19 = -2;
                      }
                      else {
                        puVar17 = puVar8;
                        func_0x006e3d58(puVar8,puVar14);
                        puVar15 = (undefined8 *)0x0;
                        if (puVar17 == (undefined8 *)0x0) goto LAB_006ee328;
                        puVar17 = puVar16;
                        func_0x006e3d58(puVar16,puVar11);
                        puVar15 = (undefined8 *)0x0;
                        if (puVar17 == (undefined8 *)0x0) goto LAB_006ee328;
                        iStack000000000000003c = 1;
                        while (puVar17 = puVar16, puVar15 = puVar8, FUN_006e3858(),
                              (int)puVar15 == 0) {
                          bVar1 = true;
                          do {
                            bVar1 = (bool)(bVar1 ^ 1);
                            puVar15 = puVar8;
                            func_0x006fe1a0();
                          } while ((int)puVar15 == 0);
                          func_0x006fe2f4();
                          func_0x006fe7a0();
                          if ((int)puVar15 == 0) goto LAB_006ee328;
                          if (bVar1) {
                            if (*(int *)(puVar17 + 1) == 0) {
                              uVar18 = 0;
                            }
                            else {
                              uVar18 = *(ulong *)*puVar17 & 7;
                            }
                            iStack000000000000003c =
                                 *(int *)(&UNK_008364a8 + uVar18 * 4) * iStack000000000000003c;
                          }
                          if (*(int *)(puVar8 + 2) == 0) {
                            if (*(int *)(puVar8 + 1) == 0) {
                              uStack0000000000000020 = 0;
                            }
                            else {
                              uStack0000000000000020 = (uint)*(undefined8 *)*puVar8;
                            }
                          }
                          else if (*(int *)(puVar8 + 1) == 0) {
                            uStack0000000000000020 = 0xffffffff;
                          }
                          else {
                            uStack0000000000000020 = ~(uint)*(undefined8 *)*puVar8;
                          }
                          if (*(int *)(puVar17 + 1) == 0) {
                            uVar4 = 0;
                          }
                          else {
                            uVar4 = (uint)*(undefined8 *)*puVar17;
                          }
                          func_0x006fe308();
                          func_0x006fdea4();
                          if ((int)puVar15 == 0) goto LAB_006ee328;
                          iVar19 = -iStack000000000000003c;
                          if ((uStack0000000000000020 & uVar4 & 2) == 0) {
                            iVar19 = iStack000000000000003c;
                          }
                          *(undefined4 *)(puVar8 + 2) = 0;
                          puVar16 = puVar8;
                          puVar8 = puVar17;
                          iStack000000000000003c = iVar19;
                        }
                        func_0x006fe300();
                        iVar19 = 0;
                        if ((int)puVar15 != 0) {
                          iVar19 = iStack000000000000003c;
                        }
                      }
                      func_0x006fd8f4();
                      puVar8 = puVar15;
                      if (iVar19 < -1) goto LAB_006ee3e8;
                      if (iVar19 != 1) {
                        if (iVar19 == -1) {
                          puVar8 = puVar11;
                          FUN_006e4bd4(puVar11,puVar11,iVar3);
                          if (((int)puVar8 == 0) ||
                             (puVar8 = puVar14,
                             func_0x006fdabc(puVar14,puVar14,puVar11,param_1 + 0x38),
                             (int)puVar8 == 0)) goto LAB_006ee3e8;
                          puVar15 = puVar14;
                          FUN_006e435c();
                          if ((int)puVar15 == 0) {
                            puVar8 = puVar12;
                            FUN_006e64d8(puVar12,puVar11);
                            if ((int)puVar8 == 0) goto LAB_006ee3e8;
                            puVar8 = puVar12;
                            FUN_006e3858();
                            if ((int)puVar8 == 0) {
                              puVar8 = puVar13;
                              func_0x006fdabc(puVar13,puVar7,puVar12,param_1 + 0x38);
                              if ((int)puVar8 == 0) goto LAB_006ee3e8;
                              puVar8 = puVar13;
                              FUN_006e3858();
                              uVar4 = (uint)puVar8;
                              if (uVar4 != 0) goto LAB_006ee4a4;
                            }
                            else {
                              func_0x006fea68();
                              func_0x006fdea4();
                              if ((int)puVar8 == 0) goto LAB_006ee3e8;
                              puVar8 = puVar12;
                              FUN_006e3858();
                              uVar4 = (uint)puVar8;
                              if (uVar4 != 0) {
LAB_006ee4a4:
                                *(undefined4 *)(puVar10 + 2) = 0;
                                *(undefined4 *)(puVar10 + 1) = 0;
                                goto LAB_006ee3ec;
                              }
                              puVar8 = puVar13;
                              FUN_006e3ed4();
                              if ((int)puVar8 == 0) goto LAB_006ee3e8;
                            }
                            puVar8 = puVar9;
                            func_0x006fdeac(puVar9,puVar13,param_1 + 0x38);
                            if (((int)puVar8 == 0) ||
                               (puVar8 = puVar9,
                               func_0x006fdbbc(puVar9,puVar9,puVar7,param_1 + 0x38),
                               (int)puVar8 == 0)) goto LAB_006ee3e8;
                            func_0x006fe4a0();
                            puVar11 = puVar8;
                            goto LAB_006ee4e4;
                          }
                        }
                        break;
                      }
                      uStack0000000000000010 = uStack0000000000000010 + 1;
                    } while (uStack0000000000000010 != 0x52);
LAB_006ee3e0:
                    func_0x006fd894();
                    puVar8 = puVar15;
LAB_006ee3e4:
                    func_0x006fd5dc();
                  }
                  goto LAB_006ee3e8;
                }
                puVar8 = puVar11;
                FUN_006e4bd4(puVar11,param_1 + 0x38,2);
                if ((int)puVar8 == 0) goto LAB_006ee3e8;
                *(undefined4 *)(puVar11 + 2) = 0;
                puVar8 = puVar11;
                FUN_006e3774(puVar11,1);
                if (((int)puVar8 == 0) ||
                   (puVar8 = puVar10, func_0x006fdabc(puVar10,puVar7,puVar11,param_1 + 0x38),
                   (int)puVar8 == 0)) goto LAB_006ee3e8;
LAB_006ee040:
                puVar8 = puVar13;
                func_0x006fdeac(puVar13,puVar10,param_1 + 0x38);
                if ((int)puVar8 == 0) goto LAB_006ee3e8;
                FUN_006e4264(puVar13,puVar7);
                uVar4 = 0;
                puVar15 = puVar13;
                if ((int)puVar13 != 0) goto LAB_006ee3e0;
              }
LAB_006ee3ec:
              func_0x006fd8f4();
              if (puVar20 == (undefined8 *)0x0) goto LAB_006ee3f4;
LAB_006edee4:
              iVar3 = *(int *)(puVar10 + 1);
              if (iVar3 < 1) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(uint *)*puVar10 & 1;
              }
              if (uVar4 != (param_4 != 0)) {
                puVar7 = puVar10;
                FUN_006e3858();
                if ((int)puVar7 != 0) {
                  func_0x006fd880();
                  goto LAB_006ee424;
                }
                puVar7 = puVar10;
                FUN_006e34f8(puVar10,param_1 + 0x38,puVar10);
                if ((int)puVar7 == 0) goto LAB_006ee428;
                iVar3 = *(int *)(puVar10 + 1);
              }
              if (iVar3 < 1) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(uint *)*puVar10 & 1;
              }
              if (uVar4 == (param_4 != 0)) {
                func_0x006fdc08(param_1);
                FUN_006ec46c();
                goto LAB_006ee42c;
              }
              func_0x006fd880();
            }
LAB_006ee424:
            func_0x006fd5dc();
          }
        }
      }
    }
    else {
      puVar8 = puVar7;
      FUN_006e521c();
      if ((int)puVar8 != 0) {
        func_0x006fe850(puVar7,puVar7);
        iVar3 = (int)puVar7;
        if (iVar3 != 0) {
          func_0x006fe308();
          FUN_006e50b0();
          goto joined_r0x006ede10;
        }
      }
    }
  }
LAB_006ee428:
  param_1 = 0;
LAB_006ee42c:
  func_0x006fd8f4();
  func_0x006fdda8();
  return param_1;
LAB_006ee4e4:
  func_0x006fdbbc();
  puVar8 = puVar11;
  if ((int)puVar11 == 0) goto LAB_006ee3e8;
  puVar15 = puVar9;
  FUN_006e435c();
  if ((int)puVar15 != 0) goto LAB_006ee110;
  iVar21 = iVar3 + -2;
  iVar19 = 1;
  while( true ) {
    iVar3 = iVar3 + -1;
    if (iVar21 == -1) goto LAB_006ee3e0;
    if (iVar19 == 1) {
      func_0x006fea68();
      func_0x006fdeac();
      iVar5 = (int)puVar15;
    }
    else {
      puVar15 = puVar12;
      func_0x006fdbbc(puVar12,puVar12,puVar12,param_1 + 0x38);
      iVar5 = (int)puVar15;
    }
    puVar8 = puVar15;
    if (iVar5 == 0) goto LAB_006ee3e8;
    puVar15 = puVar12;
    FUN_006e435c();
    if ((int)puVar15 != 0) break;
    iVar19 = iVar19 + 1;
    iVar21 = iVar21 + -1;
  }
  puVar8 = puVar12;
  func_0x006e3d58(puVar12,puVar14);
  if (puVar8 == (undefined8 *)0x0) goto LAB_006ee3e8;
  while (iVar3 = iVar3 + -1, 0 < iVar3) {
    func_0x006fea68();
    func_0x006fdeac();
    if ((int)puVar8 == 0) goto LAB_006ee3e8;
  }
  puVar8 = puVar14;
  func_0x006fdbbc(puVar14,puVar12,puVar12,param_1 + 0x38);
  if ((int)puVar8 == 0) goto LAB_006ee3e8;
  func_0x006fe4a0();
  func_0x006fdbbc();
  puVar11 = puVar9;
  iVar3 = iVar19;
  if ((int)puVar8 == 0) goto LAB_006ee3e8;
  goto LAB_006ee4e4;
}



/* Entry: 006ee5c8; end: 006ee777;  */

void FUN_006ee5c8(void)

{
  uRam0000000000b63f78 = 0x6ecec4;
  pcRam0000000000b63f80 = FUN_006ecef8;
  uRam0000000000b63f88 = 0x6ecf7c;
  pcRam0000000000b63f90 = FUN_006f9954;
  pcRam0000000000b63fa0 = FUN_006f9c50;
  uRam0000000000b63fa8 = 0x6f9d6c;
  pcRam0000000000b63fb0 = FUN_006f9e0c;
  uRam0000000000b63fb8 = 0x6f9fc4;
  uRam0000000000b63fc8 = 0x6fa17c;
  pcRam0000000000b63fe8 = FUN_006fa41c;
  uRam0000000000b63ff0 = 0x6fa48c;
  pcRam0000000000b63ff8 = FUN_006ed114;
  pcRam0000000000b64000 = FUN_006ed18c;
  uRam0000000000b64018 = 0x6ee7e0;
  pcRam0000000000b64020 = FUN_006ee7f8;
  uRam0000000000b64028 = 0x6ee84c;
  return;
}



/* Entry: 006ee778; end: 006ee7cb;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 *
FUN_006ee778(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong auStack_2a0 [5];
  long lStack_278;
  undefined8 *puStack_270;
  uint uStack_264;
  undefined8 *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  ulong uStack_230;
  undefined8 *puStack_228;
  undefined1 ***pppuStack_220;
  code *pcStack_218;
  undefined8 auStack_208 [5];
  undefined1 ****ppppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 auStack_138 [18];
  undefined8 uStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  FUN_006e4d44();
  func_0x006fd534(uStack_18);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar14 = (undefined8 *)(long)*(int *)(param_2 + 3);
  uVar15 = param_2[6];
  pcStack_68 = FUN_006ee7cc;
  puVar12 = puVar14;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  puVar8 = param_3;
  puVar11 = param_4;
  uVar22 = uVar15;
  if (((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar14 ||
       puVar14 != (undefined8 *)(long)*(int *)(uVar15 + 0x20)) ||
     (uVar5 = puVar12 == (undefined8 *)((long)puVar14 * 2), unaff_x19 = puVar14, unaff_x23 = puVar12
     , (undefined8 *)((long)puVar14 * 2) <= puVar12 && !(bool)uVar5)) {
LAB_006e5b94:
    _abort();
  }
  else {
    unaff_x24 = (undefined8 *)((long)puVar14 << 1);
    uStack_a8 = extraout_x8;
    func_0x006fe440(auStack_138);
    func_0x006e3440(auStack_138,param_4,(long)puVar12 << 3);
    puVar11 = auStack_138;
    puVar12 = unaff_x24;
    FUN_006e8214();
    unaff_x20 = uVar15;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
    if ((int)puVar8 == 0) goto LAB_006e5b94;
    func_0x006fdf34();
    func_0x006fd534(uStack_a8);
    if ((bool)uVar5) {
      return puVar8;
    }
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_006e5b9c;
  uVar15 = uVar22;
  puStack_170 = unaff_x22;
  puStack_168 = unaff_x21;
  uStack_160 = unaff_x20;
  puStack_158 = unaff_x19;
  ppuStack_150 = &puStack_70;
  func_0x006fd5fc();
  puVar19 = puVar8;
  puVar9 = puVar12;
  puStack_228 = unaff_x19;
  puStack_238 = unaff_x21;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar12 ||
      puVar12 != (undefined8 *)(long)*(int *)(uVar15 + 0x20)) {
LAB_006e5c40:
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar12 << 1);
    uVar5 = puVar14 == puVar11;
    uStack_178 = extraout_x8_00;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_208,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar11 = auStack_208;
    puVar14 = puVar12;
    puVar9 = unaff_x22;
    FUN_006e8214();
    puStack_228 = puVar12;
    puStack_238 = puVar8;
    if ((int)puVar19 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_178);
    if ((bool)uVar5) {
      return puVar19;
    }
  }
  ___stack_chk_fail();
  puVar13 = auStack_2a0;
  pcStack_218 = FUN_006e5c48;
  puStack_250 = unaff_x24;
  puStack_248 = unaff_x23;
  puStack_240 = unaff_x22;
  uStack_230 = uVar22;
  pppuStack_220 = &ppuStack_150;
  func_0x006fd5fc();
  lStack_258 = extraout_x8_01;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar11 ||
      puVar11 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar14 = (undefined8 *)puVar9[3];
    puVar11 = (undefined8 *)((long)puVar11 << 3);
    func_0x006e3440(auStack_2a0);
    uVar5 = auStack_2a0[0] - 2 == 0;
    uVar15 = auStack_2a0[0] - 2;
    if (auStack_2a0[0] < 2) {
      auStack_2a0[0] = auStack_2a0[0] | 0xfffffffffffffffe;
      uVar21 = 1;
      do {
        uVar5 = uVar21 == uVar22;
        uVar15 = auStack_2a0[0];
        if (uVar22 <= uVar21) break;
        uVar17 = auStack_2a0[uVar21];
        auStack_2a0[uVar21] = uVar17 - 1;
        uVar21 = uVar21 + 1;
      } while (uVar17 == 0);
    }
    auStack_2a0[0] = uVar15;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_258);
    puVar19 = unaff_x22;
    puVar9 = puVar13;
    unaff_x23 = auStack_2a0;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar16 = FUN_006e5d10;
  func_0x006fec68();
  ppppuStack_1e0 = &pppuStack_220;
  pcStack_1d8 = pcVar16;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar14 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = puVar19;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar11 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(puVar19 + 2) = 0;
          *(undefined4 *)(puVar19 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar11 = puVar19;
        FUN_006e35dc(puVar19,1);
        if ((int)puVar11 != 0) {
          *(undefined4 *)(puVar19 + 2) = 0;
          *(undefined8 *)*puVar19 = 1;
          *(undefined4 *)(puVar19 + 1) = 1;
          puVar11 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar11;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          puVar19 = (undefined8 *)0x0;
          uVar22 = 0;
          uVar18 = 0;
          lVar20 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_270 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar20 = (long)(int)uVar2;
      uVar18 = 3;
      if (iVar7 != 1) {
        uVar18 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar18;
      }
      uVar18 = 5;
      if (iVar7 < 5) {
        uVar18 = uVar3;
      }
      uStack_264 = 6;
      if (iVar7 < 0xf) {
        uStack_264 = uVar18;
      }
      uVar3 = 1 << (ulong)uStack_264;
      auStack_2a0[1] = (ulong)uVar3;
      uVar22 = (ulong)uStack_264;
      auStack_2a0[0] = lVar20 << 1;
      uVar18 = (uint)auStack_2a0[0];
      if ((int)(uint)auStack_2a0[0] <= (int)uVar3) {
        uVar18 = uVar3;
      }
      uVar18 = (uVar18 + (uVar2 << uVar22)) * 8;
      uVar15 = (ulong)(int)(uVar18 + 0x40);
      FUN_00701e90();
      if (uVar15 == 0) {
        puVar19 = (undefined8 *)0x0;
        uVar22 = 0;
        lVar20 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar15 & 0xffffffffffffffc0) + 0x40;
      auStack_2a0[2] = uVar15;
      auStack_2a0[3] = (ulong)uVar18;
      auStack_2a0[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      puStack_248 = (undefined8 *)(lVar1 + (long)(int)(uVar2 << uVar22) * 8);
      puStack_260 = puStack_248 + lVar20;
      lStack_258 = auStack_2a0[4] << 0x20;
      puStack_240 = (undefined8 *)(auStack_2a0[4] << 0x20);
      puStack_250 = (undefined8 *)0x200000000;
      puStack_238 = (undefined8 *)0x200000000;
      ppuVar10 = &puStack_248;
      lStack_278 = lVar1;
      FUN_006e60ec(ppuVar10,unaff_x24,unaff_x23);
      if ((int)ppuVar10 == 0) {
        puVar19 = (undefined8 *)0x0;
        uVar18 = (uint)auStack_2a0[3];
        lVar20 = lStack_278;
        uVar22 = auStack_2a0[2];
        goto LAB_006e60b0;
      }
      ppuVar10 = &puStack_260;
      func_0x006fe0c0(ppuVar10,puVar14);
      iVar6 = (int)ppuVar10;
      func_0x006e5778();
      lVar1 = lStack_278;
      uVar22 = auStack_2a0[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        puVar19 = (undefined8 *)0x0;
        lVar20 = lStack_278;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar20 * 8,lVar20,&puStack_260);
        uVar15 = auStack_2a0[1];
        if (1 < uStack_264) {
          ppuVar10 = &puStack_248;
          func_0x006fdaf8(ppuVar10,&puStack_260,&puStack_260);
          if ((int)ppuVar10 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_278 + auStack_2a0[0] * 8,lVar20,&puStack_248);
          auStack_2a0[0] = lVar20 << 3;
          for (uVar21 = 3; uVar21 < uVar15; uVar21 = uVar21 + 1) {
            ppuVar10 = &puStack_248;
            func_0x006fdaf8(auStack_2a0[0],ppuVar10,&puStack_260,&puStack_248);
            if ((int)ppuVar10 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar20 = lStack_278;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_264 != 0) {
          iVar7 = iVar6 / (int)uStack_264;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_264; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar11,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&puStack_248;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(puVar19,&puStack_248);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_264;
          for (iVar7 = 0; uStack_264 + iVar7 != 0; iVar7 = iVar7 + -1) {
            ppuVar10 = &puStack_248;
            func_0x006fdaf8(ppuVar10,&puStack_248,&puStack_248);
            if ((int)ppuVar10 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar11,iVar6 + iVar7);
          }
          iVar7 = (int)&puStack_260;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          ppuVar10 = &puStack_248;
          func_0x006fdaf8(ppuVar10,&puStack_248,&puStack_260);
          iVar6 = iVar4;
          iVar7 = (int)ppuVar10;
        }
LAB_006e60a4:
        puVar19 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar18 = (uint)auStack_2a0[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar22 == 0) && (lVar20 != 0)) {
        FUN_00701f08(lVar20,(long)(int)uVar18);
      }
      func_0x00701ed0(uVar22);
      return puVar19;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}


