/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00509844; end: 005098b7;  */

undefined ** FUN_00509844(void)

{
  return &PTR_DAT_009fbca8;
}



/* Entry: 005098b8; end: 005098db;  */

undefined8 FUN_005098b8(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 005098dc; end: 005098ef;  */

void FUN_005098dc(void)

{
  FUN_005098b8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005098f0; end: 00509963;  */

undefined ** FUN_005098f0(void)

{
  return &PTR_DAT_009fbd00;
}



/* Entry: 00509964; end: 00509987;  */

undefined8 FUN_00509964(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509988; end: 0050999b;  */

void FUN_00509988(void)

{
  FUN_00509964();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050999c; end: 00509a0f;  */

undefined ** FUN_0050999c(void)

{
  return &PTR_DAT_009fbd50;
}



/* Entry: 00509a10; end: 00509a6b;  */

long FUN_00509a10(long param_1)

{
  func_0x0050f184();
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004f92f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004fff4c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00510d1c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00509a6c; end: 00509a7f;  */

void FUN_00509a6c(void)

{
  FUN_00509a10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509a80; end: 00509a8b;  */

undefined ** FUN_00509a80(void)

{
  return &PTR_DAT_009fbda8;
}



/* Entry: 00509a8c; end: 00509af7;  */

void FUN_00509a8c(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0050f588();
  FUN_00532fa8();
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004f7c7c(unaff_x19[4]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004fff98(unaff_x19[5]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_00510d8c(unaff_x19[6]);
    }
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 00509af8; end: 00509c5f;  */

dword * FUN_00509af8(dword *param_1,undefined8 param_2,undefined8 param_3,dword *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0050ef9c();
  uVar2 = *(ulong *)(param_1 + 6) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x0050f65c();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x0050f620();
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x28);
    func_0x0050f14c();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = &MACH_HEADER.cputype;
    func_0x0050f17c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
  if ((long)uVar2 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    uVar2 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)uVar2 <= *(long *)unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)uVar2);
  }
  while( true ) {
    iVar5 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
    iVar4 = (int)uVar2;
    uVar1 = iVar4 - iVar5;
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0 || iVar4 < iVar5) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (dword *)((long)param_4 + (long)iVar4);
}



/* Entry: 00509c60; end: 00509c63;  */

void FUN_00509c60(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong extraout_x8;
  
  puVar5 = (ulong *)param_1[1];
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  puVar2 = param_1;
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    puVar2 = param_1 + 3;
    func_0x00532e08(puVar2,uVar4,puVar5);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f3d0();
      if (puVar2 == (ulong *)0x0) {
        func_0x0050f484();
        param_1[4] = (ulong)puVar2;
      }
      else {
        FUN_004f8528();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (ulong *)param_1[5];
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_005015cc();
        param_1[5] = (ulong)puVar2;
      }
      else {
        FUN_004ff494();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0050f4c8();
      if (puVar2 == (ulong *)0x0) {
        FUN_005018b4();
        param_1[6] = (ulong)puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_00510fb0();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00509c64; end: 00509c87;  */

undefined8 FUN_00509c64(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509c88; end: 00509c9b;  */

void FUN_00509c88(void)

{
  FUN_00509c64();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509c9c; end: 00509d0f;  */

undefined ** FUN_00509c9c(void)

{
  return &PTR_DAT_009fbdf0;
}



/* Entry: 00509d10; end: 00509d33;  */

undefined8 FUN_00509d10(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509d34; end: 00509d47;  */

void FUN_00509d34(void)

{
  FUN_00509d10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509d48; end: 00509dbb;  */

undefined ** FUN_00509d48(void)

{
  return &PTR_DAT_009fbe40;
}



/* Entry: 00509dbc; end: 00509ddf;  */

undefined8 FUN_00509dbc(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509de0; end: 00509df3;  */

void FUN_00509de0(void)

{
  FUN_00509dbc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509df4; end: 00509e67;  */

undefined ** FUN_00509df4(void)

{
  return &PTR_DAT_009fbe88;
}



/* Entry: 00509e68; end: 00509e8b;  */

undefined8 FUN_00509e68(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509e8c; end: 00509e9f;  */

void FUN_00509e8c(void)

{
  FUN_00509e68();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509ea0; end: 00509f13;  */

undefined ** FUN_00509ea0(void)

{
  return &PTR_DAT_009fbed0;
}



/* Entry: 00509f14; end: 00509f37;  */

undefined8 FUN_00509f14(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509f38; end: 00509f4b;  */

void FUN_00509f38(void)

{
  FUN_00509f14();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509f4c; end: 00509fbf;  */

undefined ** FUN_00509f4c(void)

{
  return &PTR_DAT_009fbf20;
}



/* Entry: 00509fc0; end: 00509fe3;  */

undefined8 FUN_00509fc0(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509fe4; end: 00509ff7;  */

void FUN_00509fe4(void)

{
  FUN_00509fc0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509ff8; end: 0050a06b;  */

undefined ** FUN_00509ff8(void)

{
  return &PTR_DAT_009fbf60;
}



/* Entry: 0050a06c; end: 0050a08f;  */

undefined8 FUN_0050a06c(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050a090; end: 0050a0a3;  */

void FUN_0050a090(void)

{
  FUN_0050a06c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a0a4; end: 0050a117;  */

undefined ** FUN_0050a0a4(void)

{
  return &PTR_DAT_009fbfa8;
}



/* Entry: 0050a118; end: 0050a13b;  */

undefined8 FUN_0050a118(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050a13c; end: 0050a14f;  */

void FUN_0050a13c(void)

{
  FUN_0050a118();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a150; end: 0050a1c3;  */

undefined ** FUN_0050a150(void)

{
  return &PTR_DAT_009fbfe8;
}



/* Entry: 0050a1c4; end: 0050a1e7;  */

undefined8 FUN_0050a1c4(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050a1e8; end: 0050a1fb;  */

void FUN_0050a1e8(void)

{
  FUN_0050a1c4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a1fc; end: 0050a21b;  */

undefined ** FUN_0050a1fc(void)

{
  return &PTR_DAT_009fc030;
}



/* Entry: 0050a21c; end: 0050a283;  */

long * FUN_0050a21c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  if ((int)param_1[2] != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0050a284; end: 0050a2b3;  */

long FUN_0050a284(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0050f494();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 0050a2b4; end: 0050a2d7;  */

undefined8 FUN_0050a2b4(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050a2d8; end: 0050a31b;  */

undefined8 * FUN_0050a2d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_009fa3e0;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00507be4(param_1,param_3);
  return param_1;
}



/* Entry: 0050a31c; end: 0050a32f;  */

void FUN_0050a31c(void)

{
  FUN_0050a2b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a330; end: 0050a34f;  */

undefined ** FUN_0050a330(void)

{
  return &PTR_DAT_009fc070;
}



/* Entry: 0050a350; end: 0050a3b7;  */

long * FUN_0050a350(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  if ((int)param_1[2] != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0050a3b8; end: 0050a3e7;  */

long FUN_0050a3b8(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0050f494();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 0050a3e8; end: 0050a41b;  */

long FUN_0050a3e8(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d4028();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050a41c; end: 0050a41f;  */

long FUN_0050a41c(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d4028();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050a420; end: 0050a433;  */

void FUN_0050a420(void)

{
  FUN_0050a3e8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a434; end: 0050a43f;  */

undefined ** FUN_0050a434(void)

{
  return &PTR_DAT_009fc0b0;
}



/* Entry: 0050a440; end: 0050a51b;  */

void FUN_0050a440(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    FUN_004d40c0(unaff_x19[3]);
  }
  func_0x0050f2b8();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0050a51c; end: 0050a533;  */

void FUN_0050a51c(void)

{
  FUN_004d41f0();
  func_0x0050ee50();
  return;
}



/* Entry: 0050a534; end: 0050a537;  */

void FUN_0050a534(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_0050eba0();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004d4278();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050a538; end: 0050a593;  */

void FUN_0050a538(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_0050eba0();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004d4278();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050a594; end: 0050a5c7;  */

long FUN_0050a594(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0050a3e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050a5c8; end: 0050a5db;  */

void FUN_0050a5c8(void)

{
  FUN_0050a594();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a5dc; end: 0050a5e7;  */

undefined ** FUN_0050a5dc(void)

{
  return &PTR_DAT_009fc0f0;
}



/* Entry: 0050a5e8; end: 0050a61f;  */

void FUN_0050a5e8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    FUN_0050a440(unaff_x19[3]);
  }
  func_0x0050f400();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0050a620; end: 0050a68f;  */

long * FUN_0050a620(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef60();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0050ef54();
    func_0x0050f110();
    func_0x0050f140();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0050a690; end: 0050a6ff;  */

void FUN_0050a690(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_0050a700();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0050f5e4();
    func_0x0050f208();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 0050a700; end: 0050a717;  */

void FUN_0050a700(void)

{
  func_0x0050a4c8();
  func_0x0050ee50();
  return;
}



/* Entry: 0050a718; end: 0050a71b;  */

void FUN_0050a718(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_0050ebd4();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_0050a538();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050a71c; end: 0050a74f;  */

long FUN_0050a71c(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0050a3e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050a750; end: 0050a763;  */

void FUN_0050a750(void)

{
  FUN_0050a71c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a764; end: 0050a76f;  */

undefined ** FUN_0050a764(void)

{
  return &PTR_DAT_009fc138;
}



/* Entry: 0050a770; end: 0050a7af;  */

void FUN_0050a770(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    FUN_0050a440(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0050a7b0; end: 0050a827;  */

long * FUN_0050a7b0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef60();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0050ef54();
    func_0x0050f2dc();
    func_0x0050f028();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0050a828; end: 0050a893;  */

void FUN_0050a828(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_0050a700();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0050f5e4();
    func_0x0050f208();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 0050a894; end: 0050a897;  */

void FUN_0050a894(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_0050ebd4();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_0050a538();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050a898; end: 0050a8cb;  */

long FUN_0050a898(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d4028();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050a8cc; end: 0050a8df;  */

void FUN_0050a8cc(void)

{
  FUN_0050a898();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050a8e0; end: 0050a8eb;  */

undefined ** FUN_0050a8e0(void)

{
  return &PTR_DAT_009fc180;
}



/* Entry: 0050a8ec; end: 0050a9c7;  */

void FUN_0050a8ec(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    FUN_004d40c0(unaff_x19[3]);
  }
  func_0x0050f2b8();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0050a9c8; end: 0050a9cb;  */

void FUN_0050a9c8(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_0050eba0();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004d4278();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050a9cc; end: 0050a9f7;  */

long FUN_0050a9cc(long param_1)

{
  func_0x0050f184();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050a9f8; end: 0050aa0b;  */

void FUN_0050a9f8(void)

{
  FUN_0050a9cc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050aa0c; end: 0050aa17;  */

undefined ** FUN_0050aa0c(void)

{
  return &PTR_DAT_009fc1d0;
}



/* Entry: 0050aa18; end: 0050ab07;  */

void FUN_0050aa18(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0050f378();
  FUN_00532fa8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0050ab08; end: 0050ab0b;  */

void FUN_0050ab08(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050f224();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x00532e08(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050ab0c; end: 0050ab53;  */

void FUN_0050ab0c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fae80);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  FUN_004dfac8(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 0050ab54; end: 0050ab7f;  */

long FUN_0050ab54(long param_1)

{
  func_0x0050f184();
  FUN_004dfae8(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050ab80; end: 0050ab93;  */

void FUN_0050ab80(void)

{
  FUN_0050ab54();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050ab94; end: 0050ab9f;  */

undefined ** FUN_0050ab94(void)

{
  return &PTR_DAT_009fc220;
}



/* Entry: 0050aba0; end: 0050abcf;  */

void FUN_0050aba0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0050f378();
  FUN_004dfb50();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0050abd0; end: 0050ac37;  */

long * FUN_0050abd0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x0050ef9c();
  func_0x0050f5c4();
  while (unaff_w22 != unaff_w21) {
    func_0x0050ee34();
    func_0x0050ef60();
    func_0x0050f2f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0050ac38; end: 0050ac93;  */

long FUN_0050ac38(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x0050f504();
  func_0x0050efdc();
  while (unaff_x22 != 0) {
    func_0x0050f564();
    func_0x0050f330();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 0050ac94; end: 0050ac97;  */

void FUN_0050ac94(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  FUN_004df824();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050ac98; end: 0050acd3;  */

long FUN_0050ac98(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004f3ce0();
  }
  __ZdlPv();
  FUN_004dfae8(param_1 + 0x18);
  return param_1;
}



/* Entry: 0050acd4; end: 0050ace7;  */

void FUN_0050acd4(void)

{
  FUN_0050ac98();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050ace8; end: 0050acf3;  */

undefined ** FUN_0050ace8(void)

{
  return &PTR_DAT_009fc270;
}



/* Entry: 0050acf4; end: 0050ad33;  */

void FUN_0050acf4(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0050f588();
  FUN_004dfb50();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_004f3d2c(unaff_x19[6]);
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 0050ad34; end: 0050adbb;  */

long * FUN_0050ad34(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  lVar2 = param_1[4];
  while ((int)lVar2 != 0) {
    func_0x0050ee34();
    func_0x0050ef60();
    func_0x0050f2f0();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x40);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0050adbc; end: 0050ae27;  */

void FUN_0050adbc(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x22;
  
  func_0x0050f504();
  func_0x0050efdc();
  while (unaff_x22 != 0) {
    func_0x0050f564();
    func_0x0050f330();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x004df808(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x0050f264();
  }
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar1 & 0xfffffffffffffffe;
    uVar1 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar1 < 0) {
      uVar1 = *(ulong *)(uVar2 + 0x10);
    }
  }
  func_0x0050f354(uVar1);
  return;
}



/* Entry: 0050ae28; end: 0050ae2b;  */

void FUN_0050ae28(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f5fc();
  FUN_004df824();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f4c8();
    if (param_1 == (ulong *)0x0) {
      FUN_004dfb94();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x004f3ba4();
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050ae2c; end: 0050ae97;  */

void FUN_0050ae2c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fafc0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  FUN_004dfac8(unaff_x19 + 0x18);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_004dfb94();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 0050ae98; end: 0050aec3;  */

undefined8 FUN_0050ae98(undefined8 param_1)

{
  func_0x0050f184();
  FUN_0050aec4(param_1);
  return param_1;
}



/* Entry: 0050aec4; end: 0050aef3;  */

undefined8 FUN_0050aec4(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004f3ce0();
  }
  __ZdlPv();
  func_0x004dfd20(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x004dfce4();
  }
  return unaff_x19;
}



/* Entry: 0050aef4; end: 0050af07;  */

void FUN_0050aef4(void)

{
  FUN_0050ae98();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


