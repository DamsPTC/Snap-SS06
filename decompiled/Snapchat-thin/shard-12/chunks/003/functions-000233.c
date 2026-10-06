/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109001498; end: 109001697; -[SCLegacyImageDownloader loadNetworkImage:completion:failure:callbackQueue:] */

void FUN_109001498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1090015b0;
  puStack_50 = &UNK_110864e60;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_109001698;
  puStack_78 = &UNK_1109fa8d0;
  uStack_70 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c09b780(param_1,param_2,param_3,&puStack_68,&puStack_90,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d6708;
  _objc_alloc(PTR_PTR_1126d6708);
  func_0x00010c01fda0();
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109001698; end: 10900172f;  */

void FUN_109001698(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  if (*(long *)(param_1 + 0x20) != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109001730; end: 109001ad3; -[SCLegacyImageDownloader loadItem:completion:failure:callbackQueue:] */

void FUN_109001730(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_109001ad4;
  uStack_80 = 0x109001ae4;
  uStack_78 = 0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0bf3e0(uVar1);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 109001ad4; end: 109001aeb;  */

void FUN_109001ad4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109001aec; end: 109001d33;  */

void FUN_109001aec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puStack_28 = PTR_PTR_1126ffd00;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadItem_completion_failure_call_1126047f0,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 109001d34; end: 109001da7; -[SCLegacyImageDownloader isItemValid:] */

ulong FUN_109001d34(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  FUN_109006e4c(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 109001da8; end: 109001db3; -[SCLegacyImageDownloader resultFromData:withItem:] */

void FUN_109001da8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sc_imageWithData__112630e30);
  return;
}



/* Entry: 109001db4; end: 109001e2f; -[SCLegacyImageDownloader cacheKeyForItem:] */

void FUN_109001db4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  FUN_109006ab0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109001e30; end: 109001ea3; -[SCLegacyImageDownloader shouldCache:] */

ulong FUN_109001e30(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  FUN_109006d48(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 109001ea4; end: 109001f17; -[SCLegacyImageDownloader requestContexts:] */

void FUN_109001ea4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  FUN_10900324c(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109001f18; end: 109001fbb; -[SCLegacyImageDownloader requestForItem:] */

void FUN_109001f18(int param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c075dc0();
  puVar2 = PTR_PTR_1126b4860;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    FUN_109002d94(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109001fbc; end: 109001feb; -[SCLegacyImageDownloader requestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109001fbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f860);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109001fec; end: 109001ffb; -[SCLegacyImageDownloader contentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109001fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f870),PTR_s_target_112678178);
  return;
}



/* Entry: 109001ffc; end: 10900200b; -[SCLegacyImageDownloader cache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109001ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f86c),PTR_s_target_112678178);
  return;
}



/* Entry: 10900200c; end: 10900207b; -[SCLegacyImageDownloader downloadPerformer] */

void FUN_10900200c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f5431ff);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x12);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10900207c; end: 1090021cb; -[SCLegacyImageDownloader mediaContextTypeForItem:] */

undefined8 FUN_10900207c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 5;
  func_0x00010c0bf3e0(uVar1);
  uVar4 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1090021cc; end: 109002203;  */

void FUN_1090021cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 109002204; end: 1090023a7; -[SCLegacyImageDownloader debugLogForItem:] */

void FUN_109002204(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4860;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_109001ad4;
  uStack_40 = 0x109001ae4;
  uStack_38 = 0;
  func_0x00010c0bf3e0(uVar1);
  uVar4 = puStack_58[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1090023a8; end: 109002427;  */

void FUN_1090023a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109002428; end: 10900252f;  */

void FUN_109002428(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f16bf8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109002530; end: 1090025af;  */

void FUN_109002530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf26940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090025b0; end: 10900261f; -[SCLegacyImageDownloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090025b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f870,0);
  _objc_storeStrong(param_1 + _DAT_11277f86c,0);
  _objc_storeStrong(param_1 + _DAT_11277f868,0);
  _objc_storeStrong(param_1 + _DAT_11277f864,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f860,0);
  return;
}



/* Entry: 109002620; end: 109002737;  */

undefined8 FUN_109002620(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109002738;
  uStack_30 = 0x109002748;
  uStack_28 = 0;
  func_0x00010c0bece0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109002738; end: 10900274f;  */

void FUN_109002738(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109002750; end: 1090027f7;  */

void FUN_109002750(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090027f8; end: 1090028d7;  */

undefined4 FUN_1090027f8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffff;
  func_0x00010c0bece0(param_1);
  uVar1 = *(undefined4 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1090028d8; end: 1090028fb;  */

void FUN_1090028d8(void)

{
  return;
}



/* Entry: 1090028fc; end: 1090029bf;  */

undefined8 FUN_1090028fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bece0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1090029c0; end: 1090029d7;  */

void FUN_1090029c0(void)

{
  return;
}



/* Entry: 1090029d8; end: 109002a9b;  */

undefined8 FUN_1090029d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bece0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109002a9c; end: 109002ab3;  */

void FUN_109002a9c(void)

{
  return;
}



/* Entry: 109002ab4; end: 109002b8f;  */

undefined8 FUN_109002ab4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bece0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109002b90; end: 109002bb3;  */

void FUN_109002b90(void)

{
  return;
}



/* Entry: 109002bb4; end: 109002c93;  */

undefined1 FUN_109002bb4(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c0bece0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109002c94; end: 109002cb7;  */

void FUN_109002c94(void)

{
  return;
}



/* Entry: 109002cb8; end: 109002d7b;  */

undefined8 FUN_109002cb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bece0(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109002d7c; end: 109002d93;  */

void FUN_109002d7c(void)

{
  return;
}



/* Entry: 109002d94; end: 109003013;  */

undefined8 FUN_109002d94(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_109003014;
  uStack_c8 = 0x109003024;
  uStack_c0 = 0;
  func_0x00010c0bf3e0(param_1);
  uVar3 = puStack_e0[5];
  _objc_retain(uVar3);
  _objc_retain(param_1);
  _objc_retain(param_1);
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_109003014;
  uStack_70 = 0x109003024;
  uStack_68 = 0;
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1090034e8;
  puStack_a0 = &UNK_110ad2ce0;
  puStack_88 = puStack_98;
  func_0x00010c0bf3e0(param_1);
  uVar4 = puStack_88[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_1);
  lVar2 = param_1;
  FUN_1090073dc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c2193a0(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  uVar3 = puStack_e0[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 109003014; end: 10900302b;  */

void FUN_109003014(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10900302c; end: 1090031fb;  */

void FUN_10900302c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(puVar3);
  lVar8 = param_2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  puVar9 = PTR_PTR_1126b4960;
  if (lVar4 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar8 = param_2;
    func_0x00010beec820(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar8);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar9;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1090031fc; end: 10900324b;  */

void FUN_1090031fc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10900324c; end: 1090033a7;  */

undefined8 FUN_10900324c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_109003014;
  uStack_40 = 0x109003024;
  uStack_38 = 0;
  func_0x00010c0bf3e0(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1090033a8; end: 109003477;  */

void FUN_1090033a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28) =
       PTR____NSArray0__struct_11034ab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 109003478; end: 1090034e7;  */

void FUN_109003478(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = PTR____NSArray0__struct_11034ab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090034e8; end: 109003617;  */

void FUN_1090034e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar6 = puVar2;
  func_0x00010bf4bb00();
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = puVar2;
    func_0x00010bf4bb00();
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = puVar2;
      func_0x00010bf4bb00();
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = puVar2;
        func_0x00010bf4bb00();
        if ((int)puVar6 == 0) {
          puVar6 = (undefined *)0x0;
          goto LAB_1090035d8;
        }
        ppuVar4 = &PTR_PTR_110ccc188;
      }
      else {
        ppuVar4 = &PTR_PTR_110ccc190;
      }
    }
    else {
      ppuVar4 = &PTR_PTR_110ccc180;
    }
  }
  else {
    ppuVar4 = &PTR_PTR_110ccc1b8;
  }
  puVar6 = *ppuVar4;
  _objc_retain(puVar6);
LAB_1090035d8:
  _objc_release(puVar2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar6;
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109003618; end: 109003627;  */

void FUN_109003618(void)

{
  return;
}



/* Entry: 109003628; end: 1090036ab; -[SCLegacyItemDownloader init] */

undefined1 * FUN_109003628(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffd08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf88ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090036ac; end: 1090036df; -[SCLegacyItemDownloader loadItem:completion:failure:callbackQueue:] */

void FUN_1090036ac(void)

{
  func_0x00010c09b7a0();
  return;
}



/* Entry: 1090036e0; end: 109003703; -[SCLegacyItemDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:] */

void FUN_1090036e0(void)

{
  func_0x00010c09b7a0();
  return;
}



/* Entry: 109003704; end: 109003cd3; -[SCLegacyItemDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:skipDedup:enableContentManager:isEligibleForStreaming:] */

void FUN_109003704(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined1 param_9,char param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 auStack_138 [8];
  undefined1 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_2;
  func_0x00010c075dc0();
  if ((uVar1 & 1) == 0) {
    if (param_7 == 0) {
      puVar8 = (undefined *)0x0;
      goto LAB_109003c24;
    }
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_109003cd4;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(param_7);
    uStack_80 = param_7;
    _objc_retain(param_4);
    uStack_88 = param_4;
    func_0x000107c27d8c(param_8,&puStack_a8);
    _objc_release(uStack_88);
    puVar8 = (undefined *)0x0;
    uVar1 = uStack_80;
  }
  else {
    uVar1 = param_2;
    func_0x00010bf26840();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b0,param_2);
    if (((param_5 == 0) && (param_10 != '\0')) &&
       (uVar2 = param_2, func_0x00010c0c46c0(), uVar2 != 5)) {
      _CACurrentMediaTime();
      puVar3 = PTR_PTR_1126b1060;
      _objc_alloc();
      uVar2 = param_2;
      func_0x00010c1350e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032f60();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126b08b8;
      _objc_alloc();
      func_0x00010c0c46c0(param_2);
      func_0x00010c0295e0();
      puVar5 = PTR_PTR_1126b9f60;
      _objc_alloc();
      uVar2 = param_2;
      func_0x00010c1354e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c040f00();
      _objc_release(uVar2);
      puVar6 = PTR_PTR_1126b2798;
      _objc_alloc_init();
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_109003ce8;
      puStack_108 = &UNK_110ad3000;
      _objc_copyWeak(auStack_c0,auStack_b0);
      _objc_retain(uVar1);
      uStack_100 = uVar1;
      _objc_retain(param_4);
      uStack_f8 = param_4;
      uStack_b8 = param_1;
      _objc_retain(param_8);
      uStack_f0 = param_8;
      _objc_retain(param_7);
      uStack_d0 = param_7;
      _objc_retain(puVar6);
      puStack_e8 = puVar6;
      _objc_retain(puVar4);
      puStack_e0 = puVar4;
      _objc_retain(param_6);
      uStack_c8 = param_6;
      _objc_retain(puVar3);
      ppuVar7 = &puStack_120;
      puStack_d8 = puVar3;
      _objc_retainBlock();
      uVar2 = param_2;
      func_0x00010bf4c240(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf266a0(param_2);
      func_0x00010bf65600((double)param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c126160(uVar2);
      _objc_release(puVar8);
      _objc_release(uVar2);
      puVar8 = PTR_PTR_1126b4568;
      _objc_alloc(PTR_PTR_1126b4568);
      func_0x00010bffc420();
      func_0x00010c18b5e0();
      _objc_release(ppuVar7);
      _objc_release(puStack_d8);
      _objc_release(uStack_c8);
      _objc_release(puStack_e0);
      _objc_release(puStack_e8);
      _objc_release(uStack_d0);
      _objc_release(uStack_f0);
      _objc_release(uStack_f8);
      _objc_release(uStack_100);
      _objc_destroyWeak(auStack_c0);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      puVar8 = PTR_PTR_1126b4568;
      _objc_alloc();
      func_0x00010c000420();
      func_0x00010c18b5e0();
      uVar2 = param_2;
      func_0x00010c22e740();
      if (((int)uVar2 == 0) || (uVar2 = uVar1, func_0x00010c08fa60(), uVar2 == 0)) {
        func_0x00010be4db20(param_2);
      }
      else {
        _objc_initWeak(auStack_128,param_2);
        func_0x00010bf262a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar8);
        _objc_copyWeak(auStack_138,auStack_128);
        _objc_retain(param_4);
        _objc_retain(param_8);
        _objc_retain(param_6);
        _objc_retain(param_5);
        uStack_130 = param_9;
        func_0x00010c0dff40(param_2);
        _objc_release(param_2);
        _objc_release(param_5);
        _objc_release(param_6);
        _objc_release(param_8);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_138);
        _objc_release(puVar8);
        _objc_destroyWeak(auStack_128);
      }
    }
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(uVar1);
LAB_109003c24:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 109003cd4; end: 109003ce7;  */

void FUN_109003cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109003ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 109003ce8; end: 109003f2b;  */

void FUN_109003ce8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((param_2 & 1) == 0) {
    lVar5 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar5);
    _objc_retain();
    func_0x00010c0c46c0(lVar5);
    func_0x00010be543e0(*(undefined8 *)(param_1 + 0x68),lVar5);
    _objc_release(lVar5);
    _objc_release(lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_109003f2c;
    puStack_58 = &UNK_11084aaa8;
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar8;
    _objc_retain(uVar6);
    uStack_50 = uVar6;
    func_0x000107c27d8c(uVar7,&puStack_70);
    _objc_release(uStack_50);
    _objc_release(uStack_48);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x38);
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_109003f40;
      puStack_b0 = &UNK_110ad2fd0;
      _objc_copyWeak(auStack_80,param_1 + 0x60);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uStack_a8 = uVar6;
      _objc_retain(uVar7);
      uStack_78 = *(undefined8 *)(param_1 + 0x68);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uStack_a0 = uVar7;
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      uStack_98 = uVar6;
      _objc_retain(uVar7);
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uStack_90 = uVar7;
      _objc_retain(uVar6);
      ppuVar2 = &puStack_c8;
      uStack_88 = uVar6;
      _objc_retainBlock(ppuVar2);
      lVar5 = param_1 + 0x60;
      _objc_loadWeakRetained();
      lVar3 = lVar5;
      func_0x00010bf4c240();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c13e560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar5);
      if (lVar4 != 0) {
        func_0x00010bef7460(*(undefined8 *)(param_1 + 0x38));
      }
      _objc_release(lVar4);
      _objc_release(ppuVar2);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_destroyWeak(auStack_80);
    }
  }
  return;
}



/* Entry: 109003f2c; end: 109003f3f;  */

void FUN_109003f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109003f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 109003f40; end: 109004213;  */

void FUN_109003f40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  lVar6 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar6);
  _objc_retain();
  func_0x00010c0c46c0(lVar6);
  if (lVar1 == 0) {
    func_0x00010be543e0(*(undefined8 *)(param_1 + 0x50),lVar6);
    _objc_release(lVar6);
    _objc_release(lVar6);
    lVar6 = param_2;
    func_0x00010bfc79a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c09c1e0();
    _objc_release(lVar6);
    lVar6 = param_2;
    func_0x00010bfc68a0();
    if ((int)lVar6 == 0) {
      lVar2 = param_2;
      func_0x00010b7f5374(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1 + 0x48;
      _objc_loadWeakRetained();
      lVar3 = lVar6;
      func_0x00010c13cb20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x109004240;
      puStack_e8 = &UNK_110864938;
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar7);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uStack_d0 = uVar7;
      _objc_retain(uVar5);
      uStack_e0 = uVar5;
      lStack_d8 = lVar3;
      uStack_c8 = lVar1 == 1;
      _objc_retain(lVar3);
      func_0x000107c27d8c(uVar4,&puStack_100);
      _objc_release(lStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_d0);
    }
    else {
      lVar6 = param_1 + 0x48;
      _objc_loadWeakRetained();
      lVar2 = lVar6;
      func_0x00010c13cb00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x109004228;
      puStack_a8 = &UNK_110864938;
      lVar6 = *(long *)(param_1 + 0x40);
      _objc_retain(lVar6);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      lStack_90 = lVar6;
      _objc_retain(uVar5);
      uStack_a0 = uVar5;
      lStack_98 = lVar2;
      uStack_88 = lVar1 == 1;
      _objc_retain(lVar2);
      func_0x000107c27d8c(uVar4,&puStack_c0);
      _objc_release(lStack_98);
      _objc_release(uStack_a0);
      lVar3 = lStack_90;
    }
    _objc_release(lVar3);
  }
  else {
    func_0x00010be543e0(*(undefined8 *)(param_1 + 0x50),lVar6);
    _objc_release(lVar6);
    _objc_release(lVar6);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_109004214;
    puStack_68 = &UNK_11084aaa8;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lStack_58 = lVar6;
    _objc_retain(uVar4);
    uStack_60 = uVar4;
    func_0x000107c27d8c(uVar5,&puStack_80);
    _objc_release(uStack_60);
    lVar2 = lStack_58;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 109004214; end: 109004257;  */

void FUN_109004214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109004224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 109004258; end: 1090043c7;  */

void FUN_109004258(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf2f680();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  if ((uVar1 & 1) != 0) goto LAB_1090043a8;
  if (param_4 == 0) {
LAB_109004384:
    lVar5 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar5);
    func_0x00010be4db20();
  }
  else {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    lVar4 = param_1 + 0x48;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c13cb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(lVar4);
    if (lVar5 == 0) goto LAB_109004384;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1090043c8;
    puStack_60 = &UNK_11084a9e8;
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar8;
    _objc_retain(uVar6);
    uStack_58 = uVar6;
    lStack_50 = lVar5;
    _objc_retain(lVar5);
    func_0x000107c27d8c(uVar7,&puStack_78);
    _objc_release(lStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_48);
  }
  _objc_release(lVar5);
LAB_1090043a8:
  _objc_release(param_4);
  return;
}



/* Entry: 1090043c8; end: 1090043df;  */

void FUN_1090043c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090043dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),1);
  return;
}



/* Entry: 1090043e0; end: 109004413; -[SCLegacyItemDownloader resetCache] */

void FUN_1090043e0(undefined8 param_1)

{
  func_0x00010bf262a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109004414; end: 109004463; -[SCLegacyItemDownloader recordConsumptionOfTrackingId:] */

void FUN_109004414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c135d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109004464; end: 109004553; -[SCLegacyItemDownloader itemDownloaderHandler:didCancelWithKey:] */

void FUN_109004464(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109004554; end: 109004587;  */

void FUN_109004554(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109004588; end: 10900460f; -[SCLegacyItemDownloader itemDownloaderHandler:didCancelWithCancelableItem:] */

void FUN_109004588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_109004610;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 109004610; end: 109004617;  */

void FUN_109004610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 109004618; end: 10900486f; -[SCLegacyItemDownloader _logGrapheneMetricsForContentManagerForCacheKey:mediaContextType:startFetchTime:success:] */

void FUN_109004618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126dce40;
  func_0x00010c13e960(PTR_PTR_1126dce40);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010b7f519c(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f16cf8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfe75a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126dce40;
  func_0x00010c13e980(PTR_PTR_1126dce40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7f519c(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f16cf8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bfe75a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 109004870; end: 1090049af; -[SCLegacyItemDownloader _allHandlersCanceledWithKey:] */

undefined1 * FUN_109004870(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
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
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar2 != 0) {
      lVar6 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar6) {
            _objc_enumerationMutation(lVar3);
          }
          iVar1 = (int)*(undefined8 *)(lStack_108 + lVar7 * 8);
          func_0x00010bf2f680();
          if (iVar1 == 0) {
            puVar5 = (undefined1 *)0x0;
            goto LAB_109004960;
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar3;
        puVar4 = &uStack_110;
        func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    puVar5 = (undefined1 *)0x1;
LAB_109004960:
    _objc_release(lVar3);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar2 = *(long *)(lVar3 + 0x10);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar2 != 0) && (lVar2 = lVar3, func_0x00010bdc9e40(lVar3,param_2,param_3), (int)lVar2 != 0))
  {
    func_0x00010c135d00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ee60();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 1090049b0; end: 109004a37; -[SCLegacyItemDownloader _cancelWithKey:] */

void FUN_1090049b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) &&
     (lVar1 = param_1, func_0x00010bdc9e40(param_1,param_2,param_3), (int)lVar1 != 0)) {
    func_0x00010c135d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ee60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109004a38; end: 109004b6f; -[SCLegacyItemDownloader _loadItem:remoteDownloader:handler:skipDedup:] */

void FUN_109004a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_50 = param_6;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109004b70; end: 109004bab;  */

void FUN_109004b70(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4db60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109004bac; end: 109004e73; -[SCLegacyItemDownloader _loadItemRemotely:remoteDownloader:handler:skipDedup:] */

void FUN_109004bac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  byte param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar5 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf2f680();
  if ((uVar1 & 1) != 0) goto LAB_109004d98;
  lVar2 = param_1;
  func_0x00010bf26840();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
LAB_109004ca0:
    func_0x00010c0c2b60(param_1);
    _objc_initWeak(auStack_68,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_109004e74;
    puStack_98 = &UNK_110ad3060;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_5);
    uStack_88 = param_5;
    bStack_70 = param_6;
    _objc_retain(lVar2);
    lStack_80 = lVar2;
    _objc_retainBlock(&puStack_b0);
    if (param_4 == 0) {
      lVar6 = param_1;
      func_0x00010c1354e0();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar6 != 0) && (uVar1 = param_5, func_0x00010bf2f680(), (uVar1 & 1) == 0)) {
        uVar1 = param_5;
        func_0x00010c135a00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar1 == 0) {
          lVar7 = lVar6;
          func_0x00010c086560(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ebe00(param_5);
          _objc_release(lVar7);
        }
        func_0x00010be05f60(param_1);
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 8);
      func_0x00010c11de00(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88d40(param_4);
    }
    _objc_release(lVar6);
    _objc_release(ppuVar5);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_release(puVar3);
      func_0x00010befa120(puVar4);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
LAB_109004c98:
      _objc_release(puVar4);
      goto LAB_109004ca0;
    }
    func_0x00010befa120(puVar3);
    puVar4 = puVar3;
    if ((param_6 & 1) != 0) goto LAB_109004c98;
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
LAB_109004d98:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109004e74; end: 109004f17;  */

void FUN_109004e74(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bdf7b60(param_1);
  }
  else {
    func_0x00010bdf7d80(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109004f18; end: 10900527f; -[SCLegacyItemDownloader _dataLoadedForItem:decryptedData:isFromCache:handler:skipDedup:] */

void FUN_109004f18(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,int param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar7 = param_1;
  func_0x00010bf26840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    uVar1 = param_1;
    func_0x00010c22e740();
    if (((int)uVar1 != 0) &&
       ((param_7 == 0 || (puVar2 = puVar4, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)))) {
      uVar1 = param_1;
      func_0x00010bf262a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      uVar3 = param_1;
      func_0x00010bf266a0(param_1);
      func_0x00010bf65600((double)uVar3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0500(uVar1);
      _objc_release(puVar2);
      _objc_release(uVar1);
    }
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *plStack_130;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        uVar9 = *(ulong *)(lStack_138 + (long)puVar10 * 8);
        uVar1 = uVar9;
        func_0x00010bf43fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010bf28660(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf86d40(uVar9);
        uVar6 = uVar9;
        func_0x00010bf2f680();
        if (((uVar6 & 1) == 0) && (uVar1 != 0)) {
          puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_109005280;
          puStack_178 = &UNK_11097c050;
          uStack_170 = uVar9;
          uStack_168 = param_1;
          _objc_retain(param_4);
          uStack_160 = param_4;
          _objc_retain(uVar5);
          uStack_158 = uVar5;
          _objc_retain(uVar1);
          uStack_150 = uVar1;
          uStack_148 = param_5;
          func_0x000107c27d8c(uVar3,&puStack_190);
          _objc_release(uStack_150);
          _objc_release(uStack_158);
          _objc_release(uStack_160);
        }
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar1);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = puVar4;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  uVar1 = uVar7;
  func_0x00010c08fa60();
  if (uVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar7 = *(ulong *)(param_3 + 0x20);
    func_0x00010bf2f680();
    if ((uVar7 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c13cb20(uVar8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_3 + 0x40) + 0x10))
                (*(long *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x38),uVar8,
                 *(undefined1 *)(param_3 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 109005280; end: 1090052e3;  */

void FUN_109005280(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf2f680();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13cb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),uVar2,
             *(undefined1 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1090052e4; end: 1090052e7; -[SCLegacyItemDownloader _dataFailedToLoadForKey:handler:error:] */

void FUN_1090052e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeLoaderHandlerIfNeededFor_11255ee20);
  return;
}



/* Entry: 1090052e8; end: 10900558b; -[SCLegacyItemDownloader _disposeLoaderHandlerIfNeededForKey:handler:error:] */

void FUN_1090052e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar8 = param_3;
  func_0x00010c08fa60();
  if (lVar8 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar8 = *plStack_130;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        uVar9 = *(ulong *)(lStack_138 + (long)puVar7 * 8);
        uVar6 = uVar9;
        func_0x00010bf9ffa0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010bf28660(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf86d40(uVar9);
        uVar5 = uVar9;
        func_0x00010bf2f680();
        if ((uVar5 & 1) == 0) {
          puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_10900558c;
          puStack_168 = &UNK_1108465d0;
          uStack_160 = uVar9;
          _objc_retain(uVar6);
          uStack_148 = uVar6;
          _objc_retain(uVar4);
          uStack_158 = uVar4;
          _objc_retain(param_5);
          uStack_150 = param_5;
          func_0x000107c27d8c(uVar3,&puStack_180);
          _objc_release(uStack_150);
          _objc_release(uStack_158);
          _objc_release(uStack_148);
        }
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar6);
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar1 = puVar2;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  lVar8 = param_3;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(ulong *)(param_3 + 0x20);
  func_0x00010bf2f680();
  if (((uVar6 & 1) == 0) && (lVar8 = *(long *)(param_3 + 0x38), lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001090055c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x10))
              (lVar8,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
    return;
  }
  return;
}



/* Entry: 10900558c; end: 1090055cf;  */

void FUN_10900558c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf2f680();
  if (((uVar1 & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001090055c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))
              (lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 1090055d0; end: 1090057e7; -[SCLegacyItemDownloader _downloadItem:completionBlock:retry:] */

void FUN_1090055d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c1354e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  lVar2 = param_1;
  func_0x00010c135d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1090057e8;
  puStack_a0 = &UNK_110ad3090;
  uStack_80 = param_5;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  uStack_c0 = param_5;
  uStack_90 = param_4;
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c25f660(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1090057e8; end: 1090058db;  */

void FUN_1090057e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  func_0x00010c252ee0();
  if (param_3 == 200) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_4,0,0);
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    uVar3 = param_2;
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bdc9e40();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010be05f60();
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090058dc; end: 1090059d7;  */

void FUN_1090058dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    uVar2 = param_2;
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bdc9e40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010be05f60();
      _objc_release(param_1);
      goto LAB_1090059ac;
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,0,param_4,0);
  }
LAB_1090059ac:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090059d8; end: 1090059df; -[SCLegacyItemDownloader isItemValid:] */

undefined8 FUN_1090059d8(void)

{
  return 0;
}



/* Entry: 1090059e0; end: 1090059e7; -[SCLegacyItemDownloader requestContexts:] */

undefined8 FUN_1090059e0(void)

{
  return 0;
}



/* Entry: 1090059e8; end: 1090059ef; -[SCLegacyItemDownloader resultFromData:withItem:] */

undefined8 FUN_1090059e8(void)

{
  return 0;
}



/* Entry: 1090059f0; end: 1090059f7; -[SCLegacyItemDownloader resultFromContentResult:] */

undefined8 FUN_1090059f0(void)

{
  return 0;
}



/* Entry: 1090059f8; end: 1090059ff; -[SCLegacyItemDownloader cacheKeyForItem:] */

undefined8 FUN_1090059f8(void)

{
  return 0;
}



/* Entry: 109005a00; end: 109005a07; -[SCLegacyItemDownloader requestForItem:] */

undefined8 FUN_109005a00(void)

{
  return 0;
}



/* Entry: 109005a08; end: 109005a0f; -[SCLegacyItemDownloader requestManager] */

undefined8 FUN_109005a08(void)

{
  return 0;
}



/* Entry: 109005a10; end: 109005a17; -[SCLegacyItemDownloader contentDelivery] */

undefined8 FUN_109005a10(void)

{
  return 0;
}



/* Entry: 109005a18; end: 109005a1f; -[SCLegacyItemDownloader cache] */

undefined8 FUN_109005a18(void)

{
  return 0;
}



/* Entry: 109005a20; end: 109005a27; -[SCLegacyItemDownloader cacheExpirationTimeInSecs] */

undefined8 FUN_109005a20(void)

{
  return 0xa8c0;
}



/* Entry: 109005a28; end: 109005a2f; -[SCLegacyItemDownloader shouldCache:] */

undefined8 FUN_109005a28(void)

{
  return 1;
}



/* Entry: 109005a30; end: 109005a37; -[SCLegacyItemDownloader maxRetryCount] */

undefined8 FUN_109005a30(void)

{
  return 3;
}



/* Entry: 109005a38; end: 109005aa7; -[SCLegacyItemDownloader downloadPerformer] */

void FUN_109005a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f543360);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x12);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109005aa8; end: 109005aaf; -[SCLegacyItemDownloader mediaContextTypeForItem:] */

undefined8 FUN_109005aa8(void)

{
  return 5;
}



/* Entry: 109005ab0; end: 109005abb; -[SCLegacyItemDownloader debugLogForItem:] */

undefined ** FUN_109005ab0(void)

{
  return &PTR____CFConstantStringClassReference_110f16d18;
}



/* Entry: 109005abc; end: 109005aeb; -[SCLegacyItemDownloader .cxx_destruct] */

void FUN_109005abc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109005aec; end: 109005bf3; -[SCLegacyItemDownloaderHandler initWithCompletion:failure:callbackQueue:item:] */

undefined1 *
FUN_109005aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ffd10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109005bf4; end: 109005c67; -[SCLegacyItemDownloaderHandler initWithCancelableItem:] */

undefined1 * FUN_109005bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109005c68; end: 109005d03; -[SCLegacyItemDownloaderHandler cancel] */

void FUN_109005c68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 8) = 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      return;
    }
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf51e00(uVar2);
    func_0x00010c084320(lVar1,param_2,param_1,uVar2);
    _objc_release(uVar2);
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c084300();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109005d04; end: 109005d4b; -[SCLegacyItemDownloaderHandler dispose] */

void FUN_109005d04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109005d4c; end: 109005d63; -[SCLegacyItemDownloaderHandler delegate] */

void FUN_109005d4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109005d64; end: 109005d6f; -[SCLegacyItemDownloaderHandler setDelegate:] */

void FUN_109005d64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}


