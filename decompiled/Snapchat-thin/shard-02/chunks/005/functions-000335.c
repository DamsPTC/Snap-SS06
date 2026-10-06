/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dd66c8; end: 101dd68c3;  */

void FUN_101dd66c8(byte param_1,char param_2,undefined8 param_3)

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
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  uVar6 = 0x112d393f0;
  uStack_58 = param_3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar6,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar5 = uStack_48;
  uVar7 = uStack_50;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = 0x646e65;
  if (param_2 != '\x01') {
    uVar6 = 0x7472617473;
  }
  uVar9 = 0xe300000000000000;
  if (param_2 != '\x01') {
    uVar9 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar6,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fadc(uVar7,uVar5);
  uVar9 = 0x6552747265736e69;
  uVar1 = 0xed00007473657571;
  if (param_1 != 4) {
    uVar9 = 0xd000000000000012;
    uVar1 = 0x800000010f0113e0;
  }
  uVar3 = 0xee00737473657571;
  uVar8 = 0x65526574656c6564;
  if (param_1 != 3) {
    uVar3 = uVar1;
    uVar8 = uVar9;
  }
  uVar9 = 0xef6563616c706552;
  uVar1 = 0x724f747265736e69;
  if (param_1 != 1) {
    uVar9 = 0x800000010f011400;
    uVar1 = 0xd000000000000015;
  }
  uVar2 = 0x800000010f011420;
  uVar4 = 0xd000000000000013;
  if (param_1 != 0) {
    uVar2 = uVar9;
    uVar4 = uVar1;
  }
  if (param_1 < 3) {
    uVar3 = uVar2;
    uVar8 = uVar4;
  }
  func_0x000107c5fadc(uVar8,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000106c330e0(uVar10,uVar6,uVar7,1,uVar8,1);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 101dd68c4; end: 101dd69b3;  */

uint FUN_101dd68c4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 101dd69b4; end: 101dd69f3;  */

void FUN_101dd69b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1736c;
  func_0x000107c61520(&UNK_10da1736c,&UNK_110486fc8);
  puRam0000000112e2e490 = puVar1;
  return;
}



/* Entry: 101dd69f4; end: 101dd6f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd69f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_70,uStack_68,puVar1);
  func_0x0001000834e4(auStack_88);
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  uVar8 = param_3;
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_4 + _DAT_1130806b8);
  func_0x0001000285a8(0x112e2e4d8,&UNK_10da17398);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  pcVar4 = FUN_101dd6f20;
  func_0x0001000bdd8c(FUN_101dd6f20,0);
  puVar5 = &UNK_110487040;
  func_0x000107c613fc(&UNK_110487040,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  func_0x0001000285a8(0x112e2e4e0,&UNK_10da173a0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  pcVar6 = FUN_101dd6fe8;
  func_0x0001000bdd8c(FUN_101dd6fe8,puVar5);
  puVar5 = &UNK_110487068;
  func_0x000107c613fc(&UNK_110487068,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(code **)(puVar5 + 0x28) = pcVar4;
  *(code **)(puVar5 + 0x30) = pcVar6;
  func_0x0001000285a8(0x112e2e4e8,&UNK_10da173a8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_101dd7098;
  func_0x0001000bdd8c(FUN_101dd7098,puVar5);
  func_0x00010028cc18(0);
  func_0x000107c610f8();
  func_0x000103a6ed08();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar7;
  return;
}



/* Entry: 101dd6f20; end: 101dd6fe7;  */

void FUN_101dd6f20(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x000101dd66a8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a95b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110486f30;
  *param_1 = lVar2;
  return;
}



/* Entry: 101dd6fe8; end: 101dd6fef;  */

/* WARNING: Possible PIC construction at 0x000101dd6fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dd6fd4) */

void FUN_101dd6fe8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000101dd6348();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110486ef0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101dd6ff0; end: 101dd7097;  */

void FUN_101dd6ff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000101dd7960();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_101dd73c4(param_2,param_3,param_4,param_5,param_6);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1104870e8;
  *param_1 = param_2;
  return;
}



/* Entry: 101dd7098; end: 101dd709b;  */

void FUN_101dd7098(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = 0;
  func_0x000101dd7960();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  FUN_101dd73c4(uVar5,uVar2,uVar1,uVar3,uVar6);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_1104870e8;
  *param_1 = uVar5;
  return;
}



/* Entry: 101dd709c; end: 101dd710b;  */

void FUN_101dd709c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dd710c; end: 101dd712b;  */

void FUN_101dd710c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = 0;
  func_0x000101dd7960();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  FUN_101dd73c4(uVar5,uVar2,uVar1,uVar3,uVar6);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_1104870e8;
  *param_1 = uVar5;
  return;
}



/* Entry: 101dd712c; end: 101dd71cb;  */

void FUN_101dd712c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dd71cc; end: 101dd71df;  */

void FUN_101dd71cc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dd71e0; end: 101dd73c3;  */

void FUN_101dd71e0(ulong param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c603d0(param_1,&uStack_50,&UNK_110486fc8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar6 = uStack_48;
  uVar8 = uStack_50;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = 0x646e65;
  if (param_2 != '\x01') {
    uVar7 = 0x7472617473;
  }
  uVar10 = 0xe300000000000000;
  if (param_2 != '\x01') {
    uVar10 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar7,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fadc(uVar8,uVar6);
  uVar1 = (uint)param_1 & 0xff;
  uVar10 = 0x6552747265736e69;
  uVar2 = 0xed00007473657571;
  if (uVar1 != 4) {
    uVar10 = 0xd000000000000012;
    uVar2 = 0x800000010f0113e0;
  }
  uVar4 = 0xee00737473657571;
  uVar9 = 0x65526574656c6564;
  if (uVar1 != 3) {
    uVar4 = uVar2;
    uVar9 = uVar10;
  }
  uVar10 = 0xef6563616c706552;
  uVar2 = 0x724f747265736e69;
  if (uVar1 != 1) {
    uVar10 = 0x800000010f011400;
    uVar2 = 0xd000000000000015;
  }
  uVar3 = 0x800000010f011420;
  uVar5 = 0xd000000000000013;
  if ((param_1 & 0xff) != 0) {
    uVar3 = uVar10;
    uVar5 = uVar2;
  }
  if (uVar1 < 3) {
    uVar4 = uVar3;
    uVar9 = uVar5;
  }
  func_0x000107c5fadc(uVar9,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000106c330e0(uVar11,uVar7,uVar8,0,uVar9,1);
  func_0x000107c6142c(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 101dd73c4; end: 101dd748f;  */

void FUN_101dd73c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = &UNK_1104874f0;
  func_0x000107c613fc(&UNK_1104874f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(long *)(puVar1 + 0x28) = unaff_x20;
  func_0x0001000285a8(0x112e2e6d8,&UNK_10da17490);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  pcVar2 = FUN_101dd9738;
  func_0x0001000bdd8c(FUN_101dd9738,puVar1);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(code **)(unaff_x20 + 0x18) = pcVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 101dd7490; end: 101dd76cf;  */

void FUN_101dd7490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_110487518;
  func_0x000107c613fc(&UNK_110487518,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101dd9744;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  uVar3 = uVar6;
  func_0x0001048898b8(uVar6,1,0x101dd97a4,puVar2,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar1 = uStack_68;
  uVar4 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_101dd7778,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_110487540;
  func_0x000107c613fc(&UNK_110487540,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  puVar5 = &UNK_110487568;
  func_0x000107c613fc(&UNK_110487568,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101dd974c;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  func_0x000107c6157c(param_4);
  uVar1 = 0x112e2e6e0;
  func_0x0001000285a8(0x112e2e6e0,&UNK_10da17498);
  uVar3 = uVar6;
  func_0x000100775264(uVar6,1,FUN_101dd9764,puVar5,uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar1 = 0x112e2e6e8;
  func_0x0001000285a8(0x112e2e6e8,&UNK_10da174a0);
  uVar6 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_101dd78f0,0,uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uStack_68);
  *param_1 = uVar6;
  return;
}



/* Entry: 101dd76d0; end: 101dd7777;  */

undefined8 FUN_101dd76d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001000d224c(&uStack_30);
  uVar1 = uStack_30;
  func_0x000107c614f0(uStack_30);
  uVar2 = 0x101dd7734;
  (**(code **)(lStack_28 + 0x28))(0x101dd7734,0,uVar1,lStack_28);
  func_0x000107c615e8(uStack_30);
  return uVar2;
}



/* Entry: 101dd7778; end: 101dd77cb;  */

void FUN_101dd7778(byte *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_101dd95c4();
    func_0x000107c613f8(&UNK_1106c3d90,param_1,0,0);
    *param_1 = 2;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101dd77cc; end: 101dd78ef;  */

long FUN_101dd77cc(undefined1 *param_1)

{
  undefined1 *puVar1;
  long unaff_x22;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    FUN_101dd95c4();
    func_0x000107c613f8(&UNK_1106c3d90,param_1,0,0);
    *param_1 = 1;
    func_0x000107c61654();
  }
  else {
    FUN_101dd9688(0,0x112e2e680,&PTR_PTR_1126a95b8);
    func_0x000107c614e8();
    puVar1 = (undefined1 *)0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f0114c0);
    unaff_x22 = lStack_38;
    func_0x000107c5cec8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (unaff_x22 == 0) {
      FUN_101dd95c4();
      func_0x000107c613f8(&UNK_1106c3d90,puVar1,0,0);
      *puVar1 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(lStack_38);
    }
    else {
      func_0x000107c615e8(lStack_38);
    }
  }
  return unaff_x22;
}



/* Entry: 101dd78f0; end: 101dd791b;  */

void FUN_101dd78f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 101dd791c; end: 101dd797f;  */

void FUN_101dd791c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dd7980; end: 101dd7aef;  */

undefined8 FUN_101dd7980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110487428;
  func_0x000107c613fc(&UNK_110487428,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &UNK_110487450;
  func_0x000107c613fc(&UNK_110487450,0x28,7);
  puVar2[0x10] = 1;
  *(undefined8 *)(puVar2 + 0x18) = 0x101dd9644;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar1);
  uVar3 = 5;
  FUN_101dd88d4(5,0x101dd965c,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_48);
  uVar6 = uStack_48;
  uVar4 = 0x112e2e6b8;
  func_0x0001000285a8(0x112e2e6b8,&UNK_10da17478);
  uVar5 = uVar6;
  func_0x000100775264(uVar6,1,FUN_101dd7c30,0,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar6);
  func_0x0001000d224c(&uStack_48);
  uVar4 = 0x112e2e6c0;
  func_0x0001000285a8(0x112e2e6c0,&UNK_10da17480);
  uVar6 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101dd7d28,0,uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_48);
  return uVar6;
}



/* Entry: 101dd7af0; end: 101dd7b9b;  */

undefined8
FUN_101dd7af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = *(undefined2 *)(param_1 + 2);
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  (**(code **)(lStack_68 + 8))(uVar3,uVar1,uVar2,param_3,param_4,uStack_70,lStack_68);
  func_0x0001000834e4(auStack_88);
  return uVar3;
}



/* Entry: 101dd7b9c; end: 101dd7c2f;  */

void FUN_101dd7b9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5fadc(param_3,param_4);
  func_0x0001058c26bc(param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar1 = 0;
  FUN_101dd9688(0,0x112e2e6c8,&PTR_PTR_1126bfb30);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101dd7c30; end: 101dd7d27;  */

void FUN_101dd7c30(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)*param_2;
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar2 = *(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    puVar3 = puVar2;
    if (puVar2 < (undefined1 *)0x2) {
LAB_101dd7cc0:
      uVar4 = 0;
      if (puVar2 != (undefined1 *)0x0) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd7d28);
            (*pcVar1)();
          }
          uVar4 = *(undefined8 *)(puVar5 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = 0;
          func_0x000101dd9110(0,puVar5,&PTR_PTR_1126bfb30,0x112e2e6c8);
        }
      }
      *param_1 = uVar4;
      return;
    }
  }
  else {
    puVar2 = (undefined1 *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar5) {
      puVar2 = puVar5;
    }
    puVar3 = puVar2;
    func_0x000107c60480();
    if ((long)puVar3 < 2) {
      func_0x000107c60480();
      goto LAB_101dd7cc0;
    }
  }
  FUN_101dd95c4();
  func_0x000107c613f8(&UNK_1106c3d90,puVar3,0,0);
  *puVar3 = 4;
  func_0x000107c61654();
  return;
}



/* Entry: 101dd7d28; end: 101dd7dc3;  */

void FUN_101dd7d28(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0x100;
  }
  else {
    lVar1 = lVar2;
    func_0x0001058c33f8();
    func_0x0001058c3404();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c49820();
      func_0x000107c61170(lVar2);
    }
    *param_1 = lVar1;
    param_1[1] = lVar3;
    *(bool *)(param_1 + 2) = lVar2 == 0;
    *(undefined1 *)((long)param_1 + 0x11) = 0;
  }
  return;
}



/* Entry: 101dd7dc4; end: 101dd7e67;  */

void FUN_101dd7dc4(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  if (param_3 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  func_0x000107c5fadc(param_4,param_5);
  func_0x0001058c2a74(param_1,param_4,param_6,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 101dd7e68; end: 101dd803f;  */

undefined8 FUN_101dd7e68(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  puVar1 = &UNK_110487248;
  func_0x000107c613fc(&UNK_110487248,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar2 = uVar4;
  func_0x000104889654(uVar4,1,FUN_101dd93d0,puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar6 = uStack_58;
  puVar1 = &UNK_110487270;
  func_0x000107c613fc(&UNK_110487270,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar3 = &UNK_110487298;
  func_0x000107c613fc(&UNK_110487298,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar1 = &UNK_1104872c0;
  func_0x000107c613fc(&UNK_1104872c0,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_101dd93e8;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  uVar4 = 0x112e2e688;
  func_0x0001000285a8(0x112e2e688,&UNK_10da17460);
  uVar5 = uVar6;
  func_0x0001048898b8(uVar6,1,FUN_101dd93f0,puVar1,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar4 = 0x112e2e690;
  func_0x0001000285a8(0x112e2e690,&UNK_10da17468);
  uVar6 = uStack_58;
  func_0x000100775264(uStack_58,1,FUN_101dd81e8,0,uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_58);
  return uVar6;
}



/* Entry: 101dd8040; end: 101dd8097;  */

void FUN_101dd8040(undefined1 *param_1)

{
  if (0 < (long)param_1) {
    return;
  }
  FUN_101dd95c4();
  func_0x000107c613f8(&UNK_1106c3d90,param_1,0,0);
  *param_1 = 3;
  func_0x000107c61654();
  return;
}



/* Entry: 101dd8098; end: 101dd8177;  */

undefined8 FUN_101dd8098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = &UNK_1104872e8;
    func_0x000107c613fc(&UNK_1104872e8,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    puVar2 = &UNK_110487310;
    func_0x000107c613fc(&UNK_110487310,0x28,7);
    puVar2[0x10] = 1;
    *(undefined8 *)(puVar2 + 0x18) = 0x101dd9458;
    *(undefined **)(puVar2 + 0x20) = puVar1;
    func_0x000107c6157c(puVar1);
    uVar3 = 2;
    func_0x000101dd8cc8(2,FUN_101dd9534,puVar2);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
  }
  return uVar3;
}



/* Entry: 101dd8178; end: 101dd81e7;  */

void FUN_101dd8178(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001058c28b0();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_101dd9688(0,0x112e2e6a0,&PTR_PTR_1126bfb38);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101dd81e8; end: 101dd849b;  */

void FUN_101dd81e8(undefined8 *param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 uVar12;
  
  uVar10 = *param_2;
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar7 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000101dd8fdc(0,uVar7,0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd849c);
      (*pcVar2)();
    }
    if ((uVar10 & 0xc000000000000001) == 0) {
      uVar11 = 0;
      do {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dd8478);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar10 + 0x20 + uVar11 * 8);
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x0001058c3654();
        uVar5 = uVar3;
        func_0x0001058c3648();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        uVar8 = uVar7;
        func_0x000107c61170(uVar5);
        if (uVar4 == 2) {
          uVar12 = 1;
        }
        else {
          if (uVar4 != 1) goto LAB_101dd8410;
          uVar12 = 0;
        }
        func_0x000107c61170(uVar3);
        uVar5 = *(ulong *)(puVar1 + 0x10);
        uVar4 = uVar5 + 1;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
          uVar8 = uVar4;
          func_0x000101dd8fdc(1 < *(ulong *)(puVar1 + 0x18),uVar4,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar4;
        *(ulong *)(puVar1 + uVar5 * 0x18 + 0x20) = uVar6;
        *(ulong *)(puVar1 + uVar5 * 0x18 + 0x28) = uVar7;
        puVar1[uVar5 * 0x18 + 0x30] = uVar12;
        uVar7 = uVar8;
      } while (uVar9 != uVar11);
    }
    else {
      uVar11 = 0;
      do {
        uVar3 = uVar11;
        uVar7 = uVar10;
        func_0x000101dd9110(uVar11,uVar10,&PTR_PTR_1126bfb38,0x112e2e6a0);
        uVar4 = uVar3;
        func_0x0001058c3654();
        uVar5 = uVar3;
        func_0x0001058c3648();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if (uVar4 == 2) {
          uVar12 = 1;
        }
        else {
          if (uVar4 != 1) {
LAB_101dd8410:
            func_0x000107c6142c(uVar7);
            FUN_101dd9418();
            func_0x000107c613f8(&UNK_1106c3f80,uVar7,0,0);
            func_0x000107c61654();
            func_0x000107c61574(puVar1);
            func_0x000107c61170(uVar3);
            return;
          }
          uVar12 = 0;
        }
        func_0x000107c615e8(uVar3);
        uVar4 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
          func_0x000101dd8fdc(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
        *(ulong *)(puVar1 + uVar4 * 0x18 + 0x20) = uVar6;
        *(ulong *)(puVar1 + uVar4 * 0x18 + 0x28) = uVar7;
        puVar1[uVar4 * 0x18 + 0x30] = uVar12;
      } while (uVar9 != uVar11);
    }
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 101dd849c; end: 101dd8577;  */

void FUN_101dd849c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x0001058c2bf4(param_1,param_2,param_3,param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101dd8578; end: 101dd8597;  */

void FUN_101dd8578(void)

{
  FUN_101dd7980();
  return;
}



/* Entry: 101dd8598; end: 101dd865f;  */

undefined8
FUN_101dd8598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_48;
  
  lVar3 = *unaff_x20;
  FUN_101dd7980();
  func_0x0001000d224c(&uStack_48);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  puVar1 = &UNK_110487400;
  func_0x000107c613fc(&UNK_110487400,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x000107c6157c(uVar2);
  uVar2 = uStack_48;
  func_0x0001048898b8(uStack_48,1,0x101dd9628,puVar1,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar1);
  return uVar2;
}



/* Entry: 101dd8660; end: 101dd8733;  */

undefined8
FUN_101dd8660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104873b0;
  func_0x000107c613fc(&UNK_1104873b0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar1[0x18] = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  puVar2 = &UNK_1104873d8;
  func_0x000107c613fc(&UNK_1104873d8,0x28,7);
  puVar2[0x10] = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0x101dd9604;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar1);
  uVar3 = 1;
  func_0x000101dd8ad4(1,0x101dd97e8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 101dd8734; end: 101dd8753;  */

void FUN_101dd8734(void)

{
  FUN_101dd7e68();
  return;
}



/* Entry: 101dd8754; end: 101dd87fb;  */

undefined8 FUN_101dd8754(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104871f8;
  func_0x000107c613fc(&UNK_1104871f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110487220;
  func_0x000107c613fc(&UNK_110487220,0x28,7);
  puVar2[0x10] = 0;
  *(code **)(puVar2 + 0x18) = FUN_101dd937c;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(puVar1);
  uVar3 = 3;
  func_0x000101dd8ad4(3,FUN_101dd97d4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 101dd87fc; end: 101dd88b7;  */

undefined8 FUN_101dd87fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110487130;
  func_0x000107c613fc(&UNK_110487130,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  puVar2 = &UNK_110487158;
  func_0x000107c613fc(&UNK_110487158,0x28,7);
  puVar2[0x10] = 0;
  *(code **)(puVar2 + 0x18) = FUN_101dd88b8;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar1);
  uVar3 = 4;
  func_0x000101dd8ad4(4,FUN_101dd8fc0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 101dd88b8; end: 101dd88d3;  */

void FUN_101dd88b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dd849c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101dd88d4; end: 101dd8ec7;  */

undefined8 FUN_101dd88d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  FUN_101dd71e0(param_1,0);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  uVar4 = auStack_88[0];
  func_0x0001000d224c(&uStack_90);
  puVar1 = &UNK_110487478;
  func_0x000107c613fc(&UNK_110487478,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  uVar2 = 0x112e2e6d0;
  func_0x0001000285a8(0x112e2e6d0,&UNK_10da17488);
  uVar3 = uStack_90;
  func_0x000100775264(uStack_90,1,FUN_101dd96c8,puVar1,uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_90);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(auStack_88);
  uVar2 = auStack_88[0];
  puVar1 = &UNK_1104874a0;
  func_0x000107c613fc(&UNK_1104874a0,0x19,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  puVar1[0x18] = (char)param_1;
  func_0x000107c6157c(uVar5);
  uVar4 = uVar2;
  func_0x00010488a340(uVar2,1,FUN_101dd971c,puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(auStack_88);
  puVar1 = &UNK_1104874c8;
  func_0x000107c613fc(&UNK_1104874c8,0x19,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  puVar1[0x18] = (char)param_1;
  func_0x000107c6157c(uVar5);
  uVar2 = auStack_88[0];
  func_0x00010488a3ec(auStack_88[0],1,0x101dd97d0,puVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(auStack_88[0]);
  func_0x000107c61574(puVar1);
  return uVar2;
}



/* Entry: 101dd8ec8; end: 101dd8f2b;  */

void FUN_101dd8ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  FUN_101dd66c8(param_3,1,param_1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dd8f2c; end: 101dd8fbf;  */

void FUN_101dd8f2c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101dd9688(0,0x112e2e680,&PTR_PTR_1126a95b8);
  if ((param_3 & 1) == 0) {
    func_0x0001031acfe4(param_1,0,0,param_4,param_5,param_2,uVar1,PTR___sytN_11034f1b0 + 8);
  }
  else {
    func_0x0001031ac8e8();
  }
  return;
}



/* Entry: 101dd8fc0; end: 101dd8ff7;  */

void FUN_101dd8fc0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dd8f2c(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101dd8ff8; end: 101dd92cb;  */

undefined * FUN_101dd8ff8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dd9110);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e2e6a8;
    func_0x0001000285a8(0x112e2e6a8,&UNK_10da17470);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106c4088);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 101dd92cc; end: 101dd92ef;  */

void FUN_101dd92cc(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 101dd92f0; end: 101dd9353;  */

void FUN_101dd92f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  FUN_101dd71e0(param_3,1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dd9354; end: 101dd936f;  */

void FUN_101dd9354(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dd92f0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101dd9370; end: 101dd937b;  */

void FUN_101dd9370(undefined8 param_1)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(auStack_58,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_58,uStack_40);
  FUN_101dd66c8(uVar1,1,param_1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dd937c; end: 101dd93cf;  */

void FUN_101dd937c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x0001058c2d60(param_1,uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101dd93d0; end: 101dd93e7;  */

void FUN_101dd93d0(void)

{
  long unaff_x20;
  
  FUN_101dd8040(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dd93e8; end: 101dd93ef;  */

undefined8 FUN_101dd93e8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar2 = &UNK_1104872e8;
    func_0x000107c613fc(&UNK_1104872e8,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    puVar3 = &UNK_110487310;
    func_0x000107c613fc(&UNK_110487310,0x28,7);
    puVar3[0x10] = 1;
    *(undefined8 *)(puVar3 + 0x18) = 0x101dd9458;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    func_0x000107c6157c(puVar2);
    uVar4 = 2;
    func_0x000101dd8cc8(2,FUN_101dd9534,puVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  return uVar4;
}



/* Entry: 101dd93f0; end: 101dd9417;  */

void FUN_101dd93f0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dd9418; end: 101dd946f;  */

void FUN_101dd9418(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43758;
  func_0x000107c61520(&UNK_10dc43758,&UNK_1106c3f80);
  puRam0000000112e2e698 = puVar1;
  return;
}



/* Entry: 101dd9470; end: 101dd9533;  */

void FUN_101dd9470(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 uStack_58;
  
  uVar1 = 0;
  FUN_101dd9688(0,0x112e2e680,&PTR_PTR_1126a95b8);
  func_0x0001000285a8(param_6,param_7);
  if ((param_3 & 1) == 0) {
    func_0x0001031acfe4(&uStack_58,0,0,param_4,param_5,param_2,uVar1,param_6);
  }
  else {
    func_0x0001031ac8e8();
  }
  if (unaff_x21 == 0) {
    *param_1 = uStack_58;
  }
  return;
}



/* Entry: 101dd9534; end: 101dd955f;  */

void FUN_101dd9534(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dd9470(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x112e2e688,&UNK_10da17460);
  return;
}



/* Entry: 101dd9560; end: 101dd95c3;  */

void FUN_101dd9560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  FUN_101dd71e0(param_3,1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dd95c4; end: 101dd9687;  */

void FUN_101dd95c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e6b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc435f8;
  func_0x000107c61520(&UNK_10dc435f8,&UNK_1106c3d90);
  puRam0000000112e2e6b0 = puVar1;
  return;
}



/* Entry: 101dd9688; end: 101dd96c7;  */

void FUN_101dd9688(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101dd96c8; end: 101dd96db;  */

void FUN_101dd96c8(void)

{
  FUN_101dd96dc();
  return;
}



/* Entry: 101dd96dc; end: 101dd971b;  */

void FUN_101dd96dc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_28;
  
  (**(code **)(unaff_x20 + 0x10))(&uStack_28,*param_2);
  if (unaff_x21 == 0) {
    *param_1 = uStack_28;
  }
  return;
}



/* Entry: 101dd971c; end: 101dd9737;  */

void FUN_101dd971c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101dd9560(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101dd9738; end: 101dd974b;  */

void FUN_101dd9738(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  puVar3 = &UNK_110487518;
  func_0x000107c613fc(&UNK_110487518,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101dd9744;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  func_0x000107c6157c(uVar4);
  uVar4 = uVar5;
  func_0x0001048898b8(uVar5,1,0x101dd97a4,puVar3,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar2 = uStack_68;
  uVar5 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_101dd7778,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar2);
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  puVar3 = &UNK_110487540;
  func_0x000107c613fc(&UNK_110487540,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  puVar6 = &UNK_110487568;
  func_0x000107c613fc(&UNK_110487568,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_101dd974c;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  func_0x000107c6157c(uVar7);
  uVar2 = 0x112e2e6e0;
  func_0x0001000285a8(0x112e2e6e0,&UNK_10da17498);
  uVar7 = uVar4;
  func_0x000100775264(uVar4,1,FUN_101dd9764,puVar6,uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar6);
  func_0x0001000d224c(&uStack_68);
  uVar2 = 0x112e2e6e8;
  func_0x0001000285a8(0x112e2e6e8,&UNK_10da174a0);
  uVar4 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_101dd78f0,0,uVar2);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uStack_68);
  *param_1 = uVar4;
  return;
}



/* Entry: 101dd974c; end: 101dd9763;  */

void FUN_101dd974c(void)

{
  long unaff_x20;
  
  FUN_101dd77cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101dd9764; end: 101dd978f;  */

void FUN_101dd9764(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101dd9790; end: 101dd97cb;  */

void FUN_101dd9790(void)

{
  FUN_101dd971c();
  return;
}



/* Entry: 101dd97cc; end: 101dd97d3;  */

void FUN_101dd97cc(undefined8 param_1)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(auStack_58,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_58,uStack_40);
  FUN_101dd66c8(uVar1,1,param_1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dd97d4; end: 101dd97fb;  */

void FUN_101dd97d4(void)

{
  FUN_101dd8fc0();
  return;
}



/* Entry: 101dd97fc; end: 101dd993b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101dd97fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 3;
  func_0x000100774b74(3,0xd,0,uStack_70,uStack_68,puVar1);
  puVar3 = &UNK_110487628;
  func_0x000107c613fc(&UNK_110487628,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  uVar4 = 0;
  func_0x000100964acc(0);
  func_0x000107c61174(param_5);
  func_0x00010090569c(FUN_101dd99a8,puVar3,uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x0001000834e4(auStack_88);
  return unaff_x20;
}



/* Entry: 101dd993c; end: 101dd99a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd993c(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dd99a8; end: 101dd99cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dd99a8(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dd99cc; end: 101dd99eb;  */

void FUN_101dd99cc(void)

{
  func_0x000107c61168(&PTR_PTR_112e2e730);
  return;
}



/* Entry: 101dd99ec; end: 101dd9a13;  */

void FUN_101dd99ec(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110487678;
  if (lRam0000000112e2e788 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e2e788 = param_1;
  }
  return;
}



/* Entry: 101dd9a14; end: 101dd9a57;  */

void FUN_101dd9a14(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101dd9a58; end: 101dd9ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101dd9a58(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e284a0,&UNK_10da107d0);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11307e6a8);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(auStack_88);
  puVar3 = auStack_88;
  func_0x0001000a8868(puVar3,uStack_70);
  uVar1 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_70,uStack_68,puVar3);
  func_0x0001000834e4(auStack_88);
  uVar8 = *(undefined8 *)(param_4 + _DAT_1130806b8);
  puVar4 = &UNK_1104876c8;
  func_0x000107c613fc(&UNK_1104876c8,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  func_0x0001000285a8(0x112e2e798,&UNK_10da17578);
  func_0x000107c613fc();
  func_0x000107c61580(uVar8,2);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  pcVar5 = FUN_101dd9ef8;
  func_0x0001000bdd8c(FUN_101dd9ef8,puVar4);
  puVar4 = &UNK_1104876f0;
  func_0x000107c613fc(&UNK_1104876f0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  func_0x0001000285a8(0x112e2e7a0,&UNK_10da17580);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  pcVar6 = FUN_101dd9f9c;
  func_0x0001000bdd8c(FUN_101dd9f9c,puVar4);
  uVar7 = 0;
  func_0x00010028cda4(0);
  func_0x000107c610f8();
  func_0x000103a70c24(pcVar5,pcVar6,uVar7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar5;
  return unaff_x20;
}



/* Entry: 101dd9ef8; end: 101dd9f23;  */

void FUN_101dd9ef8(void)

{
  long unaff_x20;
  
  FUN_101dd9f24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_101ddc4e0,&PTR_DAT_110487a10);
  return;
}



/* Entry: 101dd9f24; end: 101dd9f9b;  */

/* WARNING: Possible PIC construction at 0x000101dd9f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dd9f7c) */

void FUN_101dd9f24(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  (*param_5)();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  param_1[3] = lVar1;
  param_1[4] = param_6;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101dd9f9c; end: 101dd9ffb;  */

void FUN_101dd9f9c(void)

{
  long unaff_x20;
  
  FUN_101dd9f24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_101dda0cc,&PTR_DAT_110487770);
  return;
}



/* Entry: 101dd9ffc; end: 101dda00b;  */

void FUN_101dd9ffc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dda00c; end: 101dda0ab;  */

void FUN_101dda00c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dda0ac; end: 101dda0cb;  */

void FUN_101dda0ac(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dda0cc; end: 101dda0eb;  */

void FUN_101dda0cc(void)

{
  func_0x000107c61168(&PTR_PTR_112e2e8b8);
  return;
}



/* Entry: 101dda0ec; end: 101dda357;  */

void FUN_101dda0ec(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  if (param_2 != '\x01') {
    func_0x0001000d224c(&uStack_68);
    uVar6 = uStack_68;
    puVar1 = &UNK_110487798;
    func_0x000107c613fc(&UNK_110487798,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0;
    FUN_101ddc2d8(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar1);
    func_0x00010488b6c8(param_1,FUN_101ddacd8,puVar1,uVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c61578(puVar1,2);
  }
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar7);
  uVar2 = uVar6;
  func_0x000104889654(uVar6,1,FUN_101ddac78,uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar7);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar1 = &UNK_110487798;
  puVar3 = puVar1;
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1104877c0;
  func_0x000107c613fc(&UNK_1104877c0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101ddac90;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar5 = 0;
  FUN_101ddc2d8(0,0x112e2e928,&PTR_PTR_1126b7228);
  uVar7 = uVar6;
  func_0x0001048898b8(uVar6,1,FUN_101ddac98,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar6 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_101ddacc0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 101dda358; end: 101dda3b3;  */

void FUN_101dda358(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101dda0ec(0,1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101dda3b4; end: 101dda44f;  */

void FUN_101dda3b4(void)

{
  undefined1 *puVar1;
  undefined1 *puStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x18))();
  func_0x000107c615e8();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_101ddafd8();
    func_0x000107c613f8(&UNK_1106c4438,puStack_40,0,0);
    *puStack_40 = 1;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101dda450; end: 101dda4bb;  */

undefined8 FUN_101dda450(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_101dda4bc(0,0);
    func_0x000107c61574(param_1);
  }
  return uVar1;
}



/* Entry: 101dda4bc; end: 101dda5d3;  */

undefined8 FUN_101dda4bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  uVar1 = 0x112e2e940;
  func_0x0001000285a8(0x112e2e940,&UNK_10da17628);
  func_0x0001000d224c(&uStack_58);
  FUN_101ddb414();
  uVar2 = uVar1;
  FUN_101ddb4fc();
  puVar3 = &UNK_110487798;
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1104878b0;
  func_0x000107c613fc(&UNK_1104878b0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c61434(param_2);
  uVar5 = uStack_58;
  func_0x000104889a8c(uStack_58,1,uVar1,uVar2,0x101ddbe58,puVar4);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 101dda5d4; end: 101dda6f7;  */

undefined8 FUN_101dda5d4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x0001000d224c(&uStack_70);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    puVar3 = &UNK_1104877e8;
    func_0x000107c613fc(&UNK_1104877e8,0x40,7);
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    puVar3[0x28] = 0xff;
    *(undefined8 *)(puVar3 + 0x30) = uVar4;
    *(undefined8 *)(puVar3 + 0x38) = uVar2;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(uVar4);
    uVar4 = uStack_70;
    func_0x0001048897a0(uStack_70,1,0,0x101ddafd4,puVar3);
    func_0x000107c61170(uStack_70);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(param_2);
  }
  return uVar4;
}



/* Entry: 101dda6f8; end: 101dda973;  */

undefined8 FUN_101dda6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110487950;
  func_0x000107c613fc(&UNK_110487950,0x29,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uVar1 = (undefined1)param_3;
  puVar2[0x28] = uVar1;
  func_0x000107c6157c(uVar7);
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar7 = uVar6;
  func_0x000104889654(uVar6,1,0x101ddc3d8,puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar2 = &UNK_110487798;
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110487978;
  func_0x000107c613fc(&UNK_110487978,0x29,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar3[0x28] = uVar1;
  puVar2 = &UNK_1104879a0;
  func_0x000107c613fc(&UNK_1104879a0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101ddc3f8;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar4 = 0;
  FUN_101ddc2d8(0,0x112e2e928,&PTR_PTR_1126b7228);
  uVar5 = uVar6;
  func_0x0001048898b8(uVar6,1,FUN_101ddc4b4,puVar2,uVar4);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_110487798;
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1104879c8;
  func_0x000107c613fc(&UNK_1104879c8,0x29,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar3[0x28] = uVar1;
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar6 = uStack_68;
  func_0x0001048898b8(uStack_68,1,0x101ddc438,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  return uVar6;
}



/* Entry: 101dda974; end: 101ddaa6f;  */

void FUN_101dda974(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char in_w3;
  undefined1 uVar4;
  undefined1 *puStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&puStack_50);
  lVar1 = lStack_48;
  puVar3 = puStack_50;
  puVar2 = puStack_50;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lVar1 + 0x18) + 0x18))();
  func_0x000107c615e8();
  if (((ulong)puVar2 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    if (in_w3 != '\x01') {
      return;
    }
    func_0x0001000d224c(&puStack_50);
    puVar3 = puStack_50;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lStack_48 + 0x18) + 0x38))();
    func_0x000107c615e8();
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
    uVar4 = 3;
    puVar3 = puStack_50;
  }
  FUN_101ddafd8();
  func_0x000107c613f8(&UNK_1106c4438,puVar3,0,0);
  *puVar3 = uVar4;
  func_0x000107c61654();
  return;
}



/* Entry: 101ddaa70; end: 101ddaaef;  */

undefined8 FUN_101ddaa70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_101dda4bc(param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return param_2;
}



/* Entry: 101ddaaf0; end: 101ddac37;  */

undefined8
FUN_101ddaaf0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_58;
  
  uVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x0001000d224c(&uStack_58);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    puVar3 = &UNK_1104879f0;
    func_0x000107c613fc(&UNK_1104879f0,0x40,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    puVar3[0x28] = (char)param_5;
    *(undefined8 *)(puVar3 + 0x30) = uVar4;
    *(undefined8 *)(puVar3 + 0x38) = uVar2;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar2);
    func_0x000101dcbee8(param_3,param_4,param_5);
    func_0x000107c61174(uVar4);
    uVar4 = uStack_58;
    func_0x0001048897a0(uStack_58,1,0,FUN_101ddc4c8,puVar3);
    func_0x000107c61170(uStack_58);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(param_2);
  }
  return uVar4;
}



/* Entry: 101ddac38; end: 101ddac77;  */

void FUN_101ddac38(void)

{
  FUN_101dda6f8();
  return;
}



/* Entry: 101ddac78; end: 101ddac8f;  */

void FUN_101ddac78(void)

{
  FUN_101dda3b4();
  return;
}



/* Entry: 101ddac90; end: 101ddac97;  */

undefined8 FUN_101ddac90(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_101dda4bc(0,0);
    func_0x000107c61574(lVar1);
  }
  return uVar2;
}



/* Entry: 101ddac98; end: 101ddacbf;  */

void FUN_101ddac98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ddacc0; end: 101ddacd7;  */

void FUN_101ddacc0(void)

{
  FUN_101dda5d4();
  return;
}



/* Entry: 101ddacd8; end: 101ddacdf;  */

void FUN_101ddacd8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101dda0ec(0,1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101ddace0; end: 101ddafcb;  */

/* WARNING: Removing unreachable block (ram,0x000101ddad90) */

void FUN_101ddace0(undefined1 *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  char param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_98);
  puVar3 = puStack_98;
  if (puStack_98 == (undefined *)0x0) {
    FUN_101ddafd8();
    puVar3 = &UNK_1106c4438;
    func_0x000107c613f8(&UNK_1106c4438,puVar1,0,0);
    *puVar1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
  }
  else {
    if (param_5 == -1) {
      ppuVar9 = (undefined **)0x0;
      puVar11 = (undefined *)0xf000000000000000;
    }
    else {
      uVar2 = 0;
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000107c5eb50();
      puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,param_5);
      uVar4 = uVar2;
      puStack_98 = param_3;
      uStack_90 = param_4;
      FUN_101ddb2bc();
      puVar11 = &UNK_1106c4088;
      ppuVar9 = &puStack_98;
      func_0x000107c5eb4c(ppuVar9,&UNK_1106c4088,uVar4);
      func_0x000107c61574(uVar2);
    }
    uVar4 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    puVar5 = &UNK_110487810;
    func_0x000107c613fc(&UNK_110487810,0x11,7);
    puVar5[0x10] = 0;
    puVar6 = &UNK_110487838;
    func_0x000107c613fc(&UNK_110487838,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(undefined1 **)(puVar6 + 0x20) = param_1;
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(param_1);
    ppuVar10 = (undefined **)0x0;
    if ((ulong)puVar11 >> 0x3c < 0xf) {
      ppuVar10 = ppuVar9;
      func_0x000107c5ee20(ppuVar9,puVar11);
    }
    func_0x0001000d224c(&uStack_68);
    uVar2 = 0;
    FUN_101ddc2d8(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_68);
    puVar7 = &UNK_110487860;
    func_0x000107c613fc(&UNK_110487860,0x28,7);
    *(code **)(puVar7 + 0x10) = FUN_101ddb05c;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    *(undefined8 *)(puVar7 + 0x20) = param_6;
    pcStack_78 = FUN_101ddb294;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e14;
    puStack_80 = &UNK_110487878;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_70;
    func_0x000107c6157c(puVar6);
    func_0x000107c61174(param_6);
    func_0x000107c61574(puVar7);
    func_0x000107c5c2c0(puVar3);
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar4);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(uVar2);
    func_0x0001000b44c0(ppuVar9,puVar11);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 101ddafcc; end: 101ddafd7;  */

void FUN_101ddafcc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ddafd8; end: 101ddb05b;  */

void FUN_101ddafd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43e28;
  func_0x000107c61520(&UNK_10dc43e28,&UNK_1106c4438);
  puRam0000000112e2e930 = puVar1;
  return;
}


