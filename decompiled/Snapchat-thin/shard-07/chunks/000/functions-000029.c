/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105085404; end: 10508543b; -[SCProfileChatMediaContainerCollectionViewCell setRoundedCorners:] */

void FUN_105085404(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5df8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setRoundedCorners__112659488,0xffffffffffffffff);
  return;
}



/* Entry: 10508543c; end: 10508550b; -[SCProfileChatMediaContainerCollectionViewCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508543c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar4;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11271b340);
  uVar3 = param_5;
  uVar5 = param_1;
  uVar7 = param_2;
  uVar9 = param_3;
  uVar11 = param_4;
  func_0x00010bfb68e0();
  uVar6 = *puVar1;
  uVar8 = puVar1[1];
  uVar10 = puVar1[2];
  uVar12 = puVar1[3];
  _CGRectIntersectsRect(uVar6,uVar8,uVar10,uVar12,uVar5,uVar7,uVar9,uVar11);
  uVar4 = param_5;
  func_0x00010bfb68e0();
  uVar2 = (uint)uVar4;
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar6,uVar8,uVar10,uVar12);
  if (((uVar3 & 1) == 0) && (uVar2 != 0)) {
    func_0x00010be2fa40(param_5);
  }
  else if ((((uint)uVar3 ^ 1 | uVar2) & 1) == 0) {
    func_0x00010be2fa60(param_5);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10508550c; end: 105085717; -[SCProfileChatMediaContainerCollectionViewCell baseViewForChatMediaDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508550c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4650;
  uVar8 = *(ulong *)(param_1 + _DAT_11271b35c);
  _objc_retain(uVar8);
  _objc_opt_class(puVar2);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar1 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar9 = uVar1;
  func_0x00010c1166e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf529e0();
  _objc_release(uVar9);
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      uVar8 = uVar1;
      func_0x00010c1166e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf36b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(param_3);
      if (uVar4 == param_3) {
        _objc_release(param_3);
        _objc_release(uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar8);
LAB_1050856b4:
        uVar6 = *(undefined8 *)(param_1 + _DAT_11271b348);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c26dee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        goto LAB_1050856ec;
      }
      if (param_3 == 0) {
        _objc_release();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar8);
      }
      else {
        uVar5 = uVar4;
        func_0x00010c071ae0();
        _objc_release(param_3);
        _objc_release(uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar8);
        if ((uVar5 & 1) != 0) goto LAB_1050856b4;
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar1;
      func_0x00010c1166e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf529e0();
      _objc_release(uVar8);
    } while (uVar9 < uVar3);
  }
  uVar7 = 0;
LAB_1050856ec:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105085718; end: 10508572b; -[SCProfileChatMediaContainerCollectionViewCell handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105085718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271b354),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1);
  return;
}



/* Entry: 10508572c; end: 1050857d7; -[SCProfileChatMediaContainerCollectionViewCell _handleScrollIntoScreenAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508572c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b4650;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271b354);
  uVar5 = *(ulong *)(param_1 + _DAT_11271b35c);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c152100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1050857d8; end: 105085883; -[SCProfileChatMediaContainerCollectionViewCell _handleScrollOutOfScreenAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050857d8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b4650;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271b354);
  uVar5 = *(ulong *)(param_1 + _DAT_11271b35c);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c152140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105085884; end: 105085893; -[SCProfileChatMediaContainerCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105085884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b354);
}



/* Entry: 105085894; end: 1050858a3; -[SCProfileChatMediaContainerCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105085894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b35c);
}



/* Entry: 1050858a4; end: 1050858bb; -[SCProfileChatMediaContainerCollectionViewCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050858a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b340);
}



/* Entry: 1050858bc; end: 1050858d3; -[SCProfileChatMediaContainerCollectionViewCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050858bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11271b340);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1050858d4; end: 1050858e3; -[SCProfileChatMediaContainerCollectionViewCell mediaDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050858d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b34c);
}



/* Entry: 1050858e4; end: 1050858f3; -[SCProfileChatMediaContainerCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050858e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b350);
}



/* Entry: 1050858f4; end: 105085983; -[SCProfileChatMediaContainerCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050858f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b350,0);
  _objc_storeStrong(param_1 + _DAT_11271b34c,0);
  _objc_storeStrong(param_1 + _DAT_11271b35c,0);
  _objc_storeStrong(param_1 + _DAT_11271b354,0);
  _objc_storeStrong(param_1 + _DAT_11271b344,0);
  _objc_storeStrong(param_1 + _DAT_11271b358,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b348,0);
  return;
}



/* Entry: 105085984; end: 105085997; -[SCProfileChatMediaScreenCaptureMonitor tag] */

void FUN_105085984(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 105085998; end: 105085a6b; -[SCProfileChatMediaScreenCaptureMonitor initWithConversationId:conversationServices:conversationServicesPerformer:] */

undefined1 *
FUN_105085998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e5e00;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    func_0x00010bdc7980(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105085a6c; end: 105085aaf; -[SCProfileChatMediaScreenCaptureMonitor dealloc] */

void FUN_105085a6c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8cae0();
  puStack_28 = PTR_PTR_1126e5e00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105085ab0; end: 105085b4b; -[SCProfileChatMediaScreenCaptureMonitor _addObservationOnScreenCaptureNotification] */

void FUN_105085ab0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105085b4c; end: 105085bd7; -[SCProfileChatMediaScreenCaptureMonitor _removeObservationOnScreenCaptureNotification] */

void FUN_105085b4c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105085bd8; end: 105085bdf; -[SCProfileChatMediaScreenCaptureMonitor _userDidTakeScreenshot] */

void FUN_105085bd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee6b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__userDidScreenCaptureWithType__112597480,0);
  return;
}



/* Entry: 105085be0; end: 105085be7; -[SCProfileChatMediaScreenCaptureMonitor _userDidScreenRecord] */

void FUN_105085be0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee6b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__userDidScreenCaptureWithType__112597480,1);
  return;
}



/* Entry: 105085be8; end: 105085c83; -[SCProfileChatMediaScreenCaptureMonitor _userDidScreenCaptureWithType:] */

void FUN_105085be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1166c0();
  if ((int)lVar2 == 0) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c1166a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      return;
    }
  }
  else {
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendChatMediaScreenshotNotifica_112585468,param_3);
  return;
}



/* Entry: 105085c84; end: 105085d67; -[SCProfileChatMediaScreenCaptureMonitor _sendChatMediaScreenshotNotificationWithType:] */

void FUN_105085c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105085d68;
  puStack_60 = &UNK_110844b80;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = param_3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 105085d68; end: 105085d77;  */

void FUN_105085d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf50390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_conversationId_screenCaptureWith_1125b1a88,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105085d78; end: 105085d8f; -[SCProfileChatMediaScreenCaptureMonitor delegate] */

void FUN_105085d78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105085d90; end: 105085d9b; -[SCProfileChatMediaScreenCaptureMonitor setDelegate:] */

void FUN_105085d90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105085d9c; end: 105085ddf; -[SCProfileChatMediaScreenCaptureMonitor .cxx_destruct] */

void FUN_105085d9c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105085de0; end: 105085eab; -[SCProfileChatMediaSectionDataProvider initWithDataSource:profileType:grapheneServices:] */

undefined1 *
FUN_105085de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x22) = 0;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105085eac; end: 105085eb3; -[SCProfileChatMediaSectionDataProvider shouldShowSectionWhenNoSavedInChatCards] */

undefined8 FUN_105085eac(void)

{
  return 1;
}



/* Entry: 105085eb4; end: 105085ebf; +[SCProfileChatMediaSectionDataProvider announcerIdentifier] */

undefined ** FUN_105085eb4(void)

{
  return &PTR____CFConstantStringClassReference_110dc4358;
}



/* Entry: 105085ec0; end: 105085ec7; -[SCProfileChatMediaSectionDataProvider addListener:] */

void FUN_105085ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105085ec8; end: 105085ecf; -[SCProfileChatMediaSectionDataProvider removeListener:] */

void FUN_105085ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105085ed0; end: 105085edb; -[SCProfileChatMediaSectionDataProvider setUp] */

void FUN_105085ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addUpdateListener__11259cb88,param_1);
  return;
}



/* Entry: 105085edc; end: 1050860c7; -[SCProfileChatMediaSectionDataProvider setSectionDataModel:] */

void FUN_105085edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf36b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x10);
  FUN_10507fc10(lVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf529e0();
  lVar7 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar3);
  _objc_retain(lVar7);
  if (lVar3 == lVar7) {
    _objc_release(lVar7);
    _objc_release(lVar3);
LAB_105085fa0:
    if ((bool)*(char *)(param_1 + 0x21) == 5 < uVar4) goto LAB_105086080;
  }
  else if (lVar7 == 0) {
    _objc_release();
  }
  else {
    lVar5 = lVar3;
    func_0x00010c071ae0();
    _objc_release(lVar7);
    _objc_release(lVar3);
    if ((int)lVar5 != 0) goto LAB_105085fa0;
  }
  _objc_retain(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar3;
  _objc_release(uVar6);
  *(bool *)(param_1 + 0x21) = 5 < uVar4;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bfddca0();
  if ((iVar1 != 0) && (uVar4 < 6)) {
    _objc_initWeak(auStack_58,param_1);
    uVar6 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1050860c8;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010007380c(uVar6,&puStack_80);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
LAB_105086080:
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1050860c8; end: 1050860f3;  */

void FUN_1050860c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050860f4; end: 10508614b; -[SCProfileChatMediaSectionDataProvider numberOfItemsInSection:] */

long FUN_1050860f4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010beb6220();
  uVar3 = param_1;
  func_0x00010beb6880();
  uVar1 = 1;
  if ((int)uVar2 != 0) {
    uVar1 = 2;
  }
  if ((int)uVar3 == 0) {
    uVar1 = uVar2 & 0xffffffff;
  }
  func_0x00010beb5f40(param_1);
  return uVar1 + (param_1 & 0xffffffff);
}



/* Entry: 10508614c; end: 10508619f; -[SCProfileChatMediaSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10508614c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050861a0;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050861a0; end: 1050861ab;  */

void FUN_1050861a0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerCellViewModelForIndexP_1125576a8,
             param_2);
  return;
}



/* Entry: 1050861ac; end: 1050865bb; -[SCProfileChatMediaSectionDataProvider _containerCellViewModelForIndexPath:] */

void FUN_1050861ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0840e0();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010beb6220();
    if ((int)lVar1 != 0) {
      func_0x00010be07920(param_1);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuVar11 = *(undefined ***)(param_1 + 0x40);
      _objc_retain(ppuVar11);
      _objc_opt_class(puVar2);
      ppuVar8 = ppuVar11;
      _objc_opt_isKindOfClass(ppuVar11,puVar2);
      ppuVar7 = ppuVar11;
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar7 = (undefined **)0x0;
      }
      _objc_retain(ppuVar7);
      _objc_release(ppuVar11);
      func_0x00010bf529e0();
      ppuVar8 = ppuVar7;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_retain(ppuVar8);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(ppuVar8);
      ppuVar7 = ppuVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar7 != (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar8);
          }
          uVar3 = *(undefined8 *)((long)ppuVar11 * 8);
          func_0x00010bf36b20(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar3;
          func_0x00010c0c5240();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar2);
          _objc_release(uVar9);
          _objc_release(uVar3);
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (ppuVar7 != ppuVar11);
        ppuVar7 = ppuVar8;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar8);
      puVar4 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar12 = puVar2;
      func_0x00010bf51e00(puVar2);
      func_0x00010c01b460(puVar4);
      _objc_release(puVar12);
      puVar5 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar6 = PTR_PTR_1126b4650;
      _objc_alloc(PTR_PTR_1126b4650);
      func_0x00010c03ace0();
      puVar12 = PTR_PTR_1126aea98;
      _objc_alloc();
      func_0x00010bffd260();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      ppuVar7 = ppuVar8;
      goto LAB_1050864dc;
    }
    lVar1 = param_1;
    func_0x00010beb5f40();
    if ((int)lVar1 == 0) goto LAB_105086570;
    func_0x00010be07920(param_1);
    puVar12 = PTR_PTR_1126aea98;
    _objc_alloc();
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc42f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc42f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x000108f5f424();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd260();
    _objc_release(ppuVar8);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0840e0();
    if ((lVar1 != 1) || (func_0x00010beb6880(), (int)param_1 == 0)) {
LAB_105086570:
      puVar12 = (undefined *)0x0;
      goto LAB_105086574;
    }
    ppuVar7 = (undefined **)PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    ppuVar8 = (undefined **)PTR_PTR_1126b4658;
    _objc_alloc();
    ppuVar11 = &PTR____CFConstantStringClassReference_110dc42d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc42d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0215a0();
    _objc_release(ppuVar11);
    puVar12 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
LAB_1050864dc:
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar7);
LAB_105086574:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_3 + 0x22) & 1) == 0) {
    *(undefined1 *)(param_3 + 0x22) = 1;
    uVar9 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar9);
  }
  return;
}



/* Entry: 1050865bc; end: 105086777; -[SCProfileChatMediaSectionDataProvider _emitCarouselViewGrapheneMetricWithHasMedia:] */

void FUN_1050865bc(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x22) = 1;
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 105086778; end: 10508683b; -[SCProfileChatMediaSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105086778(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_a0,puVar2);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10508696c;
    puStack_b0 = &UNK_110845ae0;
    puVar7 = auStack_a0;
    _objc_copyWeak(auStack_a8);
    ppuVar3 = &puStack_c8;
    _objc_retainBlock();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dc42b8;
    ppuVar4 = ppuVar3;
    _objc_retainBlock();
    ppuStack_90 = ppuVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_a8);
    puVar5 = auStack_a0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      __Unwind_Resume(puVar5);
      _objc_retain(puVar7);
      puVar5 = puVar5 + 0x20;
      _objc_loadWeakRetained(puVar5);
      puVar2 = PTR_PTR_1126b4660;
      _objc_retain(puVar7);
      _objc_opt_class(puVar2);
      puVar6 = puVar7;
      _objc_opt_isKindOfClass(puVar7,puVar2);
      puVar1 = puVar7;
      if (((ulong)puVar6 & 1) == 0) {
        puVar1 = (undefined1 *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar7);
      func_0x00010bde4e60(puVar5);
      _objc_release(puVar1);
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10508683c; end: 10508696b; -[SCProfileChatMediaSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10508683c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10508696c;
  puStack_60 = &UNK_110845ae0;
  puVar7 = auStack_50;
  _objc_copyWeak(auStack_58);
  ppuVar2 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc42b8;
  ppuVar3 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_58);
  puVar5 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar7);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  puVar4 = PTR_PTR_1126b4660;
  _objc_retain(puVar7);
  _objc_opt_class(puVar4);
  puVar6 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar4);
  puVar1 = puVar7;
  if (((ulong)puVar6 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar7);
  func_0x00010bde4e60(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10508696c; end: 105086a03;  */

void FUN_10508696c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR_PTR_1126b4660;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  func_0x00010bde4e60(param_1);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105086a04; end: 105086a87; -[SCProfileChatMediaSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_105086a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4180;
  _objc_retain(param_3);
  func_0x00010bf04780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bedee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSavedInChatSectionIfNeces_112595540)
    ;
    return;
  }
  return;
}



/* Entry: 105086a88; end: 105086adf; -[SCProfileChatMediaSectionDataProvider _updateSavedInChatSectionIfNecessary] */

void FUN_105086a88(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105086ae0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 105086ae0; end: 105086aeb;  */

void FUN_105086ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSectionDataModel__11265beb0,0);
  return;
}



/* Entry: 105086aec; end: 105086bdb; -[SCProfileChatMediaSectionDataProvider _configureChatMediaContainerCollectionViewCell:] */

void FUN_105086aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0c4b00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4540(param_3,param_2,uVar4);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe7580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(param_3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b4330;
  _objc_alloc(PTR_PTR_1126b4330);
  func_0x00010bff3160();
  puVar3 = puVar2;
  func_0x00010c14fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2a20(param_3,param_2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105086bdc; end: 105086c4f; -[SCProfileChatMediaSectionDataProvider _shouldShowMediaContainerCell] */

bool FUN_105086bdc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar4 = *(ulong *)(param_1 + 0x40);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bf529e0(uVar1);
  _objc_release(uVar1);
  return uVar3 != 0;
}



/* Entry: 105086c50; end: 105086c57; -[SCProfileChatMediaSectionDataProvider _shouldShowViewMoreCell] */

undefined1 FUN_105086c50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 105086c58; end: 105086c8f; -[SCProfileChatMediaSectionDataProvider _shouldShowEmptyStateCell] */

ulong FUN_105086c58(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010beb6220();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2341f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldShowSectionWhenNoSavedInCh_11266aaa0);
  return param_1;
}



/* Entry: 105086c90; end: 105086c97; -[SCProfileChatMediaSectionDataProvider _fetchMoreSavedInChatMediaCards] */

void FUN_105086c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_fetchMoreSavedInChatMediaDataMod_1125c7cb0);
  return;
}



/* Entry: 105086c98; end: 105086caf; -[SCProfileChatMediaSectionDataProvider dataProviderDelegate] */

void FUN_105086c98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105086cb0; end: 105086cbb; -[SCProfileChatMediaSectionDataProvider setDataProviderDelegate:] */

void FUN_105086cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105086cbc; end: 105086cc3; -[SCProfileChatMediaSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105086cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105086cc4; end: 105086cf3; -[SCProfileChatMediaSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105086cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105086cf4; end: 105086cfb; -[SCProfileChatMediaSectionDataProvider sectionDataModel] */

undefined8 FUN_105086cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105086cfc; end: 105086d57; -[SCProfileChatMediaSectionDataProvider .cxx_destruct] */

void FUN_105086cfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105086d58; end: 105086dcf;  */

void FUN_105086d58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4670;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c0877e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c021580(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105086dd0; end: 105086ea3; -[SCProfileChatMediaViewMoreCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105086dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e5e10;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4678;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_11271b398;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    func_0x00010c1af000(puVar1);
    func_0x00010c160fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105086ea4; end: 105086efb; -[SCProfileChatMediaViewMoreCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105086ea4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5e10;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271b398));
  return;
}



/* Entry: 105086efc; end: 105087023; -[SCProfileChatMediaViewMoreCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105086efc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4658;
  _objc_opt_class(PTR_PTR_1126b4658);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11271b39c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_105087004;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    FUN_105086d58(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11271b398));
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_105087004:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105087024; end: 105087093; +[SCProfileChatMediaViewMoreCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105087024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_PTR_1126b4678;
  FUN_105086d58(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d6e0(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 105087094; end: 10508713b; -[SCProfileChatMediaViewMoreCollectionViewCell viewMoreCollectionViewCellDidTapViewMore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105087094(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b4658;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271b3a0);
  uVar5 = *(ulong *)(param_1 + _DAT_11271b39c);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10508713c; end: 10508714b; -[SCProfileChatMediaViewMoreCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508713c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b3a0);
}



/* Entry: 10508714c; end: 10508718b; -[SCProfileChatMediaViewMoreCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508714c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b3a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10508718c; end: 10508719b; -[SCProfileChatMediaViewMoreCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10508718c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b39c);
}



/* Entry: 10508719c; end: 1050871eb; -[SCProfileChatMediaViewMoreCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508719c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b39c,0);
  _objc_storeStrong(param_1 + _DAT_11271b3a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b398,0);
  return;
}



/* Entry: 1050871ec; end: 10508733b; -[SCProfileChatMediaCardViewModel initWithChatMediaDataModel:is3d:isSpectacles:cornerText:senderAvatarViewModel:tapActionModel:longPressActionModel:] */

undefined1 *
FUN_1050871ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5e18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10508733c; end: 10508735f; -[SCProfileChatMediaCardViewModel copyWithZone:] */

undefined8 FUN_10508733c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105087360; end: 105087403; -[SCProfileChatMediaCardViewModel hash] */

undefined8 * FUN_105087360(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050874ec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050874f8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_1050874f8;
              }
              goto LAB_1050874ec;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050874f8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105087404; end: 105087513; -[SCProfileChatMediaCardViewModel isEqual:] */

long FUN_105087404(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050874ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050874f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_1050874f8;
              }
              goto LAB_1050874ec;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050874f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105087514; end: 10508751b; -[SCProfileChatMediaCardViewModel chatMediaDataModel] */

undefined8 FUN_105087514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10508751c; end: 105087523; -[SCProfileChatMediaCardViewModel is3d] */

undefined1 FUN_10508751c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105087524; end: 10508752b; -[SCProfileChatMediaCardViewModel isSpectacles] */

undefined1 FUN_105087524(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10508752c; end: 105087533; -[SCProfileChatMediaCardViewModel cornerText] */

undefined8 FUN_10508752c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105087534; end: 10508753b; -[SCProfileChatMediaCardViewModel senderAvatarViewModel] */

undefined8 FUN_105087534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10508753c; end: 105087543; -[SCProfileChatMediaCardViewModel tapActionModel] */

undefined8 FUN_10508753c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105087544; end: 10508754b; -[SCProfileChatMediaCardViewModel longPressActionModel] */

undefined8 FUN_105087544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10508754c; end: 10508759f; -[SCProfileChatMediaCardViewModel .cxx_destruct] */

void FUN_10508754c(long param_1)

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



/* Entry: 1050875a0; end: 105087677; -[SCProfileChatMediaContainerViewModel initWithProfileChatMediaCardViewModels:scrollIntoScreenAction:scrollOutOfScreenAction:] */

undefined1 *
FUN_1050875a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5e20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105087678; end: 10508769b; -[SCProfileChatMediaContainerViewModel copyWithZone:] */

undefined8 FUN_105087678(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10508769c; end: 10508771b; -[SCProfileChatMediaContainerViewModel hash] */

undefined8 * FUN_10508769c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050877b4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050877c0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1050877c0;
          }
          goto LAB_1050877b4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050877c0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10508771c; end: 1050877db; -[SCProfileChatMediaContainerViewModel isEqual:] */

long FUN_10508771c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050877b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050877c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1050877c0;
          }
          goto LAB_1050877b4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050877c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050877dc; end: 1050877e3; -[SCProfileChatMediaContainerViewModel profileChatMediaCardViewModels] */

undefined8 FUN_1050877dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050877e4; end: 1050877eb; -[SCProfileChatMediaContainerViewModel scrollIntoScreenAction] */

undefined8 FUN_1050877e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050877ec; end: 1050877f3; -[SCProfileChatMediaContainerViewModel scrollOutOfScreenAction] */

undefined8 FUN_1050877ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050877f4; end: 10508782f; -[SCProfileChatMediaContainerViewModel .cxx_destruct] */

void FUN_1050877f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105087830; end: 1050878db; -[SCProfileChatMediaViewMoreViewModel initWithLabelText:tapActionModel:] */

undefined1 *
FUN_105087830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050878dc; end: 1050878ff; -[SCProfileChatMediaViewMoreViewModel copyWithZone:] */

undefined8 FUN_1050878dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105087900; end: 105087973; -[SCProfileChatMediaViewMoreViewModel hash] */

undefined8 * FUN_105087900(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1050879f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105087a00;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105087a00;
        }
        goto LAB_1050879f4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105087a00:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105087974; end: 105087a1b; -[SCProfileChatMediaViewMoreViewModel isEqual:] */

long FUN_105087974(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050879f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105087a00;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105087a00;
        }
        goto LAB_1050879f4;
      }
    }
    lVar3 = 0;
  }
LAB_105087a00:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105087a1c; end: 105087a23; -[SCProfileChatMediaViewMoreViewModel labelText] */

undefined8 FUN_105087a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105087a24; end: 105087a2b; -[SCProfileChatMediaViewMoreViewModel tapActionModel] */

undefined8 FUN_105087a24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105087a2c; end: 105087a5b; -[SCProfileChatMediaViewMoreViewModel .cxx_destruct] */

void FUN_105087a2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105087a5c; end: 105087cc3; -[SCProfileArroyoChatMediaDataCoordinator initWithConversationId:conversationType:numberOfMessagesPerPage:savedMediaChatMessagesFetcher:chatMessagesUpdateTracker:grapheneRegistry:profileType:chatMessageActionHandler:] */

undefined8 *
FUN_105087a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e5e30;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    *(bool *)(puVar1 + 0xc) = param_4 == 1;
    puVar1[2] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b45a8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b3d60;
    func_0x00010c11a1a0(PTR_PTR_1126b3d60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b3d60;
    func_0x00010c11a160(PTR_PTR_1126b3d60);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b3d60;
    func_0x00010c11a180(PTR_PTR_1126b3d60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017b40();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)(puVar1 + 8) = 1;
    uVar2 = puVar1[9];
    puVar1[9] = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105087cc4; end: 105087d8f; -[SCProfileArroyoChatMediaDataCoordinator chatMedia] */

void FUN_105087cc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105087d90;
  uStack_30 = 0x105087da0;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105087da8;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105087d90; end: 105087da7;  */

void FUN_105087d90(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105087da8; end: 105087de3;  */

void FUN_105087da8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105087de4; end: 105087f3f; -[SCProfileArroyoChatMediaDataCoordinator chatMediaWithCompletionQueue:completionHandler:] */

void FUN_105087de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105087e9c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105087f40; end: 105087f4f;  */

void FUN_105087f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105087f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105087f50; end: 105087ff7; -[SCProfileArroyoChatMediaDataCoordinator hasMoreChatMedia] */

undefined1 FUN_105087f50(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105087ff8;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}


