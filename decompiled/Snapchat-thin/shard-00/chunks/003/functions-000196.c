/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100470098; end: 10047027b;  */

void FUN_100470098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a82f8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
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
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6e90);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
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
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10047027c; end: 1004703af; -[SCLensProcessingSharedServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047027c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126db938;
  func_0x000107c61160(PTR_PTR_1126db938);
  puVar2 = PTR_PTR_1126db920;
  func_0x000107c610f4(PTR_PTR_1126db920);
  lVar3 = param_1 + _DAT_112779c6c;
  func_0x000107c61148(lVar3);
  lVar4 = lVar3;
  func_0x000107c5c21c();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112779c70;
  func_0x000107c61148(param_1);
  lVar5 = param_1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c41b80();
  func_0x000107c61180();
  func_0x000107c48b04(puVar2,param_2,lVar4,lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  puVar7 = PTR_PTR_1126db940;
  func_0x000107c61160(PTR_PTR_1126db940);
  puVar8 = PTR_PTR_1126db948;
  func_0x000107c610f4(PTR_PTR_1126db948);
  func_0x000107c465b0();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1004703b0; end: 10047041b; -[SCLensProcessingSharedDirtyFrameProvider init] */

undefined1 * FUN_1004703b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe130;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10047041c; end: 100470577; -[SCLensProcessingSharedTranscodingWorkflow initWithStudySettingsProvider:didEnterBackgroundObservable:] */

undefined8 *
FUN_10047041c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fe140;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c451b0();
    func_0x000107c61180();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[6] = 0;
    func_0x000107c61144(auStack_48,puVar1);
    func_0x000107c6111c(auStack_50,auStack_48);
    uVar2 = param_4;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100470578; end: 1004705ef; +[SCFuture immediateFutureWithValue:] */

void FUN_100470578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c610f4(PTR_PTR_1126ae558);
  func_0x000107c3b9d8();
  func_0x000107c3b0c8();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004705f0; end: 1004705fb; -[SCFuture _completeWithValue:] */

void FUN_1004705f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_112556778,param_3,1,1);
  return;
}



/* Entry: 1004705fc; end: 10047072b; -[SCFuture _completeWithItem:tag:assertIfAlreadyCompleted:] */

/* WARNING: Possible PIC construction at 0x000100470680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004706d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100470684) */
/* WARNING: Removing unreachable block (ram,0x00010047069c) */
/* WARNING: Removing unreachable block (ram,0x0001004706a0) */
/* WARNING: Removing unreachable block (ram,0x0001004706ac) */
/* WARNING: Removing unreachable block (ram,0x0001004706cc) */
/* WARNING: Removing unreachable block (ram,0x0001004706b4) */
/* WARNING: Removing unreachable block (ram,0x0001004706d4) */

void FUN_1004705fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c611ec(param_1 + 0x28);
  if (*(byte *)(param_1 + 0x2c) - 1 < 2) {
    func_0x000107c611f0(param_1 + 0x28);
    FUN_10047072c(&uStack_58);
    uVar1 = param_3;
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 8);
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10047072c; end: 100470797;  */

void FUN_10047072c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar2;
    if (puVar2 != puVar3) {
      do {
        func_0x000107c61170(puVar3[-2]);
        puVar3 = puVar3 + -3;
        func_0x000107c61170(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 100470798; end: 100470953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100470798(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = _DAT_11302a8f0;
  lVar7 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1001830b8();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  func_0x000100470974(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5f80c(lVar7);
  func_0x000107c5ffc0(lVar6);
  (**(code **)(lVar8 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO5neveryA2EmFWC_11034f958
             ,lVar1);
  uVar4 = 0xd00000000000003e;
  func_0x000107c5ffec(0xd00000000000003e,0x800000010f1cb780,lVar7,lVar6,puVar5,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302a8f8) = uVar4;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_11302a8e8) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100470954; end: 1004709b3; -[SCLensInMemoryAssetsProvider init] */

void FUN_100470954(void)

{
  FUN_100470798();
  return;
}



/* Entry: 1004709b4; end: 100470a7f; -[SCLensProcessingSharedServices initWithDirtyFrameProvider:lensProcessingTranscodingProvider:inmemoryAssetsDataProvider:] */

undefined1 *
FUN_1004709b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112700a70;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100470a80; end: 100470ab3;  */

void FUN_100470a80(void)

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



/* Entry: 100470ab4; end: 1004713b7; -[SCLensProcessingProxyEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100470ab4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ac0848);
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_112779830;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c4b32c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar32 = (long)_DAT_112779834;
  lVar2 = param_1 + lVar32;
  func_0x000107c61148();
  lVar4 = lVar2;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar5 = PTR_PTR_1126ae720;
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_108c9b944;
  puStack_90 = &UNK_110ac0868;
  func_0x000107c61174(lVar3);
  lStack_88 = lVar3;
  func_0x000107c61174(lVar4);
  lStack_80 = lVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3b278();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar8 = param_1;
  func_0x000107c3b278();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126db738;
  func_0x000107c610f4();
  func_0x000107c47108();
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + _DAT_11277988c);
  }
  func_0x000107c42c20(uVar10);
  lVar31 = (long)_DAT_112779838;
  lVar29 = param_1 + lVar31;
  func_0x000107c61148(lVar29);
  lVar11 = lVar29;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  func_0x000107c61144(auStack_b0,lVar11);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar29);
  lVar31 = param_1 + lVar31;
  func_0x000107c61148(lVar31);
  lVar29 = lVar31;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  func_0x000107c61144(auStack_b8,lVar29);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar31);
  puVar12 = PTR_PTR_1126ae720;
  puStack_e8 = puVar13;
  uStack_e0 = 0xc2000000;
  puStack_d8 = &UNK_108c9ba18;
  puStack_d0 = &UNK_1108cc6c8;
  func_0x000107c6111c(auStack_c8,auStack_b0);
  func_0x000107c6111c(auStack_c0,auStack_b8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar29 = param_1 + _DAT_11277983c;
  func_0x000107c61148();
  lVar31 = lVar29;
  func_0x000107c4af44();
  func_0x000107c61180();
  func_0x000107c61170(lVar29);
  puVar13 = PTR_PTR_1126db748;
  func_0x000107c61160();
  puVar14 = PTR_PTR_1126db750;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112779880;
    func_0x000107c61148(lVar29);
  }
  lVar11 = lVar29;
  func_0x000107c5dac4(lVar29);
  func_0x000107c61180();
  func_0x000107c491a4();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar29);
  puVar15 = PTR_PTR_1126db758;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + lVar32;
    func_0x000107c61148(lVar29);
  }
  lVar11 = lVar29;
  func_0x000107c4b2ec(lVar29);
  func_0x000107c61180();
  func_0x000107c4753c();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112779840);
  *(undefined **)(param_1 + _DAT_112779840) = puVar15;
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar29);
  func_0x000107c57da4(puVar13);
  func_0x000107c6111c(auStack_f0,param_1 + _DAT_112779844);
  puVar15 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_f8,auStack_f0);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126db760;
  func_0x000107c610f4();
  lVar29 = param_1 + _DAT_112779848;
  func_0x000107c61148();
  lVar17 = lVar29;
  func_0x000107c4ad38();
  func_0x000107c61180();
  lVar11 = param_1 + _DAT_11277984c;
  func_0x000107c61148(lVar11);
  lVar18 = lVar11;
  func_0x000107c4fe34();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_112779850;
  func_0x000107c61148(lVar19);
  lVar20 = lVar19;
  func_0x000107c5063c();
  func_0x000107c61180();
  lVar30 = (long)_DAT_112779854;
  lVar21 = param_1 + lVar30;
  func_0x000107c61148(lVar21);
  lVar22 = lVar21;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar23 = param_1 + _DAT_112779858;
  func_0x000107c61148(lVar23);
  lVar24 = lVar23;
  func_0x000107c41ea4();
  func_0x000107c61180();
  func_0x000107c47248();
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar29);
  puVar25 = PTR_PTR_1126db768;
  func_0x000107c610f4(PTR_PTR_1126db768);
  lVar32 = param_1 + lVar32;
  func_0x000107c61148();
  lVar17 = lVar32;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar30 = param_1 + lVar30;
  func_0x000107c61148();
  lVar18 = lVar30;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar29 = param_1 + _DAT_11277985c;
  func_0x000107c61148();
  lVar20 = lVar29;
  func_0x000107c408d4();
  func_0x000107c61180();
  lVar11 = param_1 + _DAT_112779860;
  func_0x000107c61148();
  lVar22 = lVar11;
  func_0x000107c4f15c();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_112779864;
  func_0x000107c61148();
  lVar24 = lVar19;
  func_0x000107c3ddd8();
  func_0x000107c61180();
  lVar21 = param_1 + _DAT_112779868;
  func_0x000107c61148();
  lVar26 = lVar21;
  func_0x000107c4b254();
  func_0x000107c61180();
  lVar23 = param_1 + _DAT_112779888;
  func_0x000107c61148();
  lVar27 = lVar23;
  func_0x000107c4f680();
  func_0x000107c61180();
  func_0x000107c48e48(puVar25);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar32);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112779890);
  func_0x000107c61174(uVar10);
  func_0x000107c42c20(uVar10);
  func_0x000107c61170(uVar10);
  puVar28 = PTR_PTR_1126db770;
  func_0x000107c610f4(PTR_PTR_1126db770);
  lVar32 = param_1 + _DAT_11277986c;
  func_0x000107c61148();
  lVar29 = lVar32;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c473b8(puVar28);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar32);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112779894);
  func_0x000107c61174(uVar10);
  func_0x000107c42c20(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61120(auStack_f0);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_c8);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1004713b8; end: 100471587; -[SCLensProcessingProxyEntryPoint _createLaunchDataStoreWithEntryPointTracker:persistanceStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004713b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar2 = param_1 + _DAT_112779870;
  func_0x000107c61148();
  lVar3 = param_1 + _DAT_112779874;
  func_0x000107c61148();
  param_1 = param_1 + _DAT_112779878;
  func_0x000107c61148();
  lVar4 = param_1;
  func_0x000107c5c21c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar5 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_108c9bb3c;
  puStack_70 = &UNK_110855710;
  lStack_68 = lVar4;
  func_0x000107c61174(lVar4);
  func_0x000107c3e4fc(puVar5,param_2,&puStack_88);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_108c9bb6c;
  puStack_b8 = &UNK_110ac08f8;
  uStack_b0 = param_4;
  uStack_a8 = param_3;
  lStack_a0 = lVar2;
  lStack_98 = lVar3;
  puStack_90 = puVar5;
  func_0x000107c61174();
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3e4fc(puVar6,param_2,&puStack_d0);
  func_0x000107c61180();
  func_0x000107c61170(puStack_90);
  func_0x000107c61170(lStack_98);
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100471588; end: 100471597; -[_TtC25SCNGLStudySettingServices25SCNGLStudySettingServices studySettingsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100471588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130344b8));
  return;
}



/* Entry: 100471598; end: 100471693; -[SCLensProcessingLaunchDataServices initWithLaunchDataStore:sessionDataStore:entryPointTracker:postCaptureEntryPointTracker:] */

undefined1 *
FUN_100471598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112701518;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100471694; end: 10047177f; -[SCLensProcessingGlobalTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100471694(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_11302b6d8;
  lVar3 = 0x11302b4e0;
  FUN_1000285a8(0x11302b4e0,&UNK_10dca66e0);
  lVar4 = lVar3;
  func_0x000107c613fc();
  FUN_1000c2754();
  *(long *)(param_1 + lVar1) = lVar4;
  lVar1 = _DAT_11302b6e0;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  FUN_1000c2754();
  *(long *)(param_1 + lVar1) = lVar3;
  lVar3 = _DAT_11302b6e8;
  uVar5 = 0x11302b4e8;
  FUN_1000285a8(0x11302b4e8,&UNK_10dca6560);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(param_1 + lVar3) = uVar5;
  *(undefined8 *)(param_1 + _DAT_11302b6d0) = 0;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100471780; end: 1004717bf;  */

void FUN_100471780(void)

{
  func_0x000107c61168(&PTR_PTR_11299f468);
  return;
}



/* Entry: 1004717c0; end: 100471887; -[SCLensCorePerformanceLogger initWithUserBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1004717c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar3 = &lStack_40;
  puVar1 = &UNK_11071d190;
  func_0x000107c613fc(&UNK_11071d190,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  FUN_1000285a8(0x112dd0250,&UNK_10dca67b0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  puVar2 = &UNK_103ec9cf0;
  FUN_1000bdd8c(&UNK_103ec9cf0,puVar1);
  *(undefined **)(param_1 + _DAT_11302b8a8) = puVar2;
  FUN_1004718b0();
  lStack_40 = param_1;
  puStack_38 = puVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 100471888; end: 1004718ab;  */

void FUN_100471888(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004718ac; end: 1004718af;  */

void FUN_1004718ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004718b0; end: 1004718cf;  */

void FUN_1004718b0(void)

{
  func_0x000107c61168(&PTR_PTR_11295feb0);
  return;
}



/* Entry: 1004718d0; end: 10047192b; -[SCLensPerformanceLoggingWorkflow initWithLogger:tracker:lensPerformerProvider:] */

void FUN_1004718d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  FUN_10047192c(param_3,param_4,param_5);
  return;
}



/* Entry: 10047192c; end: 100471a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10047192c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = _DAT_11302b8e8;
  puVar2 = &stack0xffffffffffffffb0;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11302b8f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302b8f8) = param_2;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  lVar3 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  *(long *)(unaff_x20 + _DAT_11302b900) = lVar3;
  func_0x000100471a88();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_100471aa8();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100471a4c; end: 100471a53; -[SCLensBasePerformerProvider loggingQueuePerformer] */

void FUN_100471a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 100471a54; end: 100471aa7;  */

void FUN_100471a54(void)

{
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100471aa8; end: 100471d9b;  */

/* WARNING: Possible PIC construction at 0x000100471bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100471c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100471d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100471c94) */
/* WARNING: Removing unreachable block (ram,0x000100471bdc) */
/* WARNING: Removing unreachable block (ram,0x000100471d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100471aa8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  plVar5 = *(long **)(unaff_x20 + _DAT_11302b900);
  if (plVar5 != (long *)0x0) {
    FUN_1000285a8(0x11302b930,&UNK_10dca6830);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11302b8f8);
    func_0x000107c615f0(plVar5);
    func_0x000107c4aff4(uVar6);
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x0001000b637c();
    func_0x000107c61170(uVar6);
    FUN_100471e0c(plVar5,0);
    func_0x000107c61574(uVar1);
    puVar2 = &UNK_11071d1b8;
    func_0x000107c613fc(&UNK_11071d1b8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,*(undefined8 *)(unaff_x20 + _DAT_11302b8f0));
    puVar3 = &UNK_103ec9f04;
    puVar4 = puVar2;
    (**(code **)(*plVar5 + 0x60))(&UNK_103ec9f04);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar2);
    puVar2 = puVar3;
    func_0x000107c614f0(puVar3);
    (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_11302b8e8),puVar2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar3);
    return;
  }
  return;
}



/* Entry: 100471d9c; end: 100471dbf;  */

void FUN_100471d9c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100471dc0; end: 100471dff; -[SCLensProcessingGlobalTracker lensCoreCreatedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100471dc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100471e00; end: 100471e0b;  */

void FUN_100471e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820ce4);
  return;
}



/* Entry: 100471e0c; end: 100471e83;  */

long * FUN_100471e0c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_100471e00(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  FUN_1000c0ea8(lVar1);
  func_0x000107c6157c();
  func_0x000107c615f0(param_1);
  return unaff_x20;
}



/* Entry: 100471e84; end: 100471e87;  */

void FUN_100471e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 100471e88; end: 100471ecf;  */

void FUN_100471e88(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &UNK_10dd3ba38;
  puStack_18 = &UNK_10dd3ba50;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 100471ed0; end: 100471edb;  */

void FUN_100471ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820d50);
  return;
}



/* Entry: 100471edc; end: 100471fb7;  */

undefined1  [16] FUN_100471edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar2 = 0;
  FUN_100471ed0(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_1000b693c(param_2,param_3);
  lVar5 = unaff_x20[3];
  lVar1 = unaff_x20[4];
  func_0x000107c615f0(lVar5);
  FUN_100472524(param_2,lVar5,(char)lVar1);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar3 = &DAT_10dd3bb00;
  uStack_48 = param_2;
  func_0x000107c61520(&DAT_10dd3bb00,uVar2);
  puVar4 = &uStack_48;
  (*pcVar6)(puVar4,uVar2,puVar3);
  func_0x000107c61574(param_2);
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 100471fb8; end: 100471fbb;  */

void FUN_100471fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 100471fbc; end: 100472047;  */

void FUN_100471fbc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_11034d678 + 0x40;
    puStack_30 = &UNK_10dd3baa8;
    puStack_28 = &UNK_10dd3bac0;
    func_0x000107c61524(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 100472048; end: 10047204b;  */

undefined8 * FUN_100472048(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *param_1 = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_100472450(param_1,0);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  func_0x000107c60c64(param_1 + 3,"dns:///");
  return param_1;
}



/* Entry: 10047204c; end: 100472137;  */

undefined8 * FUN_10047204c(undefined8 *param_1)

{
  param_1[0x19] = 0;
  param_1[0x18] = param_1 + 0x19;
  param_1[0x1a] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_100472048(param_1 + 0x1e);
  return param_1;
}



/* Entry: 100472138; end: 10047244f;  */

long **** FUN_100472138(void)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long ******pppppplVar4;
  long ****pppplVar5;
  code *pcVar6;
  long ******pppppplVar7;
  long ****pppplVar8;
  ulong uVar9;
  long ******pppppplVar10;
  long *****ppppplVar11;
  long lVar12;
  long ******pppppplVar13;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long ***appplStack_168 [24];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  long ***appplStack_90 [3];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_60;
  char cStack_49;
  long ***ppplStack_48;
  
  FUN_10047204c(appplStack_168);
  ppppplStack_180 = (long *****)0x0;
  ppppplStack_178 = (long *****)0x0;
  ppppplStack_170 = (long *****)0x0;
  if (ppppplRam0000000113815bf0 != (long *****)0x0) {
    ppppplVar11 = ppppplRam0000000113815bf0;
    do {
      if (ppppplStack_178 < ppppplStack_170) {
        pppppplVar13 = (long ******)(ppppplStack_178 + 1);
        *ppppplStack_178 = (long ****)ppppplVar11;
      }
      else {
        lVar12 = (long)ppppplStack_178 - (long)ppppplStack_180 >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x000104ab1f7c(&ppppplStack_180);
          goto LAB_100472414;
        }
        uVar9 = (long)ppppplStack_170 - (long)ppppplStack_180 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppppplStack_170 - (long)ppppplStack_180)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pppppplVar7 = (long ******)0x0;
        }
        else {
          pppppplVar7 = &ppppplStack_170;
          func_0x000104ab1f90();
        }
        pppppplVar10 = pppppplVar7 + lVar12;
        pppppplVar13 = pppppplVar10 + 1;
        *pppppplVar10 = ppppplVar11;
        pppppplVar4 = (long ******)ppppplStack_178;
        while (ppppplStack_178 != ppppplStack_180) {
          ppppplStack_178 = ppppplStack_178 + -1;
          pppppplVar10 = pppppplVar10 + -1;
          *pppppplVar10 = (long *****)*ppppplStack_178;
          pppppplVar4 = (long ******)ppppplStack_180;
        }
        ppppplStack_170 = (long *****)(pppppplVar7 + uVar9);
        ppppplStack_180 = (long *****)pppppplVar10;
        if (pppppplVar4 != (long ******)0x0) {
          ppppplStack_178 = (long *****)pppppplVar13;
          func_0x000107c60e14(pppppplVar4);
        }
      }
      ppppplVar11 = (long *****)ppppplVar11[4];
      ppppplStack_178 = (long *****)pppppplVar13;
    } while (ppppplVar11 != (long *****)0x0);
  }
  if (ppppplStack_178 != ppppplStack_180) {
    pppppplVar7 = (long ******)ppppplStack_178;
    do {
      pppppplVar7 = pppppplVar7 + -1;
      pppplVar8 = (*pppppplVar7)[3];
      ppplStack_48 = (long ***)appplStack_168;
      if (pppplVar8 == (long ****)0x0) {
        func_0x000104a71f98();
LAB_100472414:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100472418);
        (*pcVar6)();
      }
      (*(code *)(*pppplVar8)[6])(pppplVar8,&ppplStack_48);
    } while (pppppplVar7 != (long ******)ppppplStack_180);
  }
  if (pcRam0000000113815bf8 != (code *)0x0) {
    (*pcRam0000000113815bf8)(appplStack_168);
  }
  pppplVar8 = appplStack_168;
  FUN_10047598c();
  while (pppplVar5 = pppplRam0000000113815be8, pppplRam0000000113815be8 == (long ****)0x0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x113815be8,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      pppplRam0000000113815be8 = pppplVar8;
    }
    if (cVar2 == '\0') goto LAB_10047234c;
  }
  ClearExclusiveLocal();
  if (*(char *)((long)pppplVar8 + 0x11f) < '\0') {
    func_0x000107c60e14(pppplVar8[0x21]);
  }
  FUN_100472450(pppplVar8 + 0x1e,pppplVar8[0x1f]);
  ppplStack_48 = (long ***)(pppplVar8 + 0x1b);
  FUN_100476c60(&ppplStack_48);
  FUN_100476de4(pppplVar8 + 0x18,pppplVar8[0x19]);
  lVar12 = 0xa8;
  do {
    ppplStack_48 = (long ***)((long)pppplVar8 + lVar12);
    FUN_100476e3c(&ppplStack_48);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0x78);
  do {
    ppplStack_48 = (long ***)((long)pppplVar8 + lVar12);
    func_0x000104ab1ee4(&ppplStack_48);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0);
  ppplStack_48 = (long ***)pppplVar8;
  FUN_100477424(&ppplStack_48);
  func_0x000107c60e14(pppplVar8);
  pppplVar8 = pppplVar5;
LAB_10047234c:
  if ((long ******)ppppplStack_180 != (long ******)0x0) {
    ppppplStack_178 = ppppplStack_180;
    func_0x000107c60e14();
  }
  if (cStack_49 < '\0') {
    func_0x000107c60e14(uStack_60);
  }
  FUN_100472450(auStack_78,uStack_70);
  ppppplStack_180 = (long *****)appplStack_90;
  FUN_100476c60(&ppppplStack_180);
  FUN_100476de4(auStack_a8,uStack_a0);
  lVar12 = 0xa8;
  do {
    ppppplStack_180 = (long *****)((long)appplStack_168 + lVar12);
    FUN_100476e3c(&ppppplStack_180);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0x78);
  lVar12 = 0x78;
  do {
    ppppplStack_180 = (long *****)((long)appplStack_168 + lVar12);
    func_0x000100476eb8(&ppppplStack_180);
    lVar12 = lVar12 + -0x18;
  } while (lVar12 != 0);
  ppppplStack_180 = (long *****)appplStack_168;
  FUN_100477424(&ppppplStack_180);
  return pppplVar8;
}



/* Entry: 100472450; end: 1004724a7;  */

void FUN_100472450(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_100472450(param_1,*param_2);
    FUN_100472450(param_1,param_2[1]);
    plVar1 = (long *)param_2[6];
    param_2[6] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1004724a8; end: 100472523;  */

undefined8 * FUN_1004724a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *param_1 = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_100472450(param_1,0);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  func_0x000107c60c64(param_1 + 3,"dns:///");
  return param_1;
}



/* Entry: 100472524; end: 10047263b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100472524(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c5eec4(unaff_x20 + _DAT_113815498);
  *(undefined8 *)(unaff_x20 + _DAT_113095328) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113095330) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113095338) = param_3;
  return unaff_x20;
}



/* Entry: 10047263c; end: 1004727a3;  */

undefined * FUN_10047263c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar7 = *unaff_x20;
  puVar1 = &UNK_1107a7128;
  func_0x000107c613fc(&UNK_1107a7128,0x20,7);
  puVar2 = &UNK_1107a7150;
  func_0x000107c613fc(&UNK_1107a7150,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar3 = &UNK_1107a7178;
  func_0x000107c613fc(&UNK_1107a7178,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcVar8 = *(code **)(lVar7 + 0x70);
  func_0x000107c615f4(param_1,2);
  pcVar4 = FUN_100672c28;
  puVar6 = puVar2;
  (*pcVar8)(FUN_100672c28,puVar2,&UNK_1048772f8,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar2);
  *(code **)(puVar1 + 0x10) = pcVar4;
  *(undefined **)(puVar1 + 0x18) = puVar6;
  puVar3 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puStack_50 = &UNK_104877300;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000f6b44;
  puStack_58 = &UNK_1107a7190;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar1);
  return puVar3;
}



/* Entry: 1004727a4; end: 10047280f;  */

void FUN_1004727a4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100472810; end: 100472813;  */

void FUN_100472810(long param_1,long param_2)

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



/* Entry: 100472814; end: 10047285f; +[SCDisposableObserver create:] */

void FUN_100472814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fc0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c45a20();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100472860; end: 1004728eb;  */

void FUN_100472860(long param_1)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_FUN_1107c7560;
  plStack_28 = plVar1;
  FUN_1004729a0(param_1 + 0x90,1,0,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* Entry: 1004728ec; end: 10047299f;  */

void FUN_1004728ec(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **appuStack_d8 [3];
  undefined ***pppuStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  FUN_100472860();
  FUN_100472d54(param_1);
  FUN_100472e64(param_1);
  FUN_1004737f0(param_1);
  FUN_1004738d4(param_1);
  FUN_100473a40(param_1);
  FUN_100473bb4(param_1);
  FUN_100473ca4(param_1);
  FUN_100474108(param_1);
  FUN_1004742f4(param_1);
  FUN_1004744d0(param_1);
  FUN_1004745c4(param_1);
  FUN_100474a34(param_1);
  func_0x000100474ad0(param_1);
  FUN_100474ad4(param_1);
  FUN_100475100(param_1);
  FUN_1004753f8(param_1);
  FUN_10047548c(param_1);
  FUN_1004756c4(param_1);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_DAT_1107c3a70;
  pcStack_50 = FUN_100560c2c;
  pppuStack_40 = &ppuStack_58;
  FUN_1004732f0(param_1,1,10000,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_100475740:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_100475740;
  }
  ppuStack_78 = &PTR_DAT_1107c3a70;
  pcStack_70 = FUN_100560c2c;
  pppuStack_60 = &ppuStack_78;
  FUN_1004732f0(param_1,3,10000,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_78;
LAB_10047578c:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_60;
    goto LAB_10047578c;
  }
  ppuStack_98 = &PTR_DAT_1107c3a70;
  pcStack_90 = FUN_100560c2c;
  pppuStack_80 = &ppuStack_98;
  FUN_1004732f0(param_1,4,10000,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_98;
LAB_1004757d8:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_80;
    goto LAB_1004757d8;
  }
  appuStack_b8[0] = &PTR_DAT_1107c6c88;
  pppuStack_a0 = appuStack_b8;
  FUN_1004732f0(param_1,2,10000,appuStack_b8);
  if (pppuStack_a0 == appuStack_b8) {
    lVar4 = 4;
    pppuVar1 = appuStack_b8;
LAB_10047582c:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_a0;
    goto LAB_10047582c;
  }
  appuStack_d8[0] = &PTR_DAT_1107c6d08;
  puVar3 = (undefined8 *)0x4;
  pppuStack_c0 = appuStack_d8;
  FUN_1004732f0(param_1,4,0x7fffffff,appuStack_d8);
  if (pppuStack_c0 == appuStack_d8) {
    lVar4 = 4;
    pppuVar1 = appuStack_d8;
LAB_100475880:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_c0;
    if (pppuStack_c0 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100475880;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_c0 == appuStack_d8) {
    lVar4 = 4;
    pppuVar2 = appuStack_d8;
  }
  else {
    if (pppuStack_c0 == (undefined ***)0x0) goto LAB_10047595c;
    lVar4 = 5;
    pppuVar2 = pppuStack_c0;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_10047595c:
  func_0x000107c60bd8(pppuVar1);
  *puVar3 = &PTR_DAT_1107c6c88;
  return;
}



/* Entry: 1004729a0; end: 1004729bf;  */

undefined1  [16] FUN_1004729a0(long param_1,int param_2,ulong param_3,undefined8 *param_4)

{
  long *****ppppplVar1;
  long ****pppplVar2;
  long lVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long ***ppplVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  long ****pppplStack_40;
  long ****pppplStack_38;
  
  ppppplVar1 = (long *****)(param_1 + (param_3 & 0xffffffff) * 0x18);
  ppppplVar6 = ppppplVar1;
  if (param_2 == 0) {
    ppppplVar6 = ppppplVar1 + 1;
  }
  ppppplVar6 = (long *****)*ppppplVar6;
  ppppplVar7 = (long *****)ppppplVar1[1];
  ppppplVar5 = ppppplVar1 + 2;
  if (ppppplVar7 < *ppppplVar5) {
    ppppplVar5 = ppppplVar6;
    if (ppppplVar6 == ppppplVar7) {
      pppplVar2 = (long ****)*param_4;
      *param_4 = 0;
      *ppppplVar6 = pppplVar2;
      ppppplVar1[1] = (long ****)(ppppplVar6 + 1);
      ppppplVar1 = ppppplVar6;
    }
    else {
      func_0x000104addf8c(ppppplVar1,ppppplVar6,ppppplVar7,ppppplVar6 + 1);
      pppplVar8 = (long ****)*param_4;
      *param_4 = 0;
      pppplVar2 = *ppppplVar6;
      *ppppplVar6 = pppplVar8;
      ppppplVar1 = ppppplVar6;
      if (pppplVar2 != (long ****)0x0) {
        (*(code *)(*pppplVar2)[2])();
      }
    }
  }
  else {
    pppplVar2 = *ppppplVar1;
    uVar10 = ((long)ppppplVar7 - (long)pppplVar2 >> 3) + 1;
    if (uVar10 >> 0x3d != 0) {
      func_0x000104ade03c();
      FUN_100472cf4(&pppplStack_58);
      func_0x000107c60bd8();
      if ((ulong)ppppplVar6 >> 0x3d != 0) {
        func_0x000104a7757c();
        pppplVar2 = ppppplVar1[2];
        ppppplVar5 = ppppplVar1;
        if (pppplVar2 == ppppplVar1[3]) {
          ppppplVar7 = (long *****)*ppppplVar1;
          ppppplVar5 = (long *****)ppppplVar1[1];
          if (ppppplVar5 < ppppplVar7 || (long)ppppplVar5 - (long)ppppplVar7 == 0) {
            uVar10 = (long)pppplVar2 - (long)ppppplVar7 >> 2;
            if ((long)pppplVar2 - (long)ppppplVar7 == 0) {
              uVar10 = 1;
            }
            pppplVar4 = ppppplVar1[4];
            uVar11 = uVar10;
            ppplStack_b8 = (long ***)pppplVar4;
            FUN_100472b04();
            pppplVar2 = pppplVar4 + (uVar10 >> 2);
            ppplStack_d0 = (long ***)ppppplVar1[1];
            uVar10 = (long)ppppplVar1[2] - (long)ppplStack_d0;
            pppplVar8 = pppplVar2;
            ppplStack_c8 = ppplStack_d0;
            if (uVar10 != 0) {
              lVar3 = ((long)uVar10 >> 3) << 3;
              do {
                ppplVar12 = (long ***)*ppplStack_d0;
                *ppplStack_d0 = (long **)0x0;
                *pppplVar8 = ppplVar12;
                lVar3 = lVar3 + -8;
                ppplStack_d0 = ppplStack_d0 + 1;
                pppplVar8 = pppplVar8 + 1;
              } while (lVar3 != 0);
              ppplStack_d0 = (long ***)ppppplVar1[1];
              pppplVar8 = (long ****)((long)pppplVar2 + (uVar10 & 0xfffffffffffffff8));
              ppplStack_c8 = (long ***)ppppplVar1[2];
            }
            ppplStack_d8 = (long ***)*ppppplVar1;
            *ppppplVar1 = pppplVar4;
            ppppplVar1[1] = pppplVar2;
            ppplStack_c0 = (long ***)ppppplVar1[3];
            ppppplVar1[2] = pppplVar8;
            ppppplVar1[3] = pppplVar4 + uVar11;
            ppppplVar5 = (long *****)&ppplStack_d8;
            FUN_100472cf4(ppppplVar5);
            pppplVar2 = ppppplVar1[2];
          }
          else {
            lVar3 = (long)ppppplVar5 - (long)ppppplVar7 >> 3;
            uVar10 = lVar3 + 2;
            if (-2 < lVar3) {
              uVar10 = lVar3 + 1;
            }
            func_0x000104ade050(ppppplVar5,pppplVar2,ppppplVar5 + -(uVar10 >> 1));
            ppppplVar1[1] = ppppplVar1[1] + -(uVar10 >> 1);
            ppppplVar1[2] = pppplVar2;
          }
        }
        pppplVar8 = *ppppplVar6;
        *ppppplVar6 = (long ****)0x0;
        *pppplVar2 = (long ***)pppplVar8;
        ppppplVar1[2] = ppppplVar1[2] + 1;
        auVar15._8_8_ = pppplVar2;
        auVar15._0_8_ = ppppplVar5;
        return auVar15;
      }
      lVar3 = (long)ppppplVar6 << 3;
      func_0x000107c60e20(lVar3);
      auVar14._8_8_ = ppppplVar6;
      auVar14._0_8_ = lVar3;
      return auVar14;
    }
    uVar9 = (long)*ppppplVar5 - (long)pppplVar2;
    uVar11 = (long)uVar9 >> 2;
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar11 = 0x1fffffffffffffff;
    }
    pppplStack_38 = (long ****)ppppplVar5;
    if (uVar11 == 0) {
      pppplStack_58 = (long ****)0x0;
    }
    else {
      FUN_100472b04();
      pppplStack_58 = (long ****)ppppplVar5;
    }
    pppplStack_50 = pppplStack_58 + ((long)ppppplVar6 - (long)pppplVar2 >> 3);
    pppplStack_40 = pppplStack_58 + uVar11;
    pppplStack_48 = pppplStack_50;
    FUN_100472b38(&pppplStack_58,param_4);
    ppppplVar5 = &pppplStack_58;
    FUN_100472c58(ppppplVar1,ppppplVar5,ppppplVar6);
    FUN_100472cf4(&pppplStack_58);
  }
  auVar13._8_8_ = ppppplVar5;
  auVar13._0_8_ = ppppplVar1;
  return auVar13;
}



/* Entry: 1004729c0; end: 100472b03;  */

undefined1  [16] FUN_1004729c0(long *****param_1,long *****param_2,undefined8 *param_3)

{
  long ****pppplVar1;
  long lVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long ****pppplVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long ***ppplVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  long ****pppplStack_40;
  long ****pppplStack_38;
  
  ppppplVar5 = (long *****)param_1[1];
  ppppplVar4 = param_1 + 2;
  if (ppppplVar5 < *ppppplVar4) {
    ppppplVar4 = param_2;
    if (param_2 == ppppplVar5) {
      pppplVar1 = (long ****)*param_3;
      *param_3 = 0;
      *param_2 = pppplVar1;
      param_1[1] = (long ****)(param_2 + 1);
      param_1 = param_2;
    }
    else {
      func_0x000104addf8c(param_1,param_2,ppppplVar5,param_2 + 1);
      pppplVar6 = (long ****)*param_3;
      *param_3 = 0;
      pppplVar1 = *param_2;
      *param_2 = pppplVar6;
      param_1 = param_2;
      if (pppplVar1 != (long ****)0x0) {
        (*(code *)(*pppplVar1)[2])();
      }
    }
  }
  else {
    pppplVar1 = *param_1;
    uVar8 = ((long)ppppplVar5 - (long)pppplVar1 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
      func_0x000104ade03c();
      FUN_100472cf4(&pppplStack_58);
      func_0x000107c60bd8();
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104a7757c();
        pppplVar1 = param_1[2];
        ppppplVar4 = param_1;
        if (pppplVar1 == param_1[3]) {
          ppppplVar5 = (long *****)*param_1;
          ppppplVar4 = (long *****)param_1[1];
          if (ppppplVar4 < ppppplVar5 || (long)ppppplVar4 - (long)ppppplVar5 == 0) {
            uVar8 = (long)pppplVar1 - (long)ppppplVar5 >> 2;
            if ((long)pppplVar1 - (long)ppppplVar5 == 0) {
              uVar8 = 1;
            }
            pppplVar3 = param_1[4];
            uVar9 = uVar8;
            ppplStack_b8 = (long ***)pppplVar3;
            FUN_100472b04();
            pppplVar1 = pppplVar3 + (uVar8 >> 2);
            ppplStack_d0 = (long ***)param_1[1];
            uVar8 = (long)param_1[2] - (long)ppplStack_d0;
            pppplVar6 = pppplVar1;
            ppplStack_c8 = ppplStack_d0;
            if (uVar8 != 0) {
              lVar2 = ((long)uVar8 >> 3) << 3;
              do {
                ppplVar10 = (long ***)*ppplStack_d0;
                *ppplStack_d0 = (long **)0x0;
                *pppplVar6 = ppplVar10;
                lVar2 = lVar2 + -8;
                ppplStack_d0 = ppplStack_d0 + 1;
                pppplVar6 = pppplVar6 + 1;
              } while (lVar2 != 0);
              ppplStack_d0 = (long ***)param_1[1];
              pppplVar6 = (long ****)((long)pppplVar1 + (uVar8 & 0xfffffffffffffff8));
              ppplStack_c8 = (long ***)param_1[2];
            }
            ppplStack_d8 = (long ***)*param_1;
            *param_1 = pppplVar3;
            param_1[1] = pppplVar1;
            ppplStack_c0 = (long ***)param_1[3];
            param_1[2] = pppplVar6;
            param_1[3] = pppplVar3 + uVar9;
            ppppplVar4 = (long *****)&ppplStack_d8;
            FUN_100472cf4(ppppplVar4);
            pppplVar1 = param_1[2];
          }
          else {
            lVar2 = (long)ppppplVar4 - (long)ppppplVar5 >> 3;
            uVar8 = lVar2 + 2;
            if (-2 < lVar2) {
              uVar8 = lVar2 + 1;
            }
            func_0x000104ade050(ppppplVar4,pppplVar1,ppppplVar4 + -(uVar8 >> 1));
            param_1[1] = param_1[1] + -(uVar8 >> 1);
            param_1[2] = pppplVar1;
          }
        }
        pppplVar6 = *param_2;
        *param_2 = (long ****)0x0;
        *pppplVar1 = (long ***)pppplVar6;
        param_1[2] = param_1[2] + 1;
        auVar13._8_8_ = pppplVar1;
        auVar13._0_8_ = ppppplVar4;
        return auVar13;
      }
      lVar2 = (long)param_2 << 3;
      func_0x000107c60e20(lVar2);
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = lVar2;
      return auVar12;
    }
    uVar7 = (long)*ppppplVar4 - (long)pppplVar1;
    uVar9 = (long)uVar7 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    pppplStack_38 = (long ****)ppppplVar4;
    if (uVar9 == 0) {
      pppplStack_58 = (long ****)0x0;
    }
    else {
      FUN_100472b04();
      pppplStack_58 = (long ****)ppppplVar4;
    }
    pppplStack_50 = pppplStack_58 + ((long)param_2 - (long)pppplVar1 >> 3);
    pppplStack_40 = pppplStack_58 + uVar9;
    pppplStack_48 = pppplStack_50;
    FUN_100472b38(&pppplStack_58,param_3);
    ppppplVar4 = &pppplStack_58;
    FUN_100472c58(param_1,ppppplVar4,param_2);
    FUN_100472cf4(&pppplStack_58);
  }
  auVar11._8_8_ = ppppplVar4;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 100472b04; end: 100472b37;  */

void FUN_100472b04(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104a7757c();
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 == (undefined8 *)param_1[3]) {
      uVar1 = *param_1;
      uVar6 = param_1[1];
      if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
        uVar6 = (long)((long)puVar4 - uVar1) >> 2;
        if ((long)puVar4 - uVar1 == 0) {
          uVar6 = 1;
        }
        uVar2 = param_1[4];
        uVar3 = uVar6;
        uStack_58 = uVar2;
        FUN_100472b04();
        puVar4 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
        puStack_70 = (undefined8 *)param_1[1];
        uVar1 = param_1[2] - (long)puStack_70;
        puVar8 = puVar4;
        puStack_68 = puStack_70;
        if (uVar1 != 0) {
          lVar5 = ((long)uVar1 >> 3) << 3;
          do {
            uVar7 = *puStack_70;
            *puStack_70 = 0;
            *puVar8 = uVar7;
            lVar5 = lVar5 + -8;
            puStack_70 = puStack_70 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar5 != 0);
          puStack_70 = (undefined8 *)param_1[1];
          puVar8 = (undefined8 *)((long)puVar4 + (uVar1 & 0xfffffffffffffff8));
          puStack_68 = (undefined8 *)param_1[2];
        }
        uStack_78 = *param_1;
        *param_1 = uVar2;
        param_1[1] = (ulong)puVar4;
        uStack_60 = param_1[3];
        param_1[2] = (ulong)puVar8;
        param_1[3] = uVar2 + uVar3 * 8;
        FUN_100472cf4(&uStack_78);
        puVar4 = (undefined8 *)param_1[2];
      }
      else {
        lVar5 = (long)(uVar6 - uVar1) >> 3;
        uVar1 = lVar5 + 2;
        if (-2 < lVar5) {
          uVar1 = lVar5 + 1;
        }
        func_0x000104ade050(uVar6,puVar4,uVar6 + (uVar1 >> 1) * -8);
        param_1[1] = param_1[1] + (uVar1 >> 1) * -8;
        param_1[2] = (ulong)puVar4;
      }
    }
    uVar7 = *param_2;
    *param_2 = 0;
    *puVar4 = uVar7;
    param_1[2] = param_1[2] + 8;
    return;
  }
  func_0x000107c60e20((long)param_2 << 3);
  return;
}



/* Entry: 100472b38; end: 100472c57;  */

void FUN_100472b38(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 == (undefined8 *)param_1[3]) {
    uVar1 = *param_1;
    uVar6 = param_1[1];
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = (long)((long)puVar4 - uVar1) >> 2;
      if ((long)puVar4 - uVar1 == 0) {
        uVar6 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar6;
      uStack_38 = uVar2;
      FUN_100472b04();
      puVar4 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
      puStack_50 = (undefined8 *)param_1[1];
      uVar1 = param_1[2] - (long)puStack_50;
      puVar8 = puVar4;
      puStack_48 = puStack_50;
      if (uVar1 != 0) {
        lVar5 = ((long)uVar1 >> 3) << 3;
        do {
          uVar7 = *puStack_50;
          *puStack_50 = 0;
          *puVar8 = uVar7;
          lVar5 = lVar5 + -8;
          puStack_50 = puStack_50 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
        puStack_50 = (undefined8 *)param_1[1];
        puVar8 = (undefined8 *)((long)puVar4 + (uVar1 & 0xfffffffffffffff8));
        puStack_48 = (undefined8 *)param_1[2];
      }
      uStack_58 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar4;
      uStack_40 = param_1[3];
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + uVar3 * 8;
      FUN_100472cf4(&uStack_58);
      puVar4 = (undefined8 *)param_1[2];
    }
    else {
      lVar5 = (long)(uVar6 - uVar1) >> 3;
      uVar1 = lVar5 + 2;
      if (-2 < lVar5) {
        uVar1 = lVar5 + 1;
      }
      func_0x000104ade050(uVar6,puVar4,uVar6 + (uVar1 >> 1) * -8);
      param_1[1] = param_1[1] + (uVar1 >> 1) * -8;
      param_1[2] = (ulong)puVar4;
    }
  }
  uVar7 = *param_2;
  *param_2 = 0;
  *puVar4 = uVar7;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 100472c58; end: 100472cf3;  */

void FUN_100472c58(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar2 = (undefined8 *)*param_1;
  puVar3 = param_3;
  while (puVar2 != puVar3) {
    puVar3 = puVar3 + -1;
    uVar6 = *puVar3;
    *puVar3 = 0;
    puVar1 = puVar1 + -1;
    *puVar1 = uVar6;
  }
  param_2[1] = puVar1;
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_2[2];
  puVar3 = puVar2;
  if (puVar5 != param_3) {
    do {
      uVar6 = *param_3;
      puVar1 = param_3 + 1;
      *param_3 = 0;
      puVar2 = puVar3 + 1;
      *puVar3 = uVar6;
      param_3 = puVar1;
      puVar3 = puVar2;
    } while (puVar1 != puVar5);
    puVar1 = (undefined8 *)param_2[1];
  }
  param_2[2] = puVar2;
  lVar4 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100472cf4; end: 100472d53;  */

long * FUN_100472cf4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100472d54; end: 100472ddf;  */

void FUN_100472d54(long param_1)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_FUN_1107c7620;
  plStack_28 = plVar1;
  FUN_1004729a0(param_1 + 0x90,1,0,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* Entry: 100472de0; end: 100472e63;  */

void FUN_100472de0(long param_1)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c2e70;
  plStack_28 = plVar1;
  FUN_100472f50(param_1 + 0xd8,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 100472e64; end: 100472f4f;  */

/* WARNING: Possible PIC construction at 0x0001004730c0: Changing call to branch */

undefined1  [16] FUN_100472e64(long param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *plStack_180;
  undefined ***pppuStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined8 ***apppuStack_160 [2];
  undefined8 ***apppuStack_150 [2];
  char cStack_139;
  char *pcStack_138;
  undefined8 uStack_130;
  long *plStack_108;
  long *plStack_100;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  long lStack_a8;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100472de0();
  FUN_10047324c(param_1);
  appuStack_48[0] = &PTR_DAT_1107c1f60;
  plVar6 = (long *)0x0;
  pppuStack_30 = appuStack_48;
  FUN_1004732f0(param_1 + 0x18,0,10000,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar8 = 4;
    pppuVar3 = appuStack_48;
LAB_100472edc:
    (*(code *)(*pppuVar3)[lVar8])();
  }
  else {
    pppuVar3 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar8 = 5;
      goto LAB_100472edc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar18._8_8_ = plVar6;
    auVar18._0_8_ = pppuVar3;
    return auVar18;
  }
  func_0x000107c60e78();
  if (pppuStack_30 == appuStack_48) {
    lVar8 = 4;
    auVar19._0_8_ = appuStack_48;
LAB_100472f3c:
    (*(code *)(*auVar19._0_8_)[lVar8])();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar8 = 5;
    auVar19._0_8_ = pppuStack_30;
    goto LAB_100472f3c;
  }
  func_0x000107c60bd8();
  ppppuVar2 = apppuStack_160;
  pcStack_58 = FUN_100472f50;
  ppppuVar16 = (undefined8 ****)&ppuStack_60;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = *pppuVar3;
  ppuVar12 = pppuVar3[1];
  plVar7 = plVar6;
  plVar13 = plVar6;
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  if (ppuVar14 != ppuVar12) {
    do {
      plVar4 = (long *)*ppuVar14;
      (**(code **)(*plVar4 + 0x10))();
      plVar5 = (long *)*plVar6;
      plVar13 = plVar7;
      (**(code **)(*plVar5 + 0x10))();
      if ((plVar7 == plVar13) &&
         (func_0x000107c610b0(plVar4,plVar5,plVar7), plVar13 = plVar5, (int)plVar4 == 0)) {
        ppuStack_d8 = (undefined **)0x10f23c045;
        ppuStack_d0 = (undefined **)0x12;
        plVar6 = (long *)*plVar6;
        (**(code **)(*plVar6 + 0x10))();
        pcStack_138 = "\' already registered";
        uStack_130 = 0x14;
        plStack_108 = plVar6;
        plStack_100 = plVar5;
        FUN_100066c24(apppuStack_150,&ppuStack_d8,&plStack_108,&pcStack_138);
        apppuStack_160[0] = apppuStack_150[0];
        if (-1 < cStack_139) {
          apppuStack_160[0] = apppuStack_150;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/service_config/service_config_parser.cc"
                      ,0x27,2,"%s");
        func_0x000107c60c9c(apppuStack_150);
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100473188);
        (*pcVar1)();
      }
      ppuVar14 = ppuVar14 + 1;
      plVar7 = plVar13;
    } while (ppuVar14 != ppuVar12);
    ppuVar14 = pppuVar3[1];
  }
  auVar19._0_8_ = pppuVar3 + 2;
  if (ppuVar14 < *auVar19._0_8_) {
    puVar9 = (undefined *)*plVar6;
    *plVar6 = 0;
    *ppuVar14 = puVar9;
    pppuVar3[1] = ppuVar14 + 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      auVar19._8_8_ = plVar13;
      return auVar19;
    }
    func_0x000107c60e78();
  }
  else {
    lVar8 = (long)ppuVar14 - (long)*pppuVar3 >> 3;
    plVar7 = (long *)(lVar8 + 1);
    if ((ulong)plVar7 >> 0x3d == 0) {
      uVar10 = (long)*auVar19._0_8_ - (long)*pppuVar3;
      plVar13 = (long *)((long)uVar10 >> 2);
      if (plVar13 <= plVar7) {
        plVar13 = plVar7;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        plVar13 = (long *)0x1fffffffffffffff;
      }
      pppuStack_b8 = auVar19._0_8_;
      if (plVar13 == (long *)0x0) {
        auVar19._0_8_ = (undefined ***)0x0;
      }
      else {
        FUN_1004731b8();
      }
      pppuVar11 = auVar19._0_8_ + lVar8;
      ppuVar14 = (undefined **)*plVar6;
      *plVar6 = 0;
      pppuVar15 = pppuVar11 + 1;
      *pppuVar11 = ppuVar14;
      ppuVar14 = *pppuVar3;
      ppuStack_d8 = pppuVar3[1];
      ppuStack_c8 = ppuStack_d8;
      if (ppuStack_d8 != ppuVar14) {
        do {
          ppuStack_d8 = ppuStack_d8 + -1;
          ppuVar12 = (undefined **)*ppuStack_d8;
          *ppuStack_d8 = (undefined *)0x0;
          pppuVar11 = pppuVar11 + -1;
          *pppuVar11 = ppuVar12;
        } while (ppuStack_d8 != ppuVar14);
        ppuStack_d8 = *pppuVar3;
        ppuStack_c8 = pppuVar3[1];
      }
      *pppuVar3 = (undefined **)pppuVar11;
      pppuVar3[1] = (undefined **)pppuVar15;
      ppuStack_c0 = pppuVar3[2];
      pppuVar3[2] = (undefined **)(auVar19._0_8_ + (long)plVar13);
      auVar19._0_8_ = &ppuStack_d8;
      uVar17 = 0x1004730c4;
      ppuStack_d0 = ppuStack_d8;
      goto SUB_1004731ec;
    }
  }
  func_0x000104ad70f8();
  if (cStack_139 < '\0') {
    func_0x000107c60e14(apppuStack_150[0]);
  }
  auVar19._0_8_ = pppuVar3;
  func_0x000107c60bd8();
  ppppuVar2 = (undefined8 ****)&plStack_180;
  pcStack_168 = FUN_1004731b8;
  plStack_180 = plVar6;
  pppuStack_178 = pppuVar3;
  pppuStack_170 = ppppuVar16;
  if ((ulong)plVar13 >> 0x3d == 0) {
    lVar8 = (long)plVar13 << 3;
    func_0x000107c60e20(lVar8);
    auVar20._8_8_ = plVar13;
    auVar20._0_8_ = lVar8;
    return auVar20;
  }
  uVar17 = 0x1004731ec;
  func_0x000104a7757c();
  ppppuVar16 = &pppuStack_170;
SUB_1004731ec:
  *(long **)((long)ppppuVar2 + -0x20) = plVar6;
  *(undefined ****)((long)ppppuVar2 + -0x18) = pppuVar3;
  *(undefined8 *****)((long)ppppuVar2 + -0x10) = ppppuVar16;
  *(undefined8 *)((long)ppppuVar2 + -8) = uVar17;
  ppuVar14 = auVar19._0_8_[1];
  ppuVar12 = auVar19._0_8_[2];
  while (ppuVar12 != ppuVar14) {
    auVar19._0_8_[2] = ppuVar12 + -1;
    plVar6 = (long *)ppuVar12[-1];
    ppuVar12[-1] = (undefined *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    ppuVar12 = auVar19._0_8_[2];
  }
  if (*auVar19._0_8_ != (undefined **)0x0) {
    func_0x000107c60e14();
  }
  auVar21._8_8_ = plVar13;
  auVar21._0_8_ = auVar19._0_8_;
  return auVar21;
}



/* Entry: 100472f50; end: 1004731b7;  */

/* WARNING: Possible PIC construction at 0x0001004730c0: Changing call to branch */

undefined1  [16] FUN_100472f50(long **param_1,long *param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long **pplVar12;
  undefined8 ****ppppuVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *plStack_130;
  long **pplStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined8 ***apppuStack_110 [2];
  undefined8 ***apppuStack_100 [2];
  char cStack_e9;
  char *pcStack_e8;
  undefined8 uStack_e0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long **pplStack_68;
  long lStack_58;
  
  ppppuVar2 = apppuStack_110;
  ppppuVar13 = (undefined8 ****)&stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = *param_1;
  plVar9 = param_1[1];
  plVar5 = param_2;
  plVar10 = param_2;
  if (plVar11 != plVar9) {
    do {
      plVar3 = (long *)*plVar11;
      (**(code **)(*plVar3 + 0x10))();
      plVar4 = (long *)*param_2;
      plVar10 = plVar5;
      (**(code **)(*plVar4 + 0x10))();
      if ((plVar5 == plVar10) &&
         (func_0x000107c610b0(plVar3,plVar4,plVar5), plVar10 = plVar4, (int)plVar3 == 0)) {
        plStack_88 = (long *)0x10f23c045;
        plStack_80 = (long *)0x12;
        param_2 = (long *)*param_2;
        (**(code **)(*param_2 + 0x10))();
        pcStack_e8 = "\' already registered";
        uStack_e0 = 0x14;
        plStack_b8 = param_2;
        plStack_b0 = plVar4;
        FUN_100066c24(apppuStack_100,&plStack_88,&plStack_b8,&pcStack_e8);
        apppuStack_110[0] = apppuStack_100[0];
        if (-1 < cStack_e9) {
          apppuStack_110[0] = apppuStack_100;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/service_config/service_config_parser.cc"
                      ,0x27,2,"%s");
        func_0x000107c60c9c(apppuStack_100);
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100473188);
        (*pcVar1)();
      }
      plVar11 = plVar11 + 1;
      plVar5 = plVar10;
    } while (plVar11 != plVar9);
    plVar11 = param_1[1];
  }
  auVar15._0_8_ = param_1 + 2;
  if (plVar11 < *auVar15._0_8_) {
    lVar6 = *param_2;
    *param_2 = 0;
    *plVar11 = lVar6;
    param_1[1] = plVar11 + 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      auVar15._8_8_ = plVar10;
      return auVar15;
    }
    func_0x000107c60e78();
  }
  else {
    lVar6 = (long)plVar11 - (long)*param_1 >> 3;
    plVar11 = (long *)(lVar6 + 1);
    if ((ulong)plVar11 >> 0x3d == 0) {
      uVar7 = (long)*auVar15._0_8_ - (long)*param_1;
      plVar10 = (long *)((long)uVar7 >> 2);
      if (plVar10 <= plVar11) {
        plVar10 = plVar11;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        plVar10 = (long *)0x1fffffffffffffff;
      }
      pplStack_68 = auVar15._0_8_;
      if (plVar10 == (long *)0x0) {
        auVar15._0_8_ = (long **)0x0;
      }
      else {
        FUN_1004731b8();
      }
      pplVar8 = auVar15._0_8_ + lVar6;
      plVar11 = (long *)*param_2;
      *param_2 = 0;
      pplVar12 = pplVar8 + 1;
      *pplVar8 = plVar11;
      plVar11 = *param_1;
      plStack_80 = param_1[1];
      plStack_78 = plStack_80;
      if (plStack_80 != plVar11) {
        do {
          plStack_80 = plStack_80 + -1;
          plVar9 = (long *)*plStack_80;
          *plStack_80 = 0;
          pplVar8 = pplVar8 + -1;
          *pplVar8 = plVar9;
        } while (plStack_80 != plVar11);
        plStack_80 = *param_1;
        plStack_78 = param_1[1];
      }
      *param_1 = (long *)pplVar8;
      param_1[1] = (long *)pplVar12;
      plStack_70 = param_1[2];
      param_1[2] = (long *)(auVar15._0_8_ + (long)plVar10);
      plStack_88 = plStack_80;
      auVar15._0_8_ = &plStack_88;
      uVar14 = 0x1004730c4;
      goto SUB_1004731ec;
    }
  }
  func_0x000104ad70f8();
  if (cStack_e9 < '\0') {
    func_0x000107c60e14(apppuStack_100[0]);
  }
  auVar15._0_8_ = param_1;
  func_0x000107c60bd8();
  ppppuVar2 = (undefined8 ****)&plStack_130;
  pcStack_118 = FUN_1004731b8;
  plStack_130 = param_2;
  pplStack_128 = param_1;
  pppuStack_120 = ppppuVar13;
  if ((ulong)plVar10 >> 0x3d == 0) {
    lVar6 = (long)plVar10 << 3;
    func_0x000107c60e20(lVar6);
    auVar16._8_8_ = plVar10;
    auVar16._0_8_ = lVar6;
    return auVar16;
  }
  uVar14 = 0x1004731ec;
  func_0x000104a7757c();
  ppppuVar13 = &pppuStack_120;
SUB_1004731ec:
  *(long **)((long)ppppuVar2 + -0x20) = param_2;
  *(long ***)((long)ppppuVar2 + -0x18) = param_1;
  *(undefined8 *****)((long)ppppuVar2 + -0x10) = ppppuVar13;
  *(undefined8 *)((long)ppppuVar2 + -8) = uVar14;
  plVar11 = auVar15._0_8_[1];
  plVar9 = auVar15._0_8_[2];
  while (plVar9 != plVar11) {
    auVar15._0_8_[2] = plVar9 + -1;
    plVar5 = (long *)plVar9[-1];
    plVar9[-1] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar9 = auVar15._0_8_[2];
  }
  if (*auVar15._0_8_ != (long *)0x0) {
    func_0x000107c60e14();
  }
  auVar17._8_8_ = plVar10;
  auVar17._0_8_ = auVar15._0_8_;
  return auVar17;
}



/* Entry: 1004731b8; end: 10047324b;  */

undefined1  [16] FUN_1004731b8(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    func_0x000107c60e20(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104a7757c();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10047324c; end: 1004732cf;  */

void FUN_10047324c(long param_1)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c30f0;
  plStack_28 = plVar1;
  FUN_100472f50(param_1 + 0xd8,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 1004732d0; end: 1004732ef;  */

undefined1  [16] FUN_1004732d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = "client_channel";
  return auVar1;
}



/* Entry: 1004732f0; end: 100473377;  */

void FUN_1004732f0(long param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  undefined4 uStack_24;
  
  lVar3 = param_1 + (ulong)param_2 * 0x18;
  puVar4 = (ulong *)(lVar3 + 8);
  uVar2 = *puVar4;
  puVar1 = (ulong *)(lVar3 + 0x10);
  uStack_24 = param_3;
  if (uVar2 < *puVar1) {
    FUN_10047353c(puVar1,uVar2,param_4,&uStack_24);
    uVar2 = uVar2 + 0x28;
    *puVar4 = uVar2;
  }
  else {
    uVar2 = param_1 + (ulong)param_2 * 0x18;
    FUN_1004733bc(uVar2,param_4,&uStack_24);
  }
  *puVar4 = uVar2;
  return;
}



/* Entry: 100473378; end: 1004733bb;  */

undefined1  [16] FUN_100473378(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (param_2 < (long *)0x666666666666667) {
    lVar2 = (long)param_2 * 0x28;
    func_0x000107c60e20(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  func_0x000104a7757c();
  lVar2 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar2 * -0x3333333333333333 + 1;
  if (uVar1 < 0x666666666666667) {
    plVar5 = param_1 + 2;
    lVar6 = *plVar5 - *param_1 >> 3;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    plStack_68 = plVar5;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar5;
      FUN_100473378();
    }
    plStack_80 = plVar3 + lVar2;
    plStack_70 = plVar3 + uVar7 * 5;
    plStack_88 = plVar3;
    plStack_78 = plStack_80;
    FUN_10047353c(plVar5,plStack_80,param_2,param_3);
    plStack_78 = plStack_78 + 5;
    pplVar4 = &plStack_88;
    FUN_1004736ac(param_1,pplVar4);
    lVar2 = param_1[1];
    func_0x0001004737c0(&plStack_88);
    auVar9._8_8_ = pplVar4;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  func_0x000104ad9d00();
  func_0x0001004737c0(&plStack_88);
  func_0x000107c60bd8();
  plVar5 = param_2 + 3;
  plVar3 = (long *)*plVar5;
  if (plVar3 == (long *)0x0) {
    plVar5 = param_1 + 3;
  }
  else {
    if (plVar3 == param_2) {
      param_1[3] = (long)param_1;
      param_2 = param_1;
      (**(code **)(*(long *)*plVar5 + 0x18))((long *)*plVar5,param_1);
      goto LAB_100473528;
    }
    param_1[3] = (long)plVar3;
  }
  *plVar5 = 0;
LAB_100473528:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  return auVar10;
}



/* Entry: 1004733bc; end: 1004734d7;  */

long * FUN_1004733bc(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x3333333333333333 + 1;
  if (uVar1 < 0x666666666666667) {
    plVar6 = param_1 + 2;
    lVar3 = *plVar6 - *param_1 >> 3;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    plStack_48 = plVar6;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = plVar6;
      FUN_100473378();
    }
    plStack_60 = plVar2 + lVar4;
    plStack_50 = plVar2 + uVar5 * 5;
    plStack_68 = plVar2;
    plStack_58 = plStack_60;
    FUN_10047353c(plVar6,plStack_60,param_2,param_3);
    plStack_58 = plStack_58 + 5;
    FUN_1004736ac(param_1,&plStack_68);
    plVar6 = (long *)param_1[1];
    func_0x0001004737c0(&plStack_68);
    return plVar6;
  }
  func_0x000104ad9d00();
  func_0x0001004737c0(&plStack_68);
  func_0x000107c60bd8();
  plVar6 = (long *)(param_2 + 0x18);
  lVar4 = *plVar6;
  if (lVar4 == 0) {
    plVar6 = param_1 + 3;
  }
  else {
    if (lVar4 == param_2) {
      param_1[3] = (long)param_1;
      (**(code **)(*(long *)*plVar6 + 0x18))((long *)*plVar6,param_1);
      return param_1;
    }
    param_1[3] = lVar4;
  }
  *plVar6 = 0;
  return param_1;
}



/* Entry: 1004734d8; end: 10047353b;  */

long FUN_1004734d8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10047353c; end: 1004735e7;  */

void FUN_10047353c(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004734d8(alStack_58,param_3);
  uVar1 = *param_4;
  plVar2 = alStack_58;
  FUN_1004734d8(param_2);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  if (plStack_40 == alStack_58) {
    lVar3 = 4;
    plStack_40 = alStack_58;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_1004735b8;
    lVar3 = 5;
  }
  (**(code **)(*plStack_40 + lVar3 * 8))();
LAB_1004735b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  *plVar2 = (long)&PTR_DAT_1107c1f60;
  return;
}



/* Entry: 1004735e8; end: 1004735fb;  */

void FUN_1004735e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c1f60;
  return;
}



/* Entry: 1004735fc; end: 1004736ab;  */

undefined1  [16]
FUN_1004735fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    FUN_1004734d8(param_7 + -0x28,param_3 + -0x28);
    *(undefined4 *)(param_7 + -8) = *(undefined4 *)(param_3 + -8);
    param_7 = lStack_38 + -0x28;
    param_6 = uStack_40;
    param_3 = param_3 + -0x28;
  }
  uStack_58 = 1;
  FUN_100473720(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 1004736ac; end: 10047371f;  */

void FUN_1004736ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_1004735fc(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100473720; end: 100473753;  */

long FUN_100473720(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    func_0x000104ad9d14(param_1);
  }
  return param_1;
}



/* Entry: 100473754; end: 1004737ef;  */

void FUN_100473754(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
joined_r0x000100473768:
  if (plVar3 == plVar1) {
    return;
  }
  plVar2 = plVar3 + -5;
  *(long **)(param_1 + 0x10) = plVar2;
  plVar4 = (long *)plVar3[-2];
  if (plVar4 != plVar2) goto code_r0x000100473784;
  lVar5 = 4;
  goto LAB_100473798;
code_r0x000100473784:
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    lVar5 = 5;
    plVar2 = plVar4;
LAB_100473798:
    (**(code **)(*plVar2 + lVar5 * 8))();
    plVar3 = *(long **)(param_1 + 0x10);
  }
  goto joined_r0x000100473768;
}



/* Entry: 1004737f0; end: 1004738d3;  */

void FUN_1004737f0(long param_1)

{
  long *plVar1;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_FUN_1107c6b10;
  plStack_28 = plVar1;
  FUN_1004729a0(param_1 + 0x90,0,0,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c6b60;
  plStack_30 = plVar1;
  FUN_1004729a0(param_1 + 0x90,0,1,&plStack_30);
  plVar1 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* Entry: 1004738d4; end: 100473a27;  */

void FUN_1004738d4(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR_DAT_1107c3a70;
  uStack_50 = 0x100560cb0;
  pppuStack_40 = &ppuStack_58;
  FUN_1004732f0(param_1 + 0x18,1,0x7fffffff,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_10047394c:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_10047394c;
  }
  ppuStack_78 = &PTR_DAT_1107c3a70;
  uStack_70 = 0x100560cb0;
  puVar3 = (undefined8 *)0x3;
  pppuStack_60 = &ppuStack_78;
  FUN_1004732f0(param_1 + 0x18,3,0x7fffffff,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_78;
LAB_100473998:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_60;
    if (pppuStack_60 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100473998;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_78;
  }
  else {
    if (pppuStack_60 == (undefined ***)0x0) goto LAB_100473a20;
    lVar4 = 5;
    pppuVar2 = pppuStack_60;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_100473a20:
  func_0x000107c60bd8();
  ppuVar5 = pppuVar1[1];
  *puVar3 = &PTR_DAT_1107c3a70;
  puVar3[1] = ppuVar5;
  return;
}



/* Entry: 100473a28; end: 100473a3f;  */

void FUN_100473a28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c3a70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 100473a40; end: 100473b8b;  */

void FUN_100473a40(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  appuStack_48[0] = &PTR_DAT_1107c0dd8;
  pppuStack_30 = appuStack_48;
  FUN_1004732f0(param_1 + 0x18,0,10000,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar4 = 4;
    pppuVar1 = appuStack_48;
LAB_100473aac:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_30;
    goto LAB_100473aac;
  }
  appuStack_68[0] = &PTR_DAT_1107c0e68;
  puVar3 = (undefined8 *)0x4;
  pppuStack_50 = appuStack_68;
  FUN_1004732f0(param_1 + 0x18,4,10000,appuStack_68);
  if (pppuStack_50 == appuStack_68) {
    lVar4 = 4;
    pppuVar1 = appuStack_68;
LAB_100473b00:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_50;
    if (pppuStack_50 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100473b00;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_50 == appuStack_68) {
    lVar4 = 4;
    pppuVar2 = appuStack_68;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_100473b84;
    lVar4 = 5;
    pppuVar2 = pppuStack_50;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_100473b84:
  func_0x000107c60bd8(pppuVar1);
  *puVar3 = &PTR_DAT_1107c0dd8;
  return;
}



/* Entry: 100473b8c; end: 100473bb3;  */

void FUN_100473b8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c0dd8;
  return;
}



/* Entry: 100473bb4; end: 100473c8f;  */

void FUN_100473bb4(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  appuStack_48[0] = &PTR_DAT_1107c2440;
  puVar3 = (undefined8 *)0x1;
  pppuStack_30 = appuStack_48;
  FUN_1004732f0(param_1 + 0x18,1,10000,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar4 = 4;
    pppuVar1 = appuStack_48;
LAB_100473c1c:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100473c1c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_30 == appuStack_48) {
    lVar4 = 4;
    pppuVar2 = appuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_100473c88;
    lVar4 = 5;
    pppuVar2 = pppuStack_30;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_100473c88:
  func_0x000107c60bd8(pppuVar1);
  *puVar3 = &PTR_DAT_1107c2440;
  return;
}



/* Entry: 100473c90; end: 100473ca3;  */

void FUN_100473c90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c2440;
  return;
}



/* Entry: 100473ca4; end: 1004740ef;  */

void FUN_100473ca4(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x18;
  pppuVar1 = (undefined ***)0x20;
  func_0x000107c60e20();
  *pppuVar1 = &PTR_DAT_1107c3b10;
  *(undefined1 *)(pppuVar1 + 1) = 0;
  pppuVar1[2] = (undefined **)"grpc.per_message_compression";
  pppuVar1[3] = &PTR_FUN_1107c3c00;
  pppuStack_50 = pppuVar1;
  FUN_1004732f0(param_1,1,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473d38:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473d38;
  }
  pppuVar1 = (undefined ***)0x20;
  func_0x000107c60e20();
  *pppuVar1 = &PTR_DAT_1107c3b10;
  *(undefined1 *)(pppuVar1 + 1) = 0;
  pppuVar1[2] = (undefined **)"grpc.per_message_compression";
  pppuVar1[3] = &PTR_FUN_1107c3c00;
  pppuStack_50 = pppuVar1;
  FUN_1004732f0(param_1,3,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473d98:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473d98;
  }
  pppuVar1 = (undefined ***)0x20;
  func_0x000107c60e20();
  *pppuVar1 = &PTR_DAT_1107c3b10;
  *(undefined1 *)(pppuVar1 + 1) = 0;
  pppuVar1[2] = (undefined **)"grpc.per_message_compression";
  pppuVar1[3] = &PTR_FUN_1107c3c00;
  pppuStack_50 = pppuVar1;
  FUN_1004732f0(param_1,4,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473df8:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473df8;
  }
  pppuVar1 = (undefined ***)0x20;
  func_0x000107c60e20();
  *pppuVar1 = &PTR_DAT_1107c3b10;
  *(undefined1 *)(pppuVar1 + 1) = 0;
  pppuVar1[2] = (undefined **)"grpc.per_message_decompression";
  pppuVar1[3] = &PTR_FUN_1107c3c68;
  pppuStack_50 = pppuVar1;
  FUN_1004732f0(param_1,1,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473e68:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473e68;
  }
  pppuVar1 = (undefined ***)0x20;
  func_0x000107c60e20();
  *pppuVar1 = &PTR_DAT_1107c3b10;
  *(undefined1 *)(pppuVar1 + 1) = 0;
  pppuVar1[2] = (undefined **)"grpc.per_message_decompression";
  pppuVar1[3] = &PTR_FUN_1107c3c68;
  pppuStack_50 = pppuVar1;
  FUN_1004732f0(param_1,3,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473ec8:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473ec8;
  }
  pppuVar1 = (undefined ***)0x20;
  func_0x000107c60e20();
  *pppuVar1 = &PTR_DAT_1107c3b10;
  *(undefined1 *)(pppuVar1 + 1) = 0;
  pppuVar1[2] = (undefined **)"grpc.per_message_decompression";
  pppuVar1[3] = &PTR_FUN_1107c3c68;
  pppuStack_50 = pppuVar1;
  FUN_1004732f0(param_1,4,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473f28:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473f28;
  }
  ppuStack_68 = &PTR_DAT_1107c3b90;
  ppuStack_60 = &PTR_FUN_1107c3788;
  pppuStack_50 = &ppuStack_68;
  FUN_1004732f0(param_1,1,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473f84:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473f84;
  }
  ppuStack_68 = &PTR_DAT_1107c3b90;
  ppuStack_60 = &PTR_FUN_1107c3788;
  pppuStack_50 = &ppuStack_68;
  FUN_1004732f0(param_1,3,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100473fd0:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_50;
    goto LAB_100473fd0;
  }
  ppuStack_68 = &PTR_DAT_1107c3b90;
  ppuStack_60 = &PTR_DAT_1107c3cd0;
  puVar3 = (undefined8 *)0x4;
  pppuStack_50 = &ppuStack_68;
  FUN_1004732f0(param_1,4,10000,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_68;
LAB_100474024:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_50;
    if (pppuStack_50 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100474024;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_50 == &ppuStack_68) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_68;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_1004740e8;
    lVar4 = 5;
    pppuVar2 = pppuStack_50;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_1004740e8:
  func_0x000107c60bd8();
  ppuVar5 = pppuVar1[1];
  *puVar3 = &PTR_DAT_1107c3b90;
  puVar3[1] = ppuVar5;
  return;
}



/* Entry: 1004740f0; end: 100474107;  */

void FUN_1004740f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c3b90;
  param_2[1] = uVar1;
  return;
}



/* Entry: 100474108; end: 100474257;  */

void FUN_100474108(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR_DAT_1107c3680;
  ppuStack_50 = &PTR_FUN_1107c35a0;
  pppuStack_40 = &ppuStack_58;
  FUN_1004732f0(param_1 + 0x18,3,10000,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_100474180:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_100474180;
  }
  ppuStack_58 = &PTR_DAT_1107c3680;
  ppuStack_50 = &PTR_DAT_1107c3608;
  puVar3 = (undefined8 *)0x4;
  pppuStack_40 = &ppuStack_58;
  FUN_1004732f0(param_1 + 0x18,4,10000,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_1004741d4:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_40;
    if (pppuStack_40 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_1004741d4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_100474250;
    lVar4 = 5;
    pppuVar2 = pppuStack_40;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_100474250:
  func_0x000107c60bd8();
  ppuVar5 = pppuVar1[1];
  *puVar3 = &PTR_DAT_1107c3680;
  puVar3[1] = ppuVar5;
  return;
}



/* Entry: 100474258; end: 10047426f;  */

void FUN_100474258(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c3680;
  param_2[1] = uVar1;
  return;
}



/* Entry: 100474270; end: 1004742f3;  */

void FUN_100474270(long param_1)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c3f08;
  plStack_28 = plVar1;
  FUN_100472f50(param_1 + 0xd8,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 1004742f4; end: 1004744bf;  */

undefined1  [16] FUN_1004742f4(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100474270();
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_DAT_1107c3a70;
  pcStack_50 = FUN_1008da7a4;
  pppuStack_40 = &ppuStack_58;
  FUN_1004732f0(param_1,1,10000,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_58;
LAB_100474374:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_100474374;
  }
  ppuStack_78 = &PTR_DAT_1107c3a70;
  pcStack_70 = FUN_100560908;
  pppuStack_60 = &ppuStack_78;
  FUN_1004732f0(param_1,3,10000,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_78;
LAB_1004743c8:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar1 = pppuStack_60;
    goto LAB_1004743c8;
  }
  ppuStack_98 = &PTR_DAT_1107c3a70;
  pcStack_90 = FUN_100560908;
  uVar3 = 4;
  pppuStack_80 = &ppuStack_98;
  FUN_1004732f0(param_1,4,10000,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar4 = 4;
    pppuVar1 = &ppuStack_98;
LAB_100474414:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100474414;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = pppuVar1;
    return auVar5;
  }
  func_0x000107c60e78();
  if (pppuStack_80 == &ppuStack_98) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_98;
  }
  else {
    if (pppuStack_80 == (undefined ***)0x0) goto LAB_1004744b8;
    lVar4 = 5;
    pppuVar2 = pppuStack_80;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_1004744b8:
  func_0x000107c60bd8(pppuVar1);
  auVar6._8_8_ = 0xc;
  auVar6._0_8_ = "message_size";
  return auVar6;
}



/* Entry: 1004744c0; end: 1004744cf;  */

undefined1  [16] FUN_1004744c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = "message_size";
  return auVar1;
}



/* Entry: 1004744d0; end: 1004745ab;  */

void FUN_1004744d0(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  appuStack_48[0] = &PTR_DAT_1107c3200;
  puVar3 = (undefined8 *)0x3;
  pppuStack_30 = appuStack_48;
  FUN_1004732f0(param_1 + 0x18,3,10000,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar4 = 4;
    pppuVar1 = appuStack_48;
LAB_100474538:
    (*(code *)(*pppuVar1)[lVar4])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_100474538;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_30 == appuStack_48) {
    lVar4 = 4;
    pppuVar2 = appuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1004745a4;
    lVar4 = 5;
    pppuVar2 = pppuStack_30;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_1004745a4:
  func_0x000107c60bd8(pppuVar1);
  *puVar3 = &PTR_DAT_1107c3200;
  return;
}



/* Entry: 1004745ac; end: 1004745c3;  */

void FUN_1004745ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c3200;
  return;
}



/* Entry: 1004745c4; end: 10047469b;  */

undefined1  [16] FUN_1004745c4(void)

{
  ulong uVar1;
  undefined ******ppppppuVar2;
  undefined ******ppppppuVar3;
  undefined ******ppppppuVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined ******ppppppuVar8;
  undefined *****pppppuVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined *****pppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_48;
  code *pcStack_40;
  undefined *****pppppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_48 = (undefined ****)&PTR_DAT_1107c5c60;
  pcStack_40 = FUN_100479474;
  ppppppuVar4 = (undefined ******)&ppppuStack_48;
  pppppuStack_30 = &ppppuStack_48;
  func_0x0001004745c0();
  if (pppppuStack_30 == &ppppuStack_48) {
    lVar5 = 4;
    ppppppuVar2 = (undefined ******)&ppppuStack_48;
LAB_100474628:
    (*(code *)(*ppppppuVar2)[lVar5])();
  }
  else {
    ppppppuVar2 = (undefined ******)pppppuStack_30;
    if ((undefined ******)pppppuStack_30 != (undefined ******)0x0) {
      lVar5 = 5;
      goto LAB_100474628;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar10._8_8_ = ppppppuVar4;
    auVar10._0_8_ = ppppppuVar2;
    return auVar10;
  }
  func_0x000107c60e78();
  if (pppppuStack_30 == &ppppuStack_48) {
    lVar5 = 4;
    ppppppuVar3 = (undefined ******)&ppppuStack_48;
LAB_100474688:
    (*(code *)(*ppppppuVar3)[lVar5])();
  }
  else if ((undefined ******)pppppuStack_30 != (undefined ******)0x0) {
    lVar5 = 5;
    ppppppuVar3 = (undefined ******)pppppuStack_30;
    goto LAB_100474688;
  }
  func_0x000107c60bd8();
  ppppppuVar3 = ppppppuVar2 + 2;
  pppppuVar9 = ppppppuVar2[1];
  if (pppppuVar9 < *ppppppuVar3) {
    FUN_1004747d4(pppppuVar9,ppppppuVar4);
    pppppuVar9 = pppppuVar9 + 4;
    ppppppuVar2[1] = pppppuVar9;
LAB_100474768:
    ppppppuVar2[1] = pppppuVar9;
    auVar11._0_8_ = pppppuVar9 + -4;
    auVar11._8_8_ = ppppppuVar4;
    return auVar11;
  }
  lVar5 = (long)pppppuVar9 - (long)*ppppppuVar2 >> 5;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar6 = (long)*ppppppuVar3 - (long)*ppppppuVar2;
    uVar7 = (long)uVar6 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar7 = 0x7ffffffffffffff;
    }
    pppppuStack_88 = (undefined *****)ppppppuVar3;
    if (uVar7 == 0) {
      pppppuStack_a8 = (undefined *****)0x0;
    }
    else {
      FUN_1004747a0();
      pppppuStack_a8 = (undefined *****)ppppppuVar3;
    }
    ppppppuVar3 = (undefined ******)(pppppuStack_a8 + lVar5 * 4);
    pppppuStack_90 = pppppuStack_a8 + uVar7 * 4;
    pppppuStack_a0 = (undefined *****)ppppppuVar3;
    FUN_1004747d4(ppppppuVar3,ppppppuVar4);
    pppppuStack_98 = (undefined *****)(ppppppuVar3 + 4);
    ppppppuVar4 = &pppppuStack_a8;
    FUN_1004748f0(ppppppuVar2,ppppppuVar4);
    pppppuVar9 = ppppppuVar2[1];
    func_0x000100474a04(&pppppuStack_a8);
    goto LAB_100474768;
  }
  func_0x000104aaaff4();
  func_0x000100474a04(&pppppuStack_a8);
  func_0x000107c60bd8();
  if ((ulong)ppppppuVar4 >> 0x3b == 0) {
    lVar5 = (long)ppppppuVar4 << 5;
    func_0x000107c60e20(lVar5);
    auVar12._8_8_ = ppppppuVar4;
    auVar12._0_8_ = lVar5;
    return auVar12;
  }
  func_0x000104a7757c();
  ppppppuVar3 = ppppppuVar4 + 3;
  ppppppuVar8 = (undefined ******)*ppppppuVar3;
  if (ppppppuVar8 == (undefined ******)0x0) {
    ppppppuVar3 = ppppppuVar2 + 3;
  }
  else {
    if (ppppppuVar8 == ppppppuVar4) {
      ppppppuVar2[3] = (undefined *****)ppppppuVar2;
      ppppppuVar4 = ppppppuVar2;
      (*(code *)(**ppppppuVar3)[3])(*ppppppuVar3,ppppppuVar2);
      goto LAB_100474824;
    }
    ppppppuVar2[3] = (undefined *****)ppppppuVar8;
  }
  *ppppppuVar3 = (undefined *****)0x0;
LAB_100474824:
  auVar13._8_8_ = ppppppuVar4;
  auVar13._0_8_ = ppppppuVar2;
  return auVar13;
}



/* Entry: 10047469c; end: 10047479f;  */

undefined1  [16] FUN_10047469c(ulong *****param_1,ulong *****param_2)

{
  ulong uVar1;
  ulong *****pppppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *****pppppuVar5;
  ulong ****ppppuVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong ****ppppuStack_58;
  ulong ****ppppuStack_50;
  ulong ****ppppuStack_48;
  ulong ****ppppuStack_40;
  ulong ****ppppuStack_38;
  
  pppppuVar2 = param_1 + 2;
  ppppuVar6 = param_1[1];
  if (ppppuVar6 < *pppppuVar2) {
    FUN_1004747d4(ppppuVar6,param_2);
    ppppuVar6 = ppppuVar6 + 4;
    param_1[1] = ppppuVar6;
LAB_100474768:
    param_1[1] = ppppuVar6;
    auVar8._0_8_ = ppppuVar6 + -4;
    auVar8._8_8_ = param_2;
    return auVar8;
  }
  lVar7 = (long)ppppuVar6 - (long)*param_1 >> 5;
  uVar1 = lVar7 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar3 = (long)*pppppuVar2 - (long)*param_1;
    uVar4 = (long)uVar3 >> 4;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar3) {
      uVar4 = 0x7ffffffffffffff;
    }
    ppppuStack_38 = (ulong ****)pppppuVar2;
    if (uVar4 == 0) {
      ppppuStack_58 = (ulong ****)0x0;
    }
    else {
      FUN_1004747a0();
      ppppuStack_58 = (ulong ****)pppppuVar2;
    }
    pppppuVar2 = (ulong *****)(ppppuStack_58 + lVar7 * 4);
    ppppuStack_40 = ppppuStack_58 + uVar4 * 4;
    ppppuStack_50 = (ulong ****)pppppuVar2;
    FUN_1004747d4(pppppuVar2,param_2);
    ppppuStack_48 = (ulong ****)(pppppuVar2 + 4);
    param_2 = &ppppuStack_58;
    FUN_1004748f0(param_1,param_2);
    ppppuVar6 = param_1[1];
    func_0x000100474a04(&ppppuStack_58);
    goto LAB_100474768;
  }
  func_0x000104aaaff4();
  func_0x000100474a04(&ppppuStack_58);
  func_0x000107c60bd8();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar7 = (long)param_2 << 5;
    func_0x000107c60e20(lVar7);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar7;
    return auVar9;
  }
  func_0x000104a7757c();
  pppppuVar2 = param_2 + 3;
  pppppuVar5 = (ulong *****)*pppppuVar2;
  if (pppppuVar5 == (ulong *****)0x0) {
    pppppuVar2 = param_1 + 3;
  }
  else {
    if (pppppuVar5 == param_2) {
      param_1[3] = (ulong ****)param_1;
      param_2 = param_1;
      (*(code *)(**pppppuVar2)[3])(*pppppuVar2,param_1);
      goto LAB_100474824;
    }
    param_1[3] = (ulong ****)pppppuVar5;
  }
  *pppppuVar2 = (ulong ****)0x0;
LAB_100474824:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  return auVar10;
}



/* Entry: 1004747a0; end: 1004747d3;  */

undefined1  [16] FUN_1004747a0(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    func_0x000107c60e20(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104a7757c();
  puVar2 = (ulong *)(param_2 + 0x18);
  uVar3 = *puVar2;
  if (uVar3 == 0) {
    puVar2 = (ulong *)(param_1 + 0x18);
  }
  else {
    if (uVar3 == param_2) {
      *(ulong *)(param_1 + 0x18) = param_1;
      param_2 = param_1;
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_1);
      goto LAB_100474824;
    }
    *(ulong *)(param_1 + 0x18) = uVar3;
  }
  *puVar2 = 0;
LAB_100474824:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 1004747d4; end: 100474837;  */

long FUN_1004747d4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 100474838; end: 10047484b;  */

void FUN_100474838(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c5c60;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10047484c; end: 1004748ef;  */

undefined1  [16]
FUN_10047484c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    param_3 = param_3 + -0x20;
    FUN_1004747d4(param_7 + -0x20,param_3);
    param_7 = lStack_38 + -0x20;
    param_6 = uStack_40;
  }
  uStack_58 = 1;
  FUN_100474964(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 1004748f0; end: 100474963;  */

void FUN_1004748f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_10047484c(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100474964; end: 100474997;  */

long FUN_100474964(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    func_0x000104aab008(param_1);
  }
  return param_1;
}



/* Entry: 100474998; end: 100474a33;  */

void FUN_100474998(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
joined_r0x0001004749ac:
  if (plVar3 == plVar1) {
    return;
  }
  plVar2 = plVar3 + -4;
  *(long **)(param_1 + 0x10) = plVar2;
  plVar4 = (long *)plVar3[-1];
  if (plVar4 != plVar2) goto code_r0x0001004749c8;
  lVar5 = 4;
  goto LAB_1004749dc;
code_r0x0001004749c8:
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    lVar5 = 5;
    plVar2 = plVar4;
LAB_1004749dc:
    (**(code **)(*plVar2 + lVar5 * 8))();
    plVar3 = *(long **)(param_1 + 0x10);
  }
  goto joined_r0x0001004749ac;
}



/* Entry: 100474a34; end: 100474a3b;  */

void FUN_100474a34(void)

{
  return;
}



/* Entry: 100474a3c; end: 100474abf;  */

void FUN_100474a3c(long param_1)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c3710;
  plStack_28 = plVar1;
  FUN_100472f50(param_1 + 0xd8,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 100474ac0; end: 100474ad3;  */

undefined1  [16] FUN_100474ac0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = "fault_injection";
  return auVar1;
}


