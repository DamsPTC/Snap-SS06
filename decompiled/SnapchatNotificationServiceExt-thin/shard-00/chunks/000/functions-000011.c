/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000496ac; end: 100049887; -[SCFriendingNotificationSnapchatter isEqual:] */

long FUN_1000496ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100049860:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10004986c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      dVar6 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
      dVar5 = ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x0001000710e0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x0001000710e0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x0001000710e0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
              (func_0x0001000710e0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
             (func_0x0001000710e0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x0001000710e0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
            (func_0x0001000710e0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
            (func_0x0001000710e0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
             (func_0x0001000710e0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
             (func_0x0001000710e0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
            (func_0x0001000710e0(), (int)lVar4 != 0)))))))) {
        lVar4 = *(long *)(param_1 + 0x68);
        if (lVar4 != *(long *)(param_3 + 0x68)) {
          func_0x0001000710e0();
          goto LAB_10004986c;
        }
        goto LAB_100049860;
      }
    }
    lVar4 = 0;
  }
LAB_10004986c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 100049888; end: 10004988f; -[SCFriendingNotificationSnapchatter userId] */

undefined8 FUN_100049888(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100049890; end: 100049897; -[SCFriendingNotificationSnapchatter mutableName] */

undefined8 FUN_100049890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100049898; end: 10004989f; -[SCFriendingNotificationSnapchatter displayName] */

undefined8 FUN_100049898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1000498a0; end: 1000498a7; -[SCFriendingNotificationSnapchatter notificationType] */

undefined8 FUN_1000498a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1000498a8; end: 1000498af; -[SCFriendingNotificationSnapchatter bitmojiAvatarId] */

undefined8 FUN_1000498a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1000498b0; end: 1000498b7; -[SCFriendingNotificationSnapchatter bitmojiSelfieId] */

undefined8 FUN_1000498b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1000498b8; end: 1000498bf; -[SCFriendingNotificationSnapchatter bitmojiSceneId] */

undefined8 FUN_1000498b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1000498c0; end: 1000498c7; -[SCFriendingNotificationSnapchatter bitmojiBackgroundId] */

undefined8 FUN_1000498c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1000498c8; end: 1000498cf; -[SCFriendingNotificationSnapchatter isFromMyContact] */

undefined8 FUN_1000498c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1000498d0; end: 1000498d7; -[SCFriendingNotificationSnapchatter suggestReason] */

undefined8 FUN_1000498d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1000498d8; end: 1000498df; -[SCFriendingNotificationSnapchatter abbreviatedSuggestReason] */

undefined8 FUN_1000498d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1000498e0; end: 1000498e7; -[SCFriendingNotificationSnapchatter suggestedToken] */

undefined8 FUN_1000498e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1000498e8; end: 1000498ef; -[SCFriendingNotificationSnapchatter isViewed] */

undefined8 FUN_1000498e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1000498f0; end: 1000498f7; -[SCFriendingNotificationSnapchatter processingTimestamp] */

undefined8 FUN_1000498f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1000498f8; end: 10004999f; -[SCFriendingNotificationSnapchatter .cxx_destruct] */

void FUN_1000498f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000499a0; end: 100049a13; -[UNIFriendRequests initWithUnifiedGrpcService:] */

undefined1 * FUN_1000499a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2620;
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



/* Entry: 100049a14; end: 100049af7; -[UNIFriendRequests processWithRequest:callOptionsBuilder:handler:] */

void FUN_100049a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCNGrpcUnaryEventHandlerImpl_1000d21b8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1000d21c0;
  _objc_opt_class(PTR_PTR_1000d21c0);
  func_0x0001000704a0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010006e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0001000743e0(uVar4,param_2,&PTR____CFConstantStringClassReference_1000a6808,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 100049af8; end: 100049bdb; -[UNIFriendRequests incomingFriendSyncWithRequest:callOptionsBuilder:handler:] */

void FUN_100049af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCNGrpcUnaryEventHandlerImpl_1000d21b8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1000d21c8;
  _objc_opt_class(PTR_PTR_1000d21c8);
  func_0x0001000704a0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010006e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0001000743e0(uVar4,param_2,&PTR____CFConstantStringClassReference_1000a6828,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 100049bdc; end: 100049be7; -[UNIFriendRequests .cxx_destruct] */

void FUN_100049bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100049be8; end: 100049c63;  */

undefined * FUN_100049be8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e94b0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a6848,&UNK_10008fe78,
                        &UNK_10008feb4,3,FUN_100049c64,0);
    do {
      if (puRam00000001000e94b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e94b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e94b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e94b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e94b0;
}



/* Entry: 100049c64; end: 100049c6f;  */

bool FUN_100049c64(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 100049c70; end: 100049cd7; +[SCFriendingContactBookUploadRequest descriptor] */

void FUN_100049c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5d80,
                        &PTR____CFConstantStringClassReference_1000a6868,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_countryCode_1000deb18,5,0x28,0x1c
                       );
    puRam00000001000e94b8 = puVar1;
  }
  return;
}



/* Entry: 100049cd8; end: 100049d3f; +[SCFriendingContactBooksUploadRequest descriptor] */

void FUN_100049cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5dd0,
                        &PTR____CFConstantStringClassReference_1000a6888,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactBooksArray_1000de738,2,
                        0x18,0x1c);
    puRam00000001000e94c0 = puVar1;
  }
  return;
}



/* Entry: 100049d40; end: 100049dcb; +[SCFriendingContactBookFromClient descriptor] */

undefined * FUN_100049d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5e20,
                        &PTR____CFConstantStringClassReference_1000a68a8,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_googleContactBook_1000de838,3,
                        0x20,0x1c);
    func_0x000100073960();
    puRam00000001000e94c8 = puVar1;
  }
  return puRam00000001000e94c8;
}



/* Entry: 100049dcc; end: 100049e33; +[SCFriendingGoogleContactBook descriptor] */

void FUN_100049dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5e70,
                        &PTR____CFConstantStringClassReference_1000a68c8,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactsArray_1000de898,3,0x18,
                        0x1c);
    puRam00000001000e94d0 = puVar1;
  }
  return;
}



/* Entry: 100049e34; end: 100049e9b; +[SCFriendingMicrosoftContactBook descriptor] */

void FUN_100049e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5ec0,
                        &PTR____CFConstantStringClassReference_1000a68e8,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactsArray_1000de8f8,3,0x18,
                        0x1c);
    puRam00000001000e94d8 = puVar1;
  }
  return;
}



/* Entry: 100049e9c; end: 100049f03; +[SCFriendingFacebookContactBook descriptor] */

void FUN_100049e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5f10,
                        &PTR____CFConstantStringClassReference_1000a6908,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_facebookFriendsArray_1000de958,3,
                        0x20,0x1c);
    puRam00000001000e94e0 = puVar1;
  }
  return;
}



/* Entry: 100049f04; end: 100049f6b; +[SCFriendingFacebookContact descriptor] */

void FUN_100049f04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5f60,
                        &PTR____CFConstantStringClassReference_1000a6928,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_friendFacebookId_1000de778,2,0x18
                        ,0x1c);
    puRam00000001000e94e8 = puVar1;
  }
  return;
}



/* Entry: 100049f6c; end: 100049fd3; +[SCFriendingContactFromClient descriptor] */

void FUN_100049f6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d5fb0,
                        &PTR____CFConstantStringClassReference_1000a6948,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactId_1000dec98,0xc,0x38,0x1c
                       );
    puRam00000001000e94f0 = puVar1;
  }
  return;
}



/* Entry: 100049fd4; end: 10004a05f; +[SCFriendingContactMethod descriptor] */

undefined * FUN_100049fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e94f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6000,
                        &PTR____CFConstantStringClassReference_1000a6968,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactMethodId_1000de9b8,3,0x20,
                        0x1c);
    func_0x000100073960();
    puRam00000001000e94f8 = puVar1;
  }
  return puRam00000001000e94f8;
}



/* Entry: 10004a060; end: 10004a0c7; +[SCFriendingContactsNotProcessed descriptor] */

void FUN_10004a060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9500 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6050,
                        &PTR____CFConstantStringClassReference_1000a6988,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_retryAfter_1000de7b8,2,0x18,0x1c)
    ;
    puRam00000001000e9500 = puVar1;
  }
  return;
}



/* Entry: 10004a0c8; end: 10004a12f; +[SCFriendingContactIdInfo descriptor] */

void FUN_10004a0c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9508 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d60a0,
                        &PTR____CFConstantStringClassReference_1000a69a8,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactId_1000de7f8,2,0x18,0x1c);
    puRam00000001000e9508 = puVar1;
  }
  return;
}



/* Entry: 10004a130; end: 10004a1ab; +[SCFriendingContactSnapchatter descriptor] */

undefined * FUN_10004a130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9510 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d60f0,
                        &PTR____CFConstantStringClassReference_1000a69c8,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_userId_1000dee18,0xe,0x68,0x1c);
    func_0x000100073940();
    puRam00000001000e9510 = puVar1;
  }
  return puRam00000001000e9510;
}



/* Entry: 10004a1ac; end: 10004a213; +[SCFriendingContactBookUploadResponse descriptor] */

void FUN_10004a1ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9518 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6140,
                        &PTR____CFConstantStringClassReference_1000a69e8,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_snapchattersArray_1000dea18,4,
                        0x28,0x1c);
    puRam00000001000e9518 = puVar1;
  }
  return;
}



/* Entry: 10004a214; end: 10004a27b; +[SCFriendingContactNonSnapchatter descriptor] */

void FUN_10004a214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9520 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6190,
                        &PTR____CFConstantStringClassReference_1000a6a08,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactId_1000debb8,7,0x38,0x1c);
    puRam00000001000e9520 = puVar1;
  }
  return;
}



/* Entry: 10004a27c; end: 10004a2e3; +[SCFriendingEarlyContactBookUploadResponse descriptor] */

void FUN_10004a27c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9528 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d61e0,
                        &PTR____CFConstantStringClassReference_1000a6a28,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_contactsNotProcessed_1000de718,1,
                        0x10,0x1c);
    puRam00000001000e9528 = puVar1;
  }
  return;
}



/* Entry: 10004a2e4; end: 10004a3c7; +[SCFriendingLegacyContactBookUploadRequestParams descriptor] */

void FUN_10004a2e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9530 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6230,
                        &PTR____CFConstantStringClassReference_1000a6a48,
                        &PTR_s_snapchat_friending_1000de700,&PTR_s_userId_1000dea98,4,0x28,0x1c);
    puRam00000001000e9530 = puVar1;
  }
  return;
}



/* Entry: 10004a3c8; end: 10004a3d3;  */

bool FUN_10004a3c8(uint param_1)

{
  return param_1 < 0x16;
}



/* Entry: 10004a3d4; end: 10004a43b; +[SCFriendingGetFacebookFriendsRequest descriptor] */

void FUN_10004a3d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9540 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6320,
                        &PTR____CFConstantStringClassReference_1000a6a88,
                        &PTR_s_snapchat_friending_1000defd8,0,0,4,0x1c);
    puRam00000001000e9540 = puVar1;
  }
  return;
}



/* Entry: 10004a43c; end: 10004a51f; +[SCFriendingGetFacebookFriendsResponse descriptor] */

void FUN_10004a43c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9548 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6370,
                        &PTR____CFConstantStringClassReference_1000a6aa8,
                        &PTR_s_snapchat_friending_1000defd8,&PTR_s_snapchattersArray_1000deff0,1,
                        0x10,0x1c);
    puRam00000001000e9548 = puVar1;
  }
  return;
}



/* Entry: 10004a520; end: 10004a54b;  */

bool FUN_10004a520(uint param_1)

{
  if ((param_1 < 0x25) && (param_1 != 0x13)) {
    return true;
  }
  return param_1 == 0xc6;
}



/* Entry: 10004a54c; end: 10004a5c7;  */

undefined * FUN_10004a54c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9558 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a6ae8,&UNK_1000902f4,
                        &UNK_100090304,1,FUN_10004a5c8,0);
    do {
      if (puRam00000001000e9558 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9558;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9558,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9558 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9558;
}



/* Entry: 10004a5c8; end: 10004a5d3;  */

bool FUN_10004a5c8(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10004a5d4; end: 10004a64f;  */

undefined * FUN_10004a5d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9560 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a6b08,&UNK_100090308,
                        &UNK_10009037c,8,FUN_10004a650,0);
    do {
      if (puRam00000001000e9560 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9560;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9560,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9560 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9560;
}



/* Entry: 10004a650; end: 10004a65b;  */

bool FUN_10004a650(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10004a65c; end: 10004a6d7;  */

undefined * FUN_10004a65c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9568 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a6b28,&UNK_10009039c,
                        &UNK_1000904f4,0x13,FUN_10004a6d8,0);
    do {
      if (puRam00000001000e9568 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9568;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9568,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9568 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9568;
}



/* Entry: 10004a6d8; end: 10004a6f7;  */

uint FUN_10004a6d8(ulong param_1)

{
  return (uint)((uint)param_1 < 0x3d) & (uint)(0x100000008013fcff >> (param_1 & 0x3f));
}



/* Entry: 10004a6f8; end: 10004a75f; +[SCFriendingFriendAddParam descriptor] */

void FUN_10004a6f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9570 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6410,
                        &PTR____CFConstantStringClassReference_1000a6b48,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df628,6,0x30,0x1c);
    puRam00000001000e9570 = puVar1;
  }
  return;
}



/* Entry: 10004a760; end: 10004a7c7; +[SCFriendingFriendsAddRequest descriptor] */

void FUN_10004a760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9578 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6460,
                        &PTR____CFConstantStringClassReference_1000a6b68,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_page_1000df588,5,0x30,0x1c);
    puRam00000001000e9578 = puVar1;
  }
  return;
}



/* Entry: 10004a7c8; end: 10004a82f; +[SCFriendingFriendInviteParam descriptor] */

void FUN_10004a7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9580 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d64b0,
                        &PTR____CFConstantStringClassReference_1000a6b88,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df1c8,2,0x18,0x1c);
    puRam00000001000e9580 = puVar1;
  }
  return;
}



/* Entry: 10004a830; end: 10004a897; +[SCFriendingFriendsInviteRequest descriptor] */

void FUN_10004a830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9588 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6500,
                        &PTR____CFConstantStringClassReference_1000a6ba8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df028,1,0x10,0x1c
                       );
    puRam00000001000e9588 = puVar1;
  }
  return;
}



/* Entry: 10004a898; end: 10004a8ff; +[SCFriendingFriendInviteOrAddByPhoneParam descriptor] */

void FUN_10004a898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9590 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6550,
                        &PTR____CFConstantStringClassReference_1000a6bc8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_countryCodeArray_1000df408,3,0x20
                        ,0x1c);
    puRam00000001000e9590 = puVar1;
  }
  return;
}



/* Entry: 10004a900; end: 10004a967; +[SCFriendingFriendsInviteOrAddByPhoneRequest descriptor] */

void FUN_10004a900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9598 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d65a0,
                        &PTR____CFConstantStringClassReference_1000a6be8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_page_1000df468,3,0x18,0x1c);
    puRam00000001000e9598 = puVar1;
  }
  return;
}



/* Entry: 10004a968; end: 10004a9cf; +[SCFriendingFriendBlockParam descriptor] */

void FUN_10004a968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d65f0,
                        &PTR____CFConstantStringClassReference_1000a6c08,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df048,1,0x10,0x1c);
    puRam00000001000e95a0 = puVar1;
  }
  return;
}



/* Entry: 10004a9d0; end: 10004aa37; +[SCFriendingFriendsBlockRequest descriptor] */

void FUN_10004a9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6640,
                        &PTR____CFConstantStringClassReference_1000a6c28,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df208,2,0x18,0x1c
                       );
    puRam00000001000e95a8 = puVar1;
  }
  return;
}



/* Entry: 10004aa38; end: 10004aa9f; +[SCFriendingFriendUnblockParam descriptor] */

void FUN_10004aa38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6690,
                        &PTR____CFConstantStringClassReference_1000a6c48,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df068,1,0x10,0x1c);
    puRam00000001000e95b0 = puVar1;
  }
  return;
}



/* Entry: 10004aaa0; end: 10004ab07; +[SCFriendingFriendsUnblockRequest descriptor] */

void FUN_10004aaa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d66e0,
                        &PTR____CFConstantStringClassReference_1000a6c68,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df088,1,0x10,0x1c
                       );
    puRam00000001000e95b8 = puVar1;
  }
  return;
}



/* Entry: 10004ab08; end: 10004ab6f; +[SCFriendingFriendRemoveParam descriptor] */

void FUN_10004ab08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6730,
                        &PTR____CFConstantStringClassReference_1000a6c88,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df4c8,3,0x20,0x1c);
    puRam00000001000e95c0 = puVar1;
  }
  return;
}



/* Entry: 10004ab70; end: 10004abd7; +[SCFriendingFriendsRemoveRequest descriptor] */

void FUN_10004ab70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6780,
                        &PTR____CFConstantStringClassReference_1000a6ca8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df248,2,0x18,0x1c
                       );
    puRam00000001000e95c8 = puVar1;
  }
  return;
}



/* Entry: 10004abd8; end: 10004ac3f; +[SCFriendingFriendIgnoreParam descriptor] */

void FUN_10004abd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d67d0,
                        &PTR____CFConstantStringClassReference_1000a6cc8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df0a8,1,0x10,0x1c);
    puRam00000001000e95d0 = puVar1;
  }
  return;
}



/* Entry: 10004ac40; end: 10004aca7; +[SCFriendingFriendsIgnoreRequest descriptor] */

void FUN_10004ac40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6820,
                        &PTR____CFConstantStringClassReference_1000a6ce8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df288,2,0x18,0x1c
                       );
    puRam00000001000e95d8 = puVar1;
  }
  return;
}



/* Entry: 10004aca8; end: 10004ad0f; +[SCFriendingFriendDisplayNameParam descriptor] */

void FUN_10004aca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6870,
                        &PTR____CFConstantStringClassReference_1000a6d08,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df2c8,2,0x18,0x1c);
    puRam00000001000e95e0 = puVar1;
  }
  return;
}



/* Entry: 10004ad10; end: 10004ad77; +[SCFriendingFriendsDisplayNameChangeRequest descriptor] */

void FUN_10004ad10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d68c0,
                        &PTR____CFConstantStringClassReference_1000a6d28,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df0c8,1,0x10,0x1c
                       );
    puRam00000001000e95e8 = puVar1;
  }
  return;
}



/* Entry: 10004ad78; end: 10004addf; +[SCFriendingFriendPostViewEmojiParam descriptor] */

void FUN_10004ad78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6910,
                        &PTR____CFConstantStringClassReference_1000a6d48,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df308,2,0x18,0x1c);
    puRam00000001000e95f0 = puVar1;
  }
  return;
}



/* Entry: 10004ade0; end: 10004ae47; +[SCFriendingFriendsPostViewEmojiChangeRequest descriptor] */

void FUN_10004ade0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e95f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6960,
                        &PTR____CFConstantStringClassReference_1000a6d68,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df0e8,1,0x10,0x1c
                       );
    puRam00000001000e95f8 = puVar1;
  }
  return;
}



/* Entry: 10004ae48; end: 10004aeaf; +[SCFriendingFriendsTransferInvitesRequest descriptor] */

void FUN_10004ae48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9600 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d69b0,
                        &PTR____CFConstantStringClassReference_1000a6d88,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_fromTemporaryUserId_1000df348,2,
                        0x18,0x1c);
    puRam00000001000e9600 = puVar1;
  }
  return;
}



/* Entry: 10004aeb0; end: 10004af17; +[SCFriendingFriendsTransferInvitesResponse descriptor] */

void FUN_10004aeb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9608 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6a00,
                        &PTR____CFConstantStringClassReference_1000a6da8,
                        &PTR_s_snapchat_friending_1000df010,0,0,4,0x1c);
    puRam00000001000e9608 = puVar1;
  }
  return;
}



/* Entry: 10004af18; end: 10004af7f; +[SCFriendingFriendsMuteStoryParam descriptor] */

void FUN_10004af18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9610 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6a50,
                        &PTR____CFConstantStringClassReference_1000a6dc8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df108,1,0x10,0x1c);
    puRam00000001000e9610 = puVar1;
  }
  return;
}



/* Entry: 10004af80; end: 10004afe7; +[SCFriendingFriendsMuteStoryRequest descriptor] */

void FUN_10004af80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9618 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6aa0,
                        &PTR____CFConstantStringClassReference_1000a6de8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df128,1,0x10,0x1c
                       );
    puRam00000001000e9618 = puVar1;
  }
  return;
}



/* Entry: 10004afe8; end: 10004b04f; +[SCFriendingFriendsUnmuteStoryParam descriptor] */

void FUN_10004afe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9620 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6af0,
                        &PTR____CFConstantStringClassReference_1000a6e08,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df148,1,0x10,0x1c);
    puRam00000001000e9620 = puVar1;
  }
  return;
}



/* Entry: 10004b050; end: 10004b0b7; +[SCFriendingFriendsUnmuteStoryRequest descriptor] */

void FUN_10004b050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9628 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6b40,
                        &PTR____CFConstantStringClassReference_1000a6e28,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_paramsArray_1000df168,1,0x10,0x1c
                       );
    puRam00000001000e9628 = puVar1;
  }
  return;
}



/* Entry: 10004b0b8; end: 10004b11f; +[SCFriendingFriendActionFailure descriptor] */

void FUN_10004b0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9630 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6b90,
                        &PTR____CFConstantStringClassReference_1000a6e48,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_friendId_1000df388,2,0x10,0x1c);
    puRam00000001000e9630 = puVar1;
  }
  return;
}



/* Entry: 10004b120; end: 10004b187; +[SCFriendingFriendsActionResponse descriptor] */

void FUN_10004b120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9638 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6be0,
                        &PTR____CFConstantStringClassReference_1000a6e68,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_successesArray_1000df528,3,0x20,
                        0x1c);
    puRam00000001000e9638 = puVar1;
  }
  return;
}



/* Entry: 10004b188; end: 10004b1ef; +[SCFriendingFriendsActionEligibilityRequest descriptor] */

void FUN_10004b188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9640 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6c30,
                        &PTR____CFConstantStringClassReference_1000a6e88,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_actionTypesArray_1000df188,1,0x10
                        ,0x1c);
    puRam00000001000e9640 = puVar1;
  }
  return;
}



/* Entry: 10004b1f0; end: 10004b257; +[SCFriendingActionEligibility descriptor] */

void FUN_10004b1f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9648 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6c80,
                        &PTR____CFConstantStringClassReference_1000a6ea8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_actionType_1000df3c8,2,8,0x1c);
    puRam00000001000e9648 = puVar1;
  }
  return;
}



/* Entry: 10004b258; end: 10004b33b; +[SCFriendingFriendsActionEligibilityResponse descriptor] */

void FUN_10004b258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9650 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6cd0,
                        &PTR____CFConstantStringClassReference_1000a6ec8,
                        &PTR_s_snapchat_friending_1000df010,&PTR_s_responseArray_1000df1a8,1,0x10,
                        0x1c);
    puRam00000001000e9650 = puVar1;
  }
  return;
}



/* Entry: 10004b33c; end: 10004b347;  */

bool FUN_10004b33c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10004b348; end: 10004b3c3;  */

undefined * FUN_10004b348(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9660 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a6f08,&UNK_10009057c,
                        &UNK_1000905bc,4,FUN_10004b3c4,0);
    do {
      if (puRam00000001000e9660 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9660;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9660,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9660 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9660;
}



/* Entry: 10004b3c4; end: 10004b3cf;  */

bool FUN_10004b3c4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10004b3d0; end: 10004b437; +[IncomingFriendLinksRequest descriptor] */

void FUN_10004b3d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9668 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6dc0,
                        &PTR____CFConstantStringClassReference_1000a6f28,
                        &PTR_s_snapchat_friending_1000df6e8,&PTR_s_userId_1000df8c0,6,0x30,0x1c);
    puRam00000001000e9668 = puVar1;
  }
  return;
}



/* Entry: 10004b438; end: 10004b49f; +[IncomingFriendLink descriptor] */

void FUN_10004b438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9670 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6e10,
                        &PTR____CFConstantStringClassReference_1000a6f48,
                        &PTR_s_snapchat_friending_1000df6e8,&PTR_s_fromUserId_1000df700,2,0x18,0x1c)
    ;
    puRam00000001000e9670 = puVar1;
  }
  return;
}



/* Entry: 10004b4a0; end: 10004b507; +[IncomingFriendLinksResponse descriptor] */

void FUN_10004b4a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9678 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6e60,
                        &PTR____CFConstantStringClassReference_1000a6f68,
                        &PTR_s_snapchat_friending_1000df6e8,&PTR_s_friendInfosArray_1000df7a0,4,0x20
                        ,0x1c);
    puRam00000001000e9678 = puVar1;
  }
  return;
}



/* Entry: 10004b508; end: 10004b56f; +[FriendInfo descriptor] */

void FUN_10004b508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9680 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6eb0,
                        &PTR____CFConstantStringClassReference_1000a6f88,
                        &PTR_s_snapchat_friending_1000df6e8,&PTR_s_userId_1000df740,3,0x18,0x1c);
    puRam00000001000e9680 = puVar1;
  }
  return;
}



/* Entry: 10004b570; end: 10004b653; +[FriendShortcut descriptor] */

void FUN_10004b570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9688 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6f00,
                        &PTR____CFConstantStringClassReference_1000a6fa8,
                        &PTR_s_snapchat_friending_1000df6e8,&PTR_s_shortcutId_1000df820,5,0x30,0x1c)
    ;
    puRam00000001000e9688 = puVar1;
  }
  return;
}



/* Entry: 10004b654; end: 10004b65f;  */

bool FUN_10004b654(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10004b660; end: 10004b6c7; +[IncomingFriendSyncRequest descriptor] */

void FUN_10004b660(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9698 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6fa0,
                        &PTR____CFConstantStringClassReference_1000a6fe8,
                        &PTR_s_snapchat_friending_1000df980,&PTR_s_syncToken_1000dfb58,7,0x30,0x1c);
    puRam00000001000e9698 = puVar1;
  }
  return;
}



/* Entry: 10004b6c8; end: 10004b72f; +[IncomingFriendSyncResponse descriptor] */

void FUN_10004b6c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d6ff0,
                        &PTR____CFConstantStringClassReference_1000a7008,
                        &PTR_s_snapchat_friending_1000df980,&PTR_s_metadata_1000dfa98,6,0x30,0x1c);
    puRam00000001000e96a0 = puVar1;
  }
  return;
}



/* Entry: 10004b730; end: 10004b797; +[SyncToken descriptor] */

void FUN_10004b730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7040,
                        &PTR____CFConstantStringClassReference_1000a7028,
                        &PTR_s_snapchat_friending_1000df980,&PTR_s_cursor_1000df9f8,5,0x30,0x1c);
    puRam00000001000e96a8 = puVar1;
  }
  return;
}



/* Entry: 10004b798; end: 10004b7ff; +[SyncData descriptor] */

void FUN_10004b798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7090,
                        &PTR____CFConstantStringClassReference_1000a7048,
                        &PTR_s_snapchat_friending_1000df980,&PTR_s_newSyncToken_1000df998,3,0x18,
                        0x1c);
    puRam00000001000e96b0 = puVar1;
  }
  return;
}



/* Entry: 10004b800; end: 10004b8e3; +[IncomingFriend descriptor] */

void FUN_10004b800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d70e0,
                        &PTR____CFConstantStringClassReference_1000a7068,
                        &PTR_s_snapchat_friending_1000df980,&PTR_s_userId_1000dfc38,0x12,0x68,0x1c);
    puRam00000001000e96b8 = puVar1;
  }
  return;
}



/* Entry: 10004b8e4; end: 10004b8ef;  */

bool FUN_10004b8e4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10004b8f0; end: 10004b97f;  */

undefined * FUN_10004b8f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e96c8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc40(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a70a8,&UNK_100090640,
                        &UNK_1000906b8,9,FUN_10004b980,0,&UNK_1000906dc);
    do {
      if (puRam00000001000e96c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e96c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e96c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e96c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e96c8;
}



/* Entry: 10004b980; end: 10004b98b;  */

bool FUN_10004b980(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10004b98c; end: 10004b9f3; +[UserRecentlyActiveRequest descriptor] */

void FUN_10004b98c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d71d0,
                        &PTR____CFConstantStringClassReference_1000a70c8,
                        &PTR_s_snapchat_friending_1000dfe78,&PTR_s_requestsArray_1000dfeb0,2,0x10,
                        0x1c);
    puRam00000001000e96d0 = puVar1;
  }
  return;
}



/* Entry: 10004b9f4; end: 10004ba6f; +[UserRecentlyActiveRequestWithSource descriptor] */

undefined * FUN_10004b9f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7220,
                        &PTR____CFConstantStringClassReference_1000a70e8,
                        &PTR_s_snapchat_friending_1000dfe78,&PTR_s_querySource_1000dfef0,2,0x10,0x1c
                       );
    func_0x000100073940();
    puRam00000001000e96d8 = puVar1;
  }
  return puRam00000001000e96d8;
}



/* Entry: 10004ba70; end: 10004bad7; +[UserRecentlyActiveResponse descriptor] */

void FUN_10004ba70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7270,
                        &PTR____CFConstantStringClassReference_1000a7108,
                        &PTR_s_snapchat_friending_1000dfe78,&PTR_s_responsesArray_1000dfe90,1,0x10,
                        0x1c);
    puRam00000001000e96e0 = puVar1;
  }
  return;
}



/* Entry: 10004bad8; end: 10004bb53; +[UserRecentlyActive descriptor] */

undefined * FUN_10004bad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d72c0,
                        &PTR____CFConstantStringClassReference_1000a7128,
                        &PTR_s_snapchat_friending_1000dfe78,&PTR_s_userId_1000dff30,2,0x10,0x1c);
    func_0x000100073940();
    puRam00000001000e96e8 = puVar1;
  }
  return puRam00000001000e96e8;
}



/* Entry: 10004bb54; end: 10004bbcf; +[UserRecentlyActiveResponseWithSource descriptor] */

undefined * FUN_10004bb54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d7310,
                        &PTR____CFConstantStringClassReference_1000a7148,
                        &PTR_s_snapchat_friending_1000dfe78,&PTR_s_querySource_1000dff70,2,0x10,0x1c
                       );
    func_0x000100073940();
    puRam00000001000e96f0 = puVar1;
  }
  return puRam00000001000e96f0;
}



/* Entry: 10004bbd0; end: 10004bc37; +[SCFriendingLocation descriptor] */

void FUN_10004bbd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e96f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000d73b0,
                        &PTR____CFConstantStringClassReference_1000a7168,
                        &PTR_s_snapchat_friending_1000dffb0,&PTR_s_lat_1000e0028,4,0x20,0x1c);
    puRam00000001000e96f8 = puVar1;
  }
  return;
}


