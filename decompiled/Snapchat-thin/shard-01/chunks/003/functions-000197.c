/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e6484c; end: 100e64897;  */

void FUN_100e6484c(void)

{
  func_0x000103c31f74();
  func_0x000100e74e1c(&UNK_10d905e90);
  func_0x000100e7b03c();
  FUN_100e64b18();
  func_0x000100e7a26c();
  func_0x000100e7a6e8(0x22);
  func_0x000100e7b0d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 100e64898; end: 100e6492f;  */

void FUN_100e64898(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x20,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  pcVar2 = *(code **)(*param_1 + 0x390);
  func_0x000100e748cc();
  func_0x000107c61434(uVar1);
  (*pcVar2)();
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e64930; end: 100e6495f;  */

void FUN_100e64930(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e64960();
  return;
}



/* Entry: 100e64960; end: 100e64a73;  */

/* WARNING: Removing unreachable block (ram,0x000100e64a50) */
/* WARNING: Removing unreachable block (ram,0x000100e649dc) */

void FUN_100e64960(void)

{
  undefined8 uVar1;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x24;
  code *pcVar2;
  undefined8 unaff_x27;
  undefined8 auStack_68 [3];
  
  func_0x000100e7a998();
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  func_0x000100e7a5d0();
  if (unaff_x21 == 0) {
    func_0x000100e7b93c();
    pcVar2 = *(code **)(extraout_x8 + 0x3b8);
    func_0x000100e7bb2c();
    func_0x000100e7acc4(auStack_68);
    (*pcVar2)();
    *(undefined8 *)(unaff_x19 + 0x20) = auStack_68[0];
    func_0x000100e7b974();
    func_0x000100e7acd8();
    (*extraout_x8_00)();
    func_0x000100e7b1a0();
    func_0x000100e7a344();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
    *(code **)(unaff_x19 + 0x28) = pcVar2;
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x27;
    func_0x000107c6142c(uVar1);
    func_0x000100e7be08();
    func_0x000100e7ad6c();
    (*extraout_x8_01)();
    func_0x000100e7a904();
    func_0x000100e7a314();
    *(undefined8 *)(unaff_x19 + 0x38) = unaff_x24;
    *(char *)(unaff_x19 + 0x40) = (char)(undefined8 *)(unaff_x19 + 0x28);
  }
  else {
    func_0x000100e7b034();
    func_0x000107c6142c(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x000100e74e1c();
    func_0x000100e7b314();
    func_0x000100e7b1c4();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e64a74; end: 100e64ac7;  */

void FUN_100e64a74(undefined8 param_1,long *param_2,code *param_3)

{
  undefined8 *extraout_x8;
  long unaff_x22;
  undefined8 unaff_x24;
  code *pcVar1;
  
  func_0x000100e7b3ac();
  pcVar1 = *(code **)(*param_2 + 0x388);
  (*param_3)();
  (*pcVar1)();
  if (unaff_x22 == 0) {
    *extraout_x8 = unaff_x24;
  }
  return;
}



/* Entry: 100e64ac8; end: 100e64b17;  */

void FUN_100e64ac8(undefined8 param_1,long *param_2,code *param_3)

{
  undefined8 *extraout_x8;
  long unaff_x22;
  undefined8 unaff_x24;
  code *pcVar1;
  
  func_0x000100e7b3ac();
  pcVar1 = *(code **)(*param_2 + 0x1c8);
  (*param_3)();
  (*pcVar1)();
  if (unaff_x22 == 0) {
    *extraout_x8 = unaff_x24;
  }
  return;
}



/* Entry: 100e64b18; end: 100e64bd7;  */

void FUN_100e64b18(long param_1)

{
  undefined8 uVar1;
  ulong unaff_x22;
  
  FUN_100e779e8();
  func_0x000100e7a178();
  func_0x000100e7a764(4);
  func_0x000100e7a210();
  uVar1 = 0x696669746e656469;
  func_0x000100e7a968(0x696669746e656469,0xea00000000007265);
  func_0x000100e7a060();
  func_0x000100e7b424();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000100e79f74("submitButtonText");
  uVar1 = 0x10;
  func_0x000100e7a6c0(0x10,unaff_x22 | 0x8000000000000000);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000100e79f74("containerViewMarginBottom");
  func_0x000100e7c3a0();
  func_0x000100e7a2dc();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e64bd8; end: 100e64c1b;  */

void FUN_100e64bd8(void)

{
  long unaff_x20;
  
  func_0x000100e7b3fc();
  func_0x000100e7c1b8();
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 100e64c1c; end: 100e64c43;  */

void FUN_100e64c1c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e64930();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e64c44; end: 100e64cdb;  */

void FUN_100e64c44(void)

{
  FUN_100e64760();
  return;
}



/* Entry: 100e64cdc; end: 100e64ce7;  */

void FUN_100e64cdc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e7b114(param_1,PTR__swift_unknownObjectRelease_11034f530);
  func_0x000100e7a1a4(unaff_x20 + 0x28);
  func_0x000100e7c0ac();
  return;
}



/* Entry: 100e64ce8; end: 100e64d47;  */

undefined1  [16] FUN_100e64ce8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a0e4();
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x100e797dc;
  return auVar1;
}



/* Entry: 100e64d48; end: 100e64ea3;  */

void FUN_100e64d48(void)

{
  code *extraout_x8;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  func_0x000100e7a294();
  func_0x000100e74e74(&UNK_10d905ec0);
  func_0x000100e7b03c();
  FUN_100e650e0();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1b);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1b);
  if (unaff_x21 == 0) {
    func_0x000100e7b2ec();
    func_0x000100e7a57c();
    func_0x000100e7b4ec(&PTR_DAT_11035a3a8);
    func_0x000100e7b1cc();
    func_0x000100e7b1b8();
    func_0x000100e7b3e8();
    func_0x000100e7a758();
    func_0x000100e7ae3c();
    func_0x000100e7a57c(unaff_x22 + 0x18,auStack_80);
    func_0x000100e7a50c(&PTR_DAT_11035a530);
    func_0x000100e7b120();
    func_0x000100e7b3e8();
    func_0x000100e7a758();
    func_0x000100e7ae3c();
    func_0x000100e7a57c(unaff_x22 + 0x20,auStack_98);
    func_0x000100e7a50c(&PTR_DAT_11035a4c0);
    func_0x000100e7b1ac();
    func_0x000100e7b3e8();
    func_0x000100e7a758();
    func_0x000100e7ae3c();
    func_0x000100e7b164();
    func_0x000100e7a708();
    (*extraout_x8)();
    func_0x000100e7a364(unaff_x22 + 0x30);
    func_0x000100e7bc94(&PTR_DAT_110359df8);
    func_0x000100e7b364();
    func_0x000100e7a758();
    func_0x000100e7b58c();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e64ea4; end: 100e64f23;  */

void FUN_100e64ea4(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x28,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  pcVar2 = *(code **)(*param_1 + 0x4d0);
  func_0x000107c615f0(uVar1);
  (*pcVar2)();
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 100e64f24; end: 100e64f4f;  */

void FUN_100e64f24(void)

{
  func_0x000100e7a234();
  func_0x000100e7af18();
  func_0x000100e7a280();
  FUN_100e64f50();
  return;
}



/* Entry: 100e64f50; end: 100e650df;  */

/* WARNING: Removing unreachable block (ram,0x000100e65080) */

void FUN_100e64f50(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 unaff_x24;
  undefined8 *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 in_stack_00000008;
  
  func_0x000100e7bf0c();
  func_0x000100e7a71c();
  puVar3 = (undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *puVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  pcVar5 = *(code **)(*param_1 + 0x270);
  func_0x000100e749e4();
  func_0x000100e7b1b8();
  (*pcVar5)();
  if (unaff_x22 == 0) {
    func_0x000100e7a344();
    uVar1 = *puVar3;
    *puVar3 = param_1;
    func_0x000107c61574();
    func_0x000100e74de4();
    func_0x000100e7ac50();
    (*pcVar5)();
    func_0x000100e7a588(unaff_x19 + 0x18,&stack0x00000050);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    func_0x000107c61574(uVar2);
    func_0x000100e74d44();
    func_0x000100e7acd8();
    (*pcVar5)();
    func_0x000100e7a434();
    func_0x000100e7b930();
    pcVar4 = *(code **)(*unaff_x20 + 0x3b8);
    func_0x000100e7a84c();
    func_0x000100e7b2b4(&stack0x00000008);
    (*pcVar4)();
    uVar1 = in_stack_00000008;
    func_0x000100e7a588(unaff_x19 + 0x28,&stack0x00000020);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
    func_0x000107c615e8(uVar2);
    func_0x000100e73ad0();
    func_0x000100e7b134();
    (*pcVar5)();
    func_0x000100e7aea0();
    func_0x000100e7a314();
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x24;
  }
  else {
    func_0x000100e7b0f4();
  }
  func_0x000107c61574();
  func_0x000100e7b294();
  return;
}



/* Entry: 100e650e0; end: 100e651e7;  */

void FUN_100e650e0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7ae14();
  func_0x000100e7a764(5);
  func_0x000100e7a210();
  uVar1 = 0x65746e6f43617463;
  func_0x000100e7a9d4();
  func_0x000100e7b0ec();
  func_0x000100e7a060();
  func_0x000100e7c3e8();
  uVar1 = uVar1 & 0xffff | 0x6f43796576720000;
  func_0x000100e7b328(uVar1,0x746e);
  func_0x000100e7a9c0();
  func_0x000100e7b0ec();
  *(ulong *)(param_1 + 0x28) = uVar1;
  func_0x000100e79f74("arExperienceContext");
  func_0x000100e7abc4(0xd000000000000012);
  uVar1 = extraout_x8 | 1;
  func_0x000100e7b0ec(uVar1,unaff_x22 | 0x8000000000000000);
  *(ulong *)(param_1 + 0x30) = uVar1;
  func_0x000100e7a168();
  func_0x000100e7a544();
  func_0x000100e7ac88();
  *(ulong *)(param_1 + 0x38) = uVar1;
  func_0x000100e79f74("nativeDependencies");
  func_0x000100e7ad7c();
  func_0x000100e7b6bc();
  func_0x000100e7b0ec();
  *(ulong *)(param_1 + 0x40) = uVar1;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e651e8; end: 100e6522b;  */

void FUN_100e651e8(void)

{
  long unaff_x20;
  
  func_0x000100e7b6e4();
  func_0x000100e7b6dc();
  func_0x000100e7b7b0();
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100e7b6d4();
  return;
}



/* Entry: 100e6522c; end: 100e65253;  */

void FUN_100e6522c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e64f24();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e65254; end: 100e652c7;  */

void FUN_100e65254(void)

{
  FUN_100e64d48();
  return;
}



/* Entry: 100e652c8; end: 100e653db;  */

void FUN_100e652c8(void)

{
  long unaff_x21;
  long unaff_x22;
  
  func_0x000100e7a294();
  func_0x000100e74eac(&UNK_10d905ee0);
  func_0x000100e7b03c();
  FUN_100e654ec();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1d);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1d);
  if (unaff_x21 == 0) {
    func_0x000100e7b2ec();
    func_0x000100e7a4fc();
    func_0x000100e7b4ec(&PTR_DAT_11035a3e0);
    func_0x000100e7b1cc();
    func_0x000100e7b1b8();
    func_0x000100e7b3e8();
    func_0x000100e7a758();
    func_0x000100e7ae3c();
    func_0x000100e7a454(unaff_x22 + 0x18);
    func_0x000100e7a50c(&PTR_DAT_11035a568);
    func_0x000100e7b120();
    func_0x000100e7b3e8();
    func_0x000100e7a758();
    func_0x000100e7ae3c();
    func_0x000100e7a354(unaff_x22 + 0x20);
    func_0x000100e7bc94(&PTR_DAT_11035a4f8);
    func_0x000100e7b1ac();
    func_0x000100e7a758();
    func_0x000100e7b58c();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e653dc; end: 100e6540b;  */

void FUN_100e653dc(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e6540c();
  return;
}



/* Entry: 100e6540c; end: 100e654eb;  */

void FUN_100e6540c(long *param_1)

{
  long unaff_x22;
  undefined8 unaff_x24;
  long unaff_x26;
  code *pcVar1;
  
  func_0x000100e7b7ec();
  func_0x000100e7a71c();
  func_0x000100e7c248();
  *(undefined8 *)(unaff_x26 + 0x10) = 0;
  pcVar1 = *(code **)(*param_1 + 0x270);
  func_0x000100e74c04();
  func_0x000100e7b1b8();
  (*pcVar1)();
  if (unaff_x22 == 0) {
    func_0x000100e7a434();
    func_0x000100e7b930();
    func_0x000100e74e1c();
    func_0x000100e7ac50();
    (*pcVar1)();
    func_0x000100e7a344();
    func_0x000100e7b1dc();
    func_0x000100e74d64();
    func_0x000100e7acd8();
    (*pcVar1)();
    func_0x000100e7aea0();
    func_0x000100e7a314();
    *(undefined8 *)(unaff_x26 + 0x10) = unaff_x24;
  }
  else {
    func_0x000100e7b0f4();
  }
  func_0x000107c61574();
  func_0x000100e7b294();
  return;
}



/* Entry: 100e654ec; end: 100e6559b;  */

void FUN_100e654ec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_100e779e8();
  func_0x000100e7a1f4();
  func_0x000100e7a764(3);
  func_0x000100e7a210();
  func_0x000100e7a9d4();
  uVar1 = 0x617463;
  func_0x000100e7b0ec(0x617463,0xe300000000000000);
  func_0x000100e7a060();
  func_0x000100e7c3e8();
  func_0x000100e7a9c0(uVar1 & 0xffff00000000ffff | 0x796576720000);
  func_0x000100e7b0ec();
  func_0x000100e7a088();
  uVar2 = 0x6972657078457261;
  func_0x000100e7a89c(0x6972657078457261,0xec00000065636e65);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e6559c; end: 100e655d3;  */

void FUN_100e6559c(void)

{
  func_0x000100e7b6e4();
  func_0x000100e7b6dc();
  func_0x000100e7b7b0();
  return;
}



/* Entry: 100e655d4; end: 100e655fb;  */

void FUN_100e655d4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e653dc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e655fc; end: 100e6564f;  */

void FUN_100e655fc(void)

{
  FUN_100e652c8();
  return;
}



/* Entry: 100e65650; end: 100e656b7;  */

void FUN_100e65650(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x20);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e656b8; end: 100e656d7;  */

undefined1  [16] FUN_100e656b8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e79fe0();
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100e797f8;
  return auVar1;
}



/* Entry: 100e656d8; end: 100e656e3;  */

void FUN_100e656d8(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x30);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e656e4; end: 100e65717;  */

void FUN_100e656e4(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x30);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e65718; end: 100e65723;  */

void FUN_100e65718(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00(param_1,param_2,0x100e79bb8);
  func_0x000100e7a1a4(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x21;
  (*unaff_x19)(uVar1,uVar2);
  return;
}



/* Entry: 100e65724; end: 100e65757;  */

void FUN_100e65724(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00();
  func_0x000100e7a1a4(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x21;
  (*unaff_x19)(uVar1,uVar2);
  return;
}



/* Entry: 100e65758; end: 100e65777;  */

undefined1  [16] FUN_100e65758(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a0f8();
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x100e797fc;
  return auVar1;
}



/* Entry: 100e65778; end: 100e65783;  */

void FUN_100e65778(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x40);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e65784; end: 100e657b7;  */

void FUN_100e65784(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x40);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e657b8; end: 100e657c3;  */

void FUN_100e657b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00(param_1,param_2,0x100e79bd8);
  func_0x000100e7a1a4(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x21;
  (*unaff_x19)(uVar1,uVar2);
  return;
}



/* Entry: 100e657c4; end: 100e657f7;  */

void FUN_100e657c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00();
  func_0x000100e7a1a4(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x21;
  (*unaff_x19)(uVar1,uVar2);
  return;
}



/* Entry: 100e657f8; end: 100e65837;  */

undefined1  [16] FUN_100e657f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a220();
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x100e79800;
  return auVar1;
}



/* Entry: 100e65838; end: 100e659df;  */

void FUN_100e65838(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000100e7b7ec();
  func_0x000100e7b10c();
  func_0x000100e74bb4();
  func_0x000100e7b03c();
  FUN_100e65e80();
  func_0x000100e7a7f0();
  func_0x000100e7b968(0x20);
  func_0x000100e7b034();
  func_0x000100e7b488();
  func_0x000100e7a824();
  func_0x000100e7a7e0(0x20);
  if (unaff_x21 == 0) {
    func_0x000100e7c280();
    func_0x000100e7b18c();
    (*(code *)&DAT_10d905cc0)();
    func_0x000100e7b608();
    func_0x000100e7b18c();
    (*(code *)&DAT_10d905cc0)();
    func_0x000100e7a57c(unaff_x20 + 0x20,&stack0x00000030);
    func_0x000100e7a980();
    func_0x000100e7a98c();
    func_0x000100e7a12c();
    func_0x000100e7b6a4();
    func_0x000100e7ab1c();
    func_0x000100e7b5e8();
    func_0x000100e7a95c();
    func_0x000100e7a3ec(unaff_x20 + 0x30);
    func_0x000100e7a980();
    func_0x000100e7a98c();
    func_0x000100e7a12c();
    func_0x000100e7b814();
    func_0x000100e7ab1c();
    func_0x000100e7b5e8();
    func_0x000100e7a95c();
    func_0x000100e7a364(unaff_x20 + 0x40);
    func_0x000100e7b9e4();
    FUN_100c989dc();
    func_0x000100e7b9e4();
    FUN_100e69134();
    func_0x000100e7b9e4();
    FUN_100e7b26c();
    func_0x000100e7ba08();
    func_0x000100e7ace8();
    func_0x000100e7b4f8();
    func_0x000100c989ec();
  }
  func_0x000100e7c000();
  return;
}



/* Entry: 100e659e0; end: 100e65a73;  */

void FUN_100e659e0(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x18,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  pcVar2 = *(code **)(*param_1 + 0x4a0);
  func_0x000107c6157c(uVar1);
  (*pcVar2)();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100e65a74; end: 100e65aa3;  */

void FUN_100e65a74(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e65aa4();
  return;
}



/* Entry: 100e65aa4; end: 100e65c4f;  */

/* WARNING: Removing unreachable block (ram,0x000100e65c14) */

void FUN_100e65aa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x24;
  undefined8 *puVar5;
  code *unaff_x28;
  code *pcVar6;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  
  func_0x000100e7bc30();
  func_0x000100e7a71c();
  puVar5 = (undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  func_0x000100e7bf28();
  func_0x000100e7bb5c();
  func_0x000100e7ab9c(&stack0x00000060);
  (*unaff_x28)();
  uVar2 = in_stack_00000060;
  if (unaff_x21 == 0) {
    func_0x000100e7a588(puVar5,&stack0x00000078);
    uVar1 = *puVar5;
    *puVar5 = uVar2;
    func_0x000107c615e8(uVar1);
    func_0x000100e7a860();
    func_0x000100e7b1e8(&stack0x00000048,unaff_x24,1,0x100e78ef4,in_x3,uVar1);
    uVar2 = in_stack_00000048;
    puVar5 = &stack0x00000060;
    func_0x000100e7a588(unaff_x19 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
    func_0x000107c61574();
    pcVar6 = *(code **)(*unaff_x20 + 0x290);
    func_0x000100e7acd8();
    (*pcVar6)();
    FUN_100e65c50();
    func_0x000100e7b470();
    func_0x000100e7a434();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
    *(undefined8 **)(unaff_x19 + 0x28) = puVar5;
    func_0x000100c989ec();
    func_0x000100e7ad6c();
    (*pcVar6)();
    func_0x000100e65c78();
    func_0x000100e7b680();
    func_0x000100e7a344();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    func_0x000100c989ec(uVar1);
    func_0x000100e7b134();
    (*pcVar6)();
    func_0x000100e7aea0();
    func_0x000100e65ca0();
    func_0x000100e7b050();
    func_0x000100e7a314();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x40) = unaff_x24;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    func_0x000100c989ec(uVar2,uVar1);
  }
  else {
    func_0x000100e7b034();
    func_0x000107c61574();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e65c50; end: 100e65cc7;  */

void FUN_100e65c50(void)

{
  func_0x000100e7a68c(0x100e77ab4);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e65cc8; end: 100e65da3;  */

void FUN_100e65cc8(long *param_1)

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
    *plVar3 = -0x2fffffffffffffec;
    plVar3[1] = -0x7ffffffef10eb850;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e65da4; end: 100e65e7f;  */

void FUN_100e65da4(long *param_1)

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
    plVar3[1] = -0x7ffffffef10eb870;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e65e80; end: 100e65f6f;  */

void FUN_100e65e80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong unaff_x22;
  
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7ae14();
  lVar1 = param_1;
  func_0x000100e7a764(5);
  func_0x000100e7a210();
  func_0x000100e7af04();
  func_0x000100e7a9d4();
  func_0x000100e7b0ec();
  *(long *)(param_1 + 0x20) = lVar1;
  func_0x000100e7bcb8();
  func_0x000100e79f74();
  func_0x000100e7b398();
  func_0x000100e7ade0();
  *(long *)(param_1 + 0x28) = lVar1;
  func_0x000100e79f74("onTapOfferDetailPill");
  uVar2 = 0xd000000000000014;
  func_0x000100e7a444(0xd000000000000014,unaff_x22 | 0x8000000000000000);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x000100e79f74("onDismissOfferDetailPage");
  uVar2 = 0xd000000000000018;
  func_0x000100e7a444(0xd000000000000018,unaff_x22 | 0x8000000000000000);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  func_0x000100e7a168();
  func_0x000100e7afd8();
  func_0x000100e7b858();
  func_0x000100e7b0ec();
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e65f70; end: 100e65fbb;  */

void FUN_100e65f70(void)

{
  long unaff_x20;
  
  func_0x000100e7b690();
  func_0x000100e7b6dc();
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 100e65fbc; end: 100e65fe3;  */

void FUN_100e65fbc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e65a74();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e65fe4; end: 100e66097;  */

void FUN_100e65fe4(void)

{
  FUN_100e65838();
  return;
}



/* Entry: 100e66098; end: 100e660bf;  */

void FUN_100e66098(undefined1 param_1)

{
  long unaff_x20;
  
  func_0x000100e7a1a4(unaff_x20 + 0x50);
  *(undefined1 *)(unaff_x20 + 0x50) = param_1;
  return;
}



/* Entry: 100e660c0; end: 100e6611f;  */

undefined1  [16] FUN_100e660c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a4e8();
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x100e79814;
  return auVar1;
}



/* Entry: 100e66120; end: 100e66173;  */

void FUN_100e66120(long param_1)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  
  func_0x000100e7c4c4();
  func_0x000100e7bbe4();
  func_0x000100e7b02c();
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined8 *)(param_1 + 0x10) = unaff_x25;
  *(undefined8 *)(param_1 + 0x18) = unaff_x24;
  *(undefined8 *)(param_1 + 0x20) = unaff_x23;
  *(undefined8 *)(param_1 + 0x28) = unaff_x22;
  *(undefined8 *)(param_1 + 0x30) = unaff_x21;
  *(undefined8 *)(param_1 + 0x38) = unaff_x19;
  return;
}



/* Entry: 100e66174; end: 100e662e3;  */

void FUN_100e66174(void)

{
  long lVar1;
  code *extraout_x8;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  func_0x000100e7a294();
  func_0x000100e74cc4(&UNK_10d905d60);
  func_0x000100e7b03c();
  FUN_100e664e8();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x22);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x22);
  if (unaff_x21 == 0) {
    func_0x000100e7b2ec();
    func_0x000100e7a57c();
    func_0x000100e7a374();
    func_0x000100e79ff4();
    func_0x000100e7a800();
    func_0x000100e7a57c(unaff_x22 + 0x20,auStack_80);
    func_0x000100e7b0a0();
    func_0x000100e7b120();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a57c(unaff_x22 + 0x30,auStack_98);
    func_0x000100e7b0a0();
    func_0x000100e7b1ac();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a57c(unaff_x22 + 0x40,auStack_b0);
    lVar1 = *(long *)(unaff_x22 + 0x40);
    func_0x000100e7a6b0();
    func_0x000100e7b2b4();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a4fc(unaff_x22 + 0x50);
    func_0x000100e7c268();
    func_0x000100e7abb0();
    (*extraout_x8)();
    if (lVar1 == 0) {
      func_0x000100e7a454(unaff_x22 + 0x58);
      func_0x000100e7ba14();
      func_0x000100e7b51c();
      func_0x000100e7a950();
      func_0x000100e7a354(unaff_x22 + 0x68);
      func_0x000100e7b644();
      func_0x000100e7a950();
    }
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e662e4; end: 100e66313;  */

void FUN_100e662e4(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e66314();
  return;
}



/* Entry: 100e66314; end: 100e664e7;  */

/* WARNING: Removing unreachable block (ram,0x000100e664c4) */
/* WARNING: Removing unreachable block (ram,0x000100e66460) */
/* WARNING: Removing unreachable block (ram,0x000100e66468) */
/* WARNING: Removing unreachable block (ram,0x000100e663d4) */
/* WARNING: Removing unreachable block (ram,0x000100e663e0) */

void FUN_100e66314(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [24];
  
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar6 = (undefined1 *)(unaff_x20 + 0x50);
  *puVar6 = 2;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  pcVar5 = *(code **)(*param_1 + 0x218);
  plVar1 = param_1;
  uVar2 = param_2;
  func_0x000100e7b338();
  (*pcVar5)();
  if (unaff_x21 == 0) {
    *(long **)(unaff_x20 + 0x10) = plVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    uVar3 = 1;
    uVar2 = param_2;
    (*pcVar5)();
    *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
    uVar4 = 2;
    uVar2 = param_2;
    (*pcVar5)();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
    func_0x000100e7b974();
    uVar2 = param_2;
    func_0x000100e7b410();
    (*extraout_x8)();
    func_0x000100e7a588((undefined8 *)(unaff_x20 + 0x40),auStack_78);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
    func_0x000107c6142c(uVar3);
    func_0x000100e7bfe8();
    uVar2 = param_2;
    (*extraout_x8_00)(param_2,4);
    func_0x000100e7a434();
    *puVar6 = (char)uVar2;
    uVar3 = *(undefined8 *)(*param_1 + 0x240);
    func_0x000100e7bcd4(param_2,5);
    func_0x000100e7b9fc();
    func_0x000100e7a344();
    *(undefined1 **)(unaff_x20 + 0x58) = puVar6;
    *(char *)(unaff_x20 + 0x60) = (char)uVar2;
    func_0x000100e7bcd4(param_2,6);
    func_0x000100e7a904();
    func_0x000100e7a314();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
    *(char *)(unaff_x20 + 0x70) = (char)(undefined8 *)(unaff_x20 + 0x58);
  }
  else {
    func_0x000100e7b034();
    func_0x000100e7c158();
    func_0x000100e74cc4();
    func_0x000100e7b314();
    func_0x000100e7b1c4();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e664e8; end: 100e6661b;  */

void FUN_100e664e8(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong unaff_x22;
  
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7b0cc();
  uVar1 = param_1;
  func_0x000100e7a764(7);
  func_0x000100e7a210();
  func_0x000100e7c448();
  func_0x000100e7a968(uVar1 & 0xffff | 0x65546c6961740000,0xea00000000007478);
  func_0x000100e7a060();
  uVar2 = 0x6f74747542617463;
  func_0x000100e7b328(0x6f74747542617463,0x546e);
  func_0x000100e7a968();
  func_0x000100e7a088();
  func_0x000100e7c414();
  func_0x000100e7a968();
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x000100e7a168();
  uVar2 = 0x6574496576726573;
  func_0x000100e7a730(0x6574496576726573,0xeb0000000064496d);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  func_0x000100e79f74("enableUatReanimation");
  uVar2 = 0xd000000000000014;
  func_0x000100e7b088(0xd000000000000014,unaff_x22 | 0x8000000000000000,0x3f4062);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  func_0x000100e79f74("animationDurationMs");
  uVar2 = 0xd000000000000013;
  func_0x000100e7a2dc(0xd000000000000013,unaff_x22 | 0x8000000000000000);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  func_0x000100e79f74("animationDelayMs");
  func_0x000100e7affc();
  func_0x000100e7a2dc();
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  func_0x000100e7b0c4();
  func_0x000100e7a6d0();
  func_0x000100e7a154();
  return;
}



/* Entry: 100e6661c; end: 100e6665f;  */

void FUN_100e6661c(void)

{
  func_0x000100e7b3fc();
  func_0x000100e7b668();
  func_0x000100e7b728();
  func_0x000100e7bd70();
  return;
}



/* Entry: 100e66660; end: 100e66687;  */

void FUN_100e66660(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e662e4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e66688; end: 100e666bb;  */

void FUN_100e66688(void)

{
  FUN_100e66174();
  return;
}



/* Entry: 100e666bc; end: 100e666c7;  */

void FUN_100e666bc(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x18);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e666c8; end: 100e666fb;  */

void FUN_100e666c8(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x18);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e666fc; end: 100e66707;  */

void FUN_100e666fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00(param_1,param_2,0x100e79b98);
  func_0x000100e7a1a4(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  (*unaff_x19)(uVar1,uVar2);
  return;
}



/* Entry: 100e66708; end: 100e6673b;  */

void FUN_100e66708(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00();
  func_0x000100e7a1a4(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  (*unaff_x19)(uVar1,uVar2);
  return;
}



/* Entry: 100e6673c; end: 100e66797;  */

undefined1  [16] FUN_100e6673c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a09c();
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x100e79824;
  return auVar1;
}



/* Entry: 100e66798; end: 100e66897;  */

void FUN_100e66798(void)

{
  code *extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  code *unaff_x28;
  
  func_0x000100e7a294();
  func_0x000100e74ee4(&UNK_10d905f00);
  func_0x000100e7b03c();
  FUN_100e66b14();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1c);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1c);
  if (unaff_x21 == 0) {
    func_0x000100e7c274();
    func_0x000100e7aa10();
    func_0x000100e7a354(unaff_x22 + 0x18);
    func_0x000100e7a980();
    func_0x000100e7a98c();
    func_0x000100e7a12c();
    func_0x000100e7b120(*(undefined8 *)(*unaff_x19 + 0x340));
    func_0x000100e7a5bc();
    (*extraout_x8)();
    func_0x000100e7a914();
    func_0x000100e7a594();
    (*unaff_x28)();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e66898; end: 100e6692b;  */

void FUN_100e66898(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x28,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  pcVar2 = *(code **)(*param_1 + 0x4a0);
  func_0x000107c6157c(uVar1);
  (*pcVar2)();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100e6692c; end: 100e66957;  */

void FUN_100e6692c(void)

{
  func_0x000100e7a234();
  func_0x000100e7b010();
  func_0x000100e7a280();
  FUN_100e66958();
  return;
}



/* Entry: 100e66958; end: 100e66a57;  */

/* WARNING: Removing unreachable block (ram,0x000100e669dc) */

void FUN_100e66958(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *puVar3;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  code *unaff_x28;
  undefined8 in_register_00005008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000058;
  
  func_0x000100e7b7ec();
  func_0x000100e7a71c();
  func_0x000100e7c2ac();
  puVar3 = (undefined8 *)(unaff_x23 + 0x10);
  *(undefined8 *)(unaff_x23 + 0x18) = in_register_00005008;
  *puVar3 = param_1;
  *(undefined8 *)(unaff_x23 + 0x28) = in_register_00005008;
  *(undefined8 *)(unaff_x23 + 0x20) = param_1;
  func_0x000100e7bf28();
  func_0x000100e7a84c();
  func_0x000100e7ab9c(&stack0x00000020);
  (*unaff_x28)();
  uVar1 = in_stack_00000020;
  if (unaff_x21 == 0) {
    func_0x000100e7a314();
    uVar2 = *puVar3;
    *puVar3 = uVar1;
    func_0x000107c615e8(uVar2);
    func_0x000100e7ac50(*(undefined8 *)(*unaff_x20 + 0x290));
    (*extraout_x8)();
    FUN_100e66a58();
    func_0x000100e7a424();
    func_0x000100e7a588(unaff_x23 + 0x18,&stack0x00000020);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x18) = unaff_x26;
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x27;
    func_0x000100c989ec(uVar1,uVar2);
    func_0x000100e7a860();
    func_0x000100e7b1ac(&stack0x00000058);
    func_0x000100e7b1e8();
    func_0x000100e7a9b4();
    uVar1 = in_stack_00000058;
    func_0x000100e7a588(unaff_x23 + 0x28,&stack0x00000008);
    *(undefined8 *)(unaff_x23 + 0x28) = uVar1;
  }
  else {
    func_0x000100e7b034();
  }
  func_0x000107c61574();
  func_0x000100e7b294();
  return;
}



/* Entry: 100e66a58; end: 100e66a7f;  */

void FUN_100e66a58(void)

{
  func_0x000100e7a68c(0x100e77a5c);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e66a80; end: 100e66b13;  */

void FUN_100e66a80(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  long extraout_x8;
  long unaff_x21;
  undefined8 in_register_00005028;
  
  func_0x000100e7b480();
  func_0x000100e7ab90();
  func_0x000100e7b490();
  func_0x000100e7bbcc();
  (**(code **)(extraout_x8 + 0xd8))(param_1);
  func_0x000100e7a48c();
  func_0x000100e7a0cc();
  if (((param_3 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000100e79f20();
    param_4[1] = in_register_00005028;
    *param_4 = param_2;
    func_0x000100e7a074();
  }
  func_0x000100e7b0f4();
  return;
}



/* Entry: 100e66b14; end: 100e66bb3;  */

void FUN_100e66b14(ulong param_1)

{
  ulong uVar1;
  
  FUN_100e779e8();
  func_0x000100e7a1f4();
  uVar1 = param_1;
  func_0x000100e7a764(3);
  func_0x000100e7a210();
  func_0x000100e7a544();
  func_0x000100e7ac88();
  func_0x000100e7a060();
  func_0x000100e7b45c();
  uVar1 = uVar1 & 0xffff00000000ffff | 0x7061540000;
  func_0x000100e7b4e4(uVar1,0xe500000000000000,0x2964283f66);
  *(ulong *)(param_1 + 0x28) = uVar1;
  func_0x000100e7bcb8();
  func_0x000100e79f74();
  func_0x000100e7b398();
  func_0x000100e7ade0();
  *(ulong *)(param_1 + 0x30) = uVar1;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e66bb4; end: 100e66beb;  */

void FUN_100e66bb4(void)

{
  func_0x000100e7b690();
  func_0x000100e7c0a4();
  func_0x000100e7bcb0();
  return;
}



/* Entry: 100e66bec; end: 100e66c13;  */

void FUN_100e66bec(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e6692c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e66c14; end: 100e66ca7;  */

void FUN_100e66c14(void)

{
  FUN_100e66798();
  return;
}



/* Entry: 100e66ca8; end: 100e66ce7;  */

void FUN_100e66ca8(void)

{
  long unaff_x20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  func_0x000100e7ba5c();
  func_0x000100e7b02c();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_d9;
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_d8;
  return;
}



/* Entry: 100e66ce8; end: 100e66dcf;  */

void FUN_100e66ce8(void)

{
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_70 [48];
  
  func_0x000100e7a294();
  func_0x000100e74f1c();
  func_0x000100e7b03c();
  FUN_100e66ed0();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1e);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1e);
  if (unaff_x21 == 0) {
    func_0x000100e7b2ec();
    func_0x000100e7a51c();
    func_0x000100e7a10c();
    func_0x000100e7a57c(unaff_x22 + 0x18,auStack_70);
    func_0x000100e7a3c4();
    func_0x000100e7a3ec(unaff_x22 + 0x20);
    func_0x000100e7ba14();
    func_0x000100e7a594();
    (*(code *)&UNK_10d905f00)();
    func_0x000100e7a364(unaff_x22 + 0x30);
    func_0x000100e7a708();
    (*(code *)&UNK_10d905f00)();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e66dd0; end: 100e66dff;  */

void FUN_100e66dd0(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e66e00();
  return;
}



/* Entry: 100e66e00; end: 100e66ecf;  */

/* WARNING: Removing unreachable block (ram,0x000100e66eac) */

void FUN_100e66e00(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x24;
  code *pcVar1;
  undefined1 unaff_w27;
  code *pcVar2;
  
  func_0x000100e7bc4c();
  func_0x000100e7a998();
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  func_0x000100e7bd34();
  pcVar1 = *(code **)(extraout_x8 + 0x210);
  func_0x000100e7b338();
  (*pcVar1)();
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = param_1;
    func_0x000100e7ac50();
    (*pcVar1)();
    *(undefined8 *)(unaff_x19 + 0x18) = param_1;
    pcVar2 = *(code **)(*unaff_x20 + 0x240);
    func_0x000100e7acd8();
    (*pcVar2)();
    func_0x000100e7b9fc();
    func_0x000100e7a344(param_2,&stack0x00000018);
    *(code **)(unaff_x19 + 0x20) = pcVar1;
    *(undefined1 *)(unaff_x19 + 0x28) = unaff_w27;
    func_0x000100e7ad6c();
    (*pcVar2)();
    func_0x000100e7a904();
    func_0x000100e7a314();
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x24;
    *(char *)(unaff_x19 + 0x38) = (char)(undefined8 *)(unaff_x19 + 0x20);
  }
  else {
    func_0x000100e7b034();
    func_0x000100e74f1c();
    func_0x000100e7b314();
    func_0x000100e7b1c4();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e66ed0; end: 100e66fa3;  */

void FUN_100e66ed0(long param_1)

{
  undefined8 uVar1;
  
  FUN_100e779e8();
  func_0x000100e7a178();
  func_0x000100e7a764(4);
  func_0x000100e7a210();
  uVar1 = 0x65646e4970616e73;
  func_0x000100e7ac7c(0x65646e4970616e73,0xe900000000000078);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e79f74("unseenStoryAdSnapCount");
  func_0x000100e7b4a4();
  func_0x000100e7b5fc();
  func_0x000100e7ac7c();
  func_0x000100e7a088();
  uVar1 = 0x657366664f706f74;
  func_0x000100e7a2dc(0x657366664f706f74,0xe900000000000074);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000100e7a168();
  uVar1 = 0x66664f7468676972;
  func_0x000100e7a2dc(0x66664f7468676972,0xeb00000000746573);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000100e7b0c4();
  func_0x000100e7a6d0();
  func_0x000100e7a154();
  return;
}



/* Entry: 100e66fa4; end: 100e66faf;  */

void FUN_100e66fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e66fb0; end: 100e66fd7;  */

void FUN_100e66fb0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e66dd0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e66fd8; end: 100e6704f;  */

void FUN_100e66fd8(void)

{
  FUN_100e66ce8();
  return;
}



/* Entry: 100e67050; end: 100e670cb;  */

undefined8 FUN_100e67050(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 unaff_x23;
  
  func_0x000100e7c4b0();
  func_0x000100e7a294();
  func_0x000100e74f3c(&UNK_10d905f40);
  func_0x000100e7b03c();
  FUN_100e671d8();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x25);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  uVar1 = 0x25;
  func_0x000100e7a2cc(0x25);
  if (unaff_x21 == 0) {
    func_0x000100e7b164();
    func_0x000100e7bdd8();
    unaff_x23 = uVar1;
  }
  return unaff_x23;
}



/* Entry: 100e670cc; end: 100e6710b;  */

void FUN_100e670cc(undefined8 param_1,long param_2)

{
  code *unaff_x24;
  
  func_0x000100e7c49c();
  func_0x000100e7abd8();
  func_0x000100e7a354(param_2 + 0x10);
  func_0x000100e7bd24();
  func_0x000100e7b058();
  (*unaff_x24)();
  func_0x000100e7b598();
  return;
}



/* Entry: 100e6710c; end: 100e6713b;  */

void FUN_100e6710c(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e6713c();
  return;
}



/* Entry: 100e6713c; end: 100e671d7;  */

void FUN_100e6713c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 in_stack_00000018;
  
  func_0x000100e7c4b0();
  puVar4 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar4 = 0;
  pcVar5 = *(code **)(*param_1 + 0x3b8);
  plVar2 = param_1;
  func_0x000100e7a84c();
  (*pcVar5)(&stack0x00000018,param_2,0,0x100e78f30,param_1,plVar2);
  func_0x000100e7b050();
  uVar1 = in_stack_00000018;
  if (unaff_x21 == 0) {
    func_0x000100e7a588(puVar4);
    uVar3 = *puVar4;
    *puVar4 = uVar1;
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000100e7b0f4();
  }
  func_0x000100e7c368();
  return;
}



/* Entry: 100e671d8; end: 100e6723b;  */

void FUN_100e671d8(long param_1)

{
  long lVar1;
  
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7b0cc();
  lVar1 = param_1;
  func_0x000100e7a764(1);
  func_0x000100e7a564();
  func_0x000100e7a544();
  func_0x000100e7ac88();
  *(long *)(param_1 + 0x20) = lVar1;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e6723c; end: 100e6725b;  */

void FUN_100e6723c(void)

{
  func_0x000100e7b690();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e6725c; end: 100e67283;  */

void FUN_100e6725c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e6710c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e67284; end: 100e672bb;  */

void FUN_100e67284(void)

{
  FUN_100e67050();
  return;
}



/* Entry: 100e672bc; end: 100e672eb;  */

void FUN_100e672bc(void)

{
  undefined1 unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b498();
  func_0x000100e7a1a4(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x21;
  *(undefined1 *)(unaff_x20 + 0x18) = unaff_w19;
  return;
}



/* Entry: 100e672ec; end: 100e6732f;  */

undefined1  [16] FUN_100e672ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e79f88();
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e79840;
  return auVar1;
}



/* Entry: 100e67330; end: 100e6735f;  */

void FUN_100e67330(void)

{
  undefined1 unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b498();
  func_0x000100e7a1a4(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  *(undefined1 *)(unaff_x20 + 0x28) = unaff_w19;
  return;
}



/* Entry: 100e67360; end: 100e673af;  */

undefined1  [16] FUN_100e67360(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e79fe0();
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100e79844;
  return auVar1;
}



/* Entry: 100e673b0; end: 100e67457;  */

void FUN_100e673b0(void)

{
  long unaff_x21;
  long unaff_x22;
  
  func_0x000100e7c4d8();
  func_0x000100e7a294();
  func_0x000100e745dc();
  func_0x000100e7b03c();
  FUN_100e67488();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x10);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x10);
  if (unaff_x21 == 0) {
    func_0x000100e7a39c();
    func_0x000100e7ba14();
    func_0x000100e7a5a8();
    (*(code *)&DAT_10d905af0)();
    func_0x000100e7a364(unaff_x22 + 0x20);
    func_0x000100e7a3fc();
    (*(code *)&DAT_10d905af0)();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e67458; end: 100e67487;  */

void FUN_100e67458(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e67604();
  return;
}



/* Entry: 100e67488; end: 100e674fb;  */

void FUN_100e67488(void)

{
  FUN_100e779e8();
  func_0x000100e7a0b0();
  func_0x000100e7a764(2);
  func_0x000100e7a210();
  func_0x000100e7a2dc(0x6874646977,0xe500000000000000);
  func_0x000100e7a060();
  func_0x000100e7a2dc(0x746867696568,0xe600000000000000);
  func_0x000100e7af88();
  func_0x000100e7a6d0();
  func_0x000100e7a154();
  return;
}



/* Entry: 100e674fc; end: 100e67507;  */

void FUN_100e674fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e67508; end: 100e6755b;  */

void FUN_100e67508(void)

{
  FUN_100e673b0();
  return;
}


