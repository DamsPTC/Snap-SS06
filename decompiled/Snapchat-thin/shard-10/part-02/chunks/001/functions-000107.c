/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bb767c; end: 107bb7687; -[SCAdPixelMatchingScriptController setJavaScriptExecutionDelegate:] */

void FUN_107bb767c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107bb7688; end: 107bb768f; -[SCAdPixelMatchingScriptController serveItemId] */

undefined8 FUN_107bb7688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107bb7690; end: 107bb7697; -[SCAdPixelMatchingScriptController pixelId] */

undefined8 FUN_107bb7690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107bb7698; end: 107bb76e7; -[SCAdPixelMatchingScriptController .cxx_destruct] */

void FUN_107bb7698(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bb76e8; end: 107bb786f; -[SCAdPixelRequestInterceptor initWithHTTPMetadataService:httpRequestModifier:grapheneRegistry:adConfigProvider:] */

undefined1 *
FUN_107bb76e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fa190;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c02e8;
    _objc_alloc();
    func_0x00010bff1060();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bb7870; end: 107bb78ef; -[SCAdPixelRequestInterceptor shouldInterceptURL:] */

undefined8 FUN_107bb7870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0fcc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4bb00(param_3,param_2,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107bb78f0; end: 107bb79b3; -[SCAdPixelRequestInterceptor postWebviewInfo:URL:] */

void FUN_107bb78f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107bb79b4;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bb79b4; end: 107bb79c3;  */

void FUN_107bb79b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be769f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__postWebviewInfo_URL__11257b418,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107bb79c4; end: 107bb7d4b; -[SCAdPixelRequestInterceptor _postWebviewInfo:URL:] */

void FUN_107bb79c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126d6e80;
  _objc_opt_new();
  uVar6 = param_4;
  func_0x00010c0fcdc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc0e0(puVar3);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c15ed20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  func_0x00010c2a4440(param_4);
  func_0x00010beeac00(param_2);
  puVar5 = puVar3;
  func_0x00010c225160();
  iVar2 = (int)puVar5;
  func_0x00010848bafc();
  if (iVar2 != -0x4524111) {
    func_0x00010c16af00(puVar3);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bfc2660(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169460(puVar3);
  _objc_release(uVar6);
  puVar5 = puVar3;
  func_0x00010c1d6a00(puVar3);
  func_0x00010848b89c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6a20(puVar3);
  _objc_release(puVar5);
  func_0x00010c1d66a0(puVar3);
  func_0x00010bf91200(PTR_PTR_1126b8c98);
  func_0x00010c1b0560(puVar3);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010848b980(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar3);
  puVar5 = PTR_PTR_1126b8c98;
  func_0x00010bf91200();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb1f78;
  if ((int)puVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb1f58;
  }
  _objc_retain(ppuVar1);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf225e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(uVar7);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  _objc_initWeak(auStack_78,param_2);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_1;
  func_0x00010c25f600(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107bb7d4c; end: 107bb7d4f;  */

void FUN_107bb7d4c(void)

{
  return;
}



/* Entry: 107bb7d50; end: 107bb7dbb;  */

void FUN_107bb7d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2d2e0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb7dbc; end: 107bb7dcb; -[SCAdPixelRequestInterceptor _webViewType:] */

int FUN_107bb7dbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 107bb7dcc; end: 107bb803b; -[SCAdPixelRequestInterceptor _handleOnCompleteWithResponse:error:requestStartTimestamp:] */

void FUN_107bb7dcc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126afec0;
  dVar8 = param_1;
  _objc_retain(param_4);
  func_0x00010bf604e0(puVar1);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcac0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5 == 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(dVar8 - param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcae0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5 == 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_4;
  func_0x00010c252ee0(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar1,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110f24938,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107bb803c; end: 107bb809b; -[SCAdPixelRequestInterceptor .cxx_destruct] */

void FUN_107bb803c(long param_1)

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



/* Entry: 107bb809c; end: 107bb81a7; -[SCAdPixelServeItemSyncManager initWithNetworkServices:grapheneRegistry:] */

undefined1 *
FUN_107bb809c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fa198;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bb81a8; end: 107bb8343; -[SCAdPixelServeItemSyncManager syncServeItemWithServeItemId:pixelId:firstPartyCookieId:] */

void FUN_107bb81a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c0fcd40(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bb8344; end: 107bb837b;  */

void FUN_107bb8344(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bb837c; end: 107bb8683; -[SCAdPixelServeItemSyncManager _syncServeItemWithServeItemId:pixelId:firstPartyCookieId:] */

void FUN_107bb837c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c04e820();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    func_0x00010c11d4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    func_0x00010c11d4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    puVar6 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    func_0x00010c11d4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    func_0x00010c1e6460(puVar2);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bfe4d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bdc2b80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf225e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    _objc_initWeak(auStack_78,param_2);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bfe4c00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 8);
    func_0x00010c11de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_78);
    uStack_80 = param_1;
    func_0x00010c25f600(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107bb8684; end: 107bb8687;  */

void FUN_107bb8684(void)

{
  return;
}



/* Entry: 107bb8688; end: 107bb86f3;  */

void FUN_107bb8688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2cc80(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb86f4; end: 107bb8963; -[SCAdPixelServeItemSyncManager _handleNetworkResponse:error:requestStartTimestamp:] */

void FUN_107bb86f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126afec0;
  dVar8 = param_1;
  _objc_retain(param_4);
  func_0x00010bf604e0(puVar1);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcd80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5 == 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(dVar8 - param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcda0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5 == 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_4;
  func_0x00010c252ee0(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar1,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110f24938,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107bb8964; end: 107bb8a1b; -[SCAdPixelServeItemSyncManager .cxx_destruct] */

void FUN_107bb8964(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bb8a1c; end: 107bb8a27;  */

bool FUN_107bb8a1c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 107bb8a28; end: 107bb8a8f; +[WebviewInfo descriptor] */

void FUN_107bb8a28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b74390,
                        &PTR____CFConstantStringClassReference_110eb2018,&PTR_DAT_113242120,
                        &PTR_DAT_113242138,10,0x48,0x1c);
    puRam0000000113727740 = puVar1;
  }
  return;
}



/* Entry: 107bb8a90; end: 107bb8b33; -[SCSafeBrowsingWarningView initWithDelegate:urlType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107bb8a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa1a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276b934),param_3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276b938) = param_4;
    func_0x00010c09c840(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bb8b34; end: 107bb921b; -[SCSafeBrowsingWarningView loadWarningView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb8b34(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb2038;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb2038,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar1 = PTR_PTR_1126d6e88;
  func_0x00010bf25ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(puVar4);
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbc2f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc2f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126d6e88;
  func_0x00010bf25ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  puVar6 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(puVar6);
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  func_0x00010befbb60(param_1);
  _objc_retain(puVar4);
  func_0x00010c0bbfc0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  func_0x00010befbb60(puVar6);
  _objc_retain(puVar6);
  func_0x00010c0bbfc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb2058;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb2058,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar8);
  _objc_release(ppuVar2);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4041800000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar8);
  _objc_release(puVar9);
  func_0x00010c213040(puVar8);
  func_0x00010befbb60(puVar7);
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  func_0x00010c0bbfc0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb2078;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb2078,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar10);
  _objc_release(ppuVar2);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4036000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar10);
  _objc_release(puVar9);
  func_0x00010c213040(puVar10);
  func_0x00010befbb60(puVar7);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  func_0x00010c0bbfc0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar11);
  _objc_release(puVar9);
  func_0x00010befbb60(puVar7);
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  func_0x00010c0bbfc0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  lVar12 = (long)_DAT_11276b93c;
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar9;
  _objc_release(uVar13);
  func_0x00010c28c320(param_1);
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar13);
  _objc_release(puVar9);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar12));
  func_0x00010befbb60(puVar7);
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  _objc_retain(puVar11);
  _objc_retain(puVar7);
  func_0x00010c0bbfc0(uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 107bb921c; end: 107bb95e3;  */

void FUN_107bb921c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0,0x4032000000000000,0x4032000000000000,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0,0,0,0x4014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb95e4; end: 107bb973b;  */

void FUN_107bb95e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb973c; end: 107bb9803;  */

void FUN_107bb973c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb9804; end: 107bb9aff;  */

void FUN_107bb9804(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4049000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb9b00; end: 107bb9e53;  */

void FUN_107bb9b00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb9e54; end: 107bb9ecf; -[SCSafeBrowsingWarningView updateWarningViewForUrlType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb9e54(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  *(long *)(param_1 + _DAT_11276b938) = param_3;
  lVar2 = *(long *)(param_1 + _DAT_11276b93c);
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb20b8;
    if (param_3 != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb20d8;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 107bb9ed0; end: 107bb9f33; -[SCSafeBrowsingWarningView goBackFromSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb9ed0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b934;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfcd2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107bb9f34; end: 107bb9f97; -[SCSafeBrowsingWarningView learnMoreFromSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb9f34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b934;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010c08e0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107bb9f98; end: 107bb9fd3; -[SCSafeBrowsingWarningView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb9f98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b93c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276b934);
  return;
}



/* Entry: 107bb9fd4; end: 107bba07b;  */

void FUN_107bb9fd4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb20f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb20f8,
                      &PTR____CFConstantStringClassReference_110eb2118,0);
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



/* Entry: 107bba07c; end: 107bba13f; -[SCWebBrowsingAdobeAnalyticsScript initWithDelegate:adobeScriptPathRegex:adobePingPathRegex:] */

undefined1 *
FUN_107bba07c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fa1a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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



/* Entry: 107bba140; end: 107bba197; -[SCWebBrowsingAdobeAnalyticsScript injectedJavaScript] */

void FUN_107bba140(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb2218);
  return;
}



/* Entry: 107bba198; end: 107bba203; -[SCWebBrowsingAdobeAnalyticsScript nativeCallbackNames] */

undefined * FUN_107bba198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb21f8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 107bba204; end: 107bba20b; -[SCWebBrowsingAdobeAnalyticsScript injectionTime] */

undefined8 FUN_107bba204(void)

{
  return 0;
}



/* Entry: 107bba20c; end: 107bba213; -[SCWebBrowsingAdobeAnalyticsScript forMainFrameOnly] */

undefined8 FUN_107bba20c(void)

{
  return 0;
}



/* Entry: 107bba214; end: 107bba30f; -[SCWebBrowsingAdobeAnalyticsScript userContentController:didReceiveScriptMessage:] */

void FUN_107bba214(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc1558);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010befdd00();
        _objc_release(param_1);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bba310; end: 107bba327; -[SCWebBrowsingAdobeAnalyticsScript javaScriptExecutionDelegate] */

void FUN_107bba310(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bba328; end: 107bba333; -[SCWebBrowsingAdobeAnalyticsScript setJavaScriptExecutionDelegate:] */

void FUN_107bba328(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107bba334; end: 107bba373; -[SCWebBrowsingAdobeAnalyticsScript .cxx_destruct] */

void FUN_107bba334(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107bba374; end: 107bba437; -[SCWebBrowsingDynamicScript initWithDelegate:script:config:] */

undefined1 *
FUN_107bba374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fa1b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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



/* Entry: 107bba438; end: 107bba5a7; -[SCWebBrowsingDynamicScript userContentController:didReceiveScriptMessage:] */

void FUN_107bba438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  if ((int)uVar2 == 0) goto LAB_107bba588;
  uVar1 = param_4;
  func_0x00010bf1e9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf649c0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lStack_48 = 0;
  puVar4 = PTR_PTR_1126d6e90;
  func_0x00010c0f40e0(PTR_PTR_1126d6e90,param_2,puVar3,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_48 == 0) {
    puVar5 = puVar4;
    func_0x00010c27df40();
    if ((int)puVar5 == 2) {
      puVar5 = puVar4;
      func_0x00010bf11f20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be26220(param_1,param_2,puVar5);
    }
    else {
      puVar5 = puVar4;
      func_0x00010c27df40();
      if ((int)puVar5 != 3) goto LAB_107bba578;
      puVar5 = (undefined *)(param_1 + 8);
      _objc_loadWeakRetained(puVar5);
      puVar6 = puVar4;
      func_0x00010bdc2fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd3060(puVar5,param_2,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
  }
LAB_107bba578:
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107bba588:
  _objc_release(param_4);
  return;
}



/* Entry: 107bba5a8; end: 107bba5af; -[SCWebBrowsingDynamicScript forMainFrameOnly] */

undefined8 FUN_107bba5a8(void)

{
  return 0;
}



/* Entry: 107bba5b0; end: 107bba613; -[SCWebBrowsingDynamicScript injectedJavaScript] */

void FUN_107bba5b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c08fa60();
  uVar2 = uVar3;
  if (lVar1 != 0) {
    func_0x00010c25cfc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110eb2258,
                        *(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107bba614; end: 107bba61b; -[SCWebBrowsingDynamicScript injectionTime] */

undefined8 FUN_107bba614(void)

{
  return 0;
}



/* Entry: 107bba61c; end: 107bba687; -[SCWebBrowsingDynamicScript nativeCallbackNames] */

void FUN_107bba61c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar4 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb2238;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar4);
  puVar2 = (undefined1 *)pppuVar4;
  func_0x00010bf9a0a0();
  puVar3 = (undefined1 *)pppuVar4;
  if ((int)puVar2 == 1) {
    puVar1 = puVar1 + 8;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bfb5720(pppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd04c0(puVar1,param_2,puVar3);
  }
  else {
    puVar2 = (undefined1 *)pppuVar4;
    func_0x00010bf9a0a0();
    if ((int)puVar2 == 2) {
      puVar1 = puVar1 + 8;
      _objc_loadWeakRetained(puVar1);
      func_0x00010bfb37a0(pppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd04e0(puVar1,param_2,puVar3);
    }
    else {
      puVar2 = (undefined1 *)pppuVar4;
      func_0x00010bf9a0a0();
      if ((int)puVar2 == 3) {
        puVar1 = puVar1 + 8;
        _objc_loadWeakRetained(puVar1);
        func_0x00010c25f9a0(pppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd0500(puVar1,param_2,puVar3);
      }
      else {
        puVar2 = (undefined1 *)pppuVar4;
        func_0x00010bf9a0a0();
        if ((int)puVar2 != 4) goto LAB_107bba7b4;
        puVar1 = puVar1 + 8;
        _objc_loadWeakRetained(puVar1);
        func_0x00010bf1e820(pppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd04a0(puVar1,param_2,puVar3);
      }
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_107bba7b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar4);
  return;
}



/* Entry: 107bba688; end: 107bba7c7; -[SCWebBrowsingDynamicScript _handleAutofillEvent:] */

void FUN_107bba688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf9a0a0();
  uVar2 = param_3;
  if ((int)uVar1 == 1) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb5720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd04c0(param_1,param_2,uVar2);
  }
  else {
    uVar1 = param_3;
    func_0x00010bf9a0a0();
    if ((int)uVar1 == 2) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfb37a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd04e0(param_1,param_2,uVar2);
    }
    else {
      uVar1 = param_3;
      func_0x00010bf9a0a0();
      if ((int)uVar1 == 3) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010c25f9a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd0500(param_1,param_2,uVar2);
      }
      else {
        uVar1 = param_3;
        func_0x00010bf9a0a0();
        if ((int)uVar1 != 4) goto LAB_107bba7b4;
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf1e820(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd04a0(param_1,param_2,uVar2);
      }
    }
  }
  _objc_release(uVar2);
  _objc_release(param_1);
LAB_107bba7b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bba7c8; end: 107bba7df; -[SCWebBrowsingDynamicScript javaScriptExecutionDelegate] */

void FUN_107bba7c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bba7e0; end: 107bba7eb; -[SCWebBrowsingDynamicScript setJavaScriptExecutionDelegate:] */

void FUN_107bba7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107bba7ec; end: 107bba82b; -[SCWebBrowsingDynamicScript .cxx_destruct] */

void FUN_107bba7ec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107bba82c; end: 107bba897; -[SCWebBrowsingErrorScript initWithDelegate:] */

undefined1 * FUN_107bba82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa1b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bba898; end: 107bba93b; -[SCWebBrowsingErrorScript userContentController:didReceiveScriptMessage:] */

void FUN_107bba898(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a47a0();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bba93c; end: 107bba943; -[SCWebBrowsingErrorScript forMainFrameOnly] */

undefined8 FUN_107bba93c(void)

{
  return 1;
}



/* Entry: 107bba944; end: 107bba97b; -[SCWebBrowsingErrorScript injectedJavaScript] */

void FUN_107bba944(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb2298);
  return;
}



/* Entry: 107bba97c; end: 107bba983; -[SCWebBrowsingErrorScript injectionTime] */

undefined8 FUN_107bba97c(void)

{
  return 0;
}



/* Entry: 107bba984; end: 107bba9ef; -[SCWebBrowsingErrorScript nativeCallbackNames] */

void FUN_107bba984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb2278;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bba9f0; end: 107bbaa07; -[SCWebBrowsingErrorScript javaScriptExecutionDelegate] */

void FUN_107bba9f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbaa08; end: 107bbaa13; -[SCWebBrowsingErrorScript setJavaScriptExecutionDelegate:] */

void FUN_107bbaa08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107bbaa14; end: 107bbaa3b; -[SCWebBrowsingErrorScript .cxx_destruct] */

void FUN_107bbaa14(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107bbaa3c; end: 107bbaae3; -[SCWebBrowsingGhostWriterScript initWithScript:configJson:] */

undefined1 *
FUN_107bbaa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa1c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bbaae4; end: 107bbab0b; -[SCWebBrowsingGhostWriterScript injectedJavaScript] */

void FUN_107bbaae4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bbab0c; end: 107bbab7f; -[SCWebBrowsingGhostWriterScript nativeCallbackNames] */

undefined * FUN_107bbab0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb22b8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb22d8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_28,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 107bbab80; end: 107bbab87; -[SCWebBrowsingGhostWriterScript injectionTime] */

undefined8 FUN_107bbab80(void)

{
  return 0;
}



/* Entry: 107bbab88; end: 107bbab8f; -[SCWebBrowsingGhostWriterScript forMainFrameOnly] */

undefined8 FUN_107bbab88(void)

{
  return 0;
}



/* Entry: 107bbab90; end: 107bbac1b; -[SCWebBrowsingGhostWriterScript userContentController:didReceiveScriptMessage:] */

void FUN_107bbab90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb22d8);
    if ((int)uVar2 != 0) {
      func_0x00010be24f60(param_1,param_2,param_4);
    }
  }
  else {
    func_0x00010be839a0(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bbac1c; end: 107bbacbf; -[SCWebBrowsingGhostWriterScript _provideConfigIfAvailable] */

void FUN_107bbac1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb22f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c085400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf999e0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107bbacc0; end: 107bbadd3; -[SCWebBrowsingGhostWriterScript _handleASMSignalCollectMessage:] */

void FUN_107bbacc0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_48;
  
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    lStack_48 = 0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar1,0,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_48 == 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      puVar3 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbf1f8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110ddda18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf79360(param_1,param_2,puVar3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_1);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107bbadd4; end: 107bbadeb; -[SCWebBrowsingGhostWriterScript javaScriptExecutionDelegate] */

void FUN_107bbadd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbadec; end: 107bbadf7; -[SCWebBrowsingGhostWriterScript setJavaScriptExecutionDelegate:] */

void FUN_107bbadec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107bbadf8; end: 107bbae0f; -[SCWebBrowsingGhostWriterScript delegate] */

void FUN_107bbadf8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbae10; end: 107bbae1b; -[SCWebBrowsingGhostWriterScript setDelegate:] */

void FUN_107bbae10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107bbae1c; end: 107bbae5b; -[SCWebBrowsingGhostWriterScript .cxx_destruct] */

void FUN_107bbae1c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bbae5c; end: 107bbb277; -[SCWebBrowsingJavaScriptBridge initWithScriptControllers:webviewConfiguration:grapheneRegistry:enableDefaultClientWorld:] */

undefined8 *
FUN_107bbae5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             int param_6)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 *puVar19;
  undefined *unaff_x26;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *apuStack_328 [16];
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 *puStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined *puStack_220;
  long lStack_218;
  int iStack_20c;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_20c = param_6;
  _objc_retain(param_3);
  lStack_208 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_178 = PTR_PTR_1126fa1c8;
  puVar2 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[4];
    lStack_240 = param_3;
    puVar2[4] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[2];
    uStack_248 = param_5;
    puVar2[2] = param_5;
    _objc_release(uVar3);
    unaff_x24 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    unaff_x25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    lVar15 = puVar2[4];
    _objc_retain(lVar15);
    lStack_238 = lVar15;
    func_0x00010bf52a60();
    lStack_228 = lVar15;
    if (lVar15 != 0) {
      lStack_230 = *plStack_1b0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1b0 != lStack_230) {
            _objc_enumerationMutation(lStack_238);
          }
          param_4 = *(long *)(lStack_1b8 + lVar15 * 8);
          func_0x00010c1b65e0(param_4);
          puVar4 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
          _objc_alloc();
          lVar16 = param_4;
          func_0x00010c0651a0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c065300(param_4);
          func_0x00010bfb4820(param_4);
          func_0x00010c04a760();
          _objc_release(lVar16);
          unaff_x26 = puVar4;
          lStack_218 = lVar15;
          if (iStack_20c != 0) {
            unaff_x26 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
            _objc_alloc();
            lVar15 = param_4;
            func_0x00010c0651a0(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c065300(param_4);
            func_0x00010bfb4820(param_4);
            puVar5 = PTR__OBJC_CLASS___WKContentWorld_1126d6e98;
            func_0x00010bf69000(PTR__OBJC_CLASS___WKContentWorld_1126d6e98);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04a780();
            _objc_release(puVar4);
            _objc_release(puVar5);
            _objc_release(lVar15);
          }
          lVar15 = lStack_208;
          func_0x00010c291760(lStack_208);
          _objc_retainAutoreleasedReturnValue();
          puStack_220 = unaff_x26;
          func_0x00010befc7c0();
          _objc_release(lVar15);
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          func_0x00010c0d57c0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = param_4;
          func_0x00010bf52a60();
          if (lVar15 != 0) {
            lVar16 = *plStack_1f0;
            do {
              lVar17 = 0;
              do {
                if (*plStack_1f0 != lVar16) {
                  _objc_enumerationMutation(param_4);
                }
                func_0x00010befa120(unaff_x24);
                func_0x00010c1d0640(unaff_x25);
                lVar6 = lStack_208;
                func_0x00010c291760(lStack_208);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bdc8120(puVar2);
                _objc_release(lVar6);
                lVar17 = lVar17 + 1;
              } while (lVar15 != lVar17);
              lVar15 = param_4;
              func_0x00010bf52a60();
              unaff_x26 = (undefined *)0x0;
            } while (lVar15 != 0);
          }
          _objc_release(param_4);
          _objc_release(puStack_220);
          lVar15 = lStack_218 + 1;
        } while (lVar15 != lStack_228);
        lVar15 = lStack_238;
        func_0x00010bf52a60();
        unaff_x23 = puVar2;
        lStack_228 = lVar15;
      } while (lVar15 != 0);
    }
    _objc_release(lStack_238);
    puVar4 = unaff_x25;
    func_0x00010bf51e00();
    uVar3 = puVar2[1];
    puVar2[1] = puVar4;
    _objc_release(uVar3);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    param_3 = lStack_240;
    param_5 = uStack_248;
  }
  _objc_release(param_5);
  _objc_release(lStack_208);
  lVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar19 = &uStack_370;
  pcStack_258 = FUN_107bbb278;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  puVar14 = *(undefined8 **)(lVar15 + 0x20);
  puStack_2a0 = unaff_x26;
  puStack_298 = unaff_x25;
  puStack_290 = unaff_x24;
  puStack_288 = unaff_x23;
  uStack_280 = param_5;
  lStack_278 = param_4;
  lStack_270 = param_3;
  puStack_268 = puVar2;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  ppuVar13 = apuStack_328;
  uVar3 = 0x10;
  puVar2 = puVar14;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar15 = *plStack_360;
    do {
      puVar4 = PTR_s_browserDidReset_1125a5f40;
      puVar19 = (undefined8 *)0x0;
      do {
        if (*plStack_360 != lVar15) {
          _objc_enumerationMutation(puVar14);
        }
        uVar18 = *(ulong *)(lStack_368 + (long)puVar19 * 8);
        uVar7 = uVar18;
        _objc_opt_respondsToSelector(uVar18,puVar4);
        if ((uVar7 & 1) != 0) {
          func_0x00010bf21660(uVar18);
        }
        puVar19 = (undefined8 *)((long)puVar19 + 1);
      } while (puVar2 != puVar19);
      ppuVar13 = apuStack_328;
      uVar3 = 0x10;
      puVar2 = puVar14;
      puVar19 = &uStack_370;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  _objc_retain(ppuVar13);
  _objc_retain(puVar19);
  ppuVar8 = ppuVar13;
  func_0x00010c0d57c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar1 = ppuVar9;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  puVar2 = (undefined8 *)PTR_PTR_1126d6ea0;
  func_0x00010bf99940(PTR_PTR_1126d6ea0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  uVar11 = puVar14[2];
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2a3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar12);
  _objc_release(uVar11);
  func_0x00010c085400(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf999e0();
  _objc_release(uVar3);
  _objc_release(ppuVar13);
  _objc_release(puVar19);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return puVar10;
}



/* Entry: 107bbb278; end: 107bbb38b; -[SCWebBrowsingJavaScriptBridge reset] */

void FUN_107bbb278(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *apuStack_d8 [16];
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar13 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar13);
  ppuVar11 = apuStack_d8;
  uVar12 = 0x10;
  lVar2 = lVar13;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_110;
    do {
      puVar6 = PTR_s_browserDidReset_1125a5f40;
      lVar16 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(lVar13);
        }
        uVar14 = *(ulong *)(lStack_118 + lVar16 * 8);
        uVar3 = uVar14;
        _objc_opt_respondsToSelector(uVar14,puVar6);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf21660(uVar14);
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      ppuVar11 = apuStack_d8;
      uVar12 = 0x10;
      lVar2 = lVar13;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar12);
  _objc_retain(ppuVar11);
  _objc_retain(puVar10);
  ppuVar4 = ppuVar11;
  func_0x00010c0d57c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  puVar6 = PTR_PTR_1126d6ea0;
  func_0x00010bf99940(PTR_PTR_1126d6ea0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(lVar13 + 0x10);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2a3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  func_0x00010c085400(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf999e0();
  _objc_release(uVar12);
  _objc_release(ppuVar11);
  _objc_release(puVar10);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107bbb38c; end: 107bbb4f7; -[SCWebBrowsingJavaScriptBridge evaluateJavaScript:scriptController:completionHandler:] */

void FUN_107bbb38c(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = param_4;
  func_0x00010c0d57c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126d6ea0;
  func_0x00010bf99940(PTR_PTR_1126d6ea0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2a3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c085400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf999e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107bbb4f8; end: 107bbb653; -[SCWebBrowsingJavaScriptBridge userContentController:didReceiveScriptMessage:] */

void FUN_107bbb4f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d6ea0;
    func_0x00010c122160(PTR_PTR_1126d6ea0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0d4f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbf1b8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_4;
    func_0x00010c0d4f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(uVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c2917a0(uVar5,param_2,param_3,param_4);
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bbb654; end: 107bbb773; -[SCWebBrowsingJavaScriptBridge _addScriptMessageHandler:name:userContentController:enableMessageHandlingInterface:enableDefaultClientWorld:] */

void FUN_107bbb654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_7 == 0) {
    uVar2 = param_3;
    if (param_6 != 0) {
      func_0x00010c12e260(param_5,param_2,param_4);
      uVar2 = param_1;
    }
    func_0x00010befb220(param_5,param_2,uVar2,param_4);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___WKContentWorld_1126d6e98;
    func_0x00010bf69000(PTR__OBJC_CLASS___WKContentWorld_1126d6e98);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 0) {
      func_0x00010befb200(param_5,param_2,param_3,puVar1,param_4);
    }
    else {
      func_0x00010c12e280(param_5,param_2,param_4,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___WKContentWorld_1126d6e98;
      func_0x00010bf69000(PTR__OBJC_CLASS___WKContentWorld_1126d6e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befb200(param_5,param_2,param_1,puVar1,param_4);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bbb774; end: 107bbb78b; -[SCWebBrowsingJavaScriptBridge javaScriptExecutionDelegate] */

void FUN_107bbb774(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbb78c; end: 107bbb797; -[SCWebBrowsingJavaScriptBridge setJavaScriptExecutionDelegate:] */

void FUN_107bbb78c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107bbb798; end: 107bbb79f; -[SCWebBrowsingJavaScriptBridge scripts] */

undefined8 FUN_107bbb798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107bbb7a0; end: 107bbb7cf; -[SCWebBrowsingJavaScriptBridge setScripts:] */

void FUN_107bbb7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bbb7d0; end: 107bbb813; -[SCWebBrowsingJavaScriptBridge .cxx_destruct] */

void FUN_107bbb7d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bbb814; end: 107bbb87f; -[SCWebBrowsingMarkerScript initWithDelegate:] */

undefined1 * FUN_107bbb814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa1d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bbb880; end: 107bbb98f; -[SCWebBrowsingMarkerScript injectedJavaScript] */

void FUN_107bbb880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126b9450;
  func_0x00010c0f97e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9450;
  func_0x00010c0f9840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9450;
  func_0x00010c0f9860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9450;
  func_0x00010c0f9880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110eb23d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107bbb990; end: 107bbb9fb; -[SCWebBrowsingMarkerScript nativeCallbackNames] */

undefined * FUN_107bbb990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb2318;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 107bbb9fc; end: 107bbba03; -[SCWebBrowsingMarkerScript injectionTime] */

undefined8 FUN_107bbb9fc(void)

{
  return 0;
}



/* Entry: 107bbba04; end: 107bbba0b; -[SCWebBrowsingMarkerScript forMainFrameOnly] */

undefined8 FUN_107bbba04(void)

{
  return 1;
}



/* Entry: 107bbba0c; end: 107bbbbdb; -[SCWebBrowsingMarkerScript userContentController:didReceiveScriptMessage:] */

void FUN_107bbba0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 == 0) goto LAB_107bbbbc4;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c071ae0();
  _objc_release(puVar3);
  if ((int)puVar4 == 0) {
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb2338);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    if ((int)puVar4 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c098d40();
      goto LAB_107bbbbb4;
    }
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb2338);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    if ((int)puVar4 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c098da0();
      goto LAB_107bbbbb4;
    }
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb2338);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    if ((int)puVar4 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c098d80();
      goto LAB_107bbbbb4;
    }
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c098d60();
LAB_107bbbbb4:
    _objc_release(param_1);
  }
  _objc_release(puVar2);
LAB_107bbbbc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bbbbdc; end: 107bbbbf3; -[SCWebBrowsingMarkerScript javaScriptExecutionDelegate] */

void FUN_107bbbbdc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbbbf4; end: 107bbbbff; -[SCWebBrowsingMarkerScript setJavaScriptExecutionDelegate:] */

void FUN_107bbbbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107bbbc00; end: 107bbbc27; -[SCWebBrowsingMarkerScript .cxx_destruct] */

void FUN_107bbbc00(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107bbbc28; end: 107bbbc4f;  */

undefined ** FUN_107bbbc28(long param_1)

{
  if (param_1 - 1U < 5) {
    return (undefined **)(&PTR_PTR_1109ff1b8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 107bbbc50; end: 107bbbd07;  */

undefined8 FUN_107bbbc50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e4f778);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb23f8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb2438);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb2418);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110df9318);
          uVar2 = 4;
          if ((int)uVar1 == 0) {
            uVar2 = 0;
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
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107bbbd08; end: 107bbbd13; -[SCWebBrowsingScriptDisableSharedWorker injectedJavaScript] */

undefined ** FUN_107bbbd08(void)

{
  return &PTR____CFConstantStringClassReference_110eb2458;
}



/* Entry: 107bbbd14; end: 107bbbd1f; -[SCWebBrowsingScriptDisableSharedWorker nativeCallbackNames] */

undefined * FUN_107bbbd14(void)

{
  return PTR____NSArray0__struct_11034ab48;
}


