/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105782130; end: 1057821df; -[SCBitmojiAuthViewController _approvalRequestSentWithSuccess:serverRedirectUri:authCode:serverState:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105782130(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112729340));
  if ((param_3 & 1) == 0) {
    func_0x00010beb8f40(param_1,param_2,param_7);
  }
  else {
    func_0x00010be6cf20(param_1,param_2,param_4,param_5,param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057821e0; end: 105782327; -[SCBitmojiAuthViewController _sendDenialRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057821e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_11272931c);
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + _DAT_112729344);
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = lVar2, func_0x00010c08fa60(), lVar1 == 0)) {
    func_0x00010beb8f40(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112729320);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar2);
    func_0x00010c15ba40(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105782328; end: 10578237b;  */

void FUN_105782328(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfac60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10578237c; end: 105782387; -[SCBitmojiAuthViewController _denialRequestSentWithClientRedirectUri:serverState:] */

void FUN_10578237c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__openBitmojiRedirectUri_authCode_112578d68,param_3,0,param_4);
  return;
}



/* Entry: 105782388; end: 10578256f; -[SCBitmojiAuthViewController _showErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105782388(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126af180;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae6f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfe198;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dfe198,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  if (param_3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  if (param_3 == (undefined **)0x0) {
    _objc_release(ppuVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105782570; end: 105782587;  */

void FUN_105782570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105782588; end: 105782757; -[SCBitmojiAuthViewController _openBitmojiRedirectUri:authCode:state:] */

void FUN_105782588(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44760(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                        &PTR____CFConstantStringClassReference_110db9618,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    lVar3 = param_4;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,
                          &PTR____CFConstantStringClassReference_110db9558,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar4);
      _objc_release(puVar4);
    }
  }
  func_0x00010c1e6460(puVar1,param_2,puVar2);
  puVar4 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105782758;
  puStack_68 = &UNK_110848bd8;
  puStack_60 = puVar4;
  uStack_58 = param_1;
  _objc_retain(puVar4);
  func_0x00010c0e9b80(puVar5,param_2,puVar4,PTR____NSDictionary0__struct_11034ab58,&puStack_80);
  _objc_release(puVar5);
  _objc_release(puStack_60);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105782758; end: 1057827cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105782758(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112729328);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1bca0();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001057827bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + (long)_DAT_11272933c) + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be242b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x28),PTR_s__goToBitmojiApp_112566a48);
  return;
}



/* Entry: 1057827d0; end: 10578289b; -[SCBitmojiAuthViewController _goToBitmojiApp] */

void FUN_1057827d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110dfe218);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10578289c;
  puStack_48 = &UNK_110848bd8;
  puStack_40 = puVar1;
  uStack_38 = param_1;
  _objc_retain(puVar1);
  func_0x00010c0e9b80(puVar2,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58,&puStack_60);
  _objc_release(puVar2);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  return;
}



/* Entry: 10578289c; end: 1057828b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578289c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057828b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + (long)_DAT_11272933c) + 0x10))();
  return;
}



/* Entry: 1057828b4; end: 1057829b3; -[SCBitmojiAuthViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057828b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272933c,0);
  _objc_storeStrong(param_1 + _DAT_112729340,0);
  _objc_storeStrong(param_1 + _DAT_112729334,0);
  _objc_storeStrong(param_1 + _DAT_112729330,0);
  _objc_storeStrong(param_1 + _DAT_11272932c,0);
  _objc_storeStrong(param_1 + _DAT_112729328,0);
  _objc_storeStrong(param_1 + _DAT_112729320,0);
  _objc_storeStrong(param_1 + _DAT_112729344,0);
  _objc_storeStrong(param_1 + _DAT_11272931c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112729324,0);
  return;
}



/* Entry: 1057829b4; end: 105782ca3; -[SCBitmojiDeepLinkEntryPoint _bitmojiDeepLinkFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057829b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  puVar1 = PTR_PTR_1126bdef0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272934c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112729350;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_112729354);
  lVar6 = param_1 + _DAT_112729358;
  _objc_loadWeakRetained();
  uVar25 = *(undefined8 *)(param_1 + _DAT_11272935c);
  uVar26 = *(undefined8 *)(param_1 + _DAT_112729360);
  lVar7 = param_1 + _DAT_112729364;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112729368;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_11272936c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf05100();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112729370;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c292c60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112729374;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112729378;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11272937c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112729380;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c253ec0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112729384;
  _objc_loadWeakRetained();
  func_0x00010bff7d40(puVar1,param_2,lVar3,lVar5,uVar24,lVar6,uVar25,uVar26,lVar7,lVar8,lVar10,
                      lVar12,lVar16,lVar19,lVar21,lVar23,param_1);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105782ca4; end: 105782d93; -[SCBitmojiDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105782ca4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729348,0);
  _objc_storeStrong(param_1 + _DAT_112729360,0);
  _objc_destroyWeak(param_1 + _DAT_112729364);
  _objc_storeStrong(param_1 + _DAT_11272935c,0);
  _objc_storeStrong(param_1 + _DAT_112729354,0);
  _objc_destroyWeak(param_1 + _DAT_112729358);
  _objc_destroyWeak(param_1 + _DAT_112729384);
  _objc_destroyWeak(param_1 + _DAT_112729380);
  _objc_destroyWeak(param_1 + _DAT_11272937c);
  _objc_destroyWeak(param_1 + _DAT_112729368);
  _objc_destroyWeak(param_1 + _DAT_112729374);
  _objc_destroyWeak(param_1 + _DAT_112729370);
  _objc_destroyWeak(param_1 + _DAT_11272936c);
  _objc_destroyWeak(param_1 + _DAT_112729350);
  _objc_destroyWeak(param_1 + _DAT_11272934c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729378);
  return;
}



/* Entry: 105782d94; end: 1057830e7; -[SCBitmojiDeepLinkFactoryImpl initWithBitmojiAvatarProvider:bitmojiLogger:bitmojiSettingsScopeExposer:bitmojiSettingsScopeServices:bitmojiAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeServices:networkServices:bitmojiAppEventsEmitter:userLinkingServices:username:userId:circumstanceEngine:bitmoji3DStickerFetcher:fashionTrayPresentingServices:] */

undefined8 *
FUN_105782d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126ea260;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057830e8; end: 10578316b; -[SCBitmojiDeepLinkFactoryImpl bitmojiDeepLinkControllerWithUIContainer:] */

void FUN_1057830e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bdef8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6220();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578316c; end: 10578320b; -[SCBitmojiDeepLinkFactoryImpl bitmojiDeepLinkProcessorHandlerWithDelegate:uiContainer:] */

void FUN_10578316c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bdf00;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b000();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578320c; end: 1057832d7; -[SCBitmojiDeepLinkFactoryImpl .cxx_destruct] */

void FUN_10578320c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057832d8; end: 105783417; -[SCBitmojiDeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057832d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + _DAT_1127293c4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    puVar4 = PTR_PTR_1126bdf08;
    _objc_alloc(PTR_PTR_1126bdf08);
    lVar1 = param_1 + _DAT_1127293c8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bf1b260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_1127293cc;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bff7f00(puVar4,param_2,lVar3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_1127293d0;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105783418; end: 105783467; -[SCBitmojiDeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105783418(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127293c4);
  _objc_destroyWeak(param_1 + _DAT_1127293c8);
  _objc_destroyWeak(param_1 + _DAT_1127293cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127293d0);
  return;
}



/* Entry: 105783468; end: 10578372f; -[SCBitmojiDeepLinkProcessorHandler initWithDelegate:uiContainer:bitmojiAppEventsEmitter:networkServices:avatarBuilderScopeExposer:bitmojiLogger:avatarProvider:bitmojiDeepLinkFactory:circumstanceEngine:userLinkingServices:userId:username:bitmoji3DStickerFetcher:] */

undefined8 *
FUN_105783468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126ea268;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105783730; end: 105783813; -[SCBitmojiDeepLinkProcessorHandler processDeepLinkURL:additionalInfo:delegate:] */

void FUN_105783730(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1b20(param_1,param_2,param_3,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dfe258,
                        &PTR____CFConstantStringClassReference_110daafd8,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  func_0x00010bf94720(param_5,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105783814; end: 1057838bf; -[SCBitmojiDeepLinkProcessorHandler handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_105783814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1068;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057c40();
  _objc_release(param_3);
  func_0x00010bfd1b20(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1057838c0; end: 105783c37; -[SCBitmojiDeepLinkProcessorHandler handleOpenDeepLinkURL:sourceApplication:additionalInfo:] */

undefined8
FUN_1057838c0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar7 = 1;
  uVar4 = param_3;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar4;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar4;
      func_0x00010c0720c0();
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar4;
        func_0x00010c0720c0();
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar4;
          func_0x00010c0720c0();
          if ((int)uVar3 == 0) {
LAB_105783a14:
            uVar7 = 0;
          }
          else {
            uVar3 = param_3;
            func_0x00010c0f5820();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar7 == 0) {
              uVar7 = uVar3;
              func_0x00010c0720c0();
              _objc_release(uVar3);
              if ((uVar7 & 1) == 0) goto LAB_105783a14;
              uVar7 = 5;
            }
            else {
              _objc_release(uVar3);
              uVar7 = 4;
            }
          }
        }
        else {
          uVar7 = 6;
        }
      }
      else {
        uVar7 = 3;
      }
    }
    else {
      uVar7 = 2;
    }
  }
  _objc_release(uVar4);
  _objc_release(param_3);
  if (param_5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
  }
  if (uVar7 < 3) {
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
        func_0x00010bf1f440();
        if (iVar1 != 0) goto LAB_105783b34;
        if ((uVar4 & 1) == 0) {
          uVar4 = param_1 + 8;
          _objc_loadWeakRetained();
          uVar3 = uVar4;
          func_0x00010bf1b2a0();
          if ((uVar3 & 1) == 0) {
            _objc_release(uVar4);
          }
          else {
            uVar3 = param_1 + 8;
            _objc_loadWeakRetained();
            uVar7 = uVar3;
            func_0x00010bf1b2c0();
            _objc_release(uVar3);
            _objc_release(uVar4);
            if ((uVar7 & 1) == 0) {
              uVar4 = param_1 + 8;
              _objc_loadWeakRetained(uVar4);
              func_0x00010bf1b280();
              goto LAB_105783c30;
            }
          }
          uVar4 = *(ulong *)(param_1 + 0x18);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126bdf10;
          func_0x00010bf726e0(PTR_PTR_1126bdf10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8de60(uVar4);
          _objc_release(puVar5);
          goto LAB_105783c30;
        }
      }
      else if ((uVar4 & 1) == 0) {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_105783c38;
        puStack_68 = &UNK_110841f80;
        lStack_60 = param_1;
        _objc_retain(param_3);
        uStack_58 = param_3;
        func_0x000100162d98("APPSTORE",&puStack_80);
        uVar4 = uStack_58;
LAB_105783c30:
        _objc_release(uVar4);
        goto LAB_105783b40;
      }
    }
LAB_105783b4c:
    uVar6 = 0;
  }
  else {
    if ((4 < uVar7) && (uVar7 == 5)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x00010bf1f440();
      if (iVar1 == 0) goto LAB_105783b4c;
    }
LAB_105783b34:
    func_0x00010be7ae80(param_1);
LAB_105783b40:
    uVar6 = 1;
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105783c38; end: 105783c43;  */

void FUN_105783c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentAuthViewControllerWithDe_11257c268,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105783c44; end: 105783c4b; -[SCBitmojiDeepLinkProcessorHandler shouldForceNavigation] */

undefined8 FUN_105783c44(void)

{
  return 1;
}



/* Entry: 105783c4c; end: 105783c4f; -[SCBitmojiDeepLinkProcessorHandler processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_105783c4c(void)

{
  return;
}



/* Entry: 105783c50; end: 105783d83; -[SCBitmojiDeepLinkProcessorHandler _presentDeeplinkURL:] */

void FUN_105783c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105783d84;
  uStack_40 = 0x105783d94;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf1b220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puStack_58[5];
  uVar2 = param_3;
  uStack_38 = uVar1;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10be00(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105783d84; end: 105783d9b;  */

void FUN_105783d84(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105783d9c; end: 105783dd7;  */

void FUN_105783d9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_opt_class(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105783dd8; end: 105783f03; -[SCBitmojiDeepLinkProcessorHandler _presentAuthViewControllerWithDeepLinkURL:] */

void FUN_105783dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = PTR_PTR_1126bdf18;
  _objc_retain(param_3);
  _objc_alloc(puVar5);
  func_0x00010c02f520();
  puVar6 = PTR_PTR_1126bdf20;
  _objc_alloc(PTR_PTR_1126bdf20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfd46e0();
  func_0x00010bff5820(puVar6,param_2,param_3,puVar5,uVar3,uVar2,uVar1,uVar4,uVar9,(char)uVar8);
  _objc_release(param_3);
  _objc_release(uVar7);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 105783f04; end: 105783f13;  */

void FUN_105783f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105783f14; end: 105783fc3; -[SCBitmojiDeepLinkProcessorHandler .cxx_destruct] */

void FUN_105783f14(long param_1)

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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105783fc4; end: 105784067; -[SCBitmojiDeepLinkProcessorPlugin initWithBitmojiDeepLinkFactory:legacyNavigationServices:] */

undefined1 *
FUN_105783fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea270;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105784068; end: 10578407b; -[SCBitmojiDeepLinkProcessorPlugin identifier] */

void FUN_105784068(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10578407c; end: 105784083; -[SCBitmojiDeepLinkProcessorPlugin priority] */

undefined8 FUN_10578407c(void)

{
  return 1000;
}



/* Entry: 105784084; end: 105784097; -[SCBitmojiDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

void FUN_105784084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110dc7978);
  return;
}



/* Entry: 105784098; end: 1057840e3; -[SCBitmojiDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_105784098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1057840e4; end: 10578419b; -[SCBitmojiDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_1057840e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d6760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf1b2e0(uVar1,param_2,param_1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10578419c; end: 10578425f; -[SCBitmojiDeepLinkProcessorPlugin bitmojiDeepLinkProcessorHandler:presentMiddleVCAnimated:deepLinkURL:sourceApplication:] */

void FUN_10578419c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  
  puVar1 = PTR_PTR_1126b1068;
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_alloc(puVar1);
  func_0x00010c057c40();
  _objc_release(in_x5);
  _objc_release(in_x4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d6760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d100();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105784260; end: 1057842bf; -[SCBitmojiDeepLinkProcessorPlugin bitmojiDeepLinkProcessorHandlerCanPerformNavigation:] */

undefined8 FUN_105784260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d6760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2d020();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1057842c0; end: 1057842c7; -[SCBitmojiDeepLinkProcessorPlugin bitmojiDeepLinkProcessorHandlerIsAtFarLeft:] */

undefined8 FUN_1057842c0(void)

{
  return 0;
}



/* Entry: 1057842c8; end: 1057842f7; -[SCBitmojiDeepLinkProcessorPlugin .cxx_destruct] */

void FUN_1057842c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057842f8; end: 1057845cb; -[SCDeepLinkBitmojiController initWithAvatarProvider:bitmojiLogger:bitmojiSettingsScopeExposer:bitmojiSettingsScopeServices:avatarBuilderScopeExposer:editAvatarBuilderScopeExposer:editAvatarBuilderScopeServices:username:uiContainer:bitmoji3DStickerFetcher:circumstanceEngine:fashionTrayPresentingServices:] */

undefined8 *
FUN_1057842f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126ea278;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057845cc; end: 105784da7; -[SCDeepLinkBitmojiController presentDeepLinkURL:sourceApplication:flowCompletion:] */

void FUN_1057845cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar14 = param_5;
  _objc_retainBlock();
  uVar20 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar14;
  _objc_release(uVar20);
  puVar2 = PTR_PTR_1126b1068;
  _objc_alloc();
  func_0x00010c057c40();
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar3;
  func_0x00010c0720c0();
  if (((ulong)puVar21 & 1) != 0) {
    _objc_release(puVar3);
    _objc_release(puVar2);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
    func_0x00010bf1f440();
    if (iVar1 == 0) {
      func_0x00010be484a0(param_1);
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar4;
      func_0x00010bf12ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar5;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar14;
      func_0x00010c2519e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105784dc8;
      puStack_90 = &UNK_1108598b8;
      _objc_copyWeak(auStack_88,auStack_80);
      uVar9 = uVar8;
      func_0x00010c2656e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0e0e60(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_b0,auStack_80);
      uVar11 = uVar10;
      func_0x00010c25ff60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(puVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar20);
      _objc_release(uVar5);
      _objc_release(uVar14);
      _objc_release(uVar4);
      func_0x00010bf1a3e0(uVar11);
      _objc_release(uVar11);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    goto LAB_105784b84;
  }
  puVar21 = puVar3;
  func_0x00010c0720c0();
  if ((int)puVar21 != 0) goto LAB_1057848ac;
  puVar21 = puVar3;
  func_0x00010c0720c0();
  if (((ulong)puVar21 & 1) != 0) {
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126bdef8;
    func_0x00010be1d160();
    if (puVar3 != (undefined *)0x0) {
      puVar21 = puVar2;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar21;
      func_0x00010c11db20();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      FUN_105786138();
      _objc_release(puVar13);
      _objc_release(puVar21);
      if (puVar12 == (undefined *)0x0) {
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar2;
        func_0x00010bdc2b80(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar13;
        func_0x00010c11db20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
      }
      puVar13 = puVar2;
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010c11db20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = puVar2;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010c11db20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      uVar16 = *(ulong *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bfd46e0();
      _objc_release(uVar16);
      if ((((ulong)puVar3 & 0xfffffffffffffffe) == 2) && ((uVar17 & 1) == 0)) {
        _objc_release(puVar21);
        puVar21 = (undefined *)0x0;
      }
      func_0x00010be47540(param_1);
      _objc_release(puVar15);
      _objc_release(puVar12);
      _objc_release(puVar21);
    }
    goto LAB_105784b84;
  }
  puVar21 = puVar3;
  func_0x00010c0720c0();
  if (((ulong)puVar21 & 1) != 0) {
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010be32540(param_1);
    goto LAB_105784b84;
  }
  puVar21 = puVar3;
  func_0x00010c0720c0();
  if ((int)puVar21 == 0) {
LAB_1057848ac:
    _objc_release(puVar3);
    puVar3 = puVar2;
  }
  else {
    puVar21 = puVar2;
    func_0x00010c0f5820();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar21;
    func_0x00010c0720c0();
    if (((ulong)puVar13 & 1) != 0) {
      _objc_release(puVar21);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar14);
      func_0x00010be47540(param_1);
      goto LAB_105784b84;
    }
    puVar13 = puVar21;
    func_0x00010c0720c0();
    _objc_release(puVar21);
    if (((ulong)puVar13 & 1) == 0) goto LAB_1057848ac;
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar2;
    func_0x00010c0f5840();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar3;
    func_0x00010c067ec0();
    _objc_release(puVar3);
    puVar13 = puVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    if ((int)puVar21 != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5f40(uVar14);
      _objc_release(puVar21);
      _objc_release(uVar14);
      lVar18 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar18);
      if (lVar19 == 0) {
        func_0x00010be47540(param_1);
      }
      else {
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be47540(param_1);
        _objc_release(puVar21);
      }
    }
  }
  _objc_release(puVar3);
LAB_105784b84:
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105784da8; end: 105784dc7;  */

bool FUN_105784da8(undefined8 param_1,long param_2)

{
  func_0x00010c08fa60(param_2);
  return param_2 != 0;
}



/* Entry: 105784dc8; end: 105784e2b;  */

void FUN_105784dc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be11ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105784e2c; end: 105784f17;  */

void FUN_105784e2c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105784f18;
  puStack_50 = &UNK_110846320;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105784f18; end: 105784f8f;  */

void FUN_105784f18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a060();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105784f90; end: 1057854c3; -[SCDeepLinkBitmojiController _handleTryOnDeepLinkURL:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_105784f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long alStack_1f8 [3];
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44780(puVar2,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar4 = puVar2;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar15 = *plStack_1a0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(puVar4);
        }
        lVar17 = *(long *)(lStack_1a8 + (long)puVar16 * 8);
        lVar6 = lVar17;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar6;
        func_0x00010c0720c0();
        if ((int)lVar18 == 0) {
LAB_1057850f4:
          _objc_release(lVar6);
        }
        else {
          lVar18 = lVar17;
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar18;
          func_0x00010c08fa60();
          _objc_release(lVar18);
          _objc_release(lVar6);
          if (lVar7 != 0) {
            func_0x00010c296d80(lVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3,param_2,lVar17);
            lVar6 = lVar17;
            goto LAB_1057850f4;
          }
        }
        puVar16 = puVar16 + 1;
      } while (puVar5 != puVar16);
      puVar5 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    alStack_1f8[2] = 0;
    alStack_1f8[1] = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(puVar3);
    puVar5 = puVar3;
    func_0x00010bf52a60(puVar3,param_2,alStack_1f8 + 1,auStack_170,0x10);
    if (puVar5 != (undefined *)0x0) {
      lVar15 = *plStack_1e0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar15) {
            _objc_enumerationMutation(puVar3);
          }
          lVar6 = param_1;
          func_0x00010bdd2a00(param_1,param_2,*(undefined8 *)(alStack_1f8[2] + (long)puVar16 * 8));
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          if (lVar6 == 0) goto LAB_105785400;
          alStack_1f8[0] = 0;
          puVar8 = PTR_PTR_1126bdf28;
          func_0x00010c0f40e0(PTR_PTR_1126bdf28,param_2,lVar6,alStack_1f8);
          _objc_retainAutoreleasedReturnValue();
          lVar18 = alStack_1f8[0];
          _objc_retain(alStack_1f8[0]);
          if ((lVar18 != 0) || (puVar8 == (undefined *)0x0)) {
LAB_1057853e4:
            _objc_release(puVar8);
            _objc_release(lVar18);
            _objc_release(lVar6);
            goto LAB_105785400;
          }
          puVar19 = puVar8;
          func_0x00010c0ec220();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar19;
          func_0x00010c08fa60();
          _objc_release(puVar19);
          if (puVar9 == (undefined *)0x0) {
            lVar18 = 0;
            goto LAB_1057853e4;
          }
          puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          puVar19 = puVar8;
          func_0x00010bf413a0();
          if (puVar19 != (undefined *)0x0) {
            puVar19 = (undefined *)0x0;
            do {
              puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar11 = puVar8;
              func_0x00010bf41380(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010c296de0();
              func_0x00010c0df760(puVar9,param_2,puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar10,param_2,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar11);
              puVar19 = puVar19 + 1;
              puVar9 = puVar8;
              func_0x00010bf413a0();
            } while (puVar19 < puVar9);
          }
          puVar9 = PTR_PTR_1126bdf30;
          _objc_alloc(PTR_PTR_1126bdf30);
          puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar11 = puVar8;
          func_0x00010bfe5ea0(puVar8);
          func_0x00010c0df760(puVar19,param_2,puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar8;
          func_0x00010c0ec220(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0320c0(puVar9,param_2,puVar19,puVar11,puVar10);
          _objc_release(puVar11);
          _objc_release(puVar19);
          func_0x00010befa120(puVar4,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(lVar6);
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar5);
        puVar5 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,alStack_1f8 + 1,auStack_170,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      uVar13 = *(ulong *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bfd46e0();
      _objc_release(uVar13);
      if ((uVar14 & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c071800();
        if (iVar1 != 0) {
          lVar15 = *(long *)(param_1 + 0x20);
          func_0x00010c150520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar15 != 0) {
            func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          puVar10 = PTR_PTR_1126af678;
          _objc_alloc(PTR_PTR_1126af678);
          func_0x00010c04a940();
          func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar10);
LAB_105785400:
          _objc_release(puVar10);
        }
      }
      else {
        func_0x00010c10c120(*(undefined8 *)(param_1 + 0x70),param_2,puVar4,
                            &PTR____CFConstantStringClassReference_110dd6ed8,0,0,
                            &PTR___NSConcreteGlobalBlock_1108b0c48);
      }
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 1057854c4; end: 1057854c7;  */

void FUN_1057854c4(void)

{
  return;
}



/* Entry: 1057854c8; end: 10578559f; -[SCDeepLinkBitmojiController _base64URLDecode:] */

void FUN_1057854c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_105785584;
  }
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c08fa60();
  uVar3 = uVar3 & 3;
  uVar1 = param_3;
  if (uVar3 < 2) {
    if (uVar3 == 0) goto LAB_105785560;
    puVar4 = (undefined *)0x0;
  }
  else {
    if (uVar3 == 2) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dfe418;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db9ab8;
    }
    func_0x00010c25ce40(param_3,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
LAB_105785560:
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
LAB_105785584:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057855a0; end: 105785687; -[SCDeepLinkBitmojiController _launchAvatarBuilderWithFlowMode:oAuthClientId:source:fashionDropId:category:sectionId:bitmojiAvatarBuilderReferrer:] */

void FUN_1057855a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010be180a0(param_1,param_2,param_3);
  if (lVar1 - 2U < 2) {
    func_0x00010be478a0(param_1,param_2,lVar1,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else if (lVar1 == 1) {
    func_0x00010be47840(param_1,param_2,param_5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105785688; end: 10578570b; -[SCDeepLinkBitmojiController _launchCreateAvatarBuilderWithSource:] */

void FUN_105785688(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10578570c; end: 105785893; -[SCDeepLinkBitmojiController _launchEditAvatarBuilderWithFlowMode:oAuthClientId:source:fashionDropId:category:sectionId:bitmojiAvatarBuilderReferrer:] */

void FUN_10578570c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126afdc8;
  _objc_opt_new(PTR_PTR_1126afdc8);
  func_0x00010c2ae460();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afd60(puVar2,param_2,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afe20(puVar2,param_2,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_6 != 0) {
    func_0x00010c2ada60(puVar2,param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c2a9340(puVar2,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23c40(uVar4,param_2,uVar5,puVar3,param_1,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105785894; end: 1057859e7; -[SCDeepLinkBitmojiController _launchAvatarBuilderTryOnWithEncodedOutfit:trackingId:] */

void FUN_105785894(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126afdc8;
  _objc_opt_new(PTR_PTR_1126afdc8);
  func_0x00010c2ae460();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afdd0;
  lVar2 = param_4;
  func_0x00010c08fa60();
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = param_4;
  }
  func_0x00010bf93640(puVar3,param_2,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c2b51c0(puVar1,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23c40(uVar5,param_2,uVar6,puVar3,param_1,0x1b,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057859e8; end: 1057859ff; -[SCDeepLinkBitmojiController _flowModeFromAvatarBuilderFlowMode:] */

long FUN_1057859e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 1;
  if (param_3 == 2) {
    lVar1 = 2;
  }
  if (param_3 != 3) {
    param_3 = lVar1;
  }
  return param_3;
}



/* Entry: 105785a00; end: 105785a8b; +[SCDeepLinkBitmojiController _getAvatarBuilderFlowMode:] */

undefined8 FUN_105785a00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f5820(param_3,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc22b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dfe3b8);
      uVar2 = 3;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105785a8c; end: 105785b13; -[SCDeepLinkBitmojiController _launchSettingsWithStatus:] */

void FUN_105785a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf23040(uVar2,param_2,param_1,*(undefined8 *)(param_1 + 0x50),param_3,0x1b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105785b14; end: 105785b33; -[SCDeepLinkBitmojiController bitmojiSettingsScopeDidFinish:] */

void FUN_105785b14(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105785b34; end: 105785b7b; -[SCDeepLinkBitmojiController bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_105785b34(long param_1)

{
  long lVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105785b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105785b7c; end: 105785b7f; -[SCDeepLinkBitmojiController bitmojiAvatarBuilderCancelled] */

void FUN_105785b7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeEditAvatarBuilder_112555f18);
  return;
}



/* Entry: 105785b80; end: 105785b83; -[SCDeepLinkBitmojiController bitmojiAvatarBuilderCompleted] */

void FUN_105785b80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeEditAvatarBuilder_112555f18);
  return;
}



/* Entry: 105785b84; end: 105785bd3; -[SCDeepLinkBitmojiController bitmojiAvatarBuilderFailedWithError:] */

void FUN_105785b84(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  func_0x00010bde15e0();
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105785bd4; end: 105785c37; -[SCDeepLinkBitmojiController _closeEditAvatarBuilder] */

void FUN_105785bd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105785c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105785c38; end: 105785ccb; -[SCDeepLinkBitmojiController _fetchImageForAvatarId:] */

void FUN_105785c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfa48a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105785ccc; end: 105785f0b; -[SCDeepLinkBitmojiController _presentAlertDialogWithImage:] */

void FUN_105785ccc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
    puVar2 = puVar1;
  }
  else {
    puVar7 = param_1;
    func_0x00010be946c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
  }
  FUN_1057860f0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105786108();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed70;
  puVar4 = puVar3;
  func_0x000105786120();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c420(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_3 != 0) {
    _objc_release(puVar7);
  }
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be02480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105785f0c; end: 105785f37;  */

void FUN_105785f0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105785f38; end: 105785f43; -[SCDeepLinkBitmojiController _dismissAlertDialog] */

void FUN_105785f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105785f44; end: 10578600b; -[SCDeepLinkBitmojiController _resizeImage:] */

void FUN_105785f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(0x4059000000000000,0x4059000000000000);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10578600c;
  puStack_50 = &UNK_110866440;
  uStack_38 = 0x4059000000000000;
  uStack_40 = 0x4059000000000000;
  uStack_48 = param_3;
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10578600c; end: 105786023;  */

void FUN_10578600c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105786024; end: 1057860ef; -[SCDeepLinkBitmojiController .cxx_destruct] */

void FUN_105786024(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057860f0; end: 105786137;  */

void FUN_1057860f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfe438;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dfe438,
                      &PTR____CFConstantStringClassReference_110dfe458,0);
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



/* Entry: 105786138; end: 1057866b7;  */

undefined8 FUN_105786138(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe4b8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe4d8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe4f8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe518);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe538);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe558);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_1;
                func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dfe578
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_1;
                  func_0x00010c0720c0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110dfe598);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110dfe5b8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1;
                      func_0x00010c0720c0(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110dfe5d8);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_1;
                        func_0x00010c0720c0(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110dfe5f8);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_1;
                          func_0x00010c0720c0(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110dfe618);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_1;
                            func_0x00010c0720c0(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110dfe638);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_1;
                              func_0x00010c0720c0(param_1,param_2,
                                                  &PTR____CFConstantStringClassReference_110dfe658);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_1;
                                func_0x00010c0720c0(param_1,param_2,
                                                    &PTR____CFConstantStringClassReference_110dfe678
                                                   );
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_1;
                                  func_0x00010c0720c0(param_1,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110dfe698);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = param_1;
                                    func_0x00010c0720c0(param_1,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe6b8);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_1;
                                      func_0x00010c0720c0(param_1,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110dfe6d8);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_1;
                                        func_0x00010c0720c0(param_1,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110dfe6f8);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_1;
                                          func_0x00010c0720c0(param_1,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110dfe718);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = param_1;
                                            func_0x00010c0720c0(param_1,param_2,
                                                                &
                                                  PTR____CFConstantStringClassReference_110dfe738);
                                            if ((uVar1 & 1) == 0) {
                                              uVar1 = param_1;
                                              func_0x00010c0720c0(param_1,param_2,
                                                                  &
                                                  PTR____CFConstantStringClassReference_110dfe758);
                                              if ((uVar1 & 1) == 0) {
                                                uVar1 = param_1;
                                                func_0x00010c0720c0(param_1,param_2,
                                                                    &
                                                  PTR____CFConstantStringClassReference_110dfe778);
                                                if ((uVar1 & 1) == 0) {
                                                  uVar1 = param_1;
                                                  func_0x00010c0720c0(param_1,param_2,
                                                                      &
                                                  PTR____CFConstantStringClassReference_110dfe798);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe7b8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe7d8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe7f8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe818);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe838);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe858);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe878);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe898);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe8b8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe8d8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe8f8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe918);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe938);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe958);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe978);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe998);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe9b8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe9d8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfe9f8);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfea18);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfea38);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfea58);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfea78);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = param_1;
                                                    func_0x00010c0720c0(param_1,param_2,
                                                                        &
                                                  PTR____CFConstantStringClassReference_110dfea98);
                                                  uVar2 = 0x36;
                                                  if ((int)uVar1 == 0) {
                                                    uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x35;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x34;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x33;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x32;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x31;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x30;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x2f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x2e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x2d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x2c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x2b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x2a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x29;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x1c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x1b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x1a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x19;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x18;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x16;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x15;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x14;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x13;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x11;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x10;
                                                  }
                                                }
                                                else {
                                                  uVar2 = 0xf;
                                                }
                                              }
                                              else {
                                                uVar2 = 0xe;
                                              }
                                            }
                                            else {
                                              uVar2 = 0xd;
                                            }
                                          }
                                          else {
                                            uVar2 = 0xc;
                                          }
                                        }
                                        else {
                                          uVar2 = 0xb;
                                        }
                                      }
                                      else {
                                        uVar2 = 10;
                                      }
                                    }
                                    else {
                                      uVar2 = 9;
                                    }
                                  }
                                  else {
                                    uVar2 = 8;
                                  }
                                }
                                else {
                                  uVar2 = 7;
                                }
                              }
                              else {
                                uVar2 = 6;
                              }
                            }
                            else {
                              uVar2 = 5;
                            }
                          }
                          else {
                            uVar2 = 4;
                          }
                        }
                        else {
                          uVar2 = 3;
                        }
                      }
                      else {
                        uVar2 = 2;
                      }
                    }
                    else {
                      uVar2 = 1;
                    }
                  }
                  else {
                    uVar2 = 0x12;
                  }
                }
                else {
                  uVar2 = 0x27;
                }
              }
              else {
                uVar2 = 0x23;
              }
            }
            else {
              uVar2 = 0x20;
            }
          }
          else {
            uVar2 = 0x1f;
          }
        }
        else {
          uVar2 = 0x1e;
        }
      }
      else {
        uVar2 = 0x1d;
      }
    }
    else {
      uVar2 = 0x28;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1057866b8; end: 105786843; -[SCBitmojiFashionDropFetcher initWithUnifiedGRPCClientFactory:performer:opsMetricsLogger:] */

undefined1 *
FUN_1057866b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126ea280;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126bdf38;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105786844; end: 105786947; -[SCBitmojiFashionDropFetcher getFashionDropForId:withCompletion:] */

void FUN_105786844(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126bdf40;
    _objc_opt_new(PTR_PTR_1126bdf40);
    func_0x00010c192020();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    func_0x00010bfc5000(uVar2);
    _objc_release(param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105786948; end: 105786a03;  */

void FUN_105786948(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  puVar1 = auStack_38;
  _objc_loadWeakRetained(puVar1);
  if (param_3 == 0) {
    func_0x00010be2a340(puVar1);
  }
  else {
    func_0x00010be29380(puVar1);
  }
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105786a04; end: 105786e6b; -[SCBitmojiFashionDropFetcher _handleGetDropResponse:withCompletion:] */

void FUN_105786a04(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf8a9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf8aa00(uVar16);
  func_0x00010c0a7740(uVar17);
  puVar2 = PTR_PTR_1126bdf48;
  _objc_alloc();
  uVar17 = uVar16;
  func_0x00010bf15920(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar17;
  func_0x00010bf0b800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bf15920(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0b820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar16;
  func_0x00010bf20f60(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf0b800();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010bf20f60(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf0b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff69a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar17);
  uVar17 = uVar16;
  func_0x00010c0caa60(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar17;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  puVar11 = PTR_PTR_1126bdf50;
  uVar17 = uVar3;
  func_0x00010bfbe500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe540(puVar11);
  _objc_release(uVar17);
  puVar10 = PTR_PTR_1126bdf58;
  _objc_alloc();
  puVar11 = PTR_PTR_1126bdf50;
  uVar17 = uVar3;
  func_0x00010bfbe500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec480(puVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d4f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0caa40(uVar3);
  func_0x00010c032120();
  _objc_release(uVar4);
  _objc_release(puVar11);
  _objc_release(uVar17);
  puVar11 = PTR_PTR_1126bdf60;
  _objc_alloc(PTR_PTR_1126bdf60);
  func_0x00010bf8aa00(uVar16);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf13d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250f20(uVar16);
  func_0x00010bf95780(uVar16);
  uVar4 = uVar16;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f200();
  func_0x00010bf158c0();
  puVar13 = puVar12;
  puVar14 = puVar2;
  func_0x00010c00e740(puVar11);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(puVar12);
  func_0x00010be3fca0();
  puVar12 = PTR_PTR_1126af5d0;
  if ((param_1 & 1) == 0) {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(param_4 + 0x10))(param_4,puVar12);
  _objc_release(param_4);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = *(undefined8 *)(puVar1 + 0x18);
  _objc_retain(puVar14);
  _objc_retain(puVar13);
  func_0x00010c0a7720(uVar16);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  (**(code **)(puVar14 + 0x10))(puVar14,puVar1);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105786e6c; end: 105786efb; -[SCBitmojiFashionDropFetcher _handleFailedGetDropForId:error:completion:] */

void FUN_105786e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0a7720(uVar2);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  (**(code **)(param_5 + 0x10))(param_5,puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105786efc; end: 105786ff7; -[SCBitmojiFashionDropFetcher _isDropAvailable:] */

undefined8 FUN_105786efc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf95780();
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar1 = param_3;
    func_0x00010c250f20(param_3);
    func_0x00010c052380((double)lVar1,puVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar1 = param_3;
    func_0x00010bf95780();
    dVar6 = (double)lVar1;
    func_0x00010c052380(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    if ((dVar6 < 0.0) || (func_0x00010c26f380(puVar4,param_2,puVar3), 0.0 < dVar6)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105786ff8; end: 105787093; -[SCBitmojiFashionDropFetcher _isDropBannerAvailable:] */

bool FUN_105786ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_3;
  func_0x00010bf158c0();
  _objc_release(param_3);
  dVar4 = (double)lVar2;
  func_0x00010c052380(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar3);
  _objc_release(puVar1);
  return dVar4 <= 0.0;
}



/* Entry: 105787094; end: 1057870cf; -[SCBitmojiFashionDropFetcher .cxx_destruct] */

void FUN_105787094(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057870d0; end: 10578728b; +[SCBitmojiFashionDropGarmentHelper optionIdsFromFashionGarmentProto:] */

void FUN_1057870d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfbe520();
  puVar3 = PTR_PTR_1126bdf50;
  puVar4 = (undefined *)0x0;
  iVar1 = (int)uVar2;
  uVar2 = param_3;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      func_0x00010c274140(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6e160(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 2) {
      func_0x00010bf1fec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6e0c0(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 3) goto LAB_105787270;
      func_0x00010bfb4620(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6e0e0(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (iVar1 == 4) {
    func_0x00010c246100(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6e140(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 5) {
    func_0x00010c0ee700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6e120(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 6) goto LAB_105787270;
    func_0x00010c0e8340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6e100(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  puVar4 = puVar3;
LAB_105787270:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10578728c; end: 1057875d3; +[SCBitmojiFashionDropGarmentHelper _optionIdsFromTopGarment:] */

undefined * FUN_10578728c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined **ppuStack_7d0;
  undefined **ppuStack_7c8;
  undefined *puStack_7c0;
  undefined *puStack_7b8;
  undefined *puStack_7b0;
  undefined *puStack_7a8;
  undefined *puStack_7a0;
  long lStack_798;
  undefined *puStack_790;
  undefined *puStack_788;
  undefined *puStack_780;
  undefined *puStack_778;
  undefined *puStack_770;
  undefined **ppuStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined8 **ppuStack_750;
  code *pcStack_748;
  undefined *puStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined **ppuStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined **ppuStack_6f0;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined **ppuStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  long lStack_670;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined8 **ppuStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  long lStack_430;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 **ppuStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dfeaf8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c274140(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dfeb18;
  uVar1 = param_3;
  puStack_128 = puVar13;
  puStack_c8 = puVar13;
  func_0x00010c274f40(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dfeb38;
  uVar1 = param_3;
  puStack_130 = puVar2;
  puStack_c0 = puVar2;
  func_0x00010c274f80(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dfeb58;
  uVar1 = param_3;
  puStack_138 = puVar13;
  puStack_b8 = puVar13;
  func_0x00010c274fa0(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dfeb78;
  uVar1 = param_3;
  puStack_b0 = puVar2;
  func_0x00010c274fc0(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dfeb98;
  uVar1 = param_3;
  puStack_a8 = puVar13;
  func_0x00010c274fe0(param_3);
  func_0x00010c0df760(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dfebb8;
  uVar1 = param_3;
  puStack_a0 = puVar3;
  func_0x00010c275000(param_3);
  func_0x00010c0df760(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110dfebd8;
  uVar1 = param_3;
  puStack_98 = puVar4;
  func_0x00010c275020(param_3);
  func_0x00010c0df760(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dfebf8;
  uVar1 = param_3;
  puStack_90 = puVar5;
  func_0x00010c275040(param_3);
  func_0x00010c0df760(puVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dfec18;
  uVar1 = param_3;
  puStack_88 = puVar6;
  func_0x00010c275060(param_3);
  func_0x00010c0df760(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dfec38;
  uVar1 = param_3;
  puStack_80 = puVar7;
  func_0x00010c274f60();
  _objc_release(param_3);
  func_0x00010c0df760(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_c8;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pcStack_148 = FUN_1057875d4;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_260 = &PTR____CFConstantStringClassReference_110dfec58;
    puStack_1a0 = puVar6;
    puStack_198 = puVar5;
    puStack_190 = puVar4;
    puStack_188 = puVar3;
    puStack_180 = puVar13;
    puStack_178 = puVar2;
    puStack_170 = puVar9;
    uStack_168 = uVar1;
    puStack_160 = puVar8;
    puStack_158 = puVar7;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    ppuVar10 = ppuVar12;
    func_0x00010bf1fec0(ppuVar12);
    func_0x00010c0df760(puVar11,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_258 = &PTR____CFConstantStringClassReference_110dfec78;
    ppuVar10 = ppuVar12;
    puStack_268 = puVar11;
    puStack_208 = puVar11;
    func_0x00010bf205c0(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_250 = &PTR____CFConstantStringClassReference_110dfec98;
    ppuVar10 = ppuVar12;
    puStack_270 = puVar13;
    puStack_200 = puVar13;
    func_0x00010bf20600(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_248 = &PTR____CFConstantStringClassReference_110dfecb8;
    ppuVar10 = ppuVar12;
    puStack_278 = puVar2;
    puStack_1f8 = puVar2;
    func_0x00010bf20620(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_240 = &PTR____CFConstantStringClassReference_110dfecd8;
    ppuVar10 = ppuVar12;
    puStack_1f0 = puVar13;
    func_0x00010bf20640(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_238 = &PTR____CFConstantStringClassReference_110dfecf8;
    ppuVar10 = ppuVar12;
    puStack_1e8 = puVar2;
    func_0x00010bf20660(ppuVar12);
    func_0x00010c0df760(puVar3,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_230 = &PTR____CFConstantStringClassReference_110dfed18;
    ppuVar10 = ppuVar12;
    puStack_1e0 = puVar3;
    func_0x00010bf20680(ppuVar12);
    func_0x00010c0df760(puVar4,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_228 = &PTR____CFConstantStringClassReference_110dfed38;
    ppuVar10 = ppuVar12;
    puStack_1d8 = puVar4;
    func_0x00010bf206a0(ppuVar12);
    func_0x00010c0df760(puVar5,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_220 = &PTR____CFConstantStringClassReference_110dfed58;
    ppuVar10 = ppuVar12;
    puStack_1d0 = puVar5;
    func_0x00010bf206c0(ppuVar12);
    func_0x00010c0df760(puVar6,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_218 = &PTR____CFConstantStringClassReference_110dfed78;
    ppuVar10 = ppuVar12;
    puStack_1c8 = puVar6;
    func_0x00010bf206e0(ppuVar12);
    func_0x00010c0df760(puVar7,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_210 = &PTR____CFConstantStringClassReference_110dfed98;
    ppuVar10 = ppuVar12;
    puStack_1c0 = puVar7;
    func_0x00010bf205e0();
    _objc_release(ppuVar12);
    func_0x00010c0df760(puVar8,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &puStack_208;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1b8 = puVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar13);
    _objc_release(puStack_278);
    _objc_release(puStack_270);
    _objc_release(puStack_268);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pcStack_288 = FUN_10578791c;
      lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_3a0 = &PTR____CFConstantStringClassReference_110dfe538;
      puStack_2e0 = puVar6;
      puStack_2d8 = puVar5;
      puStack_2d0 = puVar4;
      puStack_2c8 = puVar3;
      puStack_2c0 = puVar2;
      puStack_2b8 = puVar13;
      puStack_2b0 = puVar9;
      ppuStack_2a8 = ppuVar10;
      puStack_2a0 = puVar8;
      puStack_298 = puVar7;
      ppuStack_290 = &puStack_150;
      _objc_retain(ppuVar12);
      ppuVar10 = ppuVar12;
      func_0x00010c0ee700(ppuVar12);
      func_0x00010c0df760(puVar11,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_398 = &PTR____CFConstantStringClassReference_110dfedb8;
      ppuVar10 = ppuVar12;
      puStack_3a8 = puVar11;
      puStack_348 = puVar11;
      func_0x00010c0ee720(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_390 = &PTR____CFConstantStringClassReference_110dfedd8;
      ppuVar10 = ppuVar12;
      puStack_3b0 = puVar13;
      puStack_340 = puVar13;
      func_0x00010c0ee760(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_388 = &PTR____CFConstantStringClassReference_110dfedf8;
      ppuVar10 = ppuVar12;
      puStack_3b8 = puVar2;
      puStack_338 = puVar2;
      func_0x00010c0ee780(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_380 = &PTR____CFConstantStringClassReference_110dfee18;
      ppuVar10 = ppuVar12;
      puStack_330 = puVar13;
      func_0x00010c0ee7a0(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_378 = &PTR____CFConstantStringClassReference_110dfee38;
      ppuVar10 = ppuVar12;
      puStack_328 = puVar2;
      func_0x00010c0ee7c0(ppuVar12);
      func_0x00010c0df760(puVar3,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_370 = &PTR____CFConstantStringClassReference_110dfee58;
      ppuVar10 = ppuVar12;
      puStack_320 = puVar3;
      func_0x00010c0ee7e0(ppuVar12);
      func_0x00010c0df760(puVar4,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_368 = &PTR____CFConstantStringClassReference_110dfee78;
      ppuVar10 = ppuVar12;
      puStack_318 = puVar4;
      func_0x00010c0ee800(ppuVar12);
      func_0x00010c0df760(puVar5,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_360 = &PTR____CFConstantStringClassReference_110dfee98;
      ppuVar10 = ppuVar12;
      puStack_310 = puVar5;
      func_0x00010c0ee820(ppuVar12);
      func_0x00010c0df760(puVar6,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_358 = &PTR____CFConstantStringClassReference_110dfeeb8;
      ppuVar10 = ppuVar12;
      puStack_308 = puVar6;
      func_0x00010c0ee840(ppuVar12);
      func_0x00010c0df760(puVar7,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_350 = &PTR____CFConstantStringClassReference_110dfeed8;
      ppuVar10 = ppuVar12;
      puStack_300 = puVar7;
      func_0x00010c0ee740();
      _objc_release(ppuVar12);
      func_0x00010c0df760(puVar8,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &puStack_348;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_2f8 = puVar8;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar13);
      _objc_release(puStack_3b8);
      _objc_release(puStack_3b0);
      _objc_release(puStack_3a8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f0) {
        ___stack_chk_fail();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        pcStack_3c8 = FUN_105787c64;
        lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_590 = &PTR____CFConstantStringClassReference_110dfeaf8;
        puStack_420 = puVar6;
        puStack_418 = puVar5;
        puStack_410 = puVar4;
        puStack_408 = puVar3;
        puStack_400 = puVar2;
        puStack_3f8 = puVar13;
        puStack_3f0 = puVar9;
        ppuStack_3e8 = ppuVar10;
        puStack_3e0 = puVar8;
        puStack_3d8 = puVar7;
        ppuStack_3d0 = &ppuStack_290;
        _objc_retain(ppuVar12);
        ppuVar10 = ppuVar12;
        func_0x00010c274140(ppuVar12);
        func_0x00010c0df760(puVar11,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_588 = &PTR____CFConstantStringClassReference_110dfeb18;
        ppuVar10 = ppuVar12;
        puStack_598 = puVar11;
        puStack_4e0 = puVar11;
        func_0x00010c274f40(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_580 = &PTR____CFConstantStringClassReference_110dfeb38;
        ppuVar10 = ppuVar12;
        puStack_5a0 = puVar13;
        puStack_4d8 = puVar13;
        func_0x00010c274f80(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_578 = &PTR____CFConstantStringClassReference_110dfeb58;
        ppuVar10 = ppuVar12;
        puStack_5a8 = puVar2;
        puStack_4d0 = puVar2;
        func_0x00010c274fa0(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_570 = &PTR____CFConstantStringClassReference_110dfeb78;
        ppuVar10 = ppuVar12;
        puStack_5b0 = puVar13;
        puStack_4c8 = puVar13;
        func_0x00010c274fc0(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_568 = &PTR____CFConstantStringClassReference_110dfeb98;
        ppuVar10 = ppuVar12;
        puStack_5b8 = puVar2;
        puStack_4c0 = puVar2;
        func_0x00010c274fe0(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_560 = &PTR____CFConstantStringClassReference_110dfebb8;
        ppuVar10 = ppuVar12;
        puStack_5c0 = puVar13;
        puStack_4b8 = puVar13;
        func_0x00010c275000(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_558 = &PTR____CFConstantStringClassReference_110dfebd8;
        ppuVar10 = ppuVar12;
        puStack_5c8 = puVar2;
        puStack_4b0 = puVar2;
        func_0x00010c275020(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_550 = &PTR____CFConstantStringClassReference_110dfebf8;
        ppuVar10 = ppuVar12;
        puStack_5d0 = puVar13;
        puStack_4a8 = puVar13;
        func_0x00010c275040(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_548 = &PTR____CFConstantStringClassReference_110dfec18;
        ppuVar10 = ppuVar12;
        puStack_5d8 = puVar2;
        puStack_4a0 = puVar2;
        func_0x00010c275060(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_540 = &PTR____CFConstantStringClassReference_110dfec38;
        ppuVar10 = ppuVar12;
        puStack_5e0 = puVar13;
        puStack_498 = puVar13;
        func_0x00010c274f60(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_538 = &PTR____CFConstantStringClassReference_110dfec58;
        ppuVar10 = ppuVar12;
        puStack_5e8 = puVar2;
        puStack_490 = puVar2;
        func_0x00010bf1fec0(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_530 = &PTR____CFConstantStringClassReference_110dfec78;
        ppuVar10 = ppuVar12;
        puStack_5f0 = puVar13;
        puStack_488 = puVar13;
        func_0x00010bf205c0(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_528 = &PTR____CFConstantStringClassReference_110dfec98;
        ppuVar10 = ppuVar12;
        puStack_5f8 = puVar2;
        puStack_480 = puVar2;
        func_0x00010bf20600(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_520 = &PTR____CFConstantStringClassReference_110dfecb8;
        ppuVar10 = ppuVar12;
        puStack_600 = puVar13;
        puStack_478 = puVar13;
        func_0x00010bf20620(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_518 = &PTR____CFConstantStringClassReference_110dfecd8;
        ppuVar10 = ppuVar12;
        puStack_470 = puVar2;
        func_0x00010bf20640(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_510 = &PTR____CFConstantStringClassReference_110dfecf8;
        ppuVar10 = ppuVar12;
        puStack_468 = puVar13;
        func_0x00010bf20660(ppuVar12);
        func_0x00010c0df760(puVar3,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_508 = &PTR____CFConstantStringClassReference_110dfed18;
        ppuVar10 = ppuVar12;
        puStack_460 = puVar3;
        func_0x00010bf20680(ppuVar12);
        func_0x00010c0df760(puVar4,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_500 = &PTR____CFConstantStringClassReference_110dfed38;
        ppuVar10 = ppuVar12;
        puStack_458 = puVar4;
        func_0x00010bf206a0(ppuVar12);
        func_0x00010c0df760(puVar5,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_4f8 = &PTR____CFConstantStringClassReference_110dfed58;
        ppuVar10 = ppuVar12;
        puStack_450 = puVar5;
        func_0x00010bf206c0(ppuVar12);
        func_0x00010c0df760(puVar6,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_4f0 = &PTR____CFConstantStringClassReference_110dfed78;
        ppuVar10 = ppuVar12;
        puStack_448 = puVar6;
        func_0x00010bf206e0(ppuVar12);
        func_0x00010c0df760(puVar7,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_4e8 = &PTR____CFConstantStringClassReference_110dfed98;
        ppuVar10 = ppuVar12;
        puStack_440 = puVar7;
        func_0x00010bf205e0();
        _objc_release(ppuVar12);
        func_0x00010c0df760(puVar8,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = &puStack_4e0;
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_438 = puVar8;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar13);
        _objc_release(puVar2);
        _objc_release(puStack_600);
        _objc_release(puStack_5f8);
        _objc_release(puStack_5f0);
        _objc_release(puStack_5e8);
        _objc_release(puStack_5e0);
        _objc_release(puStack_5d8);
        _objc_release(puStack_5d0);
        _objc_release(puStack_5c8);
        _objc_release(puStack_5c0);
        _objc_release(puStack_5b8);
        _objc_release(puStack_5b0);
        _objc_release(puStack_5a8);
        _objc_release(puStack_5a0);
        _objc_release(puStack_598);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_430) {
          ___stack_chk_fail();
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          pcStack_608 = FUN_10578823c;
          lStack_670 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_720 = &PTR____CFConstantStringClassReference_110dfe518;
          puStack_660 = puVar4;
          puStack_658 = puVar3;
          puStack_650 = puVar13;
          puStack_648 = puVar2;
          puStack_640 = puVar9;
          ppuStack_638 = ppuVar10;
          puStack_630 = puVar8;
          puStack_628 = puVar7;
          puStack_620 = puVar6;
          puStack_618 = puVar5;
          ppuStack_610 = &ppuStack_3d0;
          _objc_retain(ppuVar12);
          ppuVar10 = ppuVar12;
          func_0x00010bfb4620(ppuVar12);
          func_0x00010c0df760(puVar11,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_718 = &PTR____CFConstantStringClassReference_110dfeef8;
          ppuVar10 = ppuVar12;
          puStack_728 = puVar11;
          puStack_6c8 = puVar11;
          func_0x00010bfb4640(ppuVar12);
          func_0x00010c0df760(puVar13,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_710 = &PTR____CFConstantStringClassReference_110dfef18;
          ppuVar10 = ppuVar12;
          puStack_730 = puVar13;
          puStack_6c0 = puVar13;
          func_0x00010bfb4680(ppuVar12);
          func_0x00010c0df760(puVar2,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_708 = &PTR____CFConstantStringClassReference_110dfef38;
          ppuVar10 = ppuVar12;
          puStack_738 = puVar2;
          puStack_6b8 = puVar2;
          func_0x00010bfb46a0(ppuVar12);
          func_0x00010c0df760(puVar13,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_700 = &PTR____CFConstantStringClassReference_110dfef58;
          ppuVar10 = ppuVar12;
          puStack_6b0 = puVar13;
          func_0x00010bfb46c0(ppuVar12);
          func_0x00010c0df760(puVar2,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_6f8 = &PTR____CFConstantStringClassReference_110dfef78;
          ppuVar10 = ppuVar12;
          puStack_6a8 = puVar2;
          func_0x00010bfb46e0(ppuVar12);
          func_0x00010c0df760(puVar3,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_6f0 = &PTR____CFConstantStringClassReference_110dfef98;
          ppuVar10 = ppuVar12;
          puStack_6a0 = puVar3;
          func_0x00010bfb4700(ppuVar12);
          func_0x00010c0df760(puVar4,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_6e8 = &PTR____CFConstantStringClassReference_110dfefb8;
          ppuVar10 = ppuVar12;
          puStack_698 = puVar4;
          func_0x00010bfb4720(ppuVar12);
          func_0x00010c0df760(puVar5,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_6e0 = &PTR____CFConstantStringClassReference_110dfefd8;
          ppuVar10 = ppuVar12;
          puStack_690 = puVar5;
          func_0x00010bfb4740(ppuVar12);
          func_0x00010c0df760(puVar6,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_6d8 = &PTR____CFConstantStringClassReference_110dfeff8;
          ppuVar10 = ppuVar12;
          puStack_688 = puVar6;
          func_0x00010bfb4760(ppuVar12);
          func_0x00010c0df760(puVar7,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_6d0 = &PTR____CFConstantStringClassReference_110dff018;
          ppuVar10 = ppuVar12;
          puStack_680 = puVar7;
          func_0x00010bfb4660();
          _objc_release(ppuVar12);
          func_0x00010c0df760(puVar8,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = &puStack_6c8;
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_678 = puVar8;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,
                              &ppuStack_720,0xb);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar13);
          _objc_release(puStack_738);
          _objc_release(puStack_730);
          _objc_release(puStack_728);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_670) {
            ___stack_chk_fail();
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            pcStack_748 = FUN_105788584;
            lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_7e8 = &PTR____CFConstantStringClassReference_110dff038;
            puStack_790 = puVar4;
            puStack_788 = puVar3;
            puStack_780 = puVar2;
            puStack_778 = puVar13;
            puStack_770 = puVar9;
            ppuStack_768 = ppuVar10;
            puStack_760 = puVar8;
            puStack_758 = puVar7;
            ppuStack_750 = &ppuStack_610;
            _objc_retain(ppuVar12);
            ppuVar10 = ppuVar12;
            func_0x00010c246100(ppuVar12);
            func_0x00010c0df760(puVar5,param_2,ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_7e0 = &PTR____CFConstantStringClassReference_110dff058;
            ppuVar10 = ppuVar12;
            puStack_7c0 = puVar5;
            func_0x00010c246120(ppuVar12);
            func_0x00010c0df760(puVar13,param_2,ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_7d8 = &PTR____CFConstantStringClassReference_110dff078;
            ppuVar10 = ppuVar12;
            puStack_7b8 = puVar13;
            func_0x00010c246140(ppuVar12);
            func_0x00010c0df760(puVar2,param_2,ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_7d0 = &PTR____CFConstantStringClassReference_110dff098;
            ppuVar10 = ppuVar12;
            puStack_7b0 = puVar2;
            func_0x00010c246160(ppuVar12);
            func_0x00010c0df760(puVar3,param_2,ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_7c8 = &PTR____CFConstantStringClassReference_110dff0b8;
            ppuVar10 = ppuVar12;
            puStack_7a8 = puVar3;
            func_0x00010c246180(ppuVar12);
            _objc_release(ppuVar12);
            func_0x00010c0df760(puVar4,param_2,ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = &puStack_7c0;
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_7a0 = puVar4;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,
                                &ppuStack_7e8,5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar13);
            _objc_release(puVar5);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_798) {
              ___stack_chk_fail();
              func_0x00010bfbe520();
              if ((uint)ppuVar12 < 0xd) {
                puVar13 = *(undefined **)(&UNK_10ddbd100 + ((ulong)ppuVar12 & 0xffffffff) * 8);
              }
              else {
                puVar13 = (undefined *)0x0;
              }
              return puVar13;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 1057875d4; end: 10578791b; +[SCBitmojiFashionDropGarmentHelper _optionIdsFromBottomGarment:] */

undefined * FUN_1057875d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  long lStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined **ppuStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined8 **ppuStack_610;
  code *pcStack_608;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  long lStack_530;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined **ppuStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 **ppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dfec58;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf1fec0(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dfec78;
  uVar1 = param_3;
  puStack_128 = puVar13;
  puStack_c8 = puVar13;
  func_0x00010bf205c0(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dfec98;
  uVar1 = param_3;
  puStack_130 = puVar2;
  puStack_c0 = puVar2;
  func_0x00010bf20600(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dfecb8;
  uVar1 = param_3;
  puStack_138 = puVar13;
  puStack_b8 = puVar13;
  func_0x00010bf20620(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dfecd8;
  uVar1 = param_3;
  puStack_b0 = puVar2;
  func_0x00010bf20640(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dfecf8;
  uVar1 = param_3;
  puStack_a8 = puVar13;
  func_0x00010bf20660(param_3);
  func_0x00010c0df760(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dfed18;
  uVar1 = param_3;
  puStack_a0 = puVar3;
  func_0x00010bf20680(param_3);
  func_0x00010c0df760(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110dfed38;
  uVar1 = param_3;
  puStack_98 = puVar4;
  func_0x00010bf206a0(param_3);
  func_0x00010c0df760(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dfed58;
  uVar1 = param_3;
  puStack_90 = puVar5;
  func_0x00010bf206c0(param_3);
  func_0x00010c0df760(puVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dfed78;
  uVar1 = param_3;
  puStack_88 = puVar6;
  func_0x00010bf206e0(param_3);
  func_0x00010c0df760(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dfed98;
  uVar1 = param_3;
  puStack_80 = puVar7;
  func_0x00010bf205e0();
  _objc_release(param_3);
  func_0x00010c0df760(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_c8;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pcStack_148 = FUN_10578791c;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_260 = &PTR____CFConstantStringClassReference_110dfe538;
    puStack_1a0 = puVar6;
    puStack_198 = puVar5;
    puStack_190 = puVar4;
    puStack_188 = puVar3;
    puStack_180 = puVar13;
    puStack_178 = puVar2;
    puStack_170 = puVar9;
    uStack_168 = uVar1;
    puStack_160 = puVar8;
    puStack_158 = puVar7;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    ppuVar10 = ppuVar12;
    func_0x00010c0ee700(ppuVar12);
    func_0x00010c0df760(puVar11,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_258 = &PTR____CFConstantStringClassReference_110dfedb8;
    ppuVar10 = ppuVar12;
    puStack_268 = puVar11;
    puStack_208 = puVar11;
    func_0x00010c0ee720(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_250 = &PTR____CFConstantStringClassReference_110dfedd8;
    ppuVar10 = ppuVar12;
    puStack_270 = puVar13;
    puStack_200 = puVar13;
    func_0x00010c0ee760(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_248 = &PTR____CFConstantStringClassReference_110dfedf8;
    ppuVar10 = ppuVar12;
    puStack_278 = puVar2;
    puStack_1f8 = puVar2;
    func_0x00010c0ee780(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_240 = &PTR____CFConstantStringClassReference_110dfee18;
    ppuVar10 = ppuVar12;
    puStack_1f0 = puVar13;
    func_0x00010c0ee7a0(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_238 = &PTR____CFConstantStringClassReference_110dfee38;
    ppuVar10 = ppuVar12;
    puStack_1e8 = puVar2;
    func_0x00010c0ee7c0(ppuVar12);
    func_0x00010c0df760(puVar3,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_230 = &PTR____CFConstantStringClassReference_110dfee58;
    ppuVar10 = ppuVar12;
    puStack_1e0 = puVar3;
    func_0x00010c0ee7e0(ppuVar12);
    func_0x00010c0df760(puVar4,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_228 = &PTR____CFConstantStringClassReference_110dfee78;
    ppuVar10 = ppuVar12;
    puStack_1d8 = puVar4;
    func_0x00010c0ee800(ppuVar12);
    func_0x00010c0df760(puVar5,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_220 = &PTR____CFConstantStringClassReference_110dfee98;
    ppuVar10 = ppuVar12;
    puStack_1d0 = puVar5;
    func_0x00010c0ee820(ppuVar12);
    func_0x00010c0df760(puVar6,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_218 = &PTR____CFConstantStringClassReference_110dfeeb8;
    ppuVar10 = ppuVar12;
    puStack_1c8 = puVar6;
    func_0x00010c0ee840(ppuVar12);
    func_0x00010c0df760(puVar7,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_210 = &PTR____CFConstantStringClassReference_110dfeed8;
    ppuVar10 = ppuVar12;
    puStack_1c0 = puVar7;
    func_0x00010c0ee740();
    _objc_release(ppuVar12);
    func_0x00010c0df760(puVar8,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &puStack_208;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1b8 = puVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar13);
    _objc_release(puStack_278);
    _objc_release(puStack_270);
    _objc_release(puStack_268);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pcStack_288 = FUN_105787c64;
      lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_450 = &PTR____CFConstantStringClassReference_110dfeaf8;
      puStack_2e0 = puVar6;
      puStack_2d8 = puVar5;
      puStack_2d0 = puVar4;
      puStack_2c8 = puVar3;
      puStack_2c0 = puVar2;
      puStack_2b8 = puVar13;
      puStack_2b0 = puVar9;
      ppuStack_2a8 = ppuVar10;
      puStack_2a0 = puVar8;
      puStack_298 = puVar7;
      ppuStack_290 = &puStack_150;
      _objc_retain(ppuVar12);
      ppuVar10 = ppuVar12;
      func_0x00010c274140(ppuVar12);
      func_0x00010c0df760(puVar11,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_448 = &PTR____CFConstantStringClassReference_110dfeb18;
      ppuVar10 = ppuVar12;
      puStack_458 = puVar11;
      puStack_3a0 = puVar11;
      func_0x00010c274f40(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_440 = &PTR____CFConstantStringClassReference_110dfeb38;
      ppuVar10 = ppuVar12;
      puStack_460 = puVar13;
      puStack_398 = puVar13;
      func_0x00010c274f80(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_438 = &PTR____CFConstantStringClassReference_110dfeb58;
      ppuVar10 = ppuVar12;
      puStack_468 = puVar2;
      puStack_390 = puVar2;
      func_0x00010c274fa0(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_430 = &PTR____CFConstantStringClassReference_110dfeb78;
      ppuVar10 = ppuVar12;
      puStack_470 = puVar13;
      puStack_388 = puVar13;
      func_0x00010c274fc0(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_428 = &PTR____CFConstantStringClassReference_110dfeb98;
      ppuVar10 = ppuVar12;
      puStack_478 = puVar2;
      puStack_380 = puVar2;
      func_0x00010c274fe0(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_420 = &PTR____CFConstantStringClassReference_110dfebb8;
      ppuVar10 = ppuVar12;
      puStack_480 = puVar13;
      puStack_378 = puVar13;
      func_0x00010c275000(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_418 = &PTR____CFConstantStringClassReference_110dfebd8;
      ppuVar10 = ppuVar12;
      puStack_488 = puVar2;
      puStack_370 = puVar2;
      func_0x00010c275020(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_410 = &PTR____CFConstantStringClassReference_110dfebf8;
      ppuVar10 = ppuVar12;
      puStack_490 = puVar13;
      puStack_368 = puVar13;
      func_0x00010c275040(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_408 = &PTR____CFConstantStringClassReference_110dfec18;
      ppuVar10 = ppuVar12;
      puStack_498 = puVar2;
      puStack_360 = puVar2;
      func_0x00010c275060(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_400 = &PTR____CFConstantStringClassReference_110dfec38;
      ppuVar10 = ppuVar12;
      puStack_4a0 = puVar13;
      puStack_358 = puVar13;
      func_0x00010c274f60(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3f8 = &PTR____CFConstantStringClassReference_110dfec58;
      ppuVar10 = ppuVar12;
      puStack_4a8 = puVar2;
      puStack_350 = puVar2;
      func_0x00010bf1fec0(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3f0 = &PTR____CFConstantStringClassReference_110dfec78;
      ppuVar10 = ppuVar12;
      puStack_4b0 = puVar13;
      puStack_348 = puVar13;
      func_0x00010bf205c0(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3e8 = &PTR____CFConstantStringClassReference_110dfec98;
      ppuVar10 = ppuVar12;
      puStack_4b8 = puVar2;
      puStack_340 = puVar2;
      func_0x00010bf20600(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3e0 = &PTR____CFConstantStringClassReference_110dfecb8;
      ppuVar10 = ppuVar12;
      puStack_4c0 = puVar13;
      puStack_338 = puVar13;
      func_0x00010bf20620(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3d8 = &PTR____CFConstantStringClassReference_110dfecd8;
      ppuVar10 = ppuVar12;
      puStack_330 = puVar2;
      func_0x00010bf20640(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3d0 = &PTR____CFConstantStringClassReference_110dfecf8;
      ppuVar10 = ppuVar12;
      puStack_328 = puVar13;
      func_0x00010bf20660(ppuVar12);
      func_0x00010c0df760(puVar3,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3c8 = &PTR____CFConstantStringClassReference_110dfed18;
      ppuVar10 = ppuVar12;
      puStack_320 = puVar3;
      func_0x00010bf20680(ppuVar12);
      func_0x00010c0df760(puVar4,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3c0 = &PTR____CFConstantStringClassReference_110dfed38;
      ppuVar10 = ppuVar12;
      puStack_318 = puVar4;
      func_0x00010bf206a0(ppuVar12);
      func_0x00010c0df760(puVar5,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3b8 = &PTR____CFConstantStringClassReference_110dfed58;
      ppuVar10 = ppuVar12;
      puStack_310 = puVar5;
      func_0x00010bf206c0(ppuVar12);
      func_0x00010c0df760(puVar6,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3b0 = &PTR____CFConstantStringClassReference_110dfed78;
      ppuVar10 = ppuVar12;
      puStack_308 = puVar6;
      func_0x00010bf206e0(ppuVar12);
      func_0x00010c0df760(puVar7,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_3a8 = &PTR____CFConstantStringClassReference_110dfed98;
      ppuVar10 = ppuVar12;
      puStack_300 = puVar7;
      func_0x00010bf205e0();
      _objc_release(ppuVar12);
      func_0x00010c0df760(puVar8,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &puStack_3a0;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_2f8 = puVar8;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar13);
      _objc_release(puVar2);
      _objc_release(puStack_4c0);
      _objc_release(puStack_4b8);
      _objc_release(puStack_4b0);
      _objc_release(puStack_4a8);
      _objc_release(puStack_4a0);
      _objc_release(puStack_498);
      _objc_release(puStack_490);
      _objc_release(puStack_488);
      _objc_release(puStack_480);
      _objc_release(puStack_478);
      _objc_release(puStack_470);
      _objc_release(puStack_468);
      _objc_release(puStack_460);
      _objc_release(puStack_458);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f0) {
        ___stack_chk_fail();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        pcStack_4c8 = FUN_10578823c;
        lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_5e0 = &PTR____CFConstantStringClassReference_110dfe518;
        puStack_520 = puVar4;
        puStack_518 = puVar3;
        puStack_510 = puVar13;
        puStack_508 = puVar2;
        puStack_500 = puVar9;
        ppuStack_4f8 = ppuVar10;
        puStack_4f0 = puVar8;
        puStack_4e8 = puVar7;
        puStack_4e0 = puVar6;
        puStack_4d8 = puVar5;
        ppuStack_4d0 = &ppuStack_290;
        _objc_retain(ppuVar12);
        ppuVar10 = ppuVar12;
        func_0x00010bfb4620(ppuVar12);
        func_0x00010c0df760(puVar11,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5d8 = &PTR____CFConstantStringClassReference_110dfeef8;
        ppuVar10 = ppuVar12;
        puStack_5e8 = puVar11;
        puStack_588 = puVar11;
        func_0x00010bfb4640(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5d0 = &PTR____CFConstantStringClassReference_110dfef18;
        ppuVar10 = ppuVar12;
        puStack_5f0 = puVar13;
        puStack_580 = puVar13;
        func_0x00010bfb4680(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5c8 = &PTR____CFConstantStringClassReference_110dfef38;
        ppuVar10 = ppuVar12;
        puStack_5f8 = puVar2;
        puStack_578 = puVar2;
        func_0x00010bfb46a0(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5c0 = &PTR____CFConstantStringClassReference_110dfef58;
        ppuVar10 = ppuVar12;
        puStack_570 = puVar13;
        func_0x00010bfb46c0(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5b8 = &PTR____CFConstantStringClassReference_110dfef78;
        ppuVar10 = ppuVar12;
        puStack_568 = puVar2;
        func_0x00010bfb46e0(ppuVar12);
        func_0x00010c0df760(puVar3,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5b0 = &PTR____CFConstantStringClassReference_110dfef98;
        ppuVar10 = ppuVar12;
        puStack_560 = puVar3;
        func_0x00010bfb4700(ppuVar12);
        func_0x00010c0df760(puVar4,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5a8 = &PTR____CFConstantStringClassReference_110dfefb8;
        ppuVar10 = ppuVar12;
        puStack_558 = puVar4;
        func_0x00010bfb4720(ppuVar12);
        func_0x00010c0df760(puVar5,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_5a0 = &PTR____CFConstantStringClassReference_110dfefd8;
        ppuVar10 = ppuVar12;
        puStack_550 = puVar5;
        func_0x00010bfb4740(ppuVar12);
        func_0x00010c0df760(puVar6,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_598 = &PTR____CFConstantStringClassReference_110dfeff8;
        ppuVar10 = ppuVar12;
        puStack_548 = puVar6;
        func_0x00010bfb4760(ppuVar12);
        func_0x00010c0df760(puVar7,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_590 = &PTR____CFConstantStringClassReference_110dff018;
        ppuVar10 = ppuVar12;
        puStack_540 = puVar7;
        func_0x00010bfb4660();
        _objc_release(ppuVar12);
        func_0x00010c0df760(puVar8,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = &puStack_588;
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_538 = puVar8;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,&ppuStack_5e0,
                            0xb);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar13);
        _objc_release(puStack_5f8);
        _objc_release(puStack_5f0);
        _objc_release(puStack_5e8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_530) {
          ___stack_chk_fail();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          pcStack_608 = FUN_105788584;
          lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_6a8 = &PTR____CFConstantStringClassReference_110dff038;
          puStack_650 = puVar4;
          puStack_648 = puVar3;
          puStack_640 = puVar2;
          puStack_638 = puVar13;
          puStack_630 = puVar9;
          ppuStack_628 = ppuVar10;
          puStack_620 = puVar8;
          puStack_618 = puVar7;
          ppuStack_610 = &ppuStack_4d0;
          _objc_retain(ppuVar12);
          ppuVar10 = ppuVar12;
          func_0x00010c246100(ppuVar12);
          func_0x00010c0df760(puVar5,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_6a0 = &PTR____CFConstantStringClassReference_110dff058;
          ppuVar10 = ppuVar12;
          puStack_680 = puVar5;
          func_0x00010c246120(ppuVar12);
          func_0x00010c0df760(puVar13,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_698 = &PTR____CFConstantStringClassReference_110dff078;
          ppuVar10 = ppuVar12;
          puStack_678 = puVar13;
          func_0x00010c246140(ppuVar12);
          func_0x00010c0df760(puVar2,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_690 = &PTR____CFConstantStringClassReference_110dff098;
          ppuVar10 = ppuVar12;
          puStack_670 = puVar2;
          func_0x00010c246160(ppuVar12);
          func_0x00010c0df760(puVar3,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_688 = &PTR____CFConstantStringClassReference_110dff0b8;
          ppuVar10 = ppuVar12;
          puStack_668 = puVar3;
          func_0x00010c246180(ppuVar12);
          _objc_release(ppuVar12);
          func_0x00010c0df760(puVar4,param_2,ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = &puStack_680;
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_660 = puVar4;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,
                              &ppuStack_6a8,5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar13);
          _objc_release(puVar5);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_658) {
            ___stack_chk_fail();
            func_0x00010bfbe520();
            if ((uint)ppuVar12 < 0xd) {
              puVar13 = *(undefined **)(&UNK_10ddbd100 + ((ulong)ppuVar12 & 0xffffffff) * 8);
            }
            else {
              puVar13 = (undefined *)0x0;
            }
            return puVar13;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 10578791c; end: 105787c63; +[SCBitmojiFashionDropGarmentHelper _optionIdsFromOuterwearGarment:] */

undefined * FUN_10578791c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  long lStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 **ppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  long lStack_3f0;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined1 **ppuStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dfe538;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ee700(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dfedb8;
  uVar1 = param_3;
  puStack_128 = puVar13;
  puStack_c8 = puVar13;
  func_0x00010c0ee720(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dfedd8;
  uVar1 = param_3;
  puStack_130 = puVar2;
  puStack_c0 = puVar2;
  func_0x00010c0ee760(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dfedf8;
  uVar1 = param_3;
  puStack_138 = puVar13;
  puStack_b8 = puVar13;
  func_0x00010c0ee780(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dfee18;
  uVar1 = param_3;
  puStack_b0 = puVar2;
  func_0x00010c0ee7a0(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dfee38;
  uVar1 = param_3;
  puStack_a8 = puVar13;
  func_0x00010c0ee7c0(param_3);
  func_0x00010c0df760(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dfee58;
  uVar1 = param_3;
  puStack_a0 = puVar3;
  func_0x00010c0ee7e0(param_3);
  func_0x00010c0df760(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110dfee78;
  uVar1 = param_3;
  puStack_98 = puVar4;
  func_0x00010c0ee800(param_3);
  func_0x00010c0df760(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dfee98;
  uVar1 = param_3;
  puStack_90 = puVar5;
  func_0x00010c0ee820(param_3);
  func_0x00010c0df760(puVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dfeeb8;
  uVar1 = param_3;
  puStack_88 = puVar6;
  func_0x00010c0ee840(param_3);
  func_0x00010c0df760(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dfeed8;
  uVar1 = param_3;
  puStack_80 = puVar7;
  func_0x00010c0ee740();
  _objc_release(param_3);
  func_0x00010c0df760(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_c8;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pcStack_148 = FUN_105787c64;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_310 = &PTR____CFConstantStringClassReference_110dfeaf8;
    puStack_1a0 = puVar6;
    puStack_198 = puVar5;
    puStack_190 = puVar4;
    puStack_188 = puVar3;
    puStack_180 = puVar13;
    puStack_178 = puVar2;
    puStack_170 = puVar9;
    uStack_168 = uVar1;
    puStack_160 = puVar8;
    puStack_158 = puVar7;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    ppuVar10 = ppuVar12;
    func_0x00010c274140(ppuVar12);
    func_0x00010c0df760(puVar11,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_308 = &PTR____CFConstantStringClassReference_110dfeb18;
    ppuVar10 = ppuVar12;
    puStack_318 = puVar11;
    puStack_260 = puVar11;
    func_0x00010c274f40(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_300 = &PTR____CFConstantStringClassReference_110dfeb38;
    ppuVar10 = ppuVar12;
    puStack_320 = puVar13;
    puStack_258 = puVar13;
    func_0x00010c274f80(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2f8 = &PTR____CFConstantStringClassReference_110dfeb58;
    ppuVar10 = ppuVar12;
    puStack_328 = puVar2;
    puStack_250 = puVar2;
    func_0x00010c274fa0(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2f0 = &PTR____CFConstantStringClassReference_110dfeb78;
    ppuVar10 = ppuVar12;
    puStack_330 = puVar13;
    puStack_248 = puVar13;
    func_0x00010c274fc0(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2e8 = &PTR____CFConstantStringClassReference_110dfeb98;
    ppuVar10 = ppuVar12;
    puStack_338 = puVar2;
    puStack_240 = puVar2;
    func_0x00010c274fe0(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2e0 = &PTR____CFConstantStringClassReference_110dfebb8;
    ppuVar10 = ppuVar12;
    puStack_340 = puVar13;
    puStack_238 = puVar13;
    func_0x00010c275000(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dfebd8;
    ppuVar10 = ppuVar12;
    puStack_348 = puVar2;
    puStack_230 = puVar2;
    func_0x00010c275020(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2d0 = &PTR____CFConstantStringClassReference_110dfebf8;
    ppuVar10 = ppuVar12;
    puStack_350 = puVar13;
    puStack_228 = puVar13;
    func_0x00010c275040(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2c8 = &PTR____CFConstantStringClassReference_110dfec18;
    ppuVar10 = ppuVar12;
    puStack_358 = puVar2;
    puStack_220 = puVar2;
    func_0x00010c275060(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2c0 = &PTR____CFConstantStringClassReference_110dfec38;
    ppuVar10 = ppuVar12;
    puStack_360 = puVar13;
    puStack_218 = puVar13;
    func_0x00010c274f60(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2b8 = &PTR____CFConstantStringClassReference_110dfec58;
    ppuVar10 = ppuVar12;
    puStack_368 = puVar2;
    puStack_210 = puVar2;
    func_0x00010bf1fec0(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2b0 = &PTR____CFConstantStringClassReference_110dfec78;
    ppuVar10 = ppuVar12;
    puStack_370 = puVar13;
    puStack_208 = puVar13;
    func_0x00010bf205c0(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2a8 = &PTR____CFConstantStringClassReference_110dfec98;
    ppuVar10 = ppuVar12;
    puStack_378 = puVar2;
    puStack_200 = puVar2;
    func_0x00010bf20600(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2a0 = &PTR____CFConstantStringClassReference_110dfecb8;
    ppuVar10 = ppuVar12;
    puStack_380 = puVar13;
    puStack_1f8 = puVar13;
    func_0x00010bf20620(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_298 = &PTR____CFConstantStringClassReference_110dfecd8;
    ppuVar10 = ppuVar12;
    puStack_1f0 = puVar2;
    func_0x00010bf20640(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_290 = &PTR____CFConstantStringClassReference_110dfecf8;
    ppuVar10 = ppuVar12;
    puStack_1e8 = puVar13;
    func_0x00010bf20660(ppuVar12);
    func_0x00010c0df760(puVar3,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_288 = &PTR____CFConstantStringClassReference_110dfed18;
    ppuVar10 = ppuVar12;
    puStack_1e0 = puVar3;
    func_0x00010bf20680(ppuVar12);
    func_0x00010c0df760(puVar4,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_280 = &PTR____CFConstantStringClassReference_110dfed38;
    ppuVar10 = ppuVar12;
    puStack_1d8 = puVar4;
    func_0x00010bf206a0(ppuVar12);
    func_0x00010c0df760(puVar5,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_278 = &PTR____CFConstantStringClassReference_110dfed58;
    ppuVar10 = ppuVar12;
    puStack_1d0 = puVar5;
    func_0x00010bf206c0(ppuVar12);
    func_0x00010c0df760(puVar6,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_270 = &PTR____CFConstantStringClassReference_110dfed78;
    ppuVar10 = ppuVar12;
    puStack_1c8 = puVar6;
    func_0x00010bf206e0(ppuVar12);
    func_0x00010c0df760(puVar7,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_268 = &PTR____CFConstantStringClassReference_110dfed98;
    ppuVar10 = ppuVar12;
    puStack_1c0 = puVar7;
    func_0x00010bf205e0();
    _objc_release(ppuVar12);
    func_0x00010c0df760(puVar8,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &puStack_260;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1b8 = puVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar2);
    _objc_release(puStack_380);
    _objc_release(puStack_378);
    _objc_release(puStack_370);
    _objc_release(puStack_368);
    _objc_release(puStack_360);
    _objc_release(puStack_358);
    _objc_release(puStack_350);
    _objc_release(puStack_348);
    _objc_release(puStack_340);
    _objc_release(puStack_338);
    _objc_release(puStack_330);
    _objc_release(puStack_328);
    _objc_release(puStack_320);
    _objc_release(puStack_318);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pcStack_388 = FUN_10578823c;
      lStack_3f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_4a0 = &PTR____CFConstantStringClassReference_110dfe518;
      puStack_3e0 = puVar4;
      puStack_3d8 = puVar3;
      puStack_3d0 = puVar13;
      puStack_3c8 = puVar2;
      puStack_3c0 = puVar9;
      ppuStack_3b8 = ppuVar10;
      puStack_3b0 = puVar8;
      puStack_3a8 = puVar7;
      puStack_3a0 = puVar6;
      puStack_398 = puVar5;
      ppuStack_390 = &puStack_150;
      _objc_retain(ppuVar12);
      ppuVar10 = ppuVar12;
      func_0x00010bfb4620(ppuVar12);
      func_0x00010c0df760(puVar11,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_498 = &PTR____CFConstantStringClassReference_110dfeef8;
      ppuVar10 = ppuVar12;
      puStack_4a8 = puVar11;
      puStack_448 = puVar11;
      func_0x00010bfb4640(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_490 = &PTR____CFConstantStringClassReference_110dfef18;
      ppuVar10 = ppuVar12;
      puStack_4b0 = puVar13;
      puStack_440 = puVar13;
      func_0x00010bfb4680(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_488 = &PTR____CFConstantStringClassReference_110dfef38;
      ppuVar10 = ppuVar12;
      puStack_4b8 = puVar2;
      puStack_438 = puVar2;
      func_0x00010bfb46a0(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_480 = &PTR____CFConstantStringClassReference_110dfef58;
      ppuVar10 = ppuVar12;
      puStack_430 = puVar13;
      func_0x00010bfb46c0(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_478 = &PTR____CFConstantStringClassReference_110dfef78;
      ppuVar10 = ppuVar12;
      puStack_428 = puVar2;
      func_0x00010bfb46e0(ppuVar12);
      func_0x00010c0df760(puVar3,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_470 = &PTR____CFConstantStringClassReference_110dfef98;
      ppuVar10 = ppuVar12;
      puStack_420 = puVar3;
      func_0x00010bfb4700(ppuVar12);
      func_0x00010c0df760(puVar4,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_468 = &PTR____CFConstantStringClassReference_110dfefb8;
      ppuVar10 = ppuVar12;
      puStack_418 = puVar4;
      func_0x00010bfb4720(ppuVar12);
      func_0x00010c0df760(puVar5,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_460 = &PTR____CFConstantStringClassReference_110dfefd8;
      ppuVar10 = ppuVar12;
      puStack_410 = puVar5;
      func_0x00010bfb4740(ppuVar12);
      func_0x00010c0df760(puVar6,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_458 = &PTR____CFConstantStringClassReference_110dfeff8;
      ppuVar10 = ppuVar12;
      puStack_408 = puVar6;
      func_0x00010bfb4760(ppuVar12);
      func_0x00010c0df760(puVar7,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_450 = &PTR____CFConstantStringClassReference_110dff018;
      ppuVar10 = ppuVar12;
      puStack_400 = puVar7;
      func_0x00010bfb4660();
      _objc_release(ppuVar12);
      func_0x00010c0df760(puVar8,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &puStack_448;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_3f8 = puVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,&ppuStack_4a0,
                          0xb);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar13);
      _objc_release(puStack_4b8);
      _objc_release(puStack_4b0);
      _objc_release(puStack_4a8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f0) {
        ___stack_chk_fail();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        pcStack_4c8 = FUN_105788584;
        lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_568 = &PTR____CFConstantStringClassReference_110dff038;
        puStack_510 = puVar4;
        puStack_508 = puVar3;
        puStack_500 = puVar2;
        puStack_4f8 = puVar13;
        puStack_4f0 = puVar9;
        ppuStack_4e8 = ppuVar10;
        puStack_4e0 = puVar8;
        puStack_4d8 = puVar7;
        ppuStack_4d0 = &ppuStack_390;
        _objc_retain(ppuVar12);
        ppuVar10 = ppuVar12;
        func_0x00010c246100(ppuVar12);
        func_0x00010c0df760(puVar5,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_560 = &PTR____CFConstantStringClassReference_110dff058;
        ppuVar10 = ppuVar12;
        puStack_540 = puVar5;
        func_0x00010c246120(ppuVar12);
        func_0x00010c0df760(puVar13,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_558 = &PTR____CFConstantStringClassReference_110dff078;
        ppuVar10 = ppuVar12;
        puStack_538 = puVar13;
        func_0x00010c246140(ppuVar12);
        func_0x00010c0df760(puVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_550 = &PTR____CFConstantStringClassReference_110dff098;
        ppuVar10 = ppuVar12;
        puStack_530 = puVar2;
        func_0x00010c246160(ppuVar12);
        func_0x00010c0df760(puVar3,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_548 = &PTR____CFConstantStringClassReference_110dff0b8;
        ppuVar10 = ppuVar12;
        puStack_528 = puVar3;
        func_0x00010c246180(ppuVar12);
        _objc_release(ppuVar12);
        func_0x00010c0df760(puVar4,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = &puStack_540;
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_520 = puVar4;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,&ppuStack_568,
                            5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar13);
        _objc_release(puVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_518) {
          ___stack_chk_fail();
          func_0x00010bfbe520();
          if ((uint)ppuVar12 < 0xd) {
            puVar13 = *(undefined **)(&UNK_10ddbd100 + ((ulong)ppuVar12 & 0xffffffff) * 8);
          }
          else {
            puVar13 = (undefined *)0x0;
          }
          return puVar13;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 105787c64; end: 10578823b; +[SCBitmojiFashionDropGarmentHelper _optionIdsFromOnePieceGarment:] */

undefined * FUN_105787c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined1 **ppuStack_390;
  code *pcStack_388;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dfeaf8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c274140(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dfeb18;
  uVar1 = param_3;
  puStack_1d8 = puVar13;
  puStack_120 = puVar13;
  func_0x00010c274f40(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dfeb38;
  uVar1 = param_3;
  puStack_1e0 = puVar2;
  puStack_118 = puVar2;
  func_0x00010c274f80(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dfeb58;
  uVar1 = param_3;
  puStack_1e8 = puVar13;
  puStack_110 = puVar13;
  func_0x00010c274fa0(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110dfeb78;
  uVar1 = param_3;
  puStack_1f0 = puVar2;
  puStack_108 = puVar2;
  func_0x00010c274fc0(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dfeb98;
  uVar1 = param_3;
  puStack_1f8 = puVar13;
  puStack_100 = puVar13;
  func_0x00010c274fe0(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110dfebb8;
  uVar1 = param_3;
  puStack_200 = puVar2;
  puStack_f8 = puVar2;
  func_0x00010c275000(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110dfebd8;
  uVar1 = param_3;
  puStack_208 = puVar13;
  puStack_f0 = puVar13;
  func_0x00010c275020(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110dfebf8;
  uVar1 = param_3;
  puStack_210 = puVar2;
  puStack_e8 = puVar2;
  func_0x00010c275040(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110dfec18;
  uVar1 = param_3;
  puStack_218 = puVar13;
  puStack_e0 = puVar13;
  func_0x00010c275060(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110dfec38;
  uVar1 = param_3;
  puStack_220 = puVar2;
  puStack_d8 = puVar2;
  func_0x00010c274f60(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110dfec58;
  uVar1 = param_3;
  puStack_228 = puVar13;
  puStack_d0 = puVar13;
  func_0x00010bf1fec0(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110dfec78;
  uVar1 = param_3;
  puStack_230 = puVar2;
  puStack_c8 = puVar2;
  func_0x00010bf205c0(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110dfec98;
  uVar1 = param_3;
  puStack_238 = puVar13;
  puStack_c0 = puVar13;
  func_0x00010bf20600(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110dfecb8;
  uVar1 = param_3;
  puStack_240 = puVar2;
  puStack_b8 = puVar2;
  func_0x00010bf20620(param_3);
  func_0x00010c0df760(puVar13,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110dfecd8;
  uVar1 = param_3;
  puStack_b0 = puVar13;
  func_0x00010bf20640(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110dfecf8;
  uVar1 = param_3;
  puStack_a8 = puVar2;
  func_0x00010bf20660(param_3);
  func_0x00010c0df760(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110dfed18;
  uVar1 = param_3;
  puStack_a0 = puVar3;
  func_0x00010bf20680(param_3);
  func_0x00010c0df760(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110dfed38;
  uVar1 = param_3;
  puStack_98 = puVar4;
  func_0x00010bf206a0(param_3);
  func_0x00010c0df760(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110dfed58;
  uVar1 = param_3;
  puStack_90 = puVar5;
  func_0x00010bf206c0(param_3);
  func_0x00010c0df760(puVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dfed78;
  uVar1 = param_3;
  puStack_88 = puVar6;
  func_0x00010bf206e0(param_3);
  func_0x00010c0df760(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dfed98;
  uVar1 = param_3;
  puStack_80 = puVar7;
  func_0x00010bf205e0();
  _objc_release(param_3);
  func_0x00010c0df760(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_120;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(puStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1f8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pcStack_248 = FUN_10578823c;
    lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_360 = &PTR____CFConstantStringClassReference_110dfe518;
    puStack_2a0 = puVar4;
    puStack_298 = puVar3;
    puStack_290 = puVar2;
    puStack_288 = puVar13;
    puStack_280 = puVar9;
    uStack_278 = uVar1;
    puStack_270 = puVar8;
    puStack_268 = puVar7;
    puStack_260 = puVar6;
    puStack_258 = puVar5;
    puStack_250 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    ppuVar10 = ppuVar12;
    func_0x00010bfb4620(ppuVar12);
    func_0x00010c0df760(puVar11,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_358 = &PTR____CFConstantStringClassReference_110dfeef8;
    ppuVar10 = ppuVar12;
    puStack_368 = puVar11;
    puStack_308 = puVar11;
    func_0x00010bfb4640(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_350 = &PTR____CFConstantStringClassReference_110dfef18;
    ppuVar10 = ppuVar12;
    puStack_370 = puVar13;
    puStack_300 = puVar13;
    func_0x00010bfb4680(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_348 = &PTR____CFConstantStringClassReference_110dfef38;
    ppuVar10 = ppuVar12;
    puStack_378 = puVar2;
    puStack_2f8 = puVar2;
    func_0x00010bfb46a0(ppuVar12);
    func_0x00010c0df760(puVar13,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_340 = &PTR____CFConstantStringClassReference_110dfef58;
    ppuVar10 = ppuVar12;
    puStack_2f0 = puVar13;
    func_0x00010bfb46c0(ppuVar12);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_338 = &PTR____CFConstantStringClassReference_110dfef78;
    ppuVar10 = ppuVar12;
    puStack_2e8 = puVar2;
    func_0x00010bfb46e0(ppuVar12);
    func_0x00010c0df760(puVar3,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_330 = &PTR____CFConstantStringClassReference_110dfef98;
    ppuVar10 = ppuVar12;
    puStack_2e0 = puVar3;
    func_0x00010bfb4700(ppuVar12);
    func_0x00010c0df760(puVar4,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_328 = &PTR____CFConstantStringClassReference_110dfefb8;
    ppuVar10 = ppuVar12;
    puStack_2d8 = puVar4;
    func_0x00010bfb4720(ppuVar12);
    func_0x00010c0df760(puVar5,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_320 = &PTR____CFConstantStringClassReference_110dfefd8;
    ppuVar10 = ppuVar12;
    puStack_2d0 = puVar5;
    func_0x00010bfb4740(ppuVar12);
    func_0x00010c0df760(puVar6,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_318 = &PTR____CFConstantStringClassReference_110dfeff8;
    ppuVar10 = ppuVar12;
    puStack_2c8 = puVar6;
    func_0x00010bfb4760(ppuVar12);
    func_0x00010c0df760(puVar7,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_310 = &PTR____CFConstantStringClassReference_110dff018;
    ppuVar10 = ppuVar12;
    puStack_2c0 = puVar7;
    func_0x00010bfb4660();
    _objc_release(ppuVar12);
    func_0x00010c0df760(puVar8,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &puStack_308;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_2b8 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,&ppuStack_360,0xb)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar13);
    _objc_release(puStack_378);
    _objc_release(puStack_370);
    _objc_release(puStack_368);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b0) {
      ___stack_chk_fail();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pcStack_388 = FUN_105788584;
      lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_428 = &PTR____CFConstantStringClassReference_110dff038;
      puStack_3d0 = puVar4;
      puStack_3c8 = puVar3;
      puStack_3c0 = puVar2;
      puStack_3b8 = puVar13;
      puStack_3b0 = puVar9;
      ppuStack_3a8 = ppuVar10;
      puStack_3a0 = puVar8;
      puStack_398 = puVar7;
      ppuStack_390 = &puStack_250;
      _objc_retain(ppuVar12);
      ppuVar10 = ppuVar12;
      func_0x00010c246100(ppuVar12);
      func_0x00010c0df760(puVar5,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_420 = &PTR____CFConstantStringClassReference_110dff058;
      ppuVar10 = ppuVar12;
      puStack_400 = puVar5;
      func_0x00010c246120(ppuVar12);
      func_0x00010c0df760(puVar13,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_418 = &PTR____CFConstantStringClassReference_110dff078;
      ppuVar10 = ppuVar12;
      puStack_3f8 = puVar13;
      func_0x00010c246140(ppuVar12);
      func_0x00010c0df760(puVar2,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_410 = &PTR____CFConstantStringClassReference_110dff098;
      ppuVar10 = ppuVar12;
      puStack_3f0 = puVar2;
      func_0x00010c246160(ppuVar12);
      func_0x00010c0df760(puVar3,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_408 = &PTR____CFConstantStringClassReference_110dff0b8;
      ppuVar10 = ppuVar12;
      puStack_3e8 = puVar3;
      func_0x00010c246180(ppuVar12);
      _objc_release(ppuVar12);
      func_0x00010c0df760(puVar4,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &puStack_400;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_3e0 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar12,&ppuStack_428,5)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar13);
      _objc_release(puVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
        ___stack_chk_fail();
        func_0x00010bfbe520();
        if ((uint)ppuVar12 < 0xd) {
          puVar13 = *(undefined **)(&UNK_10ddbd100 + ((ulong)ppuVar12 & 0xffffffff) * 8);
        }
        else {
          puVar13 = (undefined *)0x0;
        }
        return puVar13;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 10578823c; end: 105788583; +[SCBitmojiFashionDropGarmentHelper _optionIdsFromFootwearGarment:] */

undefined * FUN_10578823c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dfe518;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb4620(param_3);
  func_0x00010c0df760(puVar12,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dfeef8;
  uVar1 = param_3;
  puStack_128 = puVar12;
  puStack_c8 = puVar12;
  func_0x00010bfb4640(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dfef18;
  uVar1 = param_3;
  puStack_130 = puVar2;
  puStack_c0 = puVar2;
  func_0x00010bfb4680(param_3);
  func_0x00010c0df760(puVar12,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dfef38;
  uVar1 = param_3;
  puStack_138 = puVar12;
  puStack_b8 = puVar12;
  func_0x00010bfb46a0(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dfef58;
  uVar1 = param_3;
  puStack_b0 = puVar2;
  func_0x00010bfb46c0(param_3);
  func_0x00010c0df760(puVar12,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dfef78;
  uVar1 = param_3;
  puStack_a8 = puVar12;
  func_0x00010bfb46e0(param_3);
  func_0x00010c0df760(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dfef98;
  uVar1 = param_3;
  puStack_a0 = puVar3;
  func_0x00010bfb4700(param_3);
  func_0x00010c0df760(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110dfefb8;
  uVar1 = param_3;
  puStack_98 = puVar4;
  func_0x00010bfb4720(param_3);
  func_0x00010c0df760(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dfefd8;
  uVar1 = param_3;
  puStack_90 = puVar5;
  func_0x00010bfb4740(param_3);
  func_0x00010c0df760(puVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110dfeff8;
  uVar1 = param_3;
  puStack_88 = puVar6;
  func_0x00010bfb4760(param_3);
  func_0x00010c0df760(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dff018;
  uVar1 = param_3;
  puStack_80 = puVar7;
  func_0x00010bfb4660();
  _objc_release(param_3);
  func_0x00010c0df760(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_c8;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar11,&ppuStack_120,0xb);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pcStack_148 = FUN_105788584;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dff038;
    puStack_190 = puVar4;
    puStack_188 = puVar3;
    puStack_180 = puVar12;
    puStack_178 = puVar2;
    puStack_170 = puVar9;
    uStack_168 = uVar1;
    puStack_160 = puVar8;
    puStack_158 = puVar7;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar11);
    ppuVar10 = ppuVar11;
    func_0x00010c246100(ppuVar11);
    func_0x00010c0df760(puVar5,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110dff058;
    ppuVar10 = ppuVar11;
    puStack_1c0 = puVar5;
    func_0x00010c246120(ppuVar11);
    func_0x00010c0df760(puVar12,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dff078;
    ppuVar10 = ppuVar11;
    puStack_1b8 = puVar12;
    func_0x00010c246140(ppuVar11);
    func_0x00010c0df760(puVar2,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dff098;
    ppuVar10 = ppuVar11;
    puStack_1b0 = puVar2;
    func_0x00010c246160(ppuVar11);
    func_0x00010c0df760(puVar3,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dff0b8;
    ppuVar10 = ppuVar11;
    puStack_1a8 = puVar3;
    func_0x00010c246180(ppuVar11);
    _objc_release(ppuVar11);
    func_0x00010c0df760(puVar4,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &puStack_1c0;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1a0 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar11,&ppuStack_1e8,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      func_0x00010bfbe520();
      if ((uint)ppuVar11 < 0xd) {
        puVar12 = *(undefined **)(&UNK_10ddbd100 + ((ulong)ppuVar11 & 0xffffffff) * 8);
      }
      else {
        puVar12 = (undefined *)0x0;
      }
      return puVar12;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 105788584; end: 105788757; +[SCBitmojiFashionDropGarmentHelper _optionIdsFromSockGarment:] */

undefined * FUN_105788584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dff038;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c246100(param_3);
  func_0x00010c0df760(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dff058;
  uVar1 = param_3;
  puStack_80 = puVar8;
  func_0x00010c246120(param_3);
  func_0x00010c0df760(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dff078;
  uVar1 = param_3;
  puStack_78 = puVar2;
  func_0x00010c246140(param_3);
  func_0x00010c0df760(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dff098;
  uVar1 = param_3;
  puStack_70 = puVar3;
  func_0x00010c246160(param_3);
  func_0x00010c0df760(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dff0b8;
  uVar1 = param_3;
  puStack_68 = puVar4;
  func_0x00010c246180(param_3);
  _objc_release(param_3);
  func_0x00010c0df760(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_80;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar7,&ppuStack_a8,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010bfbe520();
  if ((uint)ppuVar7 < 0xd) {
    puVar8 = *(undefined **)(&UNK_10ddbd100 + ((ulong)ppuVar7 & 0xffffffff) * 8);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  return puVar8;
}



/* Entry: 105788758; end: 10578878b; +[SCBitmojiFashionDropGarmentHelper garmentTypeFromFashionGarmentProto:] */

undefined8 FUN_105788758(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfbe520();
  if ((uint)param_3 < 0xd) {
    uVar1 = *(undefined8 *)(&UNK_10ddbd100 + (param_3 & 0xffffffff) * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10578878c; end: 1057888ab; -[SCBitmojiFashionDropServiceProvider _fashionDropFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578878c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_112729458;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bdf68;
  _objc_alloc(PTR_PTR_1126bdf68);
  lVar1 = param_1 + _DAT_11272945c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5aa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058da0(puVar5,param_2,lVar2,lVar4,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057888ac; end: 10578898f; -[SCBitmojiFashionDropServiceProvider _logger] */

void FUN_1057888ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdf70;
  _objc_alloc(PTR_PTR_1126bdf70);
  func_0x00010c018080();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105788990; end: 1057889cf;  */

void FUN_105788990(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be245c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057889d0; end: 105788a53; -[SCBitmojiFashionDropServiceProvider _graphene] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057889d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112729460;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105788a54; end: 105788b37; -[SCBitmojiFashionDropServiceProvider provide] */

void FUN_105788a54(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdf78;
  _objc_alloc(PTR_PTR_1126bdf78);
  func_0x00010c011740();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105788b38; end: 105788b77;  */

void FUN_105788b38(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0e5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105788b78; end: 105788bc7; -[SCBitmojiFashionDropServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105788b78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729460);
  _objc_destroyWeak(param_1 + _DAT_11272945c);
  _objc_destroyWeak(param_1 + _DAT_112729458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729464);
  return;
}



/* Entry: 105788bc8; end: 105788c3b; -[SCBitmojiFashionDropsOpsMetricsLogger initWithGraphene:] */

undefined1 * FUN_105788bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea288;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105788c3c; end: 105788d63; -[SCBitmojiFashionDropsOpsMetricsLogger logGetDropSuccessForId:didMakeRequest:] */

void FUN_105788c3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bdf80;
  func_0x00010bfc4fe0(PTR_PTR_1126bdf80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dff0f8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dff118,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105788d64; end: 105788eaf; -[SCBitmojiFashionDropsOpsMetricsLogger logGetDropFailureForId:error:] */

void FUN_105788d64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bdf80;
  _objc_retain(param_4);
  func_0x00010bfc4fc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dff0f8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf3ec40();
  _objc_release(param_4);
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daeeb8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105788eb0; end: 105788ebb; -[SCBitmojiFashionDropsOpsMetricsLogger .cxx_destruct] */

void FUN_105788eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


