/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10000c000; end: 10000c697; -[SCMapLocationPushExtension didReceiveLocationPushPayload:completion:] */

void FUN_10000c000(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010000e360(PTR__OBJC_CLASS___SCAppExtensionStorageServiceImpl_1000149e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010000dc60(uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e400();
  auVar23 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e3e0(auVar23._0_8_,auVar23._8_8_,&PTR____CFConstantStringClassReference_100010228);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar23._0_8_);
  _objc_release(uVar3);
  if (lVar4 == 0) {
    func_0x00010000dc80(uVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000e400();
    auVar23 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000e3e0(auVar23._0_8_,auVar23._8_8_,&PTR____CFConstantStringClassReference_100010228
                       );
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar23._0_8_);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_retain(uVar2);
  func_0x00010000dc60(uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e400();
  auVar23 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e3e0(auVar23._0_8_,auVar23._8_8_,&PTR____CFConstantStringClassReference_100010208);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar23._0_8_);
  _objc_release(uVar3);
  if (lVar5 == 0) {
    func_0x00010000dc80(uVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000e400();
    auVar23 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000e3e0(auVar23._0_8_,auVar23._8_8_,&PTR____CFConstantStringClassReference_100010208
                       );
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar23._0_8_);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    func_0x00010000e360(PTR__OBJC_CLASS___SCExtensionCrashManager_1000149e8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000e3c0();
    _objc_release(uVar3);
    func_0x00010000e360(PTR__OBJC_CLASS___SCExtensionCrashManager_1000149e8);
    auVar23 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000e2e0(auVar23._0_8_,auVar23._8_8_,lVar4);
    _objc_release(auVar23._0_8_);
    func_0x00010000e380(PTR__OBJC_CLASS___SCUserExtensionStorageServiceImpl_1000149f0,extraout_x1,
                        lVar4);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_alloc(PTR__OBJC_CLASS___SCNotificationServiceExtensionUserDefaults_1000149f8);
    func_0x00010000dc80(uVar3);
    auVar23 = _objc_retainAutoreleasedReturnValue();
    uVar6 = func_0x00010000df20(uVar6,auVar23._8_8_,auVar23._0_8_);
    _objc_release(auVar23._0_8_);
    uVar7 = _objc_alloc(PTR__OBJC_CLASS___SCMapNotificationExtensionUserDefaults_100014a00);
    func_0x00010000dc80(uVar3);
    auVar23 = _objc_retainAutoreleasedReturnValue();
    uVar7 = func_0x00010000df20(uVar7,auVar23._8_8_,auVar23._0_8_);
    _objc_release(auVar23._0_8_);
    func_0x00010000e080(uVar7);
    lVar8 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000e080(uVar7);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000dd80();
    lVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    func_0x00010000ddc0(uVar6);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    iVar1 = func_0x00010000dd60();
    _objc_release(uVar9);
    uVar9 = 0;
    if (iVar1 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      if (lVar10 != 0) {
        if (lVar8 == 0) {
          fVar20 = 1.0;
        }
        else {
          fVar20 = (float)func_0x00010000e020(lVar8);
          dVar21 = (double)fVar20;
          if ((double)fVar20 <= 0.1) {
            dVar21 = 0.1;
          }
          dVar22 = 10.0;
          if (dVar21 <= 10.0) {
            dVar22 = dVar21;
          }
          fVar20 = (float)dVar22;
        }
        auVar23 = _objc_alloc(PTR__OBJC_CLASS___SCGrapheneExtensionsConfigurations_100014a08);
        uVar11 = func_0x00010000dea0(fVar20,auVar23._0_8_,auVar23._8_8_,lVar10);
        auVar23 = _objc_alloc(PTR__OBJC_CLASS___SCGrapheneExtensionLogger_100014a10);
        uVar9 = func_0x00010000de40(auVar23._0_8_,auVar23._8_8_,uVar11,lVar4);
        auVar23 = _objc_alloc(PTR_PTR_100014a18);
        uVar19 = func_0x00010000de60(auVar23._0_8_,auVar23._8_8_,uVar9);
        _objc_release(uVar11);
      }
    }
    auVar23 = _objc_alloc(PTR__OBJC_CLASS___SCBlizzardExtensionLogger_100014a20);
    uVar11 = func_0x00010000dee0(auVar23._0_8_,auVar23._8_8_,lVar4,lVar5);
    auVar23 = _objc_alloc(PTR__OBJC_CLASS___SCNotifExtUserSession_100014a28);
    uVar12 = func_0x00010000df00(auVar23._0_8_,auVar23._8_8_,lVar4,lVar5,uVar11);
    func_0x00010000e340(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_100014a30);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    uVar14 = _objc_alloc(PTR_PTR_100014a38);
    func_0x00010000dc80(uVar2);
    auVar23 = _objc_retainAutoreleasedReturnValue();
    uVar14 = func_0x00010000df40(uVar14,auVar23._8_8_,uVar12,auVar23._0_8_);
    _objc_release(auVar23._0_8_);
    uVar15 = _objc_alloc(PTR_PTR_100014a40);
    func_0x00010000dc80(uVar2);
    uVar16 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000ddc0(uVar6);
    auVar23 = _objc_retainAutoreleasedReturnValue();
    uVar15 = func_0x00010000de20(uVar15,auVar23._8_8_,uVar16,uVar13,uVar14,uVar19,auVar23._0_8_);
    _objc_release(auVar23._0_8_);
    _objc_release(uVar16);
    uVar16 = _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_100014a48);
    func_0x00010000e3a0(uVar12);
    auVar23 = _objc_retainAutoreleasedReturnValue();
    uVar16 = func_0x00010000dec0(uVar16,auVar23._8_8_,auVar23._0_8_);
    _objc_release(auVar23._0_8_);
    func_0x00010000e040(PTR__OBJC_CLASS___SCLocationPushHandlerFactory_100014a50,extraout_x1_00,
                        param_3,lVar8,1,0,uVar16,uVar9,uVar11);
    lVar17 = _objc_retainAutoreleasedReturnValue();
    if (lVar17 == 0) {
      (**(code **)(param_4 + 0x10))();
    }
    else {
      _objc_retain(lVar17);
      uVar18 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar17;
      _objc_release(uVar18);
      _objc_retain(uVar15);
      uVar18 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar15;
      _objc_release(uVar18);
      func_0x00010000dd40(*(undefined8 *)(param_1 + 0x10),extraout_x1_01,param_3,1,
                          &PTR___NSConcreteGlobalBlock_1000100f8);
      func_0x00010000e100(*(undefined8 *)(param_1 + 8),extraout_x1_02,param_4);
    }
    _objc_release(lVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(uVar19);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010000dbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000100b0)(param_3);
  return;
}



/* Entry: 10000c698; end: 10000c69b;  */

void FUN_10000c698(void)

{
  return;
}



/* Entry: 10000c69c; end: 10000c6a3; -[SCMapLocationPushExtension serviceExtensionWillTerminate] */

void FUN_10000c69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010000ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100010098)(*(undefined8 *)(param_1 + 8),PTR_s_forceComplete_100014828)
  ;
  return;
}



/* Entry: 10000c6a4; end: 10000c6d3; -[SCMapLocationPushExtension .cxx_destruct] */

void FUN_10000c6a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000100d0)(param_1 + 8,0);
  return;
}



/* Entry: 10000c6d4; end: 10000c87f; -[SCExtensionPushAcknowledger initWithAppGroupUserDefaults:networkingApiClient:requestFactory:grapheneLogger:configs:] */

long FUN_10000c6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_100014a88;
  uStack_60 = param_1;
  lVar1 = _objc_msgSendSuper2(&uStack_60,PTR_s_init_1000147b8);
  if (lVar1 != 0) {
    uVar2 = _objc_alloc_init(PTR__OBJC_CLASS___SCTimeProvider_100014a58);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = param_5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    _objc_release(uVar2);
    _dispatch_queue_attr_make_with_qos_class(0,0x19,0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _dispatch_queue_create("com.snapchat.push.extension.acknowledger",uVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined8 *)(lVar1 + 0x28) = 0x3ff0000000000000;
    *(undefined1 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 10;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10000c880; end: 10000cabb; -[SCExtensionPushAcknowledger didReceiveNotificationWithPayload:extensionType:withCompletionHandler:] */

void FUN_10000c880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = _objc_retainBlock(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _objc_release(uVar4);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar2);
  auVar6 = func_0x00010000dc00(param_1);
  func_0x00010000e0c0(*(undefined8 *)(param_1 + 0x80),auVar6._8_8_,
                      &PTR____CFConstantStringClassReference_100010268);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e0c0(*(undefined8 *)(param_1 + 0x80),auVar7._8_8_,
                      &PTR____CFConstantStringClassReference_100010288);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if ((auVar7._0_8_ == 0) || (lVar3 == 0)) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    func_0x00010000dce0(*(undefined8 *)(param_1 + 8));
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    _objc_release(uVar4);
    func_0x00010000dde0(*(undefined8 *)(param_1 + 0x60),extraout_x1,*(undefined8 *)(param_1 + 0x80),
                        param_4,auVar6._0_8_);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    *(undefined4 *)(param_1 + 0x40) = 0;
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR___NSConcreteStackBlock_100010018;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_a8 = PTR___NSConcreteStackBlock_100010018;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10000cabc;
    puStack_90 = &UNK_100010118;
    _objc_copyWeak(auStack_80,auStack_78);
    uStack_88 = uVar2;
    _objc_retain(uVar2);
    _dispatch_async(uVar4,&puStack_a8);
    uVar4 = _dispatch_time(0,*(long *)(param_1 + 0x50) * 1000000000);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10000cb48;
    puStack_b8 = &UNK_100010148;
    _objc_copyWeak(auStack_b0,auStack_78);
    _dispatch_after(uVar4,uVar5,&puStack_d0);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar3);
  _objc_release(auVar7._0_8_);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10000cabc; end: 10000cb73;  */

void FUN_10000cabc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = _objc_loadWeakRetained(param_1 + 0x28);
  func_0x00010000dc20(auVar1._0_8_,auVar1._8_8_,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010000dbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000100b0)(auVar1._0_8_);
  return;
}



/* Entry: 10000cb74; end: 10000cb87;  */

void FUN_10000cb74(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010000db6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_100010078)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 10000cb88; end: 10000cc33; -[SCExtensionPushAcknowledger cleanupOnTimeout] */

void FUN_10000cb88(long param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  func_0x00010000e400(*(undefined8 *)(param_1 + 0x10));
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x00010000dca0(auVar3._0_8_,auVar3._8_8_,
                              &PTR____CFConstantStringClassReference_100010248);
  _objc_release(auVar3._0_8_);
  func_0x00010000dce0(*(undefined8 *)(param_1 + 8));
  auVar3 = _objc_retainAutoreleasedReturnValue();
  dVar2 = (double)func_0x00010000e440(auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_1 + 0x78));
  func_0x00010000e000(*(undefined8 *)(param_1 + 0x68),extraout_x1,(long)(dVar2 * 1000.0),uVar1);
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010000dbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000100b0)(auVar3._0_8_);
  return;
}



/* Entry: 10000cc34; end: 10000ce27; -[SCExtensionPushAcknowledger _makeRequest:] */

void FUN_10000cc34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    func_0x00010000e0e0(*(undefined8 *)(param_1 + 0x58));
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    puStack_78 = &uStack_80;
    func_0x00010000e400(*(undefined8 *)(param_1 + 0x10));
    auVar6 = _objc_retainAutoreleasedReturnValue();
    uVar2 = func_0x00010000dca0(auVar6._0_8_,auVar6._8_8_,
                                &PTR____CFConstantStringClassReference_100010248);
    _objc_release(auVar6._0_8_);
    uStack_68 = uVar2;
    _dispatch_get_global_queue(0x19,0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_100010018;
    puStack_c0 = PTR___NSConcreteStackBlock_100010018;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10000ce28;
    puStack_a8 = &UNK_1000101d8;
    uStack_a0 = uVar3;
    lStack_98 = param_1;
    _objc_retain(param_3);
    uStack_90 = param_3;
    puStack_88 = &uStack_80;
    _objc_retain(uVar3);
    _dispatch_async(uVar4,&puStack_c0);
    _objc_release(uVar4);
    _objc_initWeak(auStack_c8,param_1);
    uVar4 = _dispatch_time(0,(long)(*(double *)(param_1 + 0x28) * 1000000000.0));
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x10000d238;
    puStack_e0 = &UNK_100010118;
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(param_3);
    uStack_d8 = param_3;
    _dispatch_after(uVar4,uVar5,&puStack_f8);
    *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x28);
    _objc_release(uStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_90);
    _objc_release(uStack_a0);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10000ce28; end: 10000cf73;  */

void FUN_10000ce28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100010028;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000102c8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000102e8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000102a8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_1000102a8;
  func_0x00010000dd20(PTR__OBJC_CLASS___NSDictionary_100014a60,param_2,&ppuStack_48,&ppuStack_58,2);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x00010000e0a0();
  _objc_release(uVar1);
  auVar5 = func_0x00010000df80(*(undefined8 *)(param_1 + 0x20));
  if (auVar5._0_8_ != 0) {
    func_0x00010000e320(uVar2,auVar5._8_8_,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_100010328);
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010000dd00(*(undefined8 *)(param_1 + 0x30));
  auVar5 = _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_100010018;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10000cf74;
  puStack_70 = &UNK_1000101a8;
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = uVar2;
  func_0x00010000e060(uVar4,auVar5._8_8_,&PTR____CFConstantStringClassReference_100010308,uVar2,
                      auVar5._0_8_,0,&puStack_88);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_100010028 == lStack_38) {
    return;
  }
  lVar3 = ___stack_chk_fail();
  pcStack_98 = FUN_10000cf74;
  uStack_b0 = uVar2;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar1);
  lStack_c8 = *(long *)(lVar3 + 0x20);
  uStack_b8 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lStack_c8 + 0x20);
  puStack_e8 = PTR___NSConcreteStackBlock_100010018;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x10000d004;
  puStack_d0 = &UNK_100010178;
  uStack_c0 = uVar1;
  _objc_retain(uVar1);
  _dispatch_async(uVar2,&puStack_e8);
  _objc_release(uStack_c0);
  _objc_release(uVar1);
  return;
}



/* Entry: 10000cf74; end: 10000d26b;  */

void FUN_10000cf74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  lStack_38 = *(long *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_100010018;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10000d004;
  puStack_40 = &UNK_100010178;
  uStack_30 = param_4;
  _objc_retain(param_4);
  _dispatch_async(uVar1,&puStack_58);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 10000d26c; end: 10000d2b7; -[SCExtensionPushAcknowledger _getReceiveTimeStamp] */

long FUN_10000d26c(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010000dce0(*(undefined8 *)(param_1 + 8));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar2 = (double)func_0x00010000e420();
  _objc_release(uVar1);
  return (long)(dVar2 * 1000.0);
}



/* Entry: 10000d2b8; end: 10000d353; -[SCExtensionPushAcknowledger .cxx_destruct] */

void FUN_10000d2b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000100d0)(param_1 + 8,0);
  return;
}



/* Entry: 10000d354; end: 10000d3c7; -[SCMapLiveLocationAckGrapheneLogger initWithGrapheneExtensionLogger:] */

long FUN_10000d354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_100014a90;
  uStack_30 = param_1;
  lVar1 = _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000147b8);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10000d3c8; end: 10000d4c3; -[SCMapLiveLocationAckGrapheneLogger logGrapheneExtensionAcknowledgerSuccessLatencyMs:appState:] */

void FUN_10000d3c8(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100010028;
  ppuStack_40 = &PTR____CFConstantStringClassReference_100010388;
  if (param_4 == 0) {
    ppuStack_40 = &PTR____CFConstantStringClassReference_1000103a8;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_100010368;
  func_0x00010000dd20(PTR__OBJC_CLASS___NSDictionary_100014a60,param_2,&ppuStack_40,&ppuStack_48,1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  auVar8 = _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_100014a68);
  auVar8 = func_0x00010000de80(auVar8._0_8_,auVar8._8_8_,
                               &PTR____CFConstantStringClassReference_100010348,
                               &PTR____CFConstantStringClassReference_1000103c8,uVar1);
  lVar2 = auVar8._0_8_;
  func_0x00010000dc40((double)param_3,*(undefined8 *)(param_1 + 8),auVar8._8_8_,lVar2);
  iVar7 = 1;
  lVar6 = lVar2;
  func_0x00010000de00(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_100010028 == lStack_38) {
    return;
  }
  auVar8 = ___stack_chk_fail();
  lVar3 = auVar8._0_8_;
  pcStack_58 = FUN_10000d4c4;
  lStack_88 = *(long *)PTR____stack_chk_guard_100010028;
  ppuStack_90 = &PTR____CFConstantStringClassReference_100010388;
  if (iVar7 == 0) {
    ppuStack_90 = &PTR____CFConstantStringClassReference_1000103a8;
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_100010368;
  lStack_80 = lVar2;
  uStack_78 = uVar1;
  lStack_70 = param_1;
  lStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010000dd20(PTR__OBJC_CLASS___NSDictionary_100014a60,auVar8._8_8_,&ppuStack_90,
                      &ppuStack_98,1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  auVar8 = _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_100014a68);
  auVar8 = func_0x00010000de80(auVar8._0_8_,auVar8._8_8_,
                               &PTR____CFConstantStringClassReference_100010348,
                               &PTR____CFConstantStringClassReference_1000103e8,uVar4);
  uVar5 = auVar8._0_8_;
  func_0x00010000dc40((double)lVar6,*(undefined8 *)(lVar3 + 8),auVar8._8_8_,uVar5);
  uVar1 = uVar5;
  func_0x00010000de00(*(undefined8 *)(lVar3 + 8),extraout_x1,uVar5,1);
  iVar7 = (int)uVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_100010028 == lStack_88) {
    return;
  }
  auVar8 = ___stack_chk_fail();
  pcStack_a8 = FUN_10000d5c0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_100010028;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_100010388;
  if (iVar7 == 0) {
    ppuStack_e0 = &PTR____CFConstantStringClassReference_1000103a8;
  }
  ppuStack_e8 = &PTR____CFConstantStringClassReference_100010368;
  uStack_d0 = uVar5;
  uStack_c8 = uVar4;
  lStack_c0 = lVar3;
  lStack_b8 = lVar6;
  ppuStack_b0 = &puStack_60;
  func_0x00010000dd20(PTR__OBJC_CLASS___NSDictionary_100014a60,auVar8._8_8_,&ppuStack_e0,
                      &ppuStack_e8,1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  auVar9 = _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_100014a68);
  auVar9 = func_0x00010000de80(auVar9._0_8_,auVar9._8_8_,
                               &PTR____CFConstantStringClassReference_100010348,
                               &PTR____CFConstantStringClassReference_100010408,uVar1);
  func_0x00010000de00(*(undefined8 *)(auVar8._0_8_ + 8),auVar9._8_8_,auVar9._0_8_,1);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_100010028 == lStack_d8) {
    return;
  }
  lVar6 = ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000100d0)(lVar6 + 8,0);
  return;
}



/* Entry: 10000d4c4; end: 10000d5bf; -[SCMapLiveLocationAckGrapheneLogger logGrapheneExtensionAcknowledgerTimeoutLatencyMs:appState:] */

void FUN_10000d4c4(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100010028;
  ppuStack_40 = &PTR____CFConstantStringClassReference_100010388;
  if (param_4 == 0) {
    ppuStack_40 = &PTR____CFConstantStringClassReference_1000103a8;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_100010368;
  func_0x00010000dd20(PTR__OBJC_CLASS___NSDictionary_100014a60,param_2,&ppuStack_40,&ppuStack_48,1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  auVar6 = _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_100014a68);
  auVar6 = func_0x00010000de80(auVar6._0_8_,auVar6._8_8_,
                               &PTR____CFConstantStringClassReference_100010348,
                               &PTR____CFConstantStringClassReference_1000103e8,uVar1);
  uVar2 = auVar6._0_8_;
  func_0x00010000dc40((double)param_3,*(undefined8 *)(param_1 + 8),auVar6._8_8_,uVar2);
  uVar3 = uVar2;
  func_0x00010000de00(*(undefined8 *)(param_1 + 8),extraout_x1,uVar2,1);
  iVar5 = (int)uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_100010028 == lStack_38) {
    return;
  }
  auVar6 = ___stack_chk_fail();
  pcStack_58 = FUN_10000d5c0;
  lStack_88 = *(long *)PTR____stack_chk_guard_100010028;
  ppuStack_90 = &PTR____CFConstantStringClassReference_100010388;
  if (iVar5 == 0) {
    ppuStack_90 = &PTR____CFConstantStringClassReference_1000103a8;
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_100010368;
  uStack_80 = uVar2;
  uStack_78 = uVar1;
  lStack_70 = param_1;
  lStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010000dd20(PTR__OBJC_CLASS___NSDictionary_100014a60,auVar6._8_8_,&ppuStack_90,
                      &ppuStack_98,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  auVar7 = _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_100014a68);
  auVar7 = func_0x00010000de80(auVar7._0_8_,auVar7._8_8_,
                               &PTR____CFConstantStringClassReference_100010348,
                               &PTR____CFConstantStringClassReference_100010408,uVar3);
  func_0x00010000de00(*(undefined8 *)(auVar6._0_8_ + 8),auVar7._8_8_,auVar7._0_8_,1);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_100010028 == lStack_88) {
    return;
  }
  lVar4 = ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000100d0)(lVar4 + 8,0);
  return;
}



/* Entry: 10000d5c0; end: 10000d6a7; -[SCMapLiveLocationAckGrapheneLogger logGrapheneExtensionAcknowledgerFailedWithAppState:] */

void FUN_10000d5c0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100010028;
  ppuStack_40 = &PTR____CFConstantStringClassReference_100010388;
  if (param_3 == 0) {
    ppuStack_40 = &PTR____CFConstantStringClassReference_1000103a8;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_100010368;
  func_0x00010000dd20(PTR__OBJC_CLASS___NSDictionary_100014a60,param_2,&ppuStack_40,&ppuStack_48,1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  auVar3 = _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_100014a68);
  auVar3 = func_0x00010000de80(auVar3._0_8_,auVar3._8_8_,
                               &PTR____CFConstantStringClassReference_100010348,
                               &PTR____CFConstantStringClassReference_100010408,uVar1);
  func_0x00010000de00(*(undefined8 *)(param_1 + 8),auVar3._8_8_,auVar3._0_8_,1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_100010028 == lStack_38) {
    return;
  }
  lVar2 = ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000100d0)(lVar2 + 8,0);
  return;
}



/* Entry: 10000d6a8; end: 10000d6b3; -[SCMapLiveLocationAckGrapheneLogger .cxx_destruct] */

void FUN_10000d6a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000100d0)(param_1 + 8,0);
  return;
}



/* Entry: 10000d6b4; end: 10000d757; -[SCPushNotificationAckNotificationRequestFactory initWithUserSession:systemScopedAppGroupUserDefaults:] */

long FUN_10000d6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_100014a98;
  uStack_40 = param_1;
  lVar1 = _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000147b8);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10000d758; end: 10000da97; -[SCPushNotificationAckNotificationRequestFactory getPnsRequestParametersWithUserInfo:extenstionType:receivedTimestamp:] */

void FUN_10000d758(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  _objc_retain(param_3);
  func_0x00010000e0c0(param_3,extraout_x1,&PTR____CFConstantStringClassReference_100010288);
  auVar14 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e0c0(param_3,auVar14._8_8_,&PTR____CFConstantStringClassReference_100010488);
  auVar15 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e0c0(param_3,auVar15._8_8_,&PTR____CFConstantStringClassReference_100010448);
  auVar16 = _objc_retainAutoreleasedReturnValue();
  lVar2 = auVar16._0_8_;
  func_0x00010000e0c0(param_3,auVar16._8_8_,&PTR____CFConstantStringClassReference_100010428);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e460(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_100014a70
                     );
  auVar16 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e0c0(param_3,auVar16._8_8_,auVar16._0_8_);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar16._0_8_);
  func_0x00010000e0c0(param_3,extraout_x1_00,&PTR____CFConstantStringClassReference_1000104a8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000e400(*(undefined8 *)(param_1 + 0x10));
  auVar16 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x00010000dca0(auVar16._0_8_,auVar16._8_8_,
                              &PTR____CFConstantStringClassReference_100010248);
  _objc_release(auVar16._0_8_);
  auVar16 = _objc_opt_new(PTR__OBJC_CLASS___SCPushNotificationAckNotificationRequest_100014a78);
  uVar6 = auVar16._0_8_;
  lVar11 = auVar15._0_8_;
  if (lVar2 != 0) {
    lVar11 = lVar2;
  }
  func_0x00010000e220(uVar6,auVar16._8_8_,lVar11);
  func_0x00010000e260(uVar6,extraout_x1_01,uVar5);
  auVar16 = func_0x00010000df60(auVar14._0_8_);
  func_0x00010000e280(uVar6,auVar16._8_8_,auVar16._0_8_);
  func_0x00010000e140(uVar6,extraout_x1_02,param_5);
  auVar16 = _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_100014a80);
  uVar7 = auVar16._0_8_;
  func_0x00010000e300(uVar7,auVar16._8_8_,uVar1 ^ 1);
  func_0x00010000e1e0(uVar6,extraout_x1_03,uVar7);
  func_0x00010000e240(uVar6,extraout_x1_04,uVar4);
  func_0x00010000e2c0(uVar6,extraout_x1_05,uVar3);
  auVar16 = _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_100014a80);
  uVar8 = auVar16._0_8_;
  func_0x00010000e300(uVar8,auVar16._8_8_,1);
  func_0x00010000e2a0(uVar6,extraout_x1_06,uVar8);
  auVar16 = _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_100014a80);
  uVar9 = auVar16._0_8_;
  func_0x00010000e300(uVar9,auVar16._8_8_,param_4 == 0);
  func_0x00010000e1a0(uVar6,extraout_x1_07,uVar9);
  auVar16 = _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_100014a80);
  uVar10 = auVar16._0_8_;
  func_0x00010000e300(uVar10,auVar16._8_8_,param_4 == 1);
  func_0x00010000e1c0(uVar6,extraout_x1_08,uVar10);
  func_0x00010000e120(uVar6,extraout_x1_09,0);
  func_0x00010000e160(uVar6,extraout_x1_10,0);
  func_0x00010000e180(uVar6,extraout_x1_11,&PTR____CFConstantStringClassReference_1000104c8);
  func_0x00010000e0c0(param_3,extraout_x1_12,&PTR____CFConstantStringClassReference_100010468);
  lVar11 = _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  auVar16 = _objc_opt_new(PTR__OBJC_CLASS___GPBBoolValue_100014a80);
  uVar12 = auVar16._0_8_;
  if ((lVar11 == 0) || (*(long *)(param_1 + 8) != 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  func_0x00010000e300(uVar12,auVar16._8_8_,uVar13);
  func_0x00010000e200(uVar6,extraout_x1_13,uVar12);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(auVar15._0_8_);
  _objc_release(auVar14._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010000db60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100010070)(uVar6);
  return;
}



/* Entry: 10000da98; end: 10000dac7; -[SCPushNotificationAckNotificationRequestFactory .cxx_destruct] */

void FUN_10000da98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000100d0)(param_1 + 8,0);
  return;
}


