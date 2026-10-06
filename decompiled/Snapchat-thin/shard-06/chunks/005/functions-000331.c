/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10496b660; end: 10496b667; -[FBSDKImageDownloader urlCache] */

undefined8 FUN_10496b660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496b668; end: 10496b673; -[FBSDKImageDownloader setUrlCache:] */

void FUN_10496b668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10496b674; end: 10496b6a3; -[FBSDKImageDownloader .cxx_destruct] */

void FUN_10496b674(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10496b6a4; end: 10496b783; -[FBSDKImpressionLoggerFactory initWithGraphRequestFactory:eventLogger:notificationCenter:accessTokenWallet:] */

undefined1 *
FUN_10496b6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar4 = &uStack_60;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e33c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar4 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x10),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x18),param_5);
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x20),param_6);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar4;
}



/* Entry: 10496b784; end: 10496b78f; -[FBSDKImpressionLoggerFactory makeImpressionLoggerWithEventName:] */

void FUN_10496b784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126adf20,PTR_s_retrieveLoggerWith__11262d4e0);
  return;
}



/* Entry: 10496b790; end: 10496b797; -[FBSDKImpressionLoggerFactory graphRequestFactory] */

undefined8 FUN_10496b790(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10496b798; end: 10496b79f; -[FBSDKImpressionLoggerFactory eventLogger] */

undefined8 FUN_10496b798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496b7a0; end: 10496b7a7; -[FBSDKImpressionLoggerFactory notificationCenter] */

undefined8 FUN_10496b7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10496b7a8; end: 10496b7af; -[FBSDKImpressionLoggerFactory accessTokenWallet] */

undefined8 FUN_10496b7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10496b7b0; end: 10496b7f7; -[FBSDKImpressionLoggerFactory .cxx_destruct] */

void FUN_10496b7b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10496b7f8; end: 10496b803; +[FBSDKImpressionLoggingButton impressionLoggerFactory] */

void FUN_10496b7f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d3c0);
  return;
}



/* Entry: 10496b804; end: 10496b813; +[FBSDKImpressionLoggingButton setImpressionLoggerFactory:] */

void FUN_10496b804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d3c0,param_3);
  return;
}



/* Entry: 10496b814; end: 10496b817; +[FBSDKImpressionLoggingButton configureWithImpressionLoggerFactory:] */

void FUN_10496b814(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ab2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImpressionLoggerFactory__1126486d0);
  return;
}



/* Entry: 10496b818; end: 10496b91f; -[FBSDKImpressionLoggingButton layoutSubviews] */

void FUN_10496b818(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1;
  func_0x00010bf481c0(param_1,param_2,PTR_DAT_1126a4b08);
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfeab80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfeaba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf02740(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 != 0)) {
      lVar4 = param_1;
      func_0x00010bf39c40(param_1);
      func_0x00010bfea9a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0b7200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      func_0x00010c0a81c0(lVar5);
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_48 = PTR_PTR_1126e33d0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 10496b920; end: 10496ba37; -[FBSDKInstrumentManager configureWithFeatureChecker:settings:crashObserver:errorReporter:crashHandler:] */

void FUN_10496b920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496ba38; end: 10496bad3; +[FBSDKInstrumentManager shared] */

void FUN_10496ba38(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x10496baac;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369d3c8 != -1) {
    func_0x00010002a2fc(0x11369d3c8,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d3d0);
  return;
}



/* Entry: 10496bad4; end: 10496bbd7; -[FBSDKInstrumentManager enable] */

void FUN_10496bad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06cc80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bfa1d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37e60();
    _objc_release(uVar1);
    func_0x00010bfa1d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37e60();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10496bbd8; end: 10496bc77;  */

void FUN_10496bbd8(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf53ee0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf54000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa200(uVar1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10496bc78; end: 10496bc7f; -[FBSDKInstrumentManager featureChecker] */

undefined8 FUN_10496bc78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10496bc80; end: 10496bc8b; -[FBSDKInstrumentManager setFeatureChecker:] */

void FUN_10496bc80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10496bc8c; end: 10496bc93; -[FBSDKInstrumentManager settings] */

undefined8 FUN_10496bc8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496bc94; end: 10496bc9f; -[FBSDKInstrumentManager setSettings:] */

void FUN_10496bc94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10496bca0; end: 10496bca7; -[FBSDKInstrumentManager crashObserver] */

undefined8 FUN_10496bca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10496bca8; end: 10496bcb3; -[FBSDKInstrumentManager setCrashObserver:] */

void FUN_10496bca8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10496bcb4; end: 10496bcbb; -[FBSDKInstrumentManager errorReporter] */

undefined8 FUN_10496bcb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10496bcbc; end: 10496bcc7; -[FBSDKInstrumentManager setErrorReporter:] */

void FUN_10496bcbc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10496bcc8; end: 10496bccf; -[FBSDKInstrumentManager crashHandler] */

undefined8 FUN_10496bcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10496bcd0; end: 10496bcdb; -[FBSDKInstrumentManager setCrashHandler:] */

void FUN_10496bcd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10496bcdc; end: 10496bd2f; -[FBSDKInstrumentManager .cxx_destruct] */

void FUN_10496bcdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10496bd30; end: 10496bdb3; -[FBSDKIntegrityManager initWithGateKeeperManager:integrityProcessor:] */

undefined1 *
FUN_10496bd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e33d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10496bdb4; end: 10496bdf7; -[FBSDKIntegrityManager enable] */

void FUN_10496bdb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1b1ea0(param_1,param_2,1);
  uVar1 = param_1;
  func_0x00010bfbe560(param_1);
  func_0x00010bf1f340();
                    /* WARNING: Could not recover jumptable at 0x00010c1b4070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsSampleEnabled__11264aa40,uVar1);
  return;
}



/* Entry: 10496bdf8; end: 10496c0eb; -[FBSDKIntegrityManager processParameters:eventName:] */

undefined * FUN_10496bdf8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c075b20();
  if (((int)uVar2 == 0) || (puVar3 = param_3, func_0x00010bf529e0(), puVar3 == (undefined *)0x0)) {
    puVar3 = param_3;
    _objc_retain(param_3);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar3 = param_3;
    func_0x00010c0865c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar3;
    func_0x00010bf52a60();
    if (puStack_138 != (undefined *)0x0) {
      lVar10 = *plStack_120;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(puVar3);
          }
          ppuVar7 = (undefined **)PTR_PTR_1126add78;
          uVar12 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
          puVar6 = param_3;
          func_0x00010c0e00e0(param_3,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3f0e0(ppuVar7,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          uVar2 = param_1;
          func_0x00010c0680a0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar2;
          func_0x00010c114d80();
          if ((int)uVar8 == 0) {
            uVar8 = param_1;
            func_0x00010c0680a0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c114d80();
            _objc_release(uVar8);
            _objc_release(uVar2);
            if ((int)uVar9 != 0) goto LAB_10496bfb4;
          }
          else {
            _objc_release(uVar2);
LAB_10496bfb4:
            puVar6 = PTR_PTR_1126add78;
            uVar2 = param_1;
            func_0x00010c07ce80();
            ppuVar1 = ppuVar7;
            if ((int)uVar2 == 0) {
              ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
            }
            func_0x00010bf71e80(puVar6,param_2,puVar5,ppuVar1,uVar12);
            func_0x00010c12d3e0(puVar4,param_2,uVar12);
          }
          _objc_release(ppuVar7);
          puVar11 = puVar11 + 1;
        } while (puStack_138 != puVar11);
        puStack_138 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (puStack_138 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126add58;
      func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar5,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar4,puVar3,
                          &PTR____CFConstantStringClassReference_110da4698);
      _objc_release(puVar3);
    }
    puVar3 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 0x10);
}



/* Entry: 10496c0ec; end: 10496c0f3; -[FBSDKIntegrityManager gateKeeperManager] */

undefined8 FUN_10496c0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496c0f4; end: 10496c0ff; -[FBSDKIntegrityManager setGateKeeperManager:] */

void FUN_10496c0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10496c100; end: 10496c117; -[FBSDKIntegrityManager integrityProcessor] */

void FUN_10496c100(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10496c118; end: 10496c123; -[FBSDKIntegrityManager setIntegrityProcessor:] */

void FUN_10496c118(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10496c124; end: 10496c12b; -[FBSDKIntegrityManager isIntegrityEnabled] */

undefined1 FUN_10496c124(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10496c12c; end: 10496c133; -[FBSDKIntegrityManager setIsIntegrityEnabled:] */

void FUN_10496c12c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10496c134; end: 10496c13b; -[FBSDKIntegrityManager isSampleEnabled] */

undefined1 FUN_10496c134(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10496c13c; end: 10496c143; -[FBSDKIntegrityManager setIsSampleEnabled:] */

void FUN_10496c13c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10496c144; end: 10496c16f; -[FBSDKIntegrityManager .cxx_destruct] */

void FUN_10496c144(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10496c170; end: 10496c1df; +[FBSDKInternalUtility sharedUtility] */

void FUN_10496c170(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  if (lRam000000011369d3d8 == 0) {
    lVar2 = param_1;
    func_0x00010c0d8420();
    lVar1 = lRam000000011369d3d8;
    lRam000000011369d3d8 = lVar2;
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(lRam000000011369d3d8);
  return;
}



/* Entry: 10496c1e0; end: 10496c28b; -[FBSDKInternalUtility configureWithInfoDictionaryProvider:loggerFactory:settings:errorFactory:] */

void FUN_10496c1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1ac400(param_1);
  func_0x00010c1c0580(param_1);
  _objc_release(param_4);
  func_0x00010c1fe440(param_1);
  _objc_release(param_5);
  func_0x00010c1970c0(param_1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c1b01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsConfigured__112649aa0,1);
  return;
}



/* Entry: 10496c28c; end: 10496c37f; -[FBSDKInternalUtility appURLScheme] */

void FUN_10496c28c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  ppuVar1 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  _objc_retain();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf065a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain();
  _objc_release(ppuVar2);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
  _objc_release(ppuVar1);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10496c380; end: 10496c43b; -[FBSDKInternalUtility appURLWithHost:path:queryParameters:error:] */

void FUN_10496c380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf06580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3440(param_1,param_2,uVar1,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10496c43c; end: 10496c55f; -[FBSDKInternalUtility parametersFromFBURL:] */

void FUN_10496c43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126add58;
  uVar2 = param_3;
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf720c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126add58;
  if ((int)uVar4 != 0) {
    uVar2 = param_3;
    func_0x00010bfb6820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720c0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10496c560; end: 10496c5d7; -[FBSDKInternalUtility bundleForStrings] */

void FUN_10496c560(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10496c5d8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  if (lRam000000011369d3e8 != -1) {
    func_0x00010002a2fc(0x11369d3e8,&puStack_38);
  }
  _objc_retainAutoreleaseReturnValue(uRam000000011369d3e0);
  return;
}



/* Entry: 10496c5d8; end: 10496c69f;  */

void FUN_10496c5d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf39c40(uVar1);
  func_0x00010bf249e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010bf24ca0(PTR__OBJC_CLASS___NSBundle_1126aea78,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar2;
    _objc_retain();
  }
  uVar1 = puRam000000011369d3e0;
  puRam000000011369d3e0 = puVar4;
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10496c6a0; end: 10496c6ef; -[FBSDKInternalUtility currentTimeInMilliseconds] */

long FUN_10496c6a0(void)

{
  long lStack_20;
  int iStack_18;
  
  _gettimeofday(&lStack_20,0);
  return lStack_20 * 1000 + (long)(iStack_18 / 1000);
}



/* Entry: 10496c6f0; end: 10496c977; -[FBSDKInternalUtility extractPermissionsFromResponse:grantedPermissions:declinedPermissions:expiredPermissions:] */

void FUN_10496c6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010bf71e60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar2;
    _objc_retain();
    puVar3 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        puVar5 = PTR_PTR_1126add78;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010bf71e60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126add78;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010bf71e60();
        _objc_retainAutoreleasedReturnValue();
        if ((puVar5 != (undefined *)0x0 && puVar6 != (undefined *)0x0) &&
           (((puVar7 = puVar6, func_0x00010c0720c0(), uVar8 = param_4, ((ulong)puVar7 & 1) != 0 ||
             (puVar7 = puVar6, func_0x00010c0720c0(), uVar8 = param_5, ((ulong)puVar7 & 1) != 0)) ||
            (puVar7 = puVar6, func_0x00010c0720c0(), uVar8 = param_6, (int)puVar7 != 0)))) {
          func_0x00010befa120(uVar8);
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf9f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10496c978; end: 10496c987; -[FBSDKInternalUtility facebookURLWithHostPrefix:path:queryParameters:error:] */

void FUN_10496c978(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_facebookURLWithHostPrefix_path_q_1125c5688);
  return;
}



/* Entry: 10496c988; end: 10496cac7; -[FBSDKInternalUtility facebookURLWithHostPrefix:path:queryParameters:defaultVersion:error:] */

void FUN_10496c988(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain();
  ppuVar1 = param_6;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bfcdce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  else {
    ppuVar2 = param_6;
    _objc_retain();
  }
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  ppuVar1 = ppuVar2;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dacf38;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dacf38,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  func_0x00010be0dde0(param_1,param_2,param_3,param_4,param_5,ppuVar1,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10496cac8; end: 10496cad7; -[FBSDKInternalUtility unversionedFacebookURLWithHostPrefix:path:queryParameters:error:] */

void FUN_10496cac8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__facebookURLWithHostPrefix_path__112561118);
  return;
}



/* Entry: 10496cad8; end: 10496ceeb; -[FBSDKInternalUtility _facebookURLWithHostPrefix:path:queryParameters:defaultVersion:error:] */

void FUN_10496cad8(long param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c08fa60();
  uVar2 = param_3;
  if ((uVar1 != 0) &&
     (uVar1 = param_3,
     func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110dad1f8),
     (uVar1 & 1) == 0)) {
    func_0x00010c25ce40(param_3,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  _objc_retain();
  puVar3 = PTR_PTR_1126add50;
  func_0x00010c06ca60();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_release(uVar2);
LAB_10496cbc8:
    ppuVar6 = &PTR____CFConstantStringClassReference_110da4738;
  }
  else {
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110da4cd8);
    if ((int)uVar1 == 0) {
      uVar1 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110da4cf8);
      _objc_release(uVar2);
      if ((int)uVar1 == 0) goto LAB_10496cbc8;
    }
    else {
      _objc_release(uVar2);
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110da4718;
  }
  lVar4 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf9f320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c013ce0();
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  ppuVar7 = param_4;
  func_0x00010c08fa60();
  ppuVar6 = param_4;
  if (ppuVar7 != (undefined **)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    _objc_alloc();
    func_0x00010c04e820();
    puVar9 = puVar8;
    func_0x00010c14f4e0();
    if (((((int)puVar9 != 0) &&
         (puVar9 = puVar8, func_0x00010c14ed40(puVar8,param_2,0), (int)puVar9 != 0)) &&
        (puVar9 = puVar8,
        func_0x00010c14f4e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110dad1f8,0),
        (int)puVar9 != 0)) &&
       (puVar9 = puVar8, func_0x00010c14ed40(puVar8,param_2,0), (int)puVar9 != 0)) {
      lVar4 = param_1;
      func_0x00010c0b37c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010bf56f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar4 = param_1;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar4;
      func_0x00010bfcdce0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110da4778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a58e0(lVar10,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(lVar11);
      _objc_release(lVar4);
      _objc_release(param_6);
      _objc_release(lVar10);
      param_6 = (undefined **)0x0;
    }
    ppuVar7 = param_4;
    func_0x00010bfda7c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dacf38);
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dacf38;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dacf38,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
    }
    _objc_release(puVar8);
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_6 != (undefined **)0x0) {
    ppuVar7 = param_6;
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar12 = ppuVar6;
  }
  func_0x00010c013ce0();
  _objc_release(ppuVar6);
  func_0x00010bdc3440(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8d78,puVar3,puVar8
                      ,param_5,param_7,param_8,ppuVar7,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10496ceec; end: 10496cf73; -[FBSDKInternalUtility isBrowserURL:] */

ulong FUN_10496ceec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10496cf74; end: 10496cfcf; -[FBSDKInternalUtility isFacebookBundleIdentifier:] */

ulong FUN_10496cf74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bfda7c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da47b8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10496cfd0; end: 10496d02b; -[FBSDKInternalUtility isSafariBundleIdentifier:] */

ulong FUN_10496cfd0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da47f8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10496d02c; end: 10496d0a7; -[FBSDKInternalUtility object:isEqualToObject:] */

long FUN_10496d02c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain();
  if (param_3 == param_4) {
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
    if ((param_3 != 0) && (param_4 != 0)) {
      lVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10496d0a8; end: 10496d167; -[FBSDKInternalUtility operatingSystemVersion] */

void FUN_10496d0a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam000000011369d408 != -1) {
    func_0x00010bda8abc();
  }
  uVar1 = uRam000000011369d3f0;
  param_1[1] = uRam000000011369d3f8;
  *param_1 = uVar1;
  param_1[2] = uRam000000011369d400;
  return;
}



/* Entry: 10496d168; end: 10496d427; -[FBSDKInternalUtility URLWithScheme:host:path:queryParameters:error:] */

void FUN_10496d168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,long param_6,undefined8 *param_7)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  ppuVar8 = param_5;
  func_0x00010bfda7c0();
  ppuVar2 = param_5;
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dacf38;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
  lVar3 = param_6;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    ppuVar8 = (undefined **)0x0;
LAB_10496d2e4:
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    puVar9 = puVar7;
    if (iVar1 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    ppuVar5 = ppuVar8;
    if (param_7 != (undefined8 *)0x0) {
      if (puVar9 == (undefined *)0x0) {
        func_0x00010bf98ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010c280900();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_7 = uVar6;
        _objc_release(param_1);
      }
      else {
        *param_7 = 0;
      }
    }
  }
  else {
    puVar4 = PTR_PTR_1126add58;
    func_0x00010c11d9e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)0x0;
    _objc_retain(0);
    if (puVar4 != (undefined *)0x0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dbff78;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 != (undefined **)0x0) {
        _objc_release(puVar4);
        _objc_release(ppuVar5);
        goto LAB_10496d2e4;
      }
    }
    if (param_7 != (undefined8 *)0x0) {
      func_0x00010bf98ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c069b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = uVar6;
      _objc_release(param_1);
    }
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_release(param_6);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10496d428; end: 10496d597; -[FBSDKInternalUtility deleteFacebookCookies] */

void FUN_10496d428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSHTTPCookieStorage_1126d9848;
  func_0x00010c22ba20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f3a0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea7238,
                      &PTR____CFConstantStringClassReference_110da25d8,
                      *(undefined8 *)PTR____NSDictionary0___11034ab50,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf519c0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_100;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bf6b980(puVar1,param_2,*(undefined8 *)(lStack_108 + (long)puVar6 * 8));
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
      puVar3 = puVar2;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(puVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if (puRam000000011369d410 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c0d8420();
    puVar1 = puRam000000011369d410;
    puRam000000011369d410 = puVar2;
    _objc_release(puVar1);
  }
  puVar1 = puRam000000011369d410;
  func_0x00010c0dff20(puRam000000011369d410,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2827c0();
  _objc_release(puVar1);
  puVar1 = puRam000000011369d410;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar3,puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10496d598; end: 10496d64f; -[FBSDKInternalUtility registerTransientObject:] */

void FUN_10496d598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (puRam000000011369d410 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c0d8420();
    puVar2 = puRam000000011369d410;
    puRam000000011369d410 = puVar1;
    _objc_release(puVar2);
  }
  puVar2 = puRam000000011369d410;
  func_0x00010c0dff20(puRam000000011369d410,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2827c0();
  _objc_release(puVar2);
  puVar2 = puRam000000011369d410;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar2,param_2,puVar3,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496d650; end: 10496d80b; -[FBSDKInternalUtility unregisterTransientObject:] */

void FUN_10496d650(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lRam000000011369d410;
  if (param_3 == 0) goto LAB_10496d7d0;
  puVar1 = auStack_48;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2827c0();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = lRam000000011369d410;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 0) {
    puVar1 = auStack_48;
    _objc_loadWeakRetained();
    func_0x00010bf39c40();
    func_0x00010c25d9e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c0b37c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf56f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c0a58e0(puVar1);
LAB_10496d7c0:
    _objc_release(puVar1);
  }
  else {
    if (lVar3 != 1) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = auStack_48;
      _objc_loadWeakRetained(puVar1);
      func_0x00010c1d0560(lVar2);
      goto LAB_10496d7c0;
    }
    puVar4 = auStack_48;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c12d3e0(lVar2);
  }
  _objc_release(puVar4);
LAB_10496d7d0:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10496d80c; end: 10496d887; -[FBSDKInternalUtility viewControllerForView:] */

void FUN_10496d80c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c0d9e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  while (PTR__OBJC_CLASS___UIViewController_1126af898 = puVar1, param_3 != 0) {
    func_0x00010bf39c40(puVar1);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((uVar2 & 1) != 0) break;
    uVar2 = param_3;
    func_0x00010c0d9e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar2;
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10496d888; end: 10496d913; -[FBSDKInternalUtility isFacebookAppInstalled] */

void FUN_10496d888(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10496d914;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011369d418 != -1) {
    func_0x00010002a2fc(0x11369d418,&puStack_48);
  }
  func_0x00010bdd9c40(param_1);
  return;
}



/* Entry: 10496d914; end: 10496d927;  */

void FUN_10496d914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_checkRegisteredCanOpenURLScheme__1125abac0,
             &PTR____CFConstantStringClassReference_110da2698);
  return;
}



/* Entry: 10496d928; end: 10496d9b3; -[FBSDKInternalUtility isMessengerAppInstalled] */

void FUN_10496d928(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10496d9b4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011369d420 != -1) {
    func_0x00010002a2fc(0x11369d420,&puStack_48);
  }
  func_0x00010bdd9c40(param_1);
  return;
}



/* Entry: 10496d9b4; end: 10496d9c7;  */

void FUN_10496d9b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_checkRegisteredCanOpenURLScheme__1125abac0,
             &PTR____CFConstantStringClassReference_110da26b8);
  return;
}



/* Entry: 10496d9c8; end: 10496db67; -[FBSDKInternalUtility _canOpenURLScheme:] */

undefined * FUN_10496d9c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010c0d8420(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c1f6900();
    func_0x00010c1d9820(puVar2,param_2,&PTR____CFConstantStringClassReference_110dacf38);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bdc2b80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf2cf00(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 10496db68; end: 10496dbeb; -[FBSDKInternalUtility validateAppID] */

void FUN_10496db68(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puStack_568;
  undefined *puStack_538;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined *puStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_458 [128];
  undefined1 auStack_3d8 [128];
  undefined1 auStack_358 [128];
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  long lStack_280;
  undefined *puStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [128];
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  
  func_0x00010c296860();
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  if (lVar17 != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      &PTR____CFConstantStringClassReference_110da48d8,
                      &PTR____CFConstantStringClassReference_110da48b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00010c296860();
  puVar3 = puVar2;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar14 != (undefined *)0x0) {
    puVar14 = puVar2;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar14;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf3d5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e86738);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar18);
    _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      &PTR____CFConstantStringClassReference_110da48d8,
                      &PTR____CFConstantStringClassReference_110da48f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00010c296800();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar3;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar18;
  func_0x00010bf065a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110da46b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(puVar2);
  func_0x00010c07c120(puVar3,param_2,ppuVar5);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da4918);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110da48d8,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110da26b8;
    ppuStack_130 = &PTR____CFConstantStringClassReference_110da2698;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_138,2);
    _objc_retainAutoreleasedReturnValue();
    lStack_1f8 = 0;
    puStack_200 = (undefined *)0x0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    _objc_retain();
    ppuVar5 = &puStack_200;
    puVar14 = puVar3;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar17 = *plStack_1f0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_1f0 != lVar17) {
            _objc_enumerationMutation(puVar3);
          }
          puVar4 = puVar2;
          func_0x00010c07c120(puVar2,param_2,*(undefined8 *)(lStack_1f8 + (long)puVar18 * 8));
          if ((int)puVar4 != 0) {
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110da4938);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = &PTR____CFConstantStringClassReference_110da48d8;
            puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
            func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                &PTR____CFConstantStringClassReference_110da48d8,puVar2,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            _objc_exception_throw();
            goto LAB_10496dfe0;
          }
          puVar18 = puVar18 + 1;
        } while (puVar14 != puVar18);
        ppuVar5 = &puStack_200;
        puVar14 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,ppuVar5,auStack_1b8,0x10);
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return;
    }
LAB_10496dfe0:
    ___stack_chk_fail();
    lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010c0703a0();
    _objc_release();
    if ((int)puVar14 != 0) {
      puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2d0 = &PTR____CFConstantStringClassReference_110da4958;
      ppuStack_2c8 = &PTR____CFConstantStringClassReference_110da4978;
      ppuStack_2c0 = &PTR____CFConstantStringClassReference_110da4998;
      ppuStack_2b8 = &PTR____CFConstantStringClassReference_110da49b8;
      ppuStack_2b0 = &PTR____CFConstantStringClassReference_110da49d8;
      ppuStack_2a8 = &PTR____CFConstantStringClassReference_110da49f8;
      ppuStack_2a0 = &PTR____CFConstantStringClassReference_110da4a18;
      ppuStack_298 = &PTR____CFConstantStringClassReference_110da4a38;
      ppuStack_290 = &PTR____CFConstantStringClassReference_110da4a58;
      ppuStack_288 = &PTR____CFConstantStringClassReference_110da4a78;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_2d8 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_2d8,0xb);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      lStack_498 = 0;
      puStack_4a0 = (undefined *)0x0;
      uStack_488 = 0;
      plStack_490 = (long *)0x0;
      _objc_retain();
      ppuVar5 = &puStack_4a0;
      puStack_568 = puVar2;
      func_0x00010bf52a60();
      if (puStack_568 != (undefined *)0x0) {
        lVar17 = *plStack_490;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_490 != lVar17) {
              _objc_enumerationMutation(puVar2);
            }
            uVar15 = *(undefined8 *)(lStack_498 + (long)puVar14 * 8);
            puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
            uVar16 = uVar15;
            func_0x00010c075f00(uVar15,param_2,puVar18);
            uVar6 = 0;
            if ((int)uVar16 == 0) {
              uVar6 = uVar15;
            }
            _objc_retain();
            puVar18 = PTR__OBJC_CLASS___NSBundle_1126aea78;
            func_0x00010c0b6660();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar18;
            func_0x00010bdc3500();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar18);
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            uStack_4a8 = 0;
            uStack_4b0 = 0;
            uStack_4d8 = 0;
            uStack_4e0 = 0;
            uStack_4c8 = 0;
            plStack_4d0 = (long *)0x0;
            _objc_retain();
            puStack_538 = puVar4;
            func_0x00010bf52a60();
            if (puStack_538 != (undefined *)0x0) {
              lVar13 = *plStack_4d0;
              do {
                puVar18 = (undefined *)0x0;
                do {
                  if (*plStack_4d0 != lVar13) {
                    _objc_enumerationMutation(puVar4);
                  }
                  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  _objc_alloc();
                  func_0x00010c0040a0();
                  puVar8 = puVar7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  lStack_518 = 0;
                  uStack_520 = 0;
                  uStack_508 = 0;
                  plStack_510 = (long *)0x0;
                  uStack_4f8 = 0;
                  uStack_500 = 0;
                  uStack_4e8 = 0;
                  uStack_4f0 = 0;
                  _objc_retain();
                  puVar9 = puVar8;
                  func_0x00010bf52a60();
                  if (puVar9 != (undefined *)0x0) {
                    lVar19 = *plStack_510;
                    do {
                      puVar20 = (undefined *)0x0;
                      do {
                        if (*plStack_510 != lVar19) {
                          _objc_enumerationMutation(puVar8);
                        }
                        uVar16 = *(undefined8 *)(lStack_518 + (long)puVar20 * 8);
                        puVar10 = puVar3;
                        func_0x00010c227f80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar11 = puVar10;
                        func_0x00010c070cc0();
                        if ((int)puVar11 != 0) {
                          uVar12 = 0;
                          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4738,
                                              param_2,uVar16);
                          if ((uVar12 & 1) == 0) {
                            uVar12 = 0;
                            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4af8,
                                                param_2,uVar16);
                            _objc_release(puVar10);
                            if ((uVar12 & 1) == 0) goto LAB_10496e314;
                          }
                          else {
                            _objc_release(puVar10);
                          }
                          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                              &PTR____CFConstantStringClassReference_110dae518);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar5 = &PTR____CFConstantStringClassReference_110da48d8;
                          puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
                          func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                              &PTR____CFConstantStringClassReference_110da48d8,
                                              puVar3,0);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_autorelease();
                          _objc_exception_throw();
                          goto LAB_10496e4ac;
                        }
                        _objc_release(puVar10);
LAB_10496e314:
                        iVar1 = 0x10da4b38;
                        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4b38,param_2
                                            ,uVar16);
                        if (iVar1 != 0) {
                          _NSLog(&PTR____CFConstantStringClassReference_110dae518);
                        }
                        puVar20 = puVar20 + 1;
                      } while (puVar9 != puVar20);
                      puVar9 = puVar8;
                      func_0x00010bf52a60(puVar8,param_2,&uStack_520,auStack_458,0x10);
                    } while (puVar9 != (undefined *)0x0);
                  }
                  _objc_release(puVar8);
                  _objc_release(puVar8);
                  _objc_release(puVar7);
                  puVar18 = puVar18 + 1;
                } while (puVar18 != puStack_538);
                puStack_538 = puVar4;
                func_0x00010bf52a60(puVar4,param_2,&uStack_4e0,auStack_3d8,0x10);
              } while (puStack_538 != (undefined *)0x0);
            }
            _objc_release(puVar4);
            _objc_release(puVar4);
            _objc_release(uVar6);
            puVar14 = puVar14 + 1;
          } while (puVar14 != puStack_568);
          ppuVar5 = &puStack_4a0;
          puStack_568 = puVar2;
          func_0x00010bf52a60(puVar2,param_2,ppuVar5,auStack_358,0x10);
        } while (puStack_568 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
      return;
    }
LAB_10496e4ac:
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0fa2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da3178);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar18 = puVar2;
        func_0x00010c075f00(puVar2,param_2,puVar14);
        if ((int)puVar18 != 0) {
          puVar14 = PTR_PTR_1126add58;
          func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar2,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(PTR_PTR_1126add78,param_2,ppuVar5,puVar14,
                              &PTR____CFConstantStringClassReference_110da3178);
          _objc_release(puVar14);
        }
      }
      puVar14 = PTR_PTR_1126add78;
      puVar18 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da3198);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar14,param_2,ppuVar5,puVar18,
                          &PTR____CFConstantStringClassReference_110da3198);
      _objc_release(puVar18);
      puVar14 = PTR_PTR_1126add78;
      puVar18 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da31b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar14,param_2,ppuVar5,puVar18,
                          &PTR____CFConstantStringClassReference_110da31b8);
      _objc_release(puVar18);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 10496dbec; end: 10496dd1b; -[FBSDKInternalUtility validateRequiredClientAccessToken] */

void FUN_10496dbec(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puStack_548;
  undefined *puStack_518;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [128];
  undefined1 auStack_3b8 [128];
  undefined1 auStack_338 [128];
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  long lStack_260;
  undefined *puStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [128];
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  
  func_0x00010c296860();
  lVar17 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar17;
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar17);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar13 != 0) {
    lVar17 = param_1;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar17;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010bf3d5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e86738);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(param_1);
    _objc_release(lVar13);
    _objc_release(lVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      &PTR____CFConstantStringClassReference_110da48d8,
                      &PTR____CFConstantStringClassReference_110da48f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00010c296800();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar18;
  func_0x00010bf065a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110da46b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(puVar3);
  func_0x00010c07c120(puVar2,param_2,ppuVar5);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da4918);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110da48d8,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110da26b8;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110da2698;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_118,2);
    _objc_retainAutoreleasedReturnValue();
    lStack_1d8 = 0;
    puStack_1e0 = (undefined *)0x0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    _objc_retain();
    ppuVar5 = &puStack_1e0;
    puVar14 = puVar2;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar17 = *plStack_1d0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_1d0 != lVar17) {
            _objc_enumerationMutation(puVar2);
          }
          puVar4 = puVar3;
          func_0x00010c07c120(puVar3,param_2,*(undefined8 *)(lStack_1d8 + (long)puVar18 * 8));
          if ((int)puVar4 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110da4938);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = &PTR____CFConstantStringClassReference_110da48d8;
            puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
            func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                &PTR____CFConstantStringClassReference_110da48d8,puVar3,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            _objc_exception_throw();
            goto LAB_10496dfe0;
          }
          puVar18 = puVar18 + 1;
        } while (puVar14 != puVar18);
        ppuVar5 = &puStack_1e0;
        puVar14 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,ppuVar5,auStack_198,0x10);
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
LAB_10496dfe0:
    ___stack_chk_fail();
    lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010c0703a0();
    _objc_release();
    if ((int)puVar14 != 0) {
      puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_2b0 = &PTR____CFConstantStringClassReference_110da4958;
      ppuStack_2a8 = &PTR____CFConstantStringClassReference_110da4978;
      ppuStack_2a0 = &PTR____CFConstantStringClassReference_110da4998;
      ppuStack_298 = &PTR____CFConstantStringClassReference_110da49b8;
      ppuStack_290 = &PTR____CFConstantStringClassReference_110da49d8;
      ppuStack_288 = &PTR____CFConstantStringClassReference_110da49f8;
      ppuStack_280 = &PTR____CFConstantStringClassReference_110da4a18;
      ppuStack_278 = &PTR____CFConstantStringClassReference_110da4a38;
      ppuStack_270 = &PTR____CFConstantStringClassReference_110da4a58;
      ppuStack_268 = &PTR____CFConstantStringClassReference_110da4a78;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_2b8 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_2b8,0xb);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      lStack_478 = 0;
      puStack_480 = (undefined *)0x0;
      uStack_468 = 0;
      plStack_470 = (long *)0x0;
      _objc_retain();
      ppuVar5 = &puStack_480;
      puStack_548 = puVar3;
      func_0x00010bf52a60();
      if (puStack_548 != (undefined *)0x0) {
        lVar17 = *plStack_470;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_470 != lVar17) {
              _objc_enumerationMutation(puVar3);
            }
            uVar15 = *(undefined8 *)(lStack_478 + (long)puVar14 * 8);
            puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
            uVar16 = uVar15;
            func_0x00010c075f00(uVar15,param_2,puVar18);
            uVar6 = 0;
            if ((int)uVar16 == 0) {
              uVar6 = uVar15;
            }
            _objc_retain();
            puVar18 = PTR__OBJC_CLASS___NSBundle_1126aea78;
            func_0x00010c0b6660();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar18;
            func_0x00010bdc3500();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar18);
            uStack_498 = 0;
            uStack_4a0 = 0;
            uStack_488 = 0;
            uStack_490 = 0;
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            uStack_4a8 = 0;
            plStack_4b0 = (long *)0x0;
            _objc_retain();
            puStack_518 = puVar4;
            func_0x00010bf52a60();
            if (puStack_518 != (undefined *)0x0) {
              lVar13 = *plStack_4b0;
              do {
                puVar18 = (undefined *)0x0;
                do {
                  if (*plStack_4b0 != lVar13) {
                    _objc_enumerationMutation(puVar4);
                  }
                  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  _objc_alloc();
                  func_0x00010c0040a0();
                  puVar8 = puVar7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  lStack_4f8 = 0;
                  uStack_500 = 0;
                  uStack_4e8 = 0;
                  plStack_4f0 = (long *)0x0;
                  uStack_4d8 = 0;
                  uStack_4e0 = 0;
                  uStack_4c8 = 0;
                  uStack_4d0 = 0;
                  _objc_retain();
                  puVar9 = puVar8;
                  func_0x00010bf52a60();
                  if (puVar9 != (undefined *)0x0) {
                    lVar19 = *plStack_4f0;
                    do {
                      puVar20 = (undefined *)0x0;
                      do {
                        if (*plStack_4f0 != lVar19) {
                          _objc_enumerationMutation(puVar8);
                        }
                        uVar16 = *(undefined8 *)(lStack_4f8 + (long)puVar20 * 8);
                        puVar10 = puVar2;
                        func_0x00010c227f80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar11 = puVar10;
                        func_0x00010c070cc0();
                        if ((int)puVar11 != 0) {
                          uVar12 = 0;
                          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4738,
                                              param_2,uVar16);
                          if ((uVar12 & 1) == 0) {
                            uVar12 = 0;
                            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4af8,
                                                param_2,uVar16);
                            _objc_release(puVar10);
                            if ((uVar12 & 1) == 0) goto LAB_10496e314;
                          }
                          else {
                            _objc_release(puVar10);
                          }
                          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                              &PTR____CFConstantStringClassReference_110dae518);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar5 = &PTR____CFConstantStringClassReference_110da48d8;
                          puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
                          func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                              &PTR____CFConstantStringClassReference_110da48d8,
                                              puVar2,0);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_autorelease();
                          _objc_exception_throw();
                          goto LAB_10496e4ac;
                        }
                        _objc_release(puVar10);
LAB_10496e314:
                        iVar1 = 0x10da4b38;
                        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4b38,param_2
                                            ,uVar16);
                        if (iVar1 != 0) {
                          _NSLog(&PTR____CFConstantStringClassReference_110dae518);
                        }
                        puVar20 = puVar20 + 1;
                      } while (puVar9 != puVar20);
                      puVar9 = puVar8;
                      func_0x00010bf52a60(puVar8,param_2,&uStack_500,auStack_438,0x10);
                    } while (puVar9 != (undefined *)0x0);
                  }
                  _objc_release(puVar8);
                  _objc_release(puVar8);
                  _objc_release(puVar7);
                  puVar18 = puVar18 + 1;
                } while (puVar18 != puStack_518);
                puStack_518 = puVar4;
                func_0x00010bf52a60(puVar4,param_2,&uStack_4c0,auStack_3b8,0x10);
              } while (puStack_518 != (undefined *)0x0);
            }
            _objc_release(puVar4);
            _objc_release(puVar4);
            _objc_release(uVar6);
            puVar14 = puVar14 + 1;
          } while (puVar14 != puStack_548);
          ppuVar5 = &puStack_480;
          puStack_548 = puVar3;
          func_0x00010bf52a60(puVar3,param_2,ppuVar5,auStack_338,0x10);
        } while (puStack_548 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_260) {
      return;
    }
LAB_10496e4ac:
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0fa2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3178);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar18 = puVar3;
        func_0x00010c075f00(puVar3,param_2,puVar14);
        if ((int)puVar18 != 0) {
          puVar14 = PTR_PTR_1126add58;
          func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar3,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(PTR_PTR_1126add78,param_2,ppuVar5,puVar14,
                              &PTR____CFConstantStringClassReference_110da3178);
          _objc_release(puVar14);
        }
      }
      puVar14 = PTR_PTR_1126add78;
      puVar18 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3198);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar14,param_2,ppuVar5,puVar18,
                          &PTR____CFConstantStringClassReference_110da3198);
      _objc_release(puVar18);
      puVar14 = PTR_PTR_1126add78;
      puVar18 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da31b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar14,param_2,ppuVar5,puVar18,
                          &PTR____CFConstantStringClassReference_110da31b8);
      _objc_release(puVar18);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 10496dd1c; end: 10496de57; -[FBSDKInternalUtility validateURLSchemes] */

void FUN_10496dd1c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puStack_4f8;
  undefined *puStack_4c8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3e8 [128];
  undefined1 auStack_368 [128];
  undefined1 auStack_2e8 [128];
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  long lStack_210;
  undefined *puStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  
  func_0x00010c296800();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf065a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110da46b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c07c120(param_1,param_2,ppuVar6);
  if ((param_1 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da4918);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110da48d8,puVar7,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110da26b8;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110da2698;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_c8,2);
    _objc_retainAutoreleasedReturnValue();
    lStack_188 = 0;
    puStack_190 = (undefined *)0x0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    _objc_retain();
    ppuVar6 = &puStack_190;
    puVar17 = puVar7;
    func_0x00010bf52a60();
    if (puVar17 != (undefined *)0x0) {
      lVar20 = *plStack_180;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_180 != lVar20) {
            _objc_enumerationMutation(puVar7);
          }
          puVar9 = puVar8;
          func_0x00010c07c120(puVar8,param_2,*(undefined8 *)(lStack_188 + (long)puVar21 * 8));
          if ((int)puVar9 != 0) {
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110da4938);
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = &PTR____CFConstantStringClassReference_110da48d8;
            puVar7 = PTR__OBJC_CLASS___NSException_1126af520;
            func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                &PTR____CFConstantStringClassReference_110da48d8,puVar8,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            _objc_exception_throw();
            goto LAB_10496dfe0;
          }
          puVar21 = puVar21 + 1;
        } while (puVar17 != puVar21);
        ppuVar6 = &puStack_190;
        puVar17 = puVar7;
        func_0x00010bf52a60(puVar7,param_2,ppuVar6,auStack_148,0x10);
      } while (puVar17 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
LAB_10496dfe0:
    ___stack_chk_fail();
    lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010c0703a0();
    _objc_release();
    if ((int)puVar17 != 0) {
      puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_260 = &PTR____CFConstantStringClassReference_110da4958;
      ppuStack_258 = &PTR____CFConstantStringClassReference_110da4978;
      ppuStack_250 = &PTR____CFConstantStringClassReference_110da4998;
      ppuStack_248 = &PTR____CFConstantStringClassReference_110da49b8;
      ppuStack_240 = &PTR____CFConstantStringClassReference_110da49d8;
      ppuStack_238 = &PTR____CFConstantStringClassReference_110da49f8;
      ppuStack_230 = &PTR____CFConstantStringClassReference_110da4a18;
      ppuStack_228 = &PTR____CFConstantStringClassReference_110da4a38;
      ppuStack_220 = &PTR____CFConstantStringClassReference_110da4a58;
      ppuStack_218 = &PTR____CFConstantStringClassReference_110da4a78;
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_268 = puVar17;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_268,0xb);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lStack_428 = 0;
      puStack_430 = (undefined *)0x0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      _objc_retain();
      ppuVar6 = &puStack_430;
      puStack_4f8 = puVar8;
      func_0x00010bf52a60();
      if (puStack_4f8 != (undefined *)0x0) {
        lVar20 = *plStack_420;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_420 != lVar20) {
              _objc_enumerationMutation(puVar8);
            }
            uVar18 = *(undefined8 *)(lStack_428 + (long)puVar17 * 8);
            puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
            uVar19 = uVar18;
            func_0x00010c075f00(uVar18,param_2,puVar21);
            uVar10 = 0;
            if ((int)uVar19 == 0) {
              uVar10 = uVar18;
            }
            _objc_retain();
            puVar21 = PTR__OBJC_CLASS___NSBundle_1126aea78;
            func_0x00010c0b6660();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar21;
            func_0x00010bdc3500();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar21);
            uStack_448 = 0;
            uStack_450 = 0;
            uStack_438 = 0;
            uStack_440 = 0;
            uStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            plStack_460 = (long *)0x0;
            _objc_retain();
            puStack_4c8 = puVar9;
            func_0x00010bf52a60();
            if (puStack_4c8 != (undefined *)0x0) {
              lVar16 = *plStack_460;
              do {
                puVar21 = (undefined *)0x0;
                do {
                  if (*plStack_460 != lVar16) {
                    _objc_enumerationMutation(puVar9);
                  }
                  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  _objc_alloc();
                  func_0x00010c0040a0();
                  puVar12 = puVar11;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  lStack_4a8 = 0;
                  uStack_4b0 = 0;
                  uStack_498 = 0;
                  plStack_4a0 = (long *)0x0;
                  uStack_488 = 0;
                  uStack_490 = 0;
                  uStack_478 = 0;
                  uStack_480 = 0;
                  _objc_retain();
                  puVar13 = puVar12;
                  func_0x00010bf52a60();
                  if (puVar13 != (undefined *)0x0) {
                    lVar22 = *plStack_4a0;
                    do {
                      puVar23 = (undefined *)0x0;
                      do {
                        if (*plStack_4a0 != lVar22) {
                          _objc_enumerationMutation(puVar12);
                        }
                        uVar19 = *(undefined8 *)(lStack_4a8 + (long)puVar23 * 8);
                        puVar14 = puVar7;
                        func_0x00010c227f80();
                        _objc_retainAutoreleasedReturnValue();
                        puVar15 = puVar14;
                        func_0x00010c070cc0();
                        if ((int)puVar15 != 0) {
                          uVar2 = 0;
                          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4738,
                                              param_2,uVar19);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = 0;
                            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4af8,
                                                param_2,uVar19);
                            _objc_release(puVar14);
                            if ((uVar2 & 1) == 0) goto LAB_10496e314;
                          }
                          else {
                            _objc_release(puVar14);
                          }
                          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                              &PTR____CFConstantStringClassReference_110dae518);
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar6 = &PTR____CFConstantStringClassReference_110da48d8;
                          puVar8 = PTR__OBJC_CLASS___NSException_1126af520;
                          func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                              &PTR____CFConstantStringClassReference_110da48d8,
                                              puVar7,0);
                          _objc_retainAutoreleasedReturnValue();
                          _objc_autorelease();
                          _objc_exception_throw();
                          goto LAB_10496e4ac;
                        }
                        _objc_release(puVar14);
LAB_10496e314:
                        iVar1 = 0x10da4b38;
                        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4b38,param_2
                                            ,uVar19);
                        if (iVar1 != 0) {
                          _NSLog(&PTR____CFConstantStringClassReference_110dae518);
                        }
                        puVar23 = puVar23 + 1;
                      } while (puVar13 != puVar23);
                      puVar13 = puVar12;
                      func_0x00010bf52a60(puVar12,param_2,&uStack_4b0,auStack_3e8,0x10);
                    } while (puVar13 != (undefined *)0x0);
                  }
                  _objc_release(puVar12);
                  _objc_release(puVar12);
                  _objc_release(puVar11);
                  puVar21 = puVar21 + 1;
                } while (puVar21 != puStack_4c8);
                puStack_4c8 = puVar9;
                func_0x00010bf52a60(puVar9,param_2,&uStack_470,auStack_368,0x10);
              } while (puStack_4c8 != (undefined *)0x0);
            }
            _objc_release(puVar9);
            _objc_release(puVar9);
            _objc_release(uVar10);
            puVar17 = puVar17 + 1;
          } while (puVar17 != puStack_4f8);
          ppuVar6 = &puStack_430;
          puStack_4f8 = puVar8;
          func_0x00010bf52a60(puVar8,param_2,ppuVar6,auStack_2e8,0x10);
        } while (puStack_4f8 != (undefined *)0x0);
      }
      _objc_release(puVar8);
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
      return;
    }
LAB_10496e4ac:
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c0fa2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if (puVar7 != (undefined *)0x0) {
      puVar8 = puVar7;
      func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da3178);
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined *)0x0) {
        puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar21 = puVar8;
        func_0x00010c075f00(puVar8,param_2,puVar17);
        if ((int)puVar21 != 0) {
          puVar17 = PTR_PTR_1126add58;
          func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar8,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(PTR_PTR_1126add78,param_2,ppuVar6,puVar17,
                              &PTR____CFConstantStringClassReference_110da3178);
          _objc_release(puVar17);
        }
      }
      puVar17 = PTR_PTR_1126add78;
      puVar21 = puVar7;
      func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da3198);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar17,param_2,ppuVar6,puVar21,
                          &PTR____CFConstantStringClassReference_110da3198);
      _objc_release(puVar21);
      puVar17 = PTR_PTR_1126add78;
      puVar21 = puVar7;
      func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da31b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar17,param_2,ppuVar6,puVar21,
                          &PTR____CFConstantStringClassReference_110da31b8);
      _objc_release(puVar21);
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 10496de58; end: 10496dfe3; -[FBSDKInternalUtility validateFacebookReservedURLSchemes] */

void FUN_10496de58(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puStack_498;
  undefined *puStack_468;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_388 [128];
  undefined1 auStack_308 [128];
  undefined1 auStack_288 [128];
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110da26b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110da2698;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  ppuVar12 = &puStack_130;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar17 = *plStack_120;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(puVar2);
        }
        uVar4 = param_1;
        func_0x00010c07c120(param_1,param_2,*(undefined8 *)(lStack_128 + (long)puVar18 * 8));
        if ((int)uVar4 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110da4938);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = &PTR____CFConstantStringClassReference_110da48d8;
          puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
          func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                              &PTR____CFConstantStringClassReference_110da48d8,puVar3,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          _objc_exception_throw();
          goto LAB_10496dfe0;
        }
        puVar18 = puVar18 + 1;
      } while (puVar3 != puVar18);
      ppuVar12 = &puStack_130;
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,ppuVar12,auStack_e8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
LAB_10496dfe0:
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126ade48;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  func_0x00010c0703a0();
  _objc_release();
  if ((int)puVar18 != 0) {
    puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_200 = &PTR____CFConstantStringClassReference_110da4958;
    ppuStack_1f8 = &PTR____CFConstantStringClassReference_110da4978;
    ppuStack_1f0 = &PTR____CFConstantStringClassReference_110da4998;
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110da49b8;
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110da49d8;
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110da49f8;
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110da4a18;
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110da4a38;
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110da4a58;
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110da4a78;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_208 = puVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_208,0xb);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    lStack_3c8 = 0;
    puStack_3d0 = (undefined *)0x0;
    uStack_3b8 = 0;
    plStack_3c0 = (long *)0x0;
    _objc_retain();
    ppuVar12 = &puStack_3d0;
    puStack_498 = puVar3;
    func_0x00010bf52a60();
    if (puStack_498 != (undefined *)0x0) {
      lVar17 = *plStack_3c0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_3c0 != lVar17) {
            _objc_enumerationMutation(puVar3);
          }
          uVar14 = *(undefined8 *)(lStack_3c8 + (long)puVar18 * 8);
          puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
          uVar16 = uVar14;
          func_0x00010c075f00(uVar14,param_2,puVar15);
          uVar4 = 0;
          if ((int)uVar16 == 0) {
            uVar4 = uVar14;
          }
          _objc_retain();
          puVar15 = PTR__OBJC_CLASS___NSBundle_1126aea78;
          func_0x00010c0b6660();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar15;
          func_0x00010bdc3500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          uStack_3e8 = 0;
          uStack_3f0 = 0;
          uStack_3d8 = 0;
          uStack_3e0 = 0;
          uStack_408 = 0;
          uStack_410 = 0;
          uStack_3f8 = 0;
          plStack_400 = (long *)0x0;
          _objc_retain();
          puStack_468 = puVar5;
          func_0x00010bf52a60();
          if (puStack_468 != (undefined *)0x0) {
            lVar13 = *plStack_400;
            do {
              puVar15 = (undefined *)0x0;
              do {
                if (*plStack_400 != lVar13) {
                  _objc_enumerationMutation(puVar5);
                }
                puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                _objc_alloc();
                func_0x00010c0040a0();
                puVar7 = puVar6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lStack_448 = 0;
                uStack_450 = 0;
                uStack_438 = 0;
                plStack_440 = (long *)0x0;
                uStack_428 = 0;
                uStack_430 = 0;
                uStack_418 = 0;
                uStack_420 = 0;
                _objc_retain();
                puVar8 = puVar7;
                func_0x00010bf52a60();
                if (puVar8 != (undefined *)0x0) {
                  lVar19 = *plStack_440;
                  do {
                    puVar20 = (undefined *)0x0;
                    do {
                      if (*plStack_440 != lVar19) {
                        _objc_enumerationMutation(puVar7);
                      }
                      uVar16 = *(undefined8 *)(lStack_448 + (long)puVar20 * 8);
                      puVar9 = puVar2;
                      func_0x00010c227f80();
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar9;
                      func_0x00010c070cc0();
                      if ((int)puVar10 != 0) {
                        uVar11 = 0;
                        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4738,param_2
                                            ,uVar16);
                        if ((uVar11 & 1) == 0) {
                          uVar11 = 0;
                          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4af8,
                                              param_2,uVar16);
                          _objc_release(puVar9);
                          if ((uVar11 & 1) == 0) goto LAB_10496e314;
                        }
                        else {
                          _objc_release(puVar9);
                        }
                        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                            &PTR____CFConstantStringClassReference_110dae518);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar12 = &PTR____CFConstantStringClassReference_110da48d8;
                        puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
                        func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                            &PTR____CFConstantStringClassReference_110da48d8,puVar2,
                                            0);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_autorelease();
                        _objc_exception_throw();
                        goto LAB_10496e4ac;
                      }
                      _objc_release(puVar9);
LAB_10496e314:
                      iVar1 = 0x10da4b38;
                      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4b38,param_2,
                                          uVar16);
                      if (iVar1 != 0) {
                        _NSLog(&PTR____CFConstantStringClassReference_110dae518);
                      }
                      puVar20 = puVar20 + 1;
                    } while (puVar8 != puVar20);
                    puVar8 = puVar7;
                    func_0x00010bf52a60(puVar7,param_2,&uStack_450,auStack_388,0x10);
                  } while (puVar8 != (undefined *)0x0);
                }
                _objc_release(puVar7);
                _objc_release(puVar7);
                _objc_release(puVar6);
                puVar15 = puVar15 + 1;
              } while (puVar15 != puStack_468);
              puStack_468 = puVar5;
              func_0x00010bf52a60(puVar5,param_2,&uStack_410,auStack_308,0x10);
            } while (puStack_468 != (undefined *)0x0);
          }
          _objc_release(puVar5);
          _objc_release(puVar5);
          _objc_release(uVar4);
          puVar18 = puVar18 + 1;
        } while (puVar18 != puStack_498);
        ppuVar12 = &puStack_3d0;
        puStack_498 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,ppuVar12,auStack_288,0x10);
      } while (puStack_498 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
LAB_10496e4ac:
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c0fa2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3178);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar15 = puVar3;
      func_0x00010c075f00(puVar3,param_2,puVar18);
      if ((int)puVar15 != 0) {
        puVar18 = PTR_PTR_1126add58;
        func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar3,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,ppuVar12,puVar18,
                            &PTR____CFConstantStringClassReference_110da3178);
        _objc_release(puVar18);
      }
    }
    puVar18 = PTR_PTR_1126add78;
    puVar15 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da3198);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar18,param_2,ppuVar12,puVar15,
                        &PTR____CFConstantStringClassReference_110da3198);
    _objc_release(puVar15);
    puVar18 = PTR_PTR_1126add78;
    puVar15 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da31b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar18,param_2,ppuVar12,puVar15,
                        &PTR____CFConstantStringClassReference_110da31b8);
    _objc_release(puVar15);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 10496dfe4; end: 10496e4af; -[FBSDKInternalUtility validateDomainConfiguration] */

void FUN_10496dfe4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puStack_358;
  undefined *puStack_328;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_248 [128];
  undefined1 auStack_1c8 [128];
  undefined1 auStack_148 [128];
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126ade48;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c0703a0();
  _objc_release();
  if ((int)puVar12 != 0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110da4958;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110da4978;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110da4998;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110da49b8;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110da49d8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110da49f8;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110da4a18;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110da4a38;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110da4a58;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110da4a78;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c8 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c8,0xb);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    lStack_288 = 0;
    puStack_290 = (undefined *)0x0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    _objc_retain();
    param_3 = &puStack_290;
    puStack_358 = puVar2;
    func_0x00010bf52a60();
    if (puStack_358 != (undefined *)0x0) {
      lVar10 = *plStack_280;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_280 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar13 = *(undefined8 *)(lStack_288 + (long)puVar12 * 8);
          puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSNull_1126aef28);
          uVar3 = uVar13;
          func_0x00010c075f00(uVar13,param_2,puVar14);
          uVar4 = 0;
          if ((int)uVar3 == 0) {
            uVar4 = uVar13;
          }
          _objc_retain();
          puVar14 = PTR__OBJC_CLASS___NSBundle_1126aea78;
          func_0x00010c0b6660();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar14;
          func_0x00010bdc3500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_2b8 = 0;
          plStack_2c0 = (long *)0x0;
          _objc_retain();
          puStack_328 = puVar5;
          func_0x00010bf52a60();
          if (puStack_328 != (undefined *)0x0) {
            lVar11 = *plStack_2c0;
            do {
              puVar14 = (undefined *)0x0;
              do {
                if (*plStack_2c0 != lVar11) {
                  _objc_enumerationMutation(puVar5);
                }
                puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                _objc_alloc();
                func_0x00010c0040a0();
                puVar7 = puVar6;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lStack_308 = 0;
                uStack_310 = 0;
                uStack_2f8 = 0;
                plStack_300 = (long *)0x0;
                uStack_2e8 = 0;
                uStack_2f0 = 0;
                uStack_2d8 = 0;
                uStack_2e0 = 0;
                _objc_retain();
                puVar8 = puVar7;
                func_0x00010bf52a60();
                if (puVar8 != (undefined *)0x0) {
                  lVar16 = *plStack_300;
                  do {
                    puVar17 = (undefined *)0x0;
                    do {
                      if (*plStack_300 != lVar16) {
                        _objc_enumerationMutation(puVar7);
                      }
                      uVar15 = *(undefined8 *)(lStack_308 + (long)puVar17 * 8);
                      uVar3 = param_1;
                      func_0x00010c227f80();
                      _objc_retainAutoreleasedReturnValue();
                      uVar13 = uVar3;
                      func_0x00010c070cc0();
                      if ((int)uVar13 != 0) {
                        uVar9 = 0;
                        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4738,param_2
                                            ,uVar15);
                        if ((uVar9 & 1) == 0) {
                          uVar9 = 0;
                          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4af8,
                                              param_2,uVar15);
                          _objc_release(uVar3);
                          if ((uVar9 & 1) == 0) goto LAB_10496e314;
                        }
                        else {
                          _objc_release(uVar3);
                        }
                        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                            &PTR____CFConstantStringClassReference_110dae518);
                        _objc_retainAutoreleasedReturnValue();
                        param_3 = &PTR____CFConstantStringClassReference_110da48d8;
                        puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
                        func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                                            &PTR____CFConstantStringClassReference_110da48d8,puVar12
                                            ,0);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_autorelease();
                        _objc_exception_throw();
                        goto LAB_10496e4ac;
                      }
                      _objc_release(uVar3);
LAB_10496e314:
                      iVar1 = 0x10da4b38;
                      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110da4b38,param_2,
                                          uVar15);
                      if (iVar1 != 0) {
                        _NSLog(&PTR____CFConstantStringClassReference_110dae518);
                      }
                      puVar17 = puVar17 + 1;
                    } while (puVar8 != puVar17);
                    puVar8 = puVar7;
                    func_0x00010bf52a60(puVar7,param_2,&uStack_310,auStack_248,0x10);
                  } while (puVar8 != (undefined *)0x0);
                }
                _objc_release(puVar7);
                _objc_release(puVar7);
                _objc_release(puVar6);
                puVar14 = puVar14 + 1;
              } while (puVar14 != puStack_328);
              puStack_328 = puVar5;
              func_0x00010bf52a60(puVar5,param_2,&uStack_2d0,auStack_1c8,0x10);
            } while (puStack_328 != (undefined *)0x0);
          }
          _objc_release(puVar5);
          _objc_release(puVar5);
          _objc_release(uVar4);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puStack_358);
        param_3 = &puStack_290;
        puStack_358 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,param_3,auStack_148,0x10);
      } while (puStack_358 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_10496e4ac:
  ___stack_chk_fail();
  _objc_retain(param_3);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c0fa2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar12 != (undefined *)0x0) {
    puVar2 = puVar12;
    func_0x00010c0e00e0(puVar12,param_2,&PTR____CFConstantStringClassReference_110da3178);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar5 = puVar2;
      func_0x00010c075f00(puVar2,param_2,puVar14);
      if ((int)puVar5 != 0) {
        puVar14 = PTR_PTR_1126add58;
        func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar2,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,param_3,puVar14,
                            &PTR____CFConstantStringClassReference_110da3178);
        _objc_release(puVar14);
      }
    }
    puVar14 = PTR_PTR_1126add78;
    puVar5 = puVar12;
    func_0x00010c0e00e0(puVar12,param_2,&PTR____CFConstantStringClassReference_110da3198);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar14,param_2,param_3,puVar5,
                        &PTR____CFConstantStringClassReference_110da3198);
    _objc_release(puVar5);
    puVar14 = PTR_PTR_1126add78;
    puVar5 = puVar12;
    func_0x00010c0e00e0(puVar12,param_2,&PTR____CFConstantStringClassReference_110da31b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar14,param_2,param_3,puVar5,
                        &PTR____CFConstantStringClassReference_110da31b8);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496e4b0; end: 10496e643; -[FBSDKInternalUtility extendDictionaryWithDataProcessingOptions:] */

void FUN_10496e4b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0fa2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110da3178);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
      lVar4 = lVar2;
      func_0x00010c075f00(lVar2,param_2,puVar3);
      if ((int)lVar4 != 0) {
        puVar3 = PTR_PTR_1126add58;
        func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,lVar2,0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,param_3,puVar3,
                            &PTR____CFConstantStringClassReference_110da3178);
        _objc_release(puVar3);
      }
    }
    puVar3 = PTR_PTR_1126add78;
    lVar4 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110da3198);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar3,param_2,param_3,lVar4,
                        &PTR____CFConstantStringClassReference_110da3198);
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126add78;
    lVar4 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110da31b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar3,param_2,param_3,lVar4,
                        &PTR____CFConstantStringClassReference_110da31b8);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496e644; end: 10496eb1b; -[FBSDKInternalUtility findWindow] */

void FUN_10496e644(undefined8 param_1)

{
  double dVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 in_b0;
  undefined1 uVar19;
  undefined1 in_register_00005001;
  undefined1 uVar20;
  undefined1 in_register_00005002;
  undefined1 uVar21;
  undefined1 in_register_00005003;
  undefined1 uVar22;
  undefined1 in_register_00005004;
  undefined1 uVar23;
  undefined1 in_register_00005005;
  undefined1 uVar24;
  undefined1 in_register_00005006;
  undefined1 uVar25;
  undefined1 in_register_00005007;
  undefined1 uVar26;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar7;
  func_0x00010c086b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar18 != (undefined *)0x0) {
    func_0x00010c2a72a0(puVar18);
    bVar4 = false;
    if (!NAN((double)CONCAT17(in_register_00005007,
                              CONCAT16(in_register_00005006,
                                       CONCAT15(in_register_00005005,
                                                CONCAT14(in_register_00005004,
                                                         CONCAT13(in_register_00005003,
                                                                  CONCAT12(in_register_00005002,
                                                                           CONCAT11(
                                                  in_register_00005001,in_b0)))))))) &&
        !NAN(*(double *)PTR__UIWindowLevelNormal_110345e88)) {
      bVar4 = (double)CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))) <
              *(double *)PTR__UIWindowLevelNormal_110345e88;
    }
    if (!bVar4) goto LAB_10496eac0;
  }
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar8);
      }
      puVar15 = *(undefined **)((long)puVar16 * 8);
      func_0x00010c2a72a0(puVar15);
      dVar1 = (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(
                                                  uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))
                                              ));
      func_0x00010c2a72a0(puVar18);
      bVar5 = false;
      bVar4 = NAN((double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(
                                                  uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))
                                                  )));
      if (!NAN(dVar1) && !bVar4) {
        bVar5 = dVar1 < (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19)))))));
      }
      if ((bVar5 == (NAN(dVar1) || bVar4)) &&
         (puVar9 = puVar15, func_0x00010c074c20(), ((ulong)puVar9 & 1) == 0)) {
        _objc_retain();
        _objc_release(puVar18);
        puVar18 = puVar15;
      }
      puVar16 = puVar16 + 1;
    } while (puVar7 != puVar16);
    puVar7 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  if (puVar18 == (undefined *)0x0) {
    iVar6 = 2;
    func_0x000100029b9c(2,0xd,0,0);
    if (iVar6 != 0) {
      puVar18 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar18;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_retain();
      puVar8 = puVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      if (puVar8 == (undefined *)0x0) {
        _objc_release(puVar7);
        _objc_release(puVar7);
      }
      else {
        puVar16 = (undefined *)0x0;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar7);
            }
            lVar17 = *(long *)((long)puVar15 * 8);
            lVar10 = lVar17;
            func_0x00010c296f80();
            _objc_retainAutoreleasedReturnValue();
            if ((lVar10 != 0) && (lVar11 = lVar10, func_0x00010c067fc0(), lVar11 == 0)) {
              _NSClassFromString(&PTR____CFConstantStringClassReference_110da4bb8);
              lVar11 = lVar17;
              func_0x00010c075f00();
              if ((int)lVar11 != 0) {
                func_0x00010c296f80();
                _objc_retainAutoreleasedReturnValue();
                uVar19 = 0;
                uVar20 = 0;
                uVar21 = 0;
                uVar22 = 0;
                uVar23 = 0;
                uVar24 = 0;
                uVar25 = 0;
                uVar26 = 0;
                _objc_retain();
                lVar11 = lVar17;
                func_0x00010bf52a60();
                lVar3 = lRam0000000000000000;
                while (lVar11 != 0) {
                  lVar14 = 0;
                  do {
                    if (lRam0000000000000000 != lVar3) {
                      _objc_enumerationMutation(lVar17);
                    }
                    puVar18 = *(undefined **)(lVar14 * 8);
                    puVar9 = puVar18;
                    func_0x00010c075e80();
                    if (((ulong)puVar9 & 1) != 0) {
                      _objc_retain();
                      _objc_release(lVar17);
                      _objc_release(lVar17);
                      _objc_release(lVar10);
                      _objc_release(puVar7);
                      _objc_release(puVar7);
                      goto LAB_10496ead0;
                    }
                    func_0x00010c2a72a0(puVar18);
                    dVar1 = (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19)))))));
                    func_0x00010c2a72a0(puVar16);
                    bVar5 = false;
                    bVar4 = NAN((double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(
                                                  uVar23,CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(
                                                  uVar20,uVar19))))))));
                    if (!NAN(dVar1) && !bVar4) {
                      bVar5 = dVar1 < (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,
                                                  CONCAT14(uVar23,CONCAT13(uVar22,CONCAT12(uVar21,
                                                  CONCAT11(uVar20,uVar19)))))));
                    }
                    if ((bVar5 == (NAN(dVar1) || bVar4)) &&
                       (puVar9 = puVar18, func_0x00010c074c20(), ((ulong)puVar9 & 1) == 0)) {
                      _objc_retain();
                      _objc_release(puVar16);
                      puVar16 = puVar18;
                    }
                    lVar14 = lVar14 + 1;
                  } while (lVar11 != lVar14);
                  lVar11 = lVar17;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar17);
                _objc_release(lVar17);
              }
            }
            _objc_release(lVar10);
            puVar15 = puVar15 + 1;
          } while (puVar15 != puVar8);
          puVar8 = puVar7;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
        _objc_release(puVar7);
        _objc_release(puVar7);
        puVar18 = puVar16;
        if (puVar16 != (undefined *)0x0) goto LAB_10496eac0;
      }
    }
    func_0x00010c0b37c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    func_0x00010bf56f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c0a58e0(uVar12);
    _objc_release(uVar12);
    puVar18 = (undefined *)0x0;
  }
LAB_10496eac0:
  _objc_retain();
  puVar16 = puVar18;
LAB_10496ead0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar7 = puVar16;
    func_0x00010bfaf540();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar7 != (undefined *)0x0) &&
       (puVar8 = puVar7, func_0x00010c075e80(), puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0,
       ((ulong)puVar8 & 1) == 0)) {
      puVar8 = puVar7;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      func_0x00010c0b37c0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar16;
      func_0x00010bf56f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      func_0x00010c0a58e0(puVar8);
      func_0x00010c0b72c0(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar18);
    }
    puVar18 = puVar7;
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar18;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    while (puVar8 != (undefined *)0x0) {
      puVar16 = puVar18;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      puVar8 = puVar16;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar18 = puVar16;
    }
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 10496eb1c; end: 10496ec83; -[FBSDKInternalUtility topMostViewController] */

void FUN_10496eb1c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bfaf540();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 != 0) &&
     (uVar2 = uVar1, func_0x00010c075e80(), puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
     (uVar2 & 1) == 0)) {
    uVar2 = uVar1;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da4c18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c0b37c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf56f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c0a58e0(uVar2,param_2,puVar3);
    func_0x00010c0b72c0(uVar1);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  uVar2 = uVar1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (uVar4 != 0) {
    uVar5 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = uVar5;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = uVar5;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10496ec84; end: 10496ed07; -[FBSDKInternalUtility statusBarOrientation] */

undefined8 FUN_10496ec84(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xd,0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bfaf540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c2a72c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0690e0();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  return uVar3;
}



/* Entry: 10496ed08; end: 10496edbf; -[FBSDKInternalUtility hexadecimalStringFromData:] */

void FUN_10496ed08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,lVar1 << 1);
    _objc_retainAutoreleasedReturnValue();
    do {
      func_0x00010bf06ba0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e18c58);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10496edc0; end: 10496ef73; -[FBSDKInternalUtility isRegisteredURLScheme:] */

undefined8 FUN_10496edc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c296860(param_1);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10496ef74;
  puStack_f8 = &UNK_110842e18;
  uStack_f0 = param_1;
  if (lRam000000011369d430 != -1) {
    func_0x00010002a2fc(0x11369d430,&puStack_110);
  }
  lVar2 = lRam000000011369d428;
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      uVar8 = 0;
LAB_10496ef10:
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return uVar8;
      }
      ___stack_chk_fail();
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bfedc60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bfa1660();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lRam000000011369d428;
      lRam000000011369d428 = uVar7;
      _objc_release(lVar3);
      _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return uVar6;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4b900();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        uVar8 = 1;
        goto LAB_10496ef10;
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10496ef74; end: 10496efe3;  */

void FUN_10496ef74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfedc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011369d428;
  uRam000000011369d428 = uVar4;
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10496efe4; end: 10496f123; -[FBSDKInternalUtility checkRegisteredCanOpenURLScheme:] */

void FUN_10496efe4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  if (lRam000000011369d440 != -1) {
    func_0x00010bda8ad0();
  }
  _objc_retain();
  _objc_sync_enter();
  uVar1 = uRam000000011369d438;
  func_0x00010bf4b900(uRam000000011369d438,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(uRam000000011369d438,param_2,param_3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    puVar2 = param_1;
    func_0x00010c07c100(param_1,param_2,param_3);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10496f0f0;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da4c38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b37c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf56f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c0a58e0(puVar3,param_2,puVar2);
    _objc_release(puVar3);
  }
  else {
    _objc_sync_exit(param_1);
    puVar2 = param_1;
  }
  _objc_release(puVar2);
LAB_10496f0f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496f124; end: 10496f157;  */

void FUN_10496f124(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369d438;
  puRam000000011369d438 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10496f158; end: 10496f267; -[FBSDKInternalUtility isRegisteredCanOpenURLScheme:] */

undefined8 FUN_10496f158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = lRam000000011369d450;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10496f1f8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x11369d450,&puStack_48);
  }
  uVar2 = uRam000000011369d448;
  func_0x00010bf4b900(uRam000000011369d448);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10496f268; end: 10496f2ff; -[FBSDKInternalUtility isPublishPermission:] */

ulong FUN_10496f268(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bfda7c0();
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_3,
       func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110efa0f8),
       (uVar1 & 1) == 0)) &&
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da4c78),
      (uVar1 & 1) == 0)) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da4c98),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da4cb8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10496f300; end: 10496f377; -[FBSDKInternalUtility isUnity] */

undefined8 FUN_10496f300(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c291300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if ((lVar1 == 0) ||
     (lVar2 = lVar1,
     func_0x00010c11f420(lVar1,param_2,&PTR____CFConstantStringClassReference_110da27d8),
     lVar2 == 0x7fffffffffffffff)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 10496f378; end: 10496f37b; -[FBSDKInternalUtility validateConfiguration] */

void FUN_10496f378(void)

{
  return;
}



/* Entry: 10496f37c; end: 10496f383; -[FBSDKInternalUtility loggerFactory] */

undefined8 FUN_10496f37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496f384; end: 10496f38f; -[FBSDKInternalUtility setLoggerFactory:] */

void FUN_10496f384(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10496f390; end: 10496f397; -[FBSDKInternalUtility isConfigured] */

undefined1 FUN_10496f390(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10496f398; end: 10496f39f; -[FBSDKInternalUtility setIsConfigured:] */

void FUN_10496f398(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10496f3a0; end: 10496f3a7; -[FBSDKInternalUtility infoDictionaryProvider] */

undefined8 FUN_10496f3a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10496f3a8; end: 10496f3b3; -[FBSDKInternalUtility setInfoDictionaryProvider:] */

void FUN_10496f3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10496f3b4; end: 10496f3bb; -[FBSDKInternalUtility settings] */

undefined8 FUN_10496f3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10496f3bc; end: 10496f3c7; -[FBSDKInternalUtility setSettings:] */

void FUN_10496f3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10496f3c8; end: 10496f3cf; -[FBSDKInternalUtility errorFactory] */

undefined8 FUN_10496f3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10496f3d0; end: 10496f3db; -[FBSDKInternalUtility setErrorFactory:] */

void FUN_10496f3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10496f3dc; end: 10496f423; -[FBSDKInternalUtility .cxx_destruct] */

void FUN_10496f3dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10496f424; end: 10496f50f; -[FBSDKKeychainStore initWithService:accessGroup:] */

undefined1 * FUN_10496f424(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  _objc_retain();
  puStack_38 = PTR_PTR_1126e33e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x00010c0b6660();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010bf24a60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
      _objc_release(uVar4);
    }
    else {
      lVar2 = param_3;
      func_0x00010bf51e00();
      puVar6 = *(undefined **)((long)puVar1 + 8);
      *(long *)((long)puVar1 + 8) = lVar2;
    }
    _objc_release(puVar6);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10496f510; end: 10496f59b; -[FBSDKKeychainStore setDictionary:forKey:accessibility:] */

undefined8
FUN_10496f510(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1894e0(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  return param_1;
}


