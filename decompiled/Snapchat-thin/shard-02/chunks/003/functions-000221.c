/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bbe3a8; end: 101bbe3fb;  */

void FUN_101bbe3a8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  FUN_101bbe3fc();
  if (param_2 < 0x40) {
    func_0x000107c61530(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Entry: 101bbe3fc; end: 101bbe44b;  */

void FUN_101bbe3fc(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e075f0 != 0) {
    return;
  }
  puVar1 = &UNK_110451cf0;
  func_0x000107c5fd18();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e075f0 = param_1;
  return;
}



/* Entry: 101bbe44c; end: 101bbe45b;  */

void FUN_101bbe44c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101bbe45c; end: 101bbe57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbe45c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  uVar6 = *param_2;
  lVar2 = 0;
  FUN_101bbe680();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e075f8;
  func_0x000107c613fc(uVar6,0x18,7);
  uVar4 = 0;
  func_0x00010095c380();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  func_0x000107c6157c();
  func_0x000104889c84(0,1,uVar4);
  func_0x000107c61574(uVar4);
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c613fc(uVar6,0x18,7);
  uVar6 = 0;
  func_0x00010095c380();
  func_0x0001000285a8(0x112e07628,&UNK_10d9dbba0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar4 = 0x101bbe918;
  func_0x0001000bdd8c(0x101bbe918,uVar6);
  *param_1 = plVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar4;
  return;
}



/* Entry: 101bbe57c; end: 101bbe5b3;  */

void FUN_101bbe57c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 101bbe5b4; end: 101bbe60f; -[_TtC33ValdiSerializedWorkerServicesImplP33_CCA3DFDB6F41567F185913078B9BA8699AwaitWork doWork] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbe5b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_112e075f8) + 0x10);
  func_0x000107c61174();
  uVar1 = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x000103edf384();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101bbe610; end: 101bbe66f; -[_TtC33ValdiSerializedWorkerServicesImplP33_CCA3DFDB6F41567F185913078B9BA8699AwaitWork init] */

void FUN_101bbe610(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiSerializedWorkerServicesImpl.AwaitWork",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bbe63c);
  (*pcVar1)();
}



/* Entry: 101bbe670; end: 101bbe67f; -[_TtC33ValdiSerializedWorkerServicesImplP33_CCA3DFDB6F41567F185913078B9BA8699AwaitWork .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbe670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e075f8));
  return;
}



/* Entry: 101bbe680; end: 101bbe69f;  */

void FUN_101bbe680(void)

{
  func_0x000107c61168(&PTR_PTR_1127fbf48);
  return;
}



/* Entry: 101bbe6a0; end: 101bbe6cf;  */

/* WARNING: Possible PIC construction at 0x000101bbe6bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bbe6c0) */

void FUN_101bbe6a0(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 101bbe6d0; end: 101bbe78f;  */

undefined8 * FUN_101bbe6d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c615f0();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 101bbe790; end: 101bbe7db;  */

undefined8 * FUN_101bbe790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bbe7dc; end: 101bbe873;  */

int FUN_101bbe7dc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bbe874; end: 101bbe90f;  */

undefined8 FUN_101bbe874(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010095c380(0);
  func_0x0001000285a8(0x112e07628,&UNK_10d9dbba0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x0001000bdd8c(FUN_101bbe910,uVar1);
  return param_1;
}



/* Entry: 101bbe910; end: 101bbe947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbe910(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  uVar6 = *unaff_x20;
  lVar2 = 0;
  FUN_101bbe680();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e075f8;
  func_0x000107c613fc(uVar6,0x18,7);
  uVar4 = 0;
  func_0x00010095c380();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  func_0x000107c6157c();
  func_0x000104889c84(0,1,uVar4);
  func_0x000107c61574(uVar4);
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c613fc(uVar6,0x18,7);
  uVar6 = 0;
  func_0x00010095c380();
  func_0x0001000285a8(0x112e07628,&UNK_10d9dbba0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar4 = 0x101bbe918;
  func_0x0001000bdd8c(0x101bbe918,uVar6);
  *param_1 = plVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar4;
  return;
}



/* Entry: 101bbe948; end: 101bbec7b;  */

void FUN_101bbe948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined1 *)(lVar13 - extraout_x12_00);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100087bd4(FUN_101bbed34);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar4 = 0x112e076d8;
  func_0x0001000285a8(0x112e076d8,&UNK_10d9dbbf0);
  func_0x000107c5fd28(puVar14,&uStack_78,uVar4);
  pcVar10 = *(code **)(lVar12 + 0x10);
  (*pcVar10)(lVar13,puVar14,lVar3);
  pcVar11 = *(code **)(lVar12 + 0x58);
  lVar5 = lVar13;
  (*pcVar11)(lVar13,lVar3);
  iVar1 = *(int *)PTR___sScS12ContinuationV11YieldResultO8enqueuedyADyx__GSi_tcAFmlFWC_11034fcf8;
  pcVar9 = *(code **)(lVar12 + 8);
  if ((int)lVar5 == iVar1) {
LAB_101bbeb1c:
    (*pcVar9)(puVar14,lVar3);
    return;
  }
  (*pcVar9)(lVar13,lVar3);
  func_0x000100087bd4(0x101bbed4c,unaff_x20,PTR___sytN_11034f1b0 + 8);
  (*pcVar10)(puVar8,puVar14,lVar3);
  puVar6 = puVar8;
  (*pcVar11)(puVar8,lVar3);
  iVar2 = (int)puVar6;
  if (iVar2 == iVar1) goto LAB_101bbeb1c;
  if (iVar2 == *(int *)PTR___sScS12ContinuationV11YieldResultO7droppedyADyx__GxcAFmlFWC_11034fcf0) {
    (*pcVar9)(puVar8,lVar3);
    uVar7 = 0;
    FUN_101bbe370(0);
    uVar4 = uVar7;
    FUN_101bbed64();
    func_0x000107c613f8(uVar7,uVar4,0,0);
    pcVar10 = *(code **)(lVar12 + 0x38);
    uVar7 = 1;
  }
  else {
    iVar1 = *(int *)PTR___sScS12ContinuationV11YieldResultO10terminatedyADyx__GAFmlFWC_11034fce8;
    uVar7 = 0;
    FUN_101bbe370(0);
    uVar4 = uVar7;
    FUN_101bbed64();
    func_0x000107c613f8(uVar7,uVar4,0,0);
    if (iVar2 != iVar1) {
      (*pcVar10)(uVar4,puVar14,lVar3);
      (**(code **)(lVar12 + 0x38))(uVar4,0,2,lVar3);
      func_0x000107c61654();
      (*pcVar9)(puVar14,lVar3);
      goto LAB_101bbec50;
    }
    pcVar10 = *(code **)(lVar12 + 0x38);
    uVar7 = 2;
  }
  (*pcVar10)(uVar4,uVar7,2,lVar3);
  func_0x000107c61654();
  puVar8 = puVar14;
LAB_101bbec50:
  (*pcVar9)(puVar8,lVar3);
  return;
}



/* Entry: 101bbec7c; end: 101bbed33;  */

void FUN_101bbec7c(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x18) + -1;
  if (SBORROW8(*(long *)(param_1 + 0x18),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101bbec98);
    (*pcVar2)();
  }
  *(long *)(param_1 + 0x18) = lVar1;
  if (-1 < lVar1) {
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000027,0x800000010f0022a0,
                      "ValdiSerializedWorkerServicesImpl/WorkCounter.swift",0x33,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bbecf0);
  (*pcVar2)();
}



/* Entry: 101bbed34; end: 101bbed63;  */

void FUN_101bbed34(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (!SCARRY8(*(long *)(unaff_x20 + 0x18),1)) {
    *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bbed4c);
  (*pcVar1)();
}



/* Entry: 101bbed64; end: 101bbeda7;  */

void FUN_101bbed64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e076e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101bbe370(0xff);
  puVar2 = &UNK_10d9dbb40;
  func_0x000107c61520(&UNK_10d9dbb40,uVar1);
  puRam0000000112e076e0 = puVar2;
  return;
}



/* Entry: 101bbeda8; end: 101bbf0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbeda8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  code *pcVar19;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_74;
  
  uStack_94 = param_4;
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_74 = param_3;
  func_0x000107c614f0();
  lVar8 = _DAT_112e076e8;
  lVar6 = 0;
  func_0x000101bbed14();
  func_0x000107c613fc();
  uVar7 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  lStack_a0 = lVar8;
  *(long *)(unaff_x20 + lVar8) = lVar6;
  lVar8 = 0x112e07758;
  func_0x0001000285a8(0x112e07758,&UNK_10d9dbbf8);
  lVar14 = *(long *)(lVar8 + -8);
  lVar16 = *(long *)(lVar14 + 0x40);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_c0 + -extraout_x8;
  lVar8 = 0x112e076d8;
  func_0x0001000285a8(0x112e076d8,&UNK_10d9dbbf0);
  lStack_b8 = *(long *)(lVar8 + -8);
  lStack_b0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = (long)puVar17 - extraout_x8_00;
  lVar8 = 0x112e07760;
  func_0x0001000285a8(0x112e07760,&UNK_10d9dbc00);
  lVar18 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar12 - extraout_x8_01;
  (**(code **)(lVar18 + 0x68))
            (lVar6,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar8);
  iVar5 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar5 == 0) {
    FUN_101bbfcf8(puVar17,lVar12,lVar6);
  }
  else {
    func_0x000107c5fd10(puVar17,lVar12,&UNK_110451cf0,lVar6,&UNK_110451cf0);
  }
  lVar2 = _DAT_112e076f8;
  lVar1 = _DAT_112e076f0;
  (**(code **)(lVar18 + 8))(lVar6,lVar8);
  lVar8 = lStack_a8;
  pcVar19 = *(code **)(lVar14 + 0x20);
  (*pcVar19)(unaff_x20 + lVar1,puVar17,lStack_a8);
  (**(code **)(lStack_b8 + 0x20))(unaff_x20 + lVar2,lVar12,lStack_b0);
  uVar7 = *(undefined8 *)(unaff_x20 + lStack_a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar6 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar14 + 0x10))(lVar12,unaff_x20 + lVar1,lVar8);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  uVar15 = lVar16 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar9 = &UNK_110451d20;
  func_0x000107c613fc(&UNK_110451d20,uVar15 + 8,uVar11 | 7);
  (*pcVar19)(puVar9 + uVar13,lVar12,lVar8);
  *(undefined8 *)(puVar9 + uVar15) = uVar7;
  func_0x000107c6157c(uVar7);
  *(undefined **)(lVar6 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar4 = uStack_74;
  uVar3 = uStack_88;
  uVar7 = uStack_90;
  uVar10 = uStack_90;
  func_0x0001001ca524(uStack_90,uStack_88,uStack_74,uStack_94,0,0,&UNK_10d9dbc10,puVar9);
  func_0x000107c61574(puVar9);
  func_0x00010007d980(uVar7,uVar3,uVar4);
  *(undefined8 *)(unaff_x20 + _DAT_112e07700) = uVar10;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101bbf0d8; end: 101bbf0ef;  */

void FUN_101bbf0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbf0f0,0,0);
  return;
}



/* Entry: 101bbf0f0; end: 101bbf1af;  */

void FUN_101bbf0f0(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  lVar4 = 0x112e07768;
  func_0x0001000285a8(0x112e07768,&UNK_10d9dbc18);
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  func_0x0001000285a8(0x112e07758,&UNK_10d9dbbf8);
  func_0x000107c5fd34(uVar2);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bbf1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101bbf1b0; end: 101bbf2cf;  */

void FUN_101bbf1b0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bbf1f8,0,0);
  return;
}



/* Entry: 101bbf2d0; end: 101bbf4d3;  */

void FUN_101bbf2d0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000107c421c4();
  func_0x000107c61180();
  uVar2 = uVar7;
  func_0x000103edf4f0();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  func_0x000107c61170(uVar7);
  func_0x000104889c84(0,1,uVar5);
  func_0x000104888eec(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0x80) == -1) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x68;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101bbf4d4;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    puVar4 = &UNK_110451d48;
    func_0x000107c613fc(&UNK_110451d48,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    func_0x00010075a04c(0,1,FUN_101bc0100,puVar4);
    func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x88,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000100fc38ac(uVar7,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000100087bd4(FUN_101bc01ec,*(undefined8 *)(unaff_x22 + 0x98),PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar8);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar5);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bbf1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101bbf4d4; end: 101bbf513;  */

void FUN_101bbf4d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbf514,0,0);
  return;
}



/* Entry: 101bbf514; end: 101bbf633;  */

void FUN_101bbf514(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x88,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000100fc38ac(uVar5,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000100087bd4(FUN_101bc01ec,*(undefined8 *)(unaff_x22 + 0x98),PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar3);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bbf1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101bbf634; end: 101bbf737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbf634(void)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c614f0();
  lVar1 = 0x112e076d8;
  func_0x0001000285a8(0x112e076d8,&UNK_10d9dbbf0);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))
            (&stack0xffffffffffffffb0 + -extraout_x8,unaff_x20 + _DAT_112e076f8,lVar1);
  func_0x000107c5fd2c(lVar1);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e07700);
  func_0x000107c6157c(uVar2);
  func_0x000107c5fd50();
  func_0x000107c61574(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bbf738; end: 101bbf847; -[_TtC33ValdiSerializedWorkerServicesImpl16SerializedWorker dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbf738(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = 0x112e076d8;
  func_0x0001000285a8(0x112e076d8,&UNK_10d9dbbf0);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))((long)&lStack_50 - extraout_x8,param_1 + _DAT_112e076f8,lVar2);
  func_0x000107c61174();
  func_0x000107c5fd2c(lVar2);
  (**(code **)(lVar4 + 8))((long)&lStack_50 - extraout_x8,lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e07700);
  func_0x000107c6157c(uVar3);
  func_0x000107c5fd50();
  func_0x000107c61574(uVar3);
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bbf848; end: 101bbf8df; -[_TtC33ValdiSerializedWorkerServicesImpl16SerializedWorker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101bbf864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bbf868) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbf848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e076e8));
  return;
}



/* Entry: 101bbf8e0; end: 101bbf8e7;  */

void FUN_101bbf8e0(void)

{
  if (lRam0000000112e07730 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e679b38);
  return;
}



/* Entry: 101bbf8e8; end: 101bbf91f;  */

void FUN_101bbf8e8(undefined8 param_1)

{
  if (lRam0000000112e07730 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e679b38);
  return;
}



/* Entry: 101bbf920; end: 101bbf94b; -[_TtC33ValdiSerializedWorkerServicesImpl16SerializedWorker init] */

void FUN_101bbf920(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiSerializedWorkerServicesImpl.SerializedWorker",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bbf94c);
  (*pcVar1)();
}



/* Entry: 101bbf94c; end: 101bbfa4f;  */

void FUN_101bbf94c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBoWV_11034d678;
  puStack_40 = PTR___sBoWV_11034d678 + 0x40;
  uVar3 = 0x112e07740;
  lVar2 = 0x13f;
  func_0x000101bbfa08(0x13f,0x112e07740,PTR___sScSMa_11034fda0);
  if (uVar3 < 0x40) {
    lStack_38 = *(long *)(lVar2 + -8) + 0x40;
    uVar3 = 0x112e07748;
    lVar2 = 0x13f;
    func_0x000101bbfa08(0x13f,0x112e07748,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar3 < 0x40) {
      lStack_30 = *(long *)(lVar2 + -8) + 0x40;
      puStack_28 = puVar1 + 0x40;
      func_0x000107c61630(param_1,0x100,4,&puStack_40,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 101bbfa50; end: 101bbfc13;  */

/* WARNING: Removing unreachable block (ram,0x000101bbfaf4) */
/* WARNING: Removing unreachable block (ram,0x000101bbfb48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbfa50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  char cStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e076e8);
  func_0x000100087bd4(&cStack_80,0x101bbffb0,uVar2,PTR___sSbN_11034dd40);
  if (cStack_80 == '\x01') {
    func_0x0001000d224c(&cStack_80);
    FUN_101bbe948(CONCAT71(uStack_7f,cStack_80),uStack_78,uStack_70,unaff_x20 + _DAT_112e076f8);
    func_0x000107c61574(uStack_70);
    func_0x000107c61574(uStack_78);
    func_0x000107c615e8(CONCAT71(uStack_7f,cStack_80));
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000107c421c4(param_1);
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000103edf4f0();
    func_0x000107c61170(param_1);
    func_0x000104889c84(0,1,param_2);
    func_0x000107c6157c(uVar2);
    func_0x00010075a04c(0,1,FUN_101bbffc8,uVar2);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(uVar2);
  }
  else {
    FUN_101bbe948(param_1,param_2,param_3,unaff_x20 + _DAT_112e076f8);
  }
  return;
}



/* Entry: 101bbfc14; end: 101bbfcf7; -[_TtC33ValdiSerializedWorkerServicesImpl16SerializedWorker performSeriallyWithWork:] */

void FUN_101bbfc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_3;
  uVar5 = param_3;
  func_0x000107c614f0();
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101bbe874(param_3);
  FUN_101bbfa50();
  uVar3 = 0;
  FUN_101bbff6c(0);
  uVar4 = 0;
  func_0x000100775264(0,1,FUN_101bbe57c,0,uVar3);
  uVar3 = uVar4;
  func_0x000103edf0bc();
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101bbfcf8; end: 101bbfef7;  */

void FUN_101bbfcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112e07760;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112e07760,&UNK_10d9dbc00);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112e07758;
  func_0x0001000285a8(0x112e07758,&UNK_10d9dbbf8);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112e07770;
  func_0x0001000285a8(0x112e07770,&UNK_10d9dbc28);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112e076d8;
  func_0x0001000285a8(0x112e076d8,&UNK_10d9dbbf0);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_110451cf0,puVar11,FUN_101bc014c,auStack_80,&UNK_110451cf0);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_101bc0154(lVar9,lVar8);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000101bc01a4(lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bbfef8);
  (*pcVar1)();
}



/* Entry: 101bbfef8; end: 101bbff6b;  */

void FUN_101bbfef8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000101bc01a4(param_2);
  lVar1 = 0x112e076d8;
  func_0x0001000285a8(0x112e076d8,&UNK_10d9dbbf0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bbff68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,lVar1);
  return;
}



/* Entry: 101bbff6c; end: 101bbffc7;  */

void FUN_101bbff6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07750 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b15a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e07750 = puVar1;
  return;
}



/* Entry: 101bbffc8; end: 101bc0013;  */

void FUN_101bbffc8(void)

{
  func_0x000100087bd4(FUN_101bc0014);
  return;
}



/* Entry: 101bc0014; end: 101bc002b;  */

void FUN_101bc0014(void)

{
  FUN_101bbec7c();
  return;
}



/* Entry: 101bc002c; end: 101bc00c3;  */

void FUN_101bc002c(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112e07758;
  func_0x0001000285a8(0x112e07758,&UNK_10d9dbbf8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bc00c4;
  plVar1[0x12] = unaff_x20 + uVar2;
  plVar1[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbf0f0,0,0);
  return;
}



/* Entry: 101bc00c4; end: 101bc00ff;  */

void FUN_101bc00c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc00fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc0100; end: 101bc014b;  */

void FUN_101bc0100(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000100fabc04(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101bc014c; end: 101bc0153;  */

void FUN_101bc014c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000101bc01a4(uVar2);
  lVar1 = 0x112e076d8;
  func_0x0001000285a8(0x112e076d8,&UNK_10d9dbbf0);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(uVar2,param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bbff68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(uVar2,0,1,lVar1);
  return;
}



/* Entry: 101bc0154; end: 101bc01eb;  */

undefined8 FUN_101bc0154(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e07770;
  func_0x0001000285a8(0x112e07770,&UNK_10d9dbc28);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101bc01ec; end: 101bc01ff;  */

void FUN_101bc01ec(void)

{
  FUN_101bc0014();
  return;
}



/* Entry: 101bc0200; end: 101bc0217;  */

void FUN_101bc0200(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_110451da0;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110451d60;
  return;
}



/* Entry: 101bc0218; end: 101bc0287;  */

void FUN_101bc0218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_101bbf8e8(0);
  func_0x000107c610f8();
  func_0x0001000ab9d4(param_1,param_2,param_3);
  FUN_101bbeda8(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 101bc0288; end: 101bc02a7;  */

undefined1  [16] FUN_101bc0288(void)

{
  return ZEXT816(0x110451d80);
}



/* Entry: 101bc02a8; end: 101bc02d7;  */

void FUN_101bc02a8(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x000100b862a0(param_1);
  return;
}



/* Entry: 101bc02d8; end: 101bc0487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc02d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  func_0x000100083b20(&puStack_60);
  uVar2 = *(undefined8 *)(puStack_60 + _DAT_112ff82c0);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(puStack_60);
  uStack_40 = 0x101bc03a8;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1011eaae0;
  puStack_48 = &UNK_110451e38;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c44284(uVar2,param_2,ppuVar1,*(undefined8 *)(unaff_x20 + _DAT_112e07790));
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 101bc0488; end: 101bc048b;  */

void FUN_101bc0488(void)

{
  return;
}



/* Entry: 101bc048c; end: 101bc04b3; -[_TtC30MemoriesSearchTagsServicesImpl26MemoriesSearchTagsProvider syncFaceTags] */

void FUN_101bc048c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101bc02d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101bc04b4; end: 101bc04cf;  */

void FUN_101bc04b4(long param_1,long param_2)

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



/* Entry: 101bc04d0; end: 101bc0503;  */

void FUN_101bc04d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bc0504; end: 101bc0513;  */

undefined1  [16] FUN_101bc0504(void)

{
  return ZEXT816(0x110451e70);
}



/* Entry: 101bc0514; end: 101bc054b; -[_TtC30MemoriesSearchTagsServicesImpl26MemoriesSearchTagsProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc0514(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e07788));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e07790));
  return;
}



/* Entry: 101bc054c; end: 101bc0553;  */

void FUN_101bc054c(long param_1,long param_2)

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



/* Entry: 101bc0554; end: 101bc05c7;  */

void FUN_101bc0554(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e077c8,&UNK_10d9dbd78);
  func_0x000107c613fc();
  pcVar1 = FUN_101bc05d8;
  func_0x0001000bdd8c(FUN_101bc05d8,0);
  uVar2 = 0;
  func_0x00010028ca8c(0);
  func_0x000107c610f8();
  func_0x000101bc278c(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101bc05c8; end: 101bc05d7;  */

undefined1  [16] FUN_101bc05c8(void)

{
  return ZEXT816(0x110451f60);
}



/* Entry: 101bc05d8; end: 101bc061b;  */

void FUN_101bc05d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_101bc25e0();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110452200;
  *param_1 = uVar2;
  return;
}



/* Entry: 101bc061c; end: 101bc0637;  */

void FUN_101bc061c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc0638,0,0);
  return;
}



/* Entry: 101bc0638; end: 101bc06cb;  */

void FUN_101bc0638(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bc06cc;
                    /* WARNING: Could not recover jumptable at 0x000101bc06c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),5,uVar2,lVar3);
  return;
}



/* Entry: 101bc06cc; end: 101bc073f;  */

void FUN_101bc06cc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_2;
    *(undefined8 *)(lVar2 + 0x60) = param_1;
    pcVar1 = FUN_101bc0740;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_101bc07c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bc0740; end: 101bc07c3;  */

void FUN_101bc0740(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar4 = uVar2;
  func_0x000107c5ee20(uVar2,uVar1);
  func_0x000107c4635c(puVar3);
  func_0x000107c61170(uVar4);
  func_0x00010006c090(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bc07c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 101bc07c4; end: 101bc083b;  */

void FUN_101bc07c4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bc07f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101bc083c; end: 101bc0baf;  */

/* WARNING: Possible PIC construction at 0x000101bc08c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc08d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc09b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc09e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc0a70) */
/* WARNING: Removing unreachable block (ram,0x000101bc0a5c) */
/* WARNING: Removing unreachable block (ram,0x000101bc0a34) */
/* WARNING: Removing unreachable block (ram,0x000101bc0a0c) */
/* WARNING: Removing unreachable block (ram,0x000101bc09e4) */
/* WARNING: Removing unreachable block (ram,0x000101bc09bc) */
/* WARNING: Removing unreachable block (ram,0x000101bc0994) */
/* WARNING: Removing unreachable block (ram,0x000101bc096c) */
/* WARNING: Removing unreachable block (ram,0x000101bc08dc) */
/* WARNING: Removing unreachable block (ram,0x000101bc08c8) */
/* WARNING: Removing unreachable block (ram,0x000101bc0ae0) */
/* WARNING: Removing unreachable block (ram,0x000101bc0af0) */

void FUN_101bc083c(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_2 == 0) {
    if (param_1 != 0) {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar5 = param_1;
        if (-1 < (long)param_1) {
          uVar5 = uVar6;
        }
        func_0x000107c60480();
      }
      if (uVar5 != 0) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101bc0b1c);
            (*pcVar1)();
          }
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c61174(uVar2);
        }
        else {
          uVar2 = 0;
          FUN_101bc1ee0(0,param_1);
        }
        puVar3 = PTR_PTR_1126a8c10;
        func_0x000107c610f8(PTR_PTR_1126a8c10);
        func_0x000107c453e4();
        func_0x000107c40854(uVar2);
        func_0x000107c61180();
        func_0x000107c53a1c(puVar3);
        goto code_r0x000107c61170;
      }
    }
    puVar3 = PTR_PTR_1126a8c10;
    func_0x000107c610f8(PTR_PTR_1126a8c10);
    func_0x000107c453e4();
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f002440);
    func_0x000107c54654(puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126a8c10;
    func_0x000107c610f8(PTR_PTR_1126a8c10);
    func_0x000107c614b0(param_2);
    func_0x000107c453e4(puVar3);
    func_0x000107c614cc(param_2,auStack_48,auStack_60);
    uVar4 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    uVar2 = uStack_58;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
    func_0x000107c54654(puVar3);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101bc0bb0; end: 101bc0bc3; -[_TtC30SearchNativeBridgeServicesImpl22SearchNativeBridgeImpl reverseGeocodeWithLat:lng:] */

void FUN_101bc0bb0(void)

{
  FUN_101bc20a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101bc0bc4; end: 101bc0bdf;  */

void FUN_101bc0bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc0be0,0,0);
  return;
}



/* Entry: 101bc0be0; end: 101bc0d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc0be0(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + _DAT_112e07870);
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar6 = *plVar1;
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101bc0d2c;
    lVar5 = *(long *)(unaff_x22 + 0x30);
    plVar1[8] = *(long *)(unaff_x22 + 0x38);
    plVar1[9] = lVar6;
    plVar1[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc0638,0,0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar2 = PTR_PTR_1126a8bf8;
  func_0x000107c610f8(PTR_PTR_1126a8bf8);
  uVar3 = 0;
  FUN_101bc21d0(0,0x112e078b8,&PTR_PTR_1126a8c00);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
  func_0x000107c48c10(puVar2);
  func_0x000107c61170(puVar4);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0023c0);
  func_0x000107c54654(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c43b74(uVar7);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bc0d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc0d2c; end: 101bc0d7b;  */

void FUN_101bc0d2c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc0d7c,0,0);
  return;
}



/* Entry: 101bc0d7c; end: 101bc0e77;  */

void FUN_101bc0d7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar2 = *(undefined **)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(uVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar2 = PTR_PTR_1126a8bf8;
    func_0x000107c610f8(PTR_PTR_1126a8bf8);
    uVar3 = 0;
    FUN_101bc21d0(0,0x112e078b8,&PTR_PTR_1126a8c00);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
    func_0x000107c48c10(puVar2);
    func_0x000107c61170(puVar1);
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f0023c0);
    func_0x000107c54654(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c43b74(uVar4);
  }
  else {
    FUN_101bc0e78(puVar2,*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bc0e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc0e78; end: 101bc1397;  */

/* WARNING: Possible PIC construction at 0x000101bc0f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc11c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc11ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc11fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc12c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc12a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc1278) */
/* WARNING: Removing unreachable block (ram,0x000101bc12c8) */
/* WARNING: Removing unreachable block (ram,0x000101bc135c) */
/* WARNING: Removing unreachable block (ram,0x000101bc1324) */
/* WARNING: Removing unreachable block (ram,0x000101bc1200) */
/* WARNING: Removing unreachable block (ram,0x000101bc11f0) */
/* WARNING: Removing unreachable block (ram,0x000101bc11cc) */
/* WARNING: Removing unreachable block (ram,0x000101bc1068) */
/* WARNING: Removing unreachable block (ram,0x000101bc0fd4) */
/* WARNING: Removing unreachable block (ram,0x000101bc0fd8) */
/* WARNING: Removing unreachable block (ram,0x000101bc0fb8) */
/* WARNING: Removing unreachable block (ram,0x000101bc0f98) */
/* WARNING: Removing unreachable block (ram,0x000101bc12d0) */
/* WARNING: Removing unreachable block (ram,0x000101bc0f9c) */
/* WARNING: Removing unreachable block (ram,0x000101bc0f74) */
/* WARNING: Removing unreachable block (ram,0x000101bc12ac) */
/* WARNING: Removing unreachable block (ram,0x000101bc1374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc0e78(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112e07880);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126a8bf8;
    func_0x000107c610f8(PTR_PTR_1126a8bf8);
    uVar4 = 0;
    FUN_101bc21d0(0,0x112e078b8,&PTR_PTR_1126a8c00);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
    func_0x000107c48c10(puVar3);
  }
  else {
    func_0x000108ec1a8c();
    func_0x000107c61180();
    puVar3 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar3 = param_2;
      func_0x000107c5faec();
      param_2 = puVar3;
      func_0x000107c5fadc();
      func_0x000107c6142c();
    }
    func_0x000108ec1b10();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112e07878);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4d09c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101bc1398; end: 101bc13cb; -[_TtC30SearchNativeBridgeServicesImpl22SearchNativeBridgeImpl classifyVisualTagsWithMediaId:] */

void FUN_101bc1398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_110452088;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110451f98;
  func_0x000107c613fc(&UNK_110451f98,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110452088,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10d9dbe00,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101bc13cc; end: 101bc1517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc13cc(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + _DAT_112e07870);
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar6 = *plVar1;
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101bc1518;
    lVar5 = *(long *)(unaff_x22 + 0x30);
    plVar1[8] = *(long *)(unaff_x22 + 0x38);
    plVar1[9] = lVar6;
    plVar1[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc0638,0,0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar2 = PTR_PTR_1126a8be8;
  func_0x000107c610f8(PTR_PTR_1126a8be8);
  uVar3 = 0;
  FUN_101bc21d0(0,0x112e078b0,&PTR_PTR_1126a8bf0);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
  func_0x000107c45ce4(puVar2);
  func_0x000107c61170(puVar4);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0023c0);
  func_0x000107c54654(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c43b74(uVar7);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bc1514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc1518; end: 101bc1567;  */

void FUN_101bc1518(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc1568,0,0);
  return;
}



/* Entry: 101bc1568; end: 101bc1663;  */

void FUN_101bc1568(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar2 = *(undefined **)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(uVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar2 = PTR_PTR_1126a8be8;
    func_0x000107c610f8(PTR_PTR_1126a8be8);
    uVar3 = 0;
    FUN_101bc21d0(0,0x112e078b0,&PTR_PTR_1126a8bf0);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
    func_0x000107c45ce4(puVar2);
    func_0x000107c61170(puVar1);
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f0023c0);
    func_0x000107c54654(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c43b74(uVar4);
  }
  else {
    FUN_101bc1664(puVar2,*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bc1660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bc1664; end: 101bc1b4f;  */

/* WARNING: Possible PIC construction at 0x000101bc1738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc19ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc19bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc1a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc1a38) */
/* WARNING: Removing unreachable block (ram,0x000101bc1b14) */
/* WARNING: Removing unreachable block (ram,0x000101bc1ae0) */
/* WARNING: Removing unreachable block (ram,0x000101bc19c0) */
/* WARNING: Removing unreachable block (ram,0x000101bc19b0) */
/* WARNING: Removing unreachable block (ram,0x000101bc198c) */
/* WARNING: Removing unreachable block (ram,0x000101bc1828) */
/* WARNING: Removing unreachable block (ram,0x000101bc1794) */
/* WARNING: Removing unreachable block (ram,0x000101bc1798) */
/* WARNING: Removing unreachable block (ram,0x000101bc1778) */
/* WARNING: Removing unreachable block (ram,0x000101bc1758) */
/* WARNING: Removing unreachable block (ram,0x000101bc1a8c) */
/* WARNING: Removing unreachable block (ram,0x000101bc175c) */
/* WARNING: Removing unreachable block (ram,0x000101bc173c) */
/* WARNING: Removing unreachable block (ram,0x000101bc1a70) */
/* WARNING: Removing unreachable block (ram,0x000101bc1b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc1664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112e07880);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126a8be8;
    func_0x000107c610f8(PTR_PTR_1126a8be8);
    uVar4 = 0;
    FUN_101bc21d0(0,0x112e078b0,&PTR_PTR_1126a8bf0);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
    func_0x000107c45ce4(puVar3);
  }
  else {
    func_0x000108ec1d74();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112e07878);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4d09c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101bc1b50; end: 101bc1b63; -[_TtC30SearchNativeBridgeServicesImpl22SearchNativeBridgeImpl classifyTinyClipWithMediaId:] */

void FUN_101bc1b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_110451fc0;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110451f98;
  func_0x000107c613fc(&UNK_110451f98,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110451fc0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10d9dbdf0,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101bc1b64; end: 101bc1c8f;  */

void FUN_101bc1b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110451f98;
  func_0x000107c613fc(&UNK_110451f98,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(param_4,0x30,7);
  *(undefined **)(param_4 + 0x10) = puVar2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  *(undefined **)(param_4 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar3 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,4,0,0,param_5,param_4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101bc1c90; end: 101bc1c93;  */

void FUN_101bc1c90(void)

{
  return;
}



/* Entry: 101bc1c94; end: 101bc1cf3; -[_TtC30SearchNativeBridgeServicesImpl22SearchNativeBridgeImpl init] */

void FUN_101bc1c94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchNativeBridgeServicesImpl.SearchNativeBridgeImpl",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bc1cc0);
  (*pcVar1)();
}



/* Entry: 101bc1cf4; end: 101bc1d3b; -[_TtC30SearchNativeBridgeServicesImpl22SearchNativeBridgeImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101bc1d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc1d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc1cf4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112e07870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e07878));
  return;
}



/* Entry: 101bc1d3c; end: 101bc1d5b;  */

void FUN_101bc1d3c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc1b0);
  return;
}



/* Entry: 101bc1d5c; end: 101bc1dd3;  */

void FUN_101bc1d5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bc1dd4;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc13cc,0,0);
  return;
}



/* Entry: 101bc1dd4; end: 101bc1e0f;  */

void FUN_101bc1dd4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bc1e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bc1e10; end: 101bc1e2f;  */

void FUN_101bc1e10(long param_1,long param_2)

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



/* Entry: 101bc1e30; end: 101bc1e63;  */

void FUN_101bc1e30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bc1e64; end: 101bc1edb;  */

void FUN_101bc1e64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bc2230;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc0be0,0,0);
  return;
}



/* Entry: 101bc1edc; end: 101bc1edf;  */

void FUN_101bc1edc(void)

{
  return;
}



/* Entry: 101bc1ee0; end: 101bc20a3;  */

ulong FUN_101bc1ee0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc1fc4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc1fc8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___CLPlacemark_1126a8c08;
    func_0x000107c61168(PTR__OBJC_CLASS___CLPlacemark_1126a8c08);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___CLPlacemark_1126a8c08;
    func_0x000107c61168(PTR__OBJC_CLASS___CLPlacemark_1126a8c08);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101bc21d0(0,0x112e078c0,&PTR__OBJC_CLASS___CLPlacemark_1126a8c08);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bc20a4);
  (*pcVar2)();
}



/* Entry: 101bc20a4; end: 101bc21c7;  */

undefined * FUN_101bc20a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  func_0x000107c610f8(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x000107c470f8(param_1,param_2);
  puVar3 = PTR__OBJC_CLASS___CLGeocoder_1126c1820;
  func_0x000107c610f8(PTR__OBJC_CLASS___CLGeocoder_1126c1820);
  func_0x000107c453e4();
  puVar4 = &UNK_110452150;
  func_0x000107c613fc(&UNK_110452150,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar1;
  pcStack_60 = FUN_101bc21c8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x101bc0b1c;
  puStack_68 = &UNK_110452168;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c50868(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c60bd0(ppuVar5);
  return puVar1;
}



/* Entry: 101bc21c8; end: 101bc21cf;  */

/* WARNING: Possible PIC construction at 0x000101bc08c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc08d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc09b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc09e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bc0adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bc0a70) */
/* WARNING: Removing unreachable block (ram,0x000101bc0a5c) */
/* WARNING: Removing unreachable block (ram,0x000101bc0a34) */
/* WARNING: Removing unreachable block (ram,0x000101bc0a0c) */
/* WARNING: Removing unreachable block (ram,0x000101bc09e4) */
/* WARNING: Removing unreachable block (ram,0x000101bc09bc) */
/* WARNING: Removing unreachable block (ram,0x000101bc0994) */
/* WARNING: Removing unreachable block (ram,0x000101bc096c) */
/* WARNING: Removing unreachable block (ram,0x000101bc08dc) */
/* WARNING: Removing unreachable block (ram,0x000101bc08c8) */
/* WARNING: Removing unreachable block (ram,0x000101bc0ae0) */
/* WARNING: Removing unreachable block (ram,0x000101bc0af0) */

void FUN_101bc21c8(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_2 == 0) {
    if (param_1 != 0) {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar5 = param_1;
        if (-1 < (long)param_1) {
          uVar5 = uVar6;
        }
        func_0x000107c60480(uVar5,0,*(undefined8 *)(unaff_x20 + 0x10));
      }
      if (uVar5 != 0) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101bc0b1c);
            (*pcVar1)();
          }
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c61174(uVar2);
        }
        else {
          uVar2 = 0;
          FUN_101bc1ee0(0,param_1);
        }
        puVar3 = PTR_PTR_1126a8c10;
        func_0x000107c610f8(PTR_PTR_1126a8c10);
        func_0x000107c453e4();
        func_0x000107c40854(uVar2);
        func_0x000107c61180();
        func_0x000107c53a1c(puVar3);
        goto code_r0x000107c61170;
      }
    }
    puVar3 = PTR_PTR_1126a8c10;
    func_0x000107c610f8(PTR_PTR_1126a8c10);
    func_0x000107c453e4();
    uVar2 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f002440);
    func_0x000107c54654(puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126a8c10;
    func_0x000107c610f8(PTR_PTR_1126a8c10);
    func_0x000107c614b0(param_2);
    func_0x000107c453e4(puVar3);
    func_0x000107c614cc(param_2,auStack_48,auStack_60);
    uVar4 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    uVar2 = uStack_58;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
    func_0x000107c54654(puVar3);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101bc21d0; end: 101bc220f;  */

void FUN_101bc21d0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101bc2210; end: 101bc2233;  */

void FUN_101bc2210(long param_1,long param_2)

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



/* Entry: 101bc2234; end: 101bc235b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc2234(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_112e07978);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lStack_48);
  lVar1 = 0;
  func_0x000101bc081c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  puVar2 = &UNK_1104521e8;
  func_0x000107c613fc(&UNK_1104521e8,0x28,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x0001000285a8(0x112e078d0,&UNK_10d9dbe48);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_101bc245c;
  func_0x0001000bdd8c(FUN_101bc245c,puVar2);
  uVar4 = 0;
  func_0x0001002a98f0(0);
  func_0x000107c610f8();
  func_0x000102758570(pcVar3,uVar4);
  func_0x000107c61574(lVar1);
  *param_1 = pcVar3;
  return;
}



/* Entry: 101bc235c; end: 101bc2377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc235c(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10));
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_112e07978);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_48);
  lVar1 = 0;
  func_0x000101bc081c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  puVar2 = &UNK_1104521e8;
  func_0x000107c613fc(&UNK_1104521e8,0x28,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x0001000285a8(0x112e078d0,&UNK_10d9dbe48);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  pcVar3 = FUN_101bc245c;
  func_0x0001000bdd8c(FUN_101bc245c,puVar2);
  uVar4 = 0;
  func_0x0001002a98f0(0);
  func_0x000107c610f8();
  func_0x000102758570(pcVar3,uVar4);
  func_0x000107c61574(lVar1);
  *param_1 = pcVar3;
  return;
}



/* Entry: 101bc2378; end: 101bc2427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc2378(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4d090(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_1130806d8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  FUN_101bc2468(param_2,uVar1,uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 101bc2428; end: 101bc245b;  */

void FUN_101bc2428(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bc245c; end: 101bc2467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bc245c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar3,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4d090(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_1130806d8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  FUN_101bc2468(uVar3,uVar1,uVar2);
  *param_1 = uVar3;
  return;
}


