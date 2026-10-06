/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 002fd524; end: 002fd607;  */

/* WARNING: Removing unreachable block (ram,0x002fd534) */

void FUN_002fd524(undefined8 param_1)

{
  uRam0000000000b5e170 = param_1;
  return;
}



/* Entry: 002fd608; end: 002fd6ab;  */

void FUN_002fd608(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002fd6ac(0xb722e19f9f049e3f,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002fd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fd6f4)();
  return;
}



/* Entry: 002fd6ac; end: 002fe0df;  */

void FUN_002fd6ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fd6f4)();
  return;
}



/* Entry: 002fe0e0; end: 002fe2ff;  */

void FUN_002fe0e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fe114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fe118)();
  return;
}



/* Entry: 002fe300; end: 002ff493;  */

void FUN_002fe300(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fe380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2fe384)();
  return;
}



/* Entry: 002ff494; end: 002ff4df;  */

/* WARNING: Removing unreachable block (ram,0x002ff4a4) */

void FUN_002ff494(undefined8 param_1)

{
  uRam0000000000b5e1a0 = param_1;
  return;
}



/* Entry: 002ff4e0; end: 002ff583;  */

void FUN_002ff4e0(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_002ff584(0x9cac87656ed3aec,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x002ff5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ff5c4)(0xdf800000);
  return;
}



/* Entry: 002ff584; end: 002ffcaf;  */

void FUN_002ff584(void)

{
                    /* WARNING: Could not recover jumptable at 0x002ff5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ff5c4)(0xdf800000);
  return;
}



/* Entry: 002ffcb0; end: 002ffcff;  */

undefined8 FUN_002ffcb0(void)

{
  return uRam0000000000b5e1b0;
}



/* Entry: 002ffd00; end: 00300d0f;  */

void FUN_002ffd00(void)

{
                    /* WARNING: Could not recover jumptable at 0x002ffd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2ffd70)();
  return;
}



/* Entry: 00300d10; end: 00300fe3;  */

void FUN_00300d10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00300d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x300d44)();
  return;
}



/* Entry: 00300fe4; end: 00303dc3;  */

void FUN_00300fe4(undefined8 *param_1)

{
  char *pcVar1;
  
  pcVar1 = segment_command_00000020.segname + 8;
  __Znwm();
  *(qword *)(pcVar1 + 8) = 0;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00301240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x301244)(param_1,0xc0,0x5bee1182,0x871d7f1c12200bd4,0x3063e8a898f7153b);
  return;
}



/* Entry: 00303dc4; end: 00304b43;  */

/* WARNING: Removing unreachable block (ram,0x00303df8) */

void FUN_00303dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00303e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x303e2c)(0x165667919e3779f9);
  return;
}



/* Entry: 00304b44; end: 00304d57;  */

void FUN_00304b44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00304b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x304b84)();
  return;
}



/* Entry: 00304d58; end: 00304e67;  */

/* WARNING: Removing unreachable block (ram,0x00304e14) */

void FUN_00304d58(undefined8 param_1)

{
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = 1;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_00309dbc(0x84db8884daf5b36a,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0x304dfc;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_00306298(0x8fe7bb2e918707a4,auStack_5c,auStack_58);
  return;
}



/* Entry: 00304e68; end: 00305133;  */

/* WARNING: Removing unreachable block (ram,0x00304e84) */

void FUN_00304e68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00304e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x304e98)();
  return;
}



/* Entry: 00305134; end: 00305c1f;  */

void FUN_00305134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00305190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x305194)();
  return;
}



/* Entry: 00305c20; end: 00305c6f;  */

/* WARNING: Removing unreachable block (ram,0x00305c30) */

undefined8 FUN_00305c20(void)

{
  return uRam0000000000b5e210;
}



/* Entry: 00305c70; end: 00305d13;  */

/* WARNING: Removing unreachable block (ram,0x00305c98) */

void FUN_00305c70(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_00309dbc(0xa7b2deb794cd72f0,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00305d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x305d48)();
  return;
}



/* Entry: 00305d14; end: 00305dc7;  */

void FUN_00305d14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00305d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x305d48)();
  return;
}



/* Entry: 00305dc8; end: 00305e17;  */

undefined8 FUN_00305dc8(void)

{
  return uRam0000000000b5e218;
}



/* Entry: 00305e18; end: 00305ebb;  */

void FUN_00305e18(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_00309dbc(0x5c889758243aa2f3,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00305eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x305ef0)();
  return;
}



/* Entry: 00305ebc; end: 00305f73;  */

void FUN_00305ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00305eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x305ef0)();
  return;
}



/* Entry: 00305f74; end: 003060a3;  */

/* WARNING: Removing unreachable block (ram,0x00305f84) */

void FUN_00305f74(undefined8 param_1)

{
  uRam0000000000b5e1c0 = param_1;
  return;
}



/* Entry: 003060a4; end: 00306147;  */

/* WARNING: Removing unreachable block (ram,0x003060cc) */

void FUN_003060a4(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uStack_a8;
  ulong *puStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  byte bStack_69;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = 0;
  puStack_20 = &uStack_28;
  uVar1 = 0x1796d950e54c00a4;
  uStack_28 = param_1;
  FUN_00309dbc(0x1796d950e54c00a4,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_00306148;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_78 = 1;
  puStack_60 = &uStack_68;
  uStack_68 = uVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_00306298(0xed9545274c0d474f,&bStack_69,&puStack_60);
  uStack_a8 = (ulong)bStack_69;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_88 = FUN_003061f4;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_a0 = &uStack_a8;
  ppuStack_90 = &puStack_50;
  FUN_00309dbc(0x1aa76fe5875827d3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0030630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x306310)();
  return;
}



/* Entry: 00306148; end: 003061f3;  */

void FUN_00306148(undefined8 param_1)

{
  ulong uStack_68;
  ulong *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  byte bStack_29;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = 1;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_00306298(0xed9545274c0d474f,&bStack_29,&puStack_20);
  uStack_68 = (ulong)bStack_29;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_48 = FUN_003061f4;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_60 = &uStack_68;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_00309dbc(0x1aa76fe5875827d3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0030630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x306310)();
  return;
}



/* Entry: 003061f4; end: 00306297;  */

void FUN_003061f4(undefined8 param_1)

{
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_00309dbc(0x1aa76fe5875827d3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0030630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x306310)();
  return;
}



/* Entry: 00306298; end: 00309dbb;  */

void FUN_00306298(void)

{
                    /* WARNING: Could not recover jumptable at 0x0030630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x306310)();
  return;
}



/* Entry: 00309dbc; end: 0030b6ff;  */

void FUN_00309dbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00309e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x309e30)();
  return;
}



/* Entry: 0030b700; end: 0030b74f;  */

/* WARNING: Removing unreachable block (ram,0x0030b710) */

undefined8 FUN_0030b700(void)

{
  return uRam0000000000b5e278;
}



/* Entry: 0030b750; end: 0030b80b;  */

byte FUN_0030b750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bStack_49;
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
  FUN_003124dc(0xc2ae03a855c4c571,&bStack_49,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return bStack_49;
  }
  ___stack_chk_fail(bStack_49);
  __Unwind_Resume();
  return bRam0000000000b5e270 & 1;
}



/* Entry: 0030b80c; end: 0030b85f;  */

byte FUN_0030b80c(void)

{
  return bRam0000000000b5e270 & 1;
}



/* Entry: 0030b860; end: 0030b8f7;  */

void FUN_0030b860(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_rdlock_0099a5b8)(0xafa290);
  return;
}



/* Entry: 0030b8f8; end: 0030b997;  */

/* WARNING: Removing unreachable block (ram,0x0030b908) */

undefined8 FUN_0030b8f8(void)

{
  return 0xb5e298;
}



/* Entry: 0030b998; end: 0030ba2f;  */

void FUN_0030b998(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_rwlock_rdlock_0099a5b8)(0xafa358);
  return;
}



/* Entry: 0030ba30; end: 0030ba7b;  */

/* WARNING: Removing unreachable block (ram,0x0030ba40) */

undefined8 FUN_0030ba30(void)

{
  return 0xb5e2e8;
}



/* Entry: 0030ba7c; end: 0030c2d7;  */

void FUN_0030ba7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0030bad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x30badc)();
  return;
}



/* Entry: 0030c2d8; end: 0030f633;  */

void FUN_0030c2d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0030c360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x30c364)();
  return;
}



/* Entry: 0030f634; end: 0030f683;  */

void FUN_0030f634(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x2f0330)(0x2c,FUN_0030f684);
  return;
}



/* Entry: 0030f684; end: 0030f81f;  */

/* WARNING: Removing unreachable block (ram,0x0030f73c) */

ulong FUN_0030f684(undefined8 param_1)

{
  byte bStack_29;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_00311fb4(0xe0c9f81dbe7a819b,&bStack_29,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return (ulong)bStack_29;
  }
  ___stack_chk_fail((ulong)bStack_29);
  return uRam0000000000b5e280;
}



/* Entry: 0030f820; end: 00311787;  */

void FUN_0030f820(void)

{
                    /* WARNING: Could not recover jumptable at 0x0030f8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x30f8a8)();
  return;
}



/* Entry: 00311788; end: 003117d7;  */

/* WARNING: Removing unreachable block (ram,0x00311798) */

undefined8 FUN_00311788(void)

{
  return uRam0000000000b5e268;
}



/* Entry: 003117d8; end: 00311bc7;  */

void FUN_003117d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00311818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x31181c)();
  return;
}



/* Entry: 00311bc8; end: 00311c6b;  */

/* WARNING: Removing unreachable block (ram,0x00311bd8) */

byte FUN_00311bc8(void)

{
  return bRam0000000000b5e273 & 1;
}



/* Entry: 00311c6c; end: 00311fb3;  */

/* WARNING: Removing unreachable block (ram,0x00311c8c) */

void FUN_00311c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00311ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x311ca4)();
  return;
}



/* Entry: 00311fb4; end: 003124db;  */

void FUN_00311fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00311ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x312000)();
  return;
}



/* Entry: 003124dc; end: 00314b2b;  */

void FUN_003124dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0031254c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x312550)();
  return;
}



/* Entry: 00314b2c; end: 00316c0f;  */

void FUN_00314b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00314bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x314bb8)();
  return;
}



/* Entry: 00316c10; end: 00316cbb;  */

/* WARNING: Removing unreachable block (ram,0x00316c38) */

void FUN_00316c10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_28 = &uStack_38;
  puStack_20 = &uStack_30;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_00317e00(0x2bdbcbd83d48506d,&uStack_40,&puStack_28);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00316d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x316d10)();
  return;
}



/* Entry: 00316cbc; end: 003179b7;  */

void FUN_00316cbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00316d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x316d10)();
  return;
}



/* Entry: 003179b8; end: 00317dff;  */

void FUN_003179b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x003179e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x3179e4)();
  return;
}



/* Entry: 00317e00; end: 0031aea7;  */

void FUN_00317e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00317e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x317e68)();
  return;
}



/* Entry: 0031aea8; end: 0031bc8f;  */

void FUN_0031aea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0031af0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x31af10)();
  return;
}



/* Entry: 0031bc90; end: 0031bcff;  */

undefined8 FUN_0031bc90(void)

{
  undefined8 uStack_20;
  undefined1 auStack_18 [8];
  
  FUN_0031df4c(0xafc945c0790c5161,&uStack_20,auStack_18);
  return uStack_20;
}



/* Entry: 0031bd00; end: 0031bdbb;  */

void FUN_0031bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [8];
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
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
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_0031ea64(0x2ea76a13fb268bd5,auStack_50,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_68 = FUN_0031bdbc;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_80 = auStack_88;
  lVar1 = -0x7d0bc49807869bf0;
  puVar2 = auStack_8c;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_0031ea64(0x82f43b67f8796410,puVar2,&puStack_80);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(*(undefined8 *)(puVar2 + 0x20));
  __Block_object_assign(lVar1 + 0x28,*(undefined8 *)(puVar2 + 0x28),8);
  __Block_object_assign(lVar1 + 0x30,*(undefined8 *)(puVar2 + 0x30),8);
  __Block_object_assign(lVar1 + 0x38,*(undefined8 *)(puVar2 + 0x38),8);
  __Block_object_assign(lVar1 + 0x40,*(undefined8 *)(puVar2 + 0x40),8);
  __Block_object_assign(lVar1 + 0x48,*(undefined8 *)(puVar2 + 0x48),8);
  __Block_object_assign(lVar1 + 0x50,*(undefined8 *)(puVar2 + 0x50),8);
  __Block_object_assign(lVar1 + 0x58,*(undefined8 *)(puVar2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(lVar1 + 0x60,*(undefined8 *)(puVar2 + 0x60),8);
  return;
}



/* Entry: 0031bdbc; end: 0031be63;  */

void FUN_0031bdbc(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  lVar1 = -0x7d0bc49807869bf0;
  puVar2 = auStack_2c;
  uStack_28 = param_1;
  FUN_0031ea64(0x82f43b67f8796410,puVar2,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(*(undefined8 *)(puVar2 + 0x20));
  __Block_object_assign(lVar1 + 0x28,*(undefined8 *)(puVar2 + 0x28),8);
  __Block_object_assign(lVar1 + 0x30,*(undefined8 *)(puVar2 + 0x30),8);
  __Block_object_assign(lVar1 + 0x38,*(undefined8 *)(puVar2 + 0x38),8);
  __Block_object_assign(lVar1 + 0x40,*(undefined8 *)(puVar2 + 0x40),8);
  __Block_object_assign(lVar1 + 0x48,*(undefined8 *)(puVar2 + 0x48),8);
  __Block_object_assign(lVar1 + 0x50,*(undefined8 *)(puVar2 + 0x50),8);
  __Block_object_assign(lVar1 + 0x58,*(undefined8 *)(puVar2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(lVar1 + 0x60,*(undefined8 *)(puVar2 + 0x60),8);
  return;
}



/* Entry: 0031be64; end: 0031bf87;  */

void FUN_0031be64(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 0031bf88; end: 0031c1bf;  */

void FUN_0031bf88(void)

{
                    /* WARNING: Could not recover jumptable at 0x0031bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x31bfd4)();
  return;
}



/* Entry: 0031c1c0; end: 0031def7;  */

void FUN_0031c1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0031c234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x31c238)();
  return;
}



/* Entry: 0031def8; end: 0031df4b;  */

/* WARNING: Removing unreachable block (ram,0x0031df0c) */

void FUN_0031def8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)(param_1,0xb5e338,0x348);
  return;
}



/* Entry: 0031df4c; end: 0031ea63;  */

void FUN_0031df4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0031dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x31dfb4)();
  return;
}



/* Entry: 0031ea64; end: 00325247;  */

void FUN_0031ea64(void)

{
                    /* WARNING: Could not recover jumptable at 0x0031ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x31ead4)();
  return;
}



/* Entry: 00325248; end: 00325307;  */

/* WARNING: Removing unreachable block (ram,0x003252b0) */

long FUN_00325248(void)

{
  long lStack_28;
  int iStack_20;
  
  CallSupervisor(0x80);
  return ((ulong)(long)iStack_20 / 1000 | lStack_28 * 1000) * 2 -
         ((ulong)(long)iStack_20 / 1000 ^ lStack_28 * 1000);
}



/* Entry: 00325308; end: 0032534b;  */

/* WARNING: Removing unreachable block (ram,0x00325318) */

void FUN_00325308(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_absolute_time_0099a380)();
  return;
}



/* Entry: 0032534c; end: 003253f7;  */

float FUN_0032534c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0xafa420;
  _pthread_once(0xafa420,FUN_003253f8);
  _mach_absolute_time();
  uVar1 = 0;
  if ((ulong)uRam0000000000b5e684 != 0) {
    uVar1 = (((uVar2 & (param_1 ^ 0xffffffffffffffff)) * 2 - (uVar2 ^ param_1)) *
            (ulong)uRam0000000000b5e680) / (ulong)uRam0000000000b5e684;
  }
  return (float)uVar1 / 1e+06;
}



/* Entry: 003253f8; end: 00325463;  */

void FUN_003253f8(void)

{
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  FUN_00325464(0x90937b55ceaed4d,auStack_1c,auStack_18);
  return;
}



/* Entry: 00325464; end: 0032550f;  */

/* WARNING: Removing unreachable block (ram,0x003254ec) */
/* WARNING: Removing unreachable block (ram,0x00325474) */
/* WARNING: Removing unreachable block (ram,0x00325504) */

void FUN_00325464(long param_1)

{
  undefined8 uVar1;
  
DAT_00325488:
  uVar1 = 4;
  if (param_1 != 0x90937b55ceaed4d) {
    uVar1 = 2;
  }
  switch(uVar1) {
  case 0:
    goto DAT_00325488;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x003254f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(undefined *)0x3254bc)();
    return;
  case 4:
    uRam0000000000b5e680 = 0x100000000;
                    /* WARNING: Could not recover jumptable at 0x0077a81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__mach_timebase_info_0099a3d0)();
    return;
  default:
    do {
    } while( true );
  }
}



/* Entry: 00325510; end: 00325b83;  */

void FUN_00325510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00325554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x325558)();
  return;
}



/* Entry: 00325b84; end: 00325ea7;  */

void FUN_00325b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00325be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x325be4)();
  return;
}



/* Entry: 00325ea8; end: 003262c3;  */

void FUN_00325ea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00325ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x325ef4)();
  return;
}



/* Entry: 003262c4; end: 00326dff;  */

/* WARNING: Removing unreachable block (ram,0x003262d4) */

void FUN_003262c4(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  param_1[0x10] = 0;
  *param_1 = 0x3320646e61707865;
  param_1[1] = 0x6b20657479622d32;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 3) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 4) = param_2[4];
  *(undefined4 *)((long)param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 5) = param_2[6];
  *(undefined4 *)((long)param_1 + 0x2c) = param_2[7];
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = *param_3;
  *(undefined4 *)(param_1 + 7) = param_3[1];
  *(undefined4 *)((long)param_1 + 0x3c) = param_3[2];
  return;
}



/* Entry: 00326e00; end: 0032755b;  */

void FUN_00326e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00326e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x326e60)(0xfa2229fa);
  return;
}



/* Entry: 0032755c; end: 00327ad7;  */

void FUN_0032755c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032759c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x3275a0)();
  return;
}



/* Entry: 00327ad8; end: 0032894f;  */

void FUN_00327ad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00327b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x327b48)();
  return;
}



/* Entry: 00328950; end: 0032bb7f;  */

void FUN_00328950(void)

{
                    /* WARNING: Could not recover jumptable at 0x003289b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x3289b4)();
  return;
}



/* Entry: 0032bb80; end: 0032d6a3;  */

void FUN_0032bb80(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  FUN_0032d6a4(0x867913673a916a42,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0032bc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32bc64)();
  return;
}



/* Entry: 0032d6a4; end: 0032dd33;  */

void FUN_0032d6a4(void)

{
  undefined1 auStack_10 [16];
  
                    /* WARNING: Could not recover jumptable at 0x0032d6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32d6d8)(auStack_10);
  return;
}



/* Entry: 0032dd34; end: 0032ddef;  */

void FUN_0032dd34(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined4 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_30 = &uStack_48;
  puStack_28 = &uStack_3c;
  puStack_20 = &uStack_38;
  uStack_48 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  FUN_0032ef1c(0x54bf3cf5fea9d558,&uStack_50,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x0032de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32de18)();
  return;
}



/* Entry: 0032ddf0; end: 0032e04f;  */

void FUN_0032ddf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32de18)();
  return;
}



/* Entry: 0032e050; end: 0032e107;  */

/* WARNING: Removing unreachable block (ram,0x0032e078) */

void FUN_0032e050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_0032ef1c(0x880e3f395710e234,&uStack_50,&puStack_30);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x0032e12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32e130)();
  return;
}



/* Entry: 0032e108; end: 0032e2c7;  */

void FUN_0032e108(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032e12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32e130)();
  return;
}



/* Entry: 0032e2c8; end: 0032eb0f;  */

void FUN_0032e2c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032e30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32e310)();
  return;
}



/* Entry: 0032eb10; end: 0032ebc7;  */

void FUN_0032eb10(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032eb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32eb50)();
  return;
}



/* Entry: 0032ebc8; end: 0032ec33;  */

void FUN_0032ebc8(undefined8 param_1,undefined8 param_2)

{
  FUN_0032dd34(param_1,0,param_2);
  return;
}



/* Entry: 0032ec34; end: 0032ecd7;  */

/* WARNING: Removing unreachable block (ram,0x0032ec44) */

void FUN_0032ec34(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32ec58)();
  return;
}



/* Entry: 0032ecd8; end: 0032ef1b;  */

void FUN_0032ecd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032ecfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32ed00)();
  return;
}



/* Entry: 0032ef1c; end: 0032f93f;  */

void FUN_0032ef1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0032ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32ef70)();
  return;
}



/* Entry: 0032f940; end: 00331c87;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_0032f940(void)

{
  ulong uVar1;
  long lVar2;
  long alStack_68 [2];
  undefined1 uStack_51;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined1 *puStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
DAT_0032f980:
  lVar2 = 1;
  _calloc(1,0x18);
  uVar1 = 2;
  if (lVar2 != 0) {
    uVar1 = 3;
  }
  switch(uVar1) {
  default:
    goto DAT_0032f9b4;
  case 1:
    goto DAT_0032f980;
  case 2:
    _abort();
    break;
  case 3:
    plStack_48 = alStack_68;
    alStack_68[1] = 0x400;
    plStack_40 = alStack_68 + 1;
    uStack_51 = 0xc9;
    puStack_38 = &uStack_51;
    uStack_50 = 0x22c6df29bdfb489f;
    puStack_30 = &uStack_50;
    alStack_68[0] = lVar2;
    FUN_003335fc(0xbb0b926ea7bd30d3,alStack_68 + 1,&plStack_48);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return lVar2;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0032fa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x32fa9c)();
  return lVar2;
DAT_0032f9b4:
  do {
  } while( true );
}



/* Entry: 00331c88; end: 003335fb;  */

void FUN_00331c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00331d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x331d0c)();
  return;
}



/* Entry: 003335fc; end: 0033573f;  */

void FUN_003335fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00333660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x333664)();
  return;
}



/* Entry: 00335740; end: 00336a6f;  */

/* WARNING: Removing unreachable block (ram,0x00335e8c) */
/* WARNING: Removing unreachable block (ram,0x00335d24) */
/* WARNING: Removing unreachable block (ram,0x00335bb4) */
/* WARNING: Removing unreachable block (ram,0x00335998) */
/* WARNING: Removing unreachable block (ram,0x003358e0) */
/* WARNING: Removing unreachable block (ram,0x00335768) */
/* WARNING: Removing unreachable block (ram,0x00335828) */
/* WARNING: Removing unreachable block (ram,0x00335b08) */
/* WARNING: Removing unreachable block (ram,0x00335c6c) */
/* WARNING: Removing unreachable block (ram,0x00335ddc) */
/* WARNING: Removing unreachable block (ram,0x00336098) */

void FUN_00335740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 **ppuVar5;
  undefined1 **ppuVar6;
  ulong **ppuVar7;
  ulong **ppuVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 uStack_3d5;
  undefined1 uStack_3d4;
  undefined1 uStack_3d3;
  undefined1 uStack_3d2;
  undefined1 uStack_3d1;
  undefined1 uStack_3d0;
  undefined1 uStack_3cf;
  undefined1 uStack_3ce;
  undefined1 uStack_3cd;
  undefined1 uStack_3cc;
  undefined1 uStack_3cb;
  undefined1 uStack_3ca;
  undefined1 uStack_3c9;
  long lStack_3c8;
  undefined8 uStack_390;
  ulong uStack_388;
  ulong *puStack_380;
  long lStack_378;
  undefined8 ***pppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_358;
  uint uStack_34c;
  ulong uStack_348;
  uint *puStack_340;
  ulong **ppuStack_338;
  ulong *puStack_330;
  uint **ppuStack_328;
  undefined8 ***pppuStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_2f8;
  uint uStack_2ec;
  ulong uStack_2e8;
  uint *puStack_2e0;
  ulong **ppuStack_2d8;
  ulong *puStack_2d0;
  uint **ppuStack_2c8;
  undefined8 ***pppuStack_2c0;
  long lStack_2b8;
  undefined8 ***pppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_298;
  uint uStack_28c;
  ulong uStack_288;
  uint *puStack_280;
  undefined1 uStack_271;
  ulong *puStack_270;
  uint **ppuStack_268;
  undefined1 *puStack_260;
  long lStack_258;
  undefined8 ***pppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  uint uStack_22c;
  ulong uStack_228;
  uint *puStack_220;
  ulong *puStack_218;
  uint **ppuStack_210;
  long lStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  ulong uStack_1d8;
  uint *puStack_1d0;
  ulong **ppuStack_1c8;
  ulong *puStack_1c0;
  uint **ppuStack_1b8;
  undefined8 ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  uint uStack_17c;
  ulong uStack_178;
  uint *puStack_170;
  undefined4 uStack_164;
  ulong *puStack_160;
  uint **ppuStack_158;
  undefined4 *puStack_150;
  long lStack_148;
  undefined1 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  uint uStack_11c;
  ulong uStack_118;
  uint *puStack_110;
  undefined1 **ppuStack_108;
  ulong *puStack_100;
  uint **ppuStack_f8;
  undefined1 ***pppuStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined1 **ppuStack_98;
  undefined8 ***pppuStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined1 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_68 = 0;
  puStack_38 = &uStack_58;
  puStack_30 = &uStack_50;
  puStack_28 = &uStack_48;
  puStack_20 = &uStack_39;
  puVar1 = auStack_60;
  ppuVar5 = &puStack_38;
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_39 = param_4;
  FUN_003376fc(0x504c057eeaaa0457);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = 0x335800;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_c8 = 0;
  puStack_a0 = auStack_b8;
  ppuStack_98 = &puStack_b0;
  pppuStack_90 = &ppuStack_a8;
  puVar3 = &uStack_bc;
  ppuVar6 = &puStack_a0;
  puStack_b0 = puVar1;
  ppuStack_a8 = ppuVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_00336a70(0x46cb308f487db5e9);
  uStack_118 = (ulong)uStack_bc;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uStack_d8 = 0x3358b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_128 = 0;
  puStack_100 = &uStack_118;
  ppuStack_f8 = &puStack_110;
  pppuStack_f0 = &ppuStack_108;
  puVar4 = &uStack_11c;
  uStack_164 = SUB84(&puStack_100,0);
  puStack_110 = puVar3;
  ppuStack_108 = ppuVar6;
  ppuStack_e0 = &puStack_80;
  FUN_003376fc(0x2ea13299237898b);
  uStack_178 = (ulong)uStack_11c;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x335970;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_188 = 0;
  puStack_160 = &uStack_178;
  ppuStack_158 = &puStack_170;
  puStack_150 = &uStack_164;
  puVar3 = &uStack_17c;
  ppuVar7 = &puStack_160;
  puStack_170 = puVar4;
  pppuStack_140 = &ppuStack_e0;
  FUN_003376fc(0x5c5626a9cea7388a);
  uStack_1d8 = (ulong)uStack_17c;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  uStack_198 = 0x335a28;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_1e8 = 1;
  puStack_1c0 = &uStack_1d8;
  ppuStack_1b8 = &puStack_1d0;
  pppuStack_1b0 = &ppuStack_1c8;
  puVar4 = &uStack_1dc;
  puStack_1d0 = puVar3;
  ppuStack_1c8 = ppuVar7;
  pppuStack_1a0 = &pppuStack_140;
  FUN_00336a70(0xff6bcf0bc9af93dc,puVar4,&puStack_1c0);
  uStack_228 = (ulong)uStack_1dc;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_1f8 = 0x335ae0;
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_238 = 0;
  puStack_218 = &uStack_228;
  ppuStack_210 = &puStack_220;
  puVar3 = &uStack_22c;
  uStack_271 = SUB81(&puStack_218,0);
  puStack_220 = puVar4;
  pppuStack_200 = &pppuStack_1a0;
  FUN_00336a70(0x9d40df16ba50d1b1);
  uStack_288 = (ulong)uStack_22c;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  uStack_248 = 0x335b8c;
  lStack_258 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_298 = 0;
  puStack_270 = &uStack_288;
  ppuStack_268 = &puStack_280;
  puStack_260 = &uStack_271;
  puVar4 = &uStack_28c;
  ppuVar7 = &puStack_270;
  puStack_280 = puVar3;
  pppuStack_250 = &pppuStack_200;
  FUN_003376fc(0xd7e7d7eb65a75241);
  uStack_2e8 = (ulong)uStack_28c;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  uStack_2a8 = 0x335c44;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_2f8 = 0;
  puStack_2d0 = &uStack_2e8;
  ppuStack_2c8 = &puStack_2e0;
  pppuStack_2c0 = &ppuStack_2d8;
  puVar3 = &uStack_2ec;
  ppuVar8 = &puStack_2d0;
  puStack_2e0 = puVar4;
  ppuStack_2d8 = ppuVar7;
  pppuStack_2b0 = &pppuStack_250;
  FUN_00336a70(0x7f14a9841e734e98);
  uStack_348 = (ulong)uStack_2ec;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_2b8) {
    ___stack_chk_fail();
    uStack_308 = 0x335cfc;
    lStack_318 = *(long *)PTR____stack_chk_guard_00999f88;
    uStack_358 = 0;
    puStack_330 = &uStack_348;
    ppuStack_328 = &puStack_340;
    pppuStack_320 = &ppuStack_338;
    puStack_340 = puVar3;
    ppuStack_338 = ppuVar8;
    pppuStack_310 = &pppuStack_2b0;
    FUN_00336a70(0x2d00c053f22e53b3,&uStack_34c,&puStack_330);
    uStack_388 = (ulong)uStack_34c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_318) {
      return;
    }
    ___stack_chk_fail();
    uStack_368 = 0x335db4;
    lStack_378 = *(long *)PTR____stack_chk_guard_00999f88;
    puStack_380 = &uStack_388;
    pppuStack_370 = &pppuStack_310;
    FUN_003376fc(0x7000e48b2bbadfc1,&uStack_390,&puStack_380);
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_378) {
      ___stack_chk_fail(uStack_390);
      lStack_3c8 = *(long *)PTR____stack_chk_guard_00999f88;
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3d4 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d4 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3d3 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d3 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3d2 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d2 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3d1 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d1 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3d0 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d0 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3cf = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cf = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3ce = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3ce = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3cd = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cd = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3cc = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cc = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3cb = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cb = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3ca = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3ca = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_0032755c(puVar1,1);
      uStack_3c9 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3c9 = 0;
      }
      __Znwm();
      FUN_003262c4();
      pcVar2 = segment_command_00000020.segname;
      __Znwm();
      FUN_00335740();
      *(undefined ***)pcVar2 = &PTR_DAT_009da9a8;
      *extraout_x8 = pcVar2;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_3c8) {
        return;
      }
      ___stack_chk_fail();
      pcVar2 = segment_command_00000020.segname;
      __Znwm();
      *(qword *)(pcVar2 + 0x10) = 0;
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      *(qword *)(pcVar2 + 0x20) = 0;
      *(qword *)(pcVar2 + 0x18) = 0;
      *(undefined ***)pcVar2 = &PTR_DAT_009da9a8;
      *extraout_x8_00 = pcVar2;
      return;
    }
    return;
  }
  return;
}



/* Entry: 00336a70; end: 003376fb;  */

void FUN_00336a70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00336abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x336ac0)();
  return;
}



/* Entry: 003376fc; end: 0033882b;  */

void FUN_003376fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0033775c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x337760)();
  return;
}



/* Entry: 0033882c; end: 00338c73;  */

void FUN_0033882c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00338870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x338874)();
  return;
}



/* Entry: 00338c74; end: 00338cb7;  */

void FUN_00338c74(long param_1)

{
  if ((param_1 == 0) || (_malloc(), param_1 != 0)) {
    return;
  }
  _abort();
  if ((param_1 != 0) && (_calloc(), param_1 == 0)) {
    _abort();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)();
    return;
  }
  return;
}



/* Entry: 00338cb8; end: 00338cbb;  */

void FUN_00338cb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)();
  return;
}



/* Entry: 00338cbc; end: 00338ce7;  */

ulong FUN_00338cbc(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    param_1 = 0;
  }
  else {
    _realloc();
    if (param_1 == 0) {
      _abort();
      if ((param_2 & param_2 - 1) == 0) {
        lVar1 = param_2 + 7 + param_1;
        FUN_00338c74();
        uVar2 = param_2 + 7 + lVar1 & -param_2;
        *(long *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
      func_0x00770cac();
      uVar2 = *(ulong *)(param_1 - 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(uVar2);
      return uVar2;
    }
  }
  return param_1;
}



/* Entry: 00338ce8; end: 00338d33;  */

ulong FUN_00338ce8(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_2 & param_2 - 1) == 0) {
    param_1 = param_2 + 7 + param_1;
    FUN_00338c74();
    uVar1 = param_2 + 7 + param_1 & -param_2;
    *(long *)(uVar1 - 8) = param_1;
    return uVar1;
  }
  func_0x00770cac();
  uVar1 = *(ulong *)(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(uVar1);
  return uVar1;
}



/* Entry: 00338d34; end: 00338d87;  */

void FUN_00338d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(*(undefined8 *)(param_1 + -8));
  return;
}



/* Entry: 00338d88; end: 00338dc7;  */

undefined4 FUN_00338d88(void)

{
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 4;
  _sysctlbyname("hw.ncpu",&uStack_1c,&uStack_18,0,0);
  return uStack_1c;
}


