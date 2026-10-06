/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0029f27c; end: 0029fae7;  */

void FUN_0029f27c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029f2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29f2b0)();
  return;
}



/* Entry: 0029fae8; end: 0029fb8b;  */

void FUN_0029fae8(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_24;
  uStack_24 = param_1;
  FUN_0029fcbc(0xfd5d017a11ef3abd,auStack_28,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = uRam0000000000b5dc88;
  extraout_x8[1] = uRam0000000000b5dc90;
  *extraout_x8 = uVar1;
  extraout_x8[2] = uRam0000000000b5dc98;
  return;
}



/* Entry: 0029fb8c; end: 0029fbe7;  */

void FUN_0029fb8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam0000000000b5dc88;
  param_1[1] = uRam0000000000b5dc90;
  *param_1 = uVar1;
  param_1[2] = uRam0000000000b5dc98;
  return;
}



/* Entry: 0029fbe8; end: 0029fcbb;  */

void FUN_0029fbe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029fc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29fc1c)();
  return;
}



/* Entry: 0029fcbc; end: 002a01b7;  */

void FUN_0029fcbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0029fcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x29fcf8)();
  return;
}



/* Entry: 002a01b8; end: 002a0adb;  */

void FUN_002a01b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a01f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a01fc)();
  return;
}



/* Entry: 002a0adc; end: 002a0c2b;  */

/* WARNING: Removing unreachable block (ram,0x002a0bb0) */

void FUN_002a0adc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = 1;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_30;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_002a4874(0x844edcbbfc7e5f96,auStack_40,&puStack_28);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x2a0b88;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_70 = auStack_78;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_002a3578(0x7ddb43f83fb73a4b,auStack_7c,&puStack_70);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002a0c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a0c7c)();
  return;
}



/* Entry: 002a0c2c; end: 002a1437;  */

void FUN_002a0c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a0c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a0c7c)();
  return;
}



/* Entry: 002a1438; end: 002a159b;  */

void FUN_002a1438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_58 = 1;
  puStack_30 = &uStack_48;
  puStack_28 = &uStack_40;
  puStack_20 = &uStack_38;
  puVar1 = auStack_50;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_002a4874(0x932bcc8eda77cb00,puVar1,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_68 = 0x2a14f0;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_88 = auStack_98;
  ppuStack_80 = &puStack_90;
  puStack_90 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_002a4874(0xb3d33ae17fc6e687,&uStack_a0,&puStack_88);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail(uStack_a0);
                    /* WARNING: Could not recover jumptable at 0x002a15d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a15d8)();
  return;
}



/* Entry: 002a159c; end: 002a1747;  */

void FUN_002a159c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a15d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a15d8)();
  return;
}



/* Entry: 002a1748; end: 002a1897;  */

/* WARNING: Removing unreachable block (ram,0x002a1770) */

void FUN_002a1748(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_7c [4];
  ulong uStack_78;
  ulong *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  byte bStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = 0;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_30;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_002a3578(0xf4e71d5d6684516d,&bStack_39,&puStack_28);
  uStack_78 = (ulong)bStack_39;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x2a17f4;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_70 = &uStack_78;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_002a3578(0x41bcbd276d48057f,auStack_7c,&puStack_70);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002a18ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a18f0)();
  return;
}



/* Entry: 002a1898; end: 002a1d0f;  */

void FUN_002a1898(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a18ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a18f0)();
  return;
}



/* Entry: 002a1d10; end: 002a1dc7;  */

void FUN_002a1d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_30 = &uStack_48;
  puStack_28 = &uStack_40;
  puStack_20 = &uStack_38;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_002a3578(0x45ee1780d0e11856,&uStack_50,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x002a1df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a1dfc)();
  return;
}



/* Entry: 002a1dc8; end: 002a1e6b;  */

void FUN_002a1dc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a1df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a1dfc)();
  return;
}



/* Entry: 002a1e6c; end: 002a3217;  */

void FUN_002a1e6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a1edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a1ee0)();
  return;
}



/* Entry: 002a3218; end: 002a3577;  */

void FUN_002a3218(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a3254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a3258)();
  return;
}



/* Entry: 002a3578; end: 002a4873;  */

void FUN_002a3578(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a35cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a35d0)();
  return;
}



/* Entry: 002a4874; end: 002a52d7;  */

void FUN_002a4874(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a48c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a48cc)();
  return;
}



/* Entry: 002a52d8; end: 002a5387;  */

/* WARNING: Removing unreachable block (ram,0x002a5300) */
/* WARNING: Removing unreachable block (ram,0x002a539c) */

void FUN_002a52d8(undefined8 param_1,ulong param_2)

{
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = param_1;
    *(ulong *)((long)register0x00000008 + -0x30) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x28) =
         (undefined1 *)((long)register0x00000008 + -0x38);
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    FUN_002a5e9c(0x78faf3ff1a507e17,(undefined1 *)((long)register0x00000008 + -0x3c),
                 (undefined1 *)((long)register0x00000008 + -0x28));
    param_2 = (ulong)*(uint *)((long)register0x00000008 + -0x3c);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x18))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_002a5388;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    param_1 = 5;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  return;
}



/* Entry: 002a5388; end: 002a53d3;  */

/* WARNING: Removing unreachable block (ram,0x002a539c) */
/* WARNING: Removing unreachable block (ram,0x002a5300) */

void FUN_002a5388(ulong param_1)

{
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -8) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 5;
    *(ulong *)((long)register0x00000008 + -0x30) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x28) =
         (undefined1 *)((long)register0x00000008 + -0x38);
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    FUN_002a5e9c(0x78faf3ff1a507e17,(undefined1 *)((long)register0x00000008 + -0x3c),
                 (undefined1 *)((long)register0x00000008 + -0x28));
    param_1 = (ulong)*(uint *)((long)register0x00000008 + -0x3c);
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x18))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_002a5388;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  return;
}



/* Entry: 002a53d4; end: 002a5e9b;  */

void FUN_002a53d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a5438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a543c)();
  return;
}



/* Entry: 002a5e9c; end: 002a66bb;  */

void FUN_002a5e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a5ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a5ee4)();
  return;
}



/* Entry: 002a66bc; end: 002a7777;  */

/* WARNING: Removing unreachable block (ram,0x002a6794) */

void FUN_002a66bc(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 **ppuStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined8 *puStack_28;
  undefined4 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = 1;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_2c;
  puVar1 = auStack_40;
  uStack_38 = param_1;
  uStack_2c = param_2;
  FUN_002a7778(0xeb56ebfd81118f8c,puVar1,&puStack_28);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x2a676c;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_98 = 0;
  puStack_78 = auStack_88;
  ppuStack_70 = &puStack_80;
  puVar2 = auStack_90;
  puStack_80 = puVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_002a7778(0xe47c12b1103eca0b,puVar2,&puStack_78);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_a8 = 0x2a6818;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_c8 = auStack_d8;
  ppuStack_c0 = &puStack_d0;
  puStack_d0 = puVar2;
  ppuStack_b0 = &puStack_60;
  FUN_002a7778(0xf1899d19233e971f,&uStack_e0,&puStack_c8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return;
  }
  ___stack_chk_fail(uStack_e0);
                    /* WARNING: Could not recover jumptable at 0x002a693c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a6940)();
  return;
}



/* Entry: 002a7778; end: 002a828b;  */

void FUN_002a7778(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a77c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a77c8)();
  return;
}



/* Entry: 002a828c; end: 002a9173;  */

void FUN_002a828c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a82f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a82fc)();
  return;
}



/* Entry: 002a9174; end: 002a92ab;  */

byte FUN_002a9174(void)

{
  return bRam0000000000b5dca0 & 1;
}



/* Entry: 002a92ac; end: 002a9fe3;  */

void FUN_002a92ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x002a9318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2a931c)();
  return;
}



/* Entry: 002a9fe4; end: 002aa037;  */

undefined8 * FUN_002a9fe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 002aa038; end: 002ab38b;  */

/* WARNING: Removing unreachable block (ram,0x002aa08c) */

void FUN_002aa038(void)

{
                    /* WARNING: Could not recover jumptable at 0x002aa0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2aa0b0)();
  return;
}



/* Entry: 002ab38c; end: 002ab3df;  */

undefined8 * FUN_002ab38c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 002ab3e0; end: 002aecfb;  */

void FUN_002ab3e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x002ab45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ab460)();
  return;
}



/* Entry: 002aecfc; end: 002aedd3;  */

undefined8 * FUN_002aecfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 002aedd4; end: 002af6f3;  */

void FUN_002aedd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002aee18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2aee1c)();
  return;
}



/* Entry: 002af6f4; end: 002b07c3;  */

void FUN_002af6f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002af764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2af768)();
  return;
}



/* Entry: 002b07c4; end: 002b15fb;  */

void FUN_002b07c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002b082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2b0830)();
  return;
}



/* Entry: 002b15fc; end: 002b25ef;  */

void FUN_002b15fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x002b1664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2b1668)();
  return;
}



/* Entry: 002b25f0; end: 002b4cf7;  */

void FUN_002b25f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x002b266c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2b2670)();
  return;
}



/* Entry: 002b4cf8; end: 002b4dab;  */

undefined8 * FUN_002b4cf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 002b4dac; end: 002b7ed7;  */

void FUN_002b4dac(void)

{
                    /* WARNING: Could not recover jumptable at 0x002b4e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2b4e2c)();
  return;
}



/* Entry: 002b7ed8; end: 002ce267;  */

void FUN_002b7ed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x002b7f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2b7f6c)();
  return;
}



/* Entry: 002ce268; end: 002cf837;  */

void FUN_002ce268(void)

{
                    /* WARNING: Could not recover jumptable at 0x002ce2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ce2d0)();
  return;
}



/* Entry: 002cf838; end: 002d144f;  */

void FUN_002cf838(void)

{
                    /* WARNING: Could not recover jumptable at 0x002cf89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2cf8a0)();
  return;
}



/* Entry: 002d1450; end: 002d2467;  */

void FUN_002d1450(void)

{
                    /* WARNING: Could not recover jumptable at 0x002d14a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2d14ac)();
  return;
}



/* Entry: 002d2468; end: 002d276f;  */

void FUN_002d2468(void)

{
                    /* WARNING: Could not recover jumptable at 0x002d24b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2d24b4)();
  return;
}



/* Entry: 002d2770; end: 002ef33f;  */

void FUN_002d2770(void)

{
                    /* WARNING: Could not recover jumptable at 0x002d27fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2d2800)();
  return;
}



/* Entry: 002ef340; end: 002ef697;  */

void FUN_002ef340(void)

{
                    /* WARNING: Could not recover jumptable at 0x002ef394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ef398)();
  return;
}



/* Entry: 002ef698; end: 002efc23;  */

void FUN_002ef698(void)

{
                    /* WARNING: Could not recover jumptable at 0x002ef728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ef72c)();
  return;
}



/* Entry: 002efc24; end: 002f029b;  */

void FUN_002efc24(void)

{
                    /* WARNING: Could not recover jumptable at 0x002efc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2efc6c)();
  return;
}



/* Entry: 002f029c; end: 002f02e7;  */

/* WARNING: Removing unreachable block (ram,0x002f02ac) */

undefined8 FUN_002f029c(void)

{
  return 0;
}



/* Entry: 002f02e8; end: 002f057f;  */

void FUN_002f02e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f0330)();
  return;
}



/* Entry: 002f0580; end: 002f1b5b;  */

void FUN_002f0580(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f05fc)();
  return;
}



/* Entry: 002f1b5c; end: 002f1cf7;  */

/* WARNING: Removing unreachable block (ram,0x002f1d4c) */

long * FUN_002f1b5c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
    func_0x002f1d5c();
LAB_002f1ce0:
    FUN_00293324();
    FUN_002f1cf8(&lStack_68);
    __Unwind_Resume();
    lVar7 = param_1[2];
    while (lVar7 != param_1[1]) {
      lVar7 = lVar7 + -0x30;
      param_1[2] = lVar7;
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar8 = lVar5 * 0x5555555555555556;
  if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
    uVar8 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar8 = 0x555555555555555;
  }
  plStack_48 = param_1;
  if (uVar8 == 0) {
    lVar5 = 0;
  }
  else {
    if (0x555555555555555 < uVar8) goto LAB_002f1ce0;
    lVar5 = uVar8 * 0x30;
    __Znwm();
  }
  puVar9 = (undefined8 *)(lVar5 + lVar7 * 0x10);
  lStack_50 = lVar5 + uVar8 * 0x30;
  *puVar9 = *param_2;
  lStack_68 = lVar5;
  puStack_60 = puVar9;
  puStack_58 = puVar9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_(puVar9 + 1,param_2 + 1);
  uVar11 = param_2[4];
  puVar9[5] = param_2[5];
  puVar9[4] = uVar11;
  plVar2 = puStack_58 + 6;
  puVar10 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)puStack_60 + ((long)puVar10 - (long)puVar4));
  puVar9 = puVar10;
  puVar6 = puVar3;
  if ((long)puVar10 - (long)puVar4 != 0) {
    do {
      *puVar6 = *puVar9;
      uVar12 = puVar9[2];
      uVar11 = puVar9[1];
      puVar6[3] = puVar9[3];
      puVar6[2] = uVar12;
      puVar6[1] = uVar11;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[1] = 0;
      uVar11 = puVar9[4];
      puVar6[5] = puVar9[5];
      puVar6[4] = uVar11;
      puVar9 = puVar9 + 6;
      puVar6 = puVar6 + 6;
    } while (puVar9 != puVar4);
    do {
      if (*(char *)((long)puVar10 + 0x1f) < '\0') {
        __ZdlPv(puVar10[1]);
      }
      puVar10 = puVar10 + 6;
    } while (puVar10 != puVar4);
    puVar10 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)plVar2;
  param_1[2] = lStack_50;
  if (puVar10 != (undefined8 *)0x0) {
    __ZdlPv(puVar10);
  }
  return plVar2;
}



/* Entry: 002f1cf8; end: 002f1d67;  */

/* WARNING: Removing unreachable block (ram,0x002f1d4c) */

long * FUN_002f1cf8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 002f1d68; end: 002f1f37;  */

void FUN_002f1d68(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f1da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f1dac)();
  return;
}



/* Entry: 002f1f38; end: 002f223b;  */

/* WARNING: Removing unreachable block (ram,0x002f1f48) */

long FUN_002f1f38(ulong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = (param_2 * 0xe | 0xb8U) - (param_2 * 7 ^ 0x5cU);
  iVar2 = (uVar6 * 7 ^ 0x5f) + (uVar6 * 0xe & 0xbe);
  iVar1 = iVar2 * 7 + 0x62;
  uVar4 = iVar2 * 0x31 + 0x313;
  uVar10 = (uint)(param_1 >> 0x18);
  uVar11 = (uint)(param_1 >> 0x20);
  iVar5 = uVar4 * 0x31 + 0x343;
  uVar3 = (iVar5 * 7 ^ 0x6eU) + (iVar5 * 0xe & 0xdcU);
  uVar9 = ((param_1 >> 0x30) - (ulong)uVar3) * 0x100;
  bVar8 = (char)uVar3 * '\a' + 0x71;
  bVar7 = (byte)(param_1 >> 0x38);
  return ((uVar9 ^ 0xffffffffffffffff | 0xff0b) + uVar9 + 1 |
         (ulong)(((uVar11 >> 8) - iVar5) * 0x10000 + 0x2b000000) & 0xff0000 |
         (ulong)((uVar11 + iVar1 * -0x31) * 0x1000000 + 0xd5000000) |
         ((ulong)(uVar10 & (uVar4 ^ 0xffffffff)) << 0x21) - ((ulong)(uVar10 ^ uVar4) << 0x20) &
         0xff00000000 |
         ((ulong)(uVar6 ^ (uint)param_1) << 0x38) -
         ((ulong)(uVar6 & ((uint)param_1 ^ 0xffffffff)) << 0x39) |
         ((ulong)(((uint)(param_1 >> 8) & 0xffffff) - iVar2) & 0xff) << 0x30 |
         ((ulong)(((uint)(param_1 >> 0x10) & 0xffff) - iVar1) & 0xff) << 0x28) +
         (ulong)(byte)((bVar7 ^ bVar8) + (bVar8 & (bVar7 ^ 0xff)) * -2) + -0x60a40b0b3f6fb5b2;
}



/* Entry: 002f223c; end: 002f2357;  */

void FUN_002f223c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f2260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f2264)();
  return;
}



/* Entry: 002f2358; end: 002f24fb;  */

/* WARNING: Removing unreachable block (ram,0x002f2450) */
/* WARNING: Removing unreachable block (ram,0x002f2520) */

void FUN_002f2358(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 **UNRECOVERED_JUMPTABLE;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_9d;
  undefined4 uStack_9c;
  undefined8 *puStack_98;
  undefined **ppuStack_90;
  undefined1 *puStack_88;
  undefined4 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined8 *puStack_38;
  undefined **ppuStack_30;
  undefined1 *puStack_28;
  undefined4 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_58 = 1;
  puStack_38 = &uStack_50;
  puStack_48 = &UNK_007ef430;
  ppuStack_30 = &puStack_48;
  uStack_3d = 0;
  puStack_28 = &uStack_3d;
  uStack_3c = 0x89e79ab3;
  puStack_20 = &uStack_3c;
  uStack_50 = param_1;
  func_0x002f25b0(0x831852fa0ea5545d,&uStack_50,&puStack_38);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  uVar1 = uStack_50;
  ___stack_chk_fail();
  uStack_68 = 0x2f2428;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_98 = &uStack_b0;
  puStack_a8 = &UNK_007ef440;
  ppuStack_90 = &puStack_a8;
  uStack_9d = 1;
  puStack_88 = &uStack_9d;
  uStack_9c = 0x475064ba;
  puStack_80 = &uStack_9c;
  UNRECOVERED_JUMPTABLE = &puStack_98;
  uStack_b0 = uVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x002f25b0(0x831852fa0ea5545d,&uStack_b0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  uVar1 = uStack_b0;
  ___stack_chk_fail(uStack_b0);
  _calloc(1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x002f2568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 002f24fc; end: 002f256b;  */

/* WARNING: Removing unreachable block (ram,0x002f2520) */

void FUN_002f24fc(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  _calloc(1,param_1);
                    /* WARNING: Could not recover jumptable at 0x002f2568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 002f256c; end: 002f278b;  */

void FUN_002f256c(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x002f25ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 002f278c; end: 002f27db;  */

/* WARNING: Removing unreachable block (ram,0x002f279c) */

undefined8 FUN_002f278c(void)

{
  return uRam0000000000b5dcc8;
}



/* Entry: 002f27dc; end: 002f2883;  */

/* WARNING: Removing unreachable block (ram,0x002f2804) */
/* WARNING: Removing unreachable block (ram,0x002f28b4) */

ulong FUN_002f27dc(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_b8 [64];
  long lStack_78;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002f2f90(0x74441a16266f9f04,&uStack_30,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return uStack_30;
  }
  ___stack_chk_fail(uStack_30);
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_002f1d68();
  uRam0000000000afa095 = 1;
  uVar1 = uRam0000000000b65cd0;
  FUN_00316cbc(uRam0000000000b65cd0,uRam0000000000b65cd8);
  _free(uRam0000000000b65cd0);
  uRam0000000000b65cd0 = 0;
  uRam0000000000b65cd8 = 0;
  _pthread_attr_init(auStack_b8);
  _pthread_attr_set_qos_class_np(auStack_b8,0x11,0);
  uVar2 = 0xb5dcb8;
  _pthread_create(0xb5dcb8,auStack_b8,FUN_002f27dc,uVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return uVar2;
  }
  ___stack_chk_fail();
  return (ulong)(bRam0000000000b5dcc0 & 1);
}



/* Entry: 002f2884; end: 002f297f;  */

/* WARNING: Removing unreachable block (ram,0x002f28b4) */

ulong FUN_002f2884(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_002f1d68();
  uRam0000000000afa095 = 1;
  uVar1 = uRam0000000000b65cd0;
  FUN_00316cbc(uRam0000000000b65cd0,uRam0000000000b65cd8);
  _free(uRam0000000000b65cd0);
  uRam0000000000b65cd0 = 0;
  uRam0000000000b65cd8 = 0;
  _pthread_attr_init(auStack_78);
  _pthread_attr_set_qos_class_np(auStack_78,0x11,0);
  uVar2 = 0xb5dcb8;
  _pthread_create(0xb5dcb8,auStack_78,FUN_002f27dc,uVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return uVar2;
  }
  ___stack_chk_fail();
  return (ulong)(bRam0000000000b5dcc0 & 1);
}



/* Entry: 002f2980; end: 002f29d3;  */

byte FUN_002f2980(void)

{
  return bRam0000000000b5dcc0 & 1;
}



/* Entry: 002f29d4; end: 002f2c6f;  */

void FUN_002f29d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f2a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f2a18)();
  return;
}



/* Entry: 002f2c70; end: 002f2cc3;  */

/* WARNING: Removing unreachable block (ram,0x002f2c80) */

byte FUN_002f2c70(void)

{
  return bRam0000000000b5dcc1 & 1;
}



/* Entry: 002f2cc4; end: 002f2f8f;  */

void FUN_002f2cc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f2d14)();
  return;
}



/* Entry: 002f2f90; end: 002f35fb;  */

void FUN_002f2f90(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f2fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f2ff0)();
  return;
}



/* Entry: 002f35fc; end: 002f3683;  */

long FUN_002f35fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x18) = lVar1;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 002f3684; end: 002f372b;  */

/* WARNING: Removing unreachable block (ram,0x002f36ac) */

void FUN_002f3684(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002f6160(0x1fc6524f3e11f075,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x002f3798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f379c)();
  return;
}



/* Entry: 002f372c; end: 002f60ff;  */

void FUN_002f372c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f3798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f379c)();
  return;
}



/* Entry: 002f6100; end: 002f6153;  */

undefined8 * FUN_002f6100(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_009da960;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 002f6154; end: 002f615f;  */

void FUN_002f6154(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x002f61c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f61cc)();
  return;
}



/* Entry: 002f6160; end: 002f78c7;  */

void FUN_002f6160(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f61c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f61cc)();
  return;
}



/* Entry: 002f78c8; end: 002f79c3;  */

void FUN_002f78c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f78f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f78f4)();
  return;
}



/* Entry: 002f79c4; end: 002f7a2f;  */

/* WARNING: Removing unreachable block (ram,0x002f79dc) */

void FUN_002f79c4(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_002f78c8(0x7e1ba7e74ec63be8,auStack_1c,auStack_18);
  return;
}



/* Entry: 002f7a30; end: 002f7a83;  */

/* WARNING: Removing unreachable block (ram,0x002f7a40) */

byte FUN_002f7a30(void)

{
  return bRam0000000000b5dcf8 & 1;
}



/* Entry: 002f7a84; end: 002f7af3;  */

undefined4 FUN_002f7a84(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0000000000b5dd00;
  FUN_002f256c(puRam0000000000b5dd00,0x3312540,0x2f2428);
  return *puVar1;
}



/* Entry: 002f7af4; end: 002f7b97;  */

/* WARNING: Removing unreachable block (ram,0x002f7b04) */

byte FUN_002f7af4(void)

{
  return bRam0000000000b5dcf9 & 1;
}



/* Entry: 002f7b98; end: 002f81db;  */

void FUN_002f7b98(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f7be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f7be4)();
  return;
}



/* Entry: 002f81dc; end: 002f827f;  */

void FUN_002f81dc(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002f8280(0xd7ed5cf79fe4be42,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002f82c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f82c4)();
  return;
}



/* Entry: 002f8280; end: 002f864f;  */

void FUN_002f8280(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f82c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f82c4)();
  return;
}



/* Entry: 002f8650; end: 002f869f;  */

/* WARNING: Removing unreachable block (ram,0x002f8660) */

undefined8 FUN_002f8650(void)

{
  return uRam0000000000b5dd48;
}



/* Entry: 002f86a0; end: 002f8747;  */

/* WARNING: Removing unreachable block (ram,0x002f86c8) */

void FUN_002f86a0(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002fa05c(0x139cfa941be8475d,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x002f8774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f8778)();
  return;
}



/* Entry: 002f8748; end: 002f87ef;  */

void FUN_002f8748(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f8774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f8778)();
  return;
}



/* Entry: 002f87f0; end: 002f883f;  */

/* WARNING: Removing unreachable block (ram,0x002f8800) */

undefined8 FUN_002f87f0(void)

{
  return uRam0000000000b5dd50;
}



/* Entry: 002f8840; end: 002f88e3;  */

void FUN_002f8840(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002fb510(0x9e43f9728a0caaa,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002f8914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f8918)();
  return;
}



/* Entry: 002f88e4; end: 002f899b;  */

void FUN_002f88e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f8914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f8918)();
  return;
}



/* Entry: 002f899c; end: 002f8a83;  */

void FUN_002f899c(undefined8 param_1)

{
  uRam0000000000b5dd20 = param_1;
  return;
}



/* Entry: 002f8a84; end: 002f9b8b;  */

void FUN_002f8a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f8ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f8ae4)();
  return;
}



/* Entry: 002f9b8c; end: 002f9bdb;  */

/* WARNING: Removing unreachable block (ram,0x002f9b9c) */

undefined8 FUN_002f9b8c(void)

{
  return uRam0000000000b5dd58;
}



/* Entry: 002f9bdc; end: 002f9c7f;  */

/* WARNING: Removing unreachable block (ram,0x002f9c04) */
/* WARNING: Removing unreachable block (ram,0x002f9c9c) */

void FUN_002f9bdc(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002fb510(0xacefd856899b192e,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002f9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f9cb0)();
  return;
}



/* Entry: 002f9c80; end: 002f9d27;  */

/* WARNING: Removing unreachable block (ram,0x002f9c9c) */

void FUN_002f9c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f9cb0)();
  return;
}



/* Entry: 002f9d28; end: 002f9dc3;  */

void FUN_002f9d28(undefined8 param_1)

{
  uRam0000000000b5dd30 = param_1;
  return;
}



/* Entry: 002f9dc4; end: 002f9fef;  */

void FUN_002f9dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f9e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f9e08)();
  return;
}



/* Entry: 002f9ff0; end: 002fa05b;  */

/* WARNING: Removing unreachable block (ram,0x002fa008) */

void FUN_002f9ff0(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_002fb510(0x529dc412590ff3dc,auStack_1c,auStack_18);
  return;
}



/* Entry: 002fa05c; end: 002fb50f;  */

void FUN_002fa05c(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fa0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fa0d0)();
  return;
}



/* Entry: 002fb510; end: 002fcf93;  */

void FUN_002fb510(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fb57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fb580)();
  return;
}



/* Entry: 002fcf94; end: 002fd1b3;  */

void FUN_002fcf94(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fcfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fcfcc)();
  return;
}



/* Entry: 002fd1b4; end: 002fd25f;  */

/* WARNING: Removing unreachable block (ram,0x002fd1dc) */

void FUN_002fd1b4(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_3c [4];
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined8 *puStack_28;
  undefined4 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_2c;
  uStack_38 = param_1;
  uStack_2c = param_2;
  FUN_002fd6ac(0xc1616730adb13cd4,auStack_3c,&puStack_28);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002fd29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fd2a0)();
  return;
}



/* Entry: 002fd260; end: 002fd523;  */

void FUN_002fd260(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fd29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fd2a0)();
  return;
}


