/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e6c5ac; end: 100e6c5d3;  */

void FUN_100e6c5ac(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e6c3e8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e6c5d4; end: 100e6c5e7;  */

void FUN_100e6c5d4(void)

{
  FUN_100e6c204();
  return;
}



/* Entry: 100e6c5e8; end: 100e6c793;  */

void FUN_100e6c5e8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long unaff_x21;
  undefined8 uVar7;
  
  plVar6 = param_1;
  func_0x000103c31f74();
  plVar6 = (long *)*plVar6;
  func_0x000100e74180();
  plVar1 = plVar6;
  func_0x000107c6157c(plVar6);
  FUN_100e6c9a0();
  uVar7 = 0x65766974614e6441;
  (**(code **)(*plVar6 + 0xa0))(0x65766974614e6441,0xee00726567676f4c,plVar1);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(plVar1);
  (**(code **)(*param_1 + 0x128))(0x65766974614e6441,0xee00726567676f4c);
  if (unaff_x21 == 0) {
    uVar2 = param_2;
    uVar3 = param_3;
    FUN_100e6c794(param_2,param_3,param_4);
    uVar4 = uVar3;
    func_0x000100e73e30();
    func_0x000107c61574(uVar3);
    pcVar5 = *(code **)(*param_1 + 0x338);
    (*pcVar5)(uVar7,0,uVar2,uVar4);
    func_0x000107c61574(uVar4);
    func_0x000100e6c7f8(param_2,param_3,param_4);
    uVar2 = param_3;
    func_0x000100e73e30();
    func_0x000107c61574(param_3);
    (*pcVar5)(uVar7,1,param_2,uVar2);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 100e6c794; end: 100e6c85b;  */

undefined1  [16] FUN_100e6c794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_11035c0a8;
  func_0x000107c613fc(&UNK_11035c0a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c615f0(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100e779c4;
  return auVar2;
}



/* Entry: 100e6c85c; end: 100e6c8a3;  */

void FUN_100e6c85c(void)

{
  long extraout_x8;
  long unaff_x21;
  code *unaff_x22;
  
  func_0x000100e7b3c0();
  (**(code **)(extraout_x8 + 0x1a0))(0);
  if (unaff_x21 == 0) {
    func_0x000100e7bd98();
    (*unaff_x22)();
    func_0x000100e7b9f0();
  }
  return;
}



/* Entry: 100e6c8a4; end: 100e6c92f;  */

void FUN_100e6c8a4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  long extraout_x8;
  long unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x000100e7b480();
  func_0x000100e7ab90();
  func_0x000100e7b490();
  func_0x000100e7bbcc();
  (**(code **)(extraout_x8 + 0xf8))(param_2);
  func_0x000100e7a48c();
  func_0x000100e7a0cc();
  if (((param_4 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000100e79f20();
    param_3[1] = in_register_00005008;
    *param_3 = param_1;
    func_0x000100e7a074();
  }
  func_0x000100e7b0f4();
  return;
}



/* Entry: 100e6c930; end: 100e6c967;  */

void FUN_100e6c930(void)

{
  func_0x000100e7b03c();
  func_0x000100e7c13c();
  func_0x000100e7b034();
  return;
}



/* Entry: 100e6c968; end: 100e6c99f;  */

void FUN_100e6c968(void)

{
  func_0x000100e7b03c();
  func_0x000100e7c13c();
  func_0x000100e7b034();
  return;
}



/* Entry: 100e6c9a0; end: 100e6ca2f;  */

void FUN_100e6c9a0(undefined8 param_1)

{
  FUN_100e779e8();
  func_0x000100e7a0b0();
  func_0x000100e7a764(2);
  func_0x000100e7a210();
  func_0x000100e7b30c(0x676f6c,0xe300000000000000,0x29732866);
  func_0x000100e7a060();
  func_0x000100e7b30c(0x726f727265,0xe500000000000000,0x29732866);
  func_0x000100e7af88();
  func_0x000100e7a6d0();
  func_0x000103c31164(param_1,0,1);
  return;
}



/* Entry: 100e6ca30; end: 100e6ca77;  */

void FUN_100e6ca30(void)

{
  FUN_100e73bb8(PTR__swift_release_11034f4c0);
  func_0x000100e7ae48();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e6ca78; end: 100e6ca9f;  */

void FUN_100e6ca78(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e4dd34();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e6caa0; end: 100e6cadf;  */

void FUN_100e6caa0(undefined8 param_1,undefined8 param_2)

{
  FUN_100e73c58(param_1,param_2,&PTR_DAT_11035a958,FUN_100e75290);
  return;
}



/* Entry: 100e6cae0; end: 100e6ccbf;  */

void FUN_100e6cae0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x21;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar3 = param_1;
  func_0x000103c31f74();
  plVar3 = (long *)*plVar3;
  func_0x000100e74230();
  plVar1 = plVar3;
  func_0x000107c6157c(plVar3);
  FUN_100e6d324();
  uVar4 = 0x4d73666f43656641;
  (**(code **)(*plVar3 + 0xa0))(0x4d73666f43656641,0xee00726567616e61,plVar1);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(plVar1);
  (**(code **)(*param_1 + 0x128))(0x4d73666f43656641,0xee00726567616e61);
  if (unaff_x21 == 0) {
    pcVar5 = *(code **)(*param_1 + 0x3b0);
    uStack_80 = param_3;
    uStack_78 = param_4;
    plStack_70 = param_1;
    uStack_68 = param_2;
    (*pcVar5)();
    uStack_80 = param_3;
    uStack_78 = param_4;
    plStack_70 = param_1;
    uStack_68 = param_2;
    (*pcVar5)(uVar4,1,0x100e778dc,auStack_90);
    uStack_80 = param_3;
    uStack_78 = param_4;
    plStack_70 = param_1;
    uStack_68 = param_2;
    (*pcVar5)(uVar4,2,0x100e778f4,auStack_90);
    FUN_100e6ce04(param_2,param_3,param_4);
    uVar2 = param_3;
    func_0x000100e73e30();
    func_0x000107c61574(param_3);
    (**(code **)(*param_1 + 0x338))(uVar4,3,param_2,uVar2);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 100e6ccc0; end: 100e6cd2b;  */

void FUN_100e6ccc0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x10))(param_3,param_4);
  (**(code **)(*param_1 + 0x140))();
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100e6cd2c; end: 100e6cd97;  */

void FUN_100e6cd2c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  (**(code **)(*param_1 + 0x140))();
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100e6cd98; end: 100e6ce03;  */

void FUN_100e6cd98(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x20))(param_3,param_4);
  (**(code **)(*param_1 + 0x140))();
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100e6ce04; end: 100e6ce67;  */

undefined1  [16] FUN_100e6ce04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_11035c008;
  func_0x000107c613fc(&UNK_11035c008,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c615f0(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100e77924;
  return auVar2;
}



/* Entry: 100e6ce68; end: 100e6ceef;  */

/* WARNING: Removing unreachable block (ram,0x000100e6ceb4) */

void FUN_100e6ce68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  code *unaff_x22;
  code *pcVar4;
  
  func_0x000100e7b3c0();
  pcVar4 = *(code **)(extraout_x8 + 0x1a0);
  uVar1 = 0;
  (*pcVar4)(0);
  if (unaff_x21 == 0) {
    uVar2 = 1;
    uVar3 = param_2;
    (*pcVar4)(1);
    func_0x000100e7bd98(uVar1,param_2,uVar2,uVar3);
    (*unaff_x22)();
    func_0x000100e7b9f0();
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 100e6cef0; end: 100e6d00b;  */

void FUN_100e6cef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  code *pcVar4;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  pcVar4 = *(code **)(*plVar1 + 0xf8);
  (*pcVar4)(param_1,param_2);
  (*pcVar4)(param_3,param_4);
  plVar2 = plVar1;
  (**(code **)(*param_5 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    plVar3[1] = -0x13ffffff9990bc9b;
    *plVar3 = 0x6641657461647075;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6d00c; end: 100e6d02f;  */

void FUN_100e6d00c(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x10);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e6d030; end: 100e6d05b;  */

void FUN_100e6d030(void)

{
  long unaff_x20;
  
  func_0x000100e7b114();
  func_0x000100e7a1a4(unaff_x20 + 0x10);
  func_0x000100e7c1c0();
  return;
}



/* Entry: 100e6d05c; end: 100e6d09f;  */

undefined1  [16] FUN_100e6d05c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e79f88();
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e79938;
  return auVar1;
}



/* Entry: 100e6d0a0; end: 100e6d0ab;  */

void FUN_100e6d0a0(undefined8 param_1)

{
  undefined8 uVar1;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b114(param_1,PTR__swift_release_11034f4c0);
  func_0x000100e7a1a4(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
  (*unaff_x19)(uVar1);
  return;
}



/* Entry: 100e6d0ac; end: 100e6d0df;  */

void FUN_100e6d0ac(void)

{
  undefined8 uVar1;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b114();
  func_0x000100e7a1a4(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
  (*unaff_x19)(uVar1);
  return;
}



/* Entry: 100e6d0e0; end: 100e6d0ff;  */

undefined1  [16] FUN_100e6d0e0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a09c();
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x100e7993c;
  return auVar1;
}



/* Entry: 100e6d100; end: 100e6d103;  */

void FUN_100e6d100(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x20);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100e6d104; end: 100e6d127;  */

void FUN_100e6d104(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x20);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100e6d128; end: 100e6d133;  */

void FUN_100e6d128(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e7b114(param_1,PTR__swift_release_11034f4c0);
  func_0x000100e7a1a4(unaff_x20 + 0x20);
  func_0x000100e7c1ac();
  return;
}



/* Entry: 100e6d134; end: 100e6d15f;  */

void FUN_100e6d134(void)

{
  long unaff_x20;
  
  func_0x000100e7b114();
  func_0x000100e7a1a4(unaff_x20 + 0x20);
  func_0x000100e7c1ac();
  return;
}



/* Entry: 100e6d160; end: 100e6d17f;  */

undefined1  [16] FUN_100e6d160(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e79fe0();
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100e79940;
  return auVar1;
}



/* Entry: 100e6d180; end: 100e6d1cf;  */

void FUN_100e6d180(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000100e7ba2c();
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  func_0x000100e7b03c();
  (*pcVar1)();
  func_0x000100e7b034();
  return;
}



/* Entry: 100e6d1d0; end: 100e6d323;  */

/* WARNING: Removing unreachable block (ram,0x000100e6d2e4) */
/* WARNING: Removing unreachable block (ram,0x000100e6d2b8) */
/* WARNING: Removing unreachable block (ram,0x000100e6d278) */
/* WARNING: Removing unreachable block (ram,0x000100e6d2ec) */
/* WARNING: Removing unreachable block (ram,0x000100e6d2f8) */
/* WARNING: Removing unreachable block (ram,0x000100e6d300) */
/* WARNING: Removing unreachable block (ram,0x000100e6d304) */

void FUN_100e6d1d0(undefined8 param_1)

{
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar1;
  undefined8 uStack_48;
  
  func_0x000100e7bc88();
  func_0x000100e7ae84();
  if (unaff_x21 == 0) {
    pcVar1 = *(code **)(*unaff_x20 + 0x3b8);
    func_0x000100e7baf0();
    func_0x000100e7be1c(&uStack_48);
    func_0x000100e7ae68();
    *(undefined8 *)(unaff_x19 + 0x10) = uStack_48;
    func_0x000100e7b608(&uStack_48);
    func_0x000100e7ae68();
    *(undefined8 *)(unaff_x19 + 0x18) = uStack_48;
    func_0x000100e7b6a4(&uStack_48);
    (*pcVar1)();
    *(undefined8 *)(unaff_x19 + 0x20) = uStack_48;
    func_0x000100e7b814(*(undefined8 *)(*unaff_x20 + 0x288));
    func_0x000100e7b3f4();
    *(code **)(unaff_x19 + 0x28) = FUN_100e778ac;
    *(undefined8 *)(unaff_x19 + 0x30) = param_1;
    func_0x000100e7b258();
    func_0x000100e7b034();
  }
  else {
    func_0x000107c61574();
    func_0x000100e74230();
    func_0x000100e7ab5c();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e6d324; end: 100e6d437;  */

void FUN_100e6d324(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x30;
  
  func_0x000100e7c4c4();
  FUN_100e779e8();
  func_0x000100e7a178();
  *(undefined8 *)(unaff_x30 + 0x18) = 9;
  *(undefined8 *)(unaff_x30 + 0x10) = 4;
  lVar1 = unaff_x30;
  func_0x000100e7b0b0();
  func_0x000100e7a210();
  func_0x000100e7b8a0();
  func_0x000100e7b6c8();
  func_0x000100e7a9a8();
  *(long *)(unaff_x30 + 0x20) = lVar1;
  func_0x000100e79fb8("afeCofValuesObservable");
  uVar2 = 0xd000000000000016;
  func_0x000100e7a9a8(0xd000000000000016,0x800000010ef157d0);
  *(undefined8 *)(unaff_x30 + 0x28) = uVar2;
  func_0x000100e79fb8("adRequestAfeCategoryObservable");
  uVar2 = 0xd00000000000001e;
  func_0x000100e7a9a8(0xd00000000000001e,0x800000010ef157d0);
  *(undefined8 *)(unaff_x30 + 0x30) = uVar2;
  func_0x000100e7a168();
  uVar2 = 0x6641657461647075;
  func_0x000100e7b468(0x6641657461647075,0xec000000666f4365,0x2973202c732866);
  *(undefined8 *)(unaff_x30 + 0x38) = uVar2;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e7a8b4();
  return;
}



/* Entry: 100e6d438; end: 100e6d523;  */

void FUN_100e6d438(void)

{
  func_0x000100e7b6e4();
  func_0x000100e7b6dc();
  func_0x000100e7b7b0();
  func_0x000100e7b6d4();
  return;
}



/* Entry: 100e6d524; end: 100e6d54b;  */

void FUN_100e6d524(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e4e370();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e6d54c; end: 100e6d56f;  */

void FUN_100e6d54c(undefined8 param_1,undefined8 param_2)

{
  FUN_100e73c58(param_1,param_2,&PTR_DAT_11035a9c0,0x100e752a8);
  return;
}



/* Entry: 100e6d570; end: 100e6dd7b;  */

/* WARNING: Removing unreachable block (ram,0x000100e6d9e8) */

void FUN_100e6d570(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long unaff_x21;
  
  plVar7 = param_1;
  func_0x000103c31f74();
  plVar7 = (long *)*plVar7;
  func_0x000100e74044();
  plVar1 = plVar7;
  func_0x000107c6157c(plVar7);
  FUN_100e702d4();
  (**(code **)(*plVar7 + 0xa0))(0xd000000000000015,0x800000010d905930,plVar1);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(plVar1);
  uVar2 = 0xd000000000000015;
  (**(code **)(*param_1 + 0x128))(0xd000000000000015,0x800000010d905930);
  if (unaff_x21 == 0) {
    uVar3 = param_2;
    uVar4 = param_3;
    FUN_100e6dd7c(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    pcVar6 = *(code **)(*param_1 + 0x340);
    (*pcVar6)(uVar2,0,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6dde0(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,1,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6de44(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,2,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6dea8(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,3,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6df0c(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,4,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6df70(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,5,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6dfd4(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,6,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e038(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,7,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e09c(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,8,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e100(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,9,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e164(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,10,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e1c8(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,0xb,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e22c(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,0xc,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e290(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,0xd,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e2f4(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,0xe,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    uVar3 = param_2;
    uVar4 = param_3;
    func_0x000100e6e358(param_2,param_3,param_4);
    uVar5 = uVar4;
    func_0x000100e6e420();
    func_0x000107c61574(uVar4);
    (*pcVar6)(uVar2,0xf,uVar3,uVar5);
    func_0x000100c989ec(uVar3,uVar5);
    func_0x000100e6e3bc(param_2,param_3,param_4);
    uVar3 = param_3;
    func_0x000100e6e420();
    func_0x000107c61574(param_3);
    (*pcVar6)(uVar2,0x10,param_2,uVar3);
    func_0x000100c989ec(param_2,uVar3);
  }
  return;
}



/* Entry: 100e6dd7c; end: 100e6e46f;  */

undefined1  [16] FUN_100e6dd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_11035bfb8;
  func_0x000107c613fc(&UNK_11035bfb8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c615f0(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100e77888;
  return auVar2;
}



/* Entry: 100e6e470; end: 100e6e59b;  */

void FUN_100e6e470(long *param_1,code *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  pcVar6 = *(code **)(*param_1 + 0x1b0);
  plVar1 = param_1;
  FUN_100e753d8();
  uVar2 = 0;
  (*pcVar6)(&uStack_51,0,&UNK_11035ad20,plVar1);
  if (unaff_x21 == 0) {
    FUN_100e75b80();
    puVar5 = &UNK_11035b230;
    (*pcVar6)(&uStack_52,1,&UNK_11035b230,uVar2);
    uVar3 = 2;
    (**(code **)(*param_1 + 0x3d0))(2);
    pcVar6 = *(code **)(*param_1 + 0x408);
    uVar2 = uVar3;
    func_0x000100e74250();
    uVar4 = 3;
    (*pcVar6)(3,uVar2,&PTR_DAT_110359ed8);
    (*param_2)(uStack_51,uStack_52,uVar3,puVar5,uVar4);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 100e6e59c; end: 100e6e5c3;  */

void FUN_100e6e59c(void)

{
  func_0x000100e7a68c(0x100e775e8);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6e5c4; end: 100e6e773;  */

void FUN_100e6e5c4(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  long *plStack_68;
  
  plVar2 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  puStack_70 = &UNK_11035ad20;
  plVar3 = plVar2;
  func_0x000100e72a50();
  pcVar6 = *(code **)(*plVar2 + 0x118);
  auStack_88[0] = param_1;
  plStack_68 = plVar3;
  (*pcVar6)(auStack_88);
  puVar4 = auStack_88;
  func_0x0001000834e4();
  puStack_70 = &UNK_11035b230;
  func_0x000100e73050();
  auStack_88[0] = param_2;
  plStack_68 = (long *)puVar4;
  (*pcVar6)(auStack_88);
  func_0x0001000834e4(auStack_88);
  (**(code **)(*plVar2 + 0x450))(param_3,param_4);
  ppuVar1 = (undefined **)0x0;
  if (param_5 != 0) {
    ppuVar1 = &PTR_DAT_110359f00;
  }
  (**(code **)(*plVar2 + 0x498))(param_5,ppuVar1);
  if (unaff_x21 == 0) {
    plVar3 = plVar2;
    (**(code **)(*param_6 + 0x70))(plVar2,0);
    plVar5 = plVar3;
    (**(code **)(*plVar2 + 0xa0))();
    if (((ulong)plVar3 & 1) == 0) {
      FUN_100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar5,0,0);
      *plVar5 = -0x2fffffffffffffef;
      plVar5[1] = -0x7ffffffef10ebd30;
      plVar5[2] = 0;
      plVar5[3] = 0;
      *(undefined1 *)(plVar5 + 4) = 1;
      func_0x000107c61654();
    }
  }
  func_0x000107c61574(plVar2);
  return;
}



/* Entry: 100e6e774; end: 100e6e79b;  */

void FUN_100e6e774(void)

{
  func_0x000100e7a68c(0x100e775d0);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6e79c; end: 100e6e8af;  */

void FUN_100e6e79c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0x130))(param_1,&PTR_DAT_110359f00);
  if (unaff_x21 == 0) {
    plVar2 = plVar1;
    (**(code **)(*param_2 + 0x70))(plVar1,0);
    plVar3 = plVar2;
    (**(code **)(*plVar1 + 0xa0))();
    if (((ulong)plVar2 & 1) == 0) {
      FUN_100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
      *plVar3 = -0x2ffffffffffffff0;
      plVar3[1] = -0x7ffffffef10ebd10;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *(undefined1 *)(plVar3 + 4) = 1;
      func_0x000107c61654();
    }
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6e8b0; end: 100e6e8d7;  */

void FUN_100e6e8b0(void)

{
  func_0x000100e7a68c(0x100e775b8);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6e8d8; end: 100e6e9d7;  */

void FUN_100e6e8d8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0xe8))(param_1);
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffe2;
    plVar3[1] = -0x7ffffffef10ebcf0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6e9d8; end: 100e6e9ff;  */

void FUN_100e6e9d8(void)

{
  func_0x000100e7a68c(0x100e775a0);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6ea00; end: 100e6eaff;  */

void FUN_100e6ea00(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0xe8))(param_1);
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffe5;
    plVar3[1] = -0x7ffffffef10ebcd0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6eb00; end: 100e6eb27;  */

void FUN_100e6eb00(void)

{
  func_0x000100e7a68c(0x100e77588);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6eb28; end: 100e6ec03;  */

void FUN_100e6eb28(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  plVar2 = plVar1;
  (**(code **)(*param_1 + 0x70))();
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffee;
    plVar3[1] = -0x7ffffffef10ebcb0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6ec04; end: 100e6ec7b;  */

void FUN_100e6ec04(void)

{
  func_0x000100e7a68c(0x100e77568);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6ec7c; end: 100e6ece7;  */

void FUN_100e6ec7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x21;
  ulong unaff_x23;
  undefined8 in_register_00005008;
  
  func_0x000100e7ad34();
  func_0x000100e7ab90();
  func_0x000100e7b490();
  func_0x000100e7a8cc();
  func_0x000100e7a0cc();
  if (((unaff_x23 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000100e79f20();
    param_3[1] = in_register_00005008;
    *param_3 = param_1;
    func_0x000100e7a074();
  }
  func_0x000100e7b0f4();
  return;
}



/* Entry: 100e6ece8; end: 100e6ed0f;  */

void FUN_100e6ece8(void)

{
  func_0x000100e7a68c(0x100e77510);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6ed10; end: 100e6edff;  */

void FUN_100e6ed10(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0xe8))(param_1);
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    plVar3[1] = -0x109891968f9090b4;
    *plVar3 = 0x6f65646956746573;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6ee00; end: 100e6ee27;  */

void FUN_100e6ee00(void)

{
  func_0x000100e7a68c(0x100e774f8);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6ee28; end: 100e6ef27;  */

void FUN_100e6ee28(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0xe8))(param_1);
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffea;
    plVar3[1] = -0x7ffffffef10ebc90;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6ef28; end: 100e6ef4f;  */

void FUN_100e6ef28(void)

{
  func_0x000100e7a68c(0x100e774e0);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6ef50; end: 100e6f04f;  */

void FUN_100e6ef50(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0xe8))(param_1);
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffde;
    plVar3[1] = -0x7ffffffef10ebc70;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6f050; end: 100e6f087;  */

void FUN_100e6f050(void)

{
  uint uVar1;
  long extraout_x8;
  code *unaff_x19;
  long unaff_x21;
  
  func_0x000100e7adb0();
  uVar1 = 0;
  (**(code **)(extraout_x8 + 0x180))(0);
  if (unaff_x21 == 0) {
    (*unaff_x19)(uVar1 & 1);
  }
  return;
}



/* Entry: 100e6f088; end: 100e6f0af;  */

void FUN_100e6f088(void)

{
  func_0x000100e7a68c(0x100e774c8);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6f0b0; end: 100e6f1af;  */

void FUN_100e6f0b0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0xe8))(param_1);
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffe3;
    plVar3[1] = -0x7ffffffef10ebc40;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6f1b0; end: 100e6f297;  */

void FUN_100e6f1b0(long *param_1,code *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  code *pcVar5;
  undefined1 uStack_41;
  
  pcVar5 = *(code **)(*param_1 + 0x1c8);
  plVar1 = param_1;
  func_0x000100e74250();
  uVar2 = 0;
  (*pcVar5)(0,plVar1,&PTR_DAT_110359ed8);
  if (unaff_x21 == 0) {
    uVar3 = 1;
    (**(code **)(*param_1 + 0x180))(1);
    pcVar5 = *(code **)(*param_1 + 0x1b0);
    uVar4 = uVar3;
    FUN_100e75c68();
    (*pcVar5)(&uStack_41,2,&UNK_11035b2c0,uVar4);
    (*param_2)(uVar2,(uint)uVar3 & 1,uStack_41);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 100e6f298; end: 100e6f2bf;  */

void FUN_100e6f298(void)

{
  func_0x000100e7a68c(0x100e774b0);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6f2c0; end: 100e6f42f;  */

void FUN_100e6f2c0(undefined8 param_1,uint param_2,undefined1 param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x21;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0x130))(param_1,&PTR_DAT_110359f00);
  if (unaff_x21 == 0) {
    uVar2 = (ulong)(param_2 & 1);
    (**(code **)(*plVar1 + 0xe8))();
    puStack_60 = &UNK_11035b2c0;
    func_0x000100e73110();
    auStack_78[0] = param_3;
    uStack_58 = uVar2;
    (**(code **)(*plVar1 + 0x118))(auStack_78);
    func_0x0001000834e4(auStack_78);
    plVar3 = plVar1;
    (**(code **)(*param_4 + 0x70))(plVar1,0);
    plVar4 = plVar3;
    (**(code **)(*plVar1 + 0xa0))();
    if (((ulong)plVar3 & 1) == 0) {
      FUN_100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar4,0,0);
      *plVar4 = -0x2fffffffffffffee;
      plVar4[1] = -0x7ffffffef10ebc20;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *(undefined1 *)(plVar4 + 4) = 1;
      func_0x000107c61654();
    }
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6f430; end: 100e6f457;  */

void FUN_100e6f430(void)

{
  func_0x000100e7a68c(0x100e77498);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6f458; end: 100e6f533;  */

void FUN_100e6f458(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  plVar2 = plVar1;
  (**(code **)(*param_1 + 0x70))();
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffe8;
    plVar3[1] = -0x7ffffffef10ebc00;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6f534; end: 100e6f567;  */

void FUN_100e6f534(void)

{
  long extraout_x8;
  code *unaff_x19;
  long unaff_x21;
  
  func_0x000100e7adb0();
  (**(code **)(extraout_x8 + 0x198))(0);
  if (unaff_x21 == 0) {
    (*unaff_x19)();
  }
  return;
}



/* Entry: 100e6f568; end: 100e6f58f;  */

void FUN_100e6f568(void)

{
  func_0x000100e7a68c(FUN_100e77480);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6f590; end: 100e6f68f;  */

void FUN_100e6f590(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0xd8))(param_1);
  plVar2 = plVar1;
  (**(code **)(*param_2 + 0x70))(plVar1,0);
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    *plVar3 = -0x2fffffffffffffe4;
    plVar3[1] = -0x7ffffffef10ebbe0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6f690; end: 100e6f6b7;  */

void FUN_100e6f690(void)

{
  func_0x000100e7a68c(0x100e77434);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6f6b8; end: 100e6f7d7;  */

void FUN_100e6f6b8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0x390))(param_1,FUN_100e7744c,plVar1,PTR___sSSN_11034da80);
  if (unaff_x21 == 0) {
    plVar2 = plVar1;
    (**(code **)(*param_2 + 0x70))(plVar1,0);
    plVar3 = plVar2;
    (**(code **)(*plVar1 + 0xa0))();
    if (((ulong)plVar2 & 1) == 0) {
      FUN_100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
      *plVar3 = -0x2fffffffffffffde;
      plVar3[1] = -0x7ffffffef10ebbc0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *(undefined1 *)(plVar3 + 4) = 1;
      func_0x000107c61654();
    }
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6f7d8; end: 100e6f86f;  */

void FUN_100e6f7d8(long *param_1,code *param_2)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  undefined8 uStack_38;
  
  pcVar2 = *(code **)(*param_1 + 0x1e0);
  uVar1 = 0;
  FUN_100e78234(0,0x112d42d78,&PTR_PTR_1126a5e78);
  (*pcVar2)(&uStack_38,0,uVar1);
  if (unaff_x21 == 0) {
    (*param_2)(uStack_38);
    func_0x000107c61170(uStack_38);
  }
  return;
}



/* Entry: 100e6f870; end: 100e6f897;  */

void FUN_100e6f870(void)

{
  func_0x000100e7a68c(0x100e7741c);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6f898; end: 100e6f9a3;  */

void FUN_100e6f898(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0x138))(param_1);
  if (unaff_x21 == 0) {
    plVar2 = plVar1;
    (**(code **)(*param_2 + 0x70))(plVar1,0);
    plVar3 = plVar2;
    (**(code **)(*plVar1 + 0xa0))();
    if (((ulong)plVar2 & 1) == 0) {
      FUN_100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
      *plVar3 = -0x2fffffffffffffe8;
      plVar3[1] = -0x7ffffffef10ebb90;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *(undefined1 *)(plVar3 + 4) = 1;
      func_0x000107c61654();
    }
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e6f9a4; end: 100e6fa27;  */

void FUN_100e6f9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (pcVar1 == (code *)0x0) {
    func_0x000100e7abe8("triggerAttachment");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x11);
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fa28; end: 100e6fa7f;  */

void FUN_100e6fa28(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    func_0x000100e7abe8("openBrandProfile");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x10);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7be00();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fa80; end: 100e6fad7;  */

void FUN_100e6fa80(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    func_0x000100e7abe8("setVerticalActionMenuIsVisible");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x1e);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7b8c0();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fad8; end: 100e6fb2f;  */

void FUN_100e6fad8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x40) == 0) {
    func_0x000100e7abe8("setBottomActionBarIsVisible");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x1b);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7b8c0();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fb30; end: 100e6fb83;  */

void FUN_100e6fb30(void)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0x50);
  if (pcVar1 == (code *)0x0) {
    func_0x000100e7abe8("navigateToNextPage");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x12);
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fb84; end: 100e6fbd7;  */

void FUN_100e6fb84(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0x60);
  if (pcVar1 == (code *)0x0) {
    FUN_100e49460();
    func_0x000100e79f20();
    param_2[1] = 0xea00000000006f65;
    *param_2 = 0x6469566573756170;
    func_0x000100e7a074();
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fbd8; end: 100e6fc2b;  */

void FUN_100e6fbd8(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0x70);
  if (pcVar1 == (code *)0x0) {
    FUN_100e49460();
    func_0x000100e79f20();
    param_2[1] = 0xeb000000006f6564;
    *param_2 = 0x6956656d75736572;
    func_0x000100e7a074();
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fc2c; end: 100e6fc7f;  */

void FUN_100e6fc2c(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0x80);
  if (pcVar1 == (code *)0x0) {
    FUN_100e49460();
    func_0x000100e79f20();
    param_2[1] = 0xec0000006f656469;
    *param_2 = 0x5674726174736572;
    func_0x000100e7a074();
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fc80; end: 100e6fcd7;  */

void FUN_100e6fc80(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x90) == 0) {
    FUN_100e49460();
    func_0x000100e79f20();
    param_2[1] = 0xef676e69706f6f4c;
    *param_2 = 0x6f65646956746573;
    func_0x000100e7a074();
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7b8c0();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fcd8; end: 100e6fd2f;  */

void FUN_100e6fcd8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0xa0) == 0) {
    func_0x000100e7abe8("setPlaybackAutoAdvance");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x16);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7b8c0();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fd30; end: 100e6fd87;  */

void FUN_100e6fd30(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0xb0) == 0) {
    func_0x000100e7abe8("setSwipeUpTriggerAttachmentEnabled");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x22);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7b8c0();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fd88; end: 100e6fddf;  */

void FUN_100e6fd88(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0xc0) == 0) {
    func_0x000100e7abe8("setSwipeDownToDismissDisabled");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x1d);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7b8c0();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fde0; end: 100e6fe4f;  */

void FUN_100e6fde0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0xd0);
  if (pcVar1 == (code *)0x0) {
    func_0x000100e7abe8("onTooltipPresented");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x12);
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)(param_1,param_2 & 1,param_3);
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fe50; end: 100e6fea3;  */

void FUN_100e6fe50(void)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0xe0);
  if (pcVar1 == (code *)0x0) {
    func_0x000100e7abe8("onEndCardScreenshotSwipe");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x18);
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6fea4; end: 100e6ff0f;  */

void FUN_100e6fea4(undefined8 param_1)

{
  long unaff_x20;
  code *pcVar1;
  
  pcVar1 = *(code **)(unaff_x20 + 0xf0);
  if (pcVar1 == (code *)0x0) {
    func_0x000100e7abe8("onEndCardScreenshotsRendered");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x1c);
  }
  else {
    func_0x000100e7b03c();
    (*pcVar1)(param_1);
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6ff10; end: 100e6ff67;  */

void FUN_100e6ff10(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x100) == 0) {
    func_0x000100e7abe8("notifyDisplayedReviewIdsForEndCard");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x22);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7be00();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6ff68; end: 100e6ffbf;  */

void FUN_100e6ff68(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x110) == 0) {
    func_0x000100e7abe8("submitLeadGenFromEndCard");
    func_0x000100e79f20();
    func_0x000100e79f9c(0x18);
  }
  else {
    func_0x000100e7b03c();
    func_0x000100e7be00();
    func_0x000100e7a464();
  }
  return;
}



/* Entry: 100e6ffc0; end: 100e702d3;  */

void FUN_100e6ffc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  code *unaff_x27;
  
  func_0x000100e7adc4();
  func_0x000107c60ee4(unaff_x19 + 0x10,0x110);
  func_0x000100e7c000(*(undefined8 *)(*unaff_x20 + 0x350));
  (*extraout_x8)();
  if (unaff_x21 == 0) {
    func_0x000100e7c374();
    func_0x000100e7b104();
    FUN_100e6e59c();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x18) = unaff_x26;
    func_0x000100c989ec(uVar3,uVar1);
    func_0x000100e7ae58();
    (*unaff_x27)();
    FUN_100e6e774();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x28) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6e8b0();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x38) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6e9d8();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x40) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x48) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6eb00();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x50) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6ec04();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
    *(undefined8 *)(unaff_x19 + 0x60) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x68) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    func_0x000100e6ec2c();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x70) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x78) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    func_0x000100e6ec54();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x19 + 0x80) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x88) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6ece8();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x90) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x98) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6ee00();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0xa8) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6ef28();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6f088();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x19 + 200);
    *(undefined8 *)(unaff_x19 + 0xc0) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 200) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6f298();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xd8);
    *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6f430();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xe8);
    *(undefined8 *)(unaff_x19 + 0xe0) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0xe8) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6f568();
    func_0x000100e7a25c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xf8);
    *(undefined8 *)(unaff_x19 + 0xf0) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0xf8) = unaff_x26;
    FUN_100e7b26c(uVar3,uVar1);
    func_0x000100e7b104();
    FUN_100e6f690();
    func_0x000100e7a25c();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x108);
    *(undefined8 *)(unaff_x19 + 0x100) = unaff_x25;
    *(undefined8 *)(unaff_x19 + 0x108) = unaff_x26;
    FUN_100e7b26c(uVar1,uVar2);
    func_0x000100e7b104();
    FUN_100e6f870();
    func_0x000100e7c2cc();
    func_0x000100e7b488();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x118);
    *(undefined8 *)(unaff_x19 + 0x110) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x118) = unaff_x25;
    func_0x000100c989ec(uVar1,uVar2);
    func_0x000100e7b258();
  }
  else {
    func_0x000100e7b0f4();
  }
  func_0x000100e7b034();
  func_0x000100e7b294();
  return;
}



/* Entry: 100e702d4; end: 100e705ef;  */

void FUN_100e702d4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x30;
  
  func_0x000100e7c4c4();
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7b0cc();
  *(undefined8 *)(unaff_x30 + 0x18) = 0x23;
  *(undefined8 *)(unaff_x30 + 0x10) = 0x11;
  func_0x000100e7b0b0();
  func_0x000100e7a210();
  uVar1 = 0xd000000000000011;
  func_0x000103c31710(0xd000000000000011,0x800000010ef142d0,0xd000000000000029,0x800000010ef15830);
  *(undefined8 *)(unaff_x30 + 0x20) = uVar1;
  func_0x000100e79fcc("openBrandProfile");
  uVar1 = 0xd000000000000010;
  func_0x000100e7b848();
  func_0x000100e7c0c4();
  *(undefined8 *)(unaff_x30 + 0x28) = uVar1;
  func_0x000100e7a168("setVerticalActionMenuIsVisible");
  uVar1 = 0xd00000000000001e;
  func_0x000100e7ad14();
  *(undefined8 *)(unaff_x30 + 0x30) = uVar1;
  func_0x000100e7a168("setBottomActionBarIsVisible");
  uVar1 = 0xd00000000000001b;
  func_0x000100e7ad14();
  *(undefined8 *)(unaff_x30 + 0x38) = uVar1;
  func_0x000100e7a168();
  func_0x000100e7b6bc();
  func_0x000100e7a444();
  *(undefined8 *)(unaff_x30 + 0x40) = uVar1;
  func_0x000100e7a168();
  uVar1 = 0x6469566573756170;
  func_0x000100e7a444(0x6469566573756170,0xea00000000006f65);
  *(undefined8 *)(unaff_x30 + 0x48) = uVar1;
  func_0x000100e7a168();
  uVar1 = 0x6956656d75736572;
  func_0x000100e7a444(0x6956656d75736572,0xeb000000006f6564);
  *(undefined8 *)(unaff_x30 + 0x50) = uVar1;
  func_0x000100e7a168();
  uVar1 = 0x5674726174736572;
  func_0x000100e7a444(0x5674726174736572,0xec0000006f656469);
  *(undefined8 *)(unaff_x30 + 0x58) = uVar1;
  func_0x000100e7a168();
  uVar1 = 0x6f65646956746573;
  func_0x000100e7b4e4(0x6f65646956746573,0xef676e69706f6f4c,0x2962283f66);
  *(undefined8 *)(unaff_x30 + 0x60) = uVar1;
  func_0x000100e7a168("setPlaybackAutoAdvance");
  uVar1 = 0xd000000000000016;
  func_0x000100e7ad14();
  *(undefined8 *)(unaff_x30 + 0x68) = uVar1;
  func_0x000100e7a168("setSwipeUpTriggerAttachmentEnabled");
  uVar1 = 0xd000000000000022;
  func_0x000100e7ad14();
  *(undefined8 *)(unaff_x30 + 0x70) = uVar1;
  func_0x000100e7a168("setSwipeDownToDismissDisabled");
  uVar1 = 0xd00000000000001d;
  func_0x000100e7ad14();
  *(undefined8 *)(unaff_x30 + 0x78) = uVar1;
  func_0x000100e7a168();
  func_0x000100e7b620();
  uVar2 = 0xd00000000000001a;
  func_0x000100e7b6bc();
  func_0x000103c31710();
  *(undefined8 *)(unaff_x30 + 0x80) = uVar1;
  func_0x000100e79fcc("onEndCardScreenshotSwipe");
  func_0x000100e7c408();
  func_0x000100e7a444();
  *(undefined8 *)(unaff_x30 + 0x88) = uVar1;
  func_0x000100e79fcc("onEndCardScreenshotsRendered");
  func_0x000100e7bc24();
  uVar2 = uVar2 & 0xffff00000000ffff | 0x2964280000;
  uVar1 = 0xd00000000000001c;
  func_0x000100e7b4e4(0xd00000000000001c,0x800000010ef143e0,uVar2);
  *(undefined8 *)(unaff_x30 + 0x90) = uVar1;
  func_0x000100e79fcc("notifyDisplayedReviewIdsForEndCard");
  func_0x000100e7bc24();
  uVar1 = 0xd000000000000022;
  func_0x000100e7b0ec(0xd000000000000022,0x800000010ef143e0,uVar2 & 0xffff | 0x293e733c61280000);
  *(undefined8 *)(unaff_x30 + 0x98) = uVar1;
  func_0x000100e79fcc("submitLeadGenFromEndCard");
  func_0x000100e7b848();
  uVar1 = 0xd000000000000018;
  func_0x000100e7c0c4();
  *(undefined8 *)(unaff_x30 + 0xa0) = uVar1;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e7a8b4();
  return;
}



/* Entry: 100e705f0; end: 100e70647;  */

void FUN_100e705f0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  func_0x000103c31f74();
  plVar1 = (long *)*param_1;
  pcVar2 = *(code **)(*plVar1 + 0xa8);
  func_0x000107c6157c(plVar1);
  (*pcVar2)(0xd000000000000013,0x800000010ef15880);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar1);
  return;
}



/* Entry: 100e70648; end: 100e707eb;  */

void FUN_100e70648(void)

{
  long unaff_x20;
  
  FUN_100e7aa8c();
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118));
  return;
}



/* Entry: 100e707ec; end: 100e70813;  */

void FUN_100e707ec(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e4d68c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e70814; end: 100e70837;  */

void FUN_100e70814(undefined8 param_1,undefined8 param_2)

{
  FUN_100e73c58(param_1,param_2,&PTR_DAT_11035aa38,0x100e752d8);
  return;
}



/* Entry: 100e70838; end: 100e70b07;  */

void FUN_100e70838(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar3 = param_1;
  func_0x000103c31f74();
  plVar3 = (long *)*plVar3;
  FUN_100e74024();
  plVar1 = plVar3;
  func_0x000107c6157c(plVar3);
  FUN_100e71c70();
  (**(code **)(*plVar3 + 0xa0))(0xd000000000000012,0x800000010d905910,plVar1);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(plVar1);
  uVar2 = 0xd000000000000012;
  (**(code **)(*param_1 + 0x128))(0xd000000000000012,0x800000010d905910);
  if (unaff_x21 == 0) {
    pcVar4 = *(code **)(*param_1 + 0x3b0);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)();
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,1,0x100e772fc,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,2,0x100e77314,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,3,0x100e7732c,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,4,0x100e77344,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,5,0x100e7735c,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,6,0x100e77374,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,7,0x100e7738c,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,8,0x100e773a4,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,9,0x100e773bc,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,10,0x100e773d4,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,0xb,0x100e773ec,auStack_80);
    uStack_70 = param_3;
    uStack_68 = param_4;
    plStack_60 = param_1;
    uStack_58 = param_2;
    (*pcVar4)(uVar2,0xc,0x100e77404,auStack_80);
  }
  return;
}



/* Entry: 100e70b08; end: 100e70b7b;  */

void FUN_100e70b08(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x10))(param_3,param_4);
  (**(code **)(*param_1 + 0x4a0))();
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100e70b7c; end: 100e70bef;  */

void FUN_100e70b7c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  (**(code **)(*param_1 + 0x4a0))();
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100e70bf0; end: 100e70c63;  */

void FUN_100e70bf0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x20))(param_3,param_4);
  (**(code **)(*param_1 + 0x4a0))();
  func_0x000107c61574(param_3);
  return;
}


