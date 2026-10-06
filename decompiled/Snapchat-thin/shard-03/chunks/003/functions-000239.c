/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102798468; end: 102798487;  */

undefined1  [16] FUN_102798468(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x00010279a438();
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_10279a3a8;
  return auVar1;
}



/* Entry: 102798488; end: 1027984b7;  */

void FUN_102798488(void)

{
  long unaff_x20;
  
  func_0x00010279a4a8(unaff_x20 + 0x20);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010279a814();
  return;
}



/* Entry: 1027984b8; end: 1027984f3;  */

void FUN_1027984b8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x00010279a86c();
  func_0x00010279a510(unaff_x20 + 0x20,auStack_48,1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1027984f4; end: 10279851b;  */

undefined1  [16] FUN_1027984f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x00010279a484(unaff_x20 + 0x20,param_1);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = FUN_10279851c;
  return auVar1;
}



/* Entry: 10279851c; end: 10279851f;  */

void FUN_10279851c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102798520; end: 10279854b;  */

void FUN_102798520(long param_1)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  
  func_0x00010279a86c();
  func_0x00010279a4b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = unaff_x21;
  *(undefined8 *)(param_1 + 0x18) = unaff_x19;
  return;
}



/* Entry: 10279854c; end: 10279869f;  */

undefined8 FUN_10279854c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x24;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000103c31f74();
  FUN_102798708();
  func_0x00010279a5dc();
  FUN_102798840();
  func_0x00010279a6e4();
  uVar3 = 0x7245656764697242;
  func_0x00010279a7b8(0x7245656764697242,0xeb00000000726f72);
  func_0x00010279a5e4();
  func_0x00010279a69c();
  (**(code **)(*param_1 + 0x128))(0x7245656764697242,0xeb00000000726f72);
  if (unaff_x21 == 0) {
    func_0x00010279a49c(unaff_x20 + 0x10,auStack_68);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    pcVar4 = *(code **)(*param_1 + 0x2b8);
    func_0x000107c61434(uVar2);
    (*pcVar4)(uVar3,0,uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x00010279a49c(unaff_x20 + 0x20,auStack_80);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    pcVar4 = *(code **)(*param_1 + 0x2e8);
    func_0x000107c61434(uVar2);
    (*pcVar4)(uVar3,1,uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    unaff_x24 = uVar3;
  }
  return unaff_x24;
}



/* Entry: 1027986a0; end: 102798707;  */

/* WARNING: Possible PIC construction at 0x0001027986f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027986f8) */

void FUN_1027986a0(undefined8 *param_1)

{
  long *plVar1;
  
  func_0x000103c31f74();
  plVar1 = (long *)*param_1;
  FUN_102798708();
  func_0x00010279a5dc();
  FUN_102798840();
  (**(code **)(*plVar1 + 0xa0))(0x7245656764697242,0xeb00000000726f72,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar1);
  return;
}



/* Entry: 102798708; end: 102798727;  */

void FUN_102798708(void)

{
  func_0x000107c61168(&PTR_PTR_112ebe288);
  return;
}



/* Entry: 102798728; end: 102798763;  */

undefined8 FUN_102798728(undefined8 param_1)

{
  func_0x00010279a4b8();
  func_0x000107c613fc();
  func_0x00010279a6bc();
  FUN_102798764();
  return param_1;
}



/* Entry: 102798764; end: 10279883f;  */

/* WARNING: Removing unreachable block (ram,0x0001027987e8) */

void FUN_102798764(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  uVar2 = 0;
  uVar1 = param_2;
  (**(code **)(*param_1 + 0x218))();
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    uVar2 = 1;
    (**(code **)(*param_1 + 0x248))();
    func_0x00010279a5e4();
    func_0x000107c61428((undefined8 *)(unaff_x20 + 0x20),auStack_58,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = param_2;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    func_0x000107c6142c(uVar1);
  }
  else {
    func_0x00010279a5e4();
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
    FUN_102798708();
    func_0x00010279a714();
  }
  return;
}



/* Entry: 102798840; end: 10279890f;  */

void FUN_102798840(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100e779e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  uVar1 = 0;
  func_0x000103c31bb8(0);
  func_0x00010279a4c8();
  uVar2 = 0x6567617373656d;
  func_0x000103c31710(0x6567617373656d,0xe700000000000000,0x73,0xe100000000000000);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  func_0x00010279a4c8(uVar1);
  uVar1 = 0x6b63617473;
  func_0x000103c31710(0x6b63617473,0xe500000000000000,0x3f73,0xe200000000000000);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000103c31b98(0);
  func_0x00010279a508();
  func_0x000103c31164(param_1,0,0);
  return;
}



/* Entry: 102798910; end: 10279894b;  */

void FUN_102798910(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10279894c; end: 102798973;  */

void FUN_10279894c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102798728();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102798974; end: 1027989a7;  */

void FUN_102798974(void)

{
  FUN_10279854c();
  return;
}



/* Entry: 1027989a8; end: 102798a7f;  */

undefined8 FUN_1027989a8(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  long unaff_x22;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined1 auStack_68 [24];
  
  func_0x00010279a4d4();
  func_0x00010279a5dc();
  func_0x000102798bb8();
  func_0x00010279a6e4();
  func_0x00010279a7b8(0xd000000000000010,0x800000010dad9c30);
  func_0x00010279a5e4();
  func_0x00010279a69c();
  uVar1 = 0xd000000000000010;
  (**(code **)(*unaff_x19 + 0x128))(0xd000000000000010,0x800000010dad9c30);
  if (unaff_x22 == 0) {
    func_0x00010279a49c(unaff_x25 + 0x10,auStack_68);
    func_0x00010279a838();
    func_0x00010279a55c();
    func_0x00010279a540();
    func_0x00010279a594();
    func_0x00010279a678();
    unaff_x24 = uVar1;
  }
  return unaff_x24;
}



/* Entry: 102798a80; end: 102798adf;  */

/* WARNING: Possible PIC construction at 0x000102798ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102798ad4) */
/* WARNING: Removing unreachable block (ram,0x00010279a6cc) */

void FUN_102798a80(undefined8 *param_1)

{
  long *plVar1;
  
  func_0x000103c31f74();
  plVar1 = (long *)*param_1;
  func_0x00010279a5dc();
  func_0x000102798bb8();
  (**(code **)(*plVar1 + 0xa0))(0xd000000000000010,0x800000010dad9c30,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar1);
  return;
}



/* Entry: 102798ae0; end: 102798b17;  */

undefined8 FUN_102798ae0(undefined8 param_1)

{
  func_0x00010279a4f4();
  func_0x00010279a7dc();
  func_0x000107c613fc();
  func_0x00010279a7c0();
  func_0x00010279a6bc();
  FUN_102798e40();
  return param_1;
}



/* Entry: 102798b18; end: 102798b53;  */

void FUN_102798b18(void)

{
  func_0x00010279a490(&UNK_110549eb8);
  func_0x00010279a44c();
  func_0x00010279a640();
  func_0x00010279a788();
  return;
}



/* Entry: 102798b54; end: 102798b7b;  */

void FUN_102798b54(void)

{
  func_0x00010279a528(0x10279a3d0);
  func_0x00010279a820();
  return;
}



/* Entry: 102798b7c; end: 102798ca7;  */

void FUN_102798b7c(void)

{
  func_0x00010279a490(&UNK_110549f30);
  func_0x00010279a44c();
  func_0x00010279a640();
  func_0x00010279a788();
  return;
}



/* Entry: 102798ca8; end: 102798cb3;  */

void FUN_102798ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6f32c4);
  return;
}



/* Entry: 102798cb4; end: 102798cdb;  */

void FUN_102798cb4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102798ae0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102798cdc; end: 102798d0f;  */

void FUN_102798cdc(void)

{
  FUN_1027989a8();
  return;
}



/* Entry: 102798d10; end: 102798d3b;  */

void FUN_102798d10(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010279a86c();
  func_0x00010279a508();
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  return;
}



/* Entry: 102798d3c; end: 102798e07;  */

undefined8 FUN_102798d3c(void)

{
  long unaff_x21;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x00010279a4d4();
  func_0x00010279a5dc();
  FUN_102798f44();
  func_0x00010279a6e4();
  uVar1 = 0x624f656764697242;
  func_0x00010279a7b8(0x624f656764697242,0xee00726576726573);
  func_0x00010279a5e4();
  func_0x00010279a69c();
  func_0x00010279a624();
  if (unaff_x21 == 0) {
    func_0x00010279a49c(unaff_x25 + 0x10,auStack_68);
    func_0x00010279a838();
    func_0x00010279a55c();
    func_0x00010279a540();
    func_0x00010279a594();
    func_0x00010279a678();
    unaff_x24 = uVar1;
  }
  return unaff_x24;
}



/* Entry: 102798e08; end: 102798e3f;  */

undefined8 FUN_102798e08(undefined8 param_1)

{
  func_0x00010279a4f4();
  func_0x00010279a7dc();
  func_0x000107c613fc();
  func_0x00010279a79c();
  func_0x00010279a6bc();
  FUN_102798e40();
  return param_1;
}



/* Entry: 102798e40; end: 102798edf;  */

void FUN_102798e40(long *param_1,undefined8 param_2,code *param_3,long param_4,code *param_5)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *unaff_x20;
  lVar1 = 0;
  (**(code **)(*param_1 + 0x288))(param_2);
  func_0x00010279a5e4();
  if (unaff_x21 == 0) {
    (*param_3)(param_2);
    func_0x00010279a844();
    unaff_x20[2] = param_4;
    unaff_x20[3] = lVar1;
  }
  else {
    (*param_5)(0,*(undefined8 *)(lVar2 + 0x50));
    func_0x000107c61464();
  }
  return;
}



/* Entry: 102798ee0; end: 102798f1b;  */

void FUN_102798ee0(void)

{
  func_0x00010279a490(&UNK_110549e40);
  func_0x00010279a44c();
  func_0x00010279a640();
  func_0x00010279a788();
  return;
}



/* Entry: 102798f1c; end: 102798f43;  */

void FUN_102798f1c(void)

{
  func_0x00010279a528(FUN_10279a3bc);
  func_0x00010279a820();
  return;
}



/* Entry: 102798f44; end: 10279902f;  */

void FUN_102798f44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100e779e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000103c31bb8(0);
  func_0x000107c613fc();
  uVar1 = 0x746e6576456e6f;
  func_0x000103c31710(0x746e6576456e6f,0xe700000000000000,0xd000000000000026,0x800000010f0bba30);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = 0x112d3c7e8;
  func_0x0001000285a8(0x112d3c7e8,&UNK_10d9093f0);
  func_0x000107c61538();
  uVar2 = 0;
  func_0x000103c31b98(0);
  func_0x000107c613fc();
  func_0x000103c31164(param_1,uVar1,0,uVar2);
  return;
}



/* Entry: 102799030; end: 10279903b;  */

void FUN_102799030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6f333c);
  return;
}



/* Entry: 10279903c; end: 10279906f;  */

void FUN_10279903c(void)

{
  func_0x00010279a794();
  return;
}



/* Entry: 102799070; end: 102799097;  */

void FUN_102799070(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102798e08();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102799098; end: 1027990ab;  */

void FUN_102799098(void)

{
  FUN_102798d3c();
  return;
}



/* Entry: 1027990ac; end: 1027990af;  */

void FUN_1027990ac(void)

{
  long unaff_x20;
  
  func_0x00010279a4a8(unaff_x20 + 0x10);
  func_0x00010279a5dc();
  func_0x00010279a814();
  return;
}



/* Entry: 1027990b0; end: 1027990db;  */

void FUN_1027990b0(void)

{
  long unaff_x20;
  
  func_0x00010279a4a8(unaff_x20 + 0x10);
  func_0x00010279a5dc();
  func_0x00010279a814();
  return;
}



/* Entry: 1027990dc; end: 1027990e7;  */

void FUN_1027990dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__swift_release_11034f4c0;
  func_0x00010279a510(unaff_x20 + 0x10,auStack_48,1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  (*(code *)puVar1)(uVar2);
  return;
}



/* Entry: 1027990e8; end: 10279912b;  */

void FUN_1027990e8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x00010279a510(unaff_x20 + 0x10,auStack_48,1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  (*param_3)(uVar1);
  return;
}



/* Entry: 10279912c; end: 10279914b;  */

undefined1  [16] FUN_10279912c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x00010279a438();
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10279a3b4;
  return auVar1;
}



/* Entry: 10279914c; end: 102799177;  */

void FUN_10279914c(void)

{
  long unaff_x20;
  
  func_0x00010279a4a8(unaff_x20 + 0x20);
  func_0x00010279a5dc();
  func_0x00010279a814();
  return;
}



/* Entry: 102799178; end: 1027991b3;  */

void FUN_102799178(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x00010279a86c();
  func_0x00010279a510(unaff_x20 + 0x20,auStack_48,1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1027991b4; end: 1027991db;  */

undefined1  [16] FUN_1027991b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x00010279a484(unaff_x20 + 0x20,param_1);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10279a3b8;
  return auVar1;
}



/* Entry: 1027991dc; end: 102799223;  */

void FUN_1027991dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010279a4b8();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  return;
}



/* Entry: 102799224; end: 102799373;  */

undefined8 FUN_102799224(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x00010279a4d4();
  func_0x00010279a5dc();
  FUN_102799c50();
  func_0x00010279a6e4();
  uVar4 = 0x7553656764697242;
  func_0x00010279a7b8(0x7553656764697242,0xed00007463656a62);
  func_0x00010279a5e4();
  func_0x00010279a69c();
  func_0x00010279a624();
  if (unaff_x21 == 0) {
    func_0x00010279a49c(unaff_x25 + 0x10,auStack_68);
    lVar1 = *(long *)(unaff_x25 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x25 + 0x18);
    func_0x000107c6157c(uVar3);
    lVar2 = lVar1;
    FUN_1027997c8(lVar1,uVar3,&UNK_110549e18,0x10279a23c);
    func_0x00010279a864();
    func_0x00010279a84c(uVar4,0,lVar2,uVar3);
    func_0x00010279a844();
    unaff_x24 = uVar4;
    if (lVar1 == 0) {
      func_0x00010279a49c(unaff_x25 + 0x20,auStack_80);
      func_0x000107c6157c(*(undefined8 *)(unaff_x25 + 0x28));
      func_0x00010279a55c();
      func_0x00010279a540();
      func_0x00010279a84c(uVar4,1,lVar2);
      func_0x00010279a678();
    }
  }
  return unaff_x24;
}



/* Entry: 102799374; end: 10279939f;  */

/* WARNING: Possible PIC construction at 0x0001027993f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027993f4) */
/* WARNING: Removing unreachable block (ram,0x00010279a6cc) */

void FUN_102799374(void)

{
  code *pcVar1;
  code *extraout_x8;
  long *plVar2;
  
  pcVar1 = FUN_102799c50;
  func_0x000103c31f74(FUN_102799c50,0x7553656764697242,0xed00007463656a62);
  plVar2 = *(long **)pcVar1;
  func_0x000107c6157c(plVar2);
  FUN_102799c50();
  func_0x00010279a820(*(undefined8 *)(*plVar2 + 0xa0));
  (*extraout_x8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 1027993a0; end: 1027993ff;  */

/* WARNING: Possible PIC construction at 0x0001027993f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027993f4) */
/* WARNING: Removing unreachable block (ram,0x00010279a6cc) */

void FUN_1027993a0(code *param_1)

{
  code *pcVar1;
  code *extraout_x8;
  long *plVar2;
  
  pcVar1 = param_1;
  func_0x000103c31f74();
  plVar2 = *(long **)pcVar1;
  func_0x000107c6157c(plVar2);
  (*param_1)();
  func_0x00010279a820(*(undefined8 *)(*plVar2 + 0xa0));
  (*extraout_x8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 102799400; end: 10279943b;  */

undefined8 FUN_102799400(undefined8 param_1)

{
  func_0x00010279a4b8();
  func_0x000107c613fc();
  func_0x00010279a6bc();
  FUN_10279943c();
  return param_1;
}



/* Entry: 10279943c; end: 102799517;  */

/* WARNING: Removing unreachable block (ram,0x0001027994c8) */

void FUN_10279943c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  pcVar3 = *(code **)(*param_1 + 0x288);
  lVar1 = 0;
  (*pcVar3)(param_2);
  if (unaff_x21 == 0) {
    FUN_102799518();
    func_0x00010279a864();
    unaff_x20[2] = 0x10279a194;
    unaff_x20[3] = lVar1;
    lVar1 = 1;
    (*pcVar3)(param_2);
    func_0x00010279a69c();
    func_0x000102799554(param_2);
    func_0x000107c61574(param_2);
    unaff_x20[4] = 0x10279a130;
    unaff_x20[5] = lVar1;
  }
  else {
    func_0x00010279a69c();
    FUN_102799d98(0,*(undefined8 *)(lVar2 + 0x50));
    func_0x00010279a714();
  }
  return;
}



/* Entry: 102799518; end: 10279958f;  */

void FUN_102799518(void)

{
  func_0x00010279a490(&UNK_110549d50);
  func_0x00010279a44c();
  func_0x00010279a640();
  func_0x00010279a788();
  return;
}



/* Entry: 102799590; end: 1027995b7;  */

void FUN_102799590(void)

{
  func_0x00010279a528(0x10279a25c);
  func_0x00010279a820();
  return;
}



/* Entry: 1027995b8; end: 102799623;  */

void FUN_1027995b8(ulong param_1,undefined8 *param_2)

{
  long unaff_x21;
  
  func_0x00010279a780();
  func_0x00010279a4e8();
  func_0x00010279a764();
  func_0x00010279a660();
  func_0x00010279a46c();
  if (((param_1 & 1) == 0) && (unaff_x21 == 0)) {
    func_0x00010279a82c("onEventsubscription");
    func_0x00010279a40c();
    *param_2 = 0xd000000000000013;
    param_2[1] = 0;
    func_0x00010279a424();
  }
  func_0x00010279a70c();
  return;
}



/* Entry: 102799624; end: 1027996cb;  */

void FUN_102799624(void)

{
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined1 auStack_88 [40];
  
  func_0x00010279a5b8();
  func_0x00010279a4e8();
  func_0x00010279a764();
  func_0x00010279a728();
  func_0x00010279a608();
  func_0x0001000834e4(auStack_88);
  func_0x00010279a750();
  func_0x00010279a76c();
  func_0x000100d0547c();
  func_0x00010279a684();
  if (unaff_x21 == 0) {
    func_0x00010279a56c();
    func_0x00010279a6f4();
    func_0x00010279a6a4();
    if ((unaff_x22 & 1) == 0) {
      func_0x000100e49460();
      func_0x00010279a40c();
      unaff_x23[1] = 0xe700000000000000;
      *unaff_x23 = 0x746e6576456e6f;
      func_0x00010279a424();
    }
  }
  func_0x00010279a70c();
  return;
}



/* Entry: 1027996cc; end: 102799733;  */

void FUN_1027996cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    func_0x00010279a508(param_3,0x20);
    *(long *)(param_3 + 0x10) = param_1;
    *(undefined8 *)(param_3 + 0x18) = param_2;
    func_0x000103c30a64(param_4,param_3);
    func_0x00010279a640();
    func_0x000107c61574(param_3);
  }
  func_0x00010279a788();
  return;
}



/* Entry: 102799734; end: 10279975b;  */

void FUN_102799734(void)

{
  func_0x00010279a528(0x10279a17c);
  func_0x00010279a820();
  return;
}



/* Entry: 10279975c; end: 1027997c7;  */

void FUN_10279975c(ulong param_1,undefined8 *param_2)

{
  long unaff_x21;
  
  func_0x00010279a780();
  func_0x00010279a4e8();
  func_0x00010279a764();
  func_0x00010279a660();
  func_0x00010279a46c();
  if (((param_1 & 1) == 0) && (unaff_x21 == 0)) {
    func_0x00010279a82c("subscribeonEventsubscription");
    func_0x00010279a40c();
    *param_2 = 0xd00000000000001c;
    param_2[1] = 0;
    func_0x00010279a424();
  }
  func_0x00010279a70c();
  return;
}



/* Entry: 1027997c8; end: 10279983b;  */

void FUN_1027997c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x00010279a4c8();
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  *(long *)(param_3 + 0x28) = unaff_x20;
  func_0x000103c30a64(param_4,param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(param_3);
  func_0x00010279a814();
  return;
}



/* Entry: 10279983c; end: 1027999f3;  */

/* WARNING: Removing unreachable block (ram,0x00010279998c) */
/* WARNING: Removing unreachable block (ram,0x00010279994c) */

void FUN_10279983c(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 uStack_51;
  
  lVar2 = 0;
  pcStack_68 = param_6;
  func_0x000107c60188(0,param_5);
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = *(code **)(*param_1 + 0x1b0);
  FUN_102799e4c();
  puVar7 = &UNK_110549a40;
  (*pcVar9)(&uStack_51,0,&UNK_110549a40,lVar3);
  pcVar9 = pcStack_68;
  if (unaff_x21 == 0) {
    uVar4 = 1;
    pcStack_90 = param_2;
    uStack_88 = param_3;
    lStack_80 = lVar8;
    lStack_78 = lVar2;
    puStack_70 = auStack_a0 + -extraout_x8;
    (**(code **)(*param_1 + 0x3f8))();
    (*pcVar9)();
    func_0x00010279a864();
    puVar1 = puStack_70;
    uVar5 = 2;
    (**(code **)(*param_1 + 0x420))(puStack_70,2,param_5);
    pcVar9 = *(code **)(*param_1 + 0x408);
    uStack_98 = uVar4;
    pcStack_68 = (code *)puVar7;
    FUN_102798708();
    uVar6 = 3;
    (*pcVar9)(3,uVar5,&PTR_DAT_1105498e0);
    pcVar9 = pcStack_68;
    uVar4 = uStack_98;
    (*pcStack_90)(uStack_51,uStack_98,pcStack_68,puVar1,uVar6);
    func_0x00010279a7fc();
    func_0x000107c61574(uVar6);
    func_0x000100d0547c(uVar4,pcVar9);
  }
  return;
}



/* Entry: 1027999f4; end: 102799a2f;  */

void FUN_1027999f4(void)

{
  func_0x00010279a490(&UNK_110549dc8);
  func_0x00010279a44c();
  func_0x00010279a640();
  func_0x00010279a788();
  return;
}



/* Entry: 102799a30; end: 102799ae7;  */

void FUN_102799a30(void)

{
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined1 auStack_88 [40];
  
  func_0x00010279a5b8();
  func_0x00010279a4e8();
  func_0x00010279a764();
  func_0x00010279a728();
  func_0x00010279a608();
  func_0x0001000834e4(auStack_88);
  func_0x00010279a750();
  func_0x00010279a76c();
  func_0x000100d0547c();
  func_0x00010279a684();
  if (unaff_x21 == 0) {
    func_0x00010279a56c();
    func_0x00010279a6f4();
    func_0x00010279a6a4();
    if ((unaff_x22 & 1) == 0) {
      func_0x000100e49460();
      func_0x00010279a40c();
      *unaff_x23 = 0xd000000000000010;
      unaff_x23[1] = 0x800000010f0bb990;
      func_0x00010279a424();
    }
  }
  func_0x00010279a70c();
  return;
}



/* Entry: 102799ae8; end: 102799b7f;  */

void FUN_102799ae8(long *param_1,code *param_2)

{
  code *pcVar1;
  code *in_x5;
  undefined8 in_x6;
  long unaff_x21;
  
  pcVar1 = param_2;
  (**(code **)(*param_1 + 0x1b8))(0);
  if (unaff_x21 == 0) {
    (*in_x5)();
    func_0x00010279a844();
    (*param_2)(in_x6,pcVar1);
    func_0x000107c61574(pcVar1);
  }
  return;
}



/* Entry: 102799b80; end: 102799c4f;  */

void FUN_102799b80(long *param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  long unaff_x21;
  
  plVar1 = param_1;
  func_0x00010279a780();
  func_0x00010279a4e8();
  func_0x00010279a764();
  FUN_1027997c8(param_1,param_2,param_6,param_7);
  (**(code **)(*plVar1 + 0xc0))();
  func_0x000107c61574(param_2);
  puVar2 = (undefined8 *)0x0;
  (**(code **)(*param_3 + 0x70))(plVar1);
  func_0x00010279a46c();
  if (((param_2 & 1) == 0) && (unaff_x21 == 0)) {
    func_0x000100e49460();
    func_0x00010279a40c();
    puVar2[1] = 0xe900000000000065;
    *puVar2 = 0x6269726373627573;
    func_0x00010279a424();
  }
  func_0x00010279a70c();
  return;
}



/* Entry: 102799c50; end: 102799d97;  */

void FUN_102799c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100e779e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  uVar1 = 0;
  func_0x000103c31bb8(0);
  func_0x000107c613fc();
  uVar2 = 0x746e6576456e6f;
  func_0x000103c31710(0x746e6576456e6f,0xe700000000000000,0xd000000000000023,0x800000010f0bb9d0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  func_0x000107c613fc(uVar1,0x30,7);
  uVar1 = 0x6269726373627573;
  func_0x000103c31710(0x6269726373627573,0xe900000000000065,0xd000000000000026,0x800000010f0bba00);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = 0x112d3c7e8;
  func_0x0001000285a8(0x112d3c7e8,&UNK_10d9093f0);
  func_0x000107c61538();
  uVar2 = 0;
  func_0x000103c31b98(0);
  func_0x000107c613fc();
  func_0x000103c31164(param_1,uVar1,0,uVar2);
  return;
}



/* Entry: 102799d98; end: 102799da3;  */

void FUN_102799d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6f33b4);
  return;
}



/* Entry: 102799da4; end: 102799ddb;  */

void FUN_102799da4(void)

{
  long unaff_x20;
  
  func_0x00010279a794();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102799ddc; end: 102799ddf;  */

void FUN_102799ddc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad9c64;
  func_0x000107c61520(&UNK_10dad9c64,&UNK_110549a40);
  puRam0000000112ebe228 = puVar1;
  return;
}



/* Entry: 102799de0; end: 102799e1f;  */

void FUN_102799de0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad9c64;
  func_0x000107c61520(&UNK_10dad9c64,&UNK_110549a40);
  puRam0000000112ebe228 = puVar1;
  return;
}



/* Entry: 102799e20; end: 102799e4b;  */

void FUN_102799e20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001027983ec();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102799e4c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102799e4c; end: 102799e8b;  */

void FUN_102799e4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dad9d20;
  func_0x000107c61520(&DAT_10dad9d20,&UNK_110549a40);
  puRam0000000112ebe230 = puVar1;
  return;
}



/* Entry: 102799e8c; end: 102799eaf;  */

void FUN_102799e8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1027983ac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102799eb0; end: 102799eb3;  */

void FUN_102799eb0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ebe238 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ebe240;
  func_0x00010002969c(0x112ebe240,&UNK_10dad9d50);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ebe238 = puVar2;
  return;
}



/* Entry: 102799eb4; end: 102799f03;  */

void FUN_102799eb4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ebe238 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ebe240;
  func_0x00010002969c(0x112ebe240,&UNK_10dad9d50);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ebe238 = puVar2;
  return;
}



/* Entry: 102799f04; end: 102799f2b;  */

void FUN_102799f04(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102799400();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102799f2c; end: 102799f3f;  */

void FUN_102799f2c(void)

{
  FUN_102799224();
  return;
}



/* Entry: 102799f40; end: 10279a0a7;  */

int FUN_102799f40(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_102799fc0;
  }
  if (param_2 < 0xfd) {
LAB_102799fb4:
    iVar2 = *param_1 - 4;
    if (*param_1 < 4) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000102799f98:
      if (uVar1 == 0) goto LAB_102799fb4;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000102799f98;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_102799fb4;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 4;
  }
LAB_102799fc0:
  return iVar2 + 1;
}



/* Entry: 10279a0a8; end: 10279a1c3;  */

void FUN_10279a0a8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 10279a1c4; end: 10279a1e3;  */

void FUN_10279a1c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10279a1e4; end: 10279a367;  */

void FUN_10279a1e4(void)

{
  func_0x00010279a7f0();
  FUN_102799ae8();
  return;
}



/* Entry: 10279a368; end: 10279a36b;  */

void FUN_10279a368(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010279a86c();
  func_0x00010279a508();
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  return;
}



/* Entry: 10279a36c; end: 10279a3a7;  */

void FUN_10279a36c(void)

{
  FUN_10279a1c4();
  return;
}



/* Entry: 10279a3a8; end: 10279a3bb;  */

void FUN_10279a3a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10279a3bc; end: 10279a3e3;  */

void FUN_10279a3bc(void)

{
  func_0x00010279a25c();
  return;
}



/* Entry: 10279a3e4; end: 10279a883;  */

void FUN_10279a3e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10279a884; end: 10279a8f7;  */

/* WARNING: Possible PIC construction at 0x00010279a8d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010279a8d8) */

void FUN_10279a884(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10279b88c();
  lVar3 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11054a1b0;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10279a8f8; end: 10279a93b;  */

void FUN_10279a8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10279a93c; end: 10279a9ef;  */

void FUN_10279a93c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xd8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar1;
  lVar2 = 0;
  func_0x00010392d0f4();
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279a9f0,0,0);
  return;
}



/* Entry: 10279a9f0; end: 10279aa7f;  */

void FUN_10279a9f0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10279aa80;
                    /* WARNING: Could not recover jumptable at 0x00010279aa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xc0),uVar2,lVar3);
  return;
}



/* Entry: 10279aa80; end: 10279aadf;  */

void FUN_10279aa80(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x108) = param_1;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279aae0;
  }
  else {
    pcVar1 = FUN_10279b21c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279aae0; end: 10279ab73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10279aae0(void)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000100083b20(unaff_x22 + 0xa8);
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  plVar3 = *(long **)(lVar4 + _DAT_112fb1200);
  *(long **)(unaff_x22 + 0x118) = plVar3;
  func_0x000107c6157c(plVar3);
  func_0x000107c61170(lVar4);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10279ab74;
  plVar1[5] = unaff_x22 + 0x88;
  plVar1[6] = (long)plVar3;
  lVar5 = *(long *)(*plVar3 + 0x50);
  plVar1[7] = lVar5;
  lVar4 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[9] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar2;
  lVar4 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 10279ab74; end: 10279abc3;  */

void FUN_10279ab74(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x118);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279abc4,0,0);
  return;
}



/* Entry: 10279abc4; end: 10279ac6b;  */

void FUN_10279abc4(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
  func_0x000107c614f0(uVar3);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x130) = uVar6;
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10279ac6c;
                    /* WARNING: Could not recover jumptable at 0x00010279ac68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,*(undefined8 *)(unaff_x22 + 0xf8),uVar6,uVar3,lVar2);
  return;
}



/* Entry: 10279ac6c; end: 10279ace3;  */

void FUN_10279ac6c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x130);
  uVar4 = *(undefined8 *)(lVar3 + 0x128);
  *(long *)(lVar3 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x138));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10279ace4;
  }
  else {
    pcVar2 = FUN_10279b278;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10279ace4; end: 10279b033;  */

void FUN_10279ace4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xf8);
  puVar8 = puVar4;
  func_0x000107c614c4(puVar4,*(undefined8 *)(unaff_x22 + 0xf0));
  if ((int)puVar8 == 1) {
    lVar1 = *(long *)(unaff_x22 + 0xe0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
    (**(code **)(lVar1 + 0x20))(uVar10,puVar4,uVar9);
    puVar3 = PTR_PTR_1126b1c68;
    func_0x000107c61168();
    puVar2 = puVar3;
    func_0x000107c5ed90();
    func_0x000107c5de5c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    (**(code **)(lVar1 + 8))(uVar10,uVar9);
  }
  else {
    uVar10 = *puVar4;
    puVar3 = PTR_PTR_1126b1c68;
    func_0x000107c61168();
    func_0x000107c45148();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
  }
  *(undefined **)(unaff_x22 + 0x148) = puVar3;
  func_0x000100083b20(unaff_x22 + 0xb0);
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb0);
  puVar4 = puVar8;
  func_0x000107c42cac();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 **)(unaff_x22 + 0x150) = puVar8;
  func_0x000107c61170();
  if (puVar8 != (undefined8 *)0x0) {
    puVar5 = PTR_PTR_1126b2470;
    func_0x000107c61168();
    puVar2 = &UNK_11054a170;
    func_0x000107c613fc(&UNK_11054a170,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puVar3;
    *(code **)(unaff_x22 + 0x50) = FUN_10279b4d4;
    *(undefined **)(unaff_x22 + 0x58) = puVar2;
    puVar6 = (undefined8 *)(unaff_x22 + 0x30);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x38) = 0x42000000;
    *(code **)(unaff_x22 + 0x40) = FUN_10279b358;
    *(undefined **)(unaff_x22 + 0x48) = &UNK_11054a188;
    func_0x000107c60bc4();
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c61174(puVar3);
    func_0x000107c61574(uVar10);
    func_0x000107c5e560();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x158) = puVar5;
    func_0x000107c60bd0();
    FUN_10279b708();
    func_0x000107c613fc();
    puVar6[3] = 3;
    puVar6[2] = 1;
    puVar6[4] = puVar5;
    puVar3 = PTR_PTR_1126b2478;
    func_0x000107c610f8();
    func_0x000107c61174(puVar5);
    uVar10 = 0x112ebe5f8;
    func_0x0001000285a8(0x112ebe5f8,&UNK_10db74d60);
    puVar4 = puVar6;
    func_0x000107c5fc48(puVar6,uVar10);
    func_0x000107c61574(puVar6);
    func_0x000107c47134();
    *(undefined **)(unaff_x22 + 0x160) = puVar3;
    func_0x000107c61170(puVar4);
    *(undefined8 **)(unaff_x22 + 0x20) = puVar8;
    *(undefined **)(unaff_x22 + 0x28) = puVar3;
    plVar7 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x168) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10279b034;
    puVar3 = PTR___sSSN_11034da80;
    plVar7[9] = unaff_x22 + 0x10;
    plVar7[10] = (long)puVar3;
    plVar7[7] = unaff_x22 + 0x98;
    plVar7[8] = (long)FUN_10279b770;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488bdf0,0,0);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
  FUN_10279b494();
  func_0x000107c613f8(&UNK_11054a260,puVar4,0,0);
  puVar4[1] = 1;
  *puVar4 = 0;
  func_0x000107c61654();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(uVar10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010279b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279b034; end: 10279b08f;  */

void FUN_10279b034(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x170) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x168));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279b090;
  }
  else {
    pcVar1 = FUN_10279b2d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10279b090; end: 10279b21b;  */

void FUN_10279b090(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar2 = *(long *)(unaff_x22 + 0xe0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c5edd0(uVar12,uVar10,uVar3);
  (**(code **)(lVar2 + 0x30))(uVar12,1,uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
  if ((int)uVar12 == 1) {
    puVar7 = *(undefined8 **)(unaff_x22 + 0xd0);
    func_0x0001000293e4();
    FUN_10279b494();
    func_0x000107c613f8(&UNK_11054a260,puVar7,0,0);
    *puVar7 = uVar10;
    puVar7[1] = uVar3;
    func_0x000107c61654();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar13);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar2 = *(long *)(unaff_x22 + 0xe0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar13);
    func_0x000107c6142c(uVar3);
    (**(code **)(lVar2 + 0x20))(uVar11,uVar10,uVar6);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010279b218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10279b21c; end: 10279b277;  */

void FUN_10279b21c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010279b274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279b278; end: 10279b2d3;  */

void FUN_10279b278(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x108));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010279b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279b2d4; end: 10279b357;  */

void FUN_10279b2d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010279b354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10279b358; end: 10279b41b;  */

/* WARNING: Possible PIC construction at 0x00010279b3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010279b3b4) */

void FUN_10279b358(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_11054a2f8;
  func_0x000107c613fc(&UNK_11054a2f8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(FUN_10279bc58,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10279b41c; end: 10279b493;  */

/* WARNING: Possible PIC construction at 0x00010279b478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010279b47c) */

void FUN_10279b41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


