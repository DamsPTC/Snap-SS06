/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104b37108; end: 104b37187;  */

/* WARNING: Removing unreachable block (ram,0x000104b37124) */

void FUN_104b37108(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104b37188; end: 104b3722f;  */

/* WARNING: Removing unreachable block (ram,0x000104b371b0) */
/* WARNING: Removing unreachable block (ram,0x000104b3724c) */

ulong FUN_104b37188(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  uVar1 = 0xf6cd3247c0b3bdf1;
  uStack_28 = param_1;
  FUN_104b372a8(0xf6cd3247c0b3bdf1,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(0x1130a65f0);
  uVar1 = (ulong)uRam00000001130a65e8;
  __ZNSt3__15mutex6unlockEv(0x1130a65f0);
  return uVar1;
}



/* Entry: 104b37230; end: 104b372a7;  */

/* WARNING: Removing unreachable block (ram,0x000104b3724c) */

undefined4 FUN_104b37230(void)

{
  undefined4 uVar1;
  
  __ZNSt3__15mutex4lockEv(0x1130a65f0);
  uVar1 = uRam00000001130a65e8;
  __ZNSt3__15mutex6unlockEv(0x1130a65f0);
  return uVar1;
}



/* Entry: 104b372a8; end: 104b373eb;  */

void FUN_104b372a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b372d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b372dc)();
  return;
}



/* Entry: 104b373ec; end: 104b378bb;  */

void FUN_104b373ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b37434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b37438)();
  return;
}



/* Entry: 104b378bc; end: 104b37927;  */

void FUN_104b378bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = uRam00000001136a2cf0;
  uVar2 = uRam00000001136a2ce8;
  uVar1 = uRam00000001136a2cd8;
  param_1[5] = uRam00000001136a2ce0;
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = uRam00000001136a2cf8;
  param_1[9] = uRam00000001136a2d00;
  param_1[8] = uVar1;
  param_1[10] = uRam00000001136a2d08;
  uVar3 = uRam00000001136a2cd0;
  uVar2 = uRam00000001136a2cc8;
  uVar1 = uRam00000001136a2cb8;
  param_1[1] = uRam00000001136a2cc0;
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 104b37928; end: 104b37a53;  */

void FUN_104b37928(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3794c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b37950)();
  return;
}



/* Entry: 104b37a54; end: 104b3816b;  */

/* WARNING: Removing unreachable block (ram,0x000104b37a80) */

void FUN_104b37a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b37a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b37a9c)();
  return;
}



/* Entry: 104b3816c; end: 104b38213;  */

void FUN_104b3816c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b38188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3818c)();
  return;
}



/* Entry: 104b38214; end: 104b382c7;  */

void FUN_104b38214(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b38248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3824c)();
  return;
}



/* Entry: 104b382c8; end: 104b38d9f;  */

void FUN_104b382c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b38328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3832c)();
  return;
}



/* Entry: 104b38da0; end: 104b38eb7;  */

void FUN_104b38da0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b38dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b38df0)();
  return;
}



/* Entry: 104b38eb8; end: 104b3946b;  */

void FUN_104b38eb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b38ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b38ee4)();
  return;
}



/* Entry: 104b3946c; end: 104b395cf;  */

void FUN_104b3946c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b39490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b39494)();
  return;
}



/* Entry: 104b395d0; end: 104b39e3b;  */

void FUN_104b395d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b39600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b39604)();
  return;
}



/* Entry: 104b39e3c; end: 104b39edf;  */

void FUN_104b39e3c(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_24;
  uStack_24 = param_1;
  FUN_104b3a010(0xfd5d017a11ef3abd,auStack_28,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = uRam00000001136a2d10;
  extraout_x8[1] = uRam00000001136a2d18;
  *extraout_x8 = uVar1;
  extraout_x8[2] = uRam00000001136a2d20;
  return;
}



/* Entry: 104b39ee0; end: 104b39f3b;  */

void FUN_104b39ee0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136a2d10;
  param_1[1] = uRam00000001136a2d18;
  *param_1 = uVar1;
  param_1[2] = uRam00000001136a2d20;
  return;
}



/* Entry: 104b39f3c; end: 104b3a00f;  */

void FUN_104b39f3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b39f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b39f70)();
  return;
}



/* Entry: 104b3a010; end: 104b3a50b;  */

void FUN_104b3a010(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3a04c)();
  return;
}



/* Entry: 104b3a50c; end: 104b3ae2f;  */

void FUN_104b3a50c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3a54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3a550)();
  return;
}



/* Entry: 104b3ae30; end: 104b3af7f;  */

/* WARNING: Removing unreachable block (ram,0x000104b3af04) */

void FUN_104b3ae30(undefined8 param_1,undefined8 param_2)

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
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 1;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_30;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_104b3ebc8(0x844edcbbfc7e5f96,auStack_40,&puStack_28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x104b3aedc;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = auStack_78;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_104b3d8cc(0x7ddb43f83fb73a4b,auStack_7c,&puStack_70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104b3afcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3afd0)();
  return;
}



/* Entry: 104b3af80; end: 104b3b78b;  */

void FUN_104b3af80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3afcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3afd0)();
  return;
}



/* Entry: 104b3b78c; end: 104b3b8ef;  */

void FUN_104b3b78c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 1;
  puStack_30 = &uStack_48;
  puStack_28 = &uStack_40;
  puStack_20 = &uStack_38;
  puVar1 = auStack_50;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_104b3ebc8(0x932bcc8eda77cb00,puVar1,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_68 = 0x104b3b844;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = auStack_98;
  ppuStack_80 = &puStack_90;
  puStack_90 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_104b3ebc8(0xb3d33ae17fc6e687,&uStack_a0,&puStack_88);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail(uStack_a0);
                    /* WARNING: Could not recover jumptable at 0x000104b3b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3b92c)();
  return;
}



/* Entry: 104b3b8f0; end: 104b3ba9b;  */

void FUN_104b3b8f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3b92c)();
  return;
}



/* Entry: 104b3ba9c; end: 104b3bbeb;  */

/* WARNING: Removing unreachable block (ram,0x000104b3bac4) */

void FUN_104b3ba9c(undefined8 param_1,undefined8 param_2)

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
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_30;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_104b3d8cc(0xf4e71d5d6684516d,&bStack_39,&puStack_28);
  uStack_78 = (ulong)bStack_39;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x104b3bb48;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &uStack_78;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_104b3d8cc(0x41bcbd276d48057f,auStack_7c,&puStack_70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104b3bc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3bc44)();
  return;
}



/* Entry: 104b3bbec; end: 104b3c063;  */

void FUN_104b3bbec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3bc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3bc44)();
  return;
}



/* Entry: 104b3c064; end: 104b3c11b;  */

void FUN_104b3c064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_30 = &uStack_48;
  puStack_28 = &uStack_40;
  puStack_20 = &uStack_38;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_104b3d8cc(0x45ee1780d0e11856,&uStack_50,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x000104b3c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3c150)();
  return;
}



/* Entry: 104b3c11c; end: 104b3c1bf;  */

void FUN_104b3c11c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3c150)();
  return;
}



/* Entry: 104b3c1c0; end: 104b3d56b;  */

void FUN_104b3c1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3c234)();
  return;
}



/* Entry: 104b3d56c; end: 104b3d8cb;  */

void FUN_104b3d56c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3d5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3d5ac)();
  return;
}



/* Entry: 104b3d8cc; end: 104b3ebc7;  */

void FUN_104b3d8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3d920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3d924)();
  return;
}



/* Entry: 104b3ebc8; end: 104b3f62b;  */

void FUN_104b3ebc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3ec20)();
  return;
}



/* Entry: 104b3f62c; end: 104b3f6db;  */

/* WARNING: Removing unreachable block (ram,0x000104b3f654) */
/* WARNING: Removing unreachable block (ram,0x000104b3f6f0) */

void FUN_104b3f62c(undefined8 param_1,ulong param_2)

{
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = param_1;
    *(ulong *)((long)register0x00000008 + -0x30) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x28) =
         (undefined1 *)((long)register0x00000008 + -0x38);
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    FUN_104b401f0(0x78faf3ff1a507e17,(undefined1 *)((long)register0x00000008 + -0x3c),
                  (undefined1 *)((long)register0x00000008 + -0x28));
    param_2 = (ulong)*(uint *)((long)register0x00000008 + -0x3c);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x18))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_104b3f6dc;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    param_1 = 5;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  return;
}



/* Entry: 104b3f6dc; end: 104b3f727;  */

/* WARNING: Removing unreachable block (ram,0x000104b3f6f0) */
/* WARNING: Removing unreachable block (ram,0x000104b3f654) */

void FUN_104b3f6dc(ulong param_1)

{
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -8) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 5;
    *(ulong *)((long)register0x00000008 + -0x30) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x28) =
         (undefined1 *)((long)register0x00000008 + -0x38);
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    FUN_104b401f0(0x78faf3ff1a507e17,(undefined1 *)((long)register0x00000008 + -0x3c),
                  (undefined1 *)((long)register0x00000008 + -0x28));
    param_1 = (ulong)*(uint *)((long)register0x00000008 + -0x3c);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x18))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_104b3f6dc;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  return;
}



/* Entry: 104b3f728; end: 104b401ef;  */

void FUN_104b3f728(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b3f78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b3f790)();
  return;
}



/* Entry: 104b401f0; end: 104b40a0f;  */

void FUN_104b401f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b40234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b40238)();
  return;
}



/* Entry: 104b40a10; end: 104b41acb;  */

/* WARNING: Removing unreachable block (ram,0x000104b40ae8) */

void FUN_104b40a10(undefined8 param_1,undefined4 param_2)

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
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 1;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_2c;
  puVar1 = auStack_40;
  uStack_38 = param_1;
  uStack_2c = param_2;
  FUN_104b41acc(0xeb56ebfd81118f8c,puVar1,&puStack_28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_58 = 0x104b40ac0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 0;
  puStack_78 = auStack_88;
  ppuStack_70 = &puStack_80;
  puVar2 = auStack_90;
  puStack_80 = puVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_104b41acc(0xe47c12b1103eca0b,puVar2,&puStack_78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_a8 = 0x104b40b6c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = auStack_d8;
  ppuStack_c0 = &puStack_d0;
  puStack_d0 = puVar2;
  ppuStack_b0 = &puStack_60;
  FUN_104b41acc(0xf1899d19233e971f,&uStack_e0,&puStack_c8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail(uStack_e0);
                    /* WARNING: Could not recover jumptable at 0x000104b40c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b40c94)();
  return;
}



/* Entry: 104b41acc; end: 104b425df;  */

void FUN_104b41acc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b41b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b41b1c)();
  return;
}



/* Entry: 104b425e0; end: 104b434bb;  */

void FUN_104b425e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b4264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b42650)();
  return;
}



/* Entry: 104b434bc; end: 104b435f3;  */

byte FUN_104b434bc(void)

{
  return bRam00000001136a2d28 & 1;
}



/* Entry: 104b435f4; end: 104b4432b;  */

void FUN_104b435f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b43660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b43664)();
  return;
}



/* Entry: 104b4432c; end: 104b4437f;  */

undefined8 * FUN_104b4432c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_1107e2650;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 104b44380; end: 104b456d3;  */

/* WARNING: Removing unreachable block (ram,0x000104b443d4) */

void FUN_104b44380(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b443f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b443f8)();
  return;
}



/* Entry: 104b456d4; end: 104b45727;  */

undefined8 * FUN_104b456d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_1107e2650;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 104b45728; end: 104b49043;  */

void FUN_104b45728(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b457a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b457a8)();
  return;
}



/* Entry: 104b49044; end: 104b4911b;  */

undefined8 * FUN_104b49044(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_1107e2650;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 104b4911c; end: 104b49a3b;  */

void FUN_104b4911c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b49160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b49164)();
  return;
}



/* Entry: 104b49a3c; end: 104b4ab0b;  */

void FUN_104b49a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b49aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b49ab0)();
  return;
}



/* Entry: 104b4ab0c; end: 104b4b943;  */

void FUN_104b4ab0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b4ab74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b4ab78)();
  return;
}



/* Entry: 104b4b944; end: 104b4c937;  */

void FUN_104b4b944(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b4b9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b4b9b0)();
  return;
}



/* Entry: 104b4c938; end: 104b4f03f;  */

void FUN_104b4c938(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b4c9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b4c9b8)();
  return;
}



/* Entry: 104b4f040; end: 104b4f0f3;  */

undefined8 * FUN_104b4f040(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_1107e2650;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 104b4f0f4; end: 104b5221f;  */

void FUN_104b4f0f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b4f170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b4f174)();
  return;
}



/* Entry: 104b52220; end: 104b685af;  */

void FUN_104b52220(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b522b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b522b4)();
  return;
}



/* Entry: 104b685b0; end: 104b69b7f;  */

void FUN_104b685b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b68614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b68618)();
  return;
}



/* Entry: 104b69b80; end: 104b6b797;  */

void FUN_104b69b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b69be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b69be8)();
  return;
}



/* Entry: 104b6b798; end: 104b6c7af;  */

void FUN_104b6b798(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b6b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b6b7f4)();
  return;
}



/* Entry: 104b6c7b0; end: 104b6cab7;  */

void FUN_104b6c7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b6c7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b6c7fc)();
  return;
}



/* Entry: 104b6cab8; end: 104b89687;  */

void FUN_104b6cab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b6cb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b6cb48)();
  return;
}



/* Entry: 104b89688; end: 104b899df;  */

void FUN_104b89688(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b896dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b896e0)();
  return;
}



/* Entry: 104b899e0; end: 104b89f6b;  */

void FUN_104b899e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b89a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b89a74)();
  return;
}



/* Entry: 104b89f6c; end: 104b8a5e3;  */

void FUN_104b89f6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b89fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b89fb4)();
  return;
}



/* Entry: 104b8a5e4; end: 104b8a62f;  */

/* WARNING: Removing unreachable block (ram,0x000104b8a5f4) */

undefined8 FUN_104b8a5e4(void)

{
  return 0x100000000;
}



/* Entry: 104b8a630; end: 104b8a8c7;  */

void FUN_104b8a630(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8a674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8a678)();
  return;
}



/* Entry: 104b8a8c8; end: 104b8bea3;  */

void FUN_104b8a8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8a940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8a944)();
  return;
}



/* Entry: 104b8bea4; end: 104b8c03f;  */

/* WARNING: Removing unreachable block (ram,0x000104b8c094) */

long * FUN_104b8bea4(long *param_1,undefined8 *param_2)

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
    func_0x000104b8c0a4();
LAB_104b8c028:
    func_0x00010b2ed0ac();
    FUN_104b8c040(&lStack_68);
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
    if (0x555555555555555 < uVar8) goto LAB_104b8c028;
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



/* Entry: 104b8c040; end: 104b8c0af;  */

/* WARNING: Removing unreachable block (ram,0x000104b8c094) */

long * FUN_104b8c040(long *param_1)

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



/* Entry: 104b8c0b0; end: 104b8c27f;  */

void FUN_104b8c0b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8c0f4)();
  return;
}



/* Entry: 104b8c280; end: 104b8c583;  */

/* WARNING: Removing unreachable block (ram,0x000104b8c290) */

long FUN_104b8c280(ulong param_1,int param_2)

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



/* Entry: 104b8c584; end: 104b8c69f;  */

void FUN_104b8c584(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8c5ac)();
  return;
}



/* Entry: 104b8c6a0; end: 104b8c843;  */

/* WARNING: Removing unreachable block (ram,0x000104b8c798) */
/* WARNING: Removing unreachable block (ram,0x000104b8c868) */

void FUN_104b8c6a0(undefined8 param_1)

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
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 1;
  puStack_38 = &uStack_50;
  puStack_48 = &UNK_10dd58ee0;
  ppuStack_30 = &puStack_48;
  uStack_3d = 0;
  puStack_28 = &uStack_3d;
  uStack_3c = 0x89e79ab3;
  puStack_20 = &uStack_3c;
  uStack_50 = param_1;
  func_0x000104b8c8f8(0x831852fa0ea5545d,&uStack_50,&puStack_38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  uVar1 = uStack_50;
  ___stack_chk_fail();
  uStack_68 = 0x104b8c770;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = &uStack_b0;
  puStack_a8 = &UNK_10dd58ef0;
  ppuStack_90 = &puStack_a8;
  uStack_9d = 1;
  puStack_88 = &uStack_9d;
  uStack_9c = 0x475064ba;
  puStack_80 = &uStack_9c;
  UNRECOVERED_JUMPTABLE = &puStack_98;
  uStack_b0 = uVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000104b8c8f8(0x831852fa0ea5545d,&uStack_b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  uVar1 = uStack_b0;
  ___stack_chk_fail(uStack_b0);
  _calloc(1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104b8c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104b8c844; end: 104b8c8b3;  */

/* WARNING: Removing unreachable block (ram,0x000104b8c868) */

void FUN_104b8c844(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  _calloc(1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000104b8c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104b8c8b4; end: 104b8cad3;  */

void FUN_104b8c8b4(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8c8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104b8cad4; end: 104b8cb23;  */

/* WARNING: Removing unreachable block (ram,0x000104b8cae4) */

undefined8 FUN_104b8cad4(void)

{
  return uRam00000001136a2d50;
}



/* Entry: 104b8cb24; end: 104b8cbcb;  */

/* WARNING: Removing unreachable block (ram,0x000104b8cb4c) */
/* WARNING: Removing unreachable block (ram,0x000104b8cbfc) */

ulong FUN_104b8cb24(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_b8 [64];
  long lStack_78;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_104b8d60c(0x74441a16266f9f04,&uStack_30,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uStack_30;
  }
  ___stack_chk_fail(uStack_30);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104b8c0b0();
  uRam00000001130a7f55 = 1;
  uVar1 = uRam0000000113815c90;
  FUN_104bb1088(uRam0000000113815c90,uRam0000000113815c98);
  _free(uRam0000000113815c90);
  uRam0000000113815c90 = 0;
  uRam0000000113815c98 = 0;
  _pthread_attr_init(auStack_b8);
  _pthread_attr_set_qos_class_np(auStack_b8,0x11,0);
  uVar2 = 0x1136a2d40;
  _pthread_create(0x1136a2d40,auStack_b8,FUN_104b8cb24,uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar2;
  }
  ___stack_chk_fail();
  return (ulong)(bRam00000001136a2d48 & 1);
}



/* Entry: 104b8cbcc; end: 104b8ccc7;  */

/* WARNING: Removing unreachable block (ram,0x000104b8cbfc) */

ulong FUN_104b8cbcc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104b8c0b0();
  uRam00000001130a7f55 = 1;
  uVar1 = uRam0000000113815c90;
  FUN_104bb1088(uRam0000000113815c90,uRam0000000113815c98);
  _free(uRam0000000113815c90);
  uRam0000000113815c90 = 0;
  uRam0000000113815c98 = 0;
  _pthread_attr_init(auStack_78);
  _pthread_attr_set_qos_class_np(auStack_78,0x11,0);
  uVar2 = 0x1136a2d40;
  _pthread_create(0x1136a2d40,auStack_78,FUN_104b8cb24,uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar2;
  }
  ___stack_chk_fail();
  return (ulong)(bRam00000001136a2d48 & 1);
}



/* Entry: 104b8ccc8; end: 104b8cd1b;  */

byte FUN_104b8ccc8(void)

{
  return bRam00000001136a2d48 & 1;
}



/* Entry: 104b8cd1c; end: 104b8cfb7;  */

void FUN_104b8cd1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8cd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8cd60)();
  return;
}



/* Entry: 104b8cfb8; end: 104b8d00b;  */

/* WARNING: Removing unreachable block (ram,0x000104b8cfc8) */

byte FUN_104b8cfb8(void)

{
  return bRam00000001136a2d49 & 1;
}



/* Entry: 104b8d00c; end: 104b8d2d7;  */

void FUN_104b8d00c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8d058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8d05c)();
  return;
}



/* Entry: 104b8d2d8; end: 104b8d32b;  */

byte FUN_104b8d2d8(void)

{
  return bRam00000001136a2d4a & 1;
}



/* Entry: 104b8d32c; end: 104b8d60b;  */

/* WARNING: Removing unreachable block (ram,0x000104b8d34c) */

void FUN_104b8d32c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8d374)();
  return;
}



/* Entry: 104b8d60c; end: 104b8dc77;  */

void FUN_104b8d60c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8d668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8d66c)();
  return;
}



/* Entry: 104b8dc78; end: 104b8dcff;  */

long FUN_104b8dc78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x18) = lVar1;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104b8dd00; end: 104b8dda7;  */

/* WARNING: Removing unreachable block (ram,0x000104b8dd28) */

void FUN_104b8dd00(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_104b907dc(0x1fc6524f3e11f075,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000104b8de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8de18)();
  return;
}



/* Entry: 104b8dda8; end: 104b9077b;  */

void FUN_104b8dda8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b8de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b8de18)();
  return;
}



/* Entry: 104b9077c; end: 104b907cf;  */

undefined8 * FUN_104b9077c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_1107e2650;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 104b907d0; end: 104b907db;  */

void FUN_104b907d0(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x000104b90844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b90848)();
  return;
}



/* Entry: 104b907dc; end: 104b91f43;  */

void FUN_104b907dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b90844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b90848)();
  return;
}



/* Entry: 104b91f44; end: 104b91f97;  */

/* WARNING: Removing unreachable block (ram,0x000104b91f54) */

byte FUN_104b91f44(void)

{
  return bRam00000001136a2d80 & 1;
}



/* Entry: 104b91f98; end: 104b92007;  */

undefined4 FUN_104b91f98(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam00000001136a2d88;
  FUN_104b8c8b4(puRam00000001136a2d88,0x3312540,0x104b8c770);
  return *puVar1;
}



/* Entry: 104b92008; end: 104b920ab;  */

/* WARNING: Removing unreachable block (ram,0x000104b92018) */

byte FUN_104b92008(void)

{
  return bRam00000001136a2d81 & 1;
}



/* Entry: 104b920ac; end: 104b926ef;  */

void FUN_104b920ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b920f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b920f8)();
  return;
}



/* Entry: 104b926f0; end: 104b92793;  */

void FUN_104b926f0(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_104b92794(0xd7ed5cf79fe4be42,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104b927d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b927d8)();
  return;
}



/* Entry: 104b92794; end: 104b92b63;  */

void FUN_104b92794(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b927d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b927d8)();
  return;
}



/* Entry: 104b92b64; end: 104b92bb3;  */

/* WARNING: Removing unreachable block (ram,0x000104b92b74) */

undefined8 FUN_104b92b64(void)

{
  return uRam00000001136a2dd0;
}



/* Entry: 104b92bb4; end: 104b92c5b;  */

/* WARNING: Removing unreachable block (ram,0x000104b92bdc) */

void FUN_104b92bb4(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_104b94570(0x139cfa941be8475d,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000104b92c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b92c8c)();
  return;
}



/* Entry: 104b92c5c; end: 104b92d03;  */

void FUN_104b92c5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b92c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b92c8c)();
  return;
}



/* Entry: 104b92d04; end: 104b92d53;  */

/* WARNING: Removing unreachable block (ram,0x000104b92d14) */

undefined8 FUN_104b92d04(void)

{
  return uRam00000001136a2dd8;
}



/* Entry: 104b92d54; end: 104b92df7;  */

void FUN_104b92d54(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_104b95a24(0x9e43f9728a0caaa,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104b92e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b92e2c)();
  return;
}


