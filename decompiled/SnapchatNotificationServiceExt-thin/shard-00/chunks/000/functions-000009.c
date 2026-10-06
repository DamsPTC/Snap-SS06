/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10003edc8; end: 10003f2c7; -[SCMessagingArroyoAdapter initWithArroyoConfig:userId:snapTokenProvider:grapheneLogger:appGroupPlistStorage:] */

undefined8
FUN_10003edc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    func_0x0001000705e0(param_1,param_2,0,0,0);
    _objc_retain();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028;
    func_0x00010006bfc0(PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x000100074380(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100071be0();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x000100071f40(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,
                        *(undefined4 *)PTR__SCNMessagingTweaksGrpcEnableTracesKey_1000a0418);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(lVar3,param_2,&PTR____CFConstantStringClassReference_1000a4788,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x000100071f40(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,
                        *(undefined4 *)PTR__SCNMessagingTweaksEnableGrpcCronetKey_1000a0410);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(lVar3,param_2,&PTR____CFConstantStringClassReference_1000a4788,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x000100071f40(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,
                        *(undefined4 *)PTR__SCNMessagingTweaksCronetStreamEngineKey_1000a0408);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072640(lVar3,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1000d2070;
    uVar5 = param_7;
    func_0x000100074180(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074600(puVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar6 = puVar4;
    func_0x0001000723c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar4;
      func_0x0001000722e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___SCNMessagingDeviceEncryptionKeyLite_1000d2078;
        _objc_alloc();
        puVar8 = puVar4;
        func_0x0001000723c0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x0001000722e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100070ae0(puVar13,param_2,puVar8,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___SCNMessagingStatelessSessionParameters_1000d2080;
    _objc_alloc(PTR__OBJC_CLASS___SCNMessagingStatelessSessionParameters_1000d2080);
    puVar7 = PTR__OBJC_CLASS___SCAPIAuth_1000d2088;
    func_0x0001000745a0(PTR__OBJC_CLASS___SCAPIAuth_1000d2088);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010006f180(param_3);
    puVar8 = PTR__OBJC_CLASS___SCNMessagingTweaks_1000d2090;
    _objc_alloc(PTR__OBJC_CLASS___SCNMessagingTweaks_1000d2090);
    lVar10 = lVar3;
    func_0x00010006e800(lVar3);
    func_0x000100070d80(puVar8,param_2,lVar10);
    func_0x000100070e40(puVar6,param_2,puVar1,puVar13,puVar7,lVar2,puVar8);
    _objc_release(puVar8);
    _objc_release(lVar10);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000d1f10;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000d1f10);
    func_0x000100070d40();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x000100071f40(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,
                        *(undefined4 *)
                         PTR__SCNMessagingTweaksIosNotifExtensionSchedulerPriority_1000a0420);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x000100072060(lVar3,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010006d160(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70;
    _objc_alloc(PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70);
    puVar9 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x000100073f00(PTR__OBJC_CLASS___NSString_1000d1d68,param_2,
                        "com.snapchat.queue.arroyonative");
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070520(puVar8,param_2,puVar9,uVar5,0,9);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___SCNativeDispatchQueue_1000d2098;
    _objc_alloc(PTR__OBJC_CLASS___SCNativeDispatchQueue_1000d2098);
    func_0x000100070740();
    if (param_6 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___SCNativeGrapheneExtensionLoggerDelegate_1000d20a0;
      _objc_alloc(PTR__OBJC_CLASS___SCNativeGrapheneExtensionLoggerDelegate_1000d20a0);
      func_0x0001000703e0();
    }
    puVar11 = PTR__OBJC_CLASS___SCNMessagingStatelessSession_1000d2030;
    func_0x00010006e8a0(PTR__OBJC_CLASS___SCNMessagingStatelessSession_1000d2030,param_2,puVar6,
                        puVar7,puVar9,puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000705e0(param_1,param_2,puVar11,param_6,param_3);
    _objc_retain();
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 10003f2c8; end: 10003f36b; -[SCMessagingArroyoAdapter initWithNativeSession:grapheneLogger:config:] */

undefined1 *
FUN_10003f2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
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



/* Entry: 10003f36c; end: 10003f787; -[SCMessagingArroyoAdapter arroyoConversationIdentifierFromNotification:] */

void FUN_10003f36c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_78;
  
  if (*(long *)(param_1 + 8) == 0) {
    puVar12 = (undefined *)0x0;
    goto LAB_10003f764;
  }
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar12 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x000100072060(lVar9,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(lVar9);
  lVar9 = lVar1;
  func_0x0001000713a0();
  if (lVar9 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028;
    func_0x00010006bfc0(PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = puVar6;
      func_0x00010006fd60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar12;
      func_0x0001000713a0();
      _objc_release(puVar12);
      puVar12 = (undefined *)0x0;
      if ((((puVar7 != (undefined *)0x0) && (lVar2 != 0)) && (lVar3 != 0)) && (lVar5 != 0)) {
        puVar12 = PTR__OBJC_CLASS___NSNumberFormatter_1000d20a8;
        _objc_alloc_init();
        puVar7 = puVar12;
        func_0x000100071ee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        if (puVar7 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = PTR__OBJC_CLASS___NSNumberFormatter_1000d20a8;
          _objc_alloc_init();
          puVar8 = puVar12;
          func_0x000100071ee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          if (puVar8 == (undefined *)0x0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            if (lVar4 == 0) {
              uStack_78 = (undefined *)0x0;
            }
            else {
              puVar12 = PTR__OBJC_CLASS___NSNumberFormatter_1000d20a8;
              _objc_alloc_init();
              uStack_78 = puVar12;
              func_0x000100071ee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              if (uStack_78 == (undefined *)0x0) {
                puVar12 = (undefined *)0x0;
                goto LAB_10003f724;
              }
            }
            lVar9 = *(long *)(param_1 + 8);
            func_0x00010006f6c0(lVar9,param_2,puVar6);
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 == 0) {
LAB_10003f6a0:
              lVar13 = 0;
            }
            else {
              lVar13 = lVar9;
              func_0x00010006e7a0();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar13;
              func_0x00010006fd60();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar10;
              func_0x0001000713a0();
              _objc_release(lVar10);
              _objc_release(lVar13);
              if (lVar11 == 0) goto LAB_10003f6a0;
              lVar10 = lVar9;
              func_0x00010006e7a0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar10;
              func_0x000100074320();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar10);
            }
            func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,lVar9 != 0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar12 = PTR_PTR_1000d20b0;
            _objc_alloc(PTR_PTR_1000d20b0);
            func_0x000100070b80();
            _objc_release(lVar9);
            _objc_release(lVar13);
            _objc_release(uStack_78);
          }
LAB_10003f724:
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
      }
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_10003f764:
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar12);
  return;
}



/* Entry: 10003f788; end: 10003f887; -[SCMessagingArroyoAdapter consumePayloadOrDeltaSyncToDisk:conversationVersion:decryptedPayloadBytes:callback:] */

void FUN_10003f788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028;
  if (*(long *)(param_1 + 8) == 0) {
    _objc_retain(param_6);
    func_0x000100072080(param_6,param_2,5);
  }
  else {
    _objc_retain(param_6);
    func_0x00010006bfc0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    uVar3 = param_5;
    func_0x0001000713a0(param_5);
    func_0x000100071fa0(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = param_4;
    func_0x0001000717a0(param_4);
    func_0x00010006e680(uVar4,param_2,puVar2,uVar3,param_5,param_6);
    _objc_release(param_6);
    param_6 = puVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10003f888; end: 10003fa1f; -[SCMessagingArroyoAdapter decryptTextMessageContent:messageId:] */

void FUN_10003f888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lStack_48;
  
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0001000717a0(param_4);
  func_0x00010006f300(lVar6,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lVar6;
  func_0x00010006f280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = lVar6;
    func_0x00010006e780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1000d20b8;
      _objc_alloc();
      lVar3 = lVar6;
      func_0x00010006e780(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lStack_48 = 0;
      func_0x000100070280(puVar2,param_2,lVar3,&lStack_48);
      lVar1 = lStack_48;
      _objc_release(lVar3);
      if ((puVar2 == (undefined *)0x0) || (lVar1 != 0)) {
        func_0x00010006cf00(param_1,param_2,&PTR____CFConstantStringClassReference_1000a5ac8);
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar2;
        func_0x000100074200(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x000100074200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      _objc_release(puVar2);
      goto LAB_10003f9fc;
    }
  }
  else {
    _objc_release();
  }
  func_0x00010006f280(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = lVar6;
  func_0x00010006f280(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000100071040();
  func_0x00010006cf20(param_1,param_2,lVar3);
  _objc_release(lVar1);
  puVar5 = (undefined *)0x0;
LAB_10003f9fc:
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
  return;
}



/* Entry: 10003fa20; end: 10003fa43; -[SCMessagingArroyoAdapter _logTextReplyDecryptionFailureWithNativeError:] */

void FUN_10003fa20(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  
  if (param_3 < 6) {
    ppuVar1 = (undefined **)(&PTR_PTR_1000a2b60)[param_3];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a4ae8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s__logTextReplyDecryptionFailure__1000cfbb8,ppuVar1);
  return;
}



/* Entry: 10003fa44; end: 10003fb43; -[SCMessagingArroyoAdapter _logTextReplyDecryptionFailure:] */

void FUN_10003fa44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_alloc();
  uVar4 = *(undefined8 *)PTR__kSCNotifExtDelegateGraphenePartitionName_1000a04e8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a59c8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  uStack_50 = param_3;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070720(puVar1,param_2,uVar4,&PTR____CFConstantStringClassReference_1000a5ba8,puVar3);
  _objc_release(puVar3);
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010006f6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x000100074700(puVar1);
    func_0x000100071f80(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 10003fb44; end: 10003fbab; -[SCMessagingArroyoAdapter getServerVersionFromConversationIdentifier:] */

void FUN_10003fb44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010006f6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000100074700(param_1);
    func_0x000100071f80(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10003fbac; end: 10003fc13; -[SCMessagingArroyoAdapter getLastSeenChatFromConversationIdentifier:] */

void FUN_10003fbac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010006f6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000100071340(param_1);
    func_0x000100071f80(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10003fc14; end: 10003fc7b; -[SCMessagingArroyoAdapter getLastSeenSnapFromConversationIdentifier:] */

void FUN_10003fc14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010006f6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000100071380(param_1);
    func_0x000100071f80(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10003fc7c; end: 10003fce3; -[SCMessagingArroyoAdapter getLastSeenReactionFromConversationIdentifier:] */

void FUN_10003fc7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010006f6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000100071360(param_1);
    func_0x000100071f80(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10003fce4; end: 10003fd4b; -[SCMessagingArroyoAdapter getConversationMetadata:] */

void FUN_10003fce4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028;
    func_0x00010006bfc0(PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010006f6c0(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar2);
  return;
}



/* Entry: 10003fd4c; end: 10003fdc3; -[SCMessagingArroyoAdapter _mapSchedulerPriorityStringToQosClass:] */

undefined4 FUN_10003fd4c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0x11;
  }
  else {
    uVar1 = param_3;
    func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5a88);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5aa8);
      uVar2 = 0x19;
      if ((int)uVar1 == 0) {
        uVar2 = 0x11;
      }
    }
    else {
      uVar2 = 0x15;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10003fdc4; end: 10003fdf3; -[SCMessagingArroyoAdapter .cxx_destruct] */

void FUN_10003fdc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10003fdf4; end: 10003fe9f; -[SCNotifExtArroyoCallbackImpl initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_10003fdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2560;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10003fea0; end: 10003fecb; -[SCNotifExtArroyoCallbackImpl onError:] */

void FUN_10003fea0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010006c3c0();
                    /* WARNING: Could not recover jumptable at 0x00010003fec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



/* Entry: 10003fecc; end: 10003fed7; -[SCNotifExtArroyoCallbackImpl onComplete:] */

void FUN_10003fecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003fed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10003fed8; end: 10003fee3; -[SCNotifExtArroyoCallbackImpl onSuccess] */

void FUN_10003fed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003fee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10003fee4; end: 10003fef7; -[SCNotifExtArroyoCallbackImpl _convertStatus:] */

long FUN_10003fee4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 1;
  if (param_3 - 1U < 0xb) {
    lVar1 = param_3 + 1;
  }
  return lVar1;
}



/* Entry: 10003fef8; end: 10003feff; -[SCNotifExtArroyoCallbackImpl successCallback] */

undefined8 FUN_10003fef8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10003ff00; end: 10003ff07; -[SCNotifExtArroyoCallbackImpl failureCallback] */

undefined8 FUN_10003ff00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10003ff08; end: 10003ff37; -[SCNotifExtArroyoCallbackImpl .cxx_destruct] */

void FUN_10003ff08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10003ff38; end: 1000400ab; -[SCArroyoConversationIdentifier initWithServerId:version:clientId:arroyoPresent:notificationType:arroyoMessageId:reactionId:] */

undefined1 *
FUN_10003ff38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1000d2568;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000400ac; end: 1000400cf; -[SCArroyoConversationIdentifier copyWithZone:] */

undefined8 FUN_1000400ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1000400d0; end: 100040177; -[SCArroyoConversationIdentifier hash] */

undefined8 * FUN_1000400d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010006fd00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010006fd00();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010006fd00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010006fd00();
  uStack_30 = uVar2;
  _SCRemodelHash(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_100040268:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_100040274;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x0001000710e0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x0001000710e0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x0001000710e0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x0001000710e0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x0001000710e0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x0001000710e0();
                  goto LAB_100040274;
                }
                goto LAB_100040268;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_100040274:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 100040178; end: 10004028f; -[SCArroyoConversationIdentifier isEqual:] */

long FUN_100040178(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100040268:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100040274;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x0001000710e0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x0001000710e0();
                  goto LAB_100040274;
                }
                goto LAB_100040268;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_100040274:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100040290; end: 100040297; -[SCArroyoConversationIdentifier serverId] */

undefined8 FUN_100040290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100040298; end: 10004029f; -[SCArroyoConversationIdentifier version] */

undefined8 FUN_100040298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1000402a0; end: 1000402a7; -[SCArroyoConversationIdentifier clientId] */

undefined8 FUN_1000402a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1000402a8; end: 1000402af; -[SCArroyoConversationIdentifier arroyoPresent] */

undefined1 FUN_1000402a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1000402b0; end: 1000402b7; -[SCArroyoConversationIdentifier notificationType] */

undefined8 FUN_1000402b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1000402b8; end: 1000402bf; -[SCArroyoConversationIdentifier arroyoMessageId] */

undefined8 FUN_1000402b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1000402c0; end: 1000402c7; -[SCArroyoConversationIdentifier reactionId] */

undefined8 FUN_1000402c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1000402c8; end: 100040327; -[SCArroyoConversationIdentifier .cxx_destruct] */

void FUN_1000402c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 0x10,0);
  return;
}



/* Entry: 100040328; end: 1000403b3; +[SCMessagingExtensionContents descriptor] */

undefined * FUN_100040328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d52e0,
                        &PTR____CFConstantStringClassReference_1000a5bc8,
                        &PTR_s_snapchat_messaging_extension_1000de638,&PTR_s_text_1000de650,1,0x10,
                        0x1c);
    func_0x000100073960();
    puRam00000001000e94a0 = puVar1;
  }
  return puRam00000001000e94a0;
}



/* Entry: 1000403b4; end: 10004041b; +[SCMessagingExtensionText descriptor] */

void FUN_1000403b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5330,
                        &PTR____CFConstantStringClassReference_1000a5be8,
                        &PTR_s_snapchat_messaging_extension_1000de638,&PTR_s_text_1000de670,1,0x10,
                        0x1c);
    puRam00000001000e94a8 = puVar1;
  }
  return;
}



/* Entry: 10004041c; end: 1000404e7;  */

bool FUN_10004041c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010006ef00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100071100();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_1;
      func_0x00010006e500();
      if ((((lVar2 == -0x3e9) || (lVar2 = param_1, func_0x00010006e500(), lVar2 == -0x3f1)) ||
          (lVar2 = param_1, func_0x00010006e500(), lVar2 == -0x3ed)) ||
         (lVar2 = param_1, func_0x00010006e500(), lVar2 == -0x3eb)) {
        bVar1 = true;
      }
      else {
        lVar2 = param_1;
        func_0x00010006e500(param_1);
        bVar1 = lVar2 == -0x3ec;
      }
      goto LAB_1000404b8;
    }
  }
  bVar1 = false;
LAB_1000404b8:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1000404e8; end: 10004055b; -[SCReceiveMessageLoggerServices initWithLoadMessageLogger:] */

undefined1 * FUN_1000404e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2570;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10004055c; end: 100040563; -[SCReceiveMessageLoggerServices loadMessageLogger] */

undefined8 FUN_10004055c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100040564; end: 10004056f; -[SCReceiveMessageLoggerServices .cxx_destruct] */

void FUN_100040564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100040570; end: 10004065b; -[SCLoadMessageTimestamp initWithCoder:] */

undefined1 *
FUN_100040570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1000d2578;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb20();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x00010006eb00(param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    func_0x00010006eb00(param_4);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_4;
    func_0x00010006eb20();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_4;
    func_0x00010006eb20();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10004065c; end: 10004070b; -[SCLoadMessageTimestamp initWithMediaId:step:startTimestampSeconds:endTimestampSeconds:timestampType:result:] */

undefined1 *
FUN_10004065c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1000d2578;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10004070c; end: 10004072f; -[SCLoadMessageTimestamp copyWithZone:] */

undefined8 FUN_10004070c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100040730; end: 1000407df; -[SCLoadMessageTimestamp encodeWithCoder:] */

void FUN_100040730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0001000727e0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_1000a5c08);
  func_0x00010006f200(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_1000a5c28);
  func_0x00010006f1e0(*(undefined8 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_1000a5c48);
  func_0x00010006f1e0(*(undefined8 *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_1000a5c68);
  func_0x00010006f200(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_1000a5c88);
  func_0x00010006f200(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_1000a5ca8);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000407e0; end: 10004087b; -[SCLoadMessageTimestamp hash] */

undefined8 * FUN_1000407e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010006fd00();
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar2;
  _SCHashDouble(*(undefined8 *)(param_1 + 0x18));
  uStack_48 = uVar2;
  _SCHashDouble(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  puVar3 = &uStack_58;
  uStack_40 = uVar2;
  _SCRemodelHash(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10004097c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_100040988;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[2] == param_3[2] && (puVar3[5] == param_3[5])) && (puVar3[6] == param_3[6])))) {
      dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
      dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
        dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar1 = dVar8 < dVar7;
        }
        if (bVar1) {
          puVar6 = (undefined8 *)puVar3[1];
          if (puVar6 != (undefined8 *)param_3[1]) {
            func_0x0001000710e0();
            goto LAB_100040988;
          }
          goto LAB_10004097c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_100040988:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10004087c; end: 1000409a3; -[SCLoadMessageTimestamp isEqual:] */

long FUN_10004087c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10004097c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100040988;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 8);
          if (lVar4 != *(long *)(param_3 + 8)) {
            func_0x0001000710e0();
            goto LAB_100040988;
          }
          goto LAB_10004097c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_100040988:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1000409a4; end: 1000409ab; -[SCLoadMessageTimestamp mediaId] */

undefined8 FUN_1000409a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000409ac; end: 1000409b3; -[SCLoadMessageTimestamp step] */

undefined8 FUN_1000409ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1000409b4; end: 1000409bb; -[SCLoadMessageTimestamp startTimestampSeconds] */

undefined8 FUN_1000409b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1000409bc; end: 1000409c3; -[SCLoadMessageTimestamp endTimestampSeconds] */

undefined8 FUN_1000409bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1000409c4; end: 1000409cb; -[SCLoadMessageTimestamp timestampType] */

undefined8 FUN_1000409c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1000409cc; end: 1000409d3; -[SCLoadMessageTimestamp result] */

undefined8 FUN_1000409cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1000409d4; end: 1000409df; -[SCLoadMessageTimestamp .cxx_destruct] */

void FUN_1000409d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000409e0; end: 1000409f3; -[SCNonFriendStoriesNotificationBadgeUpdater badgeCountProviderType] */

void FUN_1000409e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000723f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30,
             PTR_s_pushTypeWithTypes__1000d10f0,&PTR__OBJC_CLASS___NSConstantArray_1000abdd8);
  return;
}



/* Entry: 1000409f4; end: 100040a47; -[SCNonFriendStoriesNotificationBadgeUpdater provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_1000409f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  _objc_retain(param_5);
  func_0x00010006e840(param_3);
  if (param_4 != 0) {
    param_3 = param_3 + 1;
  }
  (**(code **)(param_5 + 0x10))(param_5,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_5);
  return;
}



/* Entry: 100040a48; end: 100040b2b; -[SCNonFriendStoriesNotificationModifier initWithProcessingScope:] */

undefined8 FUN_100040a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100040b2c;
  puStack_40 = &UNK_1000a2558;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1000d1e98;
  _objc_alloc(PTR_PTR_1000d1e98);
  func_0x0001000707c0();
  func_0x0001000708c0(param_1,param_2,param_3,puVar2,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 100040b2c; end: 100040b5b;  */

void FUN_100040b2c(void)

{
  _objc_alloc(PTR_PTR_1000d1ea0);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100040b5c; end: 100040c27; -[SCNonFriendStoriesNotificationModifier initWithProcessingScope:avatar:intentDonatorLazy:] */

undefined1 *
FUN_100040b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1000d2580;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100040c28; end: 100040f27; -[SCNonFriendStoriesNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100040c28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000100071be0();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar8);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000100071be0();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _objc_release(uVar8);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001000713a0();
  if (lVar3 == 0) {
    func_0x0001000720a0(param_4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x000100072060(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000713a0();
    lVar3 = lVar2;
    func_0x000100073fc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010006d660();
    if ((int)lVar5 != 0) {
      _SCNotifExtModifyContentForCommNotif
                (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),1);
      func_0x000100073360(*(undefined8 *)(param_1 + 0x28));
      func_0x000100073800(*(undefined8 *)(param_1 + 0x20));
    }
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    lVar7 = lVar6;
    func_0x0001000713a0();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    if (lVar7 == 0) {
      puVar9 = auStack_b0;
      _objc_copyWeak(puVar9,auStack_68);
      uStack_a8 = (char)lVar5;
      _objc_retain(param_4);
      func_0x00010006f000(uVar1);
      uVar1 = param_4;
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_100040f28;
      puStack_88 = &UNK_1000a2b90;
      puVar9 = auStack_78;
      _objc_copyWeak(puVar9,auStack_68);
      uStack_70 = (char)lVar5;
      _objc_retain(param_4);
      uStack_80 = param_4;
      func_0x00010006f040(uVar1);
      uVar1 = uStack_80;
    }
    _objc_release(uVar1);
    _objc_destroyWeak(puVar9);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100040f28; end: 100040fb7;  */

void FUN_100040f28(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010006c700();
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100040fb8; end: 100040fdf; -[SCNonFriendStoriesNotificationModifier bestAttemptContent] */

void FUN_100040fb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100040fe0; end: 100041053; -[SCNonFriendStoriesNotificationModifier _shouldEnableConvoStyleForCorpus:] */

ulong FUN_100040fe0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5d08);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5d28),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5d48);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 100041054; end: 1000411b3; -[SCNonFriendStoriesNotificationModifier _handleAddAttachmentWithSuccess:convoStyleEnabled:withModifierCallback:] */

void FUN_100041054(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = param_5;
  _objc_retain();
  iVar1 = (int)uVar2;
  _SCNotifExtPhoneSupportsCommNotif();
  if ((param_4 == 0) || (iVar1 == 0)) {
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001000720a0(param_5,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000100074180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x100041148;
    puStack_48 = &UNK_1000a25b8;
    _objc_retain(param_5);
    uStack_40 = param_5;
    lStack_38 = param_1;
    func_0x00010006ef80(uVar2,param_2,uVar3,0,&puStack_60);
    _objc_release(uVar2);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1000411b4; end: 100041207; -[SCNonFriendStoriesNotificationModifier .cxx_destruct] */

void FUN_1000411b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100041208; end: 10004129b; -[SCNonFriendStoriesNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100041208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10004129c; end: 1000412cb; -[SCNonFriendStoriesNotificationModifierProvider getModifier:] */

void FUN_10004129c(void)

{
  _objc_alloc(PTR_PTR_1000d20c0);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000412cc; end: 1000412d3; -[SCNonFriendStoriesNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_1000412cc(void)

{
  return 0;
}



/* Entry: 1000412d4; end: 10004135f; -[SCNonFriendStoriesNotificationModifierProvider getBadgeCountProviders] */

void FUN_1000412d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d20c8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 100041360; end: 10004138f; -[SCNonFriendStoriesNotificationModifierProvider .cxx_destruct] */

void FUN_100041360(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100041390; end: 100041433; -[SCNotifExtFriendingAvatarAdder initWithProcessingScope:] */

undefined1 * FUN_100041390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2590;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1000d1e98;
    _objc_alloc();
    func_0x0001000707c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100041434; end: 1000414db; -[SCNotifExtFriendingAvatarAdder addAvatarWithMutableNotificationContent:completionHandler:] */

void FUN_100041434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1000414dc;
  puStack_40 = &UNK_1000a27c0;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010006efe0(uVar1,param_2,param_3,&PTR____CFConstantStringClassReference_1000a5d68,0xe,1,
                      &puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1000414dc; end: 100041523;  */

void FUN_1000414dc(long param_1,undefined8 param_2)

{
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x000100041520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 100041524; end: 100041553; -[SCNotifExtFriendingAvatarAdder .cxx_destruct] */

void FUN_100041524(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100041554; end: 100041643; -[SCNotifExtFriendingCampaignNotificationBadgeCountProvider initWithGrapheneExtensionLogger:friendingUserDefaults:notificationCenter:] */

undefined1 *
FUN_100041554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1000d2598;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d20d0;
    _objc_alloc();
    func_0x000100070400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100041644; end: 100041747; -[SCNotifExtFriendingCampaignNotificationBadgeCountProvider badgeCountProviderType] */

void FUN_100041644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR__OBJC_CLASS___NSSet_1000d2058;
  func_0x0001000738a0(PTR__OBJC_CLASS___NSSet_1000d2058,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_1000abdf0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30;
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006f380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  func_0x00010006c640(puVar1);
  (**(code **)(param_5 + 0x10))(param_5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_5);
  return;
}



/* Entry: 100041748; end: 1000417a3; -[SCNotifExtFriendingCampaignNotificationBadgeCountProvider provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_100041748(undefined8 param_1)

{
  long in_x4;
  
  _objc_retain(in_x4);
  func_0x00010006c640(param_1);
  (**(code **)(in_x4 + 0x10))(in_x4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(in_x4);
  return;
}



/* Entry: 1000417a4; end: 1000418c3; -[SCNotifExtFriendingCampaignNotificationBadgeCountProvider _fullBadgeCountWithNotifications:incomingNotification:] */

long FUN_1000417a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010006e840(param_3);
  lVar2 = param_4;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x000100072060(lVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((param_4 != 0) && (lVar1 = lVar1 + 1, lVar5 != 0)) {
    func_0x00010006c880(param_1,param_2,lVar5);
    func_0x0001000715a0(*(undefined8 *)(param_1 + 0x10),param_2,lVar5);
  }
  func_0x00010006d8a0(param_1,param_2,param_3,lVar5,lVar1);
  _objc_release(lVar5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1000418c4; end: 10004196b; -[SCNotifExtFriendingCampaignNotificationBadgeCountProvider _trimmedBadgeCountWithNotifications:incomingNotificationType:originalBadgeCount:] */

undefined8
FUN_1000418c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_4;
  _objc_retain();
  FUN_1000479c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010006e6e0();
  _objc_release(param_4);
  _objc_release(uVar3);
  uVar3 = param_5;
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010006e420(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    FUN_100047a3c(uVar3,param_3,lVar2 + -1,param_5);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10004196c; end: 100041a5b; -[SCNotifExtFriendingCampaignNotificationBadgeCountProvider _incrementLoggingForType:] */

void FUN_10004196c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070720(puVar1);
  _objc_release(puVar2);
  func_0x00010006ff00(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 100041a5c; end: 100041aa3; -[SCNotifExtFriendingCampaignNotificationBadgeCountProvider .cxx_destruct] */

void FUN_100041a5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100041aa4; end: 100041baf; -[SCNotifExtFriendingFriendAddNotificationBadgeCountProvider initWithProcessingScope:userId:grapheneExtensionLogger:] */

undefined8
FUN_100041aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010006f5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1000d20d8;
  _objc_alloc(PTR_PTR_1000d20d8);
  func_0x000100070de0();
  puVar3 = PTR_PTR_1000d20e0;
  _objc_alloc(PTR_PTR_1000d20e0);
  func_0x000100070de0();
  _objc_release(param_4);
  uVar4 = param_3;
  func_0x00010006e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0001000703c0(param_1,param_2,uVar1,puVar2,puVar3,param_5,uVar4);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100041bb0; end: 100041cef; -[SCNotifExtFriendingFriendAddNotificationBadgeCountProvider initWithFriendingUserDefaults:mainAppUnviewedIncomingFriendsFetcher:unviewedIncomingFriendsNotInMainRepository:grapheneExtensionLogger:clientPayloadOptional:] */

undefined1 *
FUN_100041bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1000d25a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x0001000744a0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d20d0;
    _objc_alloc();
    func_0x000100070400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100041cf0; end: 100041dcb; -[SCNotifExtFriendingFriendAddNotificationBadgeCountProvider badgeCountProviderType] */

void FUN_100041cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR__OBJC_CLASS___NSSet_1000d2058;
  func_0x0001000738a0(PTR__OBJC_CLASS___NSSet_1000d2058,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_1000abe08);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30;
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010006f380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(param_5);
  puVar5 = puVar6;
  func_0x00010006e720(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x000100072060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar5 = *(undefined **)(puVar1 + 0x38);
  func_0x000100072120();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar2 = puVar6;
    func_0x00010006e720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010006e720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar5;
    func_0x00010006f340();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010006f360();
    if ((int)puVar3 != 0xb) {
      puVar9 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
      goto LAB_100041f7c;
    }
    puVar3 = puVar2;
    func_0x00010006f5a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x0001000746a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
LAB_100041f7c:
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010006d8c0(puVar1);
  func_0x0001000715a0(*(undefined8 *)(puVar1 + 0x30));
  (**(code **)(param_5 + 0x10))(param_5,puVar2);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar6);
  return;
}



/* Entry: 100041dcc; end: 100041fff; -[SCNotifExtFriendingFriendAddNotificationBadgeCountProvider provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_100041dcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = param_4;
  func_0x00010006e720(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000100072060(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x000100072120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar1 = param_4;
    func_0x00010006e720(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010006e720(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = lVar4;
    func_0x00010006f340();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010006f360();
    if ((int)lVar5 != 0xb) {
      lVar7 = 0;
      lVar6 = 0;
      goto LAB_100041f7c;
    }
    lVar5 = lVar1;
    func_0x00010006f5a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x0001000746a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
LAB_100041f7c:
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010006d8c0(param_1);
  func_0x0001000715a0(*(undefined8 *)(param_1 + 0x30));
  (**(code **)(param_5 + 0x10))(param_5,lVar1);
  _objc_release(param_5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 100042000; end: 10004215f; -[SCNotifExtFriendingFriendAddNotificationBadgeCountProvider _unviewedIncomingFriendsBadgeNumberOfType:incomingFriendUserId:incomingFriendUsername:] */

long FUN_100042000(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010006f8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010006f8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    if ((((param_3 != 0) && (lVar6 = param_3, func_0x0001000438f0(), param_4 != 0)) &&
        ((int)lVar6 != 0)) &&
       ((uVar3 = uVar1, func_0x00010006e6e0(uVar1,param_2,param_4), (uVar3 & 1) == 0 &&
        (uVar3 = uVar2, func_0x00010006e6e0(uVar2,param_2,param_4), (uVar3 & 1) == 0)))) {
      puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
      _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
      func_0x000100070720();
      func_0x00010006ff00(*(undefined8 *)(param_1 + 0x28),param_2,puVar4,1);
      func_0x00010006dba0(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
      uVar5 = *(ulong *)(param_1 + 0x20);
      func_0x00010006f8e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
    uVar2 = uVar1;
    func_0x00010006e840(uVar1);
    uVar3 = uVar5;
    func_0x00010006e840(uVar5);
    lVar6 = uVar3 + uVar2;
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    lVar6 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 100042160; end: 1000421bf; -[SCNotifExtFriendingFriendAddNotificationBadgeCountProvider .cxx_destruct] */

void FUN_100042160(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000421c0; end: 100042267; -[SCNotifExtMainAppUnviewedFriendsFetcher initWithUserId:] */

undefined1 * FUN_1000421c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d25a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
    _objc_alloc();
    func_0x000100070000();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100042268; end: 10004230b; -[SCNotifExtMainAppUnviewedFriendsFetcher initWithUserId:extensionSharedFile:] */

undefined1 *
FUN_100042268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d25a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
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



/* Entry: 10004230c; end: 1000423ff; -[SCNotifExtMainAppUnviewedFriendsFetcher getUnviewedIncomingFriendUserIds] */

void FUN_10004230c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001000724e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006ffa0();
  _objc_release(uVar2);
  func_0x000100073560(puVar1);
  puVar3 = puVar1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1000d2058;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1000d2058);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  puVar4 = puVar3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSSet_1000d2058;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1000d2058);
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
  return;
}



/* Entry: 100042400; end: 10004242f; -[SCNotifExtMainAppUnviewedFriendsFetcher .cxx_destruct] */

void FUN_100042400(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100042430; end: 1000424d7; -[SCNotifExtUnviewedFriendsNotInMainRepository initWithUserId:] */

undefined1 * FUN_100042430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d25b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
    _objc_alloc();
    func_0x000100070000();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000424d8; end: 10004257b; -[SCNotifExtUnviewedFriendsNotInMainRepository initWithUserId:extensionSharedFile:] */

undefined1 *
FUN_1000424d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d25b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
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



/* Entry: 10004257c; end: 10004266f; -[SCNotifExtUnviewedFriendsNotInMainRepository getUnviewedIncomingFriendUserIds] */

void FUN_10004257c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001000724e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006ffa0();
  _objc_release(uVar2);
  func_0x000100073560(puVar1);
  puVar3 = puVar1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1000d2058;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1000d2058);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  puVar4 = puVar3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSSet_1000d2058;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1000d2058);
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
  return;
}



/* Entry: 100042670; end: 10004270f; -[SCNotifExtUnviewedFriendsNotInMainRepository addUnviewedIncomingFriendUserId:] */

void FUN_100042670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = 0;
  puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100042710;
  puStack_30 = &UNK_1000a1fb8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100071b60(uVar1,param_2,&puStack_48,&uStack_50);
  uVar1 = uStack_50;
  _objc_retain(uStack_50);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 100042710; end: 10004282f;  */

void FUN_100042710(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010006ffa0();
  _objc_release(param_2);
  func_0x000100073560(puVar1);
  puVar2 = puVar1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1000d1db8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableSet_1000d1db8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1000d1db8;
    func_0x0001000738c0(PTR__OBJC_CLASS___NSMutableSet_1000d1db8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010006dae0(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
  func_0x00010006dd60(PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 100042830; end: 10004285f; -[SCNotifExtUnviewedFriendsNotInMainRepository .cxx_destruct] */

void FUN_100042830(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100042860; end: 1000429d7; -[SCNotifExtIncomingFriendsSyncGRPCService initWithUserSession:isRankingEnabled:grapheneExtensionLogger:] */

undefined1 *
FUN_100042860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1000d25b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010006c440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
    _objc_alloc();
    uVar4 = param_3;
    func_0x0001000745e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070000();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
    _objc_alloc();
    uVar4 = param_3;
    func_0x0001000745e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070000();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x20) = param_4;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000429d8; end: 100042beb; -[SCNotifExtIncomingFriendsSyncGRPCService _createUNIFriendRequestsWithUserSession:] */

void FUN_1000429d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_1000d20e8;
  _objc_retain(param_3);
  func_0x00010006e3a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072ec0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001000735a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000100073740(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000100072c20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000100073640(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010006dfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x0001000745e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x0001000746a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar2;
  _sc_extensionSnapTokenProvider(uVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000d1f10;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000d1f10);
  func_0x000100070d40();
  puVar7 = PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70;
  _objc_alloc(PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70);
  func_0x000100070520();
  puVar8 = PTR__OBJC_CLASS___SCNativeDispatchQueue_1000d2098;
  _objc_alloc(PTR__OBJC_CLASS___SCNativeDispatchQueue_1000d2098);
  func_0x000100070740();
  puVar9 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_1000d20f0;
  func_0x00010006e8c0(PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_1000d20f0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1000d20f8;
  _objc_alloc(PTR_PTR_1000d20f8);
  func_0x000100070dc0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar10);
  return;
}



/* Entry: 100042bec; end: 100042d47; -[SCNotifExtIncomingFriendsSyncGRPCService syncIncomingFriendsWithQueue:completion:] */

void FUN_100042bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1000d2100;
  _objc_opt_new(PTR_PTR_1000d2100);
  lVar2 = param_1;
  func_0x00010006d3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000736c0(puVar1);
  _objc_release(lVar2);
  func_0x000100073040(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010006fee0(uVar3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100042d48; end: 100042e73;  */

void FUN_100042d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010006d480();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 == 0) {
      lVar1 = 0x15;
      _SCDispatchGetGlobalQueue(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_1 + 0x28);
    }
    puStack_78 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_100042e74;
    puStack_60 = &UNK_1000a2bc0;
    _objc_retain(lVar2);
    lStack_48 = lVar2;
    _objc_retain(param_2);
    uStack_58 = param_2;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _dispatch_async(lVar1,&puStack_78);
    if (lVar3 == 0) {
      _objc_release(lVar1);
    }
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


