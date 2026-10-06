/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105488384; end: 1054883cb;  */

void FUN_105488384(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054883cc; end: 1054886bf; -[SCBitmojiFlatlandContentFetcher _fetchSceneForRequest:sceneType:] */

void FUN_1054883cc(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_2);
  _CACurrentMediaTime();
  puVar4 = param_4;
  func_0x00010bf12e60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010bf12e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126af5d0;
  if (puVar1 == (undefined *)0x0 || ((ulong)puVar2 & 1) != 0) {
    uVar3 = 2;
    FUN_105489120(2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b95a8;
    _objc_alloc(PTR_PTR_1126b95a8);
    func_0x00010c03ec00();
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = *(undefined **)(param_2 + 0x28);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010bf12e60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010c14fa60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010bfb7bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c130200(param_4);
    func_0x00010c0df780(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bfc3f40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_78);
    _objc_retain(param_4);
    puVar8 = puVar7;
    uStack_88 = param_5;
    uStack_80 = param_1;
    func_0x00010bfb2660(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1054886c0; end: 105488b8f;  */

void FUN_1054886c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b95a8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ec00();
  _objc_release(puVar3);
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c07f720(param_2);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf12e60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb7bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1820(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c130200(param_2);
    func_0x00010bf3d3a0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010bfa1820();
    }
    else if (*(long *)(param_1 + 0x30) == 3) {
      func_0x00010c07bbc0();
    }
    func_0x00010bfba9c0();
    func_0x00010bf26960(param_2);
    func_0x00010bf960a0();
    puVar7 = PTR_PTR_1126b9600;
    func_0x00010bf960a0(param_2);
    func_0x00010bf49820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c07f720(param_2);
    func_0x00010bf268e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1820();
    func_0x00010900605c();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = uVar8;
    func_0x00010b5e12cc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf979e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar3);
    puVar11 = *(undefined **)(lVar1 + 8);
    func_0x00010bfa1820(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bfa5d60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(uVar6);
    puVar9 = puVar11;
    func_0x00010c0b8600(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    _objc_retain(puVar7);
    puVar3 = puVar9;
    func_0x00010bf87460(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105488b90; end: 105488c0f;  */

void FUN_105488b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b95a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03ec00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105488c10; end: 105488d53;  */

void FUN_105488c10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010be58220(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
  uVar2 = param_2;
  func_0x00010c13ca20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c0c0800(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105488d54; end: 105488d5b;  */

void FUN_105488d54(void)

{
  return;
}



/* Entry: 105488d5c; end: 105488e77; -[SCBitmojiFlatlandContentFetcher _fetchBackgroundForRequest:] */

void FUN_105488d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9600;
  func_0x00010bf49660(PTR_PTR_1126b9600,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010bf267e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfa1820(param_3);
  func_0x00010bfa5e60(uVar4,param_2,puVar1,uVar2,0,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105488e78;
  puStack_50 = &UNK_11088cb60;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar4;
  func_0x00010c0b8600(uVar4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105488e78; end: 105488ed3;  */

void FUN_105488e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9608;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03ed00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105488ed4; end: 105488f1f; -[SCBitmojiFlatlandContentFetcher _logSceneContentResponse:startTime:] */

void FUN_105488ed4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c0aeba0(dVar1 - param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105488f20; end: 105488f6b; -[SCBitmojiFlatlandContentFetcher _logBackgroundContentResponse:startTime:] */

void FUN_105488f20(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c0a1580(dVar1 - param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105488f6c; end: 1054890d7; -[SCBitmojiFlatlandContentFetcher _removeWheelChairSuffixFromSceneFetchRequestIfNecessary:] */

void FUN_105488f6c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110de0eb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c14fa60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4bb00();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar2 = param_3;
    func_0x00010c14fa60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126af5d8;
    _objc_alloc(PTR_PTR_1126af5d8);
    puVar4 = param_3;
    func_0x00010bf12e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bfb5800(param_3);
    puVar6 = param_3;
    func_0x00010c14e120(param_3);
    puVar7 = param_3;
    func_0x00010bfa1820(param_3);
    func_0x00010bff6040(puVar2,param_2,puVar4,puVar3,puVar5,puVar6,puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054890d8; end: 10548911f; -[SCBitmojiFlatlandContentFetcher .cxx_destruct] */

void FUN_1054890d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105489120; end: 10548913b;  */

void FUN_105489120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110de0f78,param_1,0);
  return;
}



/* Entry: 10548913c; end: 10548921f; -[SCBitmojiFlatlandContentManager fetchContentWithURL:cacheKey:contentType:feature:] */

void FUN_10548913c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfa5d60(param_1,param_2,param_3,param_4,param_5,0,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105489220;
  puStack_58 = &UNK_11088cb90;
  uStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105489220; end: 105489233;  */

void FUN_105489220(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be37730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__imageResponseResultFromDataResp_11256b768,
             param_2,*(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105489234; end: 10548933f; -[SCBitmojiFlatlandContentManager fetchContentDataWithURL:cacheKey:contentType:isUserScope:feature:contentAttribution:] */

void FUN_105489234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bdd86c0();
  if (param_5 == 1) {
    func_0x00010c0aebc0(*(undefined8 *)(param_1 + 0x18),param_2,lVar2);
  }
  else if (param_5 == 0) {
    func_0x00010c0a15a0(*(undefined8 *)(param_1 + 0x18),param_2,lVar2);
  }
  lVar3 = param_1;
  func_0x00010be90ce0(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0x10;
  if (param_6 == 0) {
    lVar1 = 8;
  }
  func_0x00010be0fa60(param_1,param_2,*(undefined8 *)(param_1 + lVar1),param_3,param_4,lVar3,param_7
                      ,param_8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105489340; end: 10548949f; -[SCBitmojiFlatlandContentManager imageResultFromDataResult:animated:cacheKey:isUserScope:] */

void FUN_105489340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1054894a0;
  uStack_70 = 0x1054894b0;
  uStack_68 = 0;
  _objc_retain(param_5);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054894a0; end: 1054894b7;  */

void FUN_1054894a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054894b8; end: 10548954f;  */

void FUN_1054894b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be37740(uVar1,param_2,param_2,*(undefined1 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x39));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105489550; end: 1054895a3; -[SCBitmojiFlatlandContentManager _requestContextFromFeature:] */

void FUN_105489550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  func_0x00010900605c(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110de0f98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de0f98,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054895a4; end: 1054895c3; -[SCBitmojiFlatlandContentManager _calculateJitteredTTLInMinutes] */

long FUN_1054895a4(void)

{
  ulong uVar1;
  
  uVar1 = 0x168;
  _arc4random_uniform(0x168);
  return (uVar1 & 0xffffffff) + 0x2760;
}



/* Entry: 1054895c4; end: 105489713; -[SCBitmojiFlatlandContentManager _imageResponseResultFromDataResponseResult:cacheKey:isUserScope:] */

void FUN_1054895c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1054894a0;
  uStack_60 = 0x1054894b0;
  uStack_58 = 0;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105489714; end: 1054897a7;  */

void FUN_105489714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be37700(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054897a8; end: 105489937; -[SCBitmojiFlatlandContentManager _imageResponseResultFromDataResponse:cacheKey:isUserScope:] */

void FUN_1054897a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1054894a0;
  uStack_60 = 0x1054894b0;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be37740(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(param_3);
  func_0x00010c0c0800(param_1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105489938; end: 1054899d3;  */

void FUN_105489938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b9610;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0739e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c01f040(puVar1);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054899d4; end: 105489a1b;  */

void FUN_1054899d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105489a1c; end: 105489c37; -[SCBitmojiFlatlandContentManager _imageResultFromData:animated:cacheKey:isUserScope:] */

void FUN_105489a1c(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_4;
  lVar6 = param_5;
  uVar7 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    if ((param_4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR_PTR_1126b9618;
      _objc_alloc();
      func_0x00010c008240();
    }
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126af5d0;
      puVar4 = puVar2;
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105489be4;
    }
  }
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = 0x10;
    if ((int)param_6 == 0) {
      lVar1 = 8;
    }
    lVar8 = *(long *)(param_1 + lVar1);
    _objc_retain(lVar8);
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    lVar1 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c11d220();
    _objc_release(lVar1);
    if (lVar6 == 0) {
      lVar1 = lVar8;
      func_0x00010c269d40(lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b940(lVar1,param_2,puVar3,0);
      _objc_release(puVar3);
      _objc_release(lVar1);
    }
    _objc_release(puVar2);
    _objc_release(lVar8);
  }
  uVar5 = 1;
  lVar6 = 0;
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110de0f78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = puVar2;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
LAB_105489be4:
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = puStack_50;
    _objc_retain(puVar4);
    _objc_retain(uVar5);
    _objc_retain(lVar6);
    _objc_retain(uVar7);
    puVar2 = PTR_PTR_1126ae6b8;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105489d94;
    puStack_f0 = &UNK_11088cc50;
    puStack_c0 = puVar3;
    uStack_e8 = uVar5;
    lStack_e0 = lVar6;
    lStack_d8 = param_3;
    uStack_d0 = uVar7;
    puStack_c8 = puVar4;
    uStack_b8 = param_7;
    uStack_b4 = param_8;
    _objc_retain(puVar4);
    _objc_retain(uVar7);
    _objc_retain(lVar6);
    _objc_retain(uVar5);
    func_0x00010bf54280(puVar2,param_2,&puStack_108);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25ffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puStack_c8);
    _objc_release(uStack_d0);
    _objc_release(lStack_e0);
    _objc_release(uStack_e8);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105489c38; end: 105489f4f; -[SCBitmojiFlatlandContentManager _fetchAssetFromContentDelivery:withURL:cacheKey:requestContext:feature:contentAttribution:ttlInMinutes:] */

void FUN_105489c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x105489d94;
  puStack_a0 = &UNK_11088cc50;
  uStack_70 = param_9;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_1;
  uStack_80 = param_6;
  uStack_78 = param_3;
  uStack_68 = param_7;
  uStack_64 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1,param_2,&puStack_b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105489f50; end: 10548a0a7; -[SCBitmojiFlatlandContentManager _retrieveAssetForContentKey:fromContentDelivery:pageInfo:isFromCache:observer:] */

void FUN_105489f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_50 = param_6;
  _objc_retain(param_7);
  func_0x00010c13e560(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10548a0a8; end: 10548a103;  */

void FUN_10548a0a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10548a104; end: 10548a32f; -[SCBitmojiFlatlandContentManager _downloadRequest:withContentDelivery:forKey:pageInfo:featureMetadata:expirationDate:observer:] */

void FUN_10548a104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b1378;
  func_0x00010c1081a0(PTR_PTR_1126b1378);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = param_7;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uVar3 = param_4;
  func_0x00010bf88ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10548a330; end: 10548a3bb;  */

void FUN_10548a330(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = param_3;
  func_0x00010c09c1e0(param_3);
  _objc_release(param_3);
  func_0x00010be96180(lVar3,param_2,uVar1,uVar2,uVar5,lVar4 == 1,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10548a3bc; end: 10548a58b; -[SCBitmojiFlatlandContentManager _handleContentCompletionWithResult:fromContentDelivery:contentKey:isFromCache:observer:] */

void FUN_10548a3bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010bfcaaa0();
    if (lVar7 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_60 = param_5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b940(param_4,param_2,puVar2,0);
      _objc_release(puVar2);
      lVar7 = 0;
    }
    else {
      lVar7 = 3;
    }
    puVar2 = PTR_PTR_1126af5d0;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110de0f78,lVar7,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126b95a0;
    _objc_alloc(PTR_PTR_1126b95a0);
    lVar7 = lVar1;
    func_0x00010c01f020();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0d9840(param_7);
  func_0x00010bf436e0(param_7);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(puVar3);
  func_0x00010bf71e20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010900605c(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,lVar7,&PTR____CFConstantStringClassReference_110de0fb8);
  _objc_release(lVar7);
  puVar4 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar5 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c05a200(puVar5,param_2,puVar3,0,0,puVar6,0,0,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10548a58c; end: 10548a6cf; -[SCBitmojiFlatlandContentManager _requestWithURLString:feature:ttlMins:] */

void FUN_10548a58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010900605c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,param_4,&PTR____CFConstantStringClassReference_110de0fb8);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar3 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c05a200(puVar3,param_2,param_3,0,0,puVar4,0,0,param_3,0);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10548a6d0; end: 10548a78b; -[SCBitmojiFlatlandContentManager _pageInfoWithRequestContext:] */

void FUN_10548a6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1060;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c032f60();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 10548a78c; end: 10548a7d3; -[SCBitmojiFlatlandContentManager .cxx_destruct] */

void FUN_10548a78c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10548a7d4; end: 10548a89f;  */

void FUN_10548a7d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  else {
    _objc_retain();
    lVar1 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    _objc_release(param_1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db0df8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10548a8a0; end: 10548a8f7;  */

void FUN_10548a8a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110de1098);
  return;
}



/* Entry: 10548a8f8; end: 10548a9eb; -[SCBitmojiFlatlandOpsMetricsLogger _logConfigListRequestSuccessWithType:version:count:] */

void FUN_10548a8f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10548e3c0(uVar2,&PTR____CFConstantStringClassReference_110dad378,param_3,puVar1,1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10548e100(uVar2,&PTR____CFConstantStringClassReference_110dad378,param_3,puVar1,param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10548a9ec; end: 10548aa5b; -[SCBitmojiFlatlandOpsMetricsLogger _logConfigListRequestWithType:error:] */

void FUN_10548a9ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  FUN_10548a7d4(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10548e680(uVar1,param_4,&PTR____CFConstantStringClassReference_110dad398,param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10548aa5c; end: 10548aaef; -[SCBitmojiFlatlandOpsMetricsLogger logSceneListForResult:] */

void FUN_10548aa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined **ppuStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10548aaf0;
  puStack_28 = &UNK_11088cce0;
  ppuStack_18 = &PTR____CFConstantStringClassReference_110de0ff8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10548ab70;
  puStack_58 = &UNK_1108420a0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110de0ff8;
  uStack_50 = param_1;
  uStack_20 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_40,&puStack_70);
  _objc_release(ppuStack_48);
  _objc_release(ppuStack_18);
  return;
}



/* Entry: 10548aaf0; end: 10548ab6f;  */

void FUN_10548aaf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c298be0(param_2);
  uVar2 = param_2;
  func_0x00010bfe5fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf529e0(uVar2);
  func_0x00010be51d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10548ab70; end: 10548ab7f;  */

void FUN_10548ab70(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be51d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logConfigListRequestWithType_er_112572100,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10548ab80; end: 10548ac13; -[SCBitmojiFlatlandOpsMetricsLogger logBackgroundListForResult:] */

void FUN_10548ab80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined **ppuStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10548ac14;
  puStack_28 = &UNK_11088cd10;
  ppuStack_18 = &PTR____CFConstantStringClassReference_110dcdfb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10548ac94;
  puStack_58 = &UNK_1108420a0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dcdfb8;
  uStack_50 = param_1;
  uStack_20 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_40,&puStack_70);
  _objc_release(ppuStack_48);
  _objc_release(ppuStack_18);
  return;
}



/* Entry: 10548ac14; end: 10548ac93;  */

void FUN_10548ac14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c298be0(param_2);
  uVar2 = param_2;
  func_0x00010bfe5fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf529e0(uVar2);
  func_0x00010be51d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10548ac94; end: 10548aca3;  */

void FUN_10548ac94(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be51d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logConfigListRequestWithType_er_112572100,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10548aca4; end: 10548ad37; -[SCBitmojiFlatlandOpsMetricsLogger logDefaultSceneListForResult:] */

void FUN_10548aca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined **ppuStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10548ad38;
  puStack_28 = &UNK_11088cd40;
  ppuStack_18 = &PTR____CFConstantStringClassReference_110de1018;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10548adb8;
  puStack_58 = &UNK_1108420a0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110de1018;
  uStack_50 = param_1;
  uStack_20 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_40,&puStack_70);
  _objc_release(ppuStack_48);
  _objc_release(ppuStack_18);
  return;
}



/* Entry: 10548ad38; end: 10548adb7;  */

void FUN_10548ad38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c298be0(param_2);
  uVar2 = param_2;
  func_0x00010bfe5fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf529e0(uVar2);
  func_0x00010be51d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10548adb8; end: 10548adc7;  */

void FUN_10548adb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be51d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logConfigListRequestWithType_er_112572100,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10548adc8; end: 10548ae5b; -[SCBitmojiFlatlandOpsMetricsLogger logDefaultBackgroundListForResult:] */

void FUN_10548adc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined **ppuStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10548ae5c;
  puStack_28 = &UNK_11088cd70;
  ppuStack_18 = &PTR____CFConstantStringClassReference_110de1038;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10548aedc;
  puStack_58 = &UNK_1108420a0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110de1038;
  uStack_50 = param_1;
  uStack_20 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_40,&puStack_70);
  _objc_release(ppuStack_48);
  _objc_release(ppuStack_18);
  return;
}



/* Entry: 10548ae5c; end: 10548aedb;  */

void FUN_10548ae5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c298be0(param_2);
  uVar2 = param_2;
  func_0x00010bfe5fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf529e0(uVar2);
  func_0x00010be51d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10548aedc; end: 10548aeeb;  */

void FUN_10548aedc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be51d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logConfigListRequestWithType_er_112572100,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10548aeec; end: 10548af03; -[SCBitmojiFlatlandOpsMetricsLogger logDefaultScene:] */

/* WARNING: Removing unreachable block (ram,0x00010548f690) */

undefined * FUN_10548aeec(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int extraout_w10;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110de0ff8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar2;
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110de0ff8);
  if (lVar1 != 0) {
    plVar4 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar5 = &UNK_10f2c3b8f;
    }
    else {
      puVar5 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar5);
    _objc_retain(&PTR____CFConstantStringClassReference_110de0ff8);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110de0ff8);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110de0ff8);
    _objc_release(&PTR____CFConstantStringClassReference_110de0ff8);
    func_0x00010002b838(auStack_60,ppuVar2);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    ppuVar3 = &puStack_98;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11088d2a0,ppuVar3,1);
    ppuStack_80 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110de0ff8);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110de0ff8);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110de0ff8);
  _objc_release(param_3);
  __Unwind_Resume();
  ppuVar2 = &puStack_e0;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110de0ff8;
  pcStack_a8 = FUN_10548f80c;
  puStack_d8 = PTR_PTR_1126e86e8;
  puStack_e0 = puVar5;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    puVar6 = ppuVar3[1];
    puVar5 = *ppuVar3;
    if (ppuVar3[1] != (undefined *)0x0) {
      do {
        FUN_10548fce8();
      } while (extraout_w10 != 0);
    }
    uStack_c8 = *(undefined8 *)((long)ppuVar2 + 0x20);
    uStack_d0 = *(undefined8 *)((long)ppuVar2 + 0x18);
    *(undefined **)((long)ppuVar2 + 0x20) = puVar6;
    *(undefined **)((long)ppuVar2 + 0x18) = puVar5;
    FUN_10548fc98(&uStack_d0);
  }
  return (undefined *)ppuVar2;
}



/* Entry: 10548af04; end: 10548af1b; -[SCBitmojiFlatlandOpsMetricsLogger logDefaultBackground:] */

/* WARNING: Removing unreachable block (ram,0x00010548f690) */

undefined * FUN_10548af04(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int extraout_w10;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcdfb8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar2;
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110dcdfb8);
  if (lVar1 != 0) {
    plVar4 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar5 = &UNK_10f2c3b8f;
    }
    else {
      puVar5 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar5);
    _objc_retain(&PTR____CFConstantStringClassReference_110dcdfb8);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dcdfb8);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110dcdfb8);
    _objc_release(&PTR____CFConstantStringClassReference_110dcdfb8);
    func_0x00010002b838(auStack_60,ppuVar2);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    ppuVar3 = &puStack_98;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11088d2a0,ppuVar3,1);
    ppuStack_80 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dcdfb8);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dcdfb8);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dcdfb8);
  _objc_release(param_3);
  __Unwind_Resume();
  ppuVar2 = &puStack_e0;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dcdfb8;
  pcStack_a8 = FUN_10548f80c;
  puStack_d8 = PTR_PTR_1126e86e8;
  puStack_e0 = puVar5;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    puVar6 = ppuVar3[1];
    puVar5 = *ppuVar3;
    if (ppuVar3[1] != (undefined *)0x0) {
      do {
        FUN_10548fce8();
      } while (extraout_w10 != 0);
    }
    uStack_c8 = *(undefined8 *)((long)ppuVar2 + 0x20);
    uStack_d0 = *(undefined8 *)((long)ppuVar2 + 0x18);
    *(undefined **)((long)ppuVar2 + 0x20) = puVar6;
    *(undefined **)((long)ppuVar2 + 0x18) = puVar5;
    FUN_10548fc98(&uStack_d0);
  }
  return (undefined *)ppuVar2;
}



/* Entry: 10548af1c; end: 10548af2b; -[SCBitmojiFlatlandOpsMetricsLogger logSceneContentTTLInMinutes:] */

/* WARNING: Removing unreachable block (ram,0x00010548e9a4) */

void FUN_10548af1c(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x10);
  ppuVar3 = &PTR____CFConstantStringClassReference_110de0ff8;
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  puVar6 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110de0ff8);
  if (lVar1 != 0) {
    plVar7 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110de0ff8);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110de0ff8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110de0ff8);
    func_0x00010002b838(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_11088d110;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088d110,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = puVar4;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = puVar4;
      param_5 = param_4;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110de0ff8);
  _objc_release(&PTR____CFConstantStringClassReference_110de0ff8);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puVar4 = puVar6;
  _objc_retain(ppuVar2);
  _objc_retain(puVar6);
  if (ppuVar3 != (undefined **)0x0) {
    plVar7 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f2c3b8f;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_f8,ppuVar3);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_e0,puVar4);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar5 = (undefined **)&UNK_11088d160;
    puVar4 = &uStack_118;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088d160,puVar4,param_5);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar1 = 0;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar6);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar2);
    __Unwind_Resume();
    _objc_retain(ppuVar5);
    _objc_retain(puVar4);
    if (ppuVar3 != (undefined **)0x0) {
      FUN_10548eab4(ppuVar3,ppuVar5,puVar4,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
    return;
  }
  return;
}



/* Entry: 10548af2c; end: 10548af3b; -[SCBitmojiFlatlandOpsMetricsLogger logBackgroundContentTTLInMinutes:] */

/* WARNING: Removing unreachable block (ram,0x00010548e9a4) */

void FUN_10548af2c(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x10);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dcdfb8;
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  puVar6 = param_4;
  _objc_retain(&PTR____CFConstantStringClassReference_110dcdfb8);
  if (lVar1 != 0) {
    plVar7 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110dcdfb8);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dcdfb8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dcdfb8);
    func_0x00010002b838(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_11088d110;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088d110,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = puVar4;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = puVar4;
      param_5 = param_4;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dcdfb8);
  _objc_release(&PTR____CFConstantStringClassReference_110dcdfb8);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puVar4 = puVar6;
  _objc_retain(ppuVar2);
  _objc_retain(puVar6);
  if (ppuVar3 != (undefined **)0x0) {
    plVar7 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f2c3b8f;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_f8,ppuVar3);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar4 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_e0,puVar4);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    ppuVar5 = (undefined **)&UNK_11088d160;
    puVar4 = &uStack_118;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088d160,puVar4,param_5);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar1 = 0;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar6);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar2);
    __Unwind_Resume();
    _objc_retain(ppuVar5);
    _objc_retain(puVar4);
    if (ppuVar3 != (undefined **)0x0) {
      FUN_10548eab4(ppuVar3,ppuVar5,puVar4,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
    return;
  }
  return;
}



/* Entry: 10548af3c; end: 10548b02b; -[SCBitmojiFlatlandOpsMetricsLogger logSceneContentResponse:duration:] */

void FUN_10548af3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c13ca20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10548b02c;
  puStack_60 = &UNK_11088cda0;
  uStack_58 = param_2;
  _objc_retain(param_4);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10548b190;
  puStack_98 = &UNK_11088cdd0;
  uStack_90 = param_2;
  uStack_88 = param_4;
  uStack_80 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0c0800(uVar2,param_3,&puStack_78,&puStack_b0);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10548b02c; end: 10548b18f;  */

void FUN_10548b02c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c134680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  func_0x00010900605c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4dac0(uVar4);
  FUN_10548a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0739e0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  FUN_10548f31c(uVar6,uVar3,uVar4,ppuVar1,1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c134680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  func_0x00010900605c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4dac0(uVar4);
  FUN_10548a8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0739e0();
  _objc_release(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  FUN_10548f268(*(undefined8 *)(param_1 + 0x30),uVar6,uVar3,uVar4,ppuVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10548b190; end: 10548b2a7;  */

void FUN_10548b190(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c134680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  func_0x00010900605c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10548a7d4(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10548ed78(uVar4,uVar2,uVar3,1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c134680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  func_0x00010900605c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_10548a7d4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  FUN_10548ece4(*(undefined8 *)(param_1 + 0x30),uVar4,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10548b2a8; end: 10548b44b; -[SCBitmojiFlatlandOpsMetricsLogger logBackgroundContentResponse:duration:] */

void FUN_10548b2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10548b44c;
  uStack_60 = 0x10548b45c;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf13c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (puStack_78[5] != 0) {
    uVar1 = param_3;
    func_0x00010c13ca20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0800();
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10548b44c; end: 10548b463;  */

void FUN_10548b44c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10548b464; end: 10548b49b;  */

void FUN_10548b464(long param_1,undefined8 param_2)

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



/* Entry: 10548b49c; end: 10548b49f;  */

void FUN_10548b49c(void)

{
  return;
}



/* Entry: 10548b4a0; end: 10548b743;  */

void FUN_10548b4a0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0739e0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(ppuVar1);
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10548de40(uVar3,ppuVar1,uVar4,puVar2,1);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  uVar4 = param_2;
  func_0x00010c0739e0();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(ppuVar1);
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10548dd8c(*(undefined8 *)(param_1 + 0x30),uVar3,ppuVar1,uVar4,puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10548b744; end: 10548b77f; -[SCBitmojiFlatlandOpsMetricsLogger .cxx_destruct] */

void FUN_10548b744(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10548b780; end: 10548b853; -[SCBitmojiFlatlandUserHasher hashedIndexForArrayOfSize:userId:saltString:] */

long FUN_10548b780(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    uVar1 = param_4;
    if (param_5 != 0) {
      func_0x00010c25ce40(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
    }
    uVar2 = uVar1;
    _objc_retainAutorelease(uVar1);
    func_0x00010bdc3520();
    uVar3 = uVar1;
    func_0x00010c08fac0(uVar1);
    func_0x0001064c9c58(uVar2,uVar3,0);
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = (uVar2 & 0xffffffff) / param_3;
    }
    lVar4 = (uVar2 & 0xffffffff) - uVar3 * param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return lVar4;
}



/* Entry: 10548b854; end: 10548b8f7; -[SCBitmojiRenderConfigProvider initWithFlatlandConfigProvider:renderStyleProvider:] */

undefined1 *
FUN_10548b854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e86a0;
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



/* Entry: 10548b8f8; end: 10548bb8f; -[SCBitmojiRenderConfigProvider getConfigWithAvatarId:sceneId:friendAvatarId:renderStyle:] */

void FUN_10548b8f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf26e20();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c290b00();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf960a0();
  _objc_release(uVar4);
  if ((param_6 == 0) || ((lVar5 = param_6, func_0x00010c067fc0(), lVar5 != 0 && (lVar5 != 3)))) {
    puVar6 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0e08a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_6c = (undefined1)uVar1;
    puVar9 = puVar8;
    uStack_78 = uVar2;
    uStack_70 = (int)uVar3;
    func_0x00010c0b8600(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    puVar6 = PTR_PTR_1126b9628;
    _objc_alloc(PTR_PTR_1126b9628);
    func_0x00010c067fc0(param_6);
    func_0x00010bffa900(puVar6);
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10548bb90; end: 10548bc4b;  */

void FUN_10548bb90(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar2);
  }
  else {
    if (param_2 != 0) {
      func_0x00010c067fc0();
    }
    puVar2 = PTR_PTR_1126b9628;
    _objc_alloc(PTR_PTR_1126b9628);
    func_0x00010bffa900();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10548bc4c; end: 10548bc7b; -[SCBitmojiRenderConfigProvider .cxx_destruct] */

void FUN_10548bc4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10548bc7c; end: 10548bd13; +[SCDisposableObserver withCancellable:] */

void FUN_10548bc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0418;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10548bd14;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10548bd14; end: 10548bd1b;  */

void FUN_10548bd14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10548bd1c; end: 10548bdc7; +[SCGrapheneBitmojiFlatlandMetric configListRequestSuccessWithType:version:] */

void FUN_10548bd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b9630;
  _objc_retain(param_3);
  func_0x00010bf46000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e17c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c261600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2bc5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10548bdc8; end: 10548be8b; +[SCGrapheneBitmojiFlatlandMetric configListRequestWithType:error:] */

void FUN_10548bdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b9630;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf46000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e17c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf9fb60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ad520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10548be8c; end: 10548bf2f; +[SCGrapheneBitmojiFlatlandMetric userDefaultWithType:identifier:] */

void FUN_10548be8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b9630;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c291b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e17c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c2af9a0(puVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10548bf30; end: 10548bf9f; +[SCGrapheneBitmojiFlatlandMetric contentTTLWithType:] */

void FUN_10548bf30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9630;
  _objc_retain(param_3);
  func_0x00010bf4daa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e17c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10548bfa0; end: 10548c03b; +[SCGrapheneBitmojiFlatlandMetric sceneContentRequestSuccessWithFromCache:feature:contentType:] */

void FUN_10548bfa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b9630;
  func_0x00010c14f9c0(PTR_PTR_1126b9630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfbaaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2aaf60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfa1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10548c03c; end: 10548c0cf; +[SCGrapheneBitmojiFlatlandMetric sceneContentRequestFailureWithFeature:error:] */

void FUN_10548c03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b9630;
  _objc_retain(param_4);
  func_0x00010c14f9a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010bfa1840(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10548c0d0; end: 10548c18b; +[SCGrapheneBitmojiFlatlandMetric backgroundContentRequestSuccessWithIdentifier:scale:fromCache:] */

void FUN_10548c0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b9630;
  _objc_retain(param_3);
  func_0x00010bf19a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c2b78c0(puVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfbaaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10548c18c; end: 10548c257; +[SCGrapheneBitmojiFlatlandMetric backgroundContentRequestFailureWithIdentifier:scale:error:] */

void FUN_10548c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b9630;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf19a40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c2b78c0(puVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ad520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10548c258; end: 10548c25f; -[SCGrapheneBitmojiFlatlandMetric succeeded] */

void FUN_10548c258(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__withSuccess__112598700,1);
  return;
}



/* Entry: 10548c260; end: 10548c267; -[SCGrapheneBitmojiFlatlandMetric failed] */

void FUN_10548c260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__withSuccess__112598700,0);
  return;
}



/* Entry: 10548c268; end: 10548c28b; -[SCGrapheneBitmojiFlatlandMetric _withSuccess:] */

void FUN_10548c268(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2ac470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_withDimension_value__112688b40,
             &PTR____CFConstantStringClassReference_110dab0d8,ppuVar1);
  return;
}



/* Entry: 10548c28c; end: 10548c2ff; -[SCGrapheneBitmojiFlatlandMetric withVersion:] */

void FUN_10548c28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db0df8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac460(param_1,param_2,&PTR____CFConstantStringClassReference_110dd8fd8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10548c300; end: 10548c3fb; -[SCGrapheneBitmojiFlatlandMetric withError:] */

void FUN_10548c300(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db0df8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  func_0x00010c2ac460(param_1,param_2,&PTR____CFConstantStringClassReference_110daeeb8,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10548c3fc; end: 10548c40b; -[SCGrapheneBitmojiFlatlandMetric ofType:] */

void FUN_10548c3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2ac470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_withDimension_value__112688b40,
             &PTR____CFConstantStringClassReference_110dad058,param_3);
  return;
}



/* Entry: 10548c40c; end: 10548c41b; -[SCGrapheneBitmojiFlatlandMetric withIdentifier:] */

void FUN_10548c40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2ac470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_withDimension_value__112688b40,
             &PTR____CFConstantStringClassReference_110dbf6f8,param_3);
  return;
}



/* Entry: 10548c41c; end: 10548c43f; -[SCGrapheneBitmojiFlatlandMetric fromCache:] */

void FUN_10548c41c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2ac470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_withDimension_value__112688b40,
             &PTR____CFConstantStringClassReference_110de10b8,ppuVar1);
  return;
}



/* Entry: 10548c440; end: 10548c4b3; -[SCGrapheneBitmojiFlatlandMetric withScale:] */

void FUN_10548c440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db0df8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac460(param_1,param_2,&PTR____CFConstantStringClassReference_110db1058,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10548c4b4; end: 10548c50f; -[SCGrapheneBitmojiFlatlandMetric feature:] */

void FUN_10548c4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010900605c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac460(param_1,param_2,&PTR____CFConstantStringClassReference_110de1118,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10548c510; end: 10548c5af; -[SCGrapheneBitmojiFlatlandMetric withContentType:] */

void FUN_10548c510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac460(param_1,param_2,&PTR____CFConstantStringClassReference_110de10d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10548c5b0; end: 10548c65b; -[SCBitmojiFlatlandBackgroundContentResponse initWithRequest:result:] */

undefined1 *
FUN_10548c5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e86a8;
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



/* Entry: 10548c65c; end: 10548c67f; -[SCBitmojiFlatlandBackgroundContentResponse copyWithZone:] */

undefined8 FUN_10548c65c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10548c680; end: 10548c6f3; -[SCBitmojiFlatlandBackgroundContentResponse hash] */

undefined8 * FUN_10548c680(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10548c774:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10548c780;
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
          goto LAB_10548c780;
        }
        goto LAB_10548c774;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10548c780:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10548c6f4; end: 10548c79b; -[SCBitmojiFlatlandBackgroundContentResponse isEqual:] */

long FUN_10548c6f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10548c774:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10548c780;
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
          goto LAB_10548c780;
        }
        goto LAB_10548c774;
      }
    }
    lVar3 = 0;
  }
LAB_10548c780:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10548c79c; end: 10548c7a3; -[SCBitmojiFlatlandBackgroundContentResponse request] */

undefined8 FUN_10548c79c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10548c7a4; end: 10548c7ab; -[SCBitmojiFlatlandBackgroundContentResponse result] */

undefined8 FUN_10548c7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10548c7ac; end: 10548c7db; -[SCBitmojiFlatlandBackgroundContentResponse .cxx_destruct] */

void FUN_10548c7ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10548c7dc; end: 10548c863; -[SCBitmojiFlatlandBackgroundDefaultsResponse initWithVersion:identifiers:] */

undefined1 *
FUN_10548c7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e86b0;
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



/* Entry: 10548c864; end: 10548c887; -[SCBitmojiFlatlandBackgroundDefaultsResponse copyWithZone:] */

undefined8 FUN_10548c864(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


