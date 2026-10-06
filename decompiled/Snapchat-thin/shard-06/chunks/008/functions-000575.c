/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f03af8; end: 104f03b03; -[SCMemoriesChatMediaContextLayerPageProvider registeredEventsForOperaSession] */

undefined * FUN_104f03af8(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104f03b04; end: 104f03b3f; -[SCMemoriesChatMediaContextLayerPageProvider .cxx_destruct] */

void FUN_104f03b04(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f03b40; end: 104f03b57;  */

void FUN_104f03b40(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f03b58; end: 104f03c2f;  */

void FUN_104f03b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2398;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b23a0;
  func_0x00010c292680(PTR_PTR_1126b23a0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010901d7c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01bcc0(puVar2,param_2,puVar3,uVar1,uVar4,0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f03c30; end: 104f03f83;  */

void FUN_104f03c30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0cb8e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2398;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b23a0;
  func_0x00010c292680(PTR_PTR_1126b23a0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x000108ef3c74(uVar3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 104f03f84; end: 104f04027; -[SCMemoriesChatMediaRemixPageProvider initWithConversationId:circumstanceEngine:] */

undefined1 *
FUN_104f03f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4f60;
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



/* Entry: 104f04028; end: 104f0402b; -[SCMemoriesChatMediaRemixPageProvider setPlaylistItemController:] */

void FUN_104f04028(void)

{
  return;
}



/* Entry: 104f0402c; end: 104f0402f; -[SCMemoriesChatMediaRemixPageProvider extraPropertiesProvider] */

void FUN_104f0402c(void)

{
  return;
}



/* Entry: 104f04030; end: 104f04033; -[SCMemoriesChatMediaRemixPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f04030(void)

{
  return;
}



/* Entry: 104f04034; end: 104f0403b; -[SCMemoriesChatMediaRemixPageProvider registeredEventsForOperaSession] */

undefined8 FUN_104f04034(void)

{
  return 0;
}



/* Entry: 104f0403c; end: 104f044d7; -[SCMemoriesChatMediaRemixPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f0403c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2358;
  if (param_6 != 0) {
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
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    uVar3 = uVar1;
    puStack_90 = &uStack_98;
    func_0x00010c0f4aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104f044d8;
    puStack_a8 = &UNK_110851a78;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x104f044ec;
    puStack_d0 = &UNK_11085a788;
    puStack_c8 = &uStack_98;
    puStack_a0 = &uStack_98;
    func_0x00010c0bf240();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0cba00();
    uVar5 = uVar3;
    func_0x00010c0c6c20();
    if ((uVar5 + 1 < 0x17) && ((0x7ffff1U >> (ulong)((uint)(uVar5 + 1) & 0x1f) & 1) != 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      if (uVar4 < 0x2d) {
        uVar8 = 0x11c0c >> (uVar4 & 0x3f);
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    if ((uVar8 & 1) != 0) {
      uVar4 = uVar3;
      func_0x00010c242120();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      puVar7 = PTR_PTR_1126b2378;
      if (uVar6 == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        uVar5 = uVar4;
        func_0x00010bf4e840(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe3740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar5 = uVar3;
        func_0x00010c086560(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf43580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(puVar7);
      }
      puStack_110 = &uStack_118;
      uStack_118 = 0;
      uStack_108 = 0x3032000000;
      uStack_100 = 0x104f044fc;
      uStack_f8 = 0x104f0450c;
      uStack_f0 = 0;
      uVar5 = uVar1;
      func_0x00010c0f4aa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar1);
      _objc_retain(uVar3);
      _objc_retain(puVar9);
      _objc_retain(uVar1);
      _objc_retain(uVar3);
      _objc_retain(puVar9);
      func_0x00010c0bf240(uVar5);
      _objc_release(uVar5);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar9);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(puVar9);
      _objc_release(uVar3);
      _objc_release(uVar1);
      __Block_object_dispose(&uStack_118,8);
      _objc_release(uStack_f0);
      _objc_release(uVar4);
      _objc_release(puVar9);
    }
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    (**(code **)(param_6 + 0x10))(param_6,puVar7,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f044d8; end: 104f04513;  */

void FUN_104f044d8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f04514; end: 104f04687;  */

void FUN_104f04514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b23b0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar5 = PTR_PTR_1126b23b8;
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010901d7c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2942e0(puVar5,param_2,uVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb8e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001090196c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e660(puVar1,param_2,puVar5,uVar6,uVar7,1,uVar8,
                      &PTR____CFConstantStringClassReference_110daafd8);
  lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar1;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f04688; end: 104f04777;  */

void FUN_104f04688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b23b0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b23b8;
  func_0x00010bfcf600(PTR_PTR_1126b23b8,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb8e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c5180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x0001090196c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e660(puVar1,param_2,puVar2,uVar3,uVar4,1,uVar5,
                      &PTR____CFConstantStringClassReference_110daafd8);
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f04778; end: 104f047a7; -[SCMemoriesChatMediaRemixPageProvider .cxx_destruct] */

void FUN_104f04778(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f047a8; end: 104f04873; -[SCMemoriesChatMediaFeaturePlugin initWithDataSource:imageProvider:dependentPlugins:] */

undefined1 *
FUN_104f047a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4f68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f04874; end: 104f0487b; -[SCMemoriesChatMediaFeaturePlugin launchCandidates] */

void FUN_104f04874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_launchCandidates_112600778);
  return;
}



/* Entry: 104f0487c; end: 104f048a3; -[SCMemoriesChatMediaFeaturePlugin dependentPlugins] */

void FUN_104f0487c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f048a4; end: 104f048ef; -[SCMemoriesChatMediaFeaturePlugin updateOperaConfiguration:] */

void FUN_104f048a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f048f0; end: 104f04933; -[SCMemoriesChatMediaFeaturePlugin setPlaylistItemController:] */

void FUN_104f048f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  func_0x00010c1d5620(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f04934; end: 104f04997; -[SCMemoriesChatMediaFeaturePlugin updateOperaDependencies:] */

void FUN_104f04934(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aee60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f04998; end: 104f0499b; -[SCMemoriesChatMediaFeaturePlugin addEventListenersWithEventAnnouncing:] */

void FUN_104f04998(void)

{
  return;
}



/* Entry: 104f0499c; end: 104f049c3; -[SCMemoriesChatMediaFeaturePlugin playlistDataSource] */

void FUN_104f0499c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f049c4; end: 104f049cb; -[SCMemoriesChatMediaFeaturePlugin type] */

void FUN_104f049c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c8430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_memoriesChatMediaType_11260fb20);
  return;
}



/* Entry: 104f049cc; end: 104f04a0f; -[SCMemoriesChatMediaFeaturePlugin .cxx_destruct] */

void FUN_104f049cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f04a10; end: 104f04b33; -[SCMemoriesChatMediaPlaylistDataSource initWithConversationId:flashbackId:contentLoader:performer:chatMediaContents:] */

undefined1 *
FUN_104f04a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e4f70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f04b34; end: 104f04c1b; -[SCMemoriesChatMediaPlaylistDataSource launchCandidates] */

void FUN_104f04b34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f04c1c; end: 104f04cef;  */

void FUN_104f04c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104f04cf0;
    puStack_40 = &UNK_11085a7e8;
    lStack_38 = lVar1;
    func_0x00010c0b8600(uVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    _objc_retain();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b23d0;
    _objc_alloc(PTR_PTR_1126b23d0);
    func_0x00010c004f00();
    func_0x00010bf43d60(uVar4,param_2,puVar3);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f04cf0; end: 104f04cff;  */

void FUN_104f04cf0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_resolveSinglePlaybackContentFrom_11262c570,param_2);
  return;
}



/* Entry: 104f04d00; end: 104f04d0b; -[SCMemoriesChatMediaPlaylistDataSource memoriesChatMediaType] */

undefined ** FUN_104f04d00(void)

{
  return &PTR____CFConstantStringClassReference_110dba9d8;
}



/* Entry: 104f04d0c; end: 104f04d17; -[SCMemoriesChatMediaPlaylistDataSource setOperaPlaylistItemController:] */

void FUN_104f04d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104f04d18; end: 104f04d47; -[SCMemoriesChatMediaPlaylistDataSource dataModelForGroup:] */

void FUN_104f04d18(void)

{
  _objc_alloc(PTR_PTR_1126b23d0);
  func_0x00010c004f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f04d48; end: 104f04d9b; -[SCMemoriesChatMediaPlaylistDataSource dataModelFor:] */

void FUN_104f04d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be74c20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104f04d9c; end: 104f04df7; -[SCMemoriesChatMediaPlaylistDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_104f04d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11085a838);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a9c0(param_3,param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f04df8; end: 104f04e97;  */

void FUN_104f04df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b23d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0c45e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0558c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f04e98; end: 104f04efb; -[SCMemoriesChatMediaPlaylistDataSource pageDataForDataModel:completion:] */

void FUN_104f04e98(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126b23e0;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c033240();
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f04efc; end: 104f050cf; -[SCMemoriesChatMediaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_104f04efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be74c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar2 = lVar1;
  func_0x00010c09c260();
  if (lVar2 == 1) {
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = lVar1;
    func_0x00010bf490e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c45e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88b40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c297260(uVar4);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  (**(code **)(param_5 + 0x10))(param_5,0,0,0);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f050d0; end: 104f0510b;  */

void FUN_104f050d0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f0510c; end: 104f0510f; -[SCMemoriesChatMediaPlaylistDataSource removeMediaForItem:] */

void FUN_104f0510c(void)

{
  return;
}



/* Entry: 104f05110; end: 104f05117; -[SCMemoriesChatMediaPlaylistDataSource canResolvePlaylistItemGroupDataModel:] */

undefined8 FUN_104f05110(void)

{
  return 1;
}



/* Entry: 104f05118; end: 104f0515b; -[SCMemoriesChatMediaPlaylistDataSource playlistItemGroupModelForDataModel:] */

void FUN_104f05118(void)

{
  _objc_alloc(PTR_PTR_1126b23e8);
  func_0x00010c01ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f0515c; end: 104f05163; -[SCMemoriesChatMediaPlaylistDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_104f0515c(void)

{
  return 1;
}



/* Entry: 104f05164; end: 104f052cf; -[SCMemoriesChatMediaPlaylistDataSource _playbackContentWithMediaId:] */

void FUN_104f05164(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar7);
  lVar10 = lVar7;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar9 = *plStack_120;
    unaff_x21 = lVar10;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar1 = uVar8;
        func_0x00010c0c45e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar8);
          goto LAB_104f05280;
        }
        lVar10 = lVar10 + 1;
      } while (unaff_x21 != lVar10);
      unaff_x21 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  uVar8 = 0;
LAB_104f05280:
  _objc_release(lVar7);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104f052d0;
  uStack_160 = uVar8;
  lStack_158 = unaff_x21;
  lStack_150 = lVar7;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(puVar4 + 0x18);
    func_0x00010c13ad40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_168,puVar4);
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_104f053a0;
    puStack_180 = &UNK_110841fb0;
    _objc_copyWeak(auStack_170,auStack_168);
    uStack_178 = uVar5;
    func_0x000100162d98("APPSTORE",&puStack_198);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 104f052d0; end: 104f0539f; -[SCMemoriesChatMediaPlaylistDataSource _updatePlaybackContentWithOldPlaybackContent:] */

void FUN_104f052d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c13ad40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104f053a0;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    uStack_48 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f053a0; end: 104f053d3;  */

void FUN_104f053a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f053d4; end: 104f0558f; -[SCMemoriesChatMediaPlaylistDataSource _updateDataSourceWithPlaybackContent:] */

void FUN_104f053d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010be74c20(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x104f054f8;
    puStack_58 = &UNK_11085a858;
    uStack_50 = uVar1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c0b8600(uVar4,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    _objc_release(uVar3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c101400();
    _objc_release(param_1);
    _objc_release(uStack_48);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f05590; end: 104f055eb; -[SCMemoriesChatMediaPlaylistDataSource .cxx_destruct] */

void FUN_104f05590(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f055ec; end: 104f0570f; -[SCMemoriesChatMediaPlaybackWorkFlow initWithFeaturePlugin:operaPlugins:scope:operaSessionScopeExposer:operaSessionScopeServices:] */

undefined1 *
FUN_104f055ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e4f78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f05710; end: 104f057fb; -[SCMemoriesChatMediaPlaybackWorkFlow beginWorkflow] */

void FUN_104f05710(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08b5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_40;
  _objc_copyWeak(puVar2,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f057fc; end: 104f05843;  */

void FUN_104f057fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd38e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f05844; end: 104f05aa7; -[SCMemoriesChatMediaPlaybackWorkFlow _beginOperaScopeWithOperaGroup:] */

void FUN_104f05844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b23f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f2220();
  func_0x00010c011ae0(puVar1,param_2,4,0x5c,1,0xffffffffffffffff,0,0x37,puVar2,uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar2,param_2,puVar5,param_3);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010befa120();
  func_0x00010befa160(puVar6,param_2,*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f3ca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf16300(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf51e00();
  func_0x00010bf23920(uVar4,param_2,puVar1,uVar3,uVar7,puVar2,puVar5,param_1,puVar8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104f05aa8; end: 104f05aab; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_104f05aa8(void)

{
  return;
}



/* Entry: 104f05aac; end: 104f05aaf; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_104f05aac(void)

{
  return;
}



/* Entry: 104f05ab0; end: 104f05ab3; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_104f05ab0(void)

{
  return;
}



/* Entry: 104f05ab4; end: 104f05ab7; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterDidCancelDismissing:] */

void FUN_104f05ab4(void)

{
  return;
}



/* Entry: 104f05ab8; end: 104f05abb; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_104f05ab8(void)

{
  return;
}



/* Entry: 104f05abc; end: 104f05abf; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterDidFailToPresent:] */

void FUN_104f05abc(void)

{
  return;
}



/* Entry: 104f05ac0; end: 104f05ac3; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterDidFinishDismissing:] */

void FUN_104f05ac0(void)

{
  return;
}



/* Entry: 104f05ac4; end: 104f05aff; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenterDidTearDown:] */

void FUN_104f05ac4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c100060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f05b00; end: 104f05b03; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_104f05b00(void)

{
  return;
}



/* Entry: 104f05b04; end: 104f05b07; -[SCMemoriesChatMediaPlaybackWorkFlow operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_104f05b04(void)

{
  return;
}



/* Entry: 104f05b08; end: 104f05b5b; -[SCMemoriesChatMediaPlaybackWorkFlow .cxx_destruct] */

void FUN_104f05b08(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f05b5c; end: 104f05bfb;  */

uint FUN_104f05b5c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c0c6c20();
  uVar3 = 0;
  if ((uVar1 < 0x16) && ((1L << (uVar1 & 0x3f) & 0x363f36U) != 0)) {
    uVar1 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c299f80(param_2);
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 104f05bfc; end: 104f05efb;  */

undefined * FUN_104f05bfc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_1;
  func_0x00010c0c58c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar18 = *(long *)(lVar16 * 8);
      lVar5 = lVar18;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar5);
          }
          puVar7 = PTR_PTR_1126b2358;
          _objc_alloc(PTR_PTR_1126b2358);
          lVar8 = lVar18;
          func_0x00010bf490e0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cba00(lVar18);
          lVar9 = lVar18;
          func_0x00010c0cb900(lVar18);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar18;
          func_0x00010c0cb920(lVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126ae750;
          func_0x00010c0db140();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar18;
          func_0x00010bf026e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25b720();
          func_0x00010c0022e0(puVar7);
          _objc_release(lVar12);
          _objc_release(puVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          func_0x00010befa120(puVar17);
          _objc_release(puVar7);
          lVar19 = lVar19 + 1;
        } while (lVar6 != lVar19);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar4);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar7 = puVar17;
  func_0x00010bf51e00();
  _objc_release(puVar17);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar14);
  lVar4 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010bf4b4c0();
  _objc_release(lVar4);
  if ((int)uVar13 == 0) {
    puVar17 = (undefined *)0x1;
  }
  else {
    lVar4 = param_1;
    FUN_104f05b5c(param_1,uVar14);
    puVar17 = (undefined *)0x3;
    if ((int)lVar4 != 0) {
      puVar17 = (undefined *)0x1;
    }
  }
  _objc_release(uVar14);
  _objc_release(param_1);
  return puVar17;
}



/* Entry: 104f05efc; end: 104f05f93;  */

undefined8 FUN_104f05efc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4b4c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar1 = param_1;
    FUN_104f05b5c(param_1,param_2);
    uVar2 = 3;
    if ((int)uVar1 != 0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104f05f94; end: 104f06103;  */

void FUN_104f05f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b2358;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cba00(param_3);
  uVar3 = param_3;
  func_0x00010c0cb8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0cb920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0cb220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b720();
  _objc_release(param_3);
  func_0x00010c0022e0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f06104; end: 104f06177; -[SCMemoriesChatMediaFlashbackViewStatePlugin initWithFriendshipFlashbacksDataManager:] */

undefined1 * FUN_104f06104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f06178; end: 104f06183; -[SCMemoriesChatMediaFlashbackViewStatePlugin setPlaylistItemController:] */

void FUN_104f06178(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104f06184; end: 104f06217; -[SCMemoriesChatMediaFlashbackViewStatePlugin registeredEventsForOperaSession] */

void FUN_104f06184(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar10 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(uVar11);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)ppuVar10;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    uVar4 = uVar11;
    func_0x00010be36bc0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1 + 8;
    _objc_loadWeakRetained(puVar2);
    puVar5 = puVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1 + 8;
    _objc_loadWeakRetained();
    puVar6 = puVar2;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2358;
    _objc_opt_class(PTR_PTR_1126b2358);
    puVar7 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar2);
    puVar2 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar1 + 8;
    _objc_loadWeakRetained();
    puVar7 = puVar5;
    func_0x00010bfce400(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b23d0;
    _objc_opt_class(PTR_PTR_1126b23d0);
    puVar7 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar6);
    puVar6 = puVar8;
    if (((ulong)puVar7 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar8);
    uVar9 = *(undefined8 *)(puVar1 + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bfb25e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010bf490e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0c45e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar7;
    func_0x00010c0c5180(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb620(uVar9);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
  return;
}



/* Entry: 104f06218; end: 104f06477; -[SCMemoriesChatMediaFlashbackViewStatePlugin operaViewDidSendEvent:page:params:] */

void FUN_104f06218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar5 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar1 = PTR_PTR_1126b2358;
    _objc_opt_class(PTR_PTR_1126b2358);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar6 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar3 = lVar4;
    func_0x00010bfce400(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126b23d0;
    _objc_opt_class(PTR_PTR_1126b23d0);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar1);
    uVar6 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb25e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar5;
    func_0x00010bf490e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0c45e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar8;
    func_0x00010c0c5180(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb620(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(lVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f06478; end: 104f064a3; -[SCMemoriesChatMediaFlashbackViewStatePlugin .cxx_destruct] */

void FUN_104f06478(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f064a4; end: 104f0665f; -[SCMemoriesChatMediaPlaybackContent initWithConsistentId:messageType:messageSenderId:messageSentTimestamp:mediaContent:overlayKey:loadState:participants:messageAnalyticsId:storyType:] */

undefined8 *
FUN_104f064a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e4f88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    puVar1[2] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f06660; end: 104f06683; -[SCMemoriesChatMediaPlaybackContent copyWithZone:] */

undefined8 FUN_104f06660(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f06684; end: 104f0674f; -[SCMemoriesChatMediaPlaybackContent hash] */

undefined8 * FUN_104f06684(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  puVar3 = &uStack_78;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104f06878:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f06884;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[2] == param_3[2] && (puVar3[7] == param_3[7])) && (puVar3[10] == param_3[10])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[8];
                if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[9];
                  if (puVar6 != (undefined8 *)param_3[9]) {
                    func_0x00010c071ae0();
                    goto LAB_104f06884;
                  }
                  goto LAB_104f06878;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f06884:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f06750; end: 104f0689f; -[SCMemoriesChatMediaPlaybackContent isEqual:] */

long FUN_104f06750(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f06878:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f06884;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_104f06884;
                  }
                  goto LAB_104f06878;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f06884:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f068a0; end: 104f068a7; -[SCMemoriesChatMediaPlaybackContent consistentId] */

undefined8 FUN_104f068a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f068a8; end: 104f068af; -[SCMemoriesChatMediaPlaybackContent messageType] */

undefined8 FUN_104f068a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f068b0; end: 104f068b7; -[SCMemoriesChatMediaPlaybackContent messageSenderId] */

undefined8 FUN_104f068b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f068b8; end: 104f068bf; -[SCMemoriesChatMediaPlaybackContent messageSentTimestamp] */

undefined8 FUN_104f068b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f068c0; end: 104f068c7; -[SCMemoriesChatMediaPlaybackContent mediaContent] */

undefined8 FUN_104f068c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f068c8; end: 104f068cf; -[SCMemoriesChatMediaPlaybackContent overlayKey] */

undefined8 FUN_104f068c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f068d0; end: 104f068d7; -[SCMemoriesChatMediaPlaybackContent loadState] */

undefined8 FUN_104f068d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f068d8; end: 104f068df; -[SCMemoriesChatMediaPlaybackContent participants] */

undefined8 FUN_104f068d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f068e0; end: 104f068e7; -[SCMemoriesChatMediaPlaybackContent messageAnalyticsId] */

undefined8 FUN_104f068e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f068e8; end: 104f068ef; -[SCMemoriesChatMediaPlaybackContent storyType] */

undefined8 FUN_104f068e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104f068f0; end: 104f0695b; -[SCMemoriesChatMediaPlaybackContent .cxx_destruct] */

void FUN_104f068f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f0695c; end: 104f06a07; -[SCMemoriesChatMediaPlaybackContentGroup initWithConversationId:flashbackId:] */

undefined1 *
FUN_104f0695c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4f90;
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



/* Entry: 104f06a08; end: 104f06a2b; -[SCMemoriesChatMediaPlaybackContentGroup copyWithZone:] */

undefined8 FUN_104f06a08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f06a2c; end: 104f06a9f; -[SCMemoriesChatMediaPlaybackContentGroup hash] */

undefined8 * FUN_104f06a2c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_104f06b20:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f06b2c;
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
          goto LAB_104f06b2c;
        }
        goto LAB_104f06b20;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f06b2c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f06aa0; end: 104f06b47; -[SCMemoriesChatMediaPlaybackContentGroup isEqual:] */

long FUN_104f06aa0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f06b20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f06b2c;
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
          goto LAB_104f06b2c;
        }
        goto LAB_104f06b20;
      }
    }
    lVar3 = 0;
  }
LAB_104f06b2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f06b48; end: 104f06b4f; -[SCMemoriesChatMediaPlaybackContentGroup conversationId] */

undefined8 FUN_104f06b48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f06b50; end: 104f06b57; -[SCMemoriesChatMediaPlaybackContentGroup flashbackId] */

undefined8 FUN_104f06b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f06b58; end: 104f06b87; -[SCMemoriesChatMediaPlaybackContentGroup .cxx_destruct] */

void FUN_104f06b58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f06b88; end: 104f06bf3; +[SCMemoriesChatMediaPlaybackParticipants groupWithGroup:] */

void FUN_104f06b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b22b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f06bf4; end: 104f06c83; +[SCMemoriesChatMediaPlaybackParticipants oneOnOneWithCurrentUser:recipientUser:] */

void FUN_104f06bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b22b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f06c84; end: 104f06ca7; -[SCMemoriesChatMediaPlaybackParticipants copyWithZone:] */

undefined8 FUN_104f06c84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f06ca8; end: 104f06d2b; -[SCMemoriesChatMediaPlaybackParticipants hash] */

void FUN_104f06ca8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e4f98;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f06d2c; end: 104f06d6f; -[SCMemoriesChatMediaPlaybackParticipants internalInit] */

void FUN_104f06d2c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4f98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f06d70; end: 104f06e3f; -[SCMemoriesChatMediaPlaybackParticipants isEqual:] */

long FUN_104f06d70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f06e18:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f06e24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_104f06e24;
          }
          goto LAB_104f06e18;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f06e24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f06e40; end: 104f06ec7; -[SCMemoriesChatMediaPlaybackParticipants matchOneOnOne:group:] */

void FUN_104f06e40(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


