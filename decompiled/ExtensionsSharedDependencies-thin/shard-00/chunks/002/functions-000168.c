/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00410b88; end: 00410be3; -[SCNotifExtAttachmentCache objectForKey:] */

void FUN_00410b88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00791560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x0078aee0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 00410be4; end: 00410bef; -[SCNotifExtAttachmentCache .cxx_destruct] */

void FUN_00410be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00410bf0; end: 00410d13; -[SCNotifExtAttachmentModifier initWithProcessingScope:] */

undefined8 FUN_00410bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  _objc_retain(param_3);
  func_0x00791540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCNotifExtAttachmentCache_00ac2a78;
  _objc_alloc(PTR__OBJC_CLASS___SCNotifExtAttachmentCache_00ac2a78);
  uVar3 = param_3;
  func_0x007934e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x007933e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00786d20(puVar2,param_2,uVar4);
  uVar5 = param_3;
  func_0x00784160(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___SCTimeProvider_00ac2a80;
  _objc_opt_new(PTR__OBJC_CLASS___SCTimeProvider_00ac2a80);
  func_0x00785d60(param_1,param_2,puVar1,param_3,puVar2,uVar5,puVar6,&UNK_00004e20);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 00410d14; end: 00410e1b; -[SCNotifExtAttachmentModifier initWithNetworkingAPIClient:processingScope:keyValueStore:grapheneLogger:timeProvider:timeoutInMs:] */

undefined1 *
FUN_00410d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR__OBJC_CLASS___SCNotifExtAttachmentModifier_00ac39a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00410e1c; end: 00410f67; -[SCNotifExtAttachmentModifier addAttachmentWithMutableNotificationContent:attachmentName:attachmentUrlString:additionalHttpHeaders:useCache:cropType:completionHandler:] */

void FUN_00410e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  lVar2 = param_5;
  func_0x007882e0();
  if ((param_9 != 0) && (lVar2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x007812a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar3);
    if ((int)param_7 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00789ea0(lVar2,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x0077d2a0(param_1,param_2,param_3,param_4,lVar2,1,param_8,param_9);
        _objc_release(lVar2);
        goto LAB_00410f24;
      }
    }
    func_0x0077c820(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
LAB_00410f24:
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00410f68; end: 0041111b; -[SCNotifExtAttachmentModifier decryptAndAddAttachmentWithMutableNotificationContent:attachmentName:attachmentUrlString:attachmentMediaKey:attachmentMediaIv:additionalHttpHeaders:useCache:completionHandler:] */

void FUN_00410f68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,long param_6,long param_7,undefined8 param_8,char param_9,undefined4 param_10,
                 long param_11)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  lVar3 = param_5;
  func_0x007882e0();
  if ((((lVar3 != 0) && (lVar3 = param_6, func_0x007882e0(), lVar3 != 0)) &&
      (lVar3 = param_7, func_0x007882e0(), param_11 != 0)) && (lVar3 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x007812a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar4);
    lVar3 = param_6;
    func_0x007882e0();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = param_7;
      func_0x007882e0();
      bVar1 = lVar3 != 0;
    }
    *(bool *)(param_1 + 0x28) = bVar1;
    if (param_9 != '\0') {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00789ea0(lVar3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x0077d2a0(param_1,param_2,param_3,param_4,lVar3,1,0,param_11);
        _objc_release(lVar3);
        goto LAB_004110c8;
      }
    }
    func_0x0077c640(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
LAB_004110c8:
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0041111c; end: 00411293; -[SCNotifExtAttachmentModifier readAndDecryptFromCacheOrDownloadWithNotificationContent:key:imageImageURL:imageKey:imageIv:additionalHttpHeaders:completionHandler:] */

void FUN_0041111c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00789ea0(lVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x007812a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar5);
  lVar4 = param_6;
  func_0x007882e0();
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = param_7;
    func_0x007882e0();
    bVar1 = lVar4 != 0;
  }
  *(bool *)(param_1 + 0x28) = bVar1;
  if (lVar2 == 0) {
    func_0x0077c840(param_1,param_2,param_4,param_5,param_6,param_7,param_3,param_8,param_9);
  }
  else {
    func_0x0077d2e0(param_1,param_2,lVar2,1,param_3,param_9);
  }
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00411294; end: 0041163b; -[SCNotifExtAttachmentModifier readAndDecryptFromCacheOrDownloadWithNotificationContent:key:imageImageURL:imageKey:imageIv:isWrappedThumbnail:additionalHttpHeaders:completionHandler:] */

void FUN_00411294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7,int param_8,undefined8 param_9,
                 long param_10)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x007812a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar7);
  lVar4 = param_6;
  func_0x007882e0();
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = param_7;
    func_0x007882e0();
    bVar1 = lVar4 != 0;
  }
  *(bool *)(param_1 + 0x28) = bVar1;
  if (lVar2 == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_10);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_4);
    uStack_70 = (undefined1)param_8;
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00788d20(uVar3);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_10);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  else if (param_8 == 0) {
    func_0x0077d2e0(param_1);
  }
  else {
    lVar4 = param_1;
    func_0x0077d300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x007812a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00792900();
    uVar3 = param_3;
    func_0x00793400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00789f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d220(param_1);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar3);
    (**(code **)(param_10 + 0x10))(param_10,lVar4,1);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0041163c; end: 004118e3;  */

void FUN_0041163c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
    func_0x00787c80();
    if ((int)puVar2 != 0) {
      _objc_retain(param_3);
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x007882e0();
      uVar7 = param_3;
      if (lVar3 != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        func_0x007882e0();
        if (lVar3 != 0) {
          func_0x0078c520(param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_3);
        }
      }
      func_0x0077d980(lVar1);
      if (*(char *)(param_1 + 0x58) == '\x01') {
        lVar3 = lVar1;
        func_0x0077d300();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(lVar1 + 0x30);
        func_0x007812a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00792900();
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00793400(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
        func_0x00792f20(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                       );
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00789f00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077d220(lVar1);
        _objc_release(uVar6);
        _objc_release(puVar2);
        _objc_release(uVar5);
        (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),lVar3,0);
        _objc_release(uVar4);
        _objc_release(lVar3);
      }
      else {
        func_0x0077d2e0(lVar1);
      }
      _objc_release(uVar7);
      goto LAB_004118a8;
    }
    func_0x00788520(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00793400(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00789f00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d200(lVar1);
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(uVar6);
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0);
LAB_004118a8:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004118e4; end: 00411993;  */

void FUN_004118e4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 00411994; end: 00411b37; -[SCNotifExtAttachmentModifier _downloadAndAddAttachmentMutableContent:attachmentName:attachmentUrlString:additionalHttpHeaders:saveToCache:cropType:completionHandler:] */

void FUN_00411994(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_78 = param_8;
  _objc_retain(param_9);
  uStack_70 = param_7;
  _objc_retain(param_5);
  func_0x00788d20(uVar1);
  _objc_release(param_5);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00411b38; end: 00411c9f;  */

void FUN_00411b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  func_0x00787c80();
  if ((int)puVar1 == 0) {
    func_0x00788520(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00793400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00789f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d200(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0);
  }
  else {
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar2);
    func_0x0077d2a0();
    _objc_release(lVar2);
    if (*(char *)(param_1 + 0x58) == '\x01') {
      param_1 = param_1 + 0x48;
      _objc_loadWeakRetained(param_1);
      func_0x0077d980();
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00411ca0; end: 00411d3f;  */

void FUN_00411ca0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 00411d40; end: 00411f2b; -[SCNotifExtAttachmentModifier _decryptAndAddAttachmentMutableContent:attachmentName:attachmentUrlString:attachmentMediaKey:attachmentMediaIv:additionalHttpHeaders:saveToCache:completionHandler:] */

void FUN_00411d40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_11);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_9;
  _objc_retain(param_5);
  func_0x00788d20(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00411f2c; end: 004120b7;  */

void FUN_00411f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
    func_0x00787c80();
    if ((int)puVar2 != 0) {
      uVar4 = param_3;
      func_0x0078c520(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077d2a0(lVar1);
      if (*(char *)(param_1 + 0x58) == '\x01') {
        func_0x0077d980(lVar1);
      }
      _objc_release(uVar4);
      goto LAB_00412084;
    }
    func_0x00788520(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00793400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00789f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d200(lVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0);
LAB_00412084:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004120b8; end: 004121c7; -[SCNotifExtAttachmentModifier readFromCacheOrDownloadWithNotificationContent:key:imageImageURL:additionalHttpHeaders:completionHandler:] */

void FUN_004120b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00789ea0(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x007812a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  if (lVar3 == 0) {
    func_0x0077c860(param_1,param_2,param_4,param_5,param_6,param_3,param_7);
  }
  else {
    func_0x0077d2e0(param_1,param_2,lVar3,1,param_3,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 004121c8; end: 004123ab; -[SCNotifExtAttachmentModifier _downloadDecryptStoreInCacheAndMakeImageWithKey:imageImageURL:imageKey:imageIv:notificationContent:additionalHttpHeaders:completionHandler:] */

void FUN_004121c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_4);
  func_0x00788d20(uVar1);
  _objc_release(param_4);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 004123ac; end: 00412523;  */

void FUN_004123ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  func_0x00787c80();
  if ((int)puVar1 == 0) {
    func_0x00788520(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00793400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00789f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d200(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),0,0);
  }
  else {
    uVar4 = param_3;
    func_0x0078c520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x0077d980();
    _objc_release(lVar2);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x0077d2e0();
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00412524; end: 004125e3;  */

void FUN_00412524(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 004125e4; end: 0041276f; -[SCNotifExtAttachmentModifier _downloadStoreInCacheAndMakeImageWithKey:imageImageURL:additionalHttpHeaders:notificationContent:completionHandler:] */

void FUN_004125e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00788d20(uVar1);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00412770; end: 004128c7;  */

void FUN_00412770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_00ac2a30;
  func_0x00787c80();
  if ((int)puVar1 == 0) {
    func_0x00788520(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00793400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00789f00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d200(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,0);
  }
  else {
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar2);
    func_0x0077d980();
    _objc_release(lVar2);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x0077d2e0();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004128c8; end: 00412a0f; -[SCNotifExtAttachmentModifier _makeImageWithData:fromCache:notificationContent:completionHandler:] */

void FUN_004128c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_00ac2a88;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x0078c020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x007812a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792900();
  uVar3 = param_5;
  func_0x00793400(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
  ;
  func_0x00792f20(
                 PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                 );
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00789f00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077d220(param_1);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  (**(code **)(param_6 + 0x10))(param_6,puVar1,param_4);
  _objc_release(param_6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00412a10; end: 00412b83; -[SCNotifExtAttachmentModifier _makeImageWithWrappedData:] */

void FUN_00412a10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uStack_48;
  uint uStack_44;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x007882e0();
  if (uVar4 != 0) {
    uStack_44 = 0;
    func_0x00783d20(param_3,param_2,&uStack_44,0,4);
    uVar4 = (ulong)uStack_44;
    if (uStack_44 != 0) {
      uStack_48 = 0;
      func_0x00783d20(param_3,param_2,&uStack_48,4,4);
      uVar6 = (ulong)uStack_48;
      uVar2 = param_3;
      func_0x007882e0();
      lVar1 = uVar4 * 4 + 4;
      if (lVar1 + uVar6 <= uVar2) {
        uVar4 = param_3;
        func_0x00792320(param_3,param_2,lVar1,uStack_48);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIImage_00ac2a88;
        func_0x0078c020(PTR__OBJC_CLASS___UIImage_00ac2a88,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x0077c200(param_1,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077d260(param_1);
        _objc_release(puVar3);
        _objc_release(uVar4);
        goto LAB_00412aa0;
      }
    }
  }
  uVar5 = 0;
LAB_00412aa0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar5);
  return;
}



/* Entry: 00412b84; end: 00412c93; -[SCNotifExtAttachmentModifier _centerCropToSquareImage:] */

void FUN_00412b84(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  if (param_5 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x007918a0(param_5);
    func_0x007918a0(param_5);
    if (param_1 == param_2) {
      _objc_retain(param_5);
      puVar4 = param_5;
    }
    else {
      dVar6 = param_1;
      if (param_2 <= param_1) {
        dVar6 = param_2;
      }
      dVar5 = (param_1 - dVar6) * 0.5;
      puVar1 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x0077b880();
      _CGImageCreateWithImageInRect(dVar5,(param_2 - dVar6) * 0.5,dVar6,dVar6);
      puVar4 = PTR__OBJC_CLASS___UIImage_00ac2a88;
      puVar2 = param_5;
      func_0x007846a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078c200();
      puVar3 = param_5;
      func_0x00784680(param_5);
      func_0x00784720(dVar5,puVar4,param_4,puVar1,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00412c94; end: 00412c9b; -[SCNotifExtAttachmentModifier _saveDataToCache:forKey:] */

void FUN_00412c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078f530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setObjectData_forKey__00abea58);
  return;
}



/* Entry: 00412c9c; end: 00412e3b; -[SCNotifExtAttachmentModifier _makeAttachmentWithMutableNotificationContent:attachmentName:data:fromCache:cropType:completionHandler:] */

void FUN_00412c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIImage_00ac2a88;
  _objc_retain(param_3);
  func_0x0078c020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x0077d9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0077d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = param_3;
    func_0x00793400(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00789f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d200(param_1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    (**(code **)(param_8 + 0x10))(param_8,0,param_6);
  }
  else {
    func_0x0077bea0(param_1);
    _objc_release(param_3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 00412e3c; end: 00412f63; -[SCNotifExtAttachmentModifier _optionsFromImage:cropType:] */

void FUN_00412e3c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined **param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar4 = param_5;
  puVar5 = param_6;
  _objc_retain(param_5);
  func_0x007918a0(param_5);
  func_0x007918a0(param_5);
  _objc_release(param_5);
  puVar6 = (undefined *)0x0;
  param_1 = param_1 / param_2;
  if ((param_1 <= 1.0 && param_6 == (undefined8 *)((long)&MACH_HEADER.magic + 1)) &&
     (1.05 <= param_1 || param_1 <= 0.95)) {
    _CGRectCreateDictionaryRepresentation(0,0,0x3ff0000000000000);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00782020(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = *(undefined8 *)PTR__UNNotificationAttachmentOptionsThumbnailClippingRectKey_009990e0
    ;
    ppuVar4 = &puStack_40;
    puVar5 = &uStack_48;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    puStack_40 = puVar1;
    func_0x00782080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    _objc_retain(puVar5);
    ppuVar2 = ppuVar4;
    _objc_retain(ppuVar4);
    func_0x005b5c0c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00791e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x007834e0(puVar1,param_4,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar4;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar2;
    func_0x0078c1a0(ppuVar2,param_4,puVar1,1);
    if ((int)ppuVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar1);
      puVar6 = puVar1;
    }
    _objc_release(ppuVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar6);
  return;
}



/* Entry: 00412f64; end: 00413057; -[SCNotifExtAttachmentModifier _saveImage:identifier:] */

void FUN_00412f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x007834e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x0078c1a0(uVar1,param_2,puVar3,1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00413058; end: 004132d3; -[SCNotifExtAttachmentModifier _addAttachmentToMutableContent:attachmentName:fileURL:fromCache:options:completionHandler:] */

void FUN_00413058(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,ulong param_6,undefined8 param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x0077d280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = param_3;
    func_0x00793400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00789f00(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d200(param_1);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    (**(code **)(param_8 + 0x10))(param_8,0,param_6);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x0077f360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_3;
      func_0x0077f360(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e760(puVar5);
      _objc_release(lVar4);
    }
    func_0x0077e720(puVar5);
    puVar2 = puVar5;
    func_0x00780e20(puVar5);
    func_0x0078cca0(param_3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x007812a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792900();
    lVar4 = param_3;
    func_0x00793400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980;
    func_0x00792f20(
                   PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_00ac2980
                   );
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00789f00(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d220(param_1);
    _objc_release(lVar6);
    _objc_release(puVar2);
    _objc_release(lVar4);
    (**(code **)(param_8 + 0x10))(param_8,1,param_6 & 0xffffffff);
    _objc_release(param_8);
    _objc_release(uVar3);
    param_8 = puVar5;
  }
  _objc_release(param_8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004132d4; end: 00413357; -[SCNotifExtAttachmentModifier _makeAttachmentWithIdentifier:fileURL:options:] */

void FUN_004132d4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UNNotificationAttachment_00ac2a98;
  func_0x0077f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (puVar1 == (undefined *)0x0) {
    func_0x00788520(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00413358; end: 0041349f; -[SCNotifExtAttachmentModifier _logGrapheneExtensionAttachmentSuccessLatency:notificationType:fromCache:] */

void FUN_00413358(long param_1,undefined8 param_2,long param_3,undefined **param_4,int param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_60 = &PTR____CFConstantStringClassReference_00a214c0;
  if (param_4 != (undefined **)0x0) {
    ppuStack_60 = param_4;
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_00a214a0;
  ppuStack_70 = &PTR____CFConstantStringClassReference_00a214e0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_00a21460;
  if (param_5 == 0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_00a21500;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_00a21520;
  ppuStack_50 = &PTR____CFConstantStringClassReference_00a21460;
  if (*(char *)(param_1 + 0x28) == '\0') {
    ppuStack_50 = &PTR____CFConstantStringClassReference_00a21500;
  }
  _objc_retain(param_4);
  func_0x00782080(puVar1,param_2,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_alloc();
  iVar6 = 0xa21540;
  func_0x00786420();
  ppuVar5 = ppuVar2;
  func_0x0077e920((double)param_3,*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_4);
  _objc_release(ppuVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  pcStack_88 = FUN_004134a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_00a214c0;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_d0 = ppuVar5;
  }
  ppuStack_e8 = &PTR____CFConstantStringClassReference_00a214a0;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_00a214e0;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_00a21460;
  if (iVar6 == 0) {
    ppuStack_c8 = &PTR____CFConstantStringClassReference_00a21500;
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_00a21520;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_00a21460;
  if (puVar3[0x28] == '\0') {
    ppuStack_c0 = &PTR____CFConstantStringClassReference_00a21500;
  }
  puStack_b0 = puVar1;
  lStack_a8 = param_1;
  lStack_a0 = param_3;
  ppuStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  func_0x00782080(puVar4,param_2,&ppuStack_d0,&ppuStack_e8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  func_0x00786420();
  func_0x00784860(*(undefined8 *)(puVar3 + 0x18),param_2,puVar1,1);
  _objc_release(ppuVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  func_0x00786420();
  func_0x00784860(*(undefined8 *)(puVar4 + 0x18),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 004134a0; end: 004135db; -[SCNotifExtAttachmentModifier _logGrapheneExtensionAttachmentFailureWithNotifType:fromCache:] */

void FUN_004134a0(long param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_50 = &PTR____CFConstantStringClassReference_00a214c0;
  if (param_3 != (undefined **)0x0) {
    ppuStack_50 = param_3;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_00a214a0;
  ppuStack_60 = &PTR____CFConstantStringClassReference_00a214e0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_00a21460;
  if (param_4 == 0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_00a21500;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_00a21520;
  ppuStack_40 = &PTR____CFConstantStringClassReference_00a21460;
  if (*(char *)(param_1 + 0x28) == '\0') {
    ppuStack_40 = &PTR____CFConstantStringClassReference_00a21500;
  }
  _objc_retain(param_3);
  func_0x00782080(puVar1,param_2,&ppuStack_50,&ppuStack_68,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  func_0x00786420();
  func_0x00784860(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,1);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  func_0x00786420();
  func_0x00784860(*(undefined8 *)(puVar1 + 0x18),param_2,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 004135dc; end: 00413637; -[SCNotifExtAttachmentModifier _logGrapheneUnwrapImageSuccess] */

void FUN_004135dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
  func_0x00786420();
  func_0x00784860(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00413638; end: 0041373b; -[SCNotifExtAttachmentModifier _logGrapheneUnwrapImageFailureWithException:] */

void FUN_00413638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00789760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
  _objc_alloc();
  func_0x00786420();
  func_0x00784860(*(undefined8 *)(param_1 + 0x18));
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(puVar1 + 8,0);
  return;
}



/* Entry: 0041373c; end: 0041378f; -[SCNotifExtAttachmentModifier .cxx_destruct] */

void FUN_0041373c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00413790; end: 0041384f; -[SCNotifExtAuthTokenProvider authToken] */

void FUN_00413790(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x0077f5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_alloc();
    func_0x007851e0();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 8);
    func_0x007882e0();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      _objc_release(uVar3);
    }
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar4);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar4);
  return;
}



/* Entry: 00413850; end: 00413863; -[SCNotifExtAuthTokenProvider authTokenData] */

void FUN_00413850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00781510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___SCKeychainManager_00ac2aa8,PTR_s_dataForKey__00abb238,
             &PTR____CFConstantStringClassReference_00a215e0);
  return;
}



/* Entry: 00413864; end: 00413877; -[SCNotifExtAuthTokenProvider .cxx_destruct] */

void FUN_00413864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00413878; end: 004138a3;  */

bool _SCNotifExtPhoneSupportsLeftImageOnCommNotif(void)

{
  int iVar1;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0xf,1,0);
  return iVar1 != 0;
}



/* Entry: 004138a4; end: 00413a37;  */

void _SCNotifExtModifyContentForCommNotif(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00789f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00789f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(param_1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00789f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078cfe0(param_2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 != 0) && (lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00789f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00413a38; end: 00413abb; -[SCNotifExtConvoConvNotInMainRepository initWithUserId:] */

undefined8 FUN_00413a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00784ae0();
  func_0x00786e00(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 00413abc; end: 00413b5f; -[SCNotifExtConvoConvNotInMainRepository initWithUserId:sharedExtensionFile:] */

undefined1 *
FUN_00413abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR__OBJC_CLASS___SCNotifExtConvoConvNotInMainRepository_00ac39b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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



/* Entry: 00413b60; end: 00413c4f; -[SCNotifExtConvoConvNotInMainRepository getConsumableConversations] */

void FUN_00413b60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078aee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784a40();
  _objc_release(uVar2);
  func_0x0078ff20(puVar1);
  puVar3 = puVar1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_00ac2a68);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  puVar4 = puVar3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSSet_00ac2a68;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_00ac2a68);
  }
  else {
    _objc_retain(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00413c50; end: 00413cef; -[SCNotifExtConvoConvNotInMainRepository addConversationId:] */

void FUN_00413c50(long param_1,undefined8 param_2,undefined8 param_3)

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
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00413cf0;
  puStack_30 = &UNK_009e2e50;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x007894e0(uVar1,param_2,&puStack_48,&uStack_50);
  uVar1 = uStack_50;
  _objc_retain(uStack_50);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 00413cf0; end: 00413e0f;  */

void FUN_00413cf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00784a40();
  _objc_release(param_2);
  func_0x0078ff20(puVar1);
  puVar2 = puVar1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    func_0x007913a0(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0077e720(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00413e10; end: 00413eaf; -[SCNotifExtConvoConvNotInMainRepository removeConversationId:] */

void FUN_00413e10(long param_1,undefined8 param_2,undefined8 param_3)

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
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00413eb0;
  puStack_30 = &UNK_009e2e50;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x007894e0(uVar1,param_2,&puStack_48,&uStack_50);
  uVar1 = uStack_50;
  _objc_retain(uStack_50);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 00413eb0; end: 00413fab;  */

void FUN_00413eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00784a40();
  _objc_release(param_2);
  func_0x0078ff20(puVar1);
  puVar2 = puVar1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x0078b460(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00413fac; end: 00413fdb; -[SCNotifExtConvoConvNotInMainRepository .cxx_destruct] */

void FUN_00413fac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00413fdc; end: 0041405f; -[SCNotifExtMainAppConsumableConvFetcher initWithUserId:] */

undefined8 FUN_00413fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00784ae0();
  func_0x00786e00(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 00414060; end: 00414103; -[SCNotifExtMainAppConsumableConvFetcher initWithUserId:sharedExtensionFile:] */

undefined1 *
FUN_00414060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR__OBJC_CLASS___SCNotifExtMainAppConsumableConvFetcher_00ac39b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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



/* Entry: 00414104; end: 004141f3; -[SCNotifExtMainAppConsumableConvFetcher getConsumableConversations] */

void FUN_00414104(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078aee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784a40();
  _objc_release(uVar2);
  func_0x0078ff20(puVar1);
  puVar3 = puVar1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_00ac2a68);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  puVar4 = puVar3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSSet_00ac2a68;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_00ac2a68);
  }
  else {
    _objc_retain(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 004141f4; end: 00414223; -[SCNotifExtMainAppConsumableConvFetcher .cxx_destruct] */

void FUN_004141f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00414224; end: 0041437b;  */

/* WARNING: Removing unreachable block (ram,0x004142c0) */

long _SCNotifExtTypeContainedIn(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_2);
  FUN_0041437c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00780ea0();
  lVar6 = 0;
  if (lVar1 != 0) {
    do {
      lVar6 = 0;
      do {
        uVar2 = *(ulong *)(lVar6 * 8);
        FUN_0041437c();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x007878e0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar6 = 1;
          goto LAB_00414328;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_2;
      func_0x00780ea0();
    } while (lVar1 != 0);
    lVar6 = 0;
  }
LAB_00414328:
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return lVar6;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  _objc_retain();
  _objc_alloc(puVar4);
  func_0x00785aa0();
  lVar6 = param_2;
  func_0x00788be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar6);
  return lVar6;
}



/* Entry: 0041437c; end: 004143ef;  */

void FUN_0041437c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00785aa0();
  uVar2 = param_1;
  func_0x00788be0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 004143f0; end: 004143fb; -[SCNotificationCenterProvider notificationCenter] */

void FUN_004143f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00781370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___UNUserNotificationCenter_00ac2a58,
             PTR_s_currentNotificationCenter_00abb1d0);
  return;
}



/* Entry: 004143fc; end: 0041454f; -[SCNotifExtUserSession initWithUserId:username:blizzardLogger:] */

undefined8
FUN_004143fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_00ac2ad0;
  _objc_alloc_init(PTR_PTR_00ac2ad0);
  puVar2 = puVar1;
  func_0x0077f580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCNotifExtUserSession_00ac2a40;
  func_0x007811c0(PTR__OBJC_CLASS___SCNotifExtUserSession_00ac2a40,param_2,param_3,param_4,puVar2,
                  param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00786e40(param_1,param_2,param_3,param_4,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 00414550; end: 00414693; -[SCNotifExtUserSession initWithUserId:username:authTokenProvider:snapTokenProvider:] */

undefined1 *
FUN_00414550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR__OBJC_CLASS___SCNotifExtUserSession_00ac39c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00414694; end: 0041469b; -[SCNotifExtUserSession authToken] */

void FUN_00414694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_authToken_00abaa58);
  return;
}



/* Entry: 0041469c; end: 004147bf; +[SCNotifExtUserSession createPrimedSnapTokenManagerWithUserId:username:authToken:blizzardLogger:] */

void FUN_0041469c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = param_5;
    FUN_0042a7dc(param_5,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x007831a0(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 004147c0; end: 004147c3;  */

void FUN_004147c0(void)

{
  return;
}



/* Entry: 004147c4; end: 004148d7;  */

void FUN_004147c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00788540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x007823e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x007823e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac2ad8;
  func_0x007823e0(PTR_PTR_00ac2ad8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x007878e0();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_00ac2ae0;
  if ((int)uVar3 != 0) {
    func_0x00780460(param_2);
    func_0x0077ba40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004148d8; end: 004148df; -[SCNotifExtUserSession userId] */

undefined8 FUN_004148d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004148e0; end: 004148e7; -[SCNotifExtUserSession username] */

undefined8 FUN_004148e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004148e8; end: 004148ef; -[SCNotifExtUserSession snapTokenProvider] */

undefined8 FUN_004148e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004148f0; end: 004149b3; -[SCNotifExtUserSession .cxx_destruct] */

void FUN_004148f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004149b4; end: 004149bf;  */

bool FUN_004149b4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 004149c0; end: 00414a27; +[SCPBNClientPayload descriptor] */

void FUN_004149c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f658 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,
                    &_OBJC_CLASS___SCPBNClientPayload,
                    &PTR____CFConstantStringClassReference_00a216c0,
                    &PTR_s_snapchat_notification_00afb788,&PTR_s_displayModel_00afb7a0,4,0x28,0x1c);
    puRam0000000000b5f658 = puVar1;
  }
  return;
}



/* Entry: 00414a28; end: 00414aa3; +[SCPBNDuplexNotification descriptor] */

undefined * FUN_00414a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f660 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00acff68,
                    &PTR____CFConstantStringClassReference_00a216e0,
                    &PTR_s_snapchat_notification_00afb820,&PTR_s_json_00afb838,2,0x10,0x1c);
    func_0x00791440();
    puRam0000000000b5f660 = puVar1;
  }
  return puRam0000000000b5f660;
}



/* Entry: 00414aa4; end: 00414b9b; +[SCPushNotificationLocalizationString descriptor] */

undefined * FUN_00414aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5f668 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad0008,
                    &PTR____CFConstantStringClassReference_00a21700,
                    &PTR_s_snapchat_notification_00afb878,&PTR_s_key_00afb890,3,0x20,0x1c);
    func_0x00791440();
    puRam0000000000b5f668 = puVar1;
  }
  return puRam0000000000b5f668;
}



/* Entry: 00414b9c; end: 00414bb7;  */

uint FUN_00414b9c(uint param_1)

{
  return (uint)(param_1 < 0x14) & 0xffb1fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 00414bb8; end: 00414c33;  */

undefined * FUN_00414bb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f678 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21740,&UNK_007fc510,&UNK_007fc52c,3,
                    FUN_00414c34,0);
    do {
      if (puRam0000000000b5f678 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f678;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f678,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f678 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f678;
}



/* Entry: 00414c34; end: 00414c3f;  */

bool FUN_00414c34(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 00414c40; end: 00414cbb;  */

undefined * FUN_00414c40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f680 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21760,&UNK_007fc538,&UNK_007fc578,6,
                    FUN_00414cbc,0);
    do {
      if (puRam0000000000b5f680 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f680;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f680,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f680 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f680;
}



/* Entry: 00414cbc; end: 00414cc7;  */

bool FUN_00414cbc(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 00414cc8; end: 00414d43;  */

undefined * FUN_00414cc8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f688 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21780,&UNK_007fc590,&UNK_007fc5b4,3,
                    FUN_00414d44,0);
    do {
      if (puRam0000000000b5f688 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f688;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f688,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f688 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f688;
}



/* Entry: 00414d44; end: 00414d4f;  */

bool FUN_00414d44(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 00414d50; end: 00414dcb;  */

undefined * FUN_00414d50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f690 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a217a0,&UNK_007fc5c0,&UNK_007fc730,0x1c
                    ,FUN_00414dcc,0);
    do {
      if (puRam0000000000b5f690 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f690;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f690,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f690 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f690;
}



/* Entry: 00414dcc; end: 00414dd7;  */

bool FUN_00414dcc(uint param_1)

{
  return param_1 < 0x1c;
}



/* Entry: 00414dd8; end: 00414e53;  */

undefined * FUN_00414dd8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f698 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a217c0,&UNK_007fc7a0,&UNK_007fc7b4,2,
                    FUN_00414e54,0);
    do {
      if (puRam0000000000b5f698 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f698;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f698,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f698 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f698;
}



/* Entry: 00414e54; end: 00414e5f;  */

bool FUN_00414e54(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 00414e60; end: 00414edb;  */

undefined * FUN_00414e60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6a0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a217e0,&UNK_007fc7bc,&UNK_007fc7e0,3,
                    FUN_00414edc,0);
    do {
      if (puRam0000000000b5f6a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6a0;
}



/* Entry: 00414edc; end: 00414ee7;  */

bool FUN_00414edc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 00414ee8; end: 00414f63;  */

undefined * FUN_00414ee8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6a8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21800,&UNK_007fc7ec,&UNK_007fc854,8,
                    FUN_00414f64,0);
    do {
      if (puRam0000000000b5f6a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6a8;
}



/* Entry: 00414f64; end: 00414f6f;  */

bool FUN_00414f64(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 00414f70; end: 00414feb;  */

undefined * FUN_00414f70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6b0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21820,&UNK_007fc874,&UNK_007fc8a0,3,
                    FUN_00414fec,0);
    do {
      if (puRam0000000000b5f6b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6b0;
}



/* Entry: 00414fec; end: 00414ff7;  */

bool FUN_00414fec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 00414ff8; end: 00415073;  */

undefined * FUN_00414ff8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6b8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21840,&UNK_007fc8ac,&UNK_007fc99c,0xe,
                    FUN_00415074,0);
    do {
      if (puRam0000000000b5f6b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6b8;
}



/* Entry: 00415074; end: 0041507f;  */

bool FUN_00415074(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 00415080; end: 004150fb;  */

undefined * FUN_00415080(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6c0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21860,&UNK_007fc9d4,&UNK_007fca60,9,
                    FUN_004150fc,0);
    do {
      if (puRam0000000000b5f6c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6c0;
}



/* Entry: 004150fc; end: 00415123;  */

bool FUN_004150fc(uint param_1)

{
  return param_1 < 4 || (param_1 - 0xc9 < 3 || param_1 - 0x65 < 2);
}



/* Entry: 00415124; end: 0041519f;  */

undefined * FUN_00415124(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6c8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21880,&UNK_007fca84,&UNK_007fcad0,6,
                    FUN_004151a0,0);
    do {
      if (puRam0000000000b5f6c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6c8;
}



/* Entry: 004151a0; end: 004151ab;  */

bool FUN_004151a0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 004151ac; end: 00415227;  */

undefined * FUN_004151ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6d0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a218a0,&UNK_007fcae8,&UNK_007fcb18,5,
                    FUN_00415228,0);
    do {
      if (puRam0000000000b5f6d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6d0;
}



/* Entry: 00415228; end: 00415233;  */

bool FUN_00415228(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 00415234; end: 004152af;  */

undefined * FUN_00415234(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6d8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a218c0,&UNK_007fcb2c,&UNK_007fcb4c,3,
                    FUN_004152b0,0);
    do {
      if (puRam0000000000b5f6d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6d8;
}



/* Entry: 004152b0; end: 004152bb;  */

bool FUN_004152b0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 004152bc; end: 00415337;  */

undefined * FUN_004152bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6e0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a218e0,&UNK_007fcb58,&UNK_007fcb6c,3,
                    FUN_00415338,0);
    do {
      if (puRam0000000000b5f6e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6e0;
}



/* Entry: 00415338; end: 00415343;  */

bool FUN_00415338(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 00415344; end: 004153bf;  */

undefined * FUN_00415344(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f6e8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a21900,&UNK_007fcb78,&UNK_007fcbb8,5,
                    FUN_004153c0,0);
    do {
      if (puRam0000000000b5f6e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f6e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f6e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f6e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f6e8;
}



/* Entry: 004153c0; end: 004153cb;  */

bool FUN_004153c0(uint param_1)

{
  return param_1 < 5;
}


