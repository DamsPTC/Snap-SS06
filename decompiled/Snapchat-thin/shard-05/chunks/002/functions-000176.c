/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c2f56c; end: 103c2f593;  */

void FUN_103c2f56c(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  func_0x000103c2f99c();
  func_0x000103c2fb6c();
                    /* WARNING: Could not recover jumptable at 0x000103c2fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c2f594; end: 103c2f5f7;  */

void FUN_103c2f594(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2f5f8;
                    /* WARNING: Could not recover jumptable at 0x000103c2f5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 103c2f5f8; end: 103c2f61f;  */

void FUN_103c2f5f8(void)

{
  long unaff_x22;
  
  func_0x000103c2f99c();
                    /* WARNING: Could not recover jumptable at 0x000103c2fb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c2f620; end: 103c2f69f;  */

long FUN_103c2f620(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103c2f6a0; end: 103c2f6cf;  */

void FUN_103c2f6a0(void)

{
  long unaff_x20;
  
  func_0x000103c2fb4c();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c2f6d0; end: 103c2f70f;  */

void FUN_103c2f6d0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 in_x3;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x25;
  
  func_0x000103c2fa08();
  func_0x000103c2fa84();
  func_0x000103c2f9b0();
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x25;
  uVar1 = 0;
  func_0x000103c300ec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2e5ec;
  plVar2[4] = unaff_x20;
  plVar3 = plVar2;
  func_0x000103c2f9e8();
  uVar4 = *(long *)(plVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[5] = uVar4;
  func_0x000103c2fb64();
  uVar5 = uVar4;
  func_0x000103c2fa6c();
  plVar2[6] = uVar5;
  FUN_103c2e678();
  plVar2[7] = uVar5;
  func_0x000107c5fca8();
  plVar2[8] = uVar4;
  plVar2[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar4,uVar5);
  return;
}



/* Entry: 103c2f710; end: 103c2f73b;  */

void FUN_103c2f710(void)

{
  long unaff_x22;
  
  func_0x000103c2f99c();
                    /* WARNING: Could not recover jumptable at 0x000103c2f738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c2f73c; end: 103c2f79b;  */

void FUN_103c2f73c(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int *in_x3;
  long unaff_x22;
  
  uVar3 = 0x40;
  func_0x000107c615b8();
  func_0x000103c2fa84();
  func_0x000103c2f9b0();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  uVar3 = 0;
  func_0x000103c300ec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  iVar1 = *in_x3;
  plVar2 = (long *)(ulong)(uint)in_x3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2f3b8;
                    /* WARNING: Could not recover jumptable at 0x000103c2f3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))();
  return;
}



/* Entry: 103c2f79c; end: 103c2f7a7;  */

void FUN_103c2f79c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103c2f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103c2f7a8; end: 103c2f7db;  */

void FUN_103c2f7a8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000103c2fa3c();
  func_0x000103c2fa84();
  func_0x000103c2f97c();
                    /* WARNING: Could not recover jumptable at 0x000103c2f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c2f7dc; end: 103c2f80f;  */

void FUN_103c2f7dc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000103c2fa3c();
  func_0x000103c2fa84();
  func_0x000103c2f97c();
                    /* WARNING: Could not recover jumptable at 0x000103c2f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c2f810; end: 103c2f833;  */

void FUN_103c2f810(void)

{
  long unaff_x22;
  
  func_0x000103c2f99c();
                    /* WARNING: Could not recover jumptable at 0x000103c2fb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c2f834; end: 103c2f867;  */

void FUN_103c2f834(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000103c2fa54();
  func_0x000103c2fa84();
  func_0x000103c2f97c();
                    /* WARNING: Could not recover jumptable at 0x000103c2f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c2f868; end: 103c2f89b;  */

void FUN_103c2f868(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000103c2fa54();
  func_0x000103c2fa84();
  func_0x000103c2f97c();
                    /* WARNING: Could not recover jumptable at 0x000103c2f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c2f89c; end: 103c2f90b;  */

void FUN_103c2f89c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106ed1d0;
  if (lRam0000000112ff9c18 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ff9c18 = param_1;
  }
  return;
}



/* Entry: 103c2f90c; end: 103c2f94f;  */

void FUN_103c2f90c(long param_1,long *param_2,long param_3)

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



/* Entry: 103c2f950; end: 103c2fb97;  */

void FUN_103c2f950(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103c2fb98; end: 103c2fc07;  */

void FUN_103c2fb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f8();
  FUN_103c2fc08(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 103c2fc08; end: 103c2fe67;  */

undefined1 *
FUN_103c2fc08(undefined1 *param_1,long param_2,undefined1 *param_3,long param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined1 *)0x0;
  FUN_103c332cc();
  func_0x000107c613fc();
  puVar2 = puVar1;
  FUN_103c33294();
  if (param_1 == (undefined1 *)0x0) {
    func_0x000103c2ff9c();
    func_0x000103c2ff74();
    func_0x000103c2ffcc();
    func_0x000103c2ffb0();
    if (unaff_x21 != 0) {
      func_0x000103c2ff94();
      func_0x000103c2ffc4();
      goto LAB_103c2fd9c;
    }
    func_0x000103c2ffc4();
  }
  else {
    puVar1 = param_1;
    func_0x000107c614f0(param_1);
    lVar5 = *(long *)(param_2 + 0x10);
    pcVar3 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(param_1);
    (*pcVar3)(puVar2,puVar1,lVar5);
    puVar1 = param_1;
    if (unaff_x21 != 0) {
      func_0x000103c2ff94();
      func_0x000103c2ffd8();
      goto LAB_103c2fd9c;
    }
    func_0x000107c615e8(param_1);
  }
  if (param_3 == (undefined1 *)0x0) {
    func_0x000103c2ff9c();
    func_0x000103c2ff74();
    func_0x000103c2ffcc();
    func_0x000103c2ffb0();
    if (unaff_x21 == 0) {
      func_0x000103c2ffc4();
LAB_103c2fe08:
      puVar1 = puVar2 + 0x10;
      func_0x000107c61428(puVar1,auStack_78,0,0);
      uVar4 = *(undefined8 *)(puVar2 + 0x10);
      func_0x000103c2ff54();
      puVar2 = auStack_88;
      puStack_80 = puVar1;
      func_0x000107c61154(puVar2,PTR_s_initWithOwner_cppMarshaller_runt_1125ea490,0,uVar4,param_5);
      func_0x000103c2ff94();
      func_0x000107c615e8(param_3);
      func_0x000107c615e8(param_5);
      func_0x000107c615e8(param_1);
      return puVar2;
    }
    func_0x000103c2ff94();
    func_0x000103c2ffc4();
    param_3 = param_1;
  }
  else {
    puVar1 = param_3;
    func_0x000107c614f0(param_3);
    lVar5 = *(long *)(param_4 + 0x10);
    pcVar3 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(param_3);
    (*pcVar3)(puVar2,puVar1,lVar5);
    if (unaff_x21 == 0) {
      func_0x000107c615e8(param_3);
      goto LAB_103c2fe08;
    }
    func_0x000103c2ff94();
    func_0x000103c2ffd8();
    puVar1 = param_3;
    param_3 = param_1;
  }
LAB_103c2fd9c:
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_3);
  func_0x000103c2ff54();
  func_0x000107c61464(unaff_x20,param_3,8,7);
  return puVar1;
}



/* Entry: 103c2fe68; end: 103c2fef3; -[_TtC14ValdiCoreSwift18SwiftComponentBase initWithOwner:viewModel:componentContext:runtime:] */

void FUN_103c2fe68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  lVar1 = param_5;
  if (param_4 == 0) {
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_5);
    func_0x000107c615f0(param_6);
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_5);
    func_0x000107c615f0(param_6);
    func_0x000107c615f0(param_4);
    func_0x000107c60234(auStack_50);
    func_0x000107c615e8(param_4);
    unaff_x20 = param_4;
  }
  if (param_5 != 0) {
    func_0x000107c60234(auStack_70,param_5);
    func_0x000107c615e8(param_5);
  }
  func_0x000107c27ce4();
  pcStack_78 = FUN_103c2fef4;
  lStack_90 = unaff_x20;
  lStack_88 = param_5;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0();
  func_0x000107c27ce8();
  uStack_98 = 0x103c2ff18;
  ppuStack_a0 = &puStack_80;
  func_0x000107c27cec();
  uStack_a8 = 0x103c2ff24;
  puStack_b0 = (undefined1 *)&ppuStack_a0;
  func_0x000103c2ff54();
  lStack_c0 = unaff_x20;
  lStack_b8 = lVar1;
  func_0x000107c61154(&lStack_c0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c2fef4; end: 103c2ff17; -[_TtC14ValdiCoreSwift18SwiftComponentBase initWithOwner:cppMarshaller:runtime:] */

void FUN_103c2fef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0();
  func_0x000107c27ce8();
  func_0x000107c27cec();
  func_0x000103c2ff54();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c2ff18; end: 103c2ff73; -[_TtC14ValdiCoreSwift18SwiftComponentBase initWithoutValdiContext] */

void FUN_103c2ff18(void)

{
  func_0x000107c27cec();
  func_0x000103c2ff54();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c2ff74; end: 103c2ffeb;  */

void FUN_103c2ff74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC_11034d6c0)
            (PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80,param_1,
             PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 103c2ffec; end: 103c30003;  */

uint FUN_103c2ffec(uint param_1)

{
  FUN_103c30004();
  return param_1 & 1;
}



/* Entry: 103c30004; end: 103c30077;  */

uint FUN_103c30004(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_103c332cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  func_0x000107c6157c(param_1);
  lVar2 = lVar1;
  FUN_103c33168(lVar1,1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(lVar1);
  return (uint)lVar2 & 1;
}



/* Entry: 103c30078; end: 103c30087;  */

void FUN_103c30078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103c30088; end: 103c3010b;  */

undefined8 FUN_103c30088(void)

{
  if (lRam0000000112ff9c50 != -1) {
    func_0x000107c61568(0x112ff9c50,0x103c300c4);
  }
  return 0x11380d130;
}



/* Entry: 103c3010c; end: 103c301cb;  */

void FUN_103c3010c(void)

{
  undefined8 uVar1;
  
  func_0x000103c30204(0);
  func_0x000107c613fc();
  uVar1 = 0xd000000000000014;
  FUN_103c302a0(0xd000000000000014,0x800000010f1b0620);
  uRam0000000112ff9c60 = uVar1;
  return;
}



/* Entry: 103c301cc; end: 103c30223;  */

void FUN_103c301cc(void)

{
  FUN_103c307cc(0x112ff9c68,0xff,0x103c30204,&UNK_10dc688cc);
  return;
}



/* Entry: 103c30224; end: 103c30233;  */

void FUN_103c30224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c30234; end: 103c3028b;  */

void FUN_103c30234(void)

{
  func_0x000103c30160();
  return;
}



/* Entry: 103c3028c; end: 103c3029f;  */

void FUN_103c3028c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss11GlobalActorPsE21sharedUnownedExecutorScevgZ_11034ff58)();
  return;
}



/* Entry: 103c302a0; end: 103c30687;  */

long FUN_103c302a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_80 = param_1;
  uStack_78 = param_2;
  func_0x000107c5ffd8();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  func_0x0001000295c4();
  uStack_88 = uVar5;
  func_0x000107c5f808(lVar4);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4ac68;
  FUN_103c307cc(0x112d4ac68,0xff,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar7 = 0x112d4ac78;
  func_0x000103c3080c(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar9,&puStack_68,uVar6,uVar7,lVar3,uVar5);
  (**(code **)(lVar10 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar2);
  func_0x000107c5ffec(uStack_80,uStack_78,lVar4,lVar9,puVar8,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_80;
  return unaff_x20;
}



/* Entry: 103c30688; end: 103c3069b;  */

void FUN_103c30688(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c5fce4();
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0x112ff9c68;
  FUN_103c307cc(0x112ff9c68,0xff,0x103c30204,&UNK_10dc688cc);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar5 = &UNK_1106ed2a0;
  func_0x000107c613fc(&UNK_1106ed2a0,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(long *)(puVar5 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  pcStack_70 = FUN_103c307a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1106ed2b8;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4af88;
  FUN_103c307cc(0x112d4af88,0xff,puVar1,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x000103c3080c(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar9,&puStack_98,uVar7,uVar8,lVar2,uVar4);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar2);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 103c3069c; end: 103c306a7;  */

bool FUN_103c3069c(long param_1)

{
  long unaff_x20;
  
  return unaff_x20 == param_1;
}



/* Entry: 103c306a8; end: 103c306cb;  */

void FUN_103c306a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c306cc; end: 103c30723;  */

void FUN_103c306cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = 0x112ff9db0;
  FUN_103c307cc(0x112ff9db0,0xff,0x103c30204,&UNK_10dc68894);
  func_0x000107c5fcc0(param_1,uVar2,uVar1);
  return;
}



/* Entry: 103c30724; end: 103c3072b;  */

void FUN_103c30724(void)

{
  FUN_103c307cc(0x112ff9c68,0xff,0x103c30204,&UNK_10dc688cc);
  return;
}



/* Entry: 103c3072c; end: 103c307a3;  */

void FUN_103c3072c(void)

{
  undefined8 *unaff_x20;
  
  func_0x000107c5fd78(*unaff_x20);
  return;
}



/* Entry: 103c307a4; end: 103c307cb;  */

void FUN_103c307a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc03c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_job_run_1103500b0)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103c307cc; end: 103c3084f;  */

void FUN_103c307cc(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  if (*param_1 == 0) {
    (*param_3)(param_2);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103c30850; end: 103c30863;  */

void FUN_103c30850(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0x112ff9c68;
  FUN_103c307cc(0x112ff9c68,0xff,0x103c30204,&UNK_10dc688cc);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar5 = &UNK_1106ed2a0;
  func_0x000107c613fc(&UNK_1106ed2a0,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(long *)(puVar5 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  pcStack_70 = FUN_103c307a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1106ed2b8;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4af88;
  FUN_103c307cc(0x112d4af88,0xff,puVar1,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x000103c3080c(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar9,&puStack_98,uVar7,uVar8,lVar2,uVar4);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar2);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 103c30864; end: 103c308e7;  */

undefined8 FUN_103c30864(void)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 0;
  FUN_103c332cc(0);
  func_0x000107c61534();
  FUN_103c33294();
  FUN_103c308e8(&uStack_38);
  func_0x000107c61574(uVar1);
  return uStack_38;
}



/* Entry: 103c308e8; end: 103c30a63;  */

void FUN_103c308e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  undefined1 auStack_78 [24];
  
  if (lRam0000000112ffa050 != -1) {
    func_0x000107c61568(0x112ffa050,FUN_103c31fa0);
  }
  pcVar3 = *(code **)(param_5 + 8);
  lVar2 = param_5;
  (*pcVar3)(param_4,param_5);
  FUN_103c32964();
  func_0x000107c6142c(lVar2);
  uVar1 = param_4;
  lVar2 = param_5;
  (**(code **)(param_5 + 0x10))(param_4,param_5);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar2);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  func_0x000107c4f6c4();
  func_0x000107c61170(uVar1);
  FUN_103c333a8();
  if (unaff_x21 == 0) {
    (*pcVar3)(param_4,param_5);
    func_0x000107c6157c(param_2);
    FUN_103c376a0(param_3,0,param_4,param_5,param_2,param_2);
    func_0x000107c6142c(param_5);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103c30a64; end: 103c30b3b;  */

undefined1  [16] FUN_103c30a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1106ed390;
  func_0x000107c613fc(&UNK_1106ed390,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_103c30b3c;
  return auVar2;
}



/* Entry: 103c30b3c; end: 103c30b43;  */

/* WARNING: Removing unreachable block (ram,0x000103c30ae8) */

undefined8 FUN_103c30b3c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return 1;
}



/* Entry: 103c30b44; end: 103c30bcf;  */

undefined8 FUN_103c30b44(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000103c30b88(param_1,param_2);
  return unaff_x20;
}



/* Entry: 103c30bd0; end: 103c30bdf;  */

void FUN_103c30bd0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103c30be0; end: 103c30c2f;  */

void FUN_103c30be0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar2 = *unaff_x20;
  FUN_103c30bd0(unaff_x20[2],unaff_x20[3]);
  lVar3 = *(long *)(*unaff_x20 + 0x60);
  lVar1 = 0;
  func_0x000107c60188(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar3,lVar1);
  return;
}



/* Entry: 103c30c30; end: 103c30c53;  */

void FUN_103c30c30(void)

{
  FUN_103c30be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c30c54; end: 103c30c57;  */

void FUN_103c30c54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 103c30c58; end: 103c30cd3;  */

void FUN_103c30c58(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dc68968;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c60188();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,2,&puStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 103c30cd4; end: 103c30ceb;  */

void FUN_103c30cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7baf50);
  return;
}



/* Entry: 103c30cec; end: 103c30d4f;  */

undefined8 FUN_103c30cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_1;
  FUN_103c36ea8(param_2,FUN_103c30d50,auStack_50,param_3);
  func_0x000107c61574(param_1);
  return param_2;
}



/* Entry: 103c30d50; end: 103c30d6f;  */

void FUN_103c30d50(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c348f4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c30d70; end: 103c30d9b;  */

void FUN_103c30d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  
  FUN_103c30cec(param_2,param_3,*(undefined8 *)(param_4 + 0x10));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103c30d9c; end: 103c30f07;  */

void FUN_103c30d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_90 [16];
  code *apcStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar5 = PTR___ss12CaseIterableTL_11034e4e0;
  lVar1 = 0;
  func_0x000107c614b8(0,param_3,param_2,PTR___ss12CaseIterableTL_11034e4e0,
                      PTR___s8AllCasess12CaseIterablePTl_11034d640);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60304(auStack_90 + -extraout_x8,param_2,param_3);
  uVar2 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x000107c614b8(0,param_4,param_2,PTR___sSYTL_11034dbe8,PTR___s8RawValueSYTl_11034d650);
  func_0x000107c614b4(param_3,param_2,lVar1,puVar5,PTR___ss12CaseIterableP8AllCasesAB_SlTn_11034e4d0
                     );
  pcVar3 = FUN_103c30f08;
  func_0x0001000ca88c(FUN_103c30f08,apcStack_80,lVar1,uVar2,PTR___ss5NeverON_11034ee88,param_3,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  (**(code **)(lVar6 + 8))(auStack_90 + -extraout_x8,lVar1);
  uVar4 = 0;
  apcStack_80[0] = pcVar3;
  func_0x000107c5fc80(0,uVar2);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar4);
  func_0x000107c5fc90(apcStack_80,uVar2,uVar4,puVar5);
  return;
}



/* Entry: 103c30f08; end: 103c30f3b;  */

void FUN_103c30f08(void)

{
  long unaff_x20;
  
  func_0x000107c5fc24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103c30f3c; end: 103c3106f;  */

undefined1  [16] FUN_103c30f3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  FUN_103c31ef8();
  if (lVar2 != 0) {
    func_0x000103c31f1c(lVar1,param_1 + 0x20);
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 103c31070; end: 103c3109f;  */

void FUN_103c31070(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000103c31f24(unaff_x20 + 0x40,auStack_28,0);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103c310a0; end: 103c310df;  */

void FUN_103c310a0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000103c31f24(unaff_x20 + 0x40,auStack_38,1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103c310e0; end: 103c3110b;  */

undefined1  [16] FUN_103c310e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000103c31f24(unaff_x20 + 0x40,param_1,0x21);
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = FUN_103c3110c;
  return auVar1;
}



/* Entry: 103c3110c; end: 103c3110f;  */

void FUN_103c3110c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103c31110; end: 103c311d7;  */

undefined8 FUN_103c31110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000103c31164(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 103c311d8; end: 103c3125b;  */

void FUN_103c311d8(void)

{
  long unaff_x20;
  
  FUN_103c31604();
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103c3125c; end: 103c31603;  */

undefined * FUN_103c3125c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined *apuStack_78 [3];
  
  uVar18 = *(ulong *)(unaff_x20 + 0x10);
  uVar5 = uVar18;
  func_0x000103c31d40();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(uVar18);
    func_0x000103c32ac0(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103c31604);
      (*pcVar4)();
    }
    uVar16 = 0;
    do {
      puVar14 = apuStack_78[0];
      if ((uVar18 & 0xc000000000000001) == 0) {
        uVar13 = *(ulong *)(uVar18 + uVar16 * 8 + 0x20);
        func_0x000107c6157c(uVar13);
      }
      else {
        uVar13 = uVar16;
        FUN_103c31d64(uVar16,uVar18);
      }
      lVar17 = *(long *)(uVar13 + 0x18);
      if (lVar17 == 0) {
        lVar12 = 0;
      }
      else {
        lVar6 = *(long *)(uVar13 + 0x10);
        func_0x000107c5fb28(lVar6,lVar17);
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar12 = lVar17;
        func_0x000107c61434();
        FUN_103c31ef8();
        if (lVar10 != 0) {
          func_0x000103c31f1c(lVar12,lVar6 + 0x20);
        }
        func_0x000107c61574(lVar6);
        func_0x000107c6142c(lVar17);
      }
      lVar17 = *(long *)(uVar13 + 0x28);
      if (lVar17 == 0) {
        func_0x000103c31f60();
        lVar6 = 0;
      }
      else {
        lVar10 = *(long *)(uVar13 + 0x20);
        func_0x000107c5fb28(lVar10,lVar17);
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar6 = lVar17;
        func_0x000107c61434();
        FUN_103c31ef8();
        if (lVar11 != 0) {
          func_0x000103c31f1c(lVar6,lVar10 + 0x20);
        }
        func_0x000107c61574(lVar10);
        func_0x000103c31f60();
        func_0x000107c6142c(lVar17);
      }
      uVar13 = *(ulong *)(puVar14 + 0x10);
      apuStack_78[0] = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar13) {
        func_0x000103c31f68();
        func_0x000103c32ac0();
      }
      puVar14 = apuStack_78[0];
      uVar16 = uVar16 + 1;
      *(ulong *)(apuStack_78[0] + 0x10) = uVar13 + 1;
      *(long *)(apuStack_78[0] + uVar13 * 0x10 + 0x20) = lVar12;
      *(long *)(apuStack_78[0] + uVar13 * 0x10 + 0x28) = lVar6;
    } while (uVar5 != uVar16);
    func_0x000107c6142c(uVar18);
  }
  puVar7 = puVar14;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    func_0x000103c31f48(0,*(long *)(puVar14 + 0x10) + 1);
    puVar14 = puVar7;
  }
  uVar5 = *(ulong *)(puVar14 + 0x10);
  if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar5) {
    func_0x000103c31f68();
    func_0x000103c31f48();
    puVar14 = puVar7;
  }
  *(ulong *)(puVar14 + 0x10) = uVar5 + 1;
  *(undefined8 *)(puVar14 + uVar5 * 0x10 + 0x20) = 0;
  *(undefined8 *)(puVar14 + uVar5 * 0x10 + 0x28) = 0;
  func_0x000103c31f24(unaff_x20 + 0x40,apuStack_78,0);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = *(long *)(unaff_x20 + 0x40);
  lVar17 = *(long *)(lVar12 + 0x10);
  if (lVar17 != 0) {
    func_0x000107c61434(lVar12);
    func_0x000103c32a9c(0,lVar17,0);
    puVar15 = (undefined8 *)(lVar12 + 0x38);
    do {
      lVar6 = puVar15[-3];
      uVar2 = puVar15[-2];
      uVar1 = puVar15[-1];
      uVar3 = *puVar15;
      func_0x000107c5fb28(lVar6,uVar2);
      lVar10 = *(long *)(lVar6 + 0x10);
      func_0x000107c61434(uVar2);
      uVar8 = uVar1;
      func_0x000100b64c10(uVar1,uVar3);
      FUN_103c31ef8();
      if (lVar10 != 0) {
        func_0x000103c31f1c(uVar8,lVar6 + 0x20);
      }
      func_0x000107c6142c(uVar2);
      func_0x00010058d43c(uVar1,uVar3);
      func_0x000107c61574(lVar6);
      uVar5 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        func_0x000103c31f68();
        func_0x000103c32a9c();
      }
      puVar15 = puVar15 + 4;
      *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar7 + uVar5 * 8 + 0x20) = uVar8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    func_0x000107c6142c(lVar12);
  }
  puVar9 = puVar7;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    func_0x000103c31f3c(0,*(long *)(puVar7 + 0x10) + 1);
    puVar7 = puVar9;
  }
  uVar5 = *(ulong *)(puVar7 + 0x10);
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
    func_0x000103c31f68();
    func_0x000103c31f3c();
    puVar7 = puVar9;
  }
  *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
  *(undefined8 *)(puVar7 + uVar5 * 8 + 0x20) = 0;
  puVar9 = puVar14;
  func_0x000103c30fc4(puVar14);
  func_0x000103c30f7c(puVar7);
  func_0x000107c6142c(puVar14);
  func_0x000107c6142c(puVar7);
  FUN_103c316a4();
  return puVar9;
}



/* Entry: 103c31604; end: 103c316a3;  */

void FUN_103c31604(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(unaff_x20 + 0x38) != '\x01') {
    plVar1 = *(long **)(unaff_x20 + 0x20);
    plVar2 = *(long **)(unaff_x20 + 0x28);
    plVar3 = plVar1;
    if (plVar1 != (long *)0x0) {
      for (; *plVar3 != 0; plVar3 = plVar3 + 2) {
        lVar4 = plVar3[1];
        func_0x000103c31f10();
        if (lVar4 != 0) {
          func_0x000103c31f10(lVar4);
        }
      }
    }
    plVar3 = plVar2;
    if (plVar2 != (long *)0x0) {
      while (*plVar3 != 0) {
        func_0x000103c31f10();
        plVar3 = plVar3 + 1;
      }
    }
    if (plVar1 != (long *)0x0) {
      func_0x000103c31f10(plVar1);
    }
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_slowDealloc_11034f500)(plVar2,0xffffffffffffffff,0xffffffffffffffff);
      return;
    }
  }
  return;
}



/* Entry: 103c316a4; end: 103c316ab;  */

undefined1 FUN_103c316a4(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x18);
}



/* Entry: 103c316ac; end: 103c3170f;  */

undefined8
FUN_103c316ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103c31710(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 103c31710; end: 103c317bb;  */

void FUN_103c31710(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(long *)(unaff_x20 + 0x28) = param_4;
  func_0x000107c61434(param_4);
  if (param_2 == 0) {
    if (param_4 == 0) {
      return;
    }
  }
  else if (param_4 == 0) goto LAB_103c31770;
  func_0x000107c6142c(param_4);
  if (param_2 != 0) {
    return;
  }
LAB_103c31770:
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000027,0x800000010f1b0680,
                      "ValdiCoreSwift/ValdiMarshallableObjectDescriptor.swift",0x36,2,0x89,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c317bc);
  (*pcVar1)();
}



/* Entry: 103c317bc; end: 103c317ff;  */

void FUN_103c317bc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103c31800; end: 103c3180f;  */

bool FUN_103c31800(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 103c31810; end: 103c31877;  */

void FUN_103c31810(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c60690(param_2);
  return;
}



/* Entry: 103c31878; end: 103c31893;  */

bool FUN_103c31878(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c31894; end: 103c318d3;  */

void FUN_103c31894(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  FUN_103c31810(auStack_68,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c318d4; end: 103c318d7;  */

void FUN_103c318d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68a9c;
  func_0x000107c61520(&UNK_10dc68a9c,&UNK_1106ed5a8);
  puRam0000000112ff9e38 = puVar1;
  return;
}



/* Entry: 103c318d8; end: 103c31917;  */

void FUN_103c318d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68a9c;
  func_0x000107c61520(&UNK_10dc68a9c,&UNK_1106ed5a8);
  puRam0000000112ff9e38 = puVar1;
  return;
}



/* Entry: 103c31918; end: 103c3197f;  */

long FUN_103c31918(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c31980; end: 103c31b07;  */

undefined8 * FUN_103c31980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar2 = param_2[2];
  func_0x000107c61434();
  if (lVar2 == 0) {
    lVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[2] = lVar2;
    param_1[3] = uVar1;
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c31b08; end: 103c31b97;  */

int FUN_103c31b08(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Entry: 103c31b98; end: 103c31bd7;  */

void FUN_103c31b98(void)

{
  func_0x000107c61168(&PTR_PTR_112ff9e80);
  return;
}



/* Entry: 103c31bd8; end: 103c31d63;  */

int FUN_103c31bd8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_103c31c58;
  }
  if (param_2 < 0xfd) {
LAB_103c31c4c:
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
joined_r0x000103c31c30:
      if (uVar1 == 0) goto LAB_103c31c4c;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000103c31c30;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c31c4c;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 4;
  }
LAB_103c31c58:
  return iVar2 + 1;
}



/* Entry: 103c31d64; end: 103c31ef7;  */

ulong FUN_103c31d64(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c31e2c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c31e30);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103c31bb8();
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000103c31bb8();
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000026,0x800000010dc68b70);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar5 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c31ef8);
  (*pcVar2)();
}



/* Entry: 103c31ef8; end: 103c31f73;  */

void FUN_103c31ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc046c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_slowAlloc_11034f4f8)();
  return;
}



/* Entry: 103c31f74; end: 103c31f9f;  */

undefined8 FUN_103c31f74(void)

{
  if (lRam0000000112ffa050 != -1) {
    func_0x000103c32f18();
  }
  return 0x11380d138;
}



/* Entry: 103c31fa0; end: 103c31fd7;  */

void FUN_103c31fa0(undefined8 param_1)

{
  func_0x000103c32cc0();
  func_0x000107c613fc();
  FUN_103c320e8();
  uRam000000011380d138 = param_1;
  return;
}



/* Entry: 103c31fd8; end: 103c31ffb;  */

undefined8 FUN_103c31fd8(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  FUN_103c32ed8(unaff_x20 + 0x10,auStack_28);
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Entry: 103c31ffc; end: 103c3202b;  */

void FUN_103c31ffc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000103c32ee8(unaff_x20 + 0x10,auStack_38,1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103c3202c; end: 103c32057;  */

undefined1  [16] FUN_103c3202c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000103c32ee8(unaff_x20 + 0x10,param_1,0x21);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_103c32058;
  return auVar1;
}



/* Entry: 103c32058; end: 103c3205b;  */

void FUN_103c32058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103c3205c; end: 103c32083;  */

void FUN_103c3205c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  FUN_103c32ed8(unaff_x20 + 0x18,auStack_28);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c32084; end: 103c320bb;  */

void FUN_103c32084(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000103c32ee8(unaff_x20 + 0x18,auStack_38,1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103c320bc; end: 103c320e7;  */

undefined1  [16] FUN_103c320bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000103c32ee8(unaff_x20 + 0x18,param_1,0x21);
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103c32ed8;
  return auVar1;
}



/* Entry: 103c320e8; end: 103c3214b;  */

void FUN_103c320e8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003a77d8();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c4439c();
  func_0x000107c61170(param_1);
  func_0x000108930dd0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + 0x10) = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c3214c);
  (*pcVar1)();
}



/* Entry: 103c3214c; end: 103c3219f;  */

void FUN_103c3214c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  FUN_103c32ed8(unaff_x20 + 0x10,auStack_28);
  func_0x000108930e58(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c321a0; end: 103c32207;  */

void FUN_103c321a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c614e8();
  func_0x000107c60b14();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  FUN_103c32208(uVar1,uVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103c32208; end: 103c323ef;  */

void FUN_103c32208(ulong param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  FUN_103c32ed8(unaff_x20 + 0x18,auStack_80);
  uVar12 = param_1;
  func_0x000100077018(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18));
  if ((uVar12 & 1) != 0) {
    return;
  }
  uVar4 = 0x21;
  func_0x000103c32ee8(unaff_x20 + 0x18,auStack_c0);
  func_0x000107c61434(param_2);
  func_0x000102bf7c10();
  lVar8 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  func_0x000103c32ae4(lVar8);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  *(long *)(lVar5 + 0x10) = lVar8 + 1;
  lVar8 = lVar5 + lVar8 * 0x10;
  *(ulong *)(lVar8 + 0x20) = param_1;
  *(ulong *)(lVar8 + 0x28) = param_2;
  *(long *)(unaff_x20 + 0x18) = lVar5;
  func_0x000107c614a8(auStack_c0);
  func_0x000103c32edc(param_3 + 0x40,auStack_98);
  lVar8 = *(long *)(param_3 + 0x40);
  uVar11 = *(ulong *)(lVar8 + 0x10);
  func_0x000107c61434(lVar8);
  puVar6 = (undefined8 *)(lVar8 + 0x38);
  for (uVar12 = 0; uVar3 = (undefined4)uVar4, uVar11 != uVar12; uVar12 = uVar12 + 1) {
    if (*(ulong *)(lVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103c323cc);
      (*pcVar9)();
    }
    pcVar9 = (code *)puVar6[-1];
    if (pcVar9 != (code *)0x0) {
      uVar7 = *puVar6;
      uVar10 = puVar6[-2];
      func_0x000107c61434(uVar10);
      func_0x000100b64c10(pcVar9,uVar7);
      (*pcVar9)();
      func_0x000107c6142c(uVar10);
      func_0x00010058d43c(pcVar9,uVar7);
    }
    puVar6 = puVar6 + 4;
  }
  func_0x000107c6142c(lVar8);
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_103c323cc;
      lVar8 = unaff_x20 + 0x10;
      puVar1 = auStack_e0;
      func_0x000103c32edc();
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000103c31220();
      puVar2 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
      lStack_f8 = lVar8;
      puStack_f0 = puVar1;
      uStack_e8 = uVar3;
    }
    else {
      uStack_100 = param_2 & 0xffffffffffffff;
      lVar8 = unaff_x20 + 0x10;
      puVar1 = auStack_e0;
      uStack_108 = param_1;
      func_0x000103c32edc();
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000103c31220();
      puVar2 = &uStack_108;
      lStack_f8 = lVar8;
      puStack_f0 = puVar1;
      uStack_e8 = uVar3;
    }
    func_0x000108930ebc(uVar4,puVar2,&lStack_f8);
  }
  else {
LAB_103c323cc:
    func_0x000103c32f6c();
    func_0x000103c32f2c(0x103c32b1c,auStack_c0,param_1,param_2,extraout_x8 + 8);
  }
  return;
}



/* Entry: 103c323f0; end: 103c3245f;  */

void FUN_103c323f0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = param_2 + 0x10;
  puVar2 = auStack_48;
  uVar3 = 0;
  func_0x000107c61428();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000103c31220();
  lStack_60 = lVar1;
  puStack_58 = puVar2;
  uStack_50 = uVar3;
  func_0x000108930ebc(uVar4,param_1,&lStack_60);
  return;
}



/* Entry: 103c32460; end: 103c3256b;  */

void FUN_103c32460(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  func_0x000107c5fadc();
  func_0x000107c60af0();
  func_0x000103c32f58();
  if (unaff_x19 != 0) {
    func_0x000107c614ec();
    uVar1 = 0;
    func_0x000103c32b34(0);
    func_0x000107c61488(unaff_x19,uVar1);
    if (unaff_x19 != 0) {
      lVar2 = unaff_x19;
      func_0x0001003a77d8();
      func_0x000107c61180();
      func_0x000107c614e8(unaff_x19);
      func_0x000107c43808(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 103c3256c; end: 103c3279f;  */

void FUN_103c3256c(ulong param_1,ulong param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long extraout_x8;
  long unaff_x20;
  ulong uVar9;
  ulong unaff_x22;
  undefined8 *puVar10;
  long lVar11;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [32];
  
  uVar9 = *(ulong *)(param_3 + 0x10);
  func_0x000103c32f78();
  if (uVar9 != 0) {
    FUN_103c32a9c(0,uVar9,0);
    puVar10 = (undefined8 *)(param_3 + 0x28);
    uVar6 = uVar9;
    do {
      lVar4 = puVar10[-1];
      uVar7 = *puVar10;
      func_0x000107c5fb28(lVar4,uVar7);
      lVar11 = *(long *)(lVar4 + 0x10);
      func_0x000107c61434(uVar7);
      lVar5 = lVar11;
      func_0x000107c6158c(lVar11,0xffffffffffffffff);
      if (lVar11 != 0) {
        func_0x000107c610b4(lVar5,lVar4 + 0x20,lVar11);
      }
      func_0x000107c61574(lVar4);
      func_0x000107c6142c(uVar7);
      uVar2 = *(ulong *)(unaff_x22 + 0x10);
      if (*(ulong *)(unaff_x22 + 0x18) >> 1 <= uVar2) {
        FUN_103c32a9c(1 < *(ulong *)(unaff_x22 + 0x18),uVar2 + 1,1);
      }
      puVar10 = puVar10 + 2;
      *(ulong *)(unaff_x22 + 0x10) = uVar2 + 1;
      *(long *)(unaff_x22 + uVar2 * 8 + 0x20) = lVar5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = unaff_x22;
  func_0x000107c61558();
  if ((uVar6 & 1) == 0) {
    plVar1 = (long *)(unaff_x22 + 0x10);
    unaff_x22 = 0;
    func_0x000103c32f4c(0,*plVar1 + 1);
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x10);
  if (*(ulong *)(unaff_x22 + 0x18) >> 1 <= uVar6) {
    unaff_x22 = (ulong)(1 < *(ulong *)(unaff_x22 + 0x18));
    func_0x000103c32f4c(unaff_x22,uVar6 + 1);
  }
  *(ulong *)(unaff_x22 + 0x10) = uVar6 + 1;
  *(undefined8 *)(unaff_x22 + uVar6 * 8 + 0x20) = 0;
  uVar6 = unaff_x22;
  func_0x000103c30f7c();
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_103c32774;
      func_0x000103c32edc(unaff_x20 + 0x10,auStack_b0);
      if (uVar9 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c327a0);
        (*pcVar3)();
      }
      uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar8 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_b8 = param_2 & 0xffffffffffffff;
      uStack_c0 = param_1;
      func_0x000103c32edc(unaff_x20 + 0x10,auStack_b0);
      if (uVar9 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c3279c);
        (*pcVar3)();
      }
      uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar8 = &uStack_c0;
    }
    func_0x000108930f00(uVar7,puVar8,uVar6,uVar9);
  }
  else {
LAB_103c32774:
    func_0x000103c32f6c();
    func_0x000103c32f2c(FUN_103c32c60,&stack0xffffffffffffff70,param_1,param_2,extraout_x8 + 8);
  }
  FUN_103c327a0(uVar6);
  func_0x000107c6142c(unaff_x22);
  return;
}


