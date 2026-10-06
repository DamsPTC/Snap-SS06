/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ff4538; end: 102ff454b; -[_TtC25SCSearchHeaderButtonScope33SCSearchHeaderButtonScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff4538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f313c8));
  return;
}



/* Entry: 102ff454c; end: 102ff455b; -[_TtC38NotificationCenterHeaderButtonServices38NotificationCenterHeaderButtonServices buttonProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff454c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f31420));
  return;
}



/* Entry: 102ff455c; end: 102ff45f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff455c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f31420) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ff45f4; end: 102ff4627;  */

void FUN_102ff45f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff4628; end: 102ff4637; -[_TtC38NotificationCenterHeaderButtonServices38NotificationCenterHeaderButtonServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff4628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f31420));
  return;
}



/* Entry: 102ff4638; end: 102ff46cb;  */

void FUN_102ff4638(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010034ec64();
  func_0x000107c613fc();
  FUN_102ff472c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102ff46cc; end: 102ff46d7;  */

void FUN_102ff46cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010034ec64();
  func_0x000107c613fc();
  FUN_102ff472c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff46d8; end: 102ff472b;  */

undefined8 FUN_102ff46d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102ff472c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102ff472c; end: 102ff4947;  */

void FUN_102ff472c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f208c0,&UNK_10db595f8);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar2 = param_3;
  func_0x000107c6157c(param_3);
  func_0x0001003b3b80();
  puVar1 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ac978;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1114e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f111830);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102ff4948; end: 102ff4983;  */

void FUN_102ff4948(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ff4984; end: 102ff49d7;  */

void FUN_102ff4984(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff49d8; end: 102ff49df;  */

void FUN_102ff49d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff49e0; end: 102ff4a2f;  */

undefined8 FUN_102ff49e0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff4a30; end: 102ff4a73;  */

undefined1  [16] FUN_102ff4a30(void)

{
  return ZEXT816(0x1105fb1c8);
}



/* Entry: 102ff4a74; end: 102ff4a9b;  */

void FUN_102ff4a74(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff4a9c; end: 102ff4aa3;  */

undefined8 FUN_102ff4a9c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff4aa4; end: 102ff507b;  */

long FUN_102ff4aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  func_0x0001000285a8(0x112f31548,&UNK_10db77698);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112e45940,&UNK_10da39630);
  func_0x000107c610f8();
  uVar6 = param_7;
  func_0x000107c6157c(param_7);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x0001000285a8(0x112e78418,&UNK_10da81bd0);
  func_0x000107c610f8();
  uVar6 = param_8;
  func_0x000107c6157c(param_8);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  func_0x0001000285a8(0x112e47548,&UNK_10daf8610);
  func_0x000107c610f8();
  uVar6 = param_9;
  func_0x000107c6157c(param_9);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(unaff_x20 + 0x30) = puVar4;
  puVar5 = PTR_PTR_1126ac980;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f1195d0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f119600);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f119620);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar6 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f119650);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f119670);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f023fa0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar1 = puVar5;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar1;
  return unaff_x20;
}



/* Entry: 102ff507c; end: 102ff50ff;  */

void FUN_102ff507c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102ff5100; end: 102ff514f;  */

undefined8 FUN_102ff5100(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff5150; end: 102ff5193;  */

undefined1  [16] FUN_102ff5150(void)

{
  return ZEXT816(0x1105fb290);
}



/* Entry: 102ff5194; end: 102ff51bb;  */

void FUN_102ff5194(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff51bc; end: 102ff51c3;  */

undefined8 FUN_102ff51bc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff51c4; end: 102ff520f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff51c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f31670) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ff5210; end: 102ff52cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ff5210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_58 [2];
  undefined8 uStack_48;
  
  func_0x0001002b448c(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000102ff5584(param_1,param_2,param_3);
  auStack_58[0] = param_1;
  func_0x00010008a7c8(&uStack_48,auStack_58);
  func_0x000100083b20(auStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(auStack_58[0]);
  return param_1;
}



/* Entry: 102ff52cc; end: 102ff535f; -[_TtC26SCSpectaclesHomeScopeProxy29SCSpectaclesHomeScopeServices buildWithCurrentDevice:uiContainer:scopeDelegate:] */

void FUN_102ff52cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102ff5210(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ff5360; end: 102ff5393;  */

void FUN_102ff5360(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff5394; end: 102ff53c3; -[_TtC26SCSpectaclesHomeScopeProxy29SCSpectaclesHomeScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff5394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f31670));
  return;
}



/* Entry: 102ff53c4; end: 102ff53e3; -[_TtC21SCSpectaclesHomeScope21SCSpectaclesHomeScope currentDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff53c4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f316b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff53e4; end: 102ff5403; -[_TtC21SCSpectaclesHomeScope21SCSpectaclesHomeScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff53e4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f316c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff5404; end: 102ff544b; -[_TtC21SCSpectaclesHomeScope21SCSpectaclesHomeScope scopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff5404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f316c8;
  func_0x000107c61428(param_1 + _DAT_112f316c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ff544c; end: 102ff54a3; -[_TtC21SCSpectaclesHomeScope21SCSpectaclesHomeScope setScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff544c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f316c8;
  func_0x000107c61428(param_1 + _DAT_112f316c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ff54a4; end: 102ff5663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ff54a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f316c8;
  func_0x000107c61614(unaff_x20 + _DAT_112f316c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f316b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f316c0) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 102ff5664; end: 102ff571f; -[_TtC21SCSpectaclesHomeScope21SCSpectaclesHomeScope initWithCurrentDevice:uiContainer:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ff5664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f316c8;
  func_0x000107c61614(param_1 + _DAT_112f316c8,0);
  *(undefined8 *)(param_1 + _DAT_112f316b8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f316c0) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 102ff5720; end: 102ff5753;  */

void FUN_102ff5720(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ff5754; end: 102ff57bf; -[_TtC21SCSpectaclesHomeScope21SCSpectaclesHomeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ff5754(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f316b8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f316c0));
  param_1 = param_1 + _DAT_112f316c8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ff57c0; end: 102ff58a3;  */

void FUN_102ff57c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100323580();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000103c3e58c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000103c3e3d0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x000103c3e3f8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 102ff58a4; end: 102ff58ab;  */

void FUN_102ff58a4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x000100323580();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000103c3e58c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000103c3e3d0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  func_0x000103c3e3f8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 102ff58ac; end: 102ff5963;  */

long FUN_102ff58ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000103c3e58c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103c3e3d0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000103c3e3f8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 102ff5964; end: 102ff5997;  */

void FUN_102ff5964(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ff5998; end: 102ff59eb;  */

void FUN_102ff5998(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff59ec; end: 102ff5a37;  */

void FUN_102ff59ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff5a38; end: 102ff5a8b;  */

void FUN_102ff5a38(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff5a8c; end: 102ff5c73;  */

void FUN_102ff5a8c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010037a5a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  FUN_103009d18(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar4 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar4;
  func_0x0001030099e8();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_103009a50();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102ff5c74; end: 102ff5c83;  */

void FUN_102ff5c74(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010037a5a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x18) = puVar6;
  FUN_103009d18(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar5;
  func_0x0001030099e8();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_103009a50();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102ff5c84; end: 102ff5e0b;  */

long FUN_102ff5c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_103009d18(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001030099e8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  FUN_103009a50();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  return unaff_x20;
}



/* Entry: 102ff5e0c; end: 102ff5e57;  */

void FUN_102ff5e0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ff5e58; end: 102ff5eab;  */

void FUN_102ff5e58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff5eac; end: 102ff5ef7;  */

void FUN_102ff5eac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff5ef8; end: 102ff5f4b;  */

void FUN_102ff5ef8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff5f4c; end: 102ff641b;  */

long FUN_102ff5f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  puVar1 = PTR_PTR_1126ac988;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0520c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f160);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  return unaff_x20;
}



/* Entry: 102ff641c; end: 102ff649f;  */

void FUN_102ff641c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102ff64a0; end: 102ff64ef;  */

undefined8 FUN_102ff64a0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff64f0; end: 102ff6533;  */

undefined1  [16] FUN_102ff64f0(void)

{
  return ZEXT816(0x1105fb768);
}



/* Entry: 102ff6534; end: 102ff655b;  */

void FUN_102ff6534(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff655c; end: 102ff6563;  */

undefined8 FUN_102ff655c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff6564; end: 102ff65c7;  */

undefined8
FUN_102ff6564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100516698(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102ff65c8; end: 102ff660b;  */

void FUN_102ff65c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ff660c; end: 102ff665b;  */

undefined8 FUN_102ff660c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff665c; end: 102ff669f;  */

undefined1  [16] FUN_102ff665c(void)

{
  return ZEXT816(0x1105fb830);
}



/* Entry: 102ff66a0; end: 102ff66c7;  */

void FUN_102ff66a0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff66c8; end: 102ff66cf;  */

undefined8 FUN_102ff66c8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff66d0; end: 102ff6983;  */

void FUN_102ff66d0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010033242c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ac998;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102ff6984; end: 102ff698f;  */

void FUN_102ff6984(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010033242c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126ac998;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102ff6990; end: 102ff69f3;  */

undefined8
FUN_102ff6990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102ff69f4(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102ff69f4; end: 102ff6c57;  */

void FUN_102ff69f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ac998;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 102ff6c58; end: 102ff6c9b;  */

void FUN_102ff6c58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ff6c9c; end: 102ff6cef;  */

void FUN_102ff6c9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff6cf0; end: 102ff6cf7;  */

void FUN_102ff6cf0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ff6cf8; end: 102ff6d47;  */

undefined8 FUN_102ff6cf8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff6d48; end: 102ff6d8b;  */

undefined1  [16] FUN_102ff6d48(void)

{
  return ZEXT816(0x1105fb8f8);
}



/* Entry: 102ff6d8c; end: 102ff6db3;  */

void FUN_102ff6d8c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff6db4; end: 102ff6dbb;  */

undefined8 FUN_102ff6db4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff6dbc; end: 102ff7537;  */

void FUN_102ff6dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  puVar1 = PTR_PTR_1126ac9a0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a3fd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_14);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a8f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  *(undefined **)(unaff_x20 + 0x80) = puVar3;
  return;
}



/* Entry: 102ff7538; end: 102ff75e3;  */

void FUN_102ff7538(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102ff75e4; end: 102ff7633;  */

undefined8 FUN_102ff75e4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff7634; end: 102ff7677;  */

undefined1  [16] FUN_102ff7634(void)

{
  return ZEXT816(0x1105fb9c0);
}



/* Entry: 102ff7678; end: 102ff769f;  */

void FUN_102ff7678(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ff76a0; end: 102ff76a7;  */

undefined8 FUN_102ff76a0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ff76a8; end: 102ff9ebb;  */

void FUN_102ff76a8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  func_0x000100083b20(&uStack_1d8);
  func_0x000100083b20(&uStack_1e0);
  func_0x000100083b20(&uStack_1e8);
  func_0x000100083b20(&uStack_1f0);
  func_0x000100083b20(&uStack_1f8);
  func_0x000100083b20(&uStack_200);
  func_0x000100083b20(&uStack_208);
  func_0x000100083b20(&uStack_210);
  func_0x000100083b20(&uStack_218);
  func_0x000100083b20(&uStack_220);
  func_0x000100083b20(&uStack_228);
  func_0x000100083b20(&uStack_230);
  func_0x000100083b20(&uStack_238);
  func_0x000100083b20(&uStack_240);
  func_0x000100083b20(&uStack_248);
  func_0x000100083b20(&uStack_250);
  func_0x000100083b20(&uStack_258);
  func_0x000100083b20(&uStack_260);
  func_0x00010037c1c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x60) = uStack_78;
  *(undefined8 *)(param_2 + 0x68) = uStack_80;
  *(undefined8 *)(param_2 + 0x70) = uStack_88;
  *(undefined8 *)(param_2 + 0x78) = uStack_90;
  *(undefined8 *)(param_2 + 0x80) = uStack_98;
  *(undefined8 *)(param_2 + 0x88) = uStack_a0;
  *(undefined8 *)(param_2 + 0x90) = uStack_a8;
  *(undefined8 *)(param_2 + 0x98) = uStack_b0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_b8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_c0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_c8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_d0;
  *(undefined8 *)(param_2 + 0xc0) = uStack_d8;
  *(undefined8 *)(param_2 + 200) = uStack_e0;
  *(undefined8 *)(param_2 + 0xd0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xd8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xe0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xe8) = uStack_100;
  *(undefined8 *)(param_2 + 0xf0) = uStack_108;
  *(undefined8 *)(param_2 + 0xf8) = uStack_110;
  *(undefined8 *)(param_2 + 0x100) = uStack_118;
  *(undefined8 *)(param_2 + 0x108) = uStack_120;
  *(undefined8 *)(param_2 + 0x110) = uStack_128;
  *(undefined8 *)(param_2 + 0x118) = uStack_130;
  *(undefined8 *)(param_2 + 0x120) = uStack_138;
  *(undefined8 *)(param_2 + 0x128) = uStack_140;
  *(undefined8 *)(param_2 + 0x130) = uStack_148;
  *(undefined8 *)(param_2 + 0x138) = uStack_150;
  *(undefined8 *)(param_2 + 0x140) = uStack_158;
  *(undefined8 *)(param_2 + 0x148) = uStack_160;
  *(undefined8 *)(param_2 + 0x150) = uStack_168;
  *(undefined8 *)(param_2 + 0x158) = uStack_170;
  *(undefined8 *)(param_2 + 0x160) = uStack_178;
  *(undefined8 *)(param_2 + 0x168) = uStack_180;
  *(undefined8 *)(param_2 + 0x170) = uStack_188;
  *(undefined8 *)(param_2 + 0x178) = uStack_190;
  *(undefined8 *)(param_2 + 0x180) = uStack_198;
  *(undefined8 *)(param_2 + 0x188) = uStack_1a0;
  *(undefined8 *)(param_2 + 400) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x198) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_200;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_208;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_210;
  *(undefined8 *)(param_2 + 0x200) = uStack_218;
  func_0x0001000285a8(0x112e9ee00,&UNK_10daaf8c0);
  func_0x000107c610f8();
  uVar28 = uStack_78;
  func_0x000107c61174();
  uVar1 = uStack_80;
  func_0x000107c61174();
  uVar2 = uStack_88;
  func_0x000107c61174();
  uVar3 = uStack_90;
  func_0x000107c61174();
  uVar4 = uStack_98;
  func_0x000107c61174();
  uVar5 = uStack_a0;
  func_0x000107c61174();
  uVar6 = uStack_a8;
  func_0x000107c61174();
  uVar7 = uStack_b0;
  func_0x000107c61174();
  uVar8 = uStack_b8;
  func_0x000107c61174();
  uVar9 = uStack_c0;
  func_0x000107c61174();
  uVar10 = uStack_c8;
  func_0x000107c61174();
  uVar11 = uStack_d0;
  func_0x000107c61174();
  uVar12 = uStack_d8;
  func_0x000107c61174();
  uVar13 = uStack_e0;
  func_0x000107c61174();
  uVar14 = uStack_e8;
  func_0x000107c61174();
  uVar15 = uStack_f0;
  func_0x000107c61174();
  uVar16 = uStack_f8;
  func_0x000107c61174();
  uVar17 = uStack_100;
  func_0x000107c61174();
  uVar18 = uStack_108;
  func_0x000107c61174();
  uVar19 = uStack_110;
  func_0x000107c61174();
  uVar20 = uStack_118;
  func_0x000107c61174();
  uVar21 = uStack_120;
  func_0x000107c61174();
  uVar22 = uStack_128;
  func_0x000107c61174();
  uVar23 = uStack_130;
  func_0x000107c61174();
  uVar24 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar32 = uStack_150;
  func_0x000107c61174();
  uVar33 = uStack_158;
  func_0x000107c61174();
  uVar34 = uStack_160;
  func_0x000107c61174();
  uVar35 = uStack_168;
  func_0x000107c61174();
  uVar36 = uStack_170;
  func_0x000107c61174();
  uVar37 = uStack_178;
  func_0x000107c61174();
  uVar38 = uStack_180;
  func_0x000107c61174();
  uVar39 = uStack_188;
  func_0x000107c61174();
  uVar40 = uStack_190;
  func_0x000107c61174();
  uVar41 = uStack_198;
  func_0x000107c61174();
  uVar42 = uStack_1a0;
  func_0x000107c61174();
  uVar43 = uStack_1a8;
  func_0x000107c61174();
  uVar44 = uStack_1b0;
  func_0x000107c61174();
  uVar45 = uStack_1b8;
  func_0x000107c61174();
  uVar46 = uStack_1c0;
  func_0x000107c61174();
  uVar47 = uStack_1c8;
  func_0x000107c61174();
  uVar48 = uStack_1d0;
  func_0x000107c61174();
  uVar49 = uStack_1d8;
  func_0x000107c61174();
  uVar50 = uStack_1e0;
  func_0x000107c61174();
  uVar51 = uStack_1e8;
  func_0x000107c61174();
  uVar52 = uStack_1f0;
  func_0x000107c61174();
  uVar53 = uStack_1f8;
  func_0x000107c61174();
  uVar54 = uStack_200;
  func_0x000107c61174();
  uVar55 = uStack_208;
  func_0x000107c61174();
  uVar56 = uStack_210;
  func_0x000107c61174();
  uVar57 = uStack_218;
  func_0x000107c61174();
  uVar27 = uStack_220;
  func_0x000107c6157c(uStack_220);
  func_0x0001003b3b80();
  puVar25 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x18) = puVar25;
  func_0x0001000285a8(0x112e9edf8,&UNK_10dabb450);
  func_0x000107c610f8();
  uVar27 = uStack_228;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x20) = puVar25;
  func_0x0001000285a8(0x112e9edf0,&UNK_10dabb460);
  func_0x000107c610f8();
  uVar27 = uStack_230;
  func_0x000107c6157c(uStack_230);
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x28) = puVar25;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar27 = uStack_238;
  func_0x000107c6157c(uStack_238);
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x30) = puVar25;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar27 = uStack_240;
  func_0x000107c6157c(uStack_240);
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x38) = puVar25;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar27 = uStack_248;
  func_0x000107c6157c(uStack_248);
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x40) = puVar25;
  func_0x0001000285a8(0x112e9f058,&UNK_10daafe58);
  func_0x000107c610f8();
  uVar27 = uStack_250;
  func_0x000107c6157c(uStack_250);
  func_0x0001003b3b80();
  puVar25 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x48) = puVar25;
  func_0x0001000285a8(0x112e51df8,&UNK_10daafe60);
  func_0x000107c610f8();
  uVar27 = uStack_258;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x50) = puVar25;
  func_0x0001000285a8(0x112f31a08,&UNK_10db77ef8);
  func_0x000107c610f8();
  uVar27 = uStack_260;
  func_0x000107c6157c(uStack_260);
  func_0x0001003b3b80();
  puVar25 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x58) = puVar25;
  puVar25 = PTR_PTR_1126ac9a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar25;
  func_0x000107c61174();
  uVar26 = auStack_70[0];
  func_0x000107c61174();
  uVar27 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c530);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad7b0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar58 = 0xd000000000000012;
  uVar27 = uVar58;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar59 = 0xd000000000000010;
  uVar27 = uVar59;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f009f80);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa20);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = uVar58;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0a3f60);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c010);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c040);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f053c90);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad750);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = uVar58;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c610);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0516f0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar29);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar59);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f05c3a0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c380);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar58);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a420);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar27 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar27);
  uVar29 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar29);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  uVar29 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar27);
  func_0x000107c61174(uVar29);
  uVar59 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21c40);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  uVar59 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar59);
  uVar27 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad7f0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  uVar59 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar59);
  uVar27 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad830);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  uVar29 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar59 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  uVar59 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar59);
  uVar27 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f089400);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  uVar59 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar59);
  uVar27 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  uVar59 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar27);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  uVar59 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174(uVar29);
  func_0x000107c61174(uVar59);
  uVar27 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c900);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  uVar29 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174(uVar27);
  func_0x000107c61174(uVar29);
  uVar59 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f118a80);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar59);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar27 = uVar29;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar57);
  func_0x000107c61574(uStack_220);
  func_0x000107c61574(uStack_228);
  func_0x000107c61574(uStack_230);
  func_0x000107c61574(uStack_238);
  func_0x000107c61574(uStack_240);
  func_0x000107c61574(uStack_248);
  func_0x000107c61574(uStack_250);
  func_0x000107c61574(uStack_258);
  func_0x000107c61574(uStack_260);
  *(undefined8 *)(param_2 + 0x208) = uVar27;
  *param_1 = param_2;
  return;
}



/* Entry: 102ff9ebc; end: 102ff9f77;  */

void FUN_102ff9ebc(void)

{
  long unaff_x20;
  
  FUN_102ff76a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200));
  return;
}



/* Entry: 102ff9f78; end: 102ffc15b;  */

long FUN_102ff9f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_4;
  *(undefined8 *)(unaff_x20 + 0x78) = param_5;
  *(undefined8 *)(unaff_x20 + 0x80) = param_6;
  *(undefined8 *)(unaff_x20 + 0x88) = param_7;
  *(undefined8 *)(unaff_x20 + 0x90) = param_8;
  *(undefined8 *)(unaff_x20 + 0x98) = param_9;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_10;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_11;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_12;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_13;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_14;
  *(undefined8 *)(unaff_x20 + 200) = param_15;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_16;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_17;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_18;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_19;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_20;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_21;
  *(undefined8 *)(unaff_x20 + 0x100) = param_22;
  *(undefined8 *)(unaff_x20 + 0x108) = param_23;
  *(undefined8 *)(unaff_x20 + 0x110) = param_24;
  *(undefined8 *)(unaff_x20 + 0x118) = param_25;
  *(undefined8 *)(unaff_x20 + 0x120) = param_26;
  *(undefined8 *)(unaff_x20 + 0x128) = param_27;
  *(undefined8 *)(unaff_x20 + 0x130) = param_28;
  *(undefined8 *)(unaff_x20 + 0x138) = param_29;
  *(undefined8 *)(unaff_x20 + 0x140) = param_30;
  *(undefined8 *)(unaff_x20 + 0x148) = param_31;
  *(undefined8 *)(unaff_x20 + 0x150) = param_32;
  *(undefined8 *)(unaff_x20 + 0x158) = param_33;
  *(undefined8 *)(unaff_x20 + 0x160) = param_34;
  *(undefined8 *)(unaff_x20 + 0x168) = param_35;
  *(undefined8 *)(unaff_x20 + 0x170) = param_36;
  *(undefined8 *)(unaff_x20 + 0x178) = param_37;
  *(undefined8 *)(unaff_x20 + 0x180) = param_38;
  *(undefined8 *)(unaff_x20 + 0x188) = param_39;
  *(undefined8 *)(unaff_x20 + 400) = param_40;
  *(undefined8 *)(unaff_x20 + 0x198) = param_41;
  *(undefined8 *)(unaff_x20 + 0x1a0) = param_42;
  *(undefined8 *)(unaff_x20 + 0x1a8) = param_43;
  *(undefined8 *)(unaff_x20 + 0x1b0) = param_44;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_45;
  *(undefined8 *)(unaff_x20 + 0x1c0) = param_46;
  *(undefined8 *)(unaff_x20 + 0x1c8) = param_47;
  *(undefined8 *)(unaff_x20 + 0x1d0) = param_48;
  *(undefined8 *)(unaff_x20 + 0x1d8) = param_49;
  *(undefined8 *)(unaff_x20 + 0x1e0) = param_50;
  *(undefined8 *)(unaff_x20 + 0x1e8) = param_51;
  *(undefined8 *)(unaff_x20 + 0x1f0) = param_52;
  *(undefined8 *)(unaff_x20 + 0x1f8) = param_53;
  *(undefined8 *)(unaff_x20 + 0x200) = param_54;
  func_0x0001000285a8(0x112e9ee00,&UNK_10daaf8c0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_55;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e9edf8,&UNK_10dabb450);
  func_0x000107c610f8();
  uVar1 = param_56;
  func_0x000107c6157c(param_56);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar4;
  func_0x0001000285a8(0x112e9edf0,&UNK_10dabb460);
  func_0x000107c610f8();
  uVar1 = param_57;
  func_0x000107c6157c(param_57);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = param_58;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x30) = puVar6;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar1 = param_59;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x38) = puVar7;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar1 = param_60;
  func_0x000107c6157c(param_60);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x40) = puVar8;
  func_0x0001000285a8(0x112e9f058,&UNK_10daafe58);
  func_0x000107c610f8();
  uVar1 = param_61;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar11 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x48) = puVar11;
  func_0x0001000285a8(0x112e51df8,&UNK_10daafe60);
  func_0x000107c610f8();
  uVar1 = param_62;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x50) = puVar9;
  func_0x0001000285a8(0x112f31a08,&UNK_10db77ef8);
  func_0x000107c610f8();
  uVar1 = param_63;
  func_0x000107c6157c(param_63);
  func_0x0001003b3b80();
  puVar10 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x58) = puVar10;
  puVar2 = PTR_PTR_1126ac9a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c530);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad7b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000012;
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f009f80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0a3f60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c010);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_33);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_34);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_35);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_36);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_37);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f053c90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_39);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad750);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_40);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_41);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c610);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_42);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0516f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_43);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_44);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_45);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f05c3a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_46);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_47);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_48);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c380);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_49);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(param_50);
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a420);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_51);
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_51);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_52);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_53);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_54);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21c40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad830);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f089400);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c900);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f118a80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  puVar11 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_54);
  func_0x000107c61574(param_55);
  func_0x000107c61574(param_56);
  func_0x000107c61574(param_57);
  func_0x000107c61574(param_58);
  func_0x000107c61574(param_59);
  func_0x000107c61574(param_60);
  func_0x000107c61574(param_61);
  func_0x000107c61574(param_62);
  func_0x000107c61574(param_63);
  *(undefined **)(unaff_x20 + 0x208) = puVar11;
  return unaff_x20;
}



/* Entry: 102ffc15c; end: 102ffc38f;  */

void FUN_102ffc15c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x208));
  return;
}



/* Entry: 102ffc390; end: 102ffc3e3;  */

void FUN_102ffc390(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x208);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffc3e4; end: 102ffc3eb;  */

void FUN_102ffc3e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x208);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffc3ec; end: 102ffc43b;  */

undefined8 FUN_102ffc3ec(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ffc43c; end: 102ffc47f;  */

undefined1  [16] FUN_102ffc43c(void)

{
  return ZEXT816(0x1105fba88);
}



/* Entry: 102ffc480; end: 102ffc4a7;  */

void FUN_102ffc480(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ffc4a8; end: 102ffc4af;  */

undefined8 FUN_102ffc4a8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ffc4b0; end: 102ffc543;  */

void FUN_102ffc4b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001003327bc();
  func_0x000107c613fc();
  FUN_102ffc5a4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102ffc544; end: 102ffc54f;  */

void FUN_102ffc544(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001003327bc();
  func_0x000107c613fc();
  FUN_102ffc5a4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffc550; end: 102ffc5a3;  */

undefined8 FUN_102ffc550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102ffc5a4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102ffc5a4; end: 102ffc78b;  */

void FUN_102ffc5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126ac9b0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x65536574696c7173;
  func_0x000107c5fadc(0x65536574696c7173,0xee00736563697672);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102ffc78c; end: 102ffc7c7;  */

void FUN_102ffc78c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ffc7c8; end: 102ffc81b;  */

void FUN_102ffc7c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffc81c; end: 102ffc823;  */

void FUN_102ffc81c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ffc824; end: 102ffc873;  */

undefined8 FUN_102ffc824(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ffc874; end: 102ffc8b7;  */

undefined1  [16] FUN_102ffc874(void)

{
  return ZEXT816(0x1105fbb50);
}



/* Entry: 102ffc8b8; end: 102ffc8df;  */

void FUN_102ffc8b8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ffc8e0; end: 102ffc8e7;  */

undefined8 FUN_102ffc8e0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ffc8e8; end: 102ffcae7;  */

void FUN_102ffc8e8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100379af4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = param_3;
  *(undefined8 *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x30) = param_5;
  *(undefined8 *)(param_2 + 0x38) = param_6;
  *(undefined8 *)(param_2 + 0x40) = param_7;
  *(undefined8 *)(param_2 + 0x48) = uStack_70;
  func_0x0001000285a8(0x112ec3a68,&UNK_10dae3cc0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(param_2 + 0x18) = puVar3;
  func_0x000103002054(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar3);
  uVar2 = uStack_68;
  func_0x000107c61174();
  uVar4 = uVar2;
  func_0x000103001d94();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_103001df8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uStack_78);
  *(undefined8 *)(param_2 + 0x50) = uVar5;
  *param_1 = param_2;
  return;
}


