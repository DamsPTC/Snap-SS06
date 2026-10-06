/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10651275c; end: 10651276b; -[SCChatSingleMediaThumbnailView thumbnailSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651275c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_thumbnailSize_1126792d0);
  return;
}



/* Entry: 10651276c; end: 10651277b; -[SCChatSingleMediaThumbnailView resetContents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651276c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1385f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_resetContents_11262bb98);
  return;
}



/* Entry: 10651277c; end: 10651278b; -[SCChatSingleMediaThumbnailView resetContentsAndRemovePlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651277c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_resetContentsAndRemovePlayer_11262bba0)
  ;
  return;
}



/* Entry: 10651278c; end: 10651279b; -[SCChatSingleMediaThumbnailView resetPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651278c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_resetPlayer_11262beb0);
  return;
}



/* Entry: 10651279c; end: 1065127ab; -[SCChatSingleMediaThumbnailView prepareVideoIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651279c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_prepareVideoIfNecessary_112620318);
  return;
}



/* Entry: 1065127ac; end: 1065127bb; -[SCChatSingleMediaThumbnailView resumeVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065127ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_resumeVideo_11262d0d8);
  return;
}



/* Entry: 1065127bc; end: 1065127cb; -[SCChatSingleMediaThumbnailView pauseVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065127bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_pauseVideo_11261b278);
  return;
}



/* Entry: 1065127cc; end: 106512843; -[SCChatSingleMediaThumbnailView rerenderWithBoundingSize:] */

void FUN_1065127cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126cb468;
  func_0x00010bfb68e0();
  func_0x00010c27a580(&uStack_60,param_3,param_4,param_1,param_2,puVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_5,param_6,&uStack_90);
  return;
}



/* Entry: 106512844; end: 10651287b; -[SCChatSingleMediaThumbnailView resetWithOriginalSettings] */

void FUN_106512844(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 10651287c; end: 10651288b; -[SCChatSingleMediaThumbnailView baseMediaThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10651287c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749bb8);
}



/* Entry: 10651288c; end: 10651289b; -[SCChatSingleMediaThumbnailView mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10651288c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749bbc);
}



/* Entry: 10651289c; end: 1065128e7; -[SCChatSingleMediaThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651289c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749bbc,0);
  _objc_storeStrong(param_1 + _DAT_112749bb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112749bb4);
  return;
}



/* Entry: 1065128e8; end: 1065129cf; -[SCChatAttachmentCardView initWithViewModel:componentContext:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1065128e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126f19c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb490;
    _objc_alloc();
    func_0x00010c061d40();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749bc0);
    *(undefined **)((long)puVar1 + (long)_DAT_112749bc0) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065129d0; end: 106512a47; -[SCChatAttachmentCardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065129d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f19c8;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_112749bc0));
  return;
}



/* Entry: 106512a48; end: 106512a57; -[SCChatAttachmentCardView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bc0),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 106512a58; end: 106512acf; -[SCChatAttachmentCardView rerenderWithBoundingSize:] */

void FUN_106512a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126cb468;
  func_0x00010bfb68e0();
  func_0x00010c27a580(&uStack_60,param_3,param_4,param_1,param_2,puVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_5,param_6,&uStack_90);
  return;
}



/* Entry: 106512ad0; end: 106512b07; -[SCChatAttachmentCardView resetWithOriginalSettings] */

void FUN_106512ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 106512b08; end: 106512b1b; -[SCChatAttachmentCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749bc0,0);
  return;
}



/* Entry: 106512b1c; end: 106512cc3; -[SCChatTableViewInsetUpdater initWithInsetUpdateProviders:] */

undefined8 * FUN_106512b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f19d0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    func_0x00010c0d9840(puVar1[1]);
    uVar5 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110929bd0);
    _objc_initWeak(auStack_58,puVar1);
    puVar2 = PTR_PTR_1126ae6b8;
    uVar3 = uVar5;
    func_0x00010bf09f60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    puVar4 = puVar2;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106512cc4; end: 106512d13;  */

void FUN_106512cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2519e0(param_2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c62e0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106512d14; end: 106512d3b;  */

void FUN_106512d14(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd86870(param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c62e0,
                      &PTR___NSConcreteGlobalBlock_110929c10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106512d3c; end: 106512da3;  */

void FUN_106512d3c(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  float fVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010bfb2c80(param_3);
  fVar2 = param_1;
  func_0x00010bfb2c80(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 + fVar2,puVar1,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 106512da4; end: 106512ddb;  */

uint FUN_106512da4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c28d7a0();
  _objc_release(param_1);
  return (uint)lVar1 ^ 1;
}



/* Entry: 106512ddc; end: 106512e03; -[SCChatTableViewInsetUpdater setUpdatesFrozen:] */

void FUN_106512ddc(long param_1,undefined8 param_2,uint param_3)

{
  if ((*(byte *)(param_1 + 0x10) != param_3) &&
     (*(char *)(param_1 + 0x10) = (char)param_3, (param_3 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_next__112614028,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c62e0);
    return;
  }
  return;
}



/* Entry: 106512e04; end: 106512e0b; -[SCChatTableViewInsetUpdater updatesFrozen] */

undefined1 FUN_106512e04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106512e0c; end: 106512e13; -[SCChatTableViewInsetUpdater tableViewBottonInset] */

undefined8 FUN_106512e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106512e14; end: 106512e43; -[SCChatTableViewInsetUpdater .cxx_destruct] */

void FUN_106512e14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106512e44; end: 10651303f; -[SCChatTableViewV3Presenter initWithCurrentUserId:chatDisplayReadyLogger:messagingExperimentService:chatLogger:] */

undefined1 *
FUN_106512e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f19d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    puVar3 = PTR_PTR_1126cb498;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x100);
    *(undefined **)((long)puVar1 + 0x100) = puVar3;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + 0x100));
    func_0x00010c17b180(*(undefined8 *)((long)puVar1 + 0x100));
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    puVar3 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined **)((long)puVar1 + 200) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106513040; end: 106513067; -[SCChatTableViewV3Presenter highWatermarkObservable] */

void FUN_106513040(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106513068; end: 10651306f; -[SCChatTableViewV3Presenter unreadChatViewedCount] */

undefined8 FUN_106513068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106513070; end: 106513077; -[SCChatTableViewV3Presenter unreadSnapViewedCount] */

undefined8 FUN_106513070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106513078; end: 10651307f; -[SCChatTableViewV3Presenter resetUnreadViewedSessionCounts] */

void FUN_106513078(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 106513080; end: 106513087; -[SCChatTableViewV3Presenter scrollViewDidScroll] */

void FUN_106513080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beea070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__visibleCellsDidChangeWithConver_1125981c0,0)
  ;
  return;
}



/* Entry: 106513088; end: 1065130c7; -[SCChatTableViewV3Presenter affordanceScrollDidEnd] */

void FUN_106513088(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c480();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 1065130c8; end: 10651317f; -[SCChatTableViewV3Presenter _visibleCellsDidChangeWithConversationViewModelChanged:] */

void FUN_1065130c8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010bfed1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((((param_3 & 1) != 0) || (lVar3 != *(long *)(param_1 + 0x68))) ||
     (lVar2 != *(long *)(param_1 + 0x70))) {
    func_0x00010bed3100(param_1,param_2,lVar3,lVar2,param_3);
    func_0x00010bed5160(param_1,param_2,param_3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106513180; end: 106513907; -[SCChatTableViewV3Presenter _updateAndNotifyVisibleCellsForNewStart:end:conversationViewModelChanged:] */

void FUN_106513180(double param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  uint param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined *puStack_1c0;
  undefined *puStack_1b0;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar17 = *(long *)(param_2 + 0x68);
  lVar3 = param_4;
  func_0x00010c142240();
  if (lVar17 != 0) {
    lVar17 = *(long *)(param_2 + 0x68);
    func_0x00010c142240();
    if (lVar17 <= lVar3) {
      lVar3 = lVar17;
    }
  }
  lVar18 = *(long *)(param_2 + 0x70);
  lVar17 = param_5;
  func_0x00010c142240();
  if (lVar18 != 0) {
    lVar18 = *(long *)(param_2 + 0x70);
    func_0x00010c142240();
    if (lVar17 <= lVar18) {
      lVar17 = lVar18;
    }
  }
  if (*(long *)(param_2 + 0x68) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(long *)(param_2 + 0x70) == 0;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
  _CGRectGetMinY();
  dVar33 = param_1;
  func_0x00010c2744e0(*(undefined8 *)(param_2 + 0x100));
  param_1 = param_1 + dVar33;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
  _CGRectGetMaxY();
  dVar24 = dVar33;
  func_0x00010c0cd580(*(undefined8 *)(param_2 + 0x100));
  dVar33 = dVar33 - dVar24;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
  _CGRectGetMinX();
  dVar25 = dVar24;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
  _CGRectGetWidth();
  dVar33 = dVar33 - param_1;
  dVar26 = dVar24;
  dVar30 = param_1;
  dVar31 = dVar25;
  dVar32 = dVar33;
  _CGRectGetHeight(dVar24,param_1,dVar25,dVar33);
  if (lVar17 < lVar3) {
    lVar18 = 0;
    lVar23 = 0;
    puStack_1c0 = (undefined *)0x0;
    puStack_1b0 = (undefined *)0x0;
  }
  else {
    puStack_1b0 = (undefined *)0x0;
    puStack_1c0 = (undefined *)0x0;
    lVar23 = 0;
    lVar18 = 0;
    dVar29 = dVar26;
    do {
      if (bVar1) {
LAB_106513318:
        uVar20 = 0;
      }
      else {
        lVar4 = *(long *)(param_2 + 0x68);
        func_0x00010c142240();
        if (lVar3 < lVar4) goto LAB_106513318;
        lVar4 = *(long *)(param_2 + 0x70);
        func_0x00010c142240();
        uVar20 = (uint)(lVar3 <= lVar4);
      }
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(ulong *)(param_2 + 0x100);
      func_0x00010bf33b80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126cb4a0;
      _objc_opt_class(PTR_PTR_1126cb4a0);
      uVar11 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar13 = uVar6;
      if ((uVar11 & 1) == 0) {
        uVar13 = 0;
      }
      _objc_retain(uVar13);
      _objc_release(uVar6);
      lVar4 = param_4;
      func_0x00010c142240();
      if (lVar3 < lVar4) {
LAB_1065133ac:
        uVar16 = 0;
      }
      else {
        lVar4 = param_5;
        func_0x00010c142240();
        if ((lVar4 < lVar3) || (puStack_1b0 != (undefined *)0x0)) {
          if (lVar4 < lVar3) goto LAB_1065133ac;
          if (puStack_1b0 == (undefined *)0x0) goto LAB_106513498;
          _objc_retain(puVar5);
          _objc_release(puStack_1c0);
          uVar16 = 1;
          puStack_1c0 = puVar5;
        }
        else {
          func_0x00010c124560(*(undefined8 *)(param_2 + 0x100));
          uVar19 = *(undefined8 *)(param_2 + 0x100);
          uVar14 = uVar19;
          func_0x00010c262ca0(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51460(dVar29,dVar30,dVar31,dVar32,uVar19);
          _CGRectGetMaxY();
          dVar27 = dVar29;
          func_0x00010c2744e0(*(undefined8 *)(param_2 + 0x100));
          dVar28 = dVar27;
          _objc_release(uVar14);
          bVar2 = dVar27 < dVar29;
          dVar29 = dVar28;
          if (bVar2) {
LAB_106513498:
            _objc_retain(puVar5);
            uVar16 = 1;
            puStack_1b0 = puVar5;
          }
          else {
            uVar16 = 0;
            puStack_1b0 = (undefined *)0x0;
          }
        }
      }
      if (uVar13 != 0 && uVar20 != uVar16) {
        func_0x00010bf73840(uVar6);
      }
      if ((uVar16 & (param_6 | uVar20 ^ 1)) == 1) {
        puVar8 = *(undefined **)(param_2 + 8);
        func_0x00010c29d580();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010010fab4();
        puVar7 = puVar8;
        if ((int)puVar9 == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain(puVar7);
        _objc_release(puVar8);
        if ((puVar7 != (undefined *)0x0) &&
           (uVar11 = param_2, func_0x00010be42320(), (int)uVar11 != 0)) {
          puVar9 = PTR_PTR_1126cb308;
          _objc_opt_class(PTR_PTR_1126cb308);
          puVar22 = puVar8;
          _objc_opt_isKindOfClass(puVar8,puVar9);
          if (((ulong)puVar22 & 1) == 0) {
            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c24d420();
            _objc_retainAutoreleasedReturnValue();
          }
          dVar29 = 0.0;
          _objc_retain();
          puVar9 = puVar8;
          func_0x00010bf52a60();
          lVar4 = lRam0000000000000000;
          while (puVar9 != (undefined *)0x0) {
            puVar22 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(puVar8);
              }
              lVar21 = *(long *)((long)puVar22 * 8);
              lVar10 = lVar21;
              FUN_106513908();
              _objc_retainAutoreleasedReturnValue();
              if (lVar10 != 0) {
                uVar11 = *(ulong *)(param_2 + 0x40);
                func_0x00010bf4b900();
                if ((uVar11 & 1) == 0) {
                  func_0x00010befa120(*(undefined8 *)(param_2 + 0x40));
                  FUN_10651394c();
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar21;
                  func_0x00010c07ea80();
                  _objc_release(lVar21);
                  if ((int)lVar12 == 0) {
                    lVar23 = lVar23 + 1;
                  }
                  else {
                    lVar18 = lVar18 + 1;
                  }
                }
              }
              _objc_release(lVar10);
              puVar22 = puVar22 + 1;
            } while (puVar9 != puVar22);
            puVar9 = puVar8;
            func_0x00010bf52a60();
          }
          _objc_release(puVar8);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
      }
      _objc_release(uVar13);
      _objc_release(puVar5);
      bVar2 = lVar3 != lVar17;
      lVar3 = lVar3 + 1;
    } while (bVar2);
  }
  *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + lVar23;
  *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + lVar18;
  if ((((param_5 != 0) && (param_4 != 0)) && (param_6 == 0)) &&
     ((*(byte *)(param_2 + 0x23) & 1) != 0)) {
    if ((*(long *)(param_2 + 0x68) == 0) || (*(long *)(param_2 + 0x70) == 0)) {
      func_0x00010c142240(param_4);
      func_0x00010c142240();
    }
    uVar13 = param_2;
    func_0x00010be472c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar13 != 0) {
      func_0x00010c142240();
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be5d5a0(param_2);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    _objc_release(uVar13);
  }
  _objc_retain(puStack_1b0);
  uVar14 = *(undefined8 *)(param_2 + 0x68);
  *(undefined **)(param_2 + 0x68) = puStack_1b0;
  _objc_release(uVar14);
  _objc_retain(puStack_1c0);
  uVar14 = *(undefined8 *)(param_2 + 0x70);
  *(undefined **)(param_2 + 0x70) = puStack_1c0;
  _objc_release(uVar14);
  if (((*(char *)(param_2 + 0x23) == '\x01') && (*(char *)(param_2 + 0x20) == '\x01')) &&
     (*(char *)(param_2 + 0x24) == '\x01')) {
    puVar5 = puStack_1b0;
    if (puStack_1c0 != (undefined *)0x0) {
      puVar5 = puStack_1c0;
    }
    _objc_retain(puVar5);
    if (puVar5 != (undefined *)0x0) {
      uVar13 = param_2;
      func_0x00010beea940(dVar24,param_1,dVar25,dVar33,dVar26);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar13 != 0) && (uVar11 = uVar13, func_0x00010c0720c0(), (uVar11 & 1) == 0)) {
        _objc_retain(uVar13);
        uVar14 = *(undefined8 *)(param_2 + 0xc0);
        *(ulong *)(param_2 + 0xc0) = uVar13;
        _objc_release(uVar14);
        func_0x00010c0d9840(*(undefined8 *)(param_2 + 200));
      }
      _objc_release(uVar13);
    }
    _objc_release(puVar5);
  }
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b0);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    FUN_106516bd0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  return;
}



/* Entry: 106513908; end: 10651394b;  */

void FUN_106513908(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_106516bd0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651394c; end: 106513aab;  */

void FUN_10651394c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cb308;
  _objc_opt_class(PTR_PTR_1126cb308);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c6d00;
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
    uVar2 = uVar3;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar4 = uVar3;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar1 = PTR_PTR_1126cb4d0;
      if (uVar4 != 0) goto LAB_106513a38;
      _objc_retain(param_1);
      _objc_opt_class(puVar1);
      uVar4 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      uVar2 = param_1;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_1);
      uVar4 = uVar2;
      func_0x00010c0cb140(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010c0cbb20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106513a38:
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106513aac; end: 106513ba3; -[SCChatTableViewV3Presenter _notifyVisibleCellsOnViewDisappear] */

void FUN_106513aac(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if ((lVar3 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    func_0x00010c142240();
    lVar4 = *(long *)(param_1 + 0x70);
    func_0x00010c142240();
    if (lVar3 <= lVar4) {
      do {
        puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(ulong *)(param_1 + 0x100);
        func_0x00010bf33b80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126cb4a0;
        _objc_opt_class(PTR_PTR_1126cb4a0);
        uVar8 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar7);
        uVar2 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar6);
        func_0x00010bf73840(uVar2);
        _objc_release(uVar2);
        _objc_release(puVar5);
        lVar4 = *(long *)(param_1 + 0x70);
        func_0x00010c142240();
        bVar1 = lVar3 < lVar4;
        lVar3 = lVar3 + 1;
      } while (bVar1);
    }
  }
  return;
}



/* Entry: 106513ba4; end: 106513bab; -[SCChatTableViewV3Presenter tableHeight] */

undefined8 FUN_106513ba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106513bac; end: 106513bb3; -[SCChatTableViewV3Presenter firstViewableChatOffset] */

undefined8 FUN_106513bac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106513bb4; end: 106513c0f; -[SCChatTableViewV3Presenter isChatVisible] */

bool FUN_106513bb4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    bVar1 = puVar3 == (undefined *)0x0;
    _objc_release(puVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106513c10; end: 106513d13; -[SCChatTableViewV3Presenter _shouldScrollToFoldEdgeWasAtFoldEdgeBeforeUpdate:useBotScrollBehavior:isFirstConversationLoad:isNewConversation:] */

ulong FUN_106513c10(ulong param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5,
                   undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_4 != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126c6d00;
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar4 = uVar2;
      func_0x00010c0cb140(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06d7e0();
      uVar6 = (uint)uVar5;
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
    return (ulong)((param_3 | (uint)param_5 & uVar6) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb58d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__shouldScrollToFoldEdgeForInitia_11258afd8,param_6,param_5);
  return param_1;
}



/* Entry: 106513d14; end: 106513d2f; -[SCChatTableViewV3Presenter _isFoldFeatureEnabled] */

byte FUN_106513d14(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x23) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xa8);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 106513d30; end: 106513ddf; -[SCChatTableViewV3Presenter _shouldScrollToFoldEdgeForInitialOpenIsNewConversation:isFirstConversationLoad:] */

uint FUN_106513d30(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bfb0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfb1f20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_1;
      func_0x00010bdd3f40(param_1);
      uVar5 = (uint)lVar4 ^ 1;
    }
    else {
      uVar5 = 1;
    }
    _objc_release(lVar3);
  }
  else {
    uVar5 = 1;
  }
  func_0x00010be40880(param_1);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = (uint)param_1;
  }
  return (param_3 | param_4) & uVar5 & uVar1;
}



/* Entry: 106513de0; end: 106513f3b; -[SCChatTableViewV3Presenter _shouldScrollToBottomIsMessageAddedAtTheEnd:wasItemRemoved:isNewConversation:wasScrollAtBottomBeforeUpdate:messageSenderUserId:] */

uint FUN_106513de0(long param_1,undefined8 param_2,int param_3,ulong param_4,uint param_5,
                  uint param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c0720c0(uVar1,param_2,param_7);
  uVar6 = param_6;
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    param_5 = param_5 | *(byte *)(param_1 + 0xf8);
    uVar6 = *(byte *)(param_1 + 0xf8) ^ 1;
    if ((param_5 & 1) == 0) {
      uVar6 = param_6;
    }
    if (((param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
      uVar6 = param_6 & *(byte *)(param_1 + 0x21);
      if ((param_3 != 0) && ((*(byte *)(param_1 + 0x21) & 1) == 0)) {
        uVar2 = *(ulong *)(param_1 + 8);
        func_0x00010c0cbaa0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar4 = PTR_PTR_1126c6d00;
        _objc_retain(uVar3);
        _objc_opt_class(puVar4);
        uVar5 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        uVar2 = uVar3;
        if ((uVar5 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar3);
        uVar5 = uVar2;
        func_0x00010c0cb340(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar4 = PTR_PTR_1126cb4a8;
        _objc_opt_class(PTR_PTR_1126cb4a8);
        uVar2 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar4);
        _objc_release(uVar5);
        uVar6 = param_6 | ((uint)uVar2 ^ 1 | (uint)(uVar5 == 0)) & (uint)uVar1;
        _objc_release(uVar3);
      }
    }
  }
  return uVar6 & 1;
}



/* Entry: 106513f3c; end: 106513f4b; -[SCChatTableViewV3Presenter viewDidFullyAppear] */

void FUN_106513f3c(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c284930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_updateContentInset_11267ec70);
  return;
}



/* Entry: 106513f4c; end: 106513f8b; -[SCChatTableViewV3Presenter viewDidFullyDisappear] */

void FUN_106513f4c(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  func_0x00010bfe1c00(*(undefined8 *)(param_1 + 0x28),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be65290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyVisibleCellsOnViewDisappe_112576e40);
  return;
}



/* Entry: 106513f8c; end: 106513f93; -[SCChatTableViewV3Presenter viewWillEnterBackground] */

void FUN_106513f8c(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 106513f94; end: 106514037; -[SCChatTableViewV3Presenter appearanceDidChange] */

void FUN_106513f94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_3 + 0x100);
  func_0x00010bfed1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x100));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_4,0);
    func_0x00010c128f40(*(undefined8 *)(param_3 + 0x100),param_4,lVar1,5);
    func_0x00010c1822e0(param_1,param_2,*(undefined8 *)(param_3 + 0x100));
    func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_4,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106514038; end: 1065144d3; -[SCChatTableViewV3Presenter didConversationViewModelChange:metricsTracker:] */

void FUN_106514038(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  uVar10 = *(undefined8 *)(param_2 + 0x100);
  _objc_retain(param_5);
  func_0x00010c07d400(uVar10);
  func_0x00010c07d420();
  uVar3 = *(ulong *)(param_2 + 8);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf50280(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((uVar6 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puVar5;
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = puVar5;
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    *(undefined **)(param_2 + 0x40) = puVar5;
    _objc_release(uVar10);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0;
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_2 + 0xc0) = 0;
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar5;
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = puVar5;
    _objc_release(uVar10);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_2 + 8);
    func_0x00010c075860();
    if (iVar2 != 0) {
      func_0x00010c075860();
    }
  }
  uVar6 = *(ulong *)(param_2 + 8);
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar4;
  FUN_106513908();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  FUN_106513908();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  if ((uVar6 != uVar7) && (uVar7 != 0)) {
    func_0x00010c071ae0();
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar10 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0cbaa0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar6 = param_4;
  func_0x00010c0cbaa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar6);
  _objc_release(uVar10);
  uVar6 = param_4;
  func_0x00010c074920();
  if ((uVar6 & 1) == 0) {
    uVar6 = param_4;
    func_0x00010c122da0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c122e00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010706a1b8(uVar6,uVar7,*(undefined8 *)(param_2 + 0xa0));
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  func_0x00010bf87040(*(undefined8 *)(param_2 + 0x100));
  func_0x00010be8ab40(param_2);
  _objc_release(param_5);
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(ulong *)(param_2 + 8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar10);
  lVar8 = *(long *)(param_2 + 8);
  func_0x00010bf50920();
  uVar9 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0e9060();
  *(byte *)(param_2 + 0x23) =
       (8 < lVar8 - 1U | (byte)(0x1e7 >> (ulong)((uint)(lVar8 - 1U) & 0x1f)) ^ 0xff) & (byte)uVar10
       & 1;
  _objc_release(uVar9);
  uVar1 = (undefined1)*(undefined8 *)(param_2 + 8);
  func_0x00010c071380();
  _objc_release(param_4);
  *(undefined1 *)(param_2 + 0xa8) = uVar1;
  if ((((*(char *)(param_2 + 0x23) == '\x01') && (*(char *)(param_2 + 0x20) == '\x01')) &&
      (*(char *)(param_2 + 0x25) == '\x01')) && ((*(byte *)(param_2 + 0x24) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x24) = 1;
  }
  uVar6 = uVar3;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3180(param_1,param_2);
  _objc_release(uVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1065144d4; end: 1065145ef; -[SCChatTableViewV3Presenter performAndUpdateScrollPosition:] */

void FUN_1065144d4(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_1065145d4;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x100);
  func_0x00010c07d400();
  func_0x00010c07d420(*(undefined8 *)(param_1 + 0x100));
  (**(code **)(param_3 + 0x10))(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c074920();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c122da0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c122e00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010706a1b8(uVar3,uVar4,*(undefined8 *)(param_1 + 0xa0));
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (iVar1 == 0) goto LAB_106514538;
LAB_1065145a0:
    if ((*(char *)(param_1 + 0xa8) == '\x01') ||
       (uVar2 = param_1, func_0x00010beb5600(), (uVar2 & 1) == 0)) {
      func_0x00010be9bf80(param_1);
      goto LAB_1065145d4;
    }
  }
  else {
    if (iVar1 != 0) goto LAB_1065145a0;
LAB_106514538:
    uVar2 = param_1;
    func_0x00010beb5600();
    if ((int)uVar2 == 0) goto LAB_1065145d4;
  }
  func_0x00010c152440(param_1);
LAB_1065145d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065145f0; end: 10651461f; -[SCChatTableViewV3Presenter _shouldRestoreFoldEdgeWasScrollAtFoldEdgeBeforeUpdate:useBotScrollBehavior:] */

uint FUN_1065145f0(uint param_1,undefined8 param_2,int param_3,uint param_4)

{
  if (param_3 != 0) {
    func_0x00010be40880();
    return param_4 | param_1;
  }
  return 0;
}



/* Entry: 106514620; end: 10651479b; -[SCChatTableViewV3Presenter performTableUpdateForLayoutChange] */

void FUN_106514620(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010c07d400(*(undefined8 *)(param_2 + 0x100));
  func_0x00010c07d420();
  uVar2 = *(ulong *)(param_2 + 8);
  func_0x00010c074920();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c122da0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c122e00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010706a1b8(uVar3,uVar4,*(undefined8 *)(param_2 + 0xa0));
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  func_0x00010bf87040(*(undefined8 *)(param_2 + 0x100));
  _objc_initWeak(auStack_58,*(undefined8 *)(param_2 + 0x100));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f9680(puVar1);
  func_0x00010bde3180(param_1,param_2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10651479c; end: 1065147e3;  */

void FUN_10651479c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf18e80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf95a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065147e4; end: 1065148c3; -[SCChatTableViewV3Presenter _completeReloadWithDidConversationViewModelChange:previousDistanceToBottom:isMessageAddedAtTheEnd:wasItemRemoved:isNewConversation:isFirstConversationLoad:wasScrollAtBottomBeforeUpdate:wasScrollAtFoldEdgeBeforeUpdate:messageSenderUserId:useBotScrollBehavior:] */

void FUN_1065147e4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  
  _objc_retain(in_stack_00000008);
  func_0x00010bee3380(param_2);
  func_0x00010c284920(*(undefined8 *)(param_2 + 0x100));
  func_0x00010bed6080(param_1,param_2);
  _objc_release(in_stack_00000008);
  func_0x00010beea060(param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c074920(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1c2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setMaskViewVisible__11264e558,uVar1);
  return;
}



/* Entry: 1065148c4; end: 1065149a3; -[SCChatTableViewV3Presenter _updateContentOffsetForPreviousDistanceToBottom:isMessageAddedAtTheEnd:wasItemRemoved:isNewConversation:isFirstConversationLoad:wasScrollAtBottomBeforeUpdate:wasScrollAtFoldEdgeBeforeUpdate:messageSenderUserId:useBotScrollBehavior:] */

void FUN_1065148c4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  long lVar1;
  
  _objc_retain(param_10);
  lVar1 = param_2;
  func_0x00010beb58e0(param_2,param_3,param_9,param_11,param_7,param_6);
  if ((int)lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010beb58a0(param_2,param_3,param_4,param_5,param_6,param_8,param_10);
    if ((int)lVar1 == 0) {
      if (((param_4 & 1) == 0) && ((*(byte *)(param_2 + 0x21) & 1) == 0)) {
        func_0x00010be88060(param_1,param_2);
      }
    }
    else {
      func_0x00010be9bf80(param_2);
    }
  }
  else {
    func_0x00010c152440(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 1065149a4; end: 106514a47; -[SCChatTableViewV3Presenter _updateVerticalLayoutProperties] */

void FUN_1065149a4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cb3b0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0cbaa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d000(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c267de0(puVar2);
  if (param_1 != *(double *)(param_2 + 0x10)) {
    func_0x00010c267de0(puVar2);
    *(double *)(param_2 + 0x10) = param_1;
  }
  func_0x00010bf194e0(puVar2);
  if (param_1 != *(double *)(param_2 + 0x18)) {
    func_0x00010bf194e0(puVar2);
    *(double *)(param_2 + 0x18) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106514a48; end: 106514ab3; -[SCChatTableViewV3Presenter _belowFoldFillsView] */

bool FUN_106514a48(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_2 + 0x10);
  dVar3 = *(double *)(param_2 + 0x18);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
  _CGRectGetHeight();
  dVar1 = param_1;
  func_0x00010c2744e0(*(undefined8 *)(param_2 + 0x100));
  param_1 = param_1 - dVar1;
  func_0x00010c0cd580(*(undefined8 *)(param_2 + 0x100));
  param_1 = param_1 - dVar1;
  return param_1 <= dVar2 - dVar3 && 0.0 < param_1;
}



/* Entry: 106514ab4; end: 106514adb; -[SCChatTableViewV3Presenter scrollToFoldEdgeOrBottomForInitialOpen] */

void FUN_106514ab4(undefined8 param_1)

{
  func_0x00010be71d00();
                    /* WARNING: Could not recover jumptable at 0x00010be5e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__maybeMarkPendingRescroll__1125751d0,3);
  return;
}



/* Entry: 106514adc; end: 106514ba7; -[SCChatTableViewV3Presenter _performFoldEdgeOrBottomForInitialOpen] */

void FUN_106514adc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    if (*(char *)(param_1 + 0x23) == '\x01') {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010bfb1f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010be58360(param_1);
        *(undefined1 *)(param_1 + 0x80) = 0;
        uVar3 = *(undefined8 *)(param_1 + 0x100);
        uVar2 = *(undefined8 *)(param_1 + 8);
        func_0x00010bfb1f20(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c152720(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
      if (*(char *)(param_1 + 0xa8) != '\x01') goto LAB_106514b98;
    }
    lVar1 = param_1;
    func_0x00010bdd3f40();
    if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9bf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollToBottomAndLog_112584988);
      return;
    }
  }
LAB_106514b98:
                    /* WARNING: Could not recover jumptable at 0x00010c152450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToFoldEdge_112632330);
  return;
}



/* Entry: 106514ba8; end: 106514c27; -[SCChatTableViewV3Presenter scrollToFoldEdge] */

void FUN_106514ba8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x100);
  func_0x00010c07d420();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010be58360(param_1,param_2,&PTR____CFConstantStringClassReference_110e534b8);
  *(undefined1 *)(param_1 + 0x80) = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152720(*(undefined8 *)(param_1 + 0x100),param_2,uVar2,1,0);
  func_0x00010be5e0c0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106514c28; end: 106514c63; -[SCChatTableViewV3Presenter _scrollToBottomAndLog] */

void FUN_106514c28(long param_1,undefined8 param_2)

{
  func_0x00010be58360(param_1,param_2,&PTR____CFConstantStringClassReference_110dfec58);
  *(undefined1 *)(param_1 + 0x80) = 0;
  func_0x00010c1522c0(*(undefined8 *)(param_1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010be5e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__maybeMarkPendingRescroll__1125751d0,2);
  return;
}



/* Entry: 106514c64; end: 106514d27; -[SCChatTableViewV3Presenter _reestablishContentOffsetWithPreviousDistanceToBottom:] */

void FUN_106514c64(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  if ((*(byte *)(param_3 + 0x80) & 1) == 0) {
    dVar2 = param_1;
    func_0x00010bf4d5e0(*(undefined8 *)(param_3 + 0x100));
    _CFAbsoluteTimeGetCurrent();
    if ((*(double *)(param_3 + 0xd0) <= 0.0) || (0.1 <= dVar2 - *(double *)(param_3 + 0xd0))) {
      lVar1 = 0;
      *(double *)(param_3 + 0xd8) = dVar2;
    }
    else {
      lVar1 = *(long *)(param_3 + 0xe0) + 1;
    }
    *(long *)(param_3 + 0xe0) = lVar1;
    *(double *)(param_3 + 0xd0) = dVar2;
    if (param_2 - param_1 <= 0.0) {
      func_0x00010bf50280(*(undefined8 *)(param_3 + 8));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    func_0x00010befda00(*(undefined8 *)(param_3 + 0x100));
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x100),PTR_s_setContentOffset__11263e2d8);
    return;
  }
  return;
}



/* Entry: 106514d28; end: 106515147; -[SCChatTableViewV3Presenter _reloadRelevantTableCellsForNewConversationViewModel:withMetricsTracker:] */

void FUN_106514d28(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  if (uVar2 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
LAB_106514e00:
    uVar2 = param_3;
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(uVar2);
    if (((-1 < (long)(uVar3 - lVar6)) && (uVar3 - lVar6 < 0x1f)) &&
       (uVar2 = param_3, func_0x00010c075860(), (uVar2 & 1) == 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c075860();
      if (iVar1 == 0) {
        uVar2 = param_3;
        func_0x00010bfd5480();
        iVar1 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010bfd5480();
        if ((int)uVar2 == iVar1) {
          uVar2 = param_3;
          func_0x00010c0cbaa0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = *(undefined **)(param_1 + 8);
          if (puVar7 == (undefined *)0x0) {
            puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c0cbaa0();
            _objc_retainAutoreleasedReturnValue();
          }
          puStack_80 = &uStack_88;
          uStack_88 = 0;
          uStack_78 = 0x2020000000;
          uStack_70 = 0;
          puStack_a0 = &uStack_a8;
          uStack_a8 = 0;
          uStack_98 = 0x2020000000;
          uStack_90 = 0;
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          puVar9 = puVar7;
          func_0x00010b813c80(puVar7,uVar2,&PTR___NSConcreteGlobalBlock_110929c60);
          puVar10 = puVar9;
          func_0x00010c066900();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010be38e80(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          func_0x00010bf529e0(lVar6);
          puVar10 = puVar9;
          func_0x00010bf6c000(puVar9);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010be38e80(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          func_0x00010bf529e0(lVar5);
          puVar10 = puVar9;
          func_0x00010c286820(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar2);
          _objc_retain(puVar7);
          _objc_retain(param_3);
          _objc_retain(puVar8);
          func_0x00010bf97e80(puVar10);
          _objc_release(puVar10);
          *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(puStack_a0 + 3);
          func_0x00010bf529e0(puVar8);
          func_0x00010c278920(param_4);
          func_0x00010bee1b80(param_1);
          _objc_release(puVar8);
          _objc_release(param_3);
          _objc_release(puVar7);
          _objc_release(uVar2);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(lVar5);
          _objc_release(lVar6);
          __Block_object_dispose(&uStack_a8,8);
          __Block_object_dispose(&uStack_88,8);
          _objc_release(puVar7);
          _objc_release(uVar2);
          goto LAB_106514ed4;
        }
      }
    }
  }
  else if (uVar3 == 0) {
    _objc_release();
    _objc_release(uVar2);
  }
  else {
    uVar4 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) goto LAB_106514e00;
  }
  func_0x00010be8ade0(param_1);
LAB_106514ed4:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106515148; end: 106515407;  */

long FUN_106515148(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a53f8);
  lVar1 = param_2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  puVar2 = PTR_DAT_1126a53f8;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  lVar3 = param_3;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(param_3);
  if (lVar1 == 0 || lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c071ae0(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar6;
}



/* Entry: 106515408; end: 10651555f; -[SCChatTableViewV3Presenter _updateViewModel:newViewModel:newIndexPath:] */

long FUN_106515408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010bdfe5e0(param_1);
  uVar3 = *(ulong *)(param_1 + 0x100);
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  if (uVar3 != 0) {
    puVar4 = PTR_PTR_1126cb4b0;
    _objc_opt_class(PTR_PTR_1126cb4b0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if ((uVar5 & 1) == 0) {
      puVar4 = PTR_PTR_1126cb4b8;
      _objc_opt_class(PTR_PTR_1126cb4b8);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      puVar4 = PTR_PTR_1126cb4b8;
      if ((uVar5 & 1) != 0) {
        _objc_retain(uVar3);
        _objc_opt_class(puVar4);
        uVar6 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        uVar5 = uVar3;
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar3);
        func_0x00010c2226c0(uVar5);
        _objc_release(uVar5);
      }
    }
    else {
      func_0x00010c2226c0(uVar3);
    }
    func_0x00010bfe1300(param_4);
    func_0x00010c1a7f60(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  return lVar2;
}



/* Entry: 106515560; end: 106515647; -[SCChatTableViewV3Presenter _indexPathsFromIndexSet:] */

void FUN_106515560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1065155fc;
  puStack_30 = &UNK_110866258;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010bf97bc0(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106515648; end: 1065158cf; -[SCChatTableViewV3Presenter _didHeightChange:newViewModel:] */

ulong FUN_106515648(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5
                   )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfe0640(param_4);
  dVar11 = param_1;
  func_0x00010bfe0640(param_5);
  puVar5 = PTR_PTR_1126c6d00;
  if (param_1 == dVar11) {
    _objc_retain(param_4);
    _objc_opt_class(puVar5);
    uVar10 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar5);
    uVar1 = param_4;
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    puVar5 = PTR_PTR_1126c6d00;
    _objc_retain(param_5);
    _objc_opt_class(puVar5);
    uVar10 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar5);
    uVar2 = param_5;
    if ((uVar10 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_5);
    uVar10 = 0;
    if ((uVar1 != 0) && (uVar2 != 0)) {
      uVar10 = param_4;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cb4c0;
      _objc_opt_class(PTR_PTR_1126cb4c0);
      uVar6 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar5);
      uVar3 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar10);
      uVar10 = param_5;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cb4c0;
      _objc_opt_class(PTR_PTR_1126cb4c0);
      uVar7 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar5);
      uVar6 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar10);
      if ((uVar3 == 0) || (uVar6 == 0)) {
        uVar8 = param_4;
        func_0x00010c0cb340();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126cb4c8;
        _objc_opt_class(PTR_PTR_1126cb4c8);
        uVar10 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar5);
        uVar7 = uVar8;
        if ((uVar10 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
        uVar10 = param_5;
        func_0x00010c0cb340();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126cb4c8;
        _objc_opt_class(PTR_PTR_1126cb4c8);
        uVar9 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar5);
        uVar4 = uVar10;
        if ((uVar9 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar10);
        uVar10 = 0;
        if ((uVar7 != 0) && (uVar4 != 0)) {
          func_0x00010c071ae0(uVar8);
          uVar10 = uVar8;
        }
        _objc_release(uVar4);
        _objc_release(uVar7);
      }
      else {
        uVar10 = (ulong)(uVar3 == uVar6);
      }
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar10 = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar10;
}



/* Entry: 1065158d0; end: 106515adb; -[SCChatTableViewV3Presenter _updateTableViewWithAddedPaths:updatedPaths:deletedPaths:heightChanged:metricsTracker:] */

void FUN_1065158d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,uint param_8,long param_9)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  if (((param_8 == 0) || (lVar2 = param_5, func_0x00010bf529e0(), lVar2 != 0)) ||
     (lVar2 = param_6, func_0x00010bf529e0(), lVar2 != 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_7;
    func_0x00010bf529e0();
    bVar1 = lVar2 == 0;
  }
  *(bool *)(param_3 + 0x21) = bVar1;
  if (param_9 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_9;
    func_0x00010c27dd80();
    bVar1 = lVar2 == 0;
  }
  lVar2 = param_5;
  func_0x00010bf529e0();
  if (((lVar2 == 0) && (lVar2 = param_6, func_0x00010bf529e0(), lVar2 == 0)) &&
     ((lVar2 = param_7, func_0x00010bf529e0(), (param_8 & 1) == 0 && (lVar2 == 0)))) {
    func_0x00010bf43820(param_9,param_4,0x13,3);
  }
  else {
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x100));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_4,0);
    func_0x00010bf18e80(*(undefined8 *)(param_3 + 0x100));
    lVar2 = param_6;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010c128f40(*(undefined8 *)(param_3 + 0x100),param_4,param_6,5);
    }
    lVar2 = param_5;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010c066d80(*(undefined8 *)(param_3 + 0x100),param_4,param_5,5);
    }
    lVar2 = param_7;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010bf6c6c0(*(undefined8 *)(param_3 + 0x100),param_4,param_7,5);
    }
    func_0x00010bf95a20(*(undefined8 *)(param_3 + 0x100));
    if ((*(byte *)(param_3 + 0x80) & 1) == 0) {
      func_0x00010c1822e0(param_1,param_2,*(undefined8 *)(param_3 + 0x100));
    }
    func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_4,puVar3);
    func_0x00010bf43820(param_9,param_4,0x13,0);
  }
  if (bVar1) {
    uVar4 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123540();
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106515adc; end: 106515b83; -[SCChatTableViewV3Presenter _reloadTableViewWithMetricsTracker:] */

void FUN_106515adc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (param_3 == 0) {
    func_0x00010c128b60(*(undefined8 *)(param_1 + 0x100));
    func_0x00010bf43820(0,param_2,0x11,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80();
    func_0x00010c128b60(*(undefined8 *)(param_1 + 0x100));
    func_0x00010bf43820(param_3,param_2,0x11,0);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123540();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106515b84; end: 106515c57; +[SCChatTableViewV3Presenter getIndexPathArrayFrom:to:] */

void FUN_106515b84(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c142240();
  lVar4 = param_4;
  func_0x00010c142240();
  if (lVar3 <= lVar4) {
    do {
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      lVar4 = param_4;
      func_0x00010c142240();
      bVar1 = lVar3 < lVar4;
      lVar3 = lVar3 + 1;
    } while (bVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106515c58; end: 106515d63; -[SCChatTableViewV3Presenter _canUpdateOldViewModel:newViewModel:] */

ulong FUN_106515c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c071ae0();
  if ((int)uVar5 != 0) {
    uVar3 = param_3;
    _objc_opt_class(param_3);
    uVar5 = param_4;
    _objc_opt_isKindOfClass(param_4,uVar3);
    if ((uVar5 & 1) != 0) {
      uVar4 = param_4;
      func_0x00010c13fd60(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c13fd60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar4);
      goto LAB_106515d28;
    }
  }
  uVar5 = 0;
LAB_106515d28:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106515d64; end: 106515e5f; -[SCChatTableViewV3Presenter chatAffordanceTapped] */

void FUN_106515d64(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1;
  func_0x00010bee7760(param_1,param_2,*(undefined8 *)(param_1 + 0x78));
  if ((int)lVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0xb8);
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c074920();
    uVar4 = *(undefined8 *)(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      func_0x00010c122e00(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf529e0(uVar6);
    func_0x00010c0b23a0(uVar5,param_2,bVar1 ^ 1,uVar6,uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb920();
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + 0x80) = 1;
    func_0x00010c152720(*(undefined8 *)(param_1 + 0x100),param_2,*(undefined8 *)(param_1 + 0x78),1,1
                       );
    func_0x00010bed5160(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106515e60; end: 106515eeb; -[SCChatTableViewV3Presenter _validIndexPath:] */

bool FUN_106515e60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1554e0();
  lVar2 = *(long *)(param_1 + 0x100);
  func_0x00010c0df2e0();
  if (lVar1 < lVar2) {
    lVar1 = param_3;
    func_0x00010c142240(param_3);
    lVar4 = *(long *)(param_1 + 0x100);
    lVar2 = param_3;
    func_0x00010c1554e0(param_3);
    func_0x00010c0df2a0(lVar4,param_2,lVar2);
    bVar3 = lVar1 < lVar4;
  }
  else {
    bVar3 = false;
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106515eec; end: 106516073; -[SCChatTableViewV3Presenter _visibilityForRow:visibleTableRect:visibleViewHeight:] */

undefined8
FUN_106515eec(double param_1,undefined8 param_2,undefined8 param_3,double param_4,double param_5,
             long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  if (0.0 < param_4) {
    dVar4 = param_1;
    uVar2 = param_2;
    uVar8 = param_3;
    dVar9 = param_4;
    func_0x00010c124560(*(undefined8 *)(param_6 + 0x100));
    dVar5 = dVar4;
    _CGRectGetHeight();
    if (dVar5 <= 0.0) {
      uVar2 = 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_6 + 0x100);
      uVar1 = uVar3;
      func_0x00010c262ca0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51460(dVar4,uVar2,uVar8,uVar3,param_7,uVar1);
      _objc_release(uVar1);
      dVar6 = dVar4;
      _CGRectGetMaxY(dVar4,uVar2,uVar8,dVar9);
      dVar7 = param_1;
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      if (dVar6 <= dVar7) {
        uVar2 = 0;
      }
      else {
        _CGRectIntersection(param_1,param_2,param_3,param_4,dVar4,uVar2,uVar8,dVar9);
        _CGRectGetHeight();
        uVar2 = 1;
        if (0.5 <= param_1 / dVar5 || 0.0 < param_5 && 0.75 <= param_1 / param_5) {
          uVar2 = 2;
        }
      }
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 106516074; end: 1065161db; -[SCChatTableViewV3Presenter _lastVisibleIndexPathAboveInputAreaFrom:] */

void FUN_106516074(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
    _CGRectGetMinY();
    dVar9 = param_1;
    func_0x00010c2744e0(*(undefined8 *)(param_2 + 0x100));
    param_1 = param_1 + dVar9;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
    _CGRectGetMaxY();
    dVar6 = dVar9;
    func_0x00010c0cd580(*(undefined8 *)(param_2 + 0x100));
    dVar9 = dVar9 - dVar6;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
    _CGRectGetMinX();
    dVar7 = dVar6;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x100));
    _CGRectGetWidth();
    dVar9 = dVar9 - param_1;
    dVar8 = dVar6;
    _CGRectGetHeight(dVar6,param_1,dVar7,dVar9);
    lVar2 = param_4;
    func_0x00010c142240();
    if (-1 < lVar2) {
      do {
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,lVar2,0);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010bee9fe0(dVar6,param_1,dVar7,dVar9,dVar8,param_2,param_3,puVar3);
        if (lVar4 == 0) {
          puVar5 = (undefined *)0x0;
LAB_1065161a8:
          _objc_release(puVar3);
          goto LAB_1065161b0;
        }
        if (lVar4 == 2) {
          _objc_retain(puVar3);
          puVar5 = puVar3;
          goto LAB_1065161a8;
        }
        _objc_release(puVar3);
        bVar1 = 0 < lVar2;
        lVar2 = lVar2 + -1;
      } while (bVar1);
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1065161b0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065161dc; end: 106516883; -[SCChatTableViewV3Presenter _updateChatAffordanceWithConversationViewModelChanged:] */

undefined8 * FUN_1065161dc(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  undefined8 *unaff_x19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long unaff_x20;
  undefined8 uVar24;
  uint uVar25;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lStack_710;
  undefined8 *puStack_700;
  undefined8 uStack_6b0;
  long lStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_570;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_438;
  long lStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined1 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 *puStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  long lStack_3c0;
  undefined8 *puStack_3b8;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  long lStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_2a0;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  ulong uStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  ulong uStack_258;
  long lStack_250;
  undefined8 *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  uint uStack_224;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)param_1[0x20];
  func_0x00010bfed1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined8 *)param_1[0x20];
  puVar14 = (undefined8 *)0x0;
  func_0x00010c0df2a0();
  puVar28 = puVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf529e0();
  if (puVar12 != (undefined8 *)0x0 || (long)puVar3 < 1) {
    _objc_retain(puVar28);
    puVar12 = param_1;
    func_0x00010be40880();
    puVar14 = puVar28;
    if ((int)puVar12 != 0) {
      puVar14 = param_1;
      func_0x00010be472c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar28);
    }
    if (puVar14 == (undefined8 *)0x0) {
      puVar12 = puVar29;
      func_0x00010c142240();
      puStack_200 = (undefined8 *)((long)puVar12 + -1);
      puVar12 = puVar2;
      func_0x00010bf529e0();
      uVar23 = (uint)(puVar12 == (undefined8 *)0x0 && puVar3 == (undefined8 *)0x0);
    }
    else {
      puVar12 = puVar14;
      func_0x00010c142240();
      puVar4 = puVar2;
      puStack_200 = puVar12;
      func_0x00010bf529e0();
      if (puVar3 == puVar4) {
        puVar12 = puVar14;
        func_0x00010c142240();
        uVar23 = (uint)((long)((long)puVar3 + -1) <= (long)puVar12);
      }
      else {
        uVar23 = 0;
      }
    }
    func_0x00010be5d5a0(param_1);
    puStack_208 = puVar14;
    if (((param_3 & 1) == 0) && (*(char *)((long)param_1 + 0x23) != '\x01')) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = param_1;
      func_0x00010be20b80();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = param_1;
    func_0x00010be20bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1[0xc];
    param_1[0xc] = puVar12;
    _objc_release(uVar17);
    lVar5 = param_1[0xc];
    func_0x00010bf529e0();
    if ((puVar3 == (undefined8 *)0x0) ||
       ((puVar12 = param_1, func_0x00010be40880(), ((ulong)puVar12 & 1) == 0 &&
        (puVar12 = puVar3, func_0x00010c071f60(), ((ulong)puVar12 & 1) != 0)))) {
      uVar19 = 0;
      uVar25 = 1;
    }
    else {
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      _objc_retain(puVar3);
      puVar12 = puVar3;
      func_0x00010bf52a60();
      if (puVar12 == (undefined8 *)0x0) {
        uVar25 = 1;
      }
      else {
        lVar9 = *plStack_1a0;
        lStack_1f8 = lVar5;
        do {
          puVar14 = (undefined8 *)0x0;
          do {
            if (*plStack_1a0 != lVar9) {
              _objc_enumerationMutation(puVar3);
            }
            iVar1 = (int)param_1[6];
            func_0x00010bf4b900();
            lVar5 = lStack_1f8;
            uVar25 = uVar23;
            if (iVar1 == 0) goto LAB_106516460;
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar12 != puVar14);
          puVar12 = puVar3;
          func_0x00010bf52a60();
        } while (puVar12 != (undefined8 *)0x0);
        lVar5 = lStack_1f8;
        uVar25 = 1;
      }
LAB_106516460:
      _objc_release(puVar3);
      uVar19 = 1;
    }
    if (*(char *)((long)param_1 + 0x23) == '\x01') {
      uVar16 = *(byte *)((long)param_1 + 0x24) ^ 1;
    }
    else {
      uVar16 = 0;
    }
    unaff_x21 = (ulong)(uVar25 | uVar16);
    if (uVar25 == 0 && (uVar16 & 1) == 0) {
      lVar9 = param_1[1];
      puVar12 = puVar3;
      func_0x00010c089820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfed000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      lVar5 = lVar9;
      func_0x00010c142240();
      if ((long)puStack_200 < lVar5) {
        uVar17 = param_1[1];
        func_0x00010c088fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar24 = param_1[0xf];
        param_1[0xf] = uVar17;
        _objc_release(uVar24);
        func_0x00010c236880(param_1[5]);
      }
      else {
        uVar17 = param_1[1];
        if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
          func_0x00010bfb0e60();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfb1f20();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar24 = param_1[0xf];
        param_1[0xf] = uVar17;
        _objc_release(uVar24);
        func_0x00010c2368a0(param_1[5]);
      }
      _objc_release(lVar9);
      unaff_x20 = 0;
    }
    else if (lVar5 == 0 || (uVar23 != 0 || (uVar16 & 1) != 0)) {
      if ((uVar23 != 0 || (((uint)param_3 ^ 0xffffffff) & 1) != 0) ||
         (puVar12 = param_1, func_0x00010be40880(), (uVar19 & (uint)puVar12) == 1)) {
        uVar17 = param_1[0xf];
        param_1[0xf] = 0;
        _objc_release(uVar17);
        func_0x00010bfe1c00(param_1[5]);
      }
      unaff_x20 = 0;
    }
    else {
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      lVar9 = param_1[0xc];
      puStack_210 = puVar3;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar9;
      func_0x00010bf52a60();
      if (lVar5 == 0) {
        _objc_release(lVar9);
        uVar20 = 0;
LAB_106516764:
        puVar3 = puStack_210;
        puVar12 = param_1;
        func_0x00010be40880();
        if ((int)puVar12 != 0) {
          uVar17 = param_1[0xf];
          param_1[0xf] = 0;
          _objc_release(uVar17);
          func_0x00010bfe1c00(param_1[5]);
        }
        unaff_x20 = 0;
      }
      else {
        uVar20 = 0;
        lVar18 = 0;
        lVar21 = *plStack_1e0;
        uStack_224 = uVar25 | uVar16;
        puStack_220 = puVar28;
        puStack_218 = puVar2;
        lStack_1f8 = lVar9;
        do {
          lVar9 = 0;
          do {
            if (*plStack_1e0 != lVar21) {
              _objc_enumerationMutation(lStack_1f8);
            }
            param_3 = *(ulong *)(lStack_1e8 + lVar9 * 8);
            lVar6 = param_1[0xc];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c142240();
            puVar28 = puVar29;
            func_0x00010c142240();
            if ((lVar7 < (long)puVar28) ||
               (lVar7 = lVar6, func_0x00010c142240(), (long)puStack_200 < lVar7)) {
              if (lVar18 != 0) {
                lVar7 = lVar6;
                func_0x00010c142240();
                lVar8 = lVar18;
                func_0x00010c142240();
                if (lVar8 <= lVar7) goto LAB_106516670;
              }
              _objc_retain(lVar6);
              _objc_release(lVar18);
              _objc_retain(param_3);
              _objc_release(uVar20);
              uVar20 = param_3;
              lVar18 = lVar6;
            }
LAB_106516670:
            _objc_release(lVar6);
            lVar9 = lVar9 + 1;
          } while (lVar5 != lVar9);
          lVar5 = lStack_1f8;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
        _objc_release(lStack_1f8);
        if (lVar18 == 0) {
          unaff_x21 = (ulong)uStack_224;
          puVar2 = puStack_218;
          puVar28 = puStack_220;
          goto LAB_106516764;
        }
        lVar5 = lVar18;
        func_0x00010c142240();
        puVar2 = puStack_218;
        puVar28 = puStack_220;
        unaff_x21 = (ulong)uStack_224;
        if ((long)puStack_200 < lVar5) {
          func_0x00010c236880();
        }
        else {
          func_0x00010c2368a0(param_1[5]);
        }
        uVar17 = param_1[0xf];
        param_1[0xf] = lVar18;
        _objc_retain(lVar18);
        _objc_release(uVar17);
        _objc_release(lVar18);
        unaff_x20 = 1;
        puVar3 = puStack_210;
      }
      _objc_release(uVar20);
    }
    *(char *)(param_1 + 0x17) = (char)unaff_x20;
    uVar17 = param_1[0xb];
    param_1[0xb] = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar17);
    unaff_x19 = (undefined8 *)param_1[0x16];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined8 *)param_1[0xb];
    func_0x00010bf529e0();
    _objc_release(puVar3);
    puVar14 = (undefined8 *)(ulong)(((uint)unaff_x21 ^ 0xffffffff) & 1);
    param_4 = unaff_x20;
    func_0x00010c17b0e0(unaff_x19);
    _objc_release(unaff_x19);
    _objc_release(puStack_208);
  }
  _objc_release(puVar29);
  _objc_release(puVar28);
  puVar12 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_106516884;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_290 = puVar29;
  puStack_288 = param_1;
  uStack_280 = param_3;
  puStack_278 = puVar28;
  puStack_270 = puVar2;
  puStack_268 = puVar3;
  puStack_260 = unaff_x22;
  uStack_258 = unaff_x21;
  lStack_250 = unaff_x20;
  puStack_248 = unaff_x19;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  _objc_retain(param_4);
  if ((puVar14 != (undefined8 *)0x0) && (param_4 != 0)) {
    puVar28 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_388 = puVar28;
    _objc_opt_new();
    lVar9 = puVar12[1];
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010bf529e0();
    lStack_380 = lVar5;
    _objc_release(lVar9);
    puVar28 = puVar14;
    func_0x00010c142240();
    lVar5 = param_4;
    func_0x00010c142240();
    if (((long)puVar28 <= lVar5) && (lVar5 = param_4, puVar2 = puVar14, (long)puVar28 < lStack_380))
    {
      do {
        puStack_390 = puVar2;
        lStack_398 = lVar5;
        puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010c1554e0(puVar14);
        func_0x00010bfed060();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = (undefined8 *)puVar12[1];
        func_0x00010c29d580();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar11;
        func_0x00010010fab4();
        puVar2 = puVar11;
        if ((int)puVar4 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(puVar11);
        if (puVar2 != (undefined8 *)0x0) {
          puVar14 = puVar11;
          puStack_370 = puVar2;
          puStack_368 = puVar10;
          FUN_106516bd0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          puStack_378 = puVar14;
          func_0x00010befa160(puStack_388);
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          lStack_358 = 0;
          uStack_360 = 0;
          uStack_348 = 0;
          puStack_350 = (undefined8 *)0x0;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar11;
          func_0x00010bf52a60();
          if (puVar2 != (undefined8 *)0x0) {
            puVar29 = (undefined8 *)*puStack_350;
            do {
              param_1 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)*puStack_350 != puVar29) {
                  _objc_enumerationMutation(puVar11);
                }
                uVar24 = *(undefined8 *)(lStack_358 + (long)param_1 * 8);
                lVar5 = puVar12[0xc];
                uVar17 = uVar24;
                func_0x00010c120b60(uVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar17);
                if (lVar5 != 0) {
                  func_0x00010c120b60(uVar24);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar3);
                  _objc_release(uVar24);
                }
                param_1 = (undefined8 *)((long)param_1 + 1);
              } while (puVar2 != param_1);
              puVar2 = puVar11;
              func_0x00010bf52a60();
            } while (puVar2 != (undefined8 *)0x0);
          }
          _objc_release(puVar11);
          _objc_release(puStack_378);
          puVar10 = puStack_368;
          puVar2 = puStack_370;
          puVar14 = puStack_390;
          param_4 = lStack_398;
        }
        _objc_release(puVar2);
        _objc_release(puVar10);
        lVar5 = param_4;
        func_0x00010c142240();
      } while (((long)puVar28 < lVar5) &&
              (puVar28 = (undefined8 *)((long)puVar28 + 1), lVar5 = lStack_398, puVar2 = puStack_390
              , (long)puVar28 < lStack_380));
    }
    unaff_x19 = puStack_388;
    func_0x00010bf529e0(puStack_388);
    func_0x00010bf529e0(puVar3);
    uVar17 = puVar12[6];
    unaff_x22 = unaff_x19;
    func_0x00010bf51e00();
    func_0x00010befa160(uVar17);
    _objc_release(unaff_x22);
    unaff_x20 = puVar12[7];
    puVar12 = puVar3;
    func_0x00010bf51e00();
    func_0x00010befa160(unaff_x20);
    _objc_release(puVar12);
    _objc_release(puVar3);
    _objc_release(unaff_x19);
  }
  _objc_release(param_4);
  puVar2 = puVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_106516bd0;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3d0 = unaff_x22;
  puStack_3c8 = puVar12;
  lStack_3c0 = unaff_x20;
  puStack_3b8 = unaff_x19;
  ppuStack_3b0 = &puStack_240;
  _objc_retain();
  puVar10 = PTR_PTR_1126cb308;
  _objc_opt_class(PTR_PTR_1126cb308);
  puVar12 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar10);
  puVar4 = puVar2;
  if (((ulong)puVar12 & 1) == 0) {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      unaff_x22 = puVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_3e0 = unaff_x22;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
    }
  }
  else {
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  puVar11 = puVar2;
  _objc_release();
  puStack_700 = puVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_700);
    return puStack_700;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_500;
  pcStack_3e8 = FUN_106516cec;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_700 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  lStack_430 = param_4;
  puStack_428 = puVar28;
  puStack_420 = puVar14;
  puStack_418 = puVar3;
  puStack_410 = unaff_x22;
  puStack_408 = puVar12;
  puStack_400 = puVar4;
  puStack_3f8 = puVar2;
  pppuStack_3f0 = &ppuStack_3b0;
  _objc_opt_new();
  lStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  puStack_4f0 = (undefined8 *)0x0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  puVar12 = (undefined8 *)puVar11[1];
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar12;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)*puStack_4f0;
    do {
      puVar28 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_4f0 != puVar14) {
          _objc_enumerationMutation(puVar12);
        }
        puVar3 = *(undefined8 **)(lStack_4f8 + (long)puVar28 * 8);
        puVar4 = puVar11;
        func_0x00010be42320();
        if ((int)puVar4 != 0) {
          FUN_106516bd0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puStack_700);
          _objc_release(puVar3);
        }
        puVar28 = (undefined8 *)((long)puVar28 + 1);
      } while (puVar2 != puVar28);
      puVar2 = puVar12;
      puVar15 = &uStack_500;
      func_0x00010bf52a60();
      unaff_x22 = (undefined8 *)0x0;
    } while (puVar2 != (undefined8 *)0x0);
  }
  puVar2 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_508 = FUN_106516e34;
  lStack_570 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = puVar2[1];
  puStack_560 = puVar29;
  puStack_558 = param_1;
  lStack_550 = param_4;
  puStack_548 = puVar28;
  puStack_540 = puVar14;
  puStack_538 = puVar3;
  puStack_530 = unaff_x22;
  puStack_528 = puVar12;
  puStack_520 = puVar11;
  puStack_518 = puStack_700;
  pppuStack_510 = &pppuStack_3f0;
  func_0x00010c08b1a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puStack_700 = (undefined8 *)0x0;
  }
  else {
    puStack_700 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    plStack_6a0 = (long *)0x0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    lVar9 = puVar2[1];
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_6b0;
    lStack_710 = lVar9;
    func_0x00010bf52a60();
    if (lStack_710 != 0) {
      lVar18 = *plStack_6a0;
      do {
        lVar21 = 0;
        do {
          if (*plStack_6a0 != lVar18) {
            _objc_enumerationMutation(lVar9);
          }
          lVar27 = *(long *)(lStack_6a8 + lVar21 * 8);
          lVar8 = lVar27;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar8;
          func_0x00010bf52a60();
          lVar6 = lRam0000000000000000;
          while (lVar7 != 0) {
            lVar22 = 0;
            do {
              if (lRam0000000000000000 != lVar6) {
                _objc_enumerationMutation(lVar8);
              }
              uVar26 = *(ulong *)(lVar22 * 8);
              uVar20 = uVar26;
              func_0x00010c073ac0();
              if ((uVar20 & 1) == 0) {
                func_0x00010c120b60();
                _objc_retainAutoreleasedReturnValue();
                uVar17 = puVar2[1];
                lVar13 = lVar27;
                FUN_106513908(lVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed000(uVar17);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar13);
                lVar13 = puVar2[0xc];
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar13 == 0) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = (uint)puVar2[7];
                  func_0x00010bf4b900();
                  uVar23 = uVar23 ^ 1;
                }
                _objc_release(lVar13);
                uVar20 = uVar26;
                func_0x00010c0b4ca0();
                lVar13 = lVar5;
                func_0x00010c0b4ca0();
                if (((uVar23 & 1) != 0) || (lVar13 < (long)uVar20)) {
                  func_0x00010c1d0640(puStack_700);
                }
                _objc_release(uVar17);
                _objc_release(uVar26);
              }
              lVar22 = lVar22 + 1;
            } while (lVar7 != lVar22);
            lVar7 = lVar8;
            func_0x00010bf52a60();
          }
          _objc_release(lVar8);
          lVar21 = lVar21 + 1;
        } while (lVar21 != lStack_710);
        puVar15 = &uStack_6b0;
        lStack_710 = lVar9;
        func_0x00010bf52a60();
      } while (lStack_710 != 0);
    }
    _objc_release(lVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_570) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar15);
  puVar10 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  puVar2 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar10);
  puVar28 = puVar15;
  if (((ulong)puVar2 & 1) == 0) {
    puVar28 = (undefined8 *)0x0;
  }
  _objc_retain(puVar28);
  if (puVar28 != (undefined8 *)0x0) {
    puVar2 = puVar15;
    func_0x00010c06cdc0(puVar15);
    goto LAB_106517204;
  }
  if (*(char *)(lVar5 + 0xa8) == '\x01') {
    puVar2 = puVar15;
    func_0x00010c082140();
    if (((ulong)puVar2 & 1) != 0) {
LAB_106517174:
      puVar10 = PTR_PTR_1126cb4d0;
      _objc_retain(puVar15);
      _objc_opt_class(puVar10);
      puVar2 = puVar15;
      _objc_opt_isKindOfClass(puVar15,puVar10);
      puVar3 = puVar15;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar15);
      puVar2 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = puVar15;
        func_0x00010c15df40(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar15;
        func_0x00010bf60940(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c071ae0(puVar3);
        puVar2 = (undefined8 *)(ulong)((uint)puVar2 ^ 1);
        _objc_release(puVar29);
        _objc_release(puVar3);
        _objc_release(puVar15);
      }
      goto LAB_106517204;
    }
  }
  else {
    puVar2 = puVar15;
    func_0x00010c22f340();
    if ((int)puVar2 != 0) goto LAB_106517174;
  }
  puVar2 = (undefined8 *)0x0;
LAB_106517204:
  _objc_release(puVar28);
  _objc_release(puVar15);
  return puVar2;
}



/* Entry: 106516884; end: 106516bcf; -[SCChatTableViewV3Presenter _markMessageAsSeenFrom:to:] */

undefined8 * FUN_106516884(undefined *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x19;
  long lVar16;
  long lVar17;
  undefined8 unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *unaff_x22;
  ulong uVar20;
  undefined *unaff_x23;
  long lVar21;
  undefined8 *unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long lStack_4e0;
  undefined8 *puStack_4d0;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 ***pppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    unaff_x23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_158 = puVar3;
    _objc_opt_new();
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010bf529e0();
    lStack_150 = lVar10;
    _objc_release(lVar4);
    unaff_x25 = param_3;
    func_0x00010c142240();
    lVar10 = param_4;
    func_0x00010c142240();
    if (((long)unaff_x25 <= lVar10) &&
       (lVar10 = param_4, puVar3 = param_3, (long)unaff_x25 < lStack_150)) {
      do {
        puStack_160 = puVar3;
        lStack_168 = lVar10;
        puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010c1554e0(param_3);
        func_0x00010bfed060();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(param_1 + 8);
        func_0x00010c29d580();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        func_0x00010010fab4();
        lVar10 = lVar6;
        if ((int)lVar4 == 0) {
          lVar10 = 0;
        }
        _objc_retain(lVar10);
        _objc_release(lVar6);
        if (lVar10 != 0) {
          lVar4 = lVar6;
          lStack_140 = lVar10;
          puStack_138 = puVar5;
          FUN_106516bd0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          lStack_148 = lVar4;
          func_0x00010befa160(puStack_158);
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          lStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar6;
          func_0x00010bf52a60();
          if (lVar10 != 0) {
            unaff_x28 = *plStack_120;
            do {
              unaff_x27 = 0;
              do {
                if (*plStack_120 != unaff_x28) {
                  _objc_enumerationMutation(lVar6);
                }
                uVar18 = *(undefined8 *)(lStack_128 + unaff_x27 * 8);
                lVar4 = *(long *)(param_1 + 0x60);
                uVar19 = uVar18;
                func_0x00010c120b60(uVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar19);
                if (lVar4 != 0) {
                  func_0x00010c120b60(uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(unaff_x23);
                  _objc_release(uVar18);
                }
                unaff_x27 = unaff_x27 + 1;
              } while (lVar10 != unaff_x27);
              lVar10 = lVar6;
              func_0x00010bf52a60();
            } while (lVar10 != 0);
          }
          _objc_release(lVar6);
          _objc_release(lStack_148);
          puVar5 = puStack_138;
          lVar10 = lStack_140;
          param_3 = puStack_160;
          param_4 = lStack_168;
        }
        _objc_release(lVar10);
        _objc_release(puVar5);
        lVar10 = param_4;
        func_0x00010c142240();
      } while (((long)unaff_x25 < lVar10) &&
              (unaff_x25 = (undefined8 *)((long)unaff_x25 + 1), lVar10 = lStack_168,
              puVar3 = puStack_160, (long)unaff_x25 < lStack_150));
    }
    unaff_x19 = puStack_158;
    func_0x00010bf529e0(puStack_158);
    func_0x00010bf529e0(unaff_x23);
    uVar19 = *(undefined8 *)(param_1 + 0x30);
    unaff_x22 = unaff_x19;
    func_0x00010bf51e00();
    func_0x00010befa160(uVar19);
    _objc_release(unaff_x22);
    unaff_x20 = *(undefined8 *)(param_1 + 0x38);
    param_1 = unaff_x23;
    func_0x00010bf51e00();
    func_0x00010befa160(unaff_x20);
    _objc_release(param_1);
    _objc_release(unaff_x23);
    _objc_release(unaff_x19);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_106516bd0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x22;
  puStack_198 = param_1;
  uStack_190 = unaff_x20;
  puStack_188 = unaff_x19;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar5 = PTR_PTR_1126cb308;
  _objc_opt_class(PTR_PTR_1126cb308);
  puVar9 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar5);
  puVar7 = puVar3;
  if (((ulong)puVar9 & 1) == 0) {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      unaff_x22 = puVar3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1b0 = unaff_x22;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
    }
  }
  else {
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  puVar8 = puVar3;
  _objc_release();
  puStack_4d0 = puVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_4d0);
    return puStack_4d0;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_2d0;
  pcStack_1b8 = FUN_106516cec;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4d0 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  lStack_200 = param_4;
  puStack_1f8 = unaff_x25;
  puStack_1f0 = param_3;
  puStack_1e8 = unaff_x23;
  puStack_1e0 = unaff_x22;
  puStack_1d8 = puVar9;
  puStack_1d0 = puVar7;
  puStack_1c8 = puVar3;
  ppuStack_1c0 = &puStack_180;
  _objc_opt_new();
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  puStack_2c0 = (undefined8 *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  puVar9 = (undefined8 *)puVar8[1];
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    param_3 = (undefined8 *)*puStack_2c0;
    do {
      unaff_x25 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_2c0 != param_3) {
          _objc_enumerationMutation(puVar9);
        }
        unaff_x23 = *(undefined **)(lStack_2c8 + (long)unaff_x25 * 8);
        puVar7 = puVar8;
        func_0x00010be42320();
        if ((int)puVar7 != 0) {
          FUN_106516bd0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puStack_4d0);
          _objc_release(unaff_x23);
        }
        unaff_x25 = (undefined8 *)((long)unaff_x25 + 1);
      } while (puVar3 != unaff_x25);
      puVar3 = puVar9;
      puVar15 = &uStack_2d0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined8 *)0x0;
    } while (puVar3 != (undefined8 *)0x0);
  }
  puVar3 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_2d8 = FUN_106516e34;
  lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = puVar3[1];
  lStack_330 = unaff_x28;
  lStack_328 = unaff_x27;
  lStack_320 = param_4;
  puStack_318 = unaff_x25;
  puStack_310 = param_3;
  puStack_308 = unaff_x23;
  puStack_300 = unaff_x22;
  puStack_2f8 = puVar9;
  puStack_2f0 = puVar8;
  puStack_2e8 = puStack_4d0;
  pppuStack_2e0 = &ppuStack_1c0;
  func_0x00010c08b1a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    puStack_4d0 = (undefined8 *)0x0;
  }
  else {
    puStack_4d0 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_478 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    plStack_470 = (long *)0x0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    lVar4 = puVar3[1];
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_480;
    lStack_4e0 = lVar4;
    func_0x00010bf52a60();
    if (lStack_4e0 != 0) {
      lVar6 = *plStack_470;
      do {
        lVar16 = 0;
        do {
          if (*plStack_470 != lVar6) {
            _objc_enumerationMutation(lVar4);
          }
          lVar21 = *(long *)(lStack_478 + lVar16 * 8);
          lVar11 = lVar21;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar12 != 0) {
            lVar17 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar11);
              }
              uVar20 = *(ulong *)(lVar17 * 8);
              uVar13 = uVar20;
              func_0x00010c073ac0();
              if ((uVar13 & 1) == 0) {
                func_0x00010c120b60();
                _objc_retainAutoreleasedReturnValue();
                uVar19 = puVar3[1];
                lVar14 = lVar21;
                FUN_106513908(lVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed000(uVar19);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar14);
                lVar14 = puVar3[0xc];
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar14 == 0) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = (uint)puVar3[7];
                  func_0x00010bf4b900();
                  uVar2 = uVar2 ^ 1;
                }
                _objc_release(lVar14);
                uVar13 = uVar20;
                func_0x00010c0b4ca0();
                lVar14 = lVar10;
                func_0x00010c0b4ca0();
                if (((uVar2 & 1) != 0) || (lVar14 < (long)uVar13)) {
                  func_0x00010c1d0640(puStack_4d0);
                }
                _objc_release(uVar19);
                _objc_release(uVar20);
              }
              lVar17 = lVar17 + 1;
            } while (lVar12 != lVar17);
            lVar12 = lVar11;
            func_0x00010bf52a60();
          }
          _objc_release(lVar11);
          lVar16 = lVar16 + 1;
        } while (lVar16 != lStack_4e0);
        puVar15 = &uStack_480;
        lStack_4e0 = lVar4;
        func_0x00010bf52a60();
      } while (lStack_4e0 != 0);
    }
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_340) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar15);
  puVar5 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  puVar9 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar5);
  puVar3 = puVar15;
  if (((ulong)puVar9 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  _objc_retain(puVar3);
  if (puVar3 != (undefined8 *)0x0) {
    puVar9 = puVar15;
    func_0x00010c06cdc0(puVar15);
    goto LAB_106517204;
  }
  if (*(char *)(lVar10 + 0xa8) == '\x01') {
    puVar9 = puVar15;
    func_0x00010c082140();
    if (((ulong)puVar9 & 1) != 0) {
LAB_106517174:
      puVar5 = PTR_PTR_1126cb4d0;
      _objc_retain(puVar15);
      _objc_opt_class(puVar5);
      puVar9 = puVar15;
      _objc_opt_isKindOfClass(puVar15,puVar5);
      puVar7 = puVar15;
      if (((ulong)puVar9 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar15);
      puVar9 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        puVar7 = puVar15;
        func_0x00010c15df40(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar15;
        func_0x00010bf60940(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c071ae0(puVar7);
        puVar9 = (undefined8 *)(ulong)((uint)puVar9 ^ 1);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar15);
      }
      goto LAB_106517204;
    }
  }
  else {
    puVar9 = puVar15;
    func_0x00010c22f340();
    if ((int)puVar9 != 0) goto LAB_106517174;
  }
  puVar9 = (undefined8 *)0x0;
LAB_106517204:
  _objc_release(puVar3);
  _objc_release(puVar15);
  return puVar9;
}



/* Entry: 106516bd0; end: 106516ceb;  */

undefined8 * FUN_106516bd0(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_370;
  undefined8 *puStack_360;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_1d0;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR_PTR_1126cb308;
  _objc_opt_class(PTR_PTR_1126cb308);
  puVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  puVar5 = param_1;
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined8 *)0x0) {
      puStack_360 = (undefined8 *)0x0;
    }
    else {
      puVar4 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_360 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
  }
  else {
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    puStack_360 = puVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_360);
    return puStack_360;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_160;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar6 = param_1[1];
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar19 = *plStack_150;
    do {
      lVar21 = 0;
      do {
        if (*plStack_150 != lVar19) {
          _objc_enumerationMutation(lVar6);
        }
        uVar18 = *(undefined8 *)(lStack_158 + lVar21 * 8);
        puVar4 = param_1;
        func_0x00010be42320();
        if ((int)puVar4 != 0) {
          FUN_106516bd0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puStack_360);
          _objc_release(uVar18);
        }
        lVar21 = lVar21 + 1;
      } while (lVar13 != lVar21);
      lVar13 = lVar6;
      puVar4 = &uStack_160;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(lVar6 + 8);
  func_0x00010c08b1a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    puStack_360 = (undefined8 *)0x0;
  }
  else {
    puStack_360 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lVar19 = *(long *)(lVar6 + 8);
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = &uStack_310;
    lStack_370 = lVar19;
    func_0x00010bf52a60();
    if (lStack_370 != 0) {
      lVar21 = *plStack_300;
      do {
        lVar14 = 0;
        do {
          if (*plStack_300 != lVar21) {
            _objc_enumerationMutation(lVar19);
          }
          lVar20 = *(long *)(lStack_308 + lVar14 * 8);
          lVar7 = lVar20;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar8 != 0) {
            lVar15 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar7);
              }
              uVar17 = *(ulong *)(lVar15 * 8);
              uVar9 = uVar17;
              func_0x00010c073ac0();
              if ((uVar9 & 1) == 0) {
                func_0x00010c120b60();
                _objc_retainAutoreleasedReturnValue();
                uVar18 = *(undefined8 *)(lVar6 + 8);
                lVar10 = lVar20;
                FUN_106513908(lVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed000(uVar18);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar10);
                lVar10 = *(long *)(lVar6 + 0x60);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar10 == 0) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = (uint)*(undefined8 *)(lVar6 + 0x38);
                  func_0x00010bf4b900();
                  uVar2 = uVar2 ^ 1;
                }
                _objc_release(lVar10);
                uVar9 = uVar17;
                func_0x00010c0b4ca0();
                lVar10 = lVar13;
                func_0x00010c0b4ca0();
                if (((uVar2 & 1) != 0) || (lVar10 < (long)uVar9)) {
                  func_0x00010c1d0640(puStack_360);
                }
                _objc_release(uVar18);
                _objc_release(uVar17);
              }
              lVar15 = lVar15 + 1;
            } while (lVar8 != lVar15);
            lVar8 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
          lVar14 = lVar14 + 1;
        } while (lVar14 != lStack_370);
        puVar4 = &uStack_310;
        lStack_370 = lVar19;
        func_0x00010bf52a60();
      } while (lStack_370 != 0);
    }
    _objc_release(lVar19);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar3 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  puVar16 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar3);
  puVar5 = puVar4;
  if (((ulong)puVar16 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  _objc_retain(puVar5);
  if (puVar5 != (undefined8 *)0x0) {
    puVar16 = puVar4;
    func_0x00010c06cdc0(puVar4);
    goto LAB_106517204;
  }
  if (*(char *)(lVar13 + 0xa8) == '\x01') {
    puVar16 = puVar4;
    func_0x00010c082140();
    if (((ulong)puVar16 & 1) != 0) {
LAB_106517174:
      puVar3 = PTR_PTR_1126cb4d0;
      _objc_retain(puVar4);
      _objc_opt_class(puVar3);
      puVar16 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar3);
      puVar11 = puVar4;
      if (((ulong)puVar16 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      _objc_retain(puVar11);
      _objc_release(puVar4);
      puVar16 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        puVar11 = puVar4;
        func_0x00010c15df40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar4;
        func_0x00010bf60940(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar11;
        func_0x00010c071ae0(puVar11);
        puVar16 = (undefined8 *)(ulong)((uint)puVar16 ^ 1);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar4);
      }
      goto LAB_106517204;
    }
  }
  else {
    puVar16 = puVar4;
    func_0x00010c22f340();
    if ((int)puVar16 != 0) goto LAB_106517174;
  }
  puVar16 = (undefined8 *)0x0;
LAB_106517204:
  _objc_release(puVar5);
  _objc_release(puVar4);
  return puVar16;
}



/* Entry: 106516cec; end: 106516e33; -[SCChatTableViewV3Presenter _getNewMessagesIds] */

undefined8 * FUN_106516cec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_330;
  undefined8 *puStack_320;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_190;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar13 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_320 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar19 = *plStack_110;
    do {
      lVar21 = 0;
      do {
        if (*plStack_110 != lVar19) {
          _objc_enumerationMutation(lVar4);
        }
        uVar18 = *(undefined8 *)(lStack_118 + lVar21 * 8);
        lVar14 = param_1;
        func_0x00010be42320();
        if ((int)lVar14 != 0) {
          FUN_106516bd0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puStack_320);
          _objc_release(uVar18);
        }
        lVar21 = lVar21 + 1;
      } while (lVar5 != lVar21);
      lVar5 = lVar4;
      puVar13 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_320);
    return puStack_320;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(lVar4 + 8);
  func_0x00010c08b1a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puStack_320 = (undefined8 *)0x0;
  }
  else {
    puStack_320 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    lVar19 = *(long *)(lVar4 + 8);
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = &uStack_2d0;
    lStack_330 = lVar19;
    func_0x00010bf52a60();
    if (lStack_330 != 0) {
      lVar21 = *plStack_2c0;
      do {
        lVar14 = 0;
        do {
          if (*plStack_2c0 != lVar21) {
            _objc_enumerationMutation(lVar19);
          }
          lVar20 = *(long *)(lStack_2c8 + lVar14 * 8);
          lVar6 = lVar20;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar7 != 0) {
            lVar15 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar6);
              }
              uVar17 = *(ulong *)(lVar15 * 8);
              uVar8 = uVar17;
              func_0x00010c073ac0();
              if ((uVar8 & 1) == 0) {
                func_0x00010c120b60();
                _objc_retainAutoreleasedReturnValue();
                uVar18 = *(undefined8 *)(lVar4 + 8);
                lVar9 = lVar20;
                FUN_106513908(lVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed000(uVar18);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar9);
                lVar9 = *(long *)(lVar4 + 0x60);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar9 == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = (uint)*(undefined8 *)(lVar4 + 0x38);
                  func_0x00010bf4b900();
                  uVar3 = uVar3 ^ 1;
                }
                _objc_release(lVar9);
                uVar8 = uVar17;
                func_0x00010c0b4ca0();
                lVar9 = lVar5;
                func_0x00010c0b4ca0();
                if (((uVar3 & 1) != 0) || (lVar9 < (long)uVar8)) {
                  func_0x00010c1d0640(puStack_320);
                }
                _objc_release(uVar18);
                _objc_release(uVar17);
              }
              lVar15 = lVar15 + 1;
            } while (lVar7 != lVar15);
            lVar7 = lVar6;
            func_0x00010bf52a60();
          }
          _objc_release(lVar6);
          lVar14 = lVar14 + 1;
        } while (lVar14 != lStack_330);
        puVar13 = &uStack_2d0;
        lStack_330 = lVar19;
        func_0x00010bf52a60();
      } while (lStack_330 != 0);
    }
    _objc_release(lVar19);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar10 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  puVar16 = puVar13;
  _objc_opt_isKindOfClass(puVar13,puVar10);
  puVar1 = puVar13;
  if (((ulong)puVar16 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    puVar16 = puVar13;
    func_0x00010c06cdc0(puVar13);
    goto LAB_106517204;
  }
  if (*(char *)(lVar5 + 0xa8) == '\x01') {
    puVar16 = puVar13;
    func_0x00010c082140();
    if (((ulong)puVar16 & 1) != 0) {
LAB_106517174:
      puVar10 = PTR_PTR_1126cb4d0;
      _objc_retain(puVar13);
      _objc_opt_class(puVar10);
      puVar16 = puVar13;
      _objc_opt_isKindOfClass(puVar13,puVar10);
      puVar11 = puVar13;
      if (((ulong)puVar16 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      _objc_retain(puVar11);
      _objc_release(puVar13);
      puVar16 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        puVar11 = puVar13;
        func_0x00010c15df40(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar13;
        func_0x00010bf60940(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar11;
        func_0x00010c071ae0(puVar11);
        puVar16 = (undefined8 *)(ulong)((uint)puVar16 ^ 1);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar13);
      }
      goto LAB_106517204;
    }
  }
  else {
    puVar16 = puVar13;
    func_0x00010c22f340();
    if ((int)puVar16 != 0) goto LAB_106517174;
  }
  puVar16 = (undefined8 *)0x0;
LAB_106517204:
  _objc_release(puVar1);
  _objc_release(puVar13);
  return puVar16;
}



/* Entry: 106516e34; end: 1065170eb; -[SCChatTableViewV3Presenter _getNewReactionIds] */

undefined8 * FUN_106516e34(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lStack_210;
  undefined8 *puStack_200;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c08b1a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puStack_200 = (undefined8 *)0x0;
  }
  else {
    puStack_200 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_1b0;
    lStack_210 = lVar5;
    func_0x00010bf52a60();
    if (lStack_210 != 0) {
      lVar13 = *plStack_1a0;
      do {
        lVar14 = 0;
        do {
          if (*plStack_1a0 != lVar13) {
            _objc_enumerationMutation(lVar5);
          }
          lVar19 = *(long *)(lStack_1a8 + lVar14 * 8);
          lVar6 = lVar19;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar7 != 0) {
            lVar15 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar6);
              }
              uVar17 = *(ulong *)(lVar15 * 8);
              uVar8 = uVar17;
              func_0x00010c073ac0();
              if ((uVar8 & 1) == 0) {
                func_0x00010c120b60();
                _objc_retainAutoreleasedReturnValue();
                uVar18 = *(undefined8 *)(param_1 + 8);
                lVar9 = lVar19;
                FUN_106513908(lVar19);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed000(uVar18);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar9);
                lVar9 = *(long *)(param_1 + 0x60);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar9 == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = (uint)*(undefined8 *)(param_1 + 0x38);
                  func_0x00010bf4b900();
                  uVar3 = uVar3 ^ 1;
                }
                _objc_release(lVar9);
                uVar8 = uVar17;
                func_0x00010c0b4ca0();
                lVar9 = lVar4;
                func_0x00010c0b4ca0();
                if (((uVar3 & 1) != 0) || (lVar9 < (long)uVar8)) {
                  func_0x00010c1d0640(puStack_200);
                }
                _objc_release(uVar18);
                _objc_release(uVar17);
              }
              lVar15 = lVar15 + 1;
            } while (lVar7 != lVar15);
            lVar7 = lVar6;
            func_0x00010bf52a60();
          }
          _objc_release(lVar6);
          lVar14 = lVar14 + 1;
        } while (lVar14 != lStack_210);
        param_3 = &uStack_1b0;
        lStack_210 = lVar5;
        func_0x00010bf52a60();
      } while (lStack_210 != 0);
    }
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_200);
    return puStack_200;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar10 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  puVar16 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar10);
  puVar1 = param_3;
  if (((ulong)puVar16 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    puVar16 = param_3;
    func_0x00010c06cdc0(param_3);
    goto LAB_106517204;
  }
  if (*(char *)(lVar4 + 0xa8) == '\x01') {
    puVar16 = param_3;
    func_0x00010c082140();
    if (((ulong)puVar16 & 1) != 0) {
LAB_106517174:
      puVar10 = PTR_PTR_1126cb4d0;
      _objc_retain(param_3);
      _objc_opt_class(puVar10);
      puVar16 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar10);
      puVar11 = param_3;
      if (((ulong)puVar16 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      _objc_retain(puVar11);
      _objc_release(param_3);
      puVar16 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        puVar11 = param_3;
        func_0x00010c15df40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_3;
        func_0x00010bf60940(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar11;
        func_0x00010c071ae0(puVar11);
        puVar16 = (undefined8 *)(ulong)((uint)puVar16 ^ 1);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(param_3);
      }
      goto LAB_106517204;
    }
  }
  else {
    puVar16 = param_3;
    func_0x00010c22f340();
    if ((int)puVar16 != 0) goto LAB_106517174;
  }
  puVar16 = (undefined8 *)0x0;
LAB_106517204:
  _objc_release(puVar1);
  _objc_release(param_3);
  return puVar16;
}



/* Entry: 1065170ec; end: 10651722b; -[SCChatTableViewV3Presenter _isNewMessageMaybe:] */

ulong FUN_1065170ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar5 = param_3;
    func_0x00010c06cdc0(param_3);
    goto LAB_106517204;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    uVar3 = param_3;
    func_0x00010c082140();
    if ((uVar3 & 1) != 0) {
LAB_106517174:
      puVar2 = PTR_PTR_1126cb4d0;
      _objc_retain(param_3);
      _objc_opt_class(puVar2);
      uVar5 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      uVar3 = param_3;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_3);
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar3 = param_3;
        func_0x00010c15df40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010bf60940(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c071ae0(uVar3);
        uVar5 = (ulong)((uint)uVar5 ^ 1);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(param_3);
      }
      goto LAB_106517204;
    }
  }
  else {
    uVar3 = param_3;
    func_0x00010c22f340();
    if ((int)uVar3 != 0) goto LAB_106517174;
  }
  uVar5 = 0;
LAB_106517204:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10651722c; end: 1065172af; -[SCChatTableViewV3Presenter setTopInset:] */

void FUN_10651722c(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010c2744e0(*(undefined8 *)(param_3 + 0x100));
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x100));
  dVar2 = param_2;
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x100));
  if ((0.0 < dVar2) && (0.0 < param_2 - (param_1 - dVar1))) {
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x100));
    func_0x00010c1822e0(*(undefined8 *)(param_3 + 0x100));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c217450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_3 + 0x100),PTR_s_setTopInset__112663738);
  return;
}



/* Entry: 1065172b0; end: 10651738b; -[SCChatTableViewV3Presenter subscribeToInsetChanges:] */

void FUN_1065172b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10651738c; end: 1065173eb;  */

void FUN_10651738c(float param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bfb2c80(param_3);
  _objc_release(param_3);
  func_0x00010bea5d80((double)param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065173ec; end: 106517413; -[SCChatTableViewV3Presenter _setNewInset:] */

void FUN_1065173ec(long param_1)

{
  func_0x00010c1c7a80(*(undefined8 *)(param_1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106517414; end: 10651741f; -[SCChatTableViewV3Presenter chatViewWillBeginInputTransition] */

void FUN_106517414(long param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}



/* Entry: 106517420; end: 106517427; -[SCChatTableViewV3Presenter chatViewDidEndInputTransition] */

void FUN_106517420(long param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be182f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__flushPendingRescrollIfNeeded_112563a58);
  return;
}



/* Entry: 106517428; end: 10651747f; -[SCChatTableViewV3Presenter chatViewDidFinishInputTransition] */

void FUN_106517428(long param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 0;
  func_0x00010be182e0();
  if ((*(char *)(param_1 + 0x20) == '\x01') &&
     (*(undefined1 *)(param_1 + 0x25) = 1, *(char *)(param_1 + 0x23) == '\x01')) {
    *(undefined1 *)(param_1 + 0x24) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010beea070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__visibleCellsDidChangeWithConver_1125981c0,1);
    return;
  }
  return;
}



/* Entry: 106517480; end: 1065174af; -[SCChatTableViewV3Presenter recomputeOpenToFirstUnreadReadWatermark] */

void FUN_106517480(long param_1)

{
  if (((*(char *)(param_1 + 0x23) == '\x01') && (*(char *)(param_1 + 0x20) == '\x01')) &&
     (*(char *)(param_1 + 0x24) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010beea070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__visibleCellsDidChangeWithConver_1125981c0,1);
    return;
  }
  return;
}



/* Entry: 1065174b0; end: 10651761b; -[SCChatTableViewV3Presenter _watermarkForLastVisibleRow:visibleTableRect:visibleViewHeight:] */

void FUN_1065174b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c142240();
  if (-1 < param_8) {
    do {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_6;
      func_0x00010bee9fe0(param_1,param_2,param_3,param_4,param_5);
      if (lVar3 == 2) {
        lVar5 = *(long *)(param_6 + 8);
        func_0x00010c29d580();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010010fab4();
        lVar3 = lVar5;
        if ((int)lVar4 == 0) {
          lVar3 = 0;
        }
        _objc_retain(lVar3);
        _objc_release(lVar5);
        lVar4 = lVar3;
        FUN_10651394c();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar3);
          goto LAB_1065175ec;
        }
        _objc_release(lVar3);
      }
      else if (lVar3 == 0) {
        lVar5 = 0;
LAB_1065175ec:
        _objc_release(puVar2);
        goto LAB_1065175f4;
      }
      _objc_release(puVar2);
      bVar1 = 0 < param_8;
      param_8 = param_8 + -1;
    } while (bVar1);
  }
  lVar5 = 0;
LAB_1065175f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10651761c; end: 10651765b; -[SCChatTableViewV3Presenter _shouldRescrollAfterInputTransition] */

undefined8 FUN_10651761c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6ab20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10651765c; end: 1065176db; -[SCChatTableViewV3Presenter _maybeMarkPendingRescroll:] */

void FUN_10651765c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xe8) != '\x01') {
    return;
  }
  lVar1 = param_1;
  func_0x00010beb5580();
  if ((int)lVar1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    if ((param_3 == 3) || (lVar1 == 3)) {
      if (lVar1 == 3) {
        return;
      }
    }
    else {
      if (lVar1 == param_3) {
        return;
      }
      if ((param_3 != 2) && (param_3 = 2, lVar1 != 2)) {
        return;
      }
    }
  }
  *(long *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 1065176dc; end: 10651770f; -[SCChatTableViewV3Presenter _flushPendingRescrollIfNeeded] */

void FUN_1065176dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c152450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToFoldEdge_112632330);
      return;
    }
    if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be9bf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollToBottomAndLog_112584988);
      return;
    }
    if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be71d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__performFoldEdgeOrBottomForIniti_11257a0e0);
      return;
    }
  }
  return;
}



/* Entry: 106517710; end: 106517713; -[SCChatTableViewV3Presenter _logScrollRelativeToKeyboardAnimationWithReason:] */

void FUN_106517710(void)

{
  return;
}



/* Entry: 106517714; end: 10651771b; -[SCChatTableViewV3Presenter tableView] */

undefined8 FUN_106517714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10651771c; end: 10651774b; -[SCChatTableViewV3Presenter setTableView:] */

void FUN_10651771c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10651774c; end: 106517753; -[SCChatTableViewV3Presenter tableContainerView] */

undefined8 FUN_10651774c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106517754; end: 106517783; -[SCChatTableViewV3Presenter setTableContainerView:] */

void FUN_106517754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


