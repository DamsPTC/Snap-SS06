/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104947504; end: 10494750b; -[FBSDKAppEventsATEPublisher isProcessing] */

undefined1 FUN_104947504(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10494750c; end: 104947513; -[FBSDKAppEventsATEPublisher setIsProcessing:] */

void FUN_10494750c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104947514; end: 104947567; -[FBSDKAppEventsATEPublisher .cxx_destruct] */

void FUN_104947514(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104947568; end: 1049478a3; -[FBSDKAppEventsConfiguration initWithJSON:] */

undefined * FUN_104947568(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e32d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_1049477f8:
    puVar5 = (undefined *)puVar1;
    _objc_retain(puVar1);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar5 = PTR_PTR_1126add78;
    if (puVar2 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126addd0;
      func_0x00010bf690c0(PTR_PTR_1126addd0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10494780c;
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126add78;
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df6c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = puVar4;
        _objc_retain();
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = PTR_PTR_1126add78;
      puVar3 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df6c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar7 = puVar4;
        _objc_retain();
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = PTR_PTR_1126add78;
      puVar3 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df6c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar8 = puVar4;
        _objc_retain();
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = puVar6;
      func_0x00010c067fc0();
      *(undefined **)((long)puVar1 + 0x10) = puVar4;
      puVar4 = puVar7;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar1 + 8) = (char)puVar4;
      puVar4 = puVar8;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar1 + 9) = (char)puVar4;
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      param_3 = puVar2;
      goto LAB_1049477f8;
    }
    puVar5 = PTR_PTR_1126addd0;
    func_0x00010bf690c0(PTR_PTR_1126addd0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
LAB_10494780c:
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 1049478a4; end: 104947903; -[FBSDKAppEventsConfiguration initWithDefaultATEStatus:advertiserIDCollectionEnabled:eventCollectionEnabled:] */

void FUN_1049478a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e32d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 104947904; end: 10494792f; +[FBSDKAppEventsConfiguration defaultConfiguration] */

void FUN_104947904(void)

{
  _objc_alloc(PTR_PTR_1126addd0);
  func_0x00010c009e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104947930; end: 104947937; +[FBSDKAppEventsConfiguration supportsSecureCoding] */

undefined8 FUN_104947930(void)

{
  return 1;
}



/* Entry: 104947938; end: 1049479db; -[FBSDKAppEventsConfiguration initWithCoder:] */

undefined * FUN_104947938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf66f40();
  func_0x00010bf66ce0(param_3,param_2,&PTR____CFConstantStringClassReference_110da1d58);
  func_0x00010bf66ce0(param_3,param_2,&PTR____CFConstantStringClassReference_110da1d78);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126addd0;
  _objc_alloc(PTR_PTR_1126addd0);
  func_0x00010c009e80();
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 1049479dc; end: 104947a4b; -[FBSDKAppEventsConfiguration encodeWithCoder:] */

void FUN_1049479dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf92fc0();
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110da1d58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110da1d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104947a4c; end: 104947a4f; -[FBSDKAppEventsConfiguration copyWithZone:] */

void FUN_104947a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104947a50; end: 104947a57; -[FBSDKAppEventsConfiguration defaultATEStatus] */

undefined8 FUN_104947a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104947a58; end: 104947a5f; -[FBSDKAppEventsConfiguration advertiserIDCollectionEnabled] */

undefined1 FUN_104947a58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104947a60; end: 104947a67; -[FBSDKAppEventsConfiguration eventCollectionEnabled] */

undefined1 FUN_104947a60(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104947a68; end: 104947ad7; +[FBSDKAppEventsConfigurationManager shared] */

void FUN_104947a68(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  if (lRam000000011369ceb8 == 0) {
    lVar2 = param_1;
    func_0x00010c0d8420();
    lVar1 = lRam000000011369ceb8;
    lRam000000011369ceb8 = lVar2;
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(lRam000000011369ceb8);
  return;
}



/* Entry: 104947ad8; end: 104947ccb; -[FBSDKAppEventsConfigurationManager configureWithStore:settings:graphRequestFactory:graphRequestConnectionFactory:] */

void FUN_104947ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c20c1a0(param_1,param_2,param_3);
  func_0x00010c1fe440(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a42e0(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1a42c0(param_1,param_2,param_6);
  _objc_release(param_6);
  lVar1 = param_1;
  func_0x00010c2573e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  lVar1 = lVar2;
  func_0x00010c075f00(lVar2,param_2,puVar3);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  if ((int)lVar1 != 0) {
    puVar4 = PTR_PTR_1126addd0;
    func_0x00010bf39c40(PTR_PTR_1126addd0);
    func_0x00010c27f240(puVar3,param_2,puVar4,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c180a40(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126addd0;
    func_0x00010bf690c0(PTR_PTR_1126addd0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c180a40(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c17fb60(param_1,param_2,puVar3);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010c2573e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215dc0(param_1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104947ccc; end: 104947ccf; -[FBSDKAppEventsConfigurationManager cachedAppEventsConfiguration] */

void FUN_104947ccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf46570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_configuration_1125af300);
  return;
}



/* Entry: 104947cd0; end: 10494807b; -[FBSDKAppEventsConfigurationManager loadAppEventsConfigurationWithBlock:] */

void FUN_104947cd0(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain();
  _objc_sync_enter();
  puVar7 = PTR_PTR_1126add78;
  uVar1 = param_1;
  func_0x00010bf44020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  _objc_retainBlock(param_3);
  func_0x00010bf09f20(puVar7);
  _objc_release(lVar3);
  _objc_release(uVar1);
  if ((uVar2 == 0) ||
     ((uVar1 = param_1, func_0x00010bfdb2a0(), (int)uVar1 != 0 &&
      (uVar1 = param_1, func_0x00010be44a60(), (int)uVar1 != 0)))) {
    uVar4 = param_1;
    func_0x00010bf44020();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (uVar1 != 0) {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(uVar4);
        }
        (**(code **)(*(long *)(uVar10 * 8) + 0x10))();
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
      uVar1 = uVar4;
      func_0x00010bf52a60();
    }
    _objc_release(uVar4);
    uVar1 = param_1;
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
  }
  else {
    uVar1 = param_1;
    func_0x00010c076c20();
    if ((uVar1 & 1) != 0) goto LAB_104947ff0;
    func_0x00010c1b2480(param_1);
    uVar4 = param_1;
    func_0x00010bfcde20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf565e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010bfcde00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf56540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c215b40(0x4010000000000000,uVar10);
    func_0x00010befafc0(uVar10);
    func_0x00010c24d960(uVar10);
    _objc_release(uVar10);
  }
  _objc_release(uVar1);
LAB_104947ff0:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010be82070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__processResponse_error__11257e1b8);
  return;
}



/* Entry: 10494807c; end: 104948083;  */

void FUN_10494807c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be82070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processResponse_error__11257e1b8);
  return;
}



/* Entry: 104948084; end: 10494840b; -[FBSDKAppEventsConfigurationManager _processResponse:error:] */

ulong FUN_104948084(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c1b2480(param_1,param_2,0);
  func_0x00010c1a6900(param_1,param_2,1);
  lVar6 = param_1;
  if (param_4 == 0) {
    puVar3 = PTR_PTR_1126addd0;
    _objc_alloc(PTR_PTR_1126addd0);
    func_0x00010c020680();
    func_0x00010c180a40(param_1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c215dc0(param_1,param_2,puVar2);
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    lVar4 = param_1;
    func_0x00010bf44020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar9 = *plStack_1e0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1e0 != lVar9) {
            _objc_enumerationMutation(lVar4);
          }
          (**(code **)(*(long *)(lStack_1e8 + lVar10 * 8) + 0x10))();
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_168,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar4 = param_1;
    func_0x00010bf44020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar9 = *plStack_1a0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(lVar4);
          }
          (**(code **)(*(long *)(lStack_1a8 + lVar10 * 8) + 0x10))();
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_1b0,auStack_e8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
  }
  _objc_release(lVar6);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  if (param_4 == 0) {
    lVar6 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09780(puVar3,param_2,lVar6,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010c2573e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(lVar6);
    func_0x00010c2573e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  uVar7 = param_3;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2,param_2,param_3);
    bVar1 = false;
    if (!NAN((double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14
                                                  ,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))))))) {
      bVar1 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(
                                                  uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))
                                              )) < 3600.0;
    }
    uVar8 = (ulong)bVar1;
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(uVar7);
  return uVar8;
}



/* Entry: 10494840c; end: 1049484af; -[FBSDKAppEventsConfigurationManager _isTimestampValid] */

bool FUN_10494840c(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_2;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar3,param_3,param_2);
    bVar1 = param_1 < 3600.0;
    _objc_release(param_2);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1049484b0; end: 1049484b7; -[FBSDKAppEventsConfigurationManager store] */

undefined8 FUN_1049484b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049484b8; end: 1049484c3; -[FBSDKAppEventsConfigurationManager setStore:] */

void FUN_1049484b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1049484c4; end: 1049484cb; -[FBSDKAppEventsConfigurationManager settings] */

undefined8 FUN_1049484c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049484cc; end: 1049484d7; -[FBSDKAppEventsConfigurationManager setSettings:] */

void FUN_1049484cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049484d8; end: 1049484df; -[FBSDKAppEventsConfigurationManager graphRequestFactory] */

undefined8 FUN_1049484d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049484e0; end: 1049484eb; -[FBSDKAppEventsConfigurationManager setGraphRequestFactory:] */

void FUN_1049484e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049484ec; end: 1049484f3; -[FBSDKAppEventsConfigurationManager graphRequestConnectionFactory] */

undefined8 FUN_1049484ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049484f4; end: 1049484ff; -[FBSDKAppEventsConfigurationManager setGraphRequestConnectionFactory:] */

void FUN_1049484f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104948500; end: 104948507; -[FBSDKAppEventsConfigurationManager configuration] */

undefined8 FUN_104948500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104948508; end: 104948513; -[FBSDKAppEventsConfigurationManager setConfiguration:] */

void FUN_104948508(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104948514; end: 10494851b; -[FBSDKAppEventsConfigurationManager isLoadingConfiguration] */

undefined1 FUN_104948514(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10494851c; end: 104948523; -[FBSDKAppEventsConfigurationManager setIsLoadingConfiguration:] */

void FUN_10494851c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104948524; end: 10494852b; -[FBSDKAppEventsConfigurationManager hasRequeryFinishedForAppStart] */

undefined1 FUN_104948524(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10494852c; end: 104948533; -[FBSDKAppEventsConfigurationManager setHasRequeryFinishedForAppStart:] */

void FUN_10494852c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 104948534; end: 10494853b; -[FBSDKAppEventsConfigurationManager timestamp] */

undefined8 FUN_104948534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10494853c; end: 104948547; -[FBSDKAppEventsConfigurationManager setTimestamp:] */

void FUN_10494853c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104948548; end: 10494854f; -[FBSDKAppEventsConfigurationManager completionBlocks] */

undefined8 FUN_104948548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104948550; end: 10494855b; -[FBSDKAppEventsConfigurationManager setCompletionBlocks:] */

void FUN_104948550(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10494855c; end: 1049485c7; -[FBSDKAppEventsConfigurationManager .cxx_destruct] */

void FUN_10494855c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1049485c8; end: 104948623; +[FBSDKAppEventsDeviceInfo shared] */

void FUN_1049485c8(void)

{
  if (lRam000000011369cec0 != -1) {
    func_0x00010bda8720();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cec8);
  return;
}



/* Entry: 104948624; end: 104948653; -[FBSDKAppEventsDeviceInfo configureWithSettings:] */

void FUN_104948624(undefined8 param_1)

{
  func_0x00010c1fe440();
  func_0x00010c1b0b40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde1c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__collectPersistentData_1125560c0);
  return;
}



/* Entry: 104948654; end: 10494865f; -[FBSDKAppEventsDeviceInfo storageKey] */

undefined ** FUN_104948654(void)

{
  return &PTR____CFConstantStringClassReference_110da1df8;
}



/* Entry: 104948660; end: 104948717; -[FBSDKAppEventsDeviceInfo encodedDeviceInfo] */

void FUN_104948660(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010be40cc0();
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0 || (uVar1 & 1) != 0) {
    if ((int)uVar1 != 0) {
      func_0x00010bde1c20(param_1);
    }
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar1 = param_1;
      func_0x00010be1b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 0x10) = uVar1;
      _objc_release(uVar3);
      *(undefined1 *)(param_1 + 8) = 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104948718; end: 10494894f; -[FBSDKAppEventsDeviceInfo _collectPersistentData] */

undefined *
FUN_104948718(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_558 [1024];
  undefined1 auStack_158 [256];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174340(param_5,param_6,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0dfec0(puVar1,param_6,&PTR____CFConstantStringClassReference_110dceb18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0d60(param_5,param_6,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0dfec0(puVar1,param_6,&PTR____CFConstantStringClassReference_110dd29f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc00(param_5,param_6,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b74a0(param_5,param_6,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210fc0(param_5,param_6,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126addd8;
  func_0x00010be86400(PTR_PTR_1126addd8);
  func_0x00010c184160(param_5,param_6,(ulong)puVar3 & 0xffffffff);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c2256c0(param_3,param_5);
  func_0x00010c1a7d00(param_5);
  func_0x00010c14e120(puVar3);
  func_0x00010c18bca0(param_5);
  _uname(auStack_558);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_6,auStack_158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c15c0(param_5,param_6,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010c280880();
  func_0x00010c088de0();
  return (undefined *)(ulong)(1800.0 < param_4 - (double)(long)puVar1);
}



/* Entry: 104948950; end: 10494899b; -[FBSDKAppEventsDeviceInfo _isGroup1Expired] */

bool FUN_104948950(double param_1,long param_2)

{
  func_0x00010c280880();
  func_0x00010c088de0();
  return 1800.0 < param_1 - (double)param_2;
}



/* Entry: 10494899c; end: 104948bab; -[FBSDKAppEventsDeviceInfo _collectGroup1Data] */

void FUN_10494899c(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_2;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2351c0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf32da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar1 == 0) || ((uVar2 & 1) == 0)) {
    puVar3 = PTR_PTR_1126addd8;
    func_0x00010be1daa0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf32da0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
LAB_104948a5c:
      func_0x00010c179de0(param_2);
      func_0x00010c1b0b40(param_2);
    }
    else {
      uVar4 = param_2;
      func_0x00010bf32da0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar1);
      if (((ulong)puVar5 & 1) == 0) goto LAB_104948a5c;
    }
    _objc_release(puVar3);
  }
  uVar1 = param_2;
  func_0x00010c26fd20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar4 = param_2;
    func_0x00010c26fca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (((uint)(uVar4 != 0) & (uint)uVar2) != 0) goto LAB_104948b88;
  }
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26fd20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_104948b38:
    func_0x00010c2158c0(param_2);
    puVar6 = puVar3;
    func_0x00010beec480(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215880(param_2);
    _objc_release(puVar6);
    func_0x00010c1b0b40(param_2);
  }
  else {
    uVar2 = param_2;
    func_0x00010c26fd20(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (((ulong)puVar6 & 1) == 0) goto LAB_104948b38;
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_104948b88:
  func_0x00010c280880(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b7df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLastGroup1CheckTime__11264b9a0,(long)param_1);
  return;
}



/* Entry: 104948bac; end: 104948f5f; -[FBSDKAppEventsDeviceInfo _generateEncoding] */

undefined * FUN_104948bac(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_1[0x10];
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((double)puVar17 != 0.0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da1e18);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_100 = &PTR____CFConstantStringClassReference_110da1e38;
  ppuVar2 = param_1;
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_f8 = ppuVar2;
  }
  ppuVar3 = param_1;
  func_0x00010c0b50c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_f0 = ppuVar3;
  }
  ppuVar4 = param_1;
  func_0x00010c22d500();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_e8 = ppuVar4;
  }
  ppuVar5 = param_1;
  func_0x00010c266d60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_e0 = ppuVar5;
  }
  ppuVar6 = param_1;
  func_0x00010c0b60a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_d8 = ppuVar6;
  }
  ppuVar7 = param_1;
  func_0x00010c087ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_d0 = ppuVar7;
  }
  ppuVar8 = param_1;
  func_0x00010c26fca0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_c8 = ppuVar8;
  }
  ppuVar9 = param_1;
  func_0x00010bf32da0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_c0 = ppuVar9;
  }
  func_0x00010c2a5040(param_1);
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar16 = &PTR____CFConstantStringClassReference_110daafd8;
  puVar18 = puVar17;
  if ((double)puVar17 != 0.0) {
    func_0x00010c2a5040(param_1);
    func_0x00010c0df860(ppuVar10,param_2,(long)(double)puVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar10;
  }
  ppuStack_b8 = ppuVar16;
  func_0x00010bfe0640(param_1);
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar15 = &PTR____CFConstantStringClassReference_110daafd8;
  puVar19 = puVar18;
  if ((double)puVar18 != 0.0) {
    func_0x00010bfe0640(param_1);
    func_0x00010c0df860(ppuVar10,param_2,(long)(double)puVar19);
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar10;
  }
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar11 = param_1;
  ppuStack_b0 = ppuVar15;
  ppuStack_a8 = ppuVar1;
  func_0x00010bf522e0(param_1);
  func_0x00010c0df880(ppuVar10,param_2,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_a0 = ppuVar10;
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar12;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar13;
  func_0x00010c26fd20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != (undefined **)0x0) {
    ppuStack_88 = param_1;
  }
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_100,0x10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(ppuVar10);
  if ((double)puVar18 != 0.0) {
    _objc_release(ppuVar15);
  }
  if ((double)puVar17 != 0.0) {
    _objc_release(ppuVar16);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar17 = PTR_PTR_1126add58;
  func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar14,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar19;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar17);
  return (undefined *)(long)(double)puVar19;
}



/* Entry: 104948f60; end: 104948fab; -[FBSDKAppEventsDeviceInfo unixTimeNow] */

long FUN_104948f60(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return (long)param_1;
}



/* Entry: 104948fac; end: 10494902b; +[FBSDKAppEventsDeviceInfo _readCoreCount] */

undefined ** FUN_104948fac(void)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uStack_30;
  uint uStack_24;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = 0x1900000006;
  uStack_30 = 4;
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,&uStack_24,&uStack_30,0,0);
  if ((int)puVar2 != 0) {
    uStack_24 = 0;
  }
  ppuVar3 = (undefined **)(ulong)uStack_24;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  func_0x0001049580ac();
  _objc_alloc();
  func_0x00010bfee200();
  ppuVar4 = ppuVar3;
  func_0x00010c260600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf32da0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110da1e58;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  _objc_retainAutoreleaseReturnValue(ppuVar1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  return ppuVar1;
}



/* Entry: 10494902c; end: 1049490af; +[FBSDKAppEventsDeviceInfo _getCarrier] */

undefined ** FUN_10494902c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x0001049580ac();
  _objc_alloc();
  func_0x00010bfee200();
  ppuVar2 = param_1;
  func_0x00010c260600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf32da0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110da1e58;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retainAutoreleaseReturnValue(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_1);
  return ppuVar1;
}



/* Entry: 1049490b0; end: 1049490b7; -[FBSDKAppEventsDeviceInfo settings] */

undefined8 FUN_1049490b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049490b8; end: 1049490c3; -[FBSDKAppEventsDeviceInfo setSettings:] */

void FUN_1049490b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049490c4; end: 1049490cb; -[FBSDKAppEventsDeviceInfo carrierName] */

undefined8 FUN_1049490c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049490cc; end: 1049490d7; -[FBSDKAppEventsDeviceInfo setCarrierName:] */

void FUN_1049490cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049490d8; end: 1049490df; -[FBSDKAppEventsDeviceInfo timeZoneAbbrev] */

undefined8 FUN_1049490d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049490e0; end: 1049490eb; -[FBSDKAppEventsDeviceInfo setTimeZoneAbbrev:] */

void FUN_1049490e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049490ec; end: 1049490f3; -[FBSDKAppEventsDeviceInfo timeZoneName] */

undefined8 FUN_1049490ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049490f4; end: 1049490ff; -[FBSDKAppEventsDeviceInfo setTimeZoneName:] */

void FUN_1049490f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104949100; end: 104949107; -[FBSDKAppEventsDeviceInfo bundleIdentifier] */

undefined8 FUN_104949100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104949108; end: 104949113; -[FBSDKAppEventsDeviceInfo setBundleIdentifier:] */

void FUN_104949108(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104949114; end: 10494911b; -[FBSDKAppEventsDeviceInfo longVersion] */

undefined8 FUN_104949114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10494911c; end: 104949127; -[FBSDKAppEventsDeviceInfo setLongVersion:] */

void FUN_10494911c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104949128; end: 10494912f; -[FBSDKAppEventsDeviceInfo shortVersion] */

undefined8 FUN_104949128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104949130; end: 10494913b; -[FBSDKAppEventsDeviceInfo setShortVersion:] */

void FUN_104949130(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10494913c; end: 104949143; -[FBSDKAppEventsDeviceInfo sysVersion] */

undefined8 FUN_10494913c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104949144; end: 10494914f; -[FBSDKAppEventsDeviceInfo setSysVersion:] */

void FUN_104949144(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 104949150; end: 104949157; -[FBSDKAppEventsDeviceInfo machine] */

undefined8 FUN_104949150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104949158; end: 104949163; -[FBSDKAppEventsDeviceInfo setMachine:] */

void FUN_104949158(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 104949164; end: 10494916b; -[FBSDKAppEventsDeviceInfo language] */

undefined8 FUN_104949164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10494916c; end: 104949177; -[FBSDKAppEventsDeviceInfo setLanguage:] */

void FUN_10494916c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 104949178; end: 10494917f; -[FBSDKAppEventsDeviceInfo coreCount] */

undefined8 FUN_104949178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104949180; end: 104949187; -[FBSDKAppEventsDeviceInfo setCoreCount:] */

void FUN_104949180(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 104949188; end: 10494918f; -[FBSDKAppEventsDeviceInfo width] */

undefined8 FUN_104949188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104949190; end: 104949197; -[FBSDKAppEventsDeviceInfo setWidth:] */

void FUN_104949190(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 104949198; end: 10494919f; -[FBSDKAppEventsDeviceInfo height] */

undefined8 FUN_104949198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1049491a0; end: 1049491a7; -[FBSDKAppEventsDeviceInfo setHeight:] */

void FUN_1049491a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 1049491a8; end: 1049491af; -[FBSDKAppEventsDeviceInfo density] */

undefined8 FUN_1049491a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1049491b0; end: 1049491b7; -[FBSDKAppEventsDeviceInfo setDensity:] */

void FUN_1049491b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 1049491b8; end: 1049491bf; -[FBSDKAppEventsDeviceInfo lastGroup1CheckTime] */

undefined8 FUN_1049491b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1049491c0; end: 1049491c7; -[FBSDKAppEventsDeviceInfo setLastGroup1CheckTime:] */

void FUN_1049491c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 1049491c8; end: 1049491cf; -[FBSDKAppEventsDeviceInfo isEncodingDirty] */

undefined1 FUN_1049491c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1049491d0; end: 1049491d7; -[FBSDKAppEventsDeviceInfo setIsEncodingDirty:] */

void FUN_1049491d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1049491d8; end: 104949273; -[FBSDKAppEventsDeviceInfo .cxx_destruct] */

void FUN_1049491d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104949274; end: 1049492cf; -[FBSDKAppEventsNumberParser initWithLocale:] */

long FUN_104949274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_storeStrong(param_1 + 8,param_3);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1049492d0; end: 104949527; -[FBSDKAppEventsNumberParser parseNumberFrom:] */

void FUN_1049492d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = *(undefined ***)(param_1 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad1f8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  _objc_retain();
  _objc_release(ppuVar2);
  ppuVar4 = *(undefined ***)(param_1 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3ed8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar2 = ppuVar4;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_3);
  puVar7 = puVar6;
  func_0x00010bfb1800();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c11f2a0(puVar7);
    uVar8 = param_3;
    func_0x00010c260c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    func_0x00010c0d8420();
    func_0x00010c1bf3e0();
    func_0x00010c1d02e0(puVar9);
    puVar10 = puVar9;
    func_0x00010c0de9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar1 = puVar10;
    if (puVar10 == (undefined *)0x0) {
      func_0x00010bfb2c80(uVar8);
      func_0x00010c0df740(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar11;
    }
    _objc_release(puVar9);
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104949528; end: 10494952f; -[FBSDKAppEventsNumberParser locale] */

undefined8 FUN_104949528(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104949530; end: 10494953b; -[FBSDKAppEventsNumberParser setLocale:] */

void FUN_104949530(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10494953c; end: 104949547; -[FBSDKAppEventsNumberParser .cxx_destruct] */

void FUN_10494953c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104949548; end: 104949553; +[FBSDKAppEventsState eventProcessors] */

void FUN_104949548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ced0);
  return;
}



/* Entry: 104949554; end: 104949563; +[FBSDKAppEventsState setEventProcessors:] */

void FUN_104949554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369ced0,param_3);
  return;
}



/* Entry: 104949564; end: 104949637; -[FBSDKAppEventsState initWithToken:appID:] */

undefined1 *
FUN_104949564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  _objc_retain();
  puStack_38 = PTR_PTR_1126e32d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104949638; end: 104949687; -[FBSDKAppEventsState copyWithZone:] */

undefined * FUN_104949638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adde0;
  func_0x00010bf00e40();
  func_0x00010c053e00();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010befa160(*(undefined8 *)(puVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_1 + 8);
  }
  return puVar1;
}



/* Entry: 104949688; end: 10494968f; +[FBSDKAppEventsState supportsSecureCoding] */

undefined8 FUN_104949688(void)

{
  return 1;
}



/* Entry: 104949690; end: 1049498d7; -[FBSDKAppEventsState initWithCoder:] */

undefined * FUN_104949690(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf39c40(puVar1);
  puVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e6f678);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da0b78);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR_PTR_1126add78;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf39c40();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar4;
  func_0x00010bf39c40();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_80 = puVar5;
  func_0x00010bf39c40();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar4;
  func_0x00010bf39c40();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar6,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar6,&PTR____CFConstantStringClassReference_110f15f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0a0(puVar1,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar4 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar6,&PTR____CFConstantStringClassReference_110da1eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = puVar4;
  func_0x00010c2827c0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c053e00(param_1,param_2,puVar3,puVar2);
  if (param_1 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar4 = puVar1;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar5;
    _objc_release(uVar7);
    *(undefined **)(param_1 + 8) = puVar6;
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010bf93020();
  func_0x00010bf93020(puVar4,param_2,*(undefined8 *)(puVar2 + 0x10),
                      &PTR____CFConstantStringClassReference_110da0b78);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(puVar2 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(puVar4,param_2,puVar1,&PTR____CFConstantStringClassReference_110da1eb8);
  _objc_release(puVar1);
  func_0x00010bf93020(puVar4,param_2,*(undefined8 *)(puVar2 + 0x20),
                      &PTR____CFConstantStringClassReference_110f15f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 1049498d8; end: 10494997f; -[FBSDKAppEventsState encodeWithCoder:] */

void FUN_1049498d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110da0b78);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da1eb8);
  _objc_release(puVar1);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f15f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104949980; end: 104949997; -[FBSDKAppEventsState events] */

void FUN_104949980(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104949998; end: 104949a3b; -[FBSDKAppEventsState addEventsFromAppEventState:] */

void FUN_104949998(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_3 + 0x20);
  _objc_retain();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  lVar2 = lVar2 + lVar3 + -1000;
  lVar3 = lVar1;
  if (0 < lVar2) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0(lVar4);
    func_0x00010c25e980(lVar1,param_2,0,1000 - lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + lVar2;
  }
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x20),param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104949a3c; end: 104949b6f; -[FBSDKAppEventsState addEvent:isImplicit:] */

undefined **
FUN_104949a3c(undefined *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *unaff_x22;
  undefined *puVar9;
  undefined **unaff_x23;
  undefined *unaff_x24;
  long lVar10;
  undefined *unaff_x25;
  undefined **ppuVar11;
  long unaff_x26;
  undefined *puStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_298 [128];
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [128];
  long lStack_e0;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar9 = PTR_PTR_1126add78;
  if (uVar1 < 1000) {
    param_1 = *(undefined **)(param_1 + 0x20);
    ppuStack_68 = &PTR____CFConstantStringClassReference_110daee38;
    unaff_x23 = param_3;
    func_0x00010c0d3c80();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110da1ed8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_58 = unaff_x23;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_68,2
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f20(puVar9,param_2,param_1,unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(puVar3);
    _objc_release(unaff_x23);
  }
  else {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    puVar9 = unaff_x22;
  }
  ppuVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_104949b70;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined8 *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  puVar3 = ppuVar8[4];
  ppuStack_1a8 = ppuVar2;
  _objc_retain();
  puStack_1b0 = puVar3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x26 = 1;
    ppuVar8 = (undefined **)*puStack_190;
    unaff_x23 = &PTR____CFConstantStringClassReference_110da1b18;
    param_3 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      param_1 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_190 != ppuVar8) {
          _objc_enumerationMutation(puStack_1b0);
        }
        lVar4 = *(long *)(lStack_198 + (long)param_1 * 8);
        func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110daee38);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 != 0) {
          unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_1c0 = (undefined *)unaff_x26;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110da1ef8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(PTR_PTR_1126add78,param_2,lVar4,unaff_x24,
                              &PTR____CFConstantStringClassReference_110da1f18);
          unaff_x25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_1c0 = unaff_x24;
          lStack_1b8 = lVar10;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110da1f38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(ppuStack_1a8,param_2,unaff_x25);
          unaff_x26 = unaff_x26 + 1;
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
        }
        _objc_release(lVar10);
        _objc_release(lVar4);
        param_1 = param_1 + 1;
      } while (puVar3 != param_1);
      puVar3 = puStack_1b0;
      func_0x00010bf52a60(puStack_1b0,param_2,&uStack_1a0,auStack_160,0x10);
      puVar9 = (undefined *)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puStack_1b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuStack_1a8);
    return ppuStack_1a8;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_2e0;
  pcStack_1c8 = FUN_104949d54;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2d8 = 0;
  puStack_2e0 = (undefined *)0x0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  ppuVar5 = *(undefined ***)(puVar3 + 0x20);
  lStack_210 = unaff_x26;
  puStack_208 = unaff_x25;
  puStack_200 = unaff_x24;
  ppuStack_1f8 = unaff_x23;
  puStack_1f0 = puVar9;
  puStack_1e8 = param_1;
  ppuStack_1e0 = ppuVar8;
  ppuStack_1d8 = param_3;
  ppuStack_1d0 = &puStack_80;
  _objc_retain();
  ppuVar8 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar8 != (undefined **)0x0) {
    lVar10 = *plStack_2d0;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_2d0 != lVar10) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar6 = *(undefined8 *)(lStack_2d8 + (long)ppuVar11 * 8);
        ppuVar2 = &PTR____CFConstantStringClassReference_110da1ed8;
        func_0x00010c296f60(uVar6,param_2,&PTR____CFConstantStringClassReference_110da1ed8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf1f3c0();
        _objc_release(uVar6);
        if ((int)uVar7 == 0) {
          ppuVar8 = (undefined **)0x0;
          goto LAB_104949e40;
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar8 != ppuVar11);
      ppuVar8 = ppuVar5;
      ppuVar2 = &puStack_2e0;
      func_0x00010bf52a60(ppuVar5,param_2,&puStack_2e0,auStack_298,0x10);
    } while (ppuVar8 != (undefined **)0x0);
  }
  ppuVar8 = (undefined **)0x1;
LAB_104949e40:
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar2);
  ppuVar8 = ppuVar2;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar2;
  func_0x00010bf05260(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010c06ed80(ppuVar5,param_2,ppuVar8,ppuVar11);
  _objc_release(ppuVar11);
  _objc_release(ppuVar8);
  return ppuVar5;
}



/* Entry: 104949b70; end: 104949d53; -[FBSDKAppEventsState extractReceiptData] */

undefined * FUN_104949b70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **unaff_x19;
  undefined *puVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar11;
  long unaff_x26;
  undefined *puStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
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
  puVar10 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_138 = puVar10;
  _objc_retain();
  lStack_140 = lVar1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x26 = 1;
    param_1 = *plStack_120;
    unaff_x23 = &PTR____CFConstantStringClassReference_110da1b18;
    unaff_x19 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x21 = 0;
      do {
        if (*plStack_120 != param_1) {
          _objc_enumerationMutation(lStack_140);
        }
        lVar2 = *(long *)(lStack_128 + unaff_x21 * 8);
        func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110daee38);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_150 = (undefined *)unaff_x26;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110da1ef8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(PTR_PTR_1126add78,param_2,lVar2,unaff_x24,
                              &PTR____CFConstantStringClassReference_110da1f18);
          unaff_x25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_150 = unaff_x24;
          lStack_148 = lVar3;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110da1f38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(puStack_138,param_2,unaff_x25);
          unaff_x26 = unaff_x26 + 1;
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
        }
        _objc_release(lVar3);
        _objc_release(lVar2);
        unaff_x21 = unaff_x21 + 1;
      } while (lVar1 != unaff_x21);
      lVar1 = lStack_140;
      func_0x00010bf52a60(lStack_140,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
    return puStack_138;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_270;
  pcStack_158 = FUN_104949d54;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_268 = 0;
  puStack_270 = (undefined *)0x0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar4 = *(undefined **)(lVar1 + 0x20);
  lStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  ppuStack_188 = unaff_x23;
  uStack_180 = unaff_x22;
  lStack_178 = unaff_x21;
  lStack_170 = param_1;
  ppuStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar10 = puVar4;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar1 = *plStack_260;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        uVar5 = *(undefined8 *)(lStack_268 + (long)puVar11 * 8);
        ppuVar7 = &PTR____CFConstantStringClassReference_110da1ed8;
        func_0x00010c296f60(uVar5,param_2,&PTR____CFConstantStringClassReference_110da1ed8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf1f3c0();
        _objc_release(uVar5);
        if ((int)uVar6 == 0) {
          puVar10 = (undefined *)0x0;
          goto LAB_104949e40;
        }
        puVar11 = puVar11 + 1;
      } while (puVar10 != puVar11);
      puVar10 = puVar4;
      ppuVar7 = &puStack_270;
      func_0x00010bf52a60(puVar4,param_2,&puStack_270,auStack_228,0x10);
    } while (puVar10 != (undefined *)0x0);
  }
  puVar10 = (undefined *)0x1;
LAB_104949e40:
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  ppuVar8 = ppuVar7;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar7;
  func_0x00010bf05260(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  func_0x00010c06ed80(puVar4,param_2,ppuVar8,ppuVar9);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  return puVar4;
}



/* Entry: 104949d54; end: 104949e83; -[FBSDKAppEventsState areAllEventsImplicit] */

long FUN_104949d54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  ppuVar4 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  puStack_120 = (undefined *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain();
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        ppuVar4 = &PTR____CFConstantStringClassReference_110da1ed8;
        func_0x00010c296f60(uVar2,param_2,&PTR____CFConstantStringClassReference_110da1ed8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1f3c0();
        _objc_release(uVar2);
        if ((int)uVar3 == 0) {
          lVar7 = 0;
          goto LAB_104949e40;
        }
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar1;
      ppuVar4 = &puStack_120;
      func_0x00010bf52a60(lVar1,param_2,&puStack_120,auStack_d8,0x10);
    } while (lVar7 != 0);
  }
  lVar7 = 1;
LAB_104949e40:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  ppuVar5 = ppuVar4;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010bf05260(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  func_0x00010c06ed80(lVar1,param_2,ppuVar5,ppuVar6);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  return lVar1;
}


