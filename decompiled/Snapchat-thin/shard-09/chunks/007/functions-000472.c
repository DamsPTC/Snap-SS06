/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107047da8; end: 107047daf; -[SCBaseMediaThumbnailViewModel setIsSaved:] */

void FUN_107047da8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 107047db0; end: 107047db7; -[SCBaseMediaThumbnailViewModel chatMessageActionHandler] */

undefined8 FUN_107047db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107047db8; end: 107047de7; -[SCBaseMediaThumbnailViewModel setChatMessageActionHandler:] */

void FUN_107047db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107047de8; end: 107047def; -[SCBaseMediaThumbnailViewModel contentDelivery] */

undefined8 FUN_107047de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107047df0; end: 107047e1f; -[SCBaseMediaThumbnailViewModel setContentDelivery:] */

void FUN_107047df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107047e20; end: 107047e27; -[SCBaseMediaThumbnailViewModel chatMediaFetcher] */

undefined8 FUN_107047e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107047e28; end: 107047e57; -[SCBaseMediaThumbnailViewModel setChatMediaFetcher:] */

void FUN_107047e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107047e58; end: 107047e5f; -[SCBaseMediaThumbnailViewModel isLockedConversation] */

undefined1 FUN_107047e58(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107047e60; end: 107047e67; -[SCBaseMediaThumbnailViewModel setIsLockedConversation:] */

void FUN_107047e60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 107047e68; end: 107047e6f; -[SCBaseMediaThumbnailViewModel renderAsBubble] */

undefined1 FUN_107047e68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107047e70; end: 107047e77; -[SCBaseMediaThumbnailViewModel setRenderAsBubble:] */

void FUN_107047e70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 107047e78; end: 107047e7f; -[SCBaseMediaThumbnailViewModel image] */

undefined8 FUN_107047e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107047e80; end: 107047eaf; -[SCBaseMediaThumbnailViewModel setImage:] */

void FUN_107047e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107047eb0; end: 107047ebb; -[SCBaseMediaThumbnailViewModel videoOverlayThumbnailImage] */

void FUN_107047eb0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 107047ebc; end: 107047ec3; -[SCBaseMediaThumbnailViewModel setVideoOverlayThumbnailImage:] */

void FUN_107047ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107047ec4; end: 107047f6b; -[SCBaseMediaThumbnailViewModel .cxx_destruct] */

void FUN_107047ec4(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 107047f6c; end: 1070480ef; -[SCMediaContentThumbnailViewModel initWithMedia:isGroupConversation:isLockedConversation:senderUserId:senderDisplayName:recipientDisplayName:recipientUserId:contentDelivery:chatMediaFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107047f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f8610;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c53e0(puVar1);
    func_0x00010c1fcb80(puVar1);
    func_0x00010c1fcac0(puVar1);
    func_0x00010c1e88c0(puVar1);
    func_0x00010c1e8a60(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276323c) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112763240) = param_5;
    lVar3 = (long)_DAT_112763244;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112763248;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070480f0; end: 107048193; -[SCMediaContentThumbnailViewModel isEqual:] */

undefined1 * FUN_1070480f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar4 = &uStack_40;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b44a0;
  _objc_opt_class(PTR_PTR_1126b44a0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126f8610;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar4;
}



/* Entry: 107048194; end: 107048213; -[SCMediaContentThumbnailViewModel mediaLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107048194(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763244);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276324c);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b4c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107048214; end: 10704823b; -[SCMediaContentThumbnailViewModel shouldDisplayActivityIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107048214(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276324c);
  func_0x00010c0c56c0(lVar1);
  return lVar1 == 1;
}



/* Entry: 10704823c; end: 10704823f; -[SCMediaContentThumbnailViewModel shouldDisplaySendingOverlay] */

void FUN_10704823c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isSending_1125fd030);
  return;
}



/* Entry: 107048240; end: 107048273; -[SCMediaContentThumbnailViewModel shouldDisplayFailedToSend] */

void FUN_107048240(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07d980();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0728f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isFailed_1125fa448);
    return;
  }
  return;
}



/* Entry: 107048274; end: 1070482cf; -[SCMediaContentThumbnailViewModel shouldDisplayTapToLoad] */

uint FUN_107048274(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c22f2a0();
  if (((((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c22f6a0(), (uVar2 & 1) == 0)) &&
      (uVar2 = param_1, func_0x00010c0728e0(), (uVar2 & 1) == 0)) &&
     (uVar2 = param_1, func_0x00010c0c5720(), (uVar2 & 1) == 0)) {
    func_0x00010c07d880(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1070482d0; end: 1070482f7; -[SCMediaContentThumbnailViewModel shouldDisplayFailedToLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1070482d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276324c);
  func_0x00010c0c56c0(lVar1);
  return lVar1 == -1;
}



/* Entry: 1070482f8; end: 1070483a3; -[SCMediaContentThumbnailViewModel loadMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070482f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf36ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0cb5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b920(lVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + _DAT_11276324c),
                      *(undefined1 *)(param_1 + _DAT_11276323c),4,1,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070483a4; end: 1070484d7; -[SCMediaContentThumbnailViewModel fetchImageToDisplayWithCompletionHandler:scaledToSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070483a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  uVar1 = *(undefined8 *)(param_3 + _DAT_112763248);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010c26de40(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1070484d8; end: 10704859f;  */

void FUN_1070484d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1070485a0;
  puStack_58 = &UNK_1108484f8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1070485a0; end: 1070485ef;  */

void FUN_1070485a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    func_0x00010c1a9f00(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070485f0; end: 1070486bf; -[SCMediaContentThumbnailViewModel fetchImageToSaveWithCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070485f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763248);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276324c);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1070486c0;
  puStack_40 = &UNK_110892bd8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c26de20(uVar1,param_2,uVar2,1,0x11,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070486c0; end: 10704875b;  */

void FUN_1070486c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10704875c;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 10704875c; end: 10704876b;  */

void FUN_10704875c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107048768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10704876c; end: 1070487a3; -[SCMediaContentThumbnailViewModel containsVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10704876c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276324c);
  func_0x00010c0c6c20(uVar1);
  return (uint)(uVar1 < 0x16) & 0x363f36U >> (ulong)((uint)uVar1 & 0x1f);
}



/* Entry: 1070487a4; end: 1070488bf; -[SCMediaContentThumbnailViewModel fetchVideoOverlayForExportWithCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070487a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763248);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0efa00(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070488c0; end: 10704897f;  */

void FUN_1070488c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107048980;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107048980; end: 1070489c7;  */

void FUN_107048980(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c221b80(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070489c8; end: 107048bb3; -[SCMediaContentThumbnailViewModel fetchVideoOverlayThumbnailWithSize:WithCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070489c8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c29a820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c29a820(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_3);
    _objc_release(param_3);
    goto LAB_107048b6c;
  }
  if ((param_2 != 0.0) && (param_1 != 0.0)) {
    lVar1 = *(long *)(param_3 + _DAT_11276324c);
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_58,param_3);
      uVar2 = *(undefined8 *)(param_3 + _DAT_112763248);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06e8e0(param_3);
      func_0x00010c06e8e0(param_3);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_5);
      func_0x00010c0efa20(param_1,param_2,uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_107048b6c;
    }
    if (param_5 == 0) goto LAB_107048b6c;
  }
  (**(code **)(param_5 + 0x10))(param_5,0);
LAB_107048b6c:
  _objc_release(param_5);
  return;
}



/* Entry: 107048bb4; end: 107048c73;  */

void FUN_107048bb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107048c74;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107048c74; end: 107048cbb;  */

void FUN_107048c74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c221b80(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107048cbc; end: 107048d43; -[SCMediaContentThumbnailViewModel videoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107048cbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763244);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276324c);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c29bc40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107048d44; end: 107048d8f; -[SCMediaContentThumbnailViewModel isCircular] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107048d44(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11276324c);
  func_0x00010c0c6c20();
  if ((lVar2 + 1U < 0xd) && ((0x129fU >> (ulong)((uint)(lVar2 + 1U) & 0x1f) & 1) != 0)) {
    bVar1 = false;
  }
  else {
    func_0x0001085440bc();
    bVar1 = (uint)lVar2 < 9;
  }
  return bVar1;
}



/* Entry: 107048d90; end: 107048db7; -[SCMediaContentThumbnailViewModel containsGif] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107048d90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276324c);
  func_0x00010c0c6c20(lVar1);
  return lVar1 == 3;
}



/* Entry: 107048db8; end: 107048de7; -[SCMediaContentThumbnailViewModel displayedMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107048db8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276324c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107048de8; end: 107048e73; -[SCMediaContentThumbnailViewModel representsMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107048de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276324c);
  _objc_retain(param_3);
  func_0x00010c0c5180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 107048e74; end: 107048ed7; -[SCMediaContentThumbnailViewModel setMediaToDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107048e74(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276324c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010bf3bae0(param_1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107048ed8; end: 107048ee7; -[SCMediaContentThumbnailViewModel mediaIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107048ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276324c),PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 107048ee8; end: 107048ef7; -[SCMediaContentThumbnailViewModel trackingId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107048ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276324c),PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 107048ef8; end: 107048f47; -[SCMediaContentThumbnailViewModel height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107048ef8(float param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276324c);
  func_0x00010bfe0640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  return (double)param_1;
}



/* Entry: 107048f48; end: 107048f97; -[SCMediaContentThumbnailViewModel width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107048f48(float param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276324c);
  func_0x00010c2a5040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  return (double)param_1;
}



/* Entry: 107048f98; end: 107048fa7; -[SCMediaContentThumbnailViewModel bodyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107048f98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763238);
}



/* Entry: 107048fa8; end: 107048fb7; -[SCMediaContentThumbnailViewModel setBodyType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107048fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112763238) = param_3;
  return;
}



/* Entry: 107048fb8; end: 107048fc7; -[SCMediaContentThumbnailViewModel chatMediaFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107048fb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763248);
}



/* Entry: 107048fc8; end: 107049007; -[SCMediaContentThumbnailViewModel setChatMediaFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107048fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763248;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107049008; end: 107049017; -[SCMediaContentThumbnailViewModel contentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107049008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763244);
}



/* Entry: 107049018; end: 107049057; -[SCMediaContentThumbnailViewModel setContentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107049018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763244;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107049058; end: 107049067; -[SCMediaContentThumbnailViewModel isLockedConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107049058(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763240);
}



/* Entry: 107049068; end: 107049077; -[SCMediaContentThumbnailViewModel setIsLockedConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107049068(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112763240) = param_3;
  return;
}



/* Entry: 107049078; end: 1070490c7; -[SCMediaContentThumbnailViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107049078(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763244,0);
  _objc_storeStrong(param_1 + _DAT_112763248,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276324c,0);
  return;
}



/* Entry: 1070490c8; end: 1070490df;  */

void FUN_1070490c8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e99598;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e99598,
                      &PTR____CFConstantStringClassReference_110e995b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1070490e0; end: 1070490eb; +[SCChatAnimationDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1070490e0(void)

{
  return &PTR____CFConstantStringClassReference_110e995d8;
}



/* Entry: 1070490ec; end: 1070490f3; -[SCChatAnimationDataCoordinator removeDataUpdateListener:] */

void FUN_1070490ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1070490f4; end: 1070491df; -[SCChatAnimationDataCoordinator handleDataRequest:] */

void FUN_1070490f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb390;
  _objc_opt_class(PTR_PTR_1126cb390);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c0bfca0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070491e0; end: 107049203;  */

void FUN_1070491e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setActiveConversationId__1126363a8,param_2);
  return;
}



/* Entry: 107049204; end: 107049337; -[SCChatAnimationDataCoordinator setActiveConversationId:] */

void FUN_107049204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107049294;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107049338; end: 107049457; -[SCChatAnimationDataCoordinator setSaveAnimationState:forMessageId:] */

void FUN_107049338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb370;
  func_0x00010bf373a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_3;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107049458; end: 10704955f;  */

void FUN_107049458(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x38)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 8),param_2,puVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    if (*(long *)(param_1 + 0x38) == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0cce60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2786a0(uVar3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126cbb90;
      _objc_alloc(PTR_PTR_1126cbb90);
      func_0x00010c053e60();
      func_0x00010bdcb7e0(lVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107049560; end: 10704967f; -[SCChatAnimationDataCoordinator setReplayAnimationState:forMessageId:] */

void FUN_107049560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb370;
  func_0x00010bf373a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_3;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107049680; end: 1070497af;  */

void FUN_107049680(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    if (lVar3 != *(long *)(param_1 + 0x38)) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x10),param_2,puVar4,
                          *(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar4);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0cce60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2786a0(uVar5,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
      puVar7 = PTR_PTR_1126cbb90;
      _objc_alloc(PTR_PTR_1126cbb90);
      func_0x00010c053e60();
      func_0x00010bdcb7e0(lVar1,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070497b0; end: 10704982b; -[SCChatAnimationDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:] */

void FUN_1070497b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010bf63720(uVar2,param_2,param_1,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10704982c; end: 1070498bb; -[SCChatAnimationDataCoordinator activeAnimationData:] */

void FUN_10704982c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1070498bc;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070498bc; end: 1070498fb;  */

void FUN_1070498bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010be6ef60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070498fc; end: 107049c07; -[SCChatAnimationDataCoordinator _packagedAnimationData] */

void FUN_1070498fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      puVar4 = PTR_PTR_1126d42f0;
      _objc_alloc(PTR_PTR_1126d42f0);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x00010c041500(puVar4);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar4);
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR_PTR_1126d42f0;
        _objc_alloc(PTR_PTR_1126d42f0);
        puVar6 = *(undefined **)(param_1 + 0x10);
        func_0x00010c0e00e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        func_0x00010c041500(puVar4);
      }
      else {
        puVar6 = puVar2;
        func_0x00010c0e00e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d42f0;
        _objc_alloc(PTR_PTR_1126d42f0);
        func_0x00010c149f00(puVar6);
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        func_0x00010c041500(puVar4);
        _objc_release(uVar5);
      }
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar6);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 107049c08; end: 107049c67; -[SCChatAnimationDataCoordinator .cxx_destruct] */

void FUN_107049c08(long param_1)

{
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



/* Entry: 107049c68; end: 107049f9b; -[SCChatAccessoryButton initWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107049c68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126f8620;
  puVar13 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar13,PTR_s_init_1125d9248);
  if (puVar13 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010bfe9720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar15 = (long)_DAT_112763268;
    uVar14 = *(undefined8 *)((long)puVar13 + lVar15);
    *(undefined **)((long)puVar13 + lVar15) = puVar1;
    _objc_release(uVar14);
    _objc_release(lVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar13 + lVar15));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar13 + lVar15));
    _objc_release(puVar1);
    puVar3 = puVar13;
    func_0x00010c08c0e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar3);
    puVar3 = puVar13;
    func_0x00010c08c0e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar13);
    _objc_release(puVar1);
    func_0x00010befbb60(puVar13);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar13 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar14;
    uVar5 = *(undefined8 *)((long)puVar13 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar13 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf34860(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar13 + lVar15);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    func_0x00010bf348e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar13 = *(undefined8 **)(param_3 + _DAT_112763268);
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar13,PTR_s_setImage__1126481e8);
  return puVar13;
}



/* Entry: 107049f9c; end: 107049fab; -[SCChatAccessoryButton setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107049f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763268),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 107049fac; end: 107049fbb; -[SCChatAccessoryButton image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107049fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112763268),PTR_s_image_1125d7478);
  return;
}



/* Entry: 107049fbc; end: 107049fcf; -[SCChatAccessoryButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107049fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763268,0);
  return;
}



/* Entry: 107049fd0; end: 10704a027; -[SCChatFoldIndicatorView init] */

undefined1 * FUN_107049fd0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bdeeea0(puVar1);
    func_0x00010bdf3180(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10704a028; end: 10704a0bf; -[SCChatFoldIndicatorView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704a028(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  double in_d3;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8628;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_112763270;
  dVar3 = 0.0;
  if (*(char *)(param_1 + _DAT_11276326c) == '\x01') {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
    dVar3 = in_d3 * 0.5;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10704a0c0; end: 10704a1fb; -[SCChatFoldIndicatorView setRenderAsBubble:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704a0c0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(byte *)(param_1 + _DAT_11276326c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276326c) = (char)param_3;
  lVar4 = (long)_DAT_112763270;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,param_3 ^ 1);
  if (((param_3 ^ 1) & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar1);
    uVar1 = 0x3fe0000000000000;
  }
  else {
    puVar2 = *(undefined **)(param_1 + lVar4);
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    uVar1 = 0;
  }
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(uVar1);
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112763274));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112763278));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10704a1fc; end: 10704a61b; -[SCChatFoldIndicatorView _createLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704a1fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar27 = (long)_DAT_112763270;
  uVar23 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar1;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar27));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar27));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar28 = (long)_DAT_11276327c;
  uVar23 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar23);
  func_0x000107080edc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar28));
  _objc_release(uVar23);
  func_0x00010708cc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar28));
  _objc_release(uVar23);
  FUN_107064924();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar28));
  _objc_release(uVar23);
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar28);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar23);
  _objc_release(lVar26);
  _objc_release(uVar3);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = lVar2;
  func_0x00010bdd6a40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112763274;
  uVar23 = *(undefined8 *)(lVar2 + lVar22);
  *(long *)(lVar2 + lVar22) = lVar25;
  _objc_release(uVar23);
  lVar25 = lVar2;
  func_0x00010bdd6a40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112763278;
  uVar23 = *(undefined8 *)(lVar2 + lVar26);
  *(long *)(lVar2 + lVar26) = lVar25;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(lVar2 + lVar22);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar8;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar2 + lVar22);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11276327c;
  uVar3 = *(undefined8 *)(lVar2 + lVar22);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar16;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar22);
  func_0x00010c1408a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar12);
  _objc_release(lVar2);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar23);
  _objc_release(lVar25);
  _objc_release(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar15);
  _objc_release(puVar1);
  func_0x00010befbb60(uVar8);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar15;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar8);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar17 + _DAT_112763278,0);
  _objc_storeStrong(puVar17 + _DAT_112763274,0);
  _objc_storeStrong(puVar17 + _DAT_11276327c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar17 + _DAT_112763270,0);
  return;
}



/* Entry: 10704a61c; end: 10704a89f; -[SCChatFoldIndicatorView _createSeparators] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704a61c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = param_1;
  func_0x00010bdd6a40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112763274;
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  *(long *)(param_1 + lVar21) = lVar19;
  _objc_release(uVar18);
  lVar19 = param_1;
  func_0x00010bdd6a40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_112763278;
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  *(long *)(param_1 + lVar20) = lVar19;
  _objc_release(uVar18);
  puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar1;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11276327c;
  uVar3 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c1408a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar18);
  _objc_release(lVar19);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar10);
  _objc_release(puVar11);
  func_0x00010befbb60(uVar1);
  puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar11);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar1);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar12 + _DAT_112763278,0);
  _objc_storeStrong(puVar12 + _DAT_112763274,0);
  _objc_storeStrong(puVar12 + _DAT_11276327c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar12 + _DAT_112763270,0);
  return;
}



/* Entry: 10704a8a0; end: 10704aa33; -[SCChatFoldIndicatorView _buildSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704a8a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + _DAT_112763278,0);
  _objc_storeStrong(puVar3 + _DAT_112763274,0);
  _objc_storeStrong(puVar3 + _DAT_11276327c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + _DAT_112763270,0);
  return;
}



/* Entry: 10704aa34; end: 10704aa93; -[SCChatFoldIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704aa34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763278,0);
  _objc_storeStrong(param_1 + _DAT_112763274,0);
  _objc_storeStrong(param_1 + _DAT_11276327c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763270,0);
  return;
}



/* Entry: 10704aa94; end: 10704aacb;  */

void FUN_10704aa94(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x21;
  if (param_1 == 0) {
    uVar1 = 0x114;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10704aacc; end: 10704ab7b;  */

ulong FUN_10704aacc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010c27dd80(), uVar1 < 0x2b)) {
    if ((1L << (uVar1 & 0x3f) & 0x60381e0000aU) != 0) {
      param_2 = 1;
      goto LAB_10704ab34;
    }
    if (uVar1 == 0xf) {
      uVar1 = param_1;
      func_0x00010bfcf4e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c27dd80();
      param_2 = (ulong)(uVar2 != 4);
      _objc_release(uVar1);
      goto LAB_10704ab34;
    }
    if (uVar1 == 0x10) goto LAB_10704ab34;
  }
  param_2 = 0;
LAB_10704ab34:
  _objc_release(param_1);
  return param_2;
}



/* Entry: 10704ab7c; end: 10704acb3;  */

void FUN_10704ab7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10704acb4;
  uStack_40 = 0x10704acc4;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf9e080(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0bff80(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10704acb4; end: 10704accb;  */

void FUN_10704acb4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10704accc; end: 10704ae1b;  */

void FUN_10704accc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf20c00(uVar10);
  _CGRectGetHeight();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = param_1;
  func_0x00010c149e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14b800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c15dd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15dcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c15de80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5040();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c15de80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfdf360();
  _objc_retainAutoreleasedReturnValue();
  FUN_10704ae1c(param_1,uVar8,uVar10,uVar2,uVar4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = uVar10;
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10704ae1c; end: 10704b10f;  */

void FUN_10704ae1c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = param_2;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  dVar7 = param_4 * 0.8999999761581421;
  if (param_1 <= param_4 * 0.8999999761581421) {
    dVar7 = param_1;
  }
  dVar6 = 27.0;
  func_0x00010c23d0a0(param_7);
  dVar8 = param_3 * 0.8999999761581421;
  if (param_3 * 0.8999999761581421 <= dVar6) {
    dVar8 = dVar6;
  }
  dVar8 = param_2 + 27.0 + dVar8;
  func_0x00010c23d0a0(param_7);
  dVar9 = dVar9 + 18.0 + 2.0 + dVar7;
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar8 + 2.0,dVar9 + 2.0,0,0);
  _UIGraphicsGetCurrentContext();
  _CGContextTranslateCTM(0x3ff0000000000000,0x3ff0000000000000);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0,0,dVar8,dVar9,0x4018000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar1,puVar4);
  _objc_release(puVar3);
  func_0x00010bfad4a0(puVar2);
  dVar9 = 9.0;
  func_0x00010bf897c0(0x4022000000000000,0x4022000000000000,param_7);
  func_0x00010c23d0a0(param_7);
  _objc_release(param_7);
  _CGContextTranslateCTM(0x4022000000000000,dVar9 + 9.0 + 2.0,uVar1);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(0,0,dVar8 + -9.0,dVar7,0x4000000000000000,0x4000000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  _objc_retainAutorelease(param_6);
  func_0x00010bdc0fe0();
  _objc_release(param_6);
  _CGContextSetFillColorWithColor(uVar1,uVar5);
  func_0x00010bfad4a0(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(0,0,param_2,dVar7,0x4000000000000000,0x4000000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_8;
  _objc_retainAutorelease(param_8);
  func_0x00010bdc0fe0();
  _objc_release(param_8);
  _CGContextSetFillColorWithColor(uVar1,uVar5);
  func_0x00010bfad4a0(puVar4);
  _CGContextTranslateCTM(0x4022000000000000,0,uVar1);
  _CGContextScaleCTM(0x3fecccccc0000000,0x3fecccccc0000000,uVar1);
  uVar5 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c12fc60(uVar5);
  _objc_release(uVar5);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10704b110; end: 10704b28b;  */

void FUN_10704b110(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bf2d880();
  if ((int)puVar1 == 0) {
    uVar5 = 0;
  }
  else {
    puVar2 = param_1;
    func_0x00010c1556a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c26bfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x000107068600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c2a50e0(param_1);
    puVar1 = PTR_DAT_1126a5920;
    _objc_retain(param_1);
    puVar4 = param_1;
    func_0x00010010fab4(param_1,puVar1);
    puVar1 = param_1;
    if ((int)puVar4 == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_1);
    if (puVar1 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = param_1;
      func_0x00010bf40ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    uVar5 = param_2;
    FUN_10704ae1c(param_2,puVar4,puVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10704b28c; end: 10704b35f;  */

undefined1 FUN_10704b28c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf9e080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bff80();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10704b360; end: 10704b373;  */

void FUN_10704b360(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10704b374; end: 10704b537; -[SCChatTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10704b374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c13fda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f8630;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithStyle_reuseIdentifier__1125f1528,0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    uVar1 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar2 + (long)_DAT_112763280,uVar1);
    _objc_release(uVar1);
    func_0x00010bfee4c0(puVar2);
    func_0x00010bfee720(puVar2);
    func_0x00010bfee700(puVar2);
    func_0x00010bfeeca0(puVar2);
    _objc_initWeak(auStack_48,puVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e380(puVar2);
    _objc_release(puVar3);
    func_0x00010c1fbac0(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10704b538; end: 10704b577;  */

void FUN_10704b538(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10704b578; end: 10704b5fb; -[SCChatTableViewCell initGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704b578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_112763284;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10704b5fc; end: 10704b6db; -[SCChatTableViewCell initDateHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704b5fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar4 = (long)_DAT_112763288;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf13d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010708cc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  FUN_107064924();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276328c),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 10704b6dc; end: 10704b74f; -[SCChatTableViewCell initDateHeaderBubble] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704b6dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11276328c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10704b750; end: 10704b813; -[SCChatTableViewCell initBody] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704b750(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112763290;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setTranslatesAutoresizingMaskInt_112664100,1);
  return;
}



/* Entry: 10704b814; end: 10704b867; -[SCChatTableViewCell _buildNewIndicatorView] */

void FUN_10704b814(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d42f8;
  _objc_opt_new(PTR_PTR_1126d42f8);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10704b868; end: 10704b897; -[SCChatTableViewCell singleTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10704b868(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763284);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


