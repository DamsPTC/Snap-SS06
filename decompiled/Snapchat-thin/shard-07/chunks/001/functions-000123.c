/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10525facc; end: 10525fb0f; -[SCPushNotificationDelegate _applyWorkaroundForIos13SdkForMultipleVoipsIfNeeded] */

void FUN_10525facc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525fb10; end: 10525fbff; -[SCPushNotificationDelegate _logAddLiveGrapheneMetric:] */

void FUN_10525fb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001000882bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076f40();
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dcddf8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar1);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef99e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10525fc00; end: 10525fcff; -[SCPushNotificationDelegate application:didReceiveRemoteNotification:fetchCompletionHandler:] */

void FUN_10525fc00(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  func_0x00010c030320();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b6b90;
  func_0x00010c0dbc60(PTR_PTR_1126b6b90,param_3,puVar1,0,(long)(param_1 * 1000.0),param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0dc700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10525fd00; end: 10525fdc7; -[SCPushNotificationDelegate userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:] */

void FUN_10525fd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c05c9a0();
  _objc_release(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10525fdc8;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010be25360(param_1,param_2,puVar1,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 10525fdc8; end: 10525fddb;  */

void FUN_10525fdc8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010525fdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10525fddc; end: 1052601cf; -[SCPushNotificationDelegate userNotificationCenter:willPresentNotification:withCompletionHandler:] */

void FUN_10525fddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  uVar9 = param_4;
  func_0x00010c134680(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  uVar9 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar9 == 0) {
    uVar9 = param_4;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x000106c344a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126b1370;
    _objc_alloc();
    uVar9 = param_4;
    func_0x00010c134680(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar7 == 0) {
      func_0x00010c030320(puVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar9);
      puVar8 = PTR_PTR_1126b6b90;
      func_0x00010c0dbc60(PTR_PTR_1126b6b90);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0dc700(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840();
      _objc_release(uVar9);
      puVar10 = PTR_PTR_1126b1370;
      _objc_alloc();
      func_0x00010c05c980();
      puVar11 = puVar10;
      func_0x00010b88a258();
      if ((int)puVar11 != 0) {
        puVar11 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf07b60();
        _objc_release(puVar11);
      }
      func_0x00010c11c420();
      func_0x000107fcc5ec();
      func_0x00010be7cce0(param_1);
      _objc_release(puVar10);
      _objc_release(puVar8);
    }
    else {
      func_0x00010c030320();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar9);
      puVar8 = puVar2;
      func_0x00010c11c420();
      func_0x000107fcc5ec();
      iVar1 = (int)puVar8;
      if ((((ulong)puVar8 & 1) == 0) && (func_0x00010b88a1f0(), iVar1 == 0)) {
        (**(code **)(param_5 + 0x10))(param_5,0);
      }
      else {
        func_0x00010be7cce0(param_1);
      }
    }
    _objc_release(puVar2);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,4);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1052601d0; end: 105260277; -[SCPushNotificationDelegate userNotificationCenter:openSettingsForNotification:] */

void FUN_1052601d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aec70;
  _objc_retain(param_4);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1ac0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dc260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6b98;
  func_0x00010c0e97a0(PTR_PTR_1126b6b98,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105260278; end: 10526033b; -[SCPushNotificationDelegate _handleActionedNotification:withCompletionHandler:] */

void FUN_105260278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c267140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10526033c;
  puStack_40 = &UNK_110859a38;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c1149c0(uVar1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10526033c; end: 10526034f;  */

void FUN_10526033c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105260348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105260350; end: 105260487; -[SCPushNotificationDelegate _presentNotifWhenAppForegroundedWithNotifId:presentationOptions:completionHandler:] */

void FUN_105260350(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_5;
  _objc_retain();
  func_0x00010b88a258();
  uVar5 = param_4;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    uVar5 = param_4 | 0x10;
    if (puVar3 != (undefined *)0x2) {
      uVar5 = param_4;
    }
  }
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,uVar5);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bfc4a60(puVar2);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105260488; end: 10526064f;  */

void FUN_105260488(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      _objc_release(param_2);
      lVar6 = *(long *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      pcVar9 = *(code **)(lVar6 + 0x10);
LAB_105260608:
      (*pcVar9)(lVar6,uVar7);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar2 = *(long *)(lVar10 * 8);
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar3 = lVar5;
      func_0x00010c08fa60();
      if ((lVar3 != 0) && (lVar3 = lVar5, func_0x00010c0720c0(), (int)lVar3 != 0)) {
        _objc_release(lVar5);
        _objc_release(param_2);
        lVar6 = *(long *)(param_1 + 0x28);
        pcVar9 = *(code **)(lVar6 + 0x10);
        uVar7 = 0;
        goto LAB_105260608;
      }
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105260650; end: 10526067f; -[SCPushNotificationDelegate .cxx_destruct] */

void FUN_105260650(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105260680; end: 105260687; -[AppliveryInternal handleAppliveryURL:] */

undefined8 FUN_105260680(void)

{
  return 0;
}



/* Entry: 105260688; end: 10526069b; -[SCGrapheneReportingScopeLifecycleMonitor initWithMetricsReporter:timerFactory:entryPointEndTimeout:] */

void FUN_105260688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c007390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithCurrentTime_metricsRepor_1125df6b0,
             PTR__CACurrentMediaTime_110346c38,param_3,param_4);
  return;
}



/* Entry: 10526069c; end: 105260877; -[SCGrapheneReportingScopeLifecycleMonitor initWithCurrentTime:metricsReporter:timerFactory:entryPointEndTimeout:] */

undefined1 *
FUN_10526069c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e7318;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar3);
    uVar3 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x70) = param_1;
    *(undefined4 *)((long)puVar1 + 0x54) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105260878; end: 10526087b; -[SCGrapheneReportingScopeLifecycleMonitor setMemoryUsageMetricsReporter:] */

void FUN_105260878(void)

{
  return;
}



/* Entry: 10526087c; end: 10526087f; -[SCGrapheneReportingScopeLifecycleMonitor setMetricsReporter:] */

void FUN_10526087c(void)

{
  return;
}



/* Entry: 105260880; end: 105260883; -[SCGrapheneReportingScopeLifecycleMonitor setExceptionReporter:] */

void FUN_105260880(void)

{
  return;
}



/* Entry: 105260884; end: 105260887; -[SCGrapheneReportingScopeLifecycleMonitor setPerformanceMetricsReporter:] */

void FUN_105260884(void)

{
  return;
}



/* Entry: 105260888; end: 1052608b7; -[SCGrapheneReportingScopeLifecycleMonitor setStartupInfoService:] */

void FUN_105260888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052608b8; end: 1052608bb; -[SCGrapheneReportingScopeLifecycleMonitor scopeGraphAllMappingsBuilt] */

void FUN_1052608b8(void)

{
  return;
}



/* Entry: 1052608bc; end: 105260963; -[SCGrapheneReportingScopeLifecycleMonitor scopeGraphMappingBuildStart:] */

void FUN_1052608bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  (**(code **)(param_2 + 0x58))();
  _os_unfair_lock_lock(param_2 + 0x54);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,puVar1,param_4);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_2 + 0x54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105260964; end: 105260a1b; -[SCGrapheneReportingScopeLifecycleMonitor scopeGraphMappingBuildEnd:] */

void FUN_105260964(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_4);
  (**(code **)(param_2 + 0x58))();
  dVar2 = param_1;
  _os_unfair_lock_lock(param_2 + 0x54);
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf885a0(lVar1);
    func_0x00010c132760(param_1 * 1000.0 - dVar2,*(undefined8 *)(param_2 + 8),param_3,param_4);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_2 + 0x54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105260a1c; end: 105260af3; -[SCGrapheneReportingScopeLifecycleMonitor lifecycleBeginning:] */

void FUN_105260a1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  (**(code **)(param_2 + 0x58))();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar2,puVar1);
  _objc_release(puVar2);
  uVar3 = *(ulong *)(param_2 + 0x78);
  func_0x00010c07f880();
  if ((uVar3 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x48),param_3,puVar1);
  }
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105260af4; end: 105260c63; -[SCGrapheneReportingScopeLifecycleMonitor lifecycleBegan:] */

void FUN_105260af4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  _objc_retain(param_4);
  (**(code **)(param_2 + 0x58))();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar8 = param_1;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c098dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x00010c0e00e0(lVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010bf885a0(lVar3);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010bf51e00(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bf4b900(uVar5,param_3,puVar1);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c2523e0(uVar6);
    func_0x0001005a8a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132720(param_1 - dVar8,uVar7,param_3,uVar2,uVar4,uVar5,uVar6);
    _objc_release(uVar6);
    func_0x00010c12d360(*(undefined8 *)(param_2 + 0x48),param_3,puVar1);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105260c64; end: 105260d23; -[SCGrapheneReportingScopeLifecycleMonitor lifecycleEnding:] */

void FUN_105260c64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  (**(code **)(param_2 + 0x58))();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar2,puVar1);
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105260d24; end: 105260e2f; -[SCGrapheneReportingScopeLifecycleMonitor lifecycleEnded:] */

void FUN_105260d24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_4);
  (**(code **)(param_2 + 0x58))();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar4 = param_1;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c098dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  lVar3 = *(long *)(param_2 + 0x28);
  func_0x00010c0e00e0(lVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x28),param_3,puVar1);
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
    func_0x00010bf885a0(lVar3);
    func_0x00010c132c20(param_1 - dVar4,*(undefined8 *)(param_2 + 8),param_3,uVar2);
  }
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105260e30; end: 105261013; -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:beginningInLifecycle:] */

void FUN_105260e30(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_2 + 0x58))();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  _objc_opt_class(param_4);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c098dc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010b0a9b84(param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar10 = param_1;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar7,puVar2);
  _objc_release(puVar7);
  bVar1 = (byte)*(undefined8 *)(param_2 + 0x78);
  func_0x00010c07f880();
  *(byte *)(param_2 + 0x50) = bVar1 ^ 1;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c0e00e0(uVar8,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010bf51e00(uVar9);
  func_0x00010c132740(param_1 - dVar10,*(undefined8 *)(param_2 + 8),param_3,uVar3,uVar6,uVar5,uVar9)
  ;
  func_0x00010bedca00(param_2,param_3,puVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105261014; end: 10526134b; -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:beganInLifecycle:] */

void FUN_105261014(double param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  double dVar15;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (*(code *)param_2[0xb])();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar15 = param_1;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  _objc_opt_class(param_4);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010b0a9b84();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock((long)param_2 + 0x54);
  puVar6 = param_2[2];
  func_0x00010c0e00e0(puVar6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c12d3e0(param_2[2],param_3,puVar2);
    func_0x00010bf885a0(puVar6);
    puVar7 = param_2[0xc];
    func_0x00010bf51e00();
    ppuVar8 = param_2;
    func_0x00010be22ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_2;
    func_0x00010be22f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db9f18;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar1 = ppuVar9;
    }
    func_0x00010c132700(param_1 - dVar15,param_2[1],param_3,uVar3,uVar5,uVar4,puVar7,
                        *(undefined1 *)(param_2 + 10),ppuVar1,ppuVar8);
    puVar10 = param_2[0x10];
    func_0x00010c0e00e0(puVar10,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c067fc0();
    _objc_release(puVar10);
    puVar12 = param_2[0x11];
    func_0x00010c0e00e0(puVar12,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010c067fc0();
    _objc_release(puVar12);
    func_0x00010bedca00(param_2,param_3,puVar2);
    puVar13 = param_2[0x10];
    func_0x00010c0e00e0(puVar13,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010c067fc0();
    _objc_release(puVar13);
    puVar14 = param_2[0x11];
    func_0x00010c0e00e0(puVar14,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010c067fc0();
    _objc_release(puVar14);
    if (((long)puVar11 < 0) || ((long)puVar12 < 0)) {
      func_0x00010c133e40(param_2[1],param_3,uVar3,&PTR____CFConstantStringClassReference_110dcde18)
      ;
    }
    else if (-1 < (long)puVar12 - (long)puVar11) {
      func_0x00010c1336a0(param_2[1],param_3,uVar3);
    }
    if (((long)puVar10 < 0) || ((long)puVar13 < 0)) {
      func_0x00010c133e40(param_2[1],param_3,uVar3,&PTR____CFConstantStringClassReference_110dcde38)
      ;
    }
    else if (-1 < (long)puVar13 - (long)puVar10) {
      func_0x00010c1336c0(param_2[1],param_3,uVar3);
    }
    func_0x00010c12d3e0(param_2[0x10],param_3,puVar2);
    func_0x00010c12d3e0(param_2[0x11],param_3,puVar2);
    *(undefined1 *)(param_2 + 10) = 0;
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _os_unfair_lock_unlock((long)param_2 + 0x54);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10526134c; end: 1052615af; -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:endingInLifecycle:] */

void FUN_10526134c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_2 + 0x58))();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c098dc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar8 = param_1;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar5);
  lVar6 = *(long *)(param_2 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    func_0x00010bf885a0(lVar6);
    func_0x00010c132c40(param_1 - dVar8,*(undefined8 *)(param_2 + 8));
    _objc_initWeak(auStack_78,param_2);
    lVar7 = *(long *)(param_2 + 0x68);
    uVar9 = *(undefined8 *)(param_2 + 0x70);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1052615b0;
    puStack_90 = &UNK_110841fb0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar2);
    uStack_88 = uVar2;
    (**(code **)(lVar7 + 0x10))(uVar9,lVar7,&puStack_a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x40));
    _objc_release(lVar7);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar6);
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052615b0; end: 1052615e3;  */

void FUN_1052615b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052615e4; end: 10526173f; -[SCGrapheneReportingScopeLifecycleMonitor entryPoint:endedInLifecycle:] */

void FUN_1052615e4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_2 + 0x58))();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar5 = param_1;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  _objc_opt_class(param_4);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0(lVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x20),param_3,puVar1);
    func_0x00010bf885a0(lVar3);
    func_0x00010c132c00(param_1 - dVar5,*(undefined8 *)(param_2 + 8),param_3,uVar2);
    lVar4 = *(long *)(param_2 + 0x40);
    func_0x00010c0e00e0(lVar4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010c069d00(lVar4);
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x40),param_3,puVar1);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105261740; end: 105261743; -[SCGrapheneReportingScopeLifecycleMonitor services:willBeExposedInLifecycle:] */

void FUN_105261740(void)

{
  return;
}



/* Entry: 105261744; end: 105261813; -[SCGrapheneReportingScopeLifecycleMonitor serviceProviderProviding:] */

void FUN_105261744(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  (**(code **)(param_2 + 0x58))();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x54);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x30),param_3,puVar3,puVar2);
  _objc_release(puVar3);
  bVar1 = (byte)*(undefined8 *)(param_2 + 0x78);
  func_0x00010c07f880();
  *(byte *)(param_2 + 0x50) = bVar1 ^ 1;
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105261814; end: 10526197b; -[SCGrapheneReportingScopeLifecycleMonitor serviceProviderProvided:] */

void FUN_105261814(double param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  double dVar7;
  
  _objc_retain(param_4);
  (*(code *)param_2[0xb])();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar7 = param_1;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  _objc_opt_class(param_4);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock((long)param_2 + 0x54);
  puVar4 = param_2[6];
  func_0x00010c0e00e0(puVar4,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c12d3e0(param_2[6],param_3,puVar2);
    ppuVar5 = param_2;
    func_0x00010be22ee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_2;
    func_0x00010be22f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0(puVar4);
    ppuVar1 = &PTR____CFConstantStringClassReference_110db9f18;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6;
    }
    func_0x00010c1338a0(param_1 - dVar7,param_2[1],param_3,uVar3,*(undefined1 *)(param_2 + 10),
                        ppuVar1,ppuVar5);
    *(undefined1 *)(param_2 + 10) = 0;
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  _objc_release(puVar4);
  _os_unfair_lock_unlock((long)param_2 + 0x54);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10526197c; end: 10526197f; -[SCGrapheneReportingScopeLifecycleMonitor scope:willBeExposedFromLifecycle:] */

void FUN_10526197c(void)

{
  return;
}



/* Entry: 105261980; end: 105261983; -[SCGrapheneReportingScopeLifecycleMonitor scope:willBeRemovedFromLifecycle:] */

void FUN_105261980(void)

{
  return;
}



/* Entry: 105261984; end: 105261987; -[SCGrapheneReportingScopeLifecycleMonitor plugInScope:loadingPlugInsInLifecycle:] */

void FUN_105261984(void)

{
  return;
}



/* Entry: 105261988; end: 10526198b; -[SCGrapheneReportingScopeLifecycleMonitor plugInScope:loadedPlugInsInLifecycle:] */

void FUN_105261988(void)

{
  return;
}



/* Entry: 10526198c; end: 105261a0f; -[SCGrapheneReportingScopeLifecycleMonitor scope:overExposedInLifecycle:] */

void FUN_10526198c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c098dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c133660(*(undefined8 *)(param_1 + 8),param_2,param_3,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105261a10; end: 105261a73; -[SCGrapheneReportingScopeLifecycleMonitor scope:overRemovedInLifecycle:] */

void FUN_105261a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c098dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133680(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105261a74; end: 105261ab3; -[SCGrapheneReportingScopeLifecycleMonitor lifecycleDuplicated:] */

void FUN_105261a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c098dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132bc0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105261ab4; end: 105261afb; -[SCGrapheneReportingScopeLifecycleMonitor scopedAccess:didAccessValue:] */

void FUN_105261ab4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
  _NSStringFromClass(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1333c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105261afc; end: 105261b57; -[SCGrapheneReportingScopeLifecycleMonitor handleAppEvent:] */

void FUN_105261afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x54);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105261b58; end: 105261b5f; -[SCGrapheneReportingScopeLifecycleMonitor _neverEndingEntryPointDetected:] */

void FUN_105261b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c133370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_reportNeverEndingEntryPoint__11262a6f8);
  return;
}



/* Entry: 105261b60; end: 105261c6b; -[SCGrapheneReportingScopeLifecycleMonitor _updatePageFaultAndPageInsForEntryPoint:] */

void FUN_105261b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uStack_54;
  undefined1 auStack_50 [32];
  
  uStack_54 = 8;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _objc_retain(param_3);
  _task_info(iVar1,2,auStack_50,&uStack_54);
  if (iVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80));
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80));
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88));
  _objc_release(param_3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105261c6c; end: 105261cc3; -[SCGrapheneReportingScopeLifecycleMonitor _getStartupToPage] */

void FUN_105261c6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x78);
  func_0x00010c2523c0();
  puVar1 = PTR_PTR_1126afdd8;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c2523c0(uVar3);
    func_0x00010bfc8740(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105261cc4; end: 105261cdb; -[SCGrapheneReportingScopeLifecycleMonitor _getStartupType] */

undefined * FUN_105261cc4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x78);
  func_0x00010c2523e0();
  if (uVar1 < 8) {
    return (&PTR_PTR_110d94118)[uVar1];
  }
  return (undefined *)0x0;
}



/* Entry: 105261cdc; end: 105261d9b; -[SCGrapheneReportingScopeLifecycleMonitor .cxx_destruct] */

void FUN_105261cdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105261d9c; end: 105261e03;  */

void FUN_105261d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae888;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0522e0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105261e04; end: 105261e87; -[SCScopeGraphGrapheneMetricsReporter initWithGraphene:] */

undefined8 FUN_105261e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c018200(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105261e88; end: 105261f2b; -[SCScopeGraphGrapheneMetricsReporter initWithGraphene:performer:] */

undefined1 *
FUN_105261e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7320;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105261f2c; end: 105261f2f; -[SCScopeGraphGrapheneMetricsReporter reportAllScopeGraphMappingsBuilt] */

void FUN_105261f2c(void)

{
  return;
}



/* Entry: 105261f30; end: 105262017; -[SCScopeGraphGrapheneMetricsReporter reportBuildDurationForScopeGraphMapping:duration:] */

void FUN_105261f30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105262018; end: 10526205b;  */

void FUN_105262018(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_1052654e8(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x20),
                  (long)*(double *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10526205c; end: 10526218f; -[SCScopeGraphGrapheneMetricsReporter reportBeginForLifecycle:duration:appEventSignals:isOnStartupPath:startupType:] */

void FUN_10526205c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_7);
  uStack_68 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105262190; end: 10526220b;  */

void FUN_105262190(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    uVar1 = *(undefined1 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    FUN_10526220c(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_105264600(*(undefined8 *)(param_1 + 0x38),uVar4,uVar1,uVar3,*(undefined8 *)(param_1 + 0x28))
    ;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10526220c; end: 1052622ef;  */

void FUN_10526220c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c25cfc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcde58,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c08fa60();
  uVar3 = uVar2;
  if (0x40 < uVar1) {
    func_0x00010c08fa60(uVar2);
    func_0x00010c11f3c0(uVar2);
    func_0x00010c260c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1052622f0; end: 105262497; -[SCScopeGraphGrapheneMetricsReporter reportBeginForEntryPoint:ofType:inLifecycle:duration:appEventSignals:isOnStartupPath:startupType:startupToPage:] */

void FUN_1052622f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_78,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_4);
  uStack_80 = param_8;
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_5);
  uStack_88 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105262498; end: 105262517;  */

void FUN_105262498(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 8);
    uVar2 = *(undefined1 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    FUN_10526220c(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_105263bc0(*(undefined8 *)(param_1 + 0x48),uVar5,uVar1,uVar2,uVar4,
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105262518; end: 10526264b; -[SCScopeGraphGrapheneMetricsReporter reportProvideForServiceProvider:duration:isOnStartupPath:startupType:startupToPage:] */

void FUN_105262518(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_6);
  uStack_68 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10526264c; end: 10526268f;  */

void FUN_10526264c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_105263f38(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar1 + 8),
                  *(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105262690; end: 1052627e3; -[SCScopeGraphGrapheneMetricsReporter reportBeginInitiatedForEntryPoint:ofType:inLifecycle:afterSeconds:appEventSignals:] */

void FUN_105262690(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uStack_60 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052627e4; end: 10526285b;  */

void FUN_1052627e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    FUN_10526220c(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_105264b7c(*(undefined8 *)(param_1 + 0x40),uVar4,uVar1,uVar3,*(undefined8 *)(param_1 + 0x30))
    ;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10526285c; end: 105262943; -[SCScopeGraphGrapheneMetricsReporter reportEndForLifecycle:duration:] */

void FUN_10526285c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105262944; end: 1052629ab;  */

void FUN_105262944(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_10526220c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_105264830(*(undefined8 *)(param_1 + 0x30),uVar3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052629ac; end: 105262a93; -[SCScopeGraphGrapheneMetricsReporter reportEndForEntryPoint:duration:] */

void FUN_1052629ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105262a94; end: 105262ad3;  */

void FUN_105262a94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_105264168(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar1 + 8),
                  *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105262ad4; end: 105262be3; -[SCScopeGraphGrapheneMetricsReporter reportEndInitiatedForEntryPoint:inLifecycle:afterSeconds:] */

void FUN_105262ad4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105262be4; end: 105262c57;  */

void FUN_105262be4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    FUN_10526220c(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_105264e80(*(undefined8 *)(param_1 + 0x38),uVar4,uVar1,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105262c58; end: 105262d37; -[SCScopeGraphGrapheneMetricsReporter reportPageFaultsForEntryPoint:pageFaults:] */

void FUN_105262c58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105262d38; end: 105262d77;  */

void FUN_105262d38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_10526565c(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105262d78; end: 105262e57; -[SCScopeGraphGrapheneMetricsReporter reportPageInsForEntryPoint:pageIns:] */

void FUN_105262d78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105262e58; end: 105262e97;  */

void FUN_105262e58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_1052657f0(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105262e98; end: 105262f97; -[SCScopeGraphGrapheneMetricsReporter reportOverExposedScope:inLifecycle:] */

void FUN_105262e98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105262f98; end: 105263003;  */

void FUN_105262f98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_10526220c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_105265088(uVar3,uVar2,*(undefined8 *)(param_1 + 0x28),1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105263004; end: 105263103; -[SCScopeGraphGrapheneMetricsReporter reportOverRemovedScope:inLifecycle:] */

void FUN_105263004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105263104; end: 10526316f;  */

void FUN_105263104(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_10526220c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1052652b8(uVar3,uVar2,*(undefined8 *)(param_1 + 0x28),1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105263170; end: 105263247; -[SCScopeGraphGrapheneMetricsReporter reportDuplicateLifecycle:] */

void FUN_105263170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105263248; end: 1052632af;  */

void FUN_105263248(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_10526220c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1052636c4(uVar3,uVar2,1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052632b0; end: 105263387; -[SCScopeGraphGrapheneMetricsReporter reportNilAccessForScopedAccessClass:] */

void FUN_1052632b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105263388; end: 1052633c7;  */

void FUN_105263388(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_105264f14(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052633c8; end: 10526349f; -[SCScopeGraphGrapheneMetricsReporter reportNeverEndingEntryPoint:] */

void FUN_1052633c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052634a0; end: 1052634df;  */

void FUN_1052634a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_1052641d4(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052634e0; end: 1052635df; -[SCScopeGraphGrapheneMetricsReporter reportTaskEventsInfoErrorWithEntryPoint:pageType:] */

void FUN_1052634e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052635e0; end: 10526361f;  */

void FUN_1052635e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_105265984(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28),100);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105263620; end: 10526364f; -[SCScopeGraphGrapheneMetricsReporter .cxx_destruct] */

void FUN_105263620(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105263650; end: 1052636c3; -[SCGrapheneScopeGraphMetric2 init] */

undefined1 * FUN_105263650(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7328;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052636c4; end: 105263837;  */

/* WARNING: Removing unreachable block (ram,0x000105263b80) */

void FUN_1052636c4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  char *unaff_x25;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar5 = pcVar3;
  pcVar7 = param_5;
  pcVar8 = param_6;
  pcVar9 = param_7;
  _objc_retain(pcVar1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    pcVar4 = "\x01";
    (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_110871b68);
    if ((int)plVar10 != 0) {
      plVar10 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_160,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar3 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_148,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_130,pcVar3);
      _objc_retain(param_6);
      if (param_6 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_6);
        pcVar3 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_118,pcVar3);
      _objc_retain(param_7);
      if (param_7 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_7);
        pcVar3 = param_7;
        func_0x00010bdc3520(param_7);
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_100,pcVar3);
      acStack_180[0] = '\0';
      acStack_180[1] = '\0';
      acStack_180[2] = '\0';
      acStack_180[3] = '\0';
      acStack_180[4] = '\0';
      acStack_180[5] = '\0';
      acStack_180[6] = '\0';
      acStack_180[7] = '\0';
      acStack_180[8] = '\0';
      acStack_180[9] = '\0';
      acStack_180[10] = '\0';
      acStack_180[0xb] = '\0';
      acStack_180[0xc] = '\0';
      acStack_180[0xd] = '\0';
      acStack_180[0xe] = '\0';
      acStack_180[0xf] = '\0';
      acStack_180[0x10] = '\0';
      acStack_180[0x11] = '\0';
      acStack_180[0x12] = '\0';
      acStack_180[0x13] = '\0';
      acStack_180[0x14] = '\0';
      acStack_180[0x15] = '\0';
      acStack_180[0x16] = '\0';
      acStack_180[0x17] = '\0';
      func_0x00010007e1e8(acStack_180,auStack_160,&lStack_e8,5);
      pcVar4 = "\x01";
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110871b68,acStack_180,param_8);
      puStack_168 = acStack_180;
      func_0x00010007e5dc(&puStack_168);
      lVar11 = 0;
      pcVar5 = pcVar6;
      pcVar7 = param_8;
      do {
        if ((&cStack_e9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x25 = acStack_180;
      } while (lVar11 != -0x78);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != auStack_160);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    _objc_retain(pcVar4);
    _objc_retain(pcVar7);
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    if (pcVar3 != (char *)0x0) {
      FUN_105263838(pcVar3,pcVar4,pcVar5,pcVar7,pcVar8,pcVar9,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    _objc_release(pcVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
    return;
  }
  return;
}



/* Entry: 105263838; end: 105263bbf;  */

/* WARNING: Removing unreachable block (ram,0x000105263b80) */

void FUN_105263838(double param_1,long param_2,char *param_3,undefined1 *param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *unaff_x25;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar5 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  puVar4 = param_4;
  pcVar6 = param_5;
  pcVar7 = param_6;
  pcVar8 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871b68);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e0,pcVar2);
      pcVar2 = "true";
      if ((int)param_4 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_c8,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_b0,pcVar2);
      _objc_retain(param_6);
      if (param_6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_6);
        pcVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_98,pcVar2);
      _objc_retain(param_7);
      if (param_7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_7);
        pcVar2 = param_7;
        func_0x00010bdc3520(param_7);
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_80,pcVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871b68,&uStack_100,param_8);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      lVar9 = 0;
      puVar4 = (undefined1 *)puVar5;
      pcVar6 = param_8;
      do {
        if ((&cStack_69)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x25 = &uStack_100;
      } while (lVar9 != -0x78);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      unaff_x25 = (undefined8 *)((long)unaff_x25 + -0x18);
    } while (unaff_x25 != (undefined8 *)auStack_e0);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(pcVar2);
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    _objc_retain(pcVar8);
    if (pcVar3 != (char *)0x0) {
      FUN_105263838(pcVar3,pcVar2,puVar4,pcVar6,pcVar7,pcVar8,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar8);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 105263bc0; end: 105263ca3;  */

void FUN_105263bc0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_2 != 0) {
    FUN_105263838(param_2,param_3,param_4,param_5,param_6,param_7,(long)(param_1 * 1000.0));
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105263ca4; end: 105263f37;  */

/* WARNING: Removing unreachable block (ram,0x000105263f00) */

void FUN_105263ca4(double param_1,long param_2,undefined *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  char acStack_b0 [24];
  undefined1 *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  pcVar2 = param_4;
  pcVar5 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar4 = &UNK_110871bb8;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871bb8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      pcVar2 = "true";
      if ((int)param_3 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_90,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_78,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_b0[0] = '\0';
      acStack_b0[1] = '\0';
      acStack_b0[2] = '\0';
      acStack_b0[3] = '\0';
      acStack_b0[4] = '\0';
      acStack_b0[5] = '\0';
      acStack_b0[6] = '\0';
      acStack_b0[7] = '\0';
      acStack_b0[8] = '\0';
      acStack_b0[9] = '\0';
      acStack_b0[10] = '\0';
      acStack_b0[0xb] = '\0';
      acStack_b0[0xc] = '\0';
      acStack_b0[0xd] = '\0';
      acStack_b0[0xe] = '\0';
      acStack_b0[0xf] = '\0';
      acStack_b0[0x10] = '\0';
      acStack_b0[0x11] = '\0';
      acStack_b0[0x12] = '\0';
      acStack_b0[0x13] = '\0';
      acStack_b0[0x14] = '\0';
      acStack_b0[0x15] = '\0';
      acStack_b0[0x16] = '\0';
      acStack_b0[0x17] = '\0';
      func_0x00010007e1e8(acStack_b0,auStack_90,&lStack_48,3);
      puVar4 = &UNK_110871bb8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871bb8,acStack_b0,param_6);
      puStack_98 = acStack_b0;
      func_0x00010007e5dc(&puStack_98);
      lVar6 = 0;
      param_3 = auStack_90;
      pcVar2 = pcVar3;
      pcVar5 = param_6;
      do {
        if ((&cStack_49)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x48);
    }
  }
  _objc_release(param_5);
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      param_3 = param_3 + -0x18;
    } while (param_3 != auStack_90);
    _objc_release(param_5);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(pcVar2);
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      FUN_105263ca4(pcVar3,puVar4,pcVar2,pcVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 105263f38; end: 105263fd3;  */

void FUN_105263f38(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_105263ca4(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105263fd4; end: 105264167;  */

void FUN_105263fd4(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871c08);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871c08,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    FUN_105263fd4(pcVar3,pcVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 105264168; end: 1052641d3;  */

void FUN_105264168(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105263fd4(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052641d4; end: 10526436b;  */

/* WARNING: Removing unreachable block (ram,0x0001052645c8) */

void FUN_1052641d4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char acStack_130 [24];
  undefined1 *puStack_118;
  char acStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar9 = "";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar9);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
      param_5 = (char *)((long)param_4 * 10);
      pcVar9 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_68 = acStack_80;
      func_0x00010007e5dc(&puStack_68);
      pcVar4 = pcVar2;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        pcVar4 = pcVar2;
      }
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    pcVar6 = acStack_130;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar9;
    pcVar5 = pcVar4;
    pcVar7 = param_5;
    _objc_retain(pcVar4);
    _objc_retain(param_5);
    if (pcVar2 != (char *)0x0) {
      plVar1 = *(long **)(pcVar2 + 8);
      pcVar3 = "\x01";
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871ca8);
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(pcVar2 + 8);
        pcVar2 = "true";
        if ((int)pcVar9 == 0) {
          pcVar2 = "false";
        }
        func_0x00010002b838(acStack_110,pcVar2);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar9 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_f8,pcVar9);
        _objc_retain(param_5);
        if (param_5 == (char *)0x0) {
          pcVar9 = "";
        }
        else {
          _objc_retainAutorelease(param_5);
          pcVar9 = param_5;
          func_0x00010bdc3520(param_5);
        }
        _objc_release(param_5);
        func_0x00010002b838(auStack_e0,pcVar9);
        acStack_130[0] = '\0';
        acStack_130[1] = '\0';
        acStack_130[2] = '\0';
        acStack_130[3] = '\0';
        acStack_130[4] = '\0';
        acStack_130[5] = '\0';
        acStack_130[6] = '\0';
        acStack_130[7] = '\0';
        acStack_130[8] = '\0';
        acStack_130[9] = '\0';
        acStack_130[10] = '\0';
        acStack_130[0xb] = '\0';
        acStack_130[0xc] = '\0';
        acStack_130[0xd] = '\0';
        acStack_130[0xe] = '\0';
        acStack_130[0xf] = '\0';
        acStack_130[0x10] = '\0';
        acStack_130[0x11] = '\0';
        acStack_130[0x12] = '\0';
        acStack_130[0x13] = '\0';
        acStack_130[0x14] = '\0';
        acStack_130[0x15] = '\0';
        acStack_130[0x16] = '\0';
        acStack_130[0x17] = '\0';
        func_0x00010007e1e8(acStack_130,acStack_110,&lStack_c8,3);
        pcVar3 = "\x01";
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871ca8,acStack_130,param_6);
        puStack_118 = acStack_130;
        func_0x00010007e5dc(&puStack_118);
        lVar8 = 0;
        pcVar9 = acStack_110;
        pcVar5 = pcVar6;
        pcVar7 = param_6;
        do {
          if ((&cStack_c9)[lVar8] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar8));
          }
          lVar8 = lVar8 + -0x18;
        } while (lVar8 != -0x48);
      }
    }
    _objc_release(param_5);
    pcVar2 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      _objc_release(param_5);
      do {
        pcVar9 = pcVar9 + -0x18;
      } while (pcVar9 != acStack_110);
      _objc_release(param_5);
      _objc_release(pcVar4);
      __Unwind_Resume();
      _objc_retain(pcVar5);
      _objc_retain(pcVar7);
      if (pcVar2 != (char *)0x0) {
        FUN_10526436c(pcVar2,pcVar3,pcVar5,pcVar7,(long)(param_1 * 1000.0));
      }
      _objc_release(pcVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10526436c; end: 1052645ff;  */

/* WARNING: Removing unreachable block (ram,0x0001052645c8) */

void FUN_10526436c(double param_1,long param_2,undefined *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  char acStack_b0 [24];
  undefined1 *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  pcVar2 = param_4;
  pcVar5 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar4 = &UNK_110871ca8;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871ca8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      pcVar2 = "true";
      if ((int)param_3 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_90,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_78,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_b0[0] = '\0';
      acStack_b0[1] = '\0';
      acStack_b0[2] = '\0';
      acStack_b0[3] = '\0';
      acStack_b0[4] = '\0';
      acStack_b0[5] = '\0';
      acStack_b0[6] = '\0';
      acStack_b0[7] = '\0';
      acStack_b0[8] = '\0';
      acStack_b0[9] = '\0';
      acStack_b0[10] = '\0';
      acStack_b0[0xb] = '\0';
      acStack_b0[0xc] = '\0';
      acStack_b0[0xd] = '\0';
      acStack_b0[0xe] = '\0';
      acStack_b0[0xf] = '\0';
      acStack_b0[0x10] = '\0';
      acStack_b0[0x11] = '\0';
      acStack_b0[0x12] = '\0';
      acStack_b0[0x13] = '\0';
      acStack_b0[0x14] = '\0';
      acStack_b0[0x15] = '\0';
      acStack_b0[0x16] = '\0';
      acStack_b0[0x17] = '\0';
      func_0x00010007e1e8(acStack_b0,auStack_90,&lStack_48,3);
      puVar4 = &UNK_110871ca8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871ca8,acStack_b0,param_6);
      puStack_98 = acStack_b0;
      func_0x00010007e5dc(&puStack_98);
      lVar6 = 0;
      param_3 = auStack_90;
      pcVar2 = pcVar3;
      pcVar5 = param_6;
      do {
        if ((&cStack_49)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x48);
    }
  }
  _objc_release(param_5);
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      param_3 = param_3 + -0x18;
    } while (param_3 != auStack_90);
    _objc_release(param_5);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(pcVar2);
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      FUN_10526436c(pcVar3,puVar4,pcVar2,pcVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 105264600; end: 10526469b;  */

void FUN_105264600(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10526436c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10526469c; end: 10526482f;  */

void FUN_10526469c(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871cf8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871cf8,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    FUN_10526469c(pcVar3,pcVar2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 105264830; end: 10526489b;  */

void FUN_105264830(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10526469c(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


