/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10176eca0; end: 10176ed07; -[_TtC18GRPCCodegenUtility18CallOptionsBuilder build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176eca0(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_e0 [96];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010176eddc(0);
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc7f80);
  uStack_58 = puVar1[5];
  uStack_60 = puVar1[4];
  uStack_48 = puVar1[7];
  uStack_50 = puVar1[6];
  uStack_38 = puVar1[9];
  uStack_40 = puVar1[8];
  uStack_28 = puVar1[0xb];
  uStack_30 = puVar1[10];
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  uStack_68 = puVar1[3];
  uStack_70 = puVar1[2];
  func_0x000100e19034(&uStack_80,auStack_e0);
  FUN_10176ea94(&uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10176ed08; end: 10176ed67; -[_TtC18GRPCCodegenUtility18CallOptionsBuilder init] */

void FUN_10176ed08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GRPCCodegenUtility.CallOptionsBuilder",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176ed34);
  (*pcVar1)();
}



/* Entry: 10176ed68; end: 10176edbb; -[_TtC18GRPCCodegenUtility18CallOptionsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010176ed94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010176eda4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010176ed98) */
/* WARNING: Removing unreachable block (ram,0x00010176eda8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176ed68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112dc7f80 + 0x10));
  return;
}



/* Entry: 10176edbc; end: 10176ee1f;  */

void FUN_10176edbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e96f8);
  return;
}



/* Entry: 10176ee20; end: 10176f033;  */

undefined * FUN_10176ee20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar4 = *unaff_x20;
  func_0x000107c5fadc(uVar4,unaff_x20[1]);
  puVar2 = puVar1;
  func_0x000107c545b8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  if (*(char *)(unaff_x20 + 3) != '\x01') {
    func_0x000107c57f3c(puVar1);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  func_0x000107c53310(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  lVar5 = unaff_x20[5];
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126b0380;
    func_0x000107c61168();
    func_0x000107c5d8e4();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
  }
  else {
    puVar2 = (undefined *)unaff_x20[4];
    func_0x000107c5fadc(puVar2);
  }
  puVar3 = puVar1;
  func_0x000107c5a2ec(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c59d5c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (unaff_x20[8] != 0) {
    uVar4 = unaff_x20[7];
    func_0x000107c5fadc(uVar4);
    puVar2 = puVar1;
    func_0x000107c57df8(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
  }
  lVar5 = unaff_x20[9];
  if (lVar5 != 0) {
    func_0x000107c61174();
    puVar2 = puVar1;
    func_0x000107c53b60(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c5343c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (unaff_x20[0xb] != 0) {
    uVar4 = unaff_x20[10];
    func_0x000107c5fadc(uVar4);
    puVar2 = puVar1;
    func_0x000107c58fa0(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
  }
  return puVar1;
}



/* Entry: 10176f034; end: 10176f04f;  */

void FUN_10176f034(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10176f050,0,0);
  return;
}



/* Entry: 10176f050; end: 10176f107;  */

void FUN_10176f050(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10176f108;
    func_0x000107c61448(unaff_x22 + 0x10,1);
    FUN_10176f1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x00010176f61c();
  func_0x000107c613f8(&UNK_110406690,lVar1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010176f104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10176f108; end: 10176f177;  */

void FUN_10176f108(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    FUN_10176f65c(lVar2 + 0x50,*(undefined8 *)(lVar2 + 0x78));
    pcVar1 = FUN_10176f178;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x10176f1ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10176f178; end: 10176f1df;  */

void FUN_10176f178(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010176f1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10176f1e0; end: 10176f307;  */

/* WARNING: Removing unreachable block (ram,0x00010176f230) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176f1e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_58;
  long lStack_50;
  
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar6);
  uVar1 = 0;
  func_0x000104580400(0,uVar6,uVar2,param_3);
  uVar2 = uVar1;
  func_0x000107c5ee20();
  func_0x00010006c090(uVar1,uVar6);
  lVar3 = 0;
  func_0x00010176f5fc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112dc8058) = param_1;
  plVar5 = &lStack_58;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c51d94(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 10176f308; end: 10176f30f;  */

undefined8 FUN_10176f308(void)

{
  return 1;
}



/* Entry: 10176f310; end: 10176f3af;  */

void FUN_10176f310(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10176f3b0; end: 10176f3bf;  */

void FUN_10176f3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10176f3c0; end: 10176f3e3;  */

void FUN_10176f3c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10176f3e4; end: 10176f447;  */

void FUN_10176f3e4(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10176f448;
  plVar1[0x10] = param_2;
  plVar1[0x11] = lVar2;
  plVar1[0xf] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10176f050,0,0);
  return;
}



/* Entry: 10176f448; end: 10176f483;  */

void FUN_10176f448(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010176f480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10176f484; end: 10176f48f;  */

void FUN_10176f484(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf3de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x10),PTR_s_closeStream_1125ad128);
  return;
}



/* Entry: 10176f490; end: 10176f50f; -[_TtC18GRPCCodegenUtilityP33_EC5201BA6BEA86FBD68694538907D24E20GRPCSendCallbackImpl onSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176f490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [40];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = *(long *)(param_1 + _DAT_112dc8058);
  uVar1 = 0;
  FUN_10176f674();
  ppuStack_38 = &PTR_DAT_1104065e0;
  auStack_58[0] = param_3;
  uStack_40 = uVar1;
  FUN_10176f65c(auStack_58,auStack_80);
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x28);
  func_0x000107c61174(param_3);
  FUN_10176f65c(auStack_80,uVar1);
  func_0x000107c61450(lVar2);
  return;
}



/* Entry: 10176f510; end: 10176f58b; -[_TtC18GRPCCodegenUtilityP33_EC5201BA6BEA86FBD68694538907D24E20GRPCSendCallbackImpl init] */

void FUN_10176f510(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GRPCCodegenUtility.GRPCSendCallbackImpl",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176f53c);
  (*pcVar1)();
}



/* Entry: 10176f58c; end: 10176f5db;  */

undefined1  [16] FUN_10176f58c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = *unaff_x20;
  func_0x000107c42a50(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10176f5dc; end: 10176f65b;  */

void FUN_10176f5dc(void)

{
  func_0x000107c61168(&PTR_PTR_112dc7ff8);
  return;
}



/* Entry: 10176f65c; end: 10176f673;  */

undefined8 * FUN_10176f65c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10176f674; end: 10176f6b7;  */

void FUN_10176f674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc8090 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e0068;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc8090 = puVar1;
  return;
}



/* Entry: 10176f6b8; end: 10176f7a7;  */

uint FUN_10176f6b8(uint *param_1,int param_2)

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



/* Entry: 10176f7a8; end: 10176f7e7;  */

void FUN_10176f7a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc8098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98892c;
  func_0x000107c61520(&UNK_10d98892c,&UNK_110406690);
  puRam0000000112dc8098 = puVar1;
  return;
}



/* Entry: 10176f7e8; end: 10176f7eb;  */

void FUN_10176f7e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10176f7ec; end: 10176f87f;  */

void FUN_10176f7ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0x13f;
  func_0x000107c5fdb8(0x13f,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  if (uVar3 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x60);
  }
  return;
}



/* Entry: 10176f880; end: 10176fbb3;  */

void FUN_10176f880(uint param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  ulong *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_c0 [8];
  undefined8 *puStack_b8;
  uint uStack_ac;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = *unaff_x20;
  uVar9 = *(ulong *)PTR__swift_isaMask_11034f488;
  lVar11 = *(long *)((uVar9 & uVar8) + 0x50);
  uVar1 = 0x112d393f0;
  uStack_ac = param_1;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar2 = (undefined8 *)0x0;
  lVar7 = lVar11;
  func_0x000107c5fda4();
  lVar12 = puVar2[-1];
  puStack_b8 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_c0 + -extraout_x8;
  lVar10 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar15 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar15 - extraout_x12;
  if (param_4 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar2 = param_4;
    func_0x000107c5bd10();
    if (0 < (long)puVar2) {
      puVar2 = param_4;
      func_0x000107c5bd10();
      puVar3 = param_4;
      func_0x000107c42a50();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x00010176fe50();
      puVar5 = &UNK_110406990;
      func_0x000107c613f8(&UNK_110406990,puVar3,0,0);
      *puVar3 = puVar2;
      puVar3[1] = 0;
      puVar3[2] = puVar4;
      puVar3[3] = lVar7;
      func_0x000107c61654();
      func_0x000107c61170(param_4);
      goto LAB_10176faa4;
    }
    func_0x000107c61170();
    puVar2 = param_4;
  }
  if (param_3 >> 0x3c < 0xf) {
    uStack_70 = 0;
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    func_0x00010006c00c(param_2,param_3);
    func_0x00010458009c(lVar13,param_2,param_3,&puStack_90,0,100,0,lVar11,
                        *(undefined8 *)((uVar9 & uVar8) + 0x58));
    (**(code **)(lVar10 + 0x10))(lVar15,lVar13,lVar11);
    uVar6 = 0;
    func_0x000107c5fdb8(0,lVar11,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c5fdb0(puVar14,lVar15,uVar6);
    (**(code **)(lVar12 + 8))(puVar14,puStack_b8);
    if ((uStack_ac & 1) != 0) {
      puStack_90 = (undefined *)0x0;
      func_0x000107c5fdb4(&puStack_90,uVar6);
    }
    (**(code **)(lVar10 + 8))(lVar13,lVar11);
    return;
  }
  func_0x00010176fe50();
  puVar5 = &UNK_110406990;
  func_0x000107c613f8(&UNK_110406990,puVar2,0,0);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  func_0x000107c61654();
LAB_10176faa4:
  puStack_90 = puVar5;
  func_0x000107c614b0(puVar5);
  uVar6 = 0;
  func_0x000107c5fdb8(0,lVar11,uVar1,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c5fdb4(&puStack_90,uVar6);
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 10176fbb4; end: 10176fc63;  */

/* WARNING: Possible PIC construction at 0x00010176fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010176fc48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010176fc10) */
/* WARNING: Removing unreachable block (ram,0x00010176fc4c) */

void FUN_10176fbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if (param_4 == 0) {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    FUN_10176f880(param_3,0,0xf000000000000000,param_5);
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  else {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_5 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10176fc64; end: 10176fc83;  */

void FUN_10176fc64(void)

{
  return;
}



/* Entry: 10176fc84; end: 10176fcb7;  */

void FUN_10176fc84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10176fcb8; end: 10176fd33;  */

void FUN_10176fcb8(ulong *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60);
  uVar3 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c5fdb8(0,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
                    /* WARNING: Could not recover jumptable at 0x00010176fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + lVar4,lVar2);
  return;
}



/* Entry: 10176fd34; end: 10176fd3f;  */

void FUN_10176fd34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e652698);
  return;
}



/* Entry: 10176fd40; end: 10176fdf3;  */

void FUN_10176fd40(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c614f0();
  lVar4 = *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x60);
  uVar3 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c5fdb8(0,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))((long)unaff_x20 + lVar4,param_1,lVar2);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10176fdf4; end: 10176fe23;  */

void FUN_10176fdf4(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10176fd40(param_1);
  return;
}



/* Entry: 10176fe24; end: 10176fe8f;  */

void FUN_10176fe24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GRPCCodegenUtility.GRPCServerStreamingEventHandler",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10176fe50);
  (*pcVar1)();
}



/* Entry: 10176fe90; end: 10176fe93;  */

void FUN_10176fe90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10176fe94; end: 10176fed3;  */

void FUN_10176fe94(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10d988a08;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x60);
  return;
}



/* Entry: 10176fed4; end: 10176ff57;  */

void FUN_10176fed4(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long extraout_x12;
  code *pcVar1;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(*(long *)(param_3 + -8) + 0x40),param_1,param_1);
  pcVar1 = *(code **)(extraout_x12 + 0x20);
  (*pcVar1)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*pcVar1)(*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28),
            &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  func_0x000107c61450(param_2);
  return;
}



/* Entry: 10176ff58; end: 10176ffab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176ff58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000107c610f8();
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dc8128) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10176ffac; end: 101770247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10176ffac(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  undefined8 uVar9;
  ulong *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar7 = *unaff_x20;
  uVar6 = *(ulong *)PTR__swift_isaMask_11034f488;
  lVar8 = *(long *)((uVar6 & uVar7) + 0x50);
  lVar13 = *(long *)(lVar8 + -8);
  puVar1 = param_1;
  uVar5 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12;
  if (param_3 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar1 = param_3;
    func_0x000107c5bd10();
    if (0 < (long)puVar1) {
      puVar1 = param_3;
      func_0x000107c5bd10();
      puVar2 = param_3;
      func_0x000107c42a50();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x00010176fe50();
      puVar4 = &UNK_110406990;
      func_0x000107c613f8(&UNK_110406990,puVar2,0,0);
      *puVar2 = puVar1;
      puVar2[1] = 0;
      puVar2[2] = puVar3;
      puVar2[3] = uVar5;
      func_0x000107c61654();
      func_0x000107c61170(param_3);
      goto LAB_101770160;
    }
    func_0x000107c61170();
    puVar1 = param_3;
  }
  if (param_2 >> 0x3c < 0xf) {
    uStack_70 = 0;
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    func_0x00010006c00c(param_1,param_2);
    func_0x00010458009c(lVar11,param_1,param_2,&puStack_90,0,100,0,lVar8,
                        *(undefined8 *)((uVar6 & uVar7) + 0x58));
    uVar10 = *(undefined8 *)((long)unaff_x20 + _DAT_112dc8128);
    (**(code **)(lVar13 + 0x10))(lVar12,lVar11,lVar8);
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_10176fed4(lVar12,uVar10,lVar8,uVar9,PTR___ss5ErrorWS_11034ee10);
    (**(code **)(lVar13 + 8))(lVar11,lVar8);
    return;
  }
  func_0x00010176fe50();
  puVar4 = &UNK_110406990;
  func_0x000107c613f8(&UNK_110406990,puVar1,0,0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  func_0x000107c61654();
LAB_101770160:
  uVar9 = *(undefined8 *)((long)unaff_x20 + _DAT_112dc8128);
  lVar8 = 0x112d393f0;
  puStack_90 = puVar4;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar11 = lVar8;
  puVar4 = PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar4,&puStack_90,lVar8);
  func_0x000107c61454(uVar9,lVar11);
  return;
}



/* Entry: 101770248; end: 1017702ef;  */

/* WARNING: Possible PIC construction at 0x00010177029c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017702d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017702a0) */
/* WARNING: Removing unreachable block (ram,0x0001017702d8) */

void FUN_101770248(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    FUN_10176ffac(0,0xf000000000000000,param_4);
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    param_4 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1017702f0; end: 10177030b;  */

void FUN_1017702f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GRPCCodegenUtility.GRPCUnaryEventHandler",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101770378);
  (*pcVar1)();
}



/* Entry: 10177030c; end: 10177033f;  */

void FUN_10177030c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101770340; end: 10177034b;  */

void FUN_101770340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6526f4);
  return;
}



/* Entry: 10177034c; end: 101770377;  */

void FUN_10177034c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GRPCCodegenUtility.GRPCUnaryEventHandler",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101770378);
  (*pcVar1)();
}



/* Entry: 101770378; end: 1017703cb;  */

void FUN_101770378(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101770534();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110406890;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1017703cc; end: 1017703d3;  */

void FUN_1017703cc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101770534();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110406890;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1017703d4; end: 101770403;  */

void FUN_1017703d4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101770404; end: 1017704df;  */

void FUN_101770404(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000107c5fadc(param_2,param_3);
  uVar1 = param_2;
  FUN_10176ee20();
  uVar2 = uStack_58;
  func_0x000107c40a28();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  func_0x000101770ee4();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1104068c8;
  *param_1 = lVar4;
  return;
}



/* Entry: 1017704e0; end: 101770503;  */

void FUN_1017704e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101770504; end: 101770523;  */

void FUN_101770504(void)

{
  FUN_101770404();
  return;
}



/* Entry: 101770524; end: 101770533;  */

undefined1  [16] FUN_101770524(void)

{
  return ZEXT816(0x1104068b0);
}



/* Entry: 101770534; end: 101770553;  */

void FUN_101770534(void)

{
  func_0x000107c61168(&PTR_PTR_112dc81f8);
  return;
}



/* Entry: 101770554; end: 10177058b;  */

void FUN_101770554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10177058c; end: 10177066f;  */

void FUN_10177058c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x88);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101770634;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  plVar1[2] = (long)plVar3;
  *plVar3 = (long)plVar1;
  plVar3[1] = (long)&UNK_104895034;
                    /* WARNING: Could not recover jumptable at 0x000104895030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_1041506d4)(plVar3,uVar2,0,0,0x10177134c,unaff_x22 + 0x10,uVar4);
  return;
}



/* Entry: 101770670; end: 101770db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101770670(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  lVar10 = param_7[2];
  uVar9 = param_7[5];
  uVar7 = param_7[7];
  uVar6 = param_7[0xb];
  uVar3 = 0;
  FUN_101770340(0,param_8,param_9);
  FUN_10176ff58(param_1,uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5ee20(param_5,param_6);
  if (lVar10 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    lVar4 = 0;
    FUN_10176edbc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar5 + _DAT_112dc7f80);
    uVar11 = *param_7;
    puVar1[1] = param_7[1];
    *puVar1 = uVar11;
    puVar1[2] = lVar10;
    uVar11 = param_7[3];
    puVar1[4] = param_7[4];
    puVar1[3] = uVar11;
    puVar1[0xb] = param_7[0xb];
    uVar11 = param_7[9];
    puVar1[10] = param_7[10];
    puVar1[9] = uVar11;
    uVar11 = param_7[7];
    puVar1[8] = param_7[8];
    puVar1[7] = uVar11;
    uVar11 = param_7[5];
    puVar1[6] = param_7[6];
    puVar1[5] = uVar11;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    func_0x000107c61434(lVar10);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar6);
    plVar8 = &lStack_70;
    func_0x000107c61154(plVar8,puVar2);
  }
  func_0x000107c61174(param_1);
  func_0x000107c5d1d4(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(plVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101770db8; end: 101770e2b;  */

void FUN_101770db8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined4 *)
           PTR___sScs12ContinuationV15BufferingPolicyO9unboundedyADyxq___GAFms5ErrorR_r0_lFWC_11034fee8
  ;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  func_0x000107c5fdac(0,param_2,uVar2,PTR___ss5ErrorWS_11034ee10);
                    /* WARNING: Could not recover jumptable at 0x000101770e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x68))(param_1,uVar1,lVar3);
  return;
}



/* Entry: 101770e2c; end: 101770ebf;  */

void FUN_101770e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  iVar3 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar3 != 0) {
    func_0x000107c5fda0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  uVar4 = 0x112d393f0;
  uStack_b0 = param_2;
  uStack_90 = param_4;
  uStack_88 = param_1;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0,param_3);
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  lVar5 = 0;
  func_0x000107c5fdac(0,param_5,uVar4,PTR___ss5ErrorWS_11034ee10);
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)&uStack_b0 - extraout_x8;
  lVar5 = 0;
  func_0x000107c5fdc4(0,param_5,uVar4,puVar1);
  lVar9 = *(long *)(lVar5 + -8);
  lStack_a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar8 - extraout_x8_00;
  lVar6 = 0xff;
  func_0x000107c5fdb8(0xff,param_5,uVar4,puVar1);
  lVar7 = 0;
  func_0x000107c60188(0,lVar6);
  lVar10 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  lVar12 = *(long *)(lVar6 + -8);
  (**(code **)(lVar12 + 0x38))(lVar14,1,1,lVar6);
  (**(code **)(lStack_a8 + 0x10))(lVar8,uStack_90,lStack_98);
  lVar5 = lStack_a0;
  uStack_70 = param_5;
  lStack_68 = lVar14;
  func_0x000107c5fdc8(lVar11,param_5,lVar8,0x101771314,auStack_80,param_5);
  (**(code **)(lVar9 + 0x10))(uStack_88,lVar11,lVar5);
  (**(code **)(lVar10 + 0x10))(lVar13,lVar14,lVar7);
  lVar8 = lVar13;
  (**(code **)(lVar12 + 0x30))(lVar13,1,lVar6);
  if ((int)lVar8 != 1) {
    (**(code **)(lVar9 + 8))(lVar11,lVar5);
    (**(code **)(lVar12 + 0x20))(uStack_b0,lVar13,lVar6);
    (**(code **)(lVar10 + 8))(lVar14,lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101771260);
  (*pcVar2)();
}



/* Entry: 101770ec0; end: 101770f03;  */

void FUN_101770ec0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101770f04; end: 101770faf;  */

void FUN_101770f04(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101770fb0;
  plVar1[0x13] = param_8;
  plVar1[0x14] = lVar2;
  plVar1[0x11] = param_6;
  plVar1[0x12] = param_7;
  plVar1[0xf] = param_4;
  plVar1[0x10] = param_5;
  plVar1[0xd] = param_2;
  plVar1[0xe] = param_3;
  plVar1[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10177058c,0,0);
  return;
}



/* Entry: 101770fb0; end: 101770feb;  */

void FUN_101770fb0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101770fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101770fec; end: 10177102b;  */

void FUN_101770fec(void)

{
  func_0x000101770824();
  return;
}



/* Entry: 10177102c; end: 10177125f;  */

void FUN_10177102c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = 0x112d393f0;
  uStack_b0 = param_2;
  uStack_90 = param_4;
  uStack_88 = param_1;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  lVar4 = 0;
  func_0x000107c5fdac(0,param_5,uVar3,PTR___ss5ErrorWS_11034ee10);
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)&uStack_b0 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5fdc4(0,param_5,uVar3,puVar1);
  lVar8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_00;
  lVar5 = 0xff;
  func_0x000107c5fdb8(0xff,param_5,uVar3,puVar1);
  lVar6 = 0;
  func_0x000107c60188(0,lVar5);
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12;
  lVar11 = *(long *)(lVar5 + -8);
  (**(code **)(lVar11 + 0x38))(lVar13,1,1,lVar5);
  (**(code **)(lStack_a8 + 0x10))(lVar7,uStack_90,lStack_98);
  lVar4 = lStack_a0;
  uStack_70 = param_5;
  lStack_68 = lVar13;
  func_0x000107c5fdc8(lVar10,param_5,lVar7,0x101771314,auStack_80,param_5);
  (**(code **)(lVar8 + 0x10))(uStack_88,lVar10,lVar4);
  (**(code **)(lVar9 + 0x10))(lVar12,lVar13,lVar6);
  lVar7 = lVar12;
  (**(code **)(lVar11 + 0x30))(lVar12,1,lVar5);
  if ((int)lVar7 != 1) {
    (**(code **)(lVar8 + 8))(lVar10,lVar4);
    (**(code **)(lVar11 + 0x20))(uStack_b0,lVar12,lVar5);
    (**(code **)(lVar9 + 8))(lVar13,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101771260);
  (*pcVar2)();
}



/* Entry: 101771260; end: 101771307;  */

void FUN_101771260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0xff;
  func_0x000107c5fdb8(0xff,param_3,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_2,lVar3);
  lVar3 = *(long *)(lVar2 + -8);
  (**(code **)(lVar3 + 0x10))(param_2,param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101771304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_2,0,1,lVar2);
  return;
}



/* Entry: 101771308; end: 10177131b;  */

void FUN_101771308(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf3de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x10),PTR_s_closeStream_1125ad128);
  return;
}



/* Entry: 10177131c; end: 10177137b;  */

void FUN_10177131c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101770914(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10177137c; end: 1017713a7;  */

long FUN_10177137c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1017713a8; end: 1017713af;  */

void FUN_1017713a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1017713b0; end: 10177147b;  */

undefined8 * FUN_1017713b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10177147c; end: 101771573;  */

int FUN_10177147c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 101771574; end: 101771607;  */

void FUN_101771574(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010020a4e0();
  func_0x000107c613fc();
  FUN_101771668(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101771608; end: 101771613;  */

void FUN_101771608(undefined8 *param_1)

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
  func_0x00010020a4e0();
  func_0x000107c613fc();
  FUN_101771668(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101771614; end: 101771667;  */

undefined8 FUN_101771614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101771668(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101771668; end: 101771743;  */

void FUN_101771668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101776fcc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101776bd8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000101776c0c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101771744; end: 10177177f;  */

void FUN_101771744(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101771780; end: 1017717d3;  */

void FUN_101771780(undefined8 *param_1)

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



/* Entry: 1017717d4; end: 10177181f;  */

void FUN_1017717d4(undefined8 *param_1)

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



/* Entry: 101771820; end: 101771873;  */

void FUN_101771820(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101771874; end: 101771a1b;  */

void FUN_101771874(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  func_0x000100233f38();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_10177ade8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x00010177a7e4();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10177a82c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 101771a1c; end: 101771a2b;  */

void FUN_101771a1c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  func_0x000100233f38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_10177ade8(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x00010177a7e4();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10177a82c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 101771a2c; end: 101771b77;  */

long FUN_101771a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_10177ade8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010177a7e4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10177a82c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101771b78; end: 101771bc3;  */

void FUN_101771b78(void)

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



/* Entry: 101771bc4; end: 101771c17;  */

void FUN_101771bc4(undefined8 *param_1)

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



/* Entry: 101771c18; end: 101771c63;  */

void FUN_101771c18(undefined8 *param_1)

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



/* Entry: 101771c64; end: 101771cb7;  */

void FUN_101771c64(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101771cb8; end: 10177207f;  */

void FUN_101771cb8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
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
  func_0x000100083b20(&uStack_90);
  func_0x0001002398ac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a7b90;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 101772080; end: 10177208f;  */

void FUN_101772080(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x0001002398ac();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a7b90;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 101772090; end: 1017723ef;  */

long FUN_101772090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  puVar1 = PTR_PTR_1126a7b90;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
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
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 1017723f0; end: 10177245b;  */

void FUN_1017723f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10177245c; end: 1017724af;  */

void FUN_10177245c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1017724b0; end: 1017724b7;  */

void FUN_1017724b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1017724b8; end: 101772507;  */

undefined8 FUN_1017724b8(void)

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



/* Entry: 101772508; end: 10177254b;  */

undefined1  [16] FUN_101772508(void)

{
  return ZEXT816(0x110406c30);
}



/* Entry: 10177254c; end: 101772573;  */

void FUN_10177254c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101772574; end: 10177257b;  */

undefined8 FUN_101772574(void)

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



/* Entry: 10177257c; end: 101772833;  */

void FUN_10177257c(long *param_1,long param_2)

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
  func_0x0001001e056c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a7b98;
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
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
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



/* Entry: 101772834; end: 10177283f;  */

void FUN_101772834(long *param_1)

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
  func_0x0001001e056c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a7b98;
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
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
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



/* Entry: 101772840; end: 1017728a3;  */

undefined8
FUN_101772840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1017728a4(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 1017728a4; end: 101772b0b;  */

void FUN_1017728a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a7b98;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
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


