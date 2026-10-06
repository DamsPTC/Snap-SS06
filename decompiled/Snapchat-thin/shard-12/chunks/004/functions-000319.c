/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10916771c; end: 10916773f;  */

undefined ** FUN_10916771c(ulong param_1)

{
  if (param_1 < 0xe) {
    return (undefined **)(&PTR_PTR_110adea90)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110e55078;
}



/* Entry: 109167740; end: 1091677c7; -[SCStickerSearchSection initWithSection:stickers:] */

undefined1 *
FUN_109167740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127009b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091677c8; end: 1091677eb; -[SCStickerSearchSection copyWithZone:] */

undefined8 FUN_1091677c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091677ec; end: 10916784b; -[SCStickerSearchSection hash] */

undefined8 * FUN_1091677ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091678d0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1091678d0;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1091678d0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1091678d0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10916784c; end: 1091678eb; -[SCStickerSearchSection isEqual:] */

long FUN_10916784c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091678d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1091678d0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1091678d0;
    }
  }
  lVar3 = 1;
LAB_1091678d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091678ec; end: 1091678f3; -[SCStickerSearchSection section] */

undefined8 FUN_1091678ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091678f4; end: 1091678fb; -[SCStickerSearchSection stickers] */

undefined8 FUN_1091678f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091678fc; end: 109167943; -[SCStickerSearchSection .cxx_destruct] */

void FUN_1091678fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109167944; end: 109167997; +[SCStickerBaseUtils bitmojiIDByStrippingAvatarID:] */

void FUN_109167944(long param_1)

{
  long lVar1;
  
  func_0x00010c27ce60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26afc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109167998; end: 1091679a3; +[SCStickerBaseUtils parseEncodedBitmoji:] */

void FUN_109167998(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bac28,PTR_s_tryParseEncodedBitmoji__11267cdc0);
  return;
}



/* Entry: 1091679a4; end: 1091679d7; +[SCStickerBaseUtils tryParseEncodedBitmoji:] */

void FUN_1091679a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bfbab60(PTR_PTR_1126b5938,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091679d8; end: 109167a6b; +[SCStickerBaseUtils privacySafeStickerIdFromRawId:ctpEntityType:] */

void FUN_1091679d8(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 8) {
    func_0x00010c113fa0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 2) {
    param_1 = PTR_PTR_1126bac28;
    func_0x00010bf1b9e0(PTR_PTR_1126bac28,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    param_1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109167a6c; end: 109167aff; +[SCStickerBaseUtils privacySafeStickerIdFromRawId:stickerType:] */

void FUN_109167a6c(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0xb) {
    func_0x00010c113fa0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 3) {
    param_1 = PTR_PTR_1126bac28;
    func_0x00010bf1b9e0(PTR_PTR_1126bac28,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    param_1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109167b00; end: 109167bb3; +[SCStickerBaseUtils stickerIdFullFromStickerWithoutGeoStickerId:stickerType:] */

void FUN_109167b00(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0xb) {
    func_0x00010c113fa0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 3) {
    puVar1 = PTR_PTR_1126b5938;
    func_0x00010bfbab60(PTR_PTR_1126b5938,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
    func_0x00010bfbbd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_retain(param_3);
    param_1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109167bb4; end: 109167c1b; +[SCStickerBaseUtils SCMessagingIncludedStickerTypeFromString:] */

undefined4 FUN_109167bb4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd6e38);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110efd3f8);
    uVar2 = 2;
    if ((int)uVar1 == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 109167c1c; end: 109167c6b; +[SCStickerBaseUtils privacySafeBloopsStickerIdFromRawId:] */

void FUN_109167c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109167c6c; end: 109167c7f; -[SCStickerTappableElementBounds initWithCornerRadiusScaleFactor:] */

void FUN_109167c6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c005f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,0x3fe0000000000000,
             param_2,PTR_s_initWithCornerRadiusScaleFactor__1125df1a0);
  return;
}



/* Entry: 109167c80; end: 109167cfb;  */

undefined * FUN_109167c80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730ba8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28318,
                        &UNK_10dfb84f4,&UNK_10dfb8538,3,FUN_109167cfc,0);
    do {
      if (puRam0000000113730ba8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730ba8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730ba8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730ba8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730ba8;
}



/* Entry: 109167cfc; end: 109167d07;  */

bool FUN_109167cfc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 109167d08; end: 109167d83;  */

undefined * FUN_109167d08(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730bb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28338,
                        &UNK_10dfb8544,&UNK_10dfb858c,3,FUN_109167d84,0);
    do {
      if (puRam0000000113730bb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730bb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730bb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730bb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730bb0;
}



/* Entry: 109167d84; end: 109167d8f;  */

bool FUN_109167d84(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 109167d90; end: 109167df7; +[MerlinClientTweaks descriptor] */

void FUN_109167d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730bb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bea630,
                        &PTR____CFConstantStringClassReference_110f28358,&PTR_DAT_1132c2cb0,
                        &PTR_DAT_1132c2cc8,8,0x38,0x1c);
    puRam0000000113730bb8 = puVar1;
  }
  return;
}



/* Entry: 109167df8; end: 109167e83; +[SCMessagingReactionType descriptor] */

undefined * FUN_109167df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730bc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bea6d0,
                        &PTR____CFConstantStringClassReference_110f28378,&PTR_DAT_1132c2dd0,
                        &PTR_DAT_1132c2de8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam0000000113730bc0 = puVar1;
  }
  return puRam0000000113730bc0;
}



/* Entry: 109167e84; end: 109167f67; +[SCMessagingGiftInfo descriptor] */

void FUN_109167e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bea770,
                        &PTR____CFConstantStringClassReference_110f28398,&PTR_DAT_1132c2e28,
                        &PTR_DAT_1132c2e40,2,0x18,0x1c);
    puRam0000000113730bc8 = puVar1;
  }
  return;
}



/* Entry: 109167f68; end: 109167f73;  */

bool FUN_109167f68(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 109167f74; end: 109167fdb; +[SCMessagingConversationInvitationMetadata descriptor] */

void FUN_109167f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730bd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bea810,
                        &PTR____CFConstantStringClassReference_110f283d8,&PTR_DAT_1132c2e80,
                        &PTR_DAT_1132c2e98,1,0x10,0x1c);
    puRam0000000113730bd8 = puVar1;
  }
  return;
}



/* Entry: 109167fdc; end: 109168067; +[SCMessagingLegacyMessageId descriptor] */

undefined * FUN_109167fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730be0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bea8b0,
                        &PTR____CFConstantStringClassReference_110f283f8,&PTR_DAT_1132c2ec0,
                        &PTR_DAT_1132c2ed8,4,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113730be0 = puVar1;
  }
  return puRam0000000113730be0;
}



/* Entry: 109168068; end: 1091680e3;  */

undefined * FUN_109168068(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730be8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28418,
                        &UNK_10dfb8638,&UNK_10dfb8668,3,FUN_1091680e4,0);
    do {
      if (puRam0000000113730be8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730be8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730be8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730be8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730be8;
}



/* Entry: 1091680e4; end: 1091680ef;  */

bool FUN_1091680e4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1091680f0; end: 10916816b;  */

undefined * FUN_1091680f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730bf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28438,
                        &UNK_10dfb8674,&UNK_10dfb8698,2,FUN_10916816c,0);
    do {
      if (puRam0000000113730bf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730bf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730bf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730bf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730bf0;
}



/* Entry: 10916816c; end: 109168177;  */

bool FUN_10916816c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 109168178; end: 1091681f3;  */

undefined * FUN_109168178(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730bf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28458,
                        &UNK_10dfb86a0,&UNK_10dfb86c4,4,FUN_1091681f4,0);
    do {
      if (puRam0000000113730bf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730bf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730bf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730bf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730bf8;
}



/* Entry: 1091681f4; end: 1091681ff;  */

bool FUN_1091681f4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 109168200; end: 10916828b; +[SCMessagingConversationRetentionPolicy descriptor] */

undefined * FUN_109168200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bea9a0,
                        &PTR____CFConstantStringClassReference_110f28478,&PTR_DAT_1132c2f68,
                        &PTR_DAT_1132c2f80,1,0x10,0x1c);
    func_0x00010c229040();
    puRam0000000113730c00 = puVar1;
  }
  return puRam0000000113730c00;
}



/* Entry: 10916828c; end: 1091682f3; +[SCMessagingDynamicConversationRetentionPolicy descriptor] */

void FUN_10916828c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bea9f0,
                        &PTR____CFConstantStringClassReference_110f28498,&PTR_DAT_1132c2f68,
                        &PTR_DAT_1132c3000,5,0x18,0x1c);
    puRam0000000113730c08 = puVar1;
  }
  return;
}



/* Entry: 1091682f4; end: 10916837f; +[SCMessagingHighWatermark descriptor] */

undefined * FUN_1091682f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beaa40,
                        &PTR____CFConstantStringClassReference_110f284b8,&PTR_DAT_1132c2f68,
                        &PTR_DAT_1132c2fa0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113730c10 = puVar1;
  }
  return puRam0000000113730c10;
}



/* Entry: 109168380; end: 109168463; +[SCMessagingSnapStoryId descriptor] */

void FUN_109168380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beaae0,
                        &PTR____CFConstantStringClassReference_110f284d8,&PTR_DAT_1132c30a0,
                        &PTR_s_compositeStoryId_1132c30b8,3,0x20,0x1c);
    puRam0000000113730c18 = puVar1;
  }
  return;
}



/* Entry: 109168464; end: 10916846f;  */

bool FUN_109168464(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 109168470; end: 1091684eb;  */

undefined * FUN_109168470(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730c28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28518,
                        &UNK_10dfb8740,&UNK_10dfb8798,5,FUN_1091684ec,0);
    do {
      if (puRam0000000113730c28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730c28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730c28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730c28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730c28;
}



/* Entry: 1091684ec; end: 1091684f7;  */

bool FUN_1091684ec(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1091684f8; end: 10916855f; +[SCMessagingSportGames descriptor] */

void FUN_1091684f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beab80,
                        &PTR____CFConstantStringClassReference_110f28538,&PTR_DAT_1132c3128,
                        &PTR_DAT_1132c3140,1,0x10,0x1c);
    puRam0000000113730c30 = puVar1;
  }
  return;
}



/* Entry: 109168560; end: 1091685c7; +[SCMessagingSportGame descriptor] */

void FUN_109168560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beabd0,
                        &PTR____CFConstantStringClassReference_110f28558,&PTR_DAT_1132c3128,
                        &PTR_DAT_1132c33a0,0xb,0x58,0x1c);
    puRam0000000113730c38 = puVar1;
  }
  return;
}



/* Entry: 1091685c8; end: 109168653; +[SCMessagingSportScore descriptor] */

undefined * FUN_1091685c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beac20,
                        &PTR____CFConstantStringClassReference_110f28578,&PTR_DAT_1132c3128,
                        &PTR_s_points_1132c3160,1,0xc,0x1c);
    func_0x00010c229040();
    puRam0000000113730c40 = puVar1;
  }
  return puRam0000000113730c40;
}



/* Entry: 109168654; end: 1091686df; +[SCMessagingSportTimeRemainingStatus descriptor] */

undefined * FUN_109168654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beac70,
                        &PTR____CFConstantStringClassReference_110f28598,&PTR_DAT_1132c3128,
                        &PTR_DAT_1132c3180,2,0x18,0x1c);
    func_0x00010c229040();
    puRam0000000113730c48 = puVar1;
  }
  return puRam0000000113730c48;
}



/* Entry: 1091686e0; end: 10916875b; +[SCMessagingSportTimeRemainingStatus_BaseballPeriod descriptor] */

undefined * FUN_1091686e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beacc0,
                        &PTR____CFConstantStringClassReference_110f285b8,&PTR_DAT_1132c3128,
                        &PTR_DAT_1132c32a0,8,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113730c50 = puVar1;
  }
  return puRam0000000113730c50;
}



/* Entry: 10916875c; end: 1091687c3; +[SCMessagingSportPeriod descriptor] */

void FUN_10916875c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bead10,
                        &PTR____CFConstantStringClassReference_110f285d8,&PTR_DAT_1132c3128,
                        &PTR_DAT_1132c31c0,2,0x18,0x1c);
    puRam0000000113730c58 = puVar1;
  }
  return;
}



/* Entry: 1091687c4; end: 1091688bb; +[SCMessagingSportTeam descriptor] */

undefined * FUN_1091687c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bead60,
                        &PTR____CFConstantStringClassReference_110f285f8,&PTR_DAT_1132c3128,
                        &PTR_s_id_p_1132c3200,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam0000000113730c60 = puVar1;
  }
  return puRam0000000113730c60;
}



/* Entry: 1091688bc; end: 1091688c7;  */

bool FUN_1091688bc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1091688c8; end: 1091689ab; +[SCMessagingUUID descriptor] */

void FUN_1091688c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beae50,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_1132c3500,
                        &PTR_s_id_p_1132c3518,1,0x10,0x1c);
    puRam0000000113730c70 = puVar1;
  }
  return;
}



/* Entry: 1091689ac; end: 1091689b7;  */

bool FUN_1091689ac(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1091689b8; end: 109168a1f; +[SCMessagingDecorators descriptor] */

void FUN_1091689b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beaf90,
                        &PTR____CFConstantStringClassReference_110f28678,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c3b88,9,0x50,0x1c);
    puRam0000000113730c88 = puVar1;
  }
  return;
}



/* Entry: 109168a20; end: 109168aab; +[SCMessagingBotFeedback descriptor] */

undefined * FUN_109168a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beafe0,
                        &PTR____CFConstantStringClassReference_110f28698,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c38a8,1,0x10,0x1c);
    func_0x00010c229040();
    puRam0000000113730c90 = puVar1;
  }
  return puRam0000000113730c90;
}



/* Entry: 109168aac; end: 109168b13; +[SCMessagingBotThumbFeedback descriptor] */

void FUN_109168aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb030,
                        &PTR____CFConstantStringClassReference_110f286b8,&PTR_DAT_1132c3890,
                        &PTR_s_promptId_1132c38c8,1,0x10,0x1c);
    puRam0000000113730c98 = puVar1;
  }
  return;
}



/* Entry: 109168b14; end: 109168b7b; +[SCMessagingActionSuggestions descriptor] */

void FUN_109168b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb080,
                        &PTR____CFConstantStringClassReference_110f286d8,&PTR_DAT_1132c3890,
                        &PTR_s_suggestionsArray_1132c38e8,1,0x10,0x1c);
    puRam0000000113730ca0 = puVar1;
  }
  return;
}



/* Entry: 109168b7c; end: 109168c07; +[SCMessagingActionSuggestion descriptor] */

undefined * FUN_109168b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb0d0,
                        &PTR____CFConstantStringClassReference_110f286f8,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c3a08,3,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113730ca8 = puVar1;
  }
  return puRam0000000113730ca8;
}



/* Entry: 109168c08; end: 109168c6f; +[SCMessagingReplySuggestion descriptor] */

void FUN_109168c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb120,
                        &PTR____CFConstantStringClassReference_110f28718,&PTR_DAT_1132c3890,
                        &PTR_s_text_1132c3908,1,0x10,0x1c);
    puRam0000000113730cb0 = puVar1;
  }
  return;
}



/* Entry: 109168c70; end: 109168ceb; +[SCMessagingSearchSuggestion descriptor] */

undefined * FUN_109168c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb170,
                        &PTR____CFConstantStringClassReference_110f28738,&PTR_DAT_1132c3890,
                        &PTR_s_URL_1132c3a68,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam0000000113730cb8 = puVar1;
  }
  return puRam0000000113730cb8;
}



/* Entry: 109168cec; end: 109168d53; +[SCMessagingBotLoopBackMetadata descriptor] */

void FUN_109168cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb1c0,
                        &PTR____CFConstantStringClassReference_110f28758,&PTR_DAT_1132c3890,
                        &PTR_s_id_p_1132c3928,1,0x10,0x1c);
    puRam0000000113730cc0 = puVar1;
  }
  return;
}



/* Entry: 109168d54; end: 109168dbb; +[SCMessagingBotCommunicationPreferences descriptor] */

void FUN_109168d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb210,
                        &PTR____CFConstantStringClassReference_110f28778,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c3948,1,0x10,0x1c);
    puRam0000000113730cc8 = puVar1;
  }
  return;
}



/* Entry: 109168dbc; end: 109168e23; +[SCMessagingUserBotResponseMetadata descriptor] */

void FUN_109168dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb260,
                        &PTR____CFConstantStringClassReference_110f28798,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c39c8,2,0x10,0x1c);
    puRam0000000113730cd0 = puVar1;
  }
  return;
}



/* Entry: 109168e24; end: 109168e9f; +[SCMessagingUserBotResponseMetadata_BotGroupMetadata descriptor] */

undefined * FUN_109168e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb2b0,
                        &PTR____CFConstantStringClassReference_110f287b8,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c3ac8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113730cd8 = puVar1;
  }
  return puRam0000000113730cd8;
}



/* Entry: 109168ea0; end: 109168f07; +[SCMessagingSendContextMetadata descriptor] */

void FUN_109168ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb300,
                        &PTR____CFConstantStringClassReference_110f287d8,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c3968,1,8,0x1c);
    puRam0000000113730ce0 = puVar1;
  }
  return;
}



/* Entry: 109168f08; end: 109168f6f; +[SCMessagingBotDisclaimer descriptor] */

void FUN_109168f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb350,
                        &PTR____CFConstantStringClassReference_110f287f8,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c3988,1,0x10,0x1c);
    puRam0000000113730ce8 = puVar1;
  }
  return;
}



/* Entry: 109168f70; end: 109168ffb; +[SCMessagingStoryReplyMetadata descriptor] */

undefined * FUN_109168f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb3a0,
                        &PTR____CFConstantStringClassReference_110f28818,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c3b28,3,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113730cf0 = puVar1;
  }
  return puRam0000000113730cf0;
}



/* Entry: 109168ffc; end: 109169063; +[SCMessagingSnapMeMetadata descriptor] */

void FUN_109168ffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb3f0,
                        &PTR____CFConstantStringClassReference_110f28838,&PTR_DAT_1132c3890,
                        &PTR_DAT_1132c39a8,1,0x10,0x1c);
    puRam0000000113730cf8 = puVar1;
  }
  return;
}



/* Entry: 109169064; end: 1091690cb; +[SCMessagingLegacyDiscoverShare descriptor] */

void FUN_109169064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb490,
                        &PTR____CFConstantStringClassReference_110f28858,&PTR_DAT_1132c3ca8,
                        &PTR_s_media_1132c3cc0,1,0x10,0x1c);
    puRam0000000113730d00 = puVar1;
  }
  return;
}



/* Entry: 1091690cc; end: 1091691c3; +[SCMessagingLegacyShazamShare descriptor] */

undefined * FUN_1091690cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb4e0,
                        &PTR____CFConstantStringClassReference_110f28878,&PTR_DAT_1132c3ca8,
                        &PTR_DAT_1132c3ce0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam0000000113730d08 = puVar1;
  }
  return puRam0000000113730d08;
}



/* Entry: 1091691c4; end: 1091691cf;  */

bool FUN_1091691c4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1091691d0; end: 10916924b;  */

undefined * FUN_1091691d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f288b8,
                        &UNK_10dfb8888,&UNK_10dfb88a0,2,FUN_10916924c,0);
    do {
      if (puRam0000000113730d18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d18;
}



/* Entry: 10916924c; end: 109169257;  */

bool FUN_10916924c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 109169258; end: 1091692d3;  */

undefined * FUN_109169258(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f288d8,
                        &UNK_10dfb88a8,&UNK_10dfb88c4,3,FUN_1091692d4,0);
    do {
      if (puRam0000000113730d20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d20;
}



/* Entry: 1091692d4; end: 1091692df;  */

bool FUN_1091692d4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1091692e0; end: 10916936b; +[SCMessagingDuration descriptor] */

undefined * FUN_1091692e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb580,
                        &PTR____CFConstantStringClassReference_110f0f1f8,&PTR_DAT_1132c3d30,
                        &PTR_DAT_1132c3dc8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113730d28 = puVar1;
  }
  return puRam0000000113730d28;
}



/* Entry: 10916936c; end: 109169407; +[SCMessagingMediaMetadata descriptor] */

undefined * FUN_10916936c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb5d0,
                        &PTR____CFConstantStringClassReference_110e90298,&PTR_DAT_1132c3d30,
                        &PTR_DAT_1132c3ea8,0xd,0x40,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dfb88d0);
    puRam0000000113730d30 = puVar1;
  }
  return puRam0000000113730d30;
}



/* Entry: 109169408; end: 109169483; +[SCMessagingMediaMetadata_MediaEncryptionInfo descriptor] */

undefined * FUN_109169408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb620,
                        &PTR____CFConstantStringClassReference_110e662b8,&PTR_DAT_1132c3d30,
                        &PTR_s_key_1132c3d48,2,0x18,0x1c);
    func_0x00010c228780();
    puRam0000000113730d38 = puVar1;
  }
  return puRam0000000113730d38;
}



/* Entry: 109169484; end: 1091694ff; +[SCMessagingMediaMetadata_MediaDimensions descriptor] */

undefined * FUN_109169484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb670,
                        &PTR____CFConstantStringClassReference_110f288f8,&PTR_DAT_1132c3d30,
                        &PTR_s_width_1132c3d88,2,0xc,0x1c);
    func_0x00010c228780();
    puRam0000000113730d40 = puVar1;
  }
  return puRam0000000113730d40;
}



/* Entry: 109169500; end: 109169607; +[SCMessagingMediaMetadata_LegacyDirectDownloadUrl descriptor] */

undefined * FUN_109169500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beb6c0,
                        &PTR____CFConstantStringClassReference_110f28918,&PTR_DAT_1132c3d30,
                        &PTR_s_URL_1132c3e28,4,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112beb5d0);
    puRam0000000113730d48 = puVar1;
  }
  return puRam0000000113730d48;
}



/* Entry: 109169608; end: 109169613;  */

bool FUN_109169608(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 109169614; end: 10916968f;  */

undefined * FUN_109169614(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28958,
                        &UNK_10dfb891c,&UNK_10dfb8958,3,FUN_109169690,0);
    do {
      if (puRam0000000113730d58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d58;
}



/* Entry: 109169690; end: 10916969b;  */

bool FUN_109169690(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10916969c; end: 109169717;  */

undefined * FUN_10916969c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28978,
                        &UNK_10dfb8964,&UNK_10dfb8988,2,FUN_109169718,0);
    do {
      if (puRam0000000113730d60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d60;
}



/* Entry: 109169718; end: 109169723;  */

bool FUN_109169718(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 109169724; end: 10916979f;  */

undefined * FUN_109169724(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28998,
                        &UNK_10dfb8990,&UNK_10dfb89e0,3,FUN_1091697a0,0);
    do {
      if (puRam0000000113730d68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d68;
}



/* Entry: 1091697a0; end: 1091697ab;  */

bool FUN_1091697a0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1091697ac; end: 109169827;  */

undefined * FUN_1091697ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f289b8,
                        &UNK_10dfb89ec,&UNK_10dfb8a64,6,FUN_109169828,0);
    do {
      if (puRam0000000113730d70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d70;
}



/* Entry: 109169828; end: 109169833;  */

bool FUN_109169828(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 109169834; end: 1091698af;  */

undefined * FUN_109169834(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f289d8,
                        &UNK_10dfb8a7c,&UNK_10dfb8ae0,3,FUN_1091698b0,0);
    do {
      if (puRam0000000113730d78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d78;
}



/* Entry: 1091698b0; end: 1091698bb;  */

bool FUN_1091698b0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1091698bc; end: 10916994b;  */

undefined * FUN_1091698bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f289f8,
                        &UNK_10dfb8aec,&UNK_10dfb8b1c,6,FUN_10916994c,0,&UNK_10dfb8b34);
    do {
      if (puRam0000000113730d80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d80;
}



/* Entry: 10916994c; end: 109169957;  */

bool FUN_10916994c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 109169958; end: 1091699d3;  */

undefined * FUN_109169958(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28a18,
                        &UNK_10dfb8b42,&UNK_10dfb8b60,4,FUN_1091699d4,0);
    do {
      if (puRam0000000113730d88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d88;
}



/* Entry: 1091699d4; end: 1091699df;  */

bool FUN_1091699d4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1091699e0; end: 109169a5b;  */

undefined * FUN_1091699e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28a38,
                        &UNK_10dfb8b70,&UNK_10dfb8bbc,3,FUN_109169a5c,0);
    do {
      if (puRam0000000113730d90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d90;
}



/* Entry: 109169a5c; end: 109169a67;  */

bool FUN_109169a5c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 109169a68; end: 109169ae3;  */

undefined * FUN_109169a68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730d98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28a58,
                        &UNK_10dfb8bc8,&UNK_10dfb8c30,10,FUN_109169ae4,0);
    do {
      if (puRam0000000113730d98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730d98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730d98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730d98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730d98;
}



/* Entry: 109169ae4; end: 109169aef;  */

bool FUN_109169ae4(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 109169af0; end: 109169b6b;  */

undefined * FUN_109169af0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730da0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28a78,
                        &UNK_10dfb8c58,&UNK_10dfb8cbc,6,FUN_109169b6c,0);
    do {
      if (puRam0000000113730da0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730da0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730da0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730da0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730da0;
}



/* Entry: 109169b6c; end: 109169b77;  */

bool FUN_109169b6c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 109169b78; end: 109169bf3;  */

undefined * FUN_109169b78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730da8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f28a98,
                        &UNK_10dfb8cd4,&UNK_10dfb8cf0,3,FUN_109169bf4,0);
    do {
      if (puRam0000000113730da8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730da8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730da8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730da8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730da8;
}



/* Entry: 109169bf4; end: 109169bff;  */

bool FUN_109169bf4(uint param_1)

{
  return param_1 < 3;
}


