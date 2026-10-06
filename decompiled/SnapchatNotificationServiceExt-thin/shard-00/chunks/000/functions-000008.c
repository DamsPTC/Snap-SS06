/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100038470; end: 1000388bb; -[SCMessagingNotificationModifier _addAvatarAndDonateIntentMaybeWithCallback:] */

void FUN_100038470(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010006d6c0();
    if ((int)lVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010006e640();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x000100073aa0();
      _objc_release(uVar5);
      if ((int)uVar6 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x58));
        goto LAB_100038758;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x000100074180(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010006d9e0(uVar6);
      _objc_release(uVar6);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x000100074620();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = 
      PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
      func_0x0001000743a0(
                         PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                         );
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x000100034e4c();
      _objc_release(uVar6);
      _objc_release(puVar4);
      _objc_release();
      iVar1 = (int)uVar3;
      _SCNotifExtPhoneSupportsLeftImageOnCommNotif();
      if ((iVar1 == 0) || ((int)uVar5 != 0)) {
        puVar4 = PTR_PTR_1000d1f98;
        func_0x000100071200();
        uVar7 = (uint)puVar4 ^ 1;
      }
      else {
        uVar7 = 0;
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010006e640();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x000100073aa0();
      _objc_release(uVar5);
      if (((int)uVar6 == 0) || (uVar7 == 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        func_0x000100074180(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x58);
        func_0x000100074620(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
        func_0x0001000743a0(
                           PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                           );
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x000100072060(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100034e70();
        _objc_retain(param_3);
        func_0x00010006ef80(uVar5);
        _objc_release(uVar6);
        _objc_release(puVar4);
        _objc_release(uVar3);
        _objc_release(uVar5);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        func_0x000100074180(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010006d9e0(uVar6);
        _objc_release(uVar6);
      }
    }
    _objc_release(param_3);
  }
LAB_100038758:
  _objc_release(param_3);
  return;
}



/* Entry: 1000388bc; end: 10003892b;  */

void FUN_1000388bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  if (param_3 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003892c; end: 10003895f;  */

void FUN_10003892c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 100038960; end: 1000389cf;  */

void FUN_100038960(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  if (param_3 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000389d0; end: 100038a13;  */

void FUN_1000389d0(long param_1,undefined8 param_2)

{
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x000100038a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
  return;
}



/* Entry: 100038a14; end: 100038cab; -[SCMessagingNotificationModifier _addDecryptedTextReplyInfo] */

void FUN_100038a14(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010006eba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar7 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x0001000713a0();
  puVar4 = PTR__OBJC_CLASS___NSData_1000d1e40;
  if (uVar3 == 0) {
    func_0x00010006e9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010006ea20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSData_1000d1e40;
    func_0x00010006e9c0(PTR__OBJC_CLASS___NSData_1000d1e40);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(param_1 + 0x48);
  func_0x00010006de80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010006dea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    func_0x00010006cea0(param_1);
    uVar7 = *(ulong *)(param_1 + 0x48);
    func_0x00010006eb80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x000100071180();
    uVar3 = uVar7;
    if (((ulong)puVar8 & 1) == 0) {
      uVar9 = uVar7;
      func_0x0001000713a0();
      if (100 < uVar9) {
        uVar9 = uVar7;
        func_0x000100073fa0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x000100073e20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x000100073e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar10);
        _objc_release(uVar9);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010006e440();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = 
      PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
      ;
      func_0x0001000741c0(
                         PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
                         );
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x000100071100();
      _objc_release(puVar8);
      _objc_release(uVar11);
      if ((int)uVar12 == 0) {
        func_0x000100072c00(*(undefined8 *)(param_1 + 0x58));
      }
      else {
        puVar8 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
        ;
        func_0x0001000741e0(
                           PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
                           );
        _objc_retainAutoreleasedReturnValue();
        func_0x000100072c00(*(undefined8 *)(param_1 + 0x58));
        _objc_release(puVar8);
      }
      func_0x000100073360(*(undefined8 *)(param_1 + 0x60));
      func_0x00010006cee0(param_1);
    }
    else {
      func_0x00010006cec0(param_1);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar2);
  return;
}



/* Entry: 100038cac; end: 100038f5f; -[SCMessagingNotificationModifier _addAdditionalAttachmentsMaybeToContent:] */

void FUN_100038cac(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010006d6c0();
  lVar8 = param_3;
  if ((uVar1 & 1) != 0) {
    lVar2 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100072060(lVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1000d1fa0;
    func_0x000100071220(PTR_PTR_1000d1fa0,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar9);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100072060(lVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1000d1fa0;
    func_0x0001000710a0(PTR_PTR_1000d1fa0,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar9);
    _objc_release(lVar2);
    if ((((ulong)puVar4 & 1) != 0) || (((ulong)puVar5 & 1) != 0)) {
      if (((ulong)puVar4 & 1) == 0) {
        puVar9 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0
        ;
        func_0x00010006e480();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = param_3;
        func_0x000100074620();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if (lVar3 == 0) {
LAB_100038ebc:
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar9 = 
          PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationMediaType_1000d1fa8
          ;
          func_0x000100074720(
                             PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationMediaType_1000d1fa8
                             );
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar3;
          func_0x000100071100(lVar3,param_2,puVar9);
          _objc_release(puVar9);
          if ((int)lVar6 == 0) {
            puVar9 = 
            PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationMediaType_1000d1fa8
            ;
            func_0x000100073ae0(
                               PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationMediaType_1000d1fa8
                               );
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar3;
            func_0x000100071100(lVar3,param_2,puVar9);
            _objc_release(puVar9);
            if ((int)lVar6 == 0) goto LAB_100038ebc;
            puVar9 = 
            PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0
            ;
            func_0x000100073ae0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar9 = 
            PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0
            ;
            func_0x00010006df80();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        _objc_release(lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      if (puVar9 == (undefined *)0x0) {
        _objc_retain(param_3);
      }
      else {
        lVar2 = param_3;
        func_0x000100071be0();
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x000100074180(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006dac0();
        _objc_release(uVar7);
        lVar8 = lVar2;
        func_0x00010006e800(lVar2);
        _objc_release(lVar2);
      }
      _objc_release(puVar9);
      goto LAB_100038f3c;
    }
  }
  _objc_retain(param_3);
LAB_100038f3c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar8);
  return;
}



/* Entry: 100038f60; end: 100039043; -[SCMessagingNotificationModifier _shouldSuppressNotification:] */

uint FUN_100038f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100072060(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_100034e28();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if ((int)uVar5 == 0) {
    func_0x000100071160(uVar6,param_2,param_3);
    uVar1 = (uint)uVar6;
  }
  else {
    func_0x000100071260();
    uVar1 = (uint)uVar6;
  }
  _objc_release(param_3);
  return uVar1 ^ 1;
}



/* Entry: 100039044; end: 1000390af; -[SCMessagingNotificationModifier _shouldSendCommunicationNotification] */

uint FUN_100039044(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100074640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010006e360();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = (uint)uVar2;
  _SCNotifExtPhoneSupportsCommNotif();
  return uVar1 & (uint)uVar4;
}



/* Entry: 1000390b0; end: 10003910f; -[SCMessagingNotificationModifier _logTextReplyContentAttempt] */

void FUN_1000390b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x50),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 100039110; end: 10003916f; -[SCMessagingNotificationModifier _logTextReplyContentSuccess] */

void FUN_100039110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x50),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 100039170; end: 1000391cf; -[SCMessagingNotificationModifier _logTextReplyContentSkipped] */

void FUN_100039170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x50),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 1000391d0; end: 10003928f; -[SCMessagingNotificationModifier .cxx_destruct] */

void FUN_1000391d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100039290; end: 1000393af; -[SCMessagingNotificationModifierProvider initWithProcessingScope:arroyoAdapter:] */

undefined1 *
FUN_100039290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2508;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x000100074680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d1fd0;
    _objc_alloc();
    func_0x000100070060();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000393b0; end: 1000393e3; -[SCMessagingNotificationModifierProvider getModifier:] */

void FUN_1000393b0(void)

{
  _objc_alloc(PTR_PTR_1000d1fd8);
  func_0x0001000709a0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000393e4; end: 10003952b; -[SCMessagingNotificationModifierProvider getTaskHandlers:] */

void FUN_1000393e4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_100034e28();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100074120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((param_3 & 1) == 0) && ((int)uVar3 == 0)) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
    puVar4 = PTR_PTR_1000d1fe0;
    _objc_alloc(PTR_PTR_1000d1fe0);
    func_0x0001000709a0();
    func_0x00010006dae0(puVar5,param_2,puVar4);
    _objc_release(puVar4);
    if ((*(long *)(param_1 + 0x18) == 0) || (func_0x000100073a60(), (int)param_1 == 0))
    goto LAB_100039514;
    puVar4 = PTR_PTR_1000d1fe8;
    _objc_alloc(PTR_PTR_1000d1fe8);
    func_0x000100070820();
    func_0x00010006dae0(puVar5,param_2,puVar4);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_100039514:
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
  return;
}



/* Entry: 10003952c; end: 1000396af; -[SCMessagingNotificationModifierProvider getSDNTaskHandlers:] */

void FUN_10003952c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000100074120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
    lVar4 = param_3;
    func_0x00010006f360();
    if (((int)lVar4 == 8) || ((int)lVar4 == 4)) {
      puVar5 = PTR_PTR_1000d1ff0;
      _objc_alloc(PTR_PTR_1000d1ff0);
      func_0x0001000709a0();
      func_0x00010006dae0(puVar7,param_2,puVar5);
      _objc_release(puVar5);
      lVar4 = param_3;
      func_0x00010006f360();
      lVar6 = param_3;
      if ((int)lVar4 == 8) {
        func_0x000100073ba0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if ((int)lVar4 != 4) goto LAB_100039690;
        func_0x00010006e460();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar4 = lVar6;
      func_0x000100071a80();
      _objc_release(lVar6);
      if (((lVar4 != 0) && (*(long *)(param_1 + 0x18) != 0)) &&
         (func_0x000100073a60(), (int)param_1 != 0)) {
        puVar5 = PTR_PTR_1000d1ff8;
        _objc_alloc(PTR_PTR_1000d1ff8);
        func_0x000100070980();
        func_0x00010006dae0(puVar7,param_2,puVar5);
        _objc_release(puVar5);
      }
    }
  }
  else {
    puVar7 = (undefined *)0x0;
  }
LAB_100039690:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar7);
  return;
}



/* Entry: 1000396b0; end: 10003974f; -[SCMessagingNotificationModifierProvider getBadgeCountProviders] */

void FUN_1000396b0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = (uint)&puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR_PTR_1000d2000;
  _objc_alloc();
  func_0x0001000709c0();
  puStack_30 = puVar2;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_28) {
    ___stack_chk_fail();
    func_0x00010006f360();
    if ((uVar1 < 9) && ((1 << (ulong)(uVar1 & 0x1f) & 0x118U) != 0)) {
      _objc_alloc(PTR_PTR_1000d2008);
      func_0x000100070060();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100039750; end: 1000397ab; -[SCMessagingNotificationModifierProvider getSuppressor:] */

void FUN_100039750(undefined8 param_1,undefined8 param_2,uint param_3)

{
  func_0x00010006f360();
  if ((param_3 < 9) && ((1 << (ulong)(param_3 & 0x1f) & 0x118U) != 0)) {
    _objc_alloc(PTR_PTR_1000d2008);
    func_0x000100070060();
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000397ac; end: 100039863; -[SCMessagingNotificationModifierProvider getSDNDisplayModifier:] */

void FUN_1000397ac(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010006f360();
  if ((param_3 == 8) || (param_3 == 4)) {
    puVar3 = PTR_PTR_1000d2010;
    _objc_alloc(PTR_PTR_1000d2010);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000100071d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010006f900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070640(puVar3,param_2,uVar1,uVar4,uVar2,*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 100039864; end: 10003996b; -[SCMessagingNotificationModifierProvider shouldPrefetchMedia:] */

void FUN_100039864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100074640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((int)uVar4 == 0) ||
     (puVar3 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58, func_0x00010006e660(),
     (int)puVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x000100074640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071020();
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
    func_0x00010006ea60(PTR__OBJC_CLASS___NSDate_1000d1bb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074240();
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 10003996c; end: 1000399bf; -[SCMessagingNotificationModifierProvider .cxx_destruct] */

void FUN_10003996c(long param_1)

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



/* Entry: 1000399c0; end: 100039aaf; -[SCNSEConversationFetcher initWithProcessingScope:arroyoAdapter:] */

undefined8
FUN_1000399c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___SCTimeProvider_1000d1de0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006eba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100070cc0(param_1,param_2,puVar1,uVar2,param_4,uVar3,uVar4);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100039ab0; end: 100039bd3; -[SCNSEConversationFetcher initWithTimeProvider:event:arroyoAdapter:decryptedPayload:grapheneLogger:] */

undefined1 *
FUN_100039ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1000d2510;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100039bd4; end: 100039ecb; -[SCNSEConversationFetcher consumePayloadOrDeltaSyncConversation:messageId:conversationVersion:notificationType:completionHandler:] */

void FUN_100039bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010006d960(uVar7);
  func_0x0001000732a0(*(undefined8 *)(param_1 + 0x10));
  func_0x000100072d00(*(undefined8 *)(param_1 + 0x10));
  func_0x000100072ce0(*(undefined8 *)(param_1 + 0x10));
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = param_4;
  func_0x000100073ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000100073280(uVar8);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1000d2018;
  _objc_alloc(PTR_PTR_1000d2018);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x000100070c60(puVar3);
  uVar4 = *(ulong *)(param_1 + 0x18);
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x0001000713a0(uVar1);
  func_0x000100071fa0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar6 = uVar1;
  func_0x0001000713a0();
  puVar5 = PTR__OBJC_CLASS___NSData_1000d1e40;
  if (uVar6 == 0) {
    func_0x00010006e9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010006ea20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSData_1000d1e40;
    func_0x00010006e9c0(PTR__OBJC_CLASS___NSData_1000d1e40);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x0001000713a0(puVar5);
  func_0x000100071fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010006e6c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 100039ecc; end: 100039f6f;  */

void FUN_100039ecc(long param_1)

{
  func_0x00010006d960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x000100072d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x00010006cce0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100039f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
  return;
}



/* Entry: 100039f70; end: 10003a05b;  */

void FUN_100039f70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010006d960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x000100072d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x000100071f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000100072d20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x00010006cbe0(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar2);
  return;
}



/* Entry: 10003a05c; end: 10003a163; -[SCNSEConversationFetcher _logGrapheneExtensionTotalConversationSyncLatencyMs:notificationType:] */

void FUN_10003a05c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar5 = puVar1;
  func_0x000100070720();
  puVar4 = puVar2;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar5);
  func_0x000100072860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006db80((double)(long)puVar4,*(undefined8 *)(puVar1 + 0x28));
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar3 + 8,0);
  return;
}



/* Entry: 10003a164; end: 10003a2ab; -[SCNSEConversationFetcher _logGrapheneExtensionConversationSyncFailedLatencyMs:callbackStatus:notificationType:] */

void FUN_10003a164(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1000d1d68;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_5);
  func_0x000100072860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10003a2ac; end: 10003a2ff; -[SCNSEConversationFetcher .cxx_destruct] */

void FUN_10003a2ac(long param_1)

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



/* Entry: 10003a300; end: 10003a527; -[SCNSEMessagingMediaDownloader initWithProcessingScope:] */

undefined8 FUN_10003a300(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010006f400();
  if (uVar2 == 0) {
    uStack_70 = 10;
  }
  else {
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = uVar2;
    func_0x00010006f400();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___SCTimeProvider_1000d1de0;
  _objc_opt_new(PTR__OBJC_CLASS___SCTimeProvider_1000d1de0);
  uVar1 = param_3;
  func_0x000100074680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000739c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010006e3c0();
  uVar7 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010006e3e0();
  uVar9 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073b40();
  uVar10 = param_3;
  func_0x00010006dcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100071e60();
  uVar12 = param_3;
  func_0x00010006f900();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070ce0(param_1,param_2,puVar3,uVar1,uVar2,puVar4,uStack_70,uVar6 & 0xffffffff,
                      (char)uVar8);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10003a528; end: 10003a557; -[SCNSEMessagingMediaDownloader initWithTimeProvider:userSession:event:networkingApiClient:fetchMediaTaskTimeLimitInSec:grapheneLogger:] */

void FUN_10003a528(void)

{
  func_0x000100070ce0();
  return;
}



/* Entry: 10003a558; end: 10003a74b; -[SCNSEMessagingMediaDownloader initWithTimeProvider:userSession:event:networkingApiClient:fetchMediaTaskTimeLimitInSec:bypassChatMessageMediaTypeInPrefetch:bypassSnapMessageMediaTypeInPrefetch:skipMediaFetchWhenAppForegrounded:appIsInForeground:nseMediaDbEnabled:grapheneLogger:] */

undefined8 *
FUN_10003a558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,char param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1000d2518;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[5] = param_7;
    *(undefined1 *)(puVar1 + 7) = param_8;
    *(undefined1 *)((long)puVar1 + 0x39) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0x3a) = param_9._1_1_;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    *(char *)(puVar1 + 9) = param_12;
    if (param_12 != '\0') {
      puVar3 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_1000d1dd0;
      func_0x000100073980();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x0001000745e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000100072260();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar1[10];
      puVar1[10] = puVar4;
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10003a74c; end: 10003aaeb; -[SCNSEMessagingMediaDownloader downloadMedia:conversationId:messageSenderUserId:analyticsMessageId:serverMessageId:messageMediaType:notificationType:completionHandler:] */

void FUN_10003a74c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined1 *param_5,undefined8 param_6,undefined *param_7,undefined1 *param_8,
                  undefined1 *param_9,undefined8 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined1 *puStack_268;
  undefined *puStack_260;
  undefined1 *puStack_258;
  long lStack_250;
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined1 *puStack_238;
  undefined1 auStack_230 [16];
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar13 = param_5;
  uVar14 = param_6;
  puVar5 = param_7;
  puVar15 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = param_2;
  func_0x00010006d700();
  if ((int)lVar1 == 0) {
    _dispatch_group_create();
    param_1 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_4);
    ppuVar12 = &puStack_130;
    puVar13 = auStack_f0;
    uVar14 = 0x10;
    lVar2 = param_4;
    func_0x00010006e860();
    if (lVar2 != 0) {
      lVar16 = *plStack_120;
      do {
        lVar17 = 0;
        do {
          if (*plStack_120 != lVar16) {
            _objc_enumerationMutation(param_4);
          }
          uVar14 = *(undefined8 *)(lStack_128 + lVar17 * 8);
          lVar3 = param_2;
          func_0x00010006d640();
          if ((int)lVar3 == 0) {
            uVar9 = uVar14;
            func_0x00010006f0e0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSURL_1000d2020;
            func_0x00010006bf60();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x000100072160();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x000100071320();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028;
            func_0x00010006bfc0(PTR__OBJC_CLASS___SCNMessagingUUID_1000d2028);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___SCNMessagingStatelessSession_1000d2030;
            func_0x000100071a40(uVar14);
            func_0x000100071a20(uVar14);
            func_0x00010006e8e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            uStack_1a8 = param_10;
            puVar5 = puVar6;
            puVar15 = param_5;
            param_9 = param_8;
            func_0x00010006d300(param_2);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar4);
            _objc_release(uVar9);
            lStack_1b0 = lVar1;
            puStack_1a0 = param_7;
          }
          else {
            func_0x000100071fa0(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            func_0x000100073200(*(undefined8 *)(param_2 + 0x18));
          }
          lVar17 = lVar17 + 1;
        } while (lVar2 != lVar17);
        ppuVar12 = &puStack_130;
        puVar13 = auStack_f0;
        uVar14 = 0x10;
        lVar2 = param_4;
        func_0x00010006e860();
      } while (lVar2 != 0);
    }
    _objc_release(param_4);
    uVar9 = 0;
    _dispatch_time(0,*(long *)(param_2 + 0x28) * 1000000000);
    lVar2 = lVar1;
    _dispatch_group_wait(lVar1,uVar9);
    if (lVar2 != 0) {
      ppuVar12 = &PTR____CFConstantStringClassReference_1000a5788;
      func_0x000100073220(*(undefined8 *)(param_2 + 0x18));
    }
    (**(code **)(param_11 + 0x10))(param_11,lVar2 == 0);
    _objc_release(lVar1);
  }
  else {
    func_0x000100073200(*(undefined8 *)(param_2 + 0x18));
    ppuVar12 = &PTR____CFConstantStringClassReference_1000a5768;
    func_0x000100073220(*(undefined8 *)(param_2 + 0x18));
    (**(code **)(param_11 + 0x10))(param_11,1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(puVar13);
  _objc_retain(uVar14);
  _objc_retain(puVar5);
  _objc_retain(puVar15);
  _objc_retain(lStack_1b0);
  _objc_retain(uStack_1a8);
  _objc_retain(puStack_1a0);
  puVar8 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78;
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  func_0x0001000745e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006ffe0();
  _objc_release(uVar9);
  puVar4 = puVar8;
  func_0x0001000739e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000731a0(*(undefined8 *)(param_4 + 0x18));
  puVar6 = puVar4;
  func_0x00010006f460();
  if ((int)puVar6 == 0) {
    func_0x00010006d960(*(undefined8 *)(param_4 + 8));
    puVar6 = PTR_PTR_1000d2038;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_4 + 0x10);
    func_0x0001000745e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070de0();
    _objc_release(uVar9);
    func_0x0001000731c0(puVar6);
    func_0x000100073d40(param_1,puVar6);
    uVar9 = *(undefined8 *)(param_4 + 8);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_230,param_4);
    puStack_2b0 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_2a8 = 0xc2000000;
    pcStack_2a0 = FUN_10003af8c;
    puStack_298 = &UNK_1000a2a90;
    _objc_copyWeak(auStack_248,auStack_230);
    _objc_retain(puVar6);
    puStack_290 = puVar6;
    uStack_240 = param_1;
    _objc_retain(uVar9);
    uStack_288 = uVar9;
    _objc_retain(uStack_1a8);
    uStack_280 = uStack_1a8;
    _objc_retain(puVar4);
    puStack_278 = puVar4;
    _objc_retain(puVar5);
    puStack_270 = puVar5;
    _objc_retain(puVar13);
    puStack_268 = puVar13;
    _objc_retain(puVar8);
    puStack_260 = puVar8;
    _objc_retain(puVar15);
    puStack_258 = puVar15;
    puStack_238 = param_9;
    _objc_retain(lStack_1b0);
    lStack_250 = lStack_1b0;
    ppuVar10 = &puStack_2b0;
    _objc_retainBlock(ppuVar10);
    func_0x000100073200(*(undefined8 *)(param_4 + 0x18));
    _dispatch_group_enter(lStack_1b0);
    _objc_retain(puStack_1a0);
    func_0x000100071100();
    puVar7 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_1a0);
    puVar11 = PTR__OBJC_CLASS___SCExtensionRequestParams_1000d2040;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionRequestParams_1000d2040);
    func_0x000100070d60();
    _objc_release(puVar7);
    func_0x000100071860(*(undefined8 *)(param_4 + 0x20));
    _objc_release(puVar11);
    _objc_release(ppuVar10);
    _objc_release(lStack_250);
    _objc_release(puStack_258);
    _objc_release(puStack_260);
    _objc_release(puStack_268);
    _objc_release(puStack_270);
    _objc_release(puStack_278);
    _objc_release(uStack_280);
    _objc_release(uStack_288);
    _objc_release(puStack_290);
    _objc_destroyWeak(auStack_248);
    _objc_destroyWeak(auStack_230);
    _objc_release(uVar9);
    _objc_release(puVar6);
  }
  else {
    func_0x00010006c420(param_4);
    func_0x000100073220(*(undefined8 *)(param_4 + 0x18));
    func_0x000100073200(*(undefined8 *)(param_4 + 0x18));
  }
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(lStack_1b0);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(ppuVar12);
  return;
}



/* Entry: 10003aaec; end: 10003af8b; -[SCNSEMessagingMediaDownloader _prefetchMediaWithURL:mediaReferenceKey:messageSenderUserId:contentId:conversationId:serverMessageId:mediaDownloadGroup:notificationType:analyticsMessageId:messageMediaType:] */

void FUN_10003aaec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001000745e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006ffe0();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x0001000739e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000731a0(*(undefined8 *)(param_2 + 0x18));
  puVar4 = puVar3;
  func_0x00010006f460();
  if ((int)puVar4 == 0) {
    func_0x00010006d960(*(undefined8 *)(param_2 + 8));
    puVar4 = PTR_PTR_1000d2038;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x0001000745e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070de0();
    _objc_release(uVar2);
    func_0x0001000731c0(puVar4);
    func_0x000100073d40(param_1,puVar4);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_80,param_2);
    puStack_100 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10003af8c;
    puStack_e8 = &UNK_1000a2a90;
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(puVar4);
    puStack_e0 = puVar4;
    uStack_90 = param_1;
    _objc_retain(uVar2);
    uStack_d8 = uVar2;
    _objc_retain(param_11);
    uStack_d0 = param_11;
    _objc_retain(puVar3);
    puStack_c8 = puVar3;
    _objc_retain(param_7);
    uStack_c0 = param_7;
    _objc_retain(param_5);
    uStack_b8 = param_5;
    _objc_retain(puVar1);
    puStack_b0 = puVar1;
    _objc_retain(param_8);
    uStack_a8 = param_8;
    uStack_88 = param_9;
    _objc_retain(param_10);
    uStack_a0 = param_10;
    ppuVar5 = &puStack_100;
    _objc_retainBlock(ppuVar5);
    func_0x000100073200(*(undefined8 *)(param_2 + 0x18));
    _dispatch_group_enter(param_10);
    _objc_retain(param_12);
    func_0x000100071100();
    puVar6 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_12);
    puVar7 = PTR__OBJC_CLASS___SCExtensionRequestParams_1000d2040;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionRequestParams_1000d2040);
    func_0x000100070d60();
    _objc_release(puVar6);
    func_0x000100071860(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar7);
    _objc_release(ppuVar5);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(puStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(puStack_e0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  else {
    func_0x00010006c420(param_2);
    func_0x000100073220(*(undefined8 *)(param_2 + 0x18));
    func_0x000100073200(*(undefined8 *)(param_2 + 0x18));
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10003af8c; end: 10003b1c3;  */

void FUN_10003af8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,lVar1);
    uVar2 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10003b1c4;
    puStack_d8 = &UNK_1000a2a60;
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_d0 = param_3;
    _objc_retain(uVar3);
    uStack_c8 = uVar3;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    _objc_retain(param_2);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = param_2;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = uVar4;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uStack_98 = uVar4;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uStack_90 = uVar3;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uStack_88 = uVar4;
    _objc_retain(uVar5);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = uVar5;
    _objc_retain(uVar3);
    uStack_78 = uVar3;
    _dispatch_async(uVar2,&puStack_f0);
    _objc_release(uVar2);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10003b1c4; end: 10003b5a3;  */

void FUN_10003b1c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = param_2 + 0x80;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010006dbe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      uVar13 = *(undefined8 *)(lVar2 + 0x18);
      lVar5 = lVar4;
      func_0x000100071780(lVar4);
      func_0x000100073260(uVar13,param_3,lVar5);
    }
    uVar14 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(ulong *)(param_2 + 0x30);
    lVar5 = *(long *)(param_2 + 0x20);
    func_0x000100073d60();
    lVar15 = *(long *)(param_2 + 0x38);
    uVar6 = uVar1;
    FUN_10004041c();
    uVar13 = 2;
    if (lVar15 != 0 && uVar1 == 0) {
      uVar13 = 0;
    }
    uVar11 = 4;
    if (1 < lVar5 - 0x193U) {
      uVar11 = uVar13;
    }
    uVar13 = 3;
    if ((uVar6 & 1) == 0) {
      uVar13 = uVar11;
    }
    dVar17 = *(double *)(param_2 + 0x88);
    func_0x00010006d960(*(undefined8 *)(lVar2 + 8));
    func_0x000100072520(dVar17,param_1,uVar14,param_3,7,uVar13);
    uVar13 = *(undefined8 *)(lVar2 + 8);
    func_0x00010006e920(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074260();
    dVar17 = dVar17 * 1000.0;
    lVar5 = (long)dVar17;
    func_0x000100073240(*(undefined8 *)(lVar2 + 0x18),param_3,lVar5);
    func_0x00010006cc80(lVar2,param_3,lVar5,*(undefined8 *)(param_2 + 0x48));
    puVar7 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
    func_0x0001000711e0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58,param_3,
                        *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x30));
    puVar8 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    if (((int)puVar7 == 0) || (*(long *)(param_2 + 0x38) == 0)) {
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      func_0x000100073d60(uVar14);
      func_0x000100071f60(puVar8,param_3,uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100071f40(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_3,
                          *(long *)(param_2 + 0x38) == 0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      puVar10 = PTR__OBJC_CLASS___NSString_1000d1d68;
      puVar8 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      uVar11 = *(undefined8 *)(lVar2 + 0x18);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      func_0x000100073d60(uVar14);
      func_0x000100071f60(puVar8,param_3,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010006e500(uVar14);
      func_0x000100071f60(puVar7,param_3,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      func_0x000100071f40(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_3,
                          *(long *)(param_2 + 0x38) == 0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100072860(puVar10,param_3,&PTR____CFConstantStringClassReference_1000a57c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100073220(uVar11,param_3,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
    else {
      func_0x00010006d960(*(undefined8 *)(lVar2 + 8));
      puStack_78 = (undefined *)0x0;
      dVar16 = dVar17;
      func_0x00010006e820(*(undefined8 *)(param_2 + 0x50),param_3,*(undefined8 *)(param_2 + 0x38),
                          &puStack_78);
      puVar8 = puStack_78;
      _objc_retain(puStack_78);
      if (puVar8 == (undefined *)0x0) {
        func_0x00010006c420(lVar2,param_3,*(undefined8 *)(param_2 + 0x50),
                            *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x60));
        func_0x00010006d3c0(lVar2,param_3,*(undefined8 *)(param_2 + 0x58),
                            *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x90));
        uStack_80 = 0;
      }
      else {
        uStack_80 = 2;
      }
      uVar11 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010006d980(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_2 + 0x50);
      func_0x0001000722a0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010006d980();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      puVar10 = puVar8;
      func_0x00010006e500(puVar8);
      func_0x000100071f60(puVar7,param_3,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100071580(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar11);
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010006d960(*(undefined8 *)(lVar2 + 8));
      func_0x000100072520(dVar17,dVar16,uVar14,param_3,8,uStack_80);
    }
    _objc_release(puVar8);
    func_0x0001000727c0(*(undefined8 *)(param_2 + 0x28));
    _dispatch_group_leave(*(undefined8 *)(param_2 + 0x78));
    _objc_release(uVar13);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10003b5a4; end: 10003b783;  */

void FUN_10003b5a4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x80,param_2 + 0x80);
  return;
}



/* Entry: 10003b784; end: 10003b7d7; -[SCNSEMessagingMediaDownloader _shouldSkipPrefetchForForegroundedApp] */

undefined8 FUN_10003b784(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x000100074180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010006e380();
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 10003b7d8; end: 10003b807; -[SCNSEMessagingMediaDownloader _shouldBypassPrefetchForMessageMediaType:] */

byte FUN_10003b7d8(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  
  if (param_3 == 1) {
    lVar2 = 0x38;
  }
  else {
    if (param_3 != 2) {
      bVar1 = 0;
      goto LAB_10003b800;
    }
    lVar2 = 0x39;
  }
  bVar1 = *(byte *)(param_1 + lVar2);
LAB_10003b800:
  return bVar1 & 1;
}



/* Entry: 10003b808; end: 10003b8c7; -[SCNSEMessagingMediaDownloader _recordPrefetchedMediaWithContentId:conversationId:serverMessageId:] */

void FUN_10003b808(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((*(char *)(param_1 + 0x48) == '\x01') && (lVar1 = param_3, func_0x0001000713a0(), lVar1 != 0)
      ) && (lVar1 = param_4, func_0x0001000713a0(), lVar1 != 0)) {
    uVar2 = *(ulong *)(param_1 + 0x50);
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 != 0) &&
       (uVar3 = uVar2, func_0x000100073da0(uVar2,param_2,param_3,param_4,param_5), (uVar3 & 1) == 0)
       ) {
      func_0x000100073220(*(undefined8 *)(param_1 + 0x18),param_2,
                          &PTR____CFConstantStringClassReference_1000a57e8);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003b8c8; end: 10003b987; -[SCNSEMessagingMediaDownloader _createSymbolicLinkToFile:inDirectory:mediaReferenceKey:] */

void FUN_10003b8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x0001000739e0(param_4,param_2,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010006f460();
  if ((uVar2 & 1) == 0) {
    lStack_38 = 0;
    func_0x00010006e900(param_3,param_2,param_5,&lStack_38);
    lVar1 = lStack_38;
    _objc_retain(lStack_38);
    if (lVar1 != 0) {
      func_0x000100071580(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10003b988; end: 10003ba8f; -[SCNSEMessagingMediaDownloader _logGrapheneExtensionMediaPrefetchLatency:notificationType:] */

void FUN_10003b988(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x40,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 10003ba90; end: 10003bafb; -[SCNSEMessagingMediaDownloader .cxx_destruct] */

void FUN_10003ba90(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10003bafc; end: 10003bc57; -[SCNotifExtConversationBadgeUpdater initWithProcessingScope:messagingContentTracker:arroyoConfig:] */

undefined8
FUN_10003bafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___SCNotifExtMainAppConsumableConvFetcher_1000d2048;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070de0(puVar1,param_2,uVar3);
  puVar4 = PTR__OBJC_CLASS___SCNotifExtConvoConvNotInMainRepository_1000d2050;
  _objc_alloc(PTR__OBJC_CLASS___SCNotifExtConvoConvNotInMainRepository_1000d2050);
  uVar5 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070de0(puVar4,param_2,uVar6);
  uVar7 = param_3;
  func_0x00010006e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100070540(param_1,param_2,puVar1,puVar4,param_4,uVar7);
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10003bc58; end: 10003bd53; -[SCNotifExtConversationBadgeUpdater initWithMainConvoFetcher:convoNotInMainRepository:messagingContentTracker:clientPayloadOptional:] */

undefined1 *
FUN_10003bc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1000d2520;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10003bd54; end: 10003bddb; -[SCNotifExtConversationBadgeUpdater badgeCountProviderType] */

void FUN_10003bd54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1000d2058;
  func_0x0001000738a0(PTR__OBJC_CLASS___NSSet_1000d2058,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_1000abdc0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30;
  puVar2 = puVar1;
  func_0x000100034e64();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006f380(puVar3,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 10003bddc; end: 10003c06b; -[SCNotifExtConversationBadgeUpdater provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_10003bddc(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  uVar11 = *(ulong *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010006f6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010006f6a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = param_1;
    func_0x00010006d180();
  }
  uVar12 = (uint)uVar13;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100072120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  FUN_10003434c(param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = param_4;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000100034e58();
  if ((uVar8 & 1) == 0) {
    uVar8 = param_4;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10 != 0 & uVar12;
    _objc_release();
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uStack_68 = uVar1;
  if ((uVar12 != 0) && (uVar3 != 0)) {
    uVar4 = uVar11;
    func_0x00010006e6e0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar1;
      func_0x00010006e6e0();
      if ((uVar4 & 1) == 0) {
        func_0x00010006da20(*(undefined8 *)(param_1 + 0x10));
        uStack_68 = *(ulong *)(param_1 + 0x10);
        func_0x00010006f6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
      }
    }
  }
  if (((uVar13 & 1) == 0) && (uVar3 != 0)) {
    uVar1 = uStack_68;
    func_0x00010006e6e0();
    if ((int)uVar1 != 0) {
      func_0x0001000725a0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  uVar1 = uVar11;
  func_0x00010006e840(uVar11);
  uVar13 = uStack_68;
  func_0x00010006e840(uStack_68);
  (**(code **)(param_5 + 0x10))(param_5,uVar13 + uVar1);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uStack_68);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10003c06c; end: 10003c17b; -[SCNotifExtConversationBadgeUpdater _messageIsUnread:] */

uint FUN_10003c06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x000100072120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010006eec0(uVar6,param_2,param_3);
    uVar7 = (uint)uVar6 ^ 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x000100072120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_100034298();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    FUN_100034410();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010006e7e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0 || lVar5 == 0) {
      uVar7 = 1;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010006eee0(uVar6,param_2,lVar3,lVar5);
      uVar7 = (uint)uVar6 ^ 1;
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10003c17c; end: 10003c1cf; -[SCNotifExtConversationBadgeUpdater .cxx_destruct] */

void FUN_10003c17c(long param_1)

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



/* Entry: 10003c1d0; end: 10003c2ef; -[SCSDNConversationFetchTaskHandler initWithProcessingScope:messagingContentTracker:arroyoAdapter:] */

undefined8
FUN_10003c1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_70 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10003c2f0;
  puStack_58 = &UNK_1000a2790;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010006dfc0(puVar1,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070320(param_1,param_2,uVar2,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10003c2f0; end: 10003c31f;  */

void FUN_10003c2f0(void)

{
  _objc_alloc(PTR_PTR_1000d1f68);
  func_0x000100070800();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10003c320; end: 10003c3eb; -[SCSDNConversationFetchTaskHandler initWithEvent:messagingContentTracker:conversationFetcher:] */

undefined1 *
FUN_10003c320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1000d2528;
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



/* Entry: 10003c3ec; end: 10003c3f7; -[SCSDNConversationFetchTaskHandler identifier] */

undefined ** FUN_10003c3ec(void)

{
  return &PTR____CFConstantStringClassReference_1000a5848;
}



/* Entry: 10003c3f8; end: 10003c5f7; -[SCSDNConversationFetchTaskHandler handleNotification:notificationType:notificationId:completion:] */

void FUN_10003c3f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_100034410();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_100034298();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((lVar1 == 0) || (lVar2 == 0)) {
LAB_10003c524:
    func_0x000100072d00(*(undefined8 *)(param_1 + 8));
    func_0x000100072d20(*(undefined8 *)(param_1 + 8));
    pcVar6 = *(code **)(param_6 + 0x10);
    uVar5 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010006e7e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) goto LAB_10003c524;
    lVar4 = lVar1;
    func_0x000100071ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 == 0) goto LAB_10003c524;
    iVar7 = (int)*(undefined8 *)(param_1 + 0x10);
    lVar3 = lVar1;
    func_0x00010006e7e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006eee0();
    _objc_release(lVar3);
    if (iVar7 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x000100074180(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x000100071ae0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010006e7e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006e6a0(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar5);
      goto LAB_10003c550;
    }
    func_0x00010006e7e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000100072d00(*(undefined8 *)(param_1 + 8));
    func_0x000100072d20(*(undefined8 *)(param_1 + 8));
    pcVar6 = *(code **)(param_6 + 0x10);
    uVar5 = 1;
  }
  (*pcVar6)(param_6,uVar5);
LAB_10003c550:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10003c5f8; end: 10003c633; -[SCSDNConversationFetchTaskHandler .cxx_destruct] */

void FUN_10003c5f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10003c634; end: 10003c74b; -[SCSDNMessagingDisplayModifier initWithNotificationCenter:arroyoAdapter:grapheneLogger:configs:] */

undefined1 *
FUN_10003c634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1000d2530;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1000d2060;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10003c74c; end: 10003c8bf; -[SCSDNMessagingDisplayModifier modifyNotification:clientPayload:decryptedPayload:completion:] */

void FUN_10003c74c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010006f1c0();
    if (iVar1 == 0) {
      lVar2 = param_1;
      func_0x00010006c180(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010006f360();
      if ((int)lVar4 == 4) {
        lVar4 = param_4;
        func_0x00010006f340();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010006e460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar5 != 0) {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
          func_0x000100073a20();
          if (iVar1 != 0) {
            func_0x00010006c080(param_1,param_2,lVar2,param_4,param_5);
          }
        }
      }
      else {
        _objc_release(lVar3);
      }
      func_0x00010006c240(param_1,param_2,lVar2,param_4,param_6);
      _objc_release(lVar2);
    }
    else {
      func_0x00010006d1e0(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003c8c0; end: 10003ca8b; -[SCSDNMessagingDisplayModifier _modifyNotification:clientPayload:decryptedPayload:completion:] */

void FUN_10003c8c0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar2 = param_1;
    func_0x00010006c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010006f340();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010006f360();
    if ((int)uVar6 == 4) {
      uVar6 = uVar3;
      func_0x00010006e460();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = 0;
    }
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) {
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      func_0x000100073a20();
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = (uint)lVar4;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar3 = uVar6;
    FUN_10003ca8c(uVar6,uVar5);
    lVar4 = 0;
    if ((uVar6 != 0) && (((uVar1 | (uint)uVar3) & 1) != 0)) {
      lVar4 = param_1;
      func_0x00010006c460(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
    }
    if (uVar1 != 0) {
      func_0x00010006c020(param_1);
    }
    if ((uVar3 & 1) != 0) {
      func_0x00010006c260(param_1);
    }
    func_0x00010006c240(param_1);
    _objc_release(0);
    _objc_release(lVar4);
    _objc_release(uVar6);
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10003ca8c; end: 10003cb17;  */

ulong FUN_10003ca8c(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010006f1c0();
    uVar2 = 0;
    if ((param_1 == 0) || ((int)lVar1 == 0)) goto LAB_10003caf4;
    uVar2 = param_1;
    func_0x000100071140();
    if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x0001000711a0(), (int)uVar2 != 0)) {
      uVar2 = param_1;
      func_0x00010006fc00(param_1);
      goto LAB_10003caf4;
    }
  }
  uVar2 = 0;
LAB_10003caf4:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10003cb18; end: 10003cde3; -[SCSDNMessagingDisplayModifier _applyGroupTemplateIfNecessary:clientPayload:completion:] */

void FUN_10003cb18(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010006fa20();
  if ((int)lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_4;
    func_0x00010006e7c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar7 = lVar6;
  func_0x00010006fb00();
  if ((int)lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x00010006f9a0();
    _objc_retainAutoreleasedReturnValue();
    if (((lVar6 != 0) && (lVar7 != 0)) && (lVar8 = lVar1, func_0x0001000713a0(), lVar8 != 0)) {
      lVar8 = param_4;
      func_0x00010006fc40();
      if ((int)lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = param_4;
        func_0x000100071d00();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar9 = lVar8;
      func_0x00010006fc80();
      if ((int)lVar9 == 0) {
        lVar9 = 0;
LAB_10003cdb4:
        (**(code **)(param_5 + 0x10))(param_5,param_3);
      }
      else {
        lVar9 = lVar8;
        func_0x000100072920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) goto LAB_10003cdb4;
        lVar2 = lVar9;
        func_0x000100072980();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x0001000713a0();
        if (lVar3 == 0) {
          _objc_release(lVar2);
          goto LAB_10003cdb4;
        }
        lVar3 = lVar9;
        func_0x000100072940();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x0001000713a0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar4 == 0) goto LAB_10003cdb4;
        puVar5 = PTR__OBJC_CLASS___SCNotificationSenderInfo_1000d2068;
        _objc_alloc();
        lVar2 = lVar9;
        func_0x000100072940();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x000100072980();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x000100072940(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100070b60();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        lVar2 = lVar6;
        func_0x00010006f9a0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006c220(param_1);
        _objc_release(lVar2);
        _objc_release(puVar5);
      }
      _objc_release(lVar9);
      _objc_release(lVar8);
      goto LAB_10003cc28;
    }
  }
  (**(code **)(param_5 + 0x10))(param_5,param_3);
LAB_10003cc28:
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003cde4; end: 10003d157; -[SCSDNMessagingDisplayModifier _applyGroupTemplate:incomingSenderInfo:notificationKey:templates:completion:] */

void FUN_10003cde4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010006ff40();
  uVar2 = param_6;
  func_0x00010006fc60();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = param_6;
    func_0x0001000721c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x0001000741a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_b8 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10003cf8c;
  puStack_a0 = &UNK_1000a2ac0;
  uStack_98 = uVar2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = uVar1;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010006f6e0(uVar3,param_2,&puStack_b8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10003d158; end: 10003d1f3;  */

void FUN_10003d158(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  return;
}



/* Entry: 10003d1f4; end: 10003d4e3; -[SCSDNMessagingDisplayModifier _addSnapIconIfNecessary:clientPayload:] */

void FUN_10003d1f4(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = param_4;
  func_0x00010006fae0();
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = param_4;
    func_0x00010006f340();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar9;
  func_0x00010006f360();
  if ((int)puVar3 == 8) {
    puVar3 = puVar9;
    func_0x000100073ba0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar3 != (undefined *)0x0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  puVar3 = puVar9;
  func_0x00010006f360();
  if ((int)puVar3 == 4) {
    puVar3 = puVar9;
    func_0x00010006e460();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 != (undefined *)0x0;
    _objc_release();
  }
  else {
    bVar2 = false;
  }
  if ((puVar9 == (undefined *)0x0) || (!bVar1 && !bVar2)) {
    _objc_retain(param_3);
    goto LAB_10003d4ac;
  }
  lVar4 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x0001000713a0();
  if (lVar4 == 0) {
LAB_10003d49c:
    _objc_retain(param_3);
  }
  else {
    if (bVar2) {
      puVar3 = puVar9;
      func_0x00010006e460();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      FUN_10003ca8c();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIImage_1000d1f40;
      if ((int)puVar6 == 0) goto LAB_10003d388;
      puVar6 = 
      PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0;
      func_0x0001000722c0(
                         PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0
                         );
      _objc_retainAutoreleasedReturnValue();
LAB_10003d414:
      func_0x00010006fe00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_10003d388:
      if ((!bVar1) || (puVar3 = PTR_PTR_1000d1fa0, func_0x000100071220(), (int)puVar3 == 0)) {
        if ((!bVar2) ||
           (puVar6 = PTR_PTR_1000d1fa0, func_0x0001000710a0(),
           puVar3 = PTR__OBJC_CLASS___UIImage_1000d1f40, (int)puVar6 == 0)) goto LAB_10003d49c;
        puVar6 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0
        ;
        func_0x00010006e480(
                           PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0
                           );
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10003d414;
      }
      puVar6 = puVar9;
      func_0x000100073ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x000100071080();
      puVar3 = PTR__OBJC_CLASS___UIImage_1000d1f40;
      puVar8 = 
      PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0;
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000100073ae0(
                           PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName_1000d1fb0
                           );
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010006df80();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010006fe00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    _objc_release(puVar6);
    if (puVar3 == (undefined *)0x0) goto LAB_10003d49c;
    func_0x00010006da80(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_release(puVar3);
  }
  _objc_release(lVar5);
LAB_10003d4ac:
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(param_3);
  return;
}



/* Entry: 10003d4e4; end: 10003d777; -[SCSDNMessagingDisplayModifier _decryptedChatPlaintextFromDecryptedPayload:chat:decryptSkipReason:] */

void FUN_10003d4e4(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *param_5 = 0;
  if (param_3 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a5868;
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a5888;
  }
  else {
    uVar10 = param_4;
    func_0x00010006fc00();
    if ((uVar10 & 1) != 0) {
      uVar2 = param_3;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1000d1d68;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
      uVar10 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar10 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      uVar10 = uVar1;
      func_0x0001000713a0();
      if (uVar10 == 0) {
        uVar10 = 0;
        *param_5 = &PTR____CFConstantStringClassReference_1000a58c8;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSData_1000d1e40;
        func_0x00010006ea20();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x0001000713a0();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
        if (puVar5 == (undefined *)0x0) {
          uVar10 = 0;
          *param_5 = &PTR____CFConstantStringClassReference_1000a58e8;
        }
        else {
          uVar9 = *(ulong *)(param_1 + 0x18);
          uVar10 = param_4;
          func_0x000100071ae0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001000746c0();
          func_0x000100071fe0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006eb80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(uVar10);
          if (uVar9 == 0) {
            ppuVar8 = &PTR____CFConstantStringClassReference_1000a5908;
LAB_10003d738:
            uVar10 = 0;
            *param_5 = ppuVar8;
          }
          else {
            uVar10 = uVar9;
            func_0x0001000713a0();
            if (uVar10 == 0) {
              ppuVar8 = &PTR____CFConstantStringClassReference_1000a5928;
              goto LAB_10003d738;
            }
            _objc_retain(uVar9);
            uVar10 = uVar9;
            func_0x0001000713a0();
            if (uVar10 < 0x65) {
              _objc_retain(uVar9);
              uVar10 = uVar9;
            }
            else {
              uVar6 = uVar9;
              func_0x000100073fa0(uVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x000100073e20();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar7;
              func_0x000100073e00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar7);
              _objc_release(uVar6);
            }
            _objc_release(uVar9);
          }
          _objc_release(uVar9);
        }
        _objc_release(puVar4);
      }
      _objc_release(uVar1);
      _objc_release(uVar2);
      goto LAB_10003d6c4;
    }
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a58a8;
  }
  uVar10 = 0;
  *param_5 = ppuVar8;
LAB_10003d6c4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar10);
  return;
}



/* Entry: 10003d778; end: 10003d8db; -[SCSDNMessagingDisplayModifier _applyPriorityChatNsePreviewPlaintext:plaintext:decryptSkipReason:] */

void FUN_10003d778(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010006c8a0(param_1,param_2,&PTR____CFConstantStringClassReference_1000a5948,0);
  if (param_4 == 0) {
    ppuVar4 = param_5;
    func_0x0001000713a0();
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a5988;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = param_5;
    }
    func_0x00010006c8a0(param_1,param_2,&PTR____CFConstantStringClassReference_1000a59a8,ppuVar1);
  }
  else {
    puVar2 = param_3;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100071be0();
    if (puVar3 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8);
    }
    else {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000714c0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar5,param_2,param_4,puVar2);
    _objc_release(puVar2);
    func_0x000100073800(param_3,param_2,puVar5);
    func_0x000100072ba0(param_3,param_2,param_4);
    func_0x00010006c8a0(param_1,param_2,&PTR____CFConstantStringClassReference_1000a5968,0);
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003d8dc; end: 10003d9b7; -[SCSDNMessagingDisplayModifier _incrementPriorityChatNSEPreviewMetric:reason:] */

void FUN_10003d8dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
  _objc_retain(param_3);
  func_0x00010006eca0(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantDictionary_1000abf70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x0001000713a0();
  if (lVar2 != 0) {
    func_0x000100073360(puVar1,param_2,param_4,&PTR____CFConstantStringClassReference_1000a59c8);
  }
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  _objc_release(param_3);
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,1);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10003d9b8; end: 10003db9b; -[SCSDNMessagingDisplayModifier _addAppleWatchTextReplyInfoFromPlaintext:chat:plaintext:] */

void FUN_10003d9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010006fc00();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if ((int)uVar1 != 0) {
    uVar1 = param_4;
    func_0x000100071ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001000746c0();
    func_0x000100071fe0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010006cea0(param_1);
      puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
      func_0x000100071180(PTR__OBJC_CLASS___NSString_1000d1d68,param_2,param_5);
      if (((ulong)puVar4 & 1) == 0) {
        _objc_retain(param_5);
        uVar1 = param_3;
        func_0x00010006e440();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
        ;
        func_0x0001000741c0(
                           PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
                           );
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x000100071100(uVar1,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          func_0x000100072c00(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5568);
        }
        else {
          puVar4 = 
          PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
          ;
          func_0x0001000741e0(
                             PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
                             );
          _objc_retainAutoreleasedReturnValue();
          func_0x000100072c00(param_3,param_2,puVar4);
          _objc_release(puVar4);
        }
        uVar1 = param_3;
        func_0x000100074620(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x000100071be0();
        _objc_release(uVar1);
        func_0x000100073360(uVar2,param_2,param_5,&PTR____CFConstantStringClassReference_1000a5548);
        _objc_release(param_5);
        func_0x000100073800(param_3,param_2,uVar2);
        func_0x00010006cee0(param_1);
        _objc_release(uVar2);
      }
      else {
        func_0x00010006cec0(param_1);
      }
      _objc_release(puVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003db9c; end: 10003ded7; -[SCSDNMessagingDisplayModifier _addDecryptedTextReplyInfo:clientPayload:decryptedPayload:] */

void FUN_10003db9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  uVar3 = uVar1;
  func_0x0001000713a0();
  puVar2 = PTR__OBJC_CLASS___NSData_1000d1e40;
  if (uVar3 == 0) {
    func_0x00010006e9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010006ea20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1000d1e40;
    func_0x00010006e9c0(PTR__OBJC_CLASS___NSData_1000d1e40);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = param_4;
  func_0x00010006f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010006e460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010006fc00();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if ((int)uVar4 != 0) {
    uVar4 = uVar5;
    func_0x000100071ae0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000746c0();
    func_0x000100071fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (puVar6 != (undefined *)0x0) {
      func_0x00010006cea0(param_1);
      uVar7 = *(ulong *)(param_1 + 0x18);
      func_0x00010006eb80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1000d1d68;
      func_0x000100071180();
      uVar3 = uVar7;
      if (((ulong)puVar8 & 1) == 0) {
        uVar9 = uVar7;
        func_0x0001000713a0();
        if (100 < uVar9) {
          uVar9 = uVar7;
          func_0x000100073fa0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x000100073e20();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar10;
          func_0x000100073e00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          _objc_release(uVar10);
          _objc_release(uVar9);
        }
        uVar4 = param_3;
        func_0x00010006e440();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
        ;
        func_0x0001000741c0(
                           PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
                           );
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x000100071100();
        _objc_release(puVar8);
        _objc_release(uVar4);
        if ((int)uVar11 == 0) {
          func_0x000100072c00(param_3);
        }
        else {
          puVar8 = 
          PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
          ;
          func_0x0001000741e0(
                             PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants_1000d1e28
                             );
          _objc_retainAutoreleasedReturnValue();
          func_0x000100072c00(param_3);
          _objc_release(puVar8);
        }
        uVar4 = param_3;
        func_0x000100074620(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x000100071be0();
        _objc_release(uVar4);
        func_0x000100073360(uVar11);
        func_0x000100073800(param_3);
        func_0x00010006cee0(param_1);
        _objc_release(uVar11);
      }
      else {
        func_0x00010006cec0(param_1);
      }
      _objc_release(uVar3);
      _objc_release(puVar6);
    }
  }
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003ded8; end: 10003df37; -[SCSDNMessagingDisplayModifier _logTextReplyContentAttempt] */

void FUN_10003ded8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 10003df38; end: 10003df97; -[SCSDNMessagingDisplayModifier _logTextReplyContentSuccess] */

void FUN_10003df38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 10003df98; end: 10003dff7; -[SCSDNMessagingDisplayModifier _logTextReplyContentSkipped] */

void FUN_10003df98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 10003dff8; end: 10003e04b; -[SCSDNMessagingDisplayModifier .cxx_destruct] */

void FUN_10003dff8(long param_1)

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



/* Entry: 10003e04c; end: 10003e147; -[SCSDNMessagingMediaFetchTaskHandler initWithProcessingScope:messagingContentTracker:] */

undefined8
FUN_10003e04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10003e148;
  puStack_50 = &UNK_1000a2af0;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010006dfc0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070580(param_1,param_2,param_4,uVar2,puVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10003e148; end: 10003e177;  */

void FUN_10003e148(void)

{
  _objc_alloc(PTR_PTR_1000d1f88);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10003e178; end: 10003e243; -[SCSDNMessagingMediaFetchTaskHandler initWithMessagingContentTracker:event:mediaDownloader:] */

undefined1 *
FUN_10003e178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1000d2538;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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



/* Entry: 10003e244; end: 10003e24f; -[SCSDNMessagingMediaFetchTaskHandler identifier] */

undefined ** FUN_10003e244(void)

{
  return &PTR____CFConstantStringClassReference_1000a59e8;
}



/* Entry: 10003e250; end: 10003e55f; -[SCSDNMessagingMediaFetchTaskHandler handleNotification:notificationType:notificationId:completion:] */

void FUN_10003e250(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar2 = param_3;
  FUN_100034410();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_100034298();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 == 0)) {
LAB_10003e378:
    func_0x000100073200(*(undefined8 *)(param_1 + 8));
    func_0x000100073220(*(undefined8 *)(param_1 + 8));
    pcVar11 = *(code **)(param_6 + 0x10);
    uVar8 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x00010006e7e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) goto LAB_10003e378;
    lVar5 = lVar2;
    func_0x000100071ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 == 0) goto LAB_10003e378;
    lVar4 = lVar2;
    func_0x000100071a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = lVar2;
      func_0x00010006e7e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010006eee0();
      if (iVar1 == 0) {
        lVar5 = lVar2;
        func_0x000100071a00();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        _SCMapArray();
        lVar7 = lVar6;
        func_0x00010006e840();
        if (lVar7 == 0) {
          func_0x000100073200(*(undefined8 *)(param_1 + 8));
          func_0x000100073220(*(undefined8 *)(param_1 + 8));
          (**(code **)(param_6 + 0x10))(param_6,0);
        }
        else {
          lVar7 = param_3;
          func_0x00010006f340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006f360();
          _objc_release(lVar7);
          uVar8 = *(undefined8 *)(param_1 + 0x18);
          func_0x000100074180(uVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_3;
          FUN_100068fa4(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010006dc80(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar2;
          func_0x000100071ae0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x000100071780();
          func_0x00010006f060(uVar8);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar7);
          _objc_release(uVar8);
        }
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      else {
        func_0x000100073200(*(undefined8 *)(param_1 + 8));
        func_0x000100073220(*(undefined8 *)(param_1 + 8));
        (**(code **)(param_6 + 0x10))(param_6,1);
      }
      _objc_release(lVar4);
      goto LAB_10003e3a4;
    }
    func_0x000100073200(*(undefined8 *)(param_1 + 8));
    pcVar11 = *(code **)(param_6 + 0x10);
    uVar8 = 1;
  }
  (*pcVar11)(param_6,uVar8);
LAB_10003e3a4:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10003e560; end: 10003e61f;  */

void FUN_10003e560(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010006f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001000713a0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1000d1f90;
    _objc_alloc(PTR_PTR_1000d1f90);
    lVar1 = param_2;
    func_0x00010006f0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071a40(param_2);
    func_0x000100071a20(param_2);
    func_0x0001000702c0(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 10003e620; end: 10003e65b; -[SCSDNMessagingMediaFetchTaskHandler .cxx_destruct] */

void FUN_10003e620(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10003e65c; end: 10003e6cf; -[SCSDNMessagingSuppressor initWithArroyoAdapter:] */

undefined1 * FUN_10003e65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2540;
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



/* Entry: 10003e6d0; end: 10003e8bb; -[SCSDNMessagingSuppressor getSuppressionReason:conversationMetadata:] */

undefined8 FUN_10003e6d0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  func_0x00010006e7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x000100074320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar2 != 0) {
    uVar3 = param_3;
    func_0x00010006f360();
    uVar8 = 0;
    uVar1 = (uint)uVar3;
    if ((8 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x118U) == 0)) goto LAB_10003e890;
    if (uVar1 - 3 < 2) {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010006f700(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar1 != 8) goto LAB_10003e80c;
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010006f740(uVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    if (uVar3 != 0) {
      uVar4 = param_3;
      if (uVar1 == 3) {
        func_0x0001000743c0();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar4 == 0) || (uVar5 = uVar4, func_0x00010006fc00(), (int)uVar5 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar5 = uVar4;
          func_0x000100071ae0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x0001000746c0();
          uVar7 = uVar3;
          func_0x000100074460();
          _objc_release(uVar5);
          uVar8 = 2;
          if ((uVar7 & 0xffffffff) <= uVar6) {
            uVar8 = 0;
          }
        }
      }
      else {
        FUN_100034484();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000100071ae0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar5 = uVar4;
          func_0x000100071ae0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x000100074460();
          uVar7 = uVar3;
          func_0x000100074460();
          _objc_release(uVar5);
          uVar8 = 0;
          if ((uint)uVar6 <= (uint)uVar7) {
            uVar8 = 2;
          }
        }
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      goto LAB_10003e890;
    }
  }
LAB_10003e80c:
  uVar8 = 0;
LAB_10003e890:
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10003e8bc; end: 10003e8c7; -[SCSDNMessagingSuppressor .cxx_destruct] */

void FUN_10003e8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10003e8c8; end: 10003e957; -[SCNSEMessagingMediaDownloadInfo initWithDownloadUrl:mediaListIndex:mediaListId:] */

undefined1 *
FUN_10003e8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1000d2548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10003e958; end: 10003e97b; -[SCNSEMessagingMediaDownloadInfo copyWithZone:] */

undefined8 FUN_10003e958(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10003e97c; end: 10003e9f7; -[SCNSEMessagingMediaDownloadInfo hash] */

undefined8 * FUN_10003e97c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010006fd00();
  lStack_38 = (long)*(int *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_40 = uVar1;
  _SCRemodelHash(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10003ea8c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10003ea8c;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x0001000710e0();
      goto LAB_10003ea8c;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10003ea8c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10003e9f8; end: 10003eaa7; -[SCNSEMessagingMediaDownloadInfo isEqual:] */

long FUN_10003e9f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10003ea8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10003ea8c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x0001000710e0();
      goto LAB_10003ea8c;
    }
  }
  lVar3 = 1;
LAB_10003ea8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10003eaa8; end: 10003eaaf; -[SCNSEMessagingMediaDownloadInfo downloadUrl] */

undefined8 FUN_10003eaa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10003eab0; end: 10003eab7; -[SCNSEMessagingMediaDownloadInfo mediaListIndex] */

undefined4 FUN_10003eab0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10003eab8; end: 10003eabf; -[SCNSEMessagingMediaDownloadInfo mediaListId] */

undefined8 FUN_10003eab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10003eac0; end: 10003eacb; -[SCNSEMessagingMediaDownloadInfo .cxx_destruct] */

void FUN_10003eac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 0x10,0);
  return;
}



/* Entry: 10003eacc; end: 10003ebd7; -[SCNSEMessageInfo initWithConversationVersion:messageId:analyticsMessageId:mediaInfos:] */

undefined1 *
FUN_10003eacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1000d2550;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10003ebd8; end: 10003ebfb; -[SCNSEMessageInfo copyWithZone:] */

undefined8 FUN_10003ebd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10003ebfc; end: 10003ec87; -[SCNSEMessageInfo hash] */

undefined8 * FUN_10003ebfc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010006fd00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010006fd00();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  _SCRemodelHash(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10003ed38:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10003ed44;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x0001000710e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x0001000710e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x0001000710e0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x0001000710e0();
              goto LAB_10003ed44;
            }
            goto LAB_10003ed38;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10003ed44:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10003ec88; end: 10003ed5f; -[SCNSEMessageInfo isEqual:] */

long FUN_10003ec88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10003ed38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10003ed44;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x0001000710e0();
              goto LAB_10003ed44;
            }
            goto LAB_10003ed38;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10003ed44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10003ed60; end: 10003ed67; -[SCNSEMessageInfo conversationVersion] */

undefined8 FUN_10003ed60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10003ed68; end: 10003ed6f; -[SCNSEMessageInfo messageId] */

undefined8 FUN_10003ed68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10003ed70; end: 10003ed77; -[SCNSEMessageInfo analyticsMessageId] */

undefined8 FUN_10003ed70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10003ed78; end: 10003ed7f; -[SCNSEMessageInfo mediaInfos] */

undefined8 FUN_10003ed78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10003ed80; end: 10003edc7; -[SCNSEMessageInfo .cxx_destruct] */

void FUN_10003ed80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}


