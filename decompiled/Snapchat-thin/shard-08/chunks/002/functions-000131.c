/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e442cc; end: 105e44403; +[SCCSendToSuggestionsComponentInsertSuggestions invokeWithJSRuntimeProvider:userIds:source:completionHandler:] */

void FUN_105e442cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_4);
  func_0x000105e44634();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105e4438c;
  puStack_58 = &UNK_1108ecb60;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_6;
  uStack_38 = param_5;
  func_0x000105e44634();
  func_0x000105e4461c();
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  func_0x000105e44660();
  func_0x000105e44614();
  _objc_release(lStack_50);
  func_0x000105e44624();
  func_0x000105e445c4();
  func_0x000105e4462c();
  return;
}



/* Entry: 105e44404; end: 105e4443b; +[SCCSendToSuggestionsComponentInsertSuggestions valdiMarshallableObjectDescriptor] */

void FUN_105e44404(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ecbc0;
  param_1[1] = &PTR_DAT_1108ecbf0;
  param_1[2] = &PTR_s_ooi_o_1108ecb90;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105e4443c; end: 105e4449f;  */

void FUN_105e4443c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000105e445e0();
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105e44588;
  puStack_30 = &UNK_11086a270;
  uStack_28 = param_1;
  func_0x000105e4461c();
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x000105e44614();
  func_0x000105e445c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e444a0; end: 105e444ab; +[SCCSendToSuggestionsComponentSendToSuggestionsBar componentPath] */

undefined ** FUN_105e444a0(void)

{
  return &PTR____CFConstantStringClassReference_110e2c238;
}



/* Entry: 105e444ac; end: 105e444db; -[SCCSendToSuggestionsComponentSendToSuggestionsBar initWithViewModel:componentContext:runtime:] */

void FUN_105e444ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed4a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105e444dc; end: 105e4451b; -[SCCSendToSuggestionsComponentSendToSuggestionsBar setViewModel:] */

void FUN_105e444dc(void)

{
  undefined8 unaff_x20;
  
  func_0x000105e4463c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000105e445c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 105e4451c; end: 105e4455b; -[SCCSendToSuggestionsComponentSendToSuggestionsBar viewModel] */

void FUN_105e4451c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e445c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e4455c; end: 105e445b3;  */

void FUN_105e4455c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105e445b4; end: 105e44687;  */

void FUN_105e445b4(void)

{
  return;
}



/* Entry: 105e44688; end: 105e4468f; -[SCCSendToSuggestionsComponentEntityType__Enum init] */

void FUN_105e44688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105e44690; end: 105e44697; -[SCCSendToSuggestionsComponentSendToSuggestionSource__Enum init] */

void FUN_105e44690(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105e44698; end: 105e446cb; -[SCCSendToSuggestionsComponentBaseEntity initWithEntityId:type:displayName:] */

void FUN_105e44698(undefined8 param_1)

{
  func_0x000105e448c4(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e446cc; end: 105e446df; +[SCCSendToSuggestionsComponentBaseEntity valdiMarshallableObjectDescriptor] */

void FUN_105e446cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ecc30;
  param_1[1] = &PTR_DAT_1108ecca8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e446e0; end: 105e4471b; -[SCCSendToSuggestionsComponentSendToSuggestionsBarContext initWithSendToSelectionsObservable:suggestionContext:] */

void FUN_105e446e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed4b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105e4471c; end: 105e4472f; +[SCCSendToSuggestionsComponentSendToSuggestionsBarContext valdiMarshallableObjectDescriptor] */

void FUN_105e4471c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108eccb8;
  param_1[1] = &PTR_s_SCBridgeObservable_1108ecd00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e44730; end: 105e44763; -[SCCSendToSuggestionsComponentSendToSuggestionsBarViewModel init] */

void FUN_105e44730(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed4c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105e44764; end: 105e4478b; +[SCCSendToSuggestionsComponentSendToSuggestionsBarViewModel valdiMarshallableObjectDescriptor] */

void FUN_105e44764(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ecd50;
  param_1[1] = &PTR_DAT_1108ecdc8;
  param_1[2] = &PTR_s_oob_v_1108ecd20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e4478c; end: 105e447b7;  */

undefined8 FUN_105e4478c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 105e447b8; end: 105e44837;  */

void FUN_105e447b8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e44884;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105e44838; end: 105e4486f; -[SCCSendToSuggestionsComponentSuggestionContext initWithFriendStore:cofStore:] */

void FUN_105e44838(undefined8 param_1)

{
  func_0x000105e448c4(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e44870; end: 105e44883; +[SCCSendToSuggestionsComponentSuggestionContext valdiMarshallableObjectDescriptor] */

void FUN_105e44870(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendStore_1108ecdd8;
  param_1[1] = &PTR_s_SCCFriendStoring_1108ece68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e44884; end: 105e448b3;  */

void FUN_105e44884(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105e448b4; end: 105e448d3;  */

void FUN_105e448b4(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e448d4; end: 105e44987; -[SCTopicSendToActionHandler initWithTopicsCollection:delegate:spotlightPlaceTagsLogger:] */

undefined1 *
FUN_105e448d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed4d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e44988; end: 105e44d87; -[SCTopicSendToActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105e44988(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar8 == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0();
    uVar8 = param_4;
    if ((int)uVar2 == 0) {
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar2 != 0) {
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c0e38;
        _objc_opt_class(PTR_PTR_1126c0e38);
        uVar7 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar6);
        uVar2 = uVar8;
        if ((uVar7 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar8);
        if (uVar2 == 0) goto LAB_105e44d2c;
        lVar3 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c12ec20();
        goto LAB_105e44acc;
      }
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        uVar2 = uVar1;
        func_0x00010c0720c0();
        if ((int)uVar2 == 0) {
          uVar2 = uVar1;
          func_0x00010c0720c0();
          if ((int)uVar2 == 0) {
            uVar2 = uVar1;
            func_0x00010c0720c0();
            if ((int)uVar2 == 0) {
              uVar2 = uVar1;
              func_0x00010c0720c0();
              if ((int)uVar2 == 0) {
                uVar9 = 0;
                goto LAB_105e44d3c;
              }
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126c0e50;
              _objc_opt_class(PTR_PTR_1126c0e50);
              uVar7 = uVar8;
              _objc_opt_isKindOfClass(uVar8,puVar6);
              uVar2 = uVar8;
              if ((uVar7 & 1) == 0) {
                uVar2 = 0;
              }
              _objc_retain(uVar2);
              _objc_release(uVar8);
              if (uVar2 == 0) goto LAB_105e44d2c;
              param_1 = param_1 + 0x10;
              _objc_loadWeakRetained(param_1);
              func_0x00010c12dae0();
            }
            else {
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126c0e50;
              _objc_opt_class(PTR_PTR_1126c0e50);
              uVar7 = uVar8;
              _objc_opt_isKindOfClass(uVar8,puVar6);
              uVar2 = uVar8;
              if ((uVar7 & 1) == 0) {
                uVar2 = 0;
              }
              _objc_retain(uVar2);
              _objc_release(uVar8);
              if (uVar2 == 0) goto LAB_105e44d2c;
              param_1 = param_1 + 0x10;
              _objc_loadWeakRetained(param_1);
              func_0x00010befa940();
            }
          }
          else {
            lVar3 = param_1 + 8;
            _objc_loadWeakRetained(lVar3);
            func_0x00010c10d900();
            _objc_release(lVar3);
            uVar2 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126c0e50;
            _objc_opt_class(PTR_PTR_1126c0e50);
            uVar7 = uVar2;
            _objc_opt_isKindOfClass(uVar2,puVar6);
            uVar8 = uVar2;
            if ((uVar7 & 1) == 0) {
              uVar8 = 0;
            }
            _objc_retain(uVar8);
            _objc_release(uVar2);
            param_1 = param_1 + 0x18;
            _objc_loadWeakRetained(param_1);
            lVar3 = param_1;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            if (uVar8 == 0) {
              func_0x00010c0b18c0(lVar3);
            }
            else {
              uVar7 = uVar2;
              func_0x00010c0fd0e0(uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar2;
              func_0x00010c0fd640(uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c15ffa0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0fd640(uVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c247be0();
              func_0x00010c0b18e0(lVar3);
              _objc_release(uVar2);
              _objc_release(uVar5);
              _objc_release(uVar4);
              _objc_release(uVar7);
            }
            _objc_release(lVar3);
          }
          goto LAB_105e44ae4;
        }
        uVar8 = param_1 + 8;
        _objc_loadWeakRetained(uVar8);
        func_0x00010bf84840();
      }
      else {
        uVar8 = param_1 + 8;
        _objc_loadWeakRetained(uVar8);
        func_0x00010c2825a0();
      }
    }
    else {
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c0e38;
      _objc_opt_class(PTR_PTR_1126c0e38);
      uVar7 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar6);
      uVar2 = uVar8;
      if ((uVar7 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar8);
      if (uVar2 == 0) {
LAB_105e44d2c:
        uVar8 = 0;
      }
      else {
        lVar3 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar3);
        func_0x00010befc580();
LAB_105e44acc:
        _objc_release(lVar3);
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010c275b00();
LAB_105e44ae4:
        _objc_release(param_1);
      }
    }
  }
  else {
    uVar8 = param_1 + 8;
    _objc_loadWeakRetained(uVar8);
    func_0x00010c10e9e0();
  }
  _objc_release(uVar8);
  uVar9 = 1;
LAB_105e44d3c:
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar9;
}



/* Entry: 105e44d88; end: 105e44db7; -[SCTopicSendToActionHandler .cxx_destruct] */

void FUN_105e44d88(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e44db8; end: 105e44dc3; +[SCTopicSendToSuggestedTopicsDataProvider announcerIdentifier] */

undefined ** FUN_105e44db8(void)

{
  return &PTR____CFConstantStringClassReference_110e2c278;
}



/* Entry: 105e44dc4; end: 105e44dcb; -[SCTopicSendToSuggestedTopicsDataProvider addListener:] */

void FUN_105e44dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105e44dcc; end: 105e44dd3; -[SCTopicSendToSuggestedTopicsDataProvider removeListener:] */

void FUN_105e44dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105e44dd4; end: 105e44e37; -[SCTopicSendToSuggestedTopicsDataProvider init] */

undefined1 * FUN_105e44dd4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed4d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e44e38; end: 105e44ef7; -[SCTopicSendToSuggestedTopicsDataProvider setSectionDataModel:] */

void FUN_105e44e38(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_105e44ee4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  _objc_release(uVar3);
LAB_105e44ee4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e44ef8; end: 105e44fcf; -[SCTopicSendToSuggestedTopicsDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105e44ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar5 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105e44fd0;
  puStack_40 = &UNK_110845ab0;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  uVar4 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e44fd0; end: 105e4515f;  */

void FUN_105e44fd0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c142240();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    ppuVar7 = *(undefined ***)(param_1 + 0x20);
    func_0x00010c142240(param_2);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c51f8;
    _objc_retain();
    _objc_alloc(puVar3);
    ppuVar4 = ppuVar7;
    func_0x00010bfdedc0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar7;
    func_0x00010c2620a0();
    if (ppuVar5 == (undefined **)0x3) {
      func_0x000108f58324();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (ppuVar5 == (undefined **)0x2) {
      func_0x000108f5830c();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (ppuVar5 == (undefined **)0x1) {
      func_0x000108f582f4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    func_0x00010c0538a0(puVar3);
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    puVar6 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    _objc_release(puVar3);
    _objc_release(ppuVar7);
  }
  else {
    puVar6 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e45160; end: 105e4528b; -[SCTopicSendToSuggestedTopicsDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105e45160(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
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
  pcStack_68 = FUN_105e4528c;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e2c258;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105e4528c; end: 105e452d3;  */

void FUN_105e4528c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e452d4; end: 105e4535b; -[SCTopicSendToSuggestedTopicsDataProvider _configureCell:] */

void FUN_105e452d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5200;
  _objc_opt_class(PTR_PTR_1126c5200);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1656e0(param_3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e4535c; end: 105e453db; -[SCTopicSendToSuggestedTopicsDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_105e4535c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e2c258;
  puVar1 = PTR_PTR_1126c5200;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 105e453dc; end: 105e453e3; -[SCTopicSendToSuggestedTopicsDataProvider numberOfSections] */

undefined8 FUN_105e453dc(void)

{
  return 1;
}



/* Entry: 105e453e4; end: 105e45453; -[SCTopicSendToSuggestedTopicsDataProvider numberOfItemsInSection:] */

ulong FUN_105e453e4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar4 = *(ulong *)(param_1 + 0x10);
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
  return uVar3;
}



/* Entry: 105e45454; end: 105e4545b; -[SCTopicSendToSuggestedTopicsDataProvider sectionDataModel] */

undefined8 FUN_105e45454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e4545c; end: 105e45473; -[SCTopicSendToSuggestedTopicsDataProvider dataProviderDelegate] */

void FUN_105e4545c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e45474; end: 105e4547f; -[SCTopicSendToSuggestedTopicsDataProvider setDataProviderDelegate:] */

void FUN_105e45474(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105e45480; end: 105e45487; -[SCTopicSendToSuggestedTopicsDataProvider updateQueuePerformer] */

undefined8 FUN_105e45480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e45488; end: 105e454b7; -[SCTopicSendToSuggestedTopicsDataProvider setUpdateQueuePerformer:] */

void FUN_105e45488(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e454b8; end: 105e454cf; -[SCTopicSendToSuggestedTopicsDataProvider addTopicsDelegate] */

void FUN_105e454b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e454d0; end: 105e454db; -[SCTopicSendToSuggestedTopicsDataProvider setAddTopicsDelegate:] */

void FUN_105e454d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105e454dc; end: 105e45527; -[SCTopicSendToSuggestedTopicsDataProvider .cxx_destruct] */

void FUN_105e454dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e45528; end: 105e4562b;  */

void FUN_105e45528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  puVar2 = puVar1;
  func_0x000108f58204();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c5208;
  _objc_alloc(PTR_PTR_1126c5208);
  func_0x00010c0532c0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e4562c; end: 105e45637; +[SCTopicSendToTopicsWithDescriptionDataProvider announcerIdentifier] */

undefined ** FUN_105e4562c(void)

{
  return &PTR____CFConstantStringClassReference_110e2c2d8;
}



/* Entry: 105e45638; end: 105e4563f; -[SCTopicSendToTopicsWithDescriptionDataProvider addListener:] */

void FUN_105e45638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105e45640; end: 105e45647; -[SCTopicSendToTopicsWithDescriptionDataProvider removeListener:] */

void FUN_105e45640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105e45648; end: 105e45917; -[SCTopicSendToTopicsWithDescriptionDataProvider initWithTopicsCollection:viewMode:remixConfiguration:remixingSpotlightToSpotlightEnabled:circumstanceEngine:spotlightPlaceTagsViewProvider:snapCaptureLocation:] */

undefined8 *
FUN_105e45648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126ed4e0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar1[2] = param_4;
    _objc_retain(param_3);
    uVar4 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar4 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar4);
    _objc_initWeak(auStack_88,puVar1);
    uVar3 = puVar1[3];
    func_0x00010c24b0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105e45918;
    puStack_98 = &UNK_110843540;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = puVar1[3];
    func_0x00010c0fdda0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e45918; end: 105e4598b;  */

void FUN_105e45918(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c125220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4598c; end: 105e45993; -[SCTopicSendToTopicsWithDescriptionDataProvider setSectionDataModel:] */

void FUN_105e4598c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSectionDataModel_alwaysUpdat_1125875d8,param_3,0);
  return;
}



/* Entry: 105e45994; end: 105e45a5f; -[SCTopicSendToTopicsWithDescriptionDataProvider _setSectionDataModel:alwaysUpdate:] */

void FUN_105e45994(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x60);
    _objc_retain(uVar3);
    _objc_retain(param_3);
    if (uVar3 != param_3) {
      if (param_3 == 0) {
        _objc_release(uVar3);
      }
      else {
        uVar2 = uVar3;
        func_0x00010c071ae0(uVar3,param_2,param_3);
        _objc_release(param_3);
        _objc_release(uVar3);
        if ((uVar2 & 1) != 0) goto LAB_105e45a40;
      }
      goto LAB_105e459bc;
    }
    _objc_release(param_3);
  }
  else {
LAB_105e459bc:
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
    _objc_release(uVar1);
    uVar3 = param_1 + 0x68;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  _objc_release(uVar3);
LAB_105e45a40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e45a60; end: 105e45b33; -[SCTopicSendToTopicsWithDescriptionDataProvider refreshData] */

void FUN_105e45a60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfca060(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e45b34; end: 105e45bb7;  */

void FUN_105e45b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    func_0x00010bea70c0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e45bb8; end: 105e45bcf; -[SCTopicSendToTopicsWithDescriptionDataProvider updateViewMode:] */

void FUN_105e45bb8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c125230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_refreshData_112626ea8);
  return;
}



/* Entry: 105e45bd0; end: 105e45d63; -[SCTopicSendToTopicsWithDescriptionDataProvider _onTaggedPlacesUpdate:] */

void FUN_105e45bd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  lVar1 = param_3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010c22f2e0();
        if ((int)uVar3 != 0) {
          if (uVar7 != 0) {
            uVar3 = uVar7;
            func_0x00010c27dd80();
            uVar4 = uVar8;
            func_0x00010c27dd80();
            if (uVar3 <= uVar4) goto LAB_105e45cb8;
          }
          _objc_retain(uVar8);
          _objc_release(uVar7);
          uVar7 = uVar8;
        }
LAB_105e45cb8:
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (uVar7 != *(ulong *)(param_1 + 0x30)) {
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar7;
    _objc_release(uVar5);
    func_0x00010c125220(param_1);
  }
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105e45d64;
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_105e45db8;
    puStack_150 = &UNK_110845ab0;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x000100504554(puVar6,&puStack_168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 105e45d64; end: 105e45db7; -[SCTopicSendToTopicsWithDescriptionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105e45d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e45db8;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e45db8; end: 105e45ef3;  */

void FUN_105e45db8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  func_0x00010c142240();
  puVar3 = PTR_PTR_1126b02a8;
  lVar7 = *(long *)(param_1 + 0x20);
  if ((param_2 == 0) && ((*(ulong *)(lVar7 + 0x10) & 0xfffffffffffffffd) == 0)) {
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    uVar2 = *(undefined8 *)(lVar7 + 0x30);
    uVar8 = *(undefined8 *)(lVar7 + 0x38);
    _objc_retain(uVar8);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    _objc_alloc(puVar3);
    func_0x00010c01b460();
    puVar4 = puVar3;
    func_0x000108f58204();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c5208;
    _objc_alloc(PTR_PTR_1126c5208);
    func_0x00010c0532c0();
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar6 = *(undefined **)(lVar7 + 0x28);
    FUN_105e45528(puVar6,*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e45ef4; end: 105e45f8b; -[SCTopicSendToTopicsWithDescriptionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105e45ef4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_90,puVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105e460b8;
    puStack_a0 = &UNK_110845ae0;
    puVar5 = auStack_90;
    _objc_copyWeak(auStack_98,puVar5);
    ppuVar2 = &puStack_b8;
    _objc_retainBlock();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e2c298;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_80 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_98);
    puVar4 = auStack_90;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4d40();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e45f8c; end: 105e460b7; -[SCTopicSendToTopicsWithDescriptionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105e45f8c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
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
  pcStack_68 = FUN_105e460b8;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e2c298;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105e460b8; end: 105e460ff;  */

void FUN_105e460b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e46100; end: 105e461cb; -[SCTopicSendToTopicsWithDescriptionDataProvider _configureCell:] */

void FUN_105e46100(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5210;
  _objc_opt_class(PTR_PTR_1126c5210);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar4 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1f82e0(param_3);
    _objc_release(lVar4);
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1656e0(param_3);
    _objc_release(param_1);
    func_0x00010c17c5e0(param_3);
    func_0x00010c208920(param_3);
    func_0x00010c203b20(param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e461cc; end: 105e461d3; -[SCTopicSendToTopicsWithDescriptionDataProvider numberOfSections] */

undefined8 FUN_105e461cc(void)

{
  return 1;
}



/* Entry: 105e461d4; end: 105e461db; -[SCTopicSendToTopicsWithDescriptionDataProvider numberOfItemsInSection:] */

undefined8 FUN_105e461d4(void)

{
  return 1;
}



/* Entry: 105e461dc; end: 105e461e3; -[SCTopicSendToTopicsWithDescriptionDataProvider sectionDataModel] */

undefined8 FUN_105e461dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105e461e4; end: 105e461fb; -[SCTopicSendToTopicsWithDescriptionDataProvider dataProviderDelegate] */

void FUN_105e461e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e461fc; end: 105e46207; -[SCTopicSendToTopicsWithDescriptionDataProvider setDataProviderDelegate:] */

void FUN_105e461fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 105e46208; end: 105e4620f; -[SCTopicSendToTopicsWithDescriptionDataProvider updateQueuePerformer] */

undefined8 FUN_105e46208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105e46210; end: 105e4623f; -[SCTopicSendToTopicsWithDescriptionDataProvider setUpdateQueuePerformer:] */

void FUN_105e46210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e46240; end: 105e46257; -[SCTopicSendToTopicsWithDescriptionDataProvider searchDelegate] */

void FUN_105e46240(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e46258; end: 105e46263; -[SCTopicSendToTopicsWithDescriptionDataProvider setSearchDelegate:] */

void FUN_105e46258(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105e46264; end: 105e4627b; -[SCTopicSendToTopicsWithDescriptionDataProvider addTopicsDelegate] */

void FUN_105e46264(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e4627c; end: 105e46287; -[SCTopicSendToTopicsWithDescriptionDataProvider setAddTopicsDelegate:] */

void FUN_105e4627c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 105e46288; end: 105e4633b; -[SCTopicSendToTopicsWithDescriptionDataProvider .cxx_destruct] */

void FUN_105e46288(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e4633c; end: 105e46503; -[SCTopicCarouselViewProviderImpl createTopicSelectionCarouselViewControllerWithTopicsCollection:suggestedTopicsRequester:uiContainer:selectionDelegate:sendToDelegate:isSpotlightSection:useV10Layout:matchaSendToEnabled:placeSearchViewProvider:spotlightPlaceTagsLogger:snapCaptureLocation:sendToExperimentConfiguration:remixConfiguration:remixingSpotlightToSpotlightEnabled:circumstanceEngine:isFriendsOnlyProfile:] */

void FUN_105e4633c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined1 in_stack_00000040;
  
  puVar1 = PTR_PTR_1126c5220;
  _objc_retain();
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0547e0();
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1b1340(puVar1,param_2,in_stack_00000040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e46504; end: 105e4650f; -[SCTopicCarouselViewProviderImpl topicSelectionCarouselCellClass] */

void FUN_105e46504(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126c50a0);
  return;
}



/* Entry: 105e46510; end: 105e46677; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105e46510(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ed4e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112737e68;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar4);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010bead3a0(puVar1);
    func_0x00010beb1880(puVar1);
    func_0x00010bdc4ae0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e46678; end: 105e4688f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _setupInputTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e46678(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b51f8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112737e6c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112737e68));
  func_0x00010b8166c0();
  func_0x00010c1b3b40(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c1677a0(uVar2);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfb3a80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcaa0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca60(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c165aa0(0x4014000000000000,*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c2131f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4024000000000000,0x4014000000000000,0x4024000000000000,0x4024000000000000,
             *(undefined8 *)(param_1 + lVar4),PTR_s_setTextContainerInset__1126626a0);
  return;
}



/* Entry: 105e46890; end: 105e46943; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _setupWordCountLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e46890(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112737e70;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737e68),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105e46944; end: 105e46b0b; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _setupRemixView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e46944(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR_PTR_1126c5228;
  _objc_alloc();
  func_0x00010c0563e0();
  lVar35 = (long)_DAT_112737e74;
  uVar29 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar13;
  _objc_release(uVar29);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar35));
  lVar36 = (long)_DAT_112737e68;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar36));
  lVar2 = *(long *)(param_1 + _DAT_112737e78);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + lVar36);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar3;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar4;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13);
  _objc_release(puVar33);
  _objc_release(uVar37);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar29);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
  lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar36 = (long)_DAT_112737e7c;
  lVar28 = lVar2;
  if (*(long *)(lVar2 + lVar36) == 0) {
    puVar13 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar29 = *(undefined8 *)(lVar2 + _DAT_112737e80);
    *(undefined **)(lVar2 + _DAT_112737e80) = puVar13;
    _objc_release(uVar29);
    lVar32 = lVar2 + _DAT_112737e84;
    _objc_loadWeakRetained();
    lVar6 = lVar32;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar6;
    func_0x00010bf59100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar32);
    if (lVar28 != 0) {
      _objc_retain(lVar28);
      uVar29 = *(undefined8 *)(lVar2 + lVar36);
      *(long *)(lVar2 + lVar36) = lVar28;
      _objc_release(uVar29);
      lVar32 = (long)_DAT_112737e68;
      func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar32));
      puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar5 = *(undefined8 *)(lVar2 + lVar36);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar5;
      func_0x00010bf49420(0x4039000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar2 + lVar36);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar2 + lVar32);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar2 + lVar36);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar2 + lVar32);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(lVar2 + lVar36);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(lVar2 + lVar32);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      func_0x00010bf493c0(0xc014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar13);
      _objc_release(puVar33);
      _objc_release(uVar4);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar37);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar29);
      _objc_release(uVar5);
      func_0x00010beda820(lVar2);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar35) {
    return;
  }
  ___stack_chk_fail();
  lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar36 = (long)_DAT_112737e70;
  func_0x00010c12c960(*(undefined8 *)(lVar28 + lVar36));
  lVar2 = lVar28;
  func_0x00010bf4dce0(lVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = (long)_DAT_112737e68;
  uVar4 = *(undefined8 *)(lVar28 + lVar2);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar4;
  func_0x00010bf49420(0x405a800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar28 + lVar36);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar28 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar5;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar28 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar28 + lVar2);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar33;
  func_0x00010beef8c0(puVar13);
  _objc_release(puVar33);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar37);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar29);
  _objc_release(uVar4);
  puVar13 = *(undefined **)(lVar28 + _DAT_112737e6c);
  func_0x00010c2131e0(0x4024000000000000,0x4014000000000000,0x4024000000000000,0x4034000000000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar35) {
    return;
  }
  ___stack_chk_fail();
  puVar33 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = (long)_DAT_112737e78;
  puVar15 = puVar13;
  if (*(long *)(puVar13 + lVar28) == 0) {
    puVar14 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar15 = puVar33;
    func_0x00010c219b60();
    func_0x000108f5812c();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar15;
    func_0x00010c23b9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar33);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar33);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar33);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar33);
    _objc_release(puVar14);
    puVar14 = puVar33;
    func_0x00010c08c0e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar14);
    puVar14 = puVar33;
    func_0x00010c08c0e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar14);
    puVar14 = puVar13;
    func_0x00010b8166c0();
    bVar1 = (int)puVar14 == 0;
    uVar29 = 0x4020000000000000;
    if (bVar1) {
      uVar29 = 0x4018000000000000;
    }
    uVar37 = 0x4018000000000000;
    if (bVar1) {
      uVar37 = 0x4020000000000000;
    }
    uVar3 = 0xc000000000000000;
    if (bVar1) {
      uVar3 = 0x4000000000000000;
    }
    uVar4 = 0x4000000000000000;
    if (bVar1) {
      uVar4 = 0xc000000000000000;
    }
    func_0x00010c181e40(0x4010000000000000,uVar29,0x4010000000000000,uVar37,puVar33);
    func_0x00010c2163a0(0,uVar3,0,uVar4,puVar33);
    puVar14 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar33);
    _objc_release(puVar14);
    uVar29 = *(undefined8 *)(puVar13 + lVar28);
    *(undefined **)(puVar13 + lVar28) = puVar33;
    _objc_retain(puVar33);
    _objc_release(uVar29);
    lVar35 = (long)_DAT_112737e68;
    func_0x00010befbb60(*(undefined8 *)(puVar13 + lVar35));
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(puVar13 + lVar28);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar4;
    func_0x00010bf49580(0x4062c00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar13 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar13 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar5;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar13 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar13 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar33);
    _objc_release(puVar13);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar37);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar29);
    _objc_release(uVar4);
    _objc_release(puVar34);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = (long)_DAT_112737e68;
  lVar2 = *(long *)(puVar15 + lVar35);
  if (((lVar2 != 0) && (lVar36 = (long)_DAT_112737e6c, *(long *)(puVar15 + lVar36) != 0)) &&
     (lVar32 = (long)_DAT_112737e70, *(long *)(puVar15 + lVar32) != 0)) {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010bf4dce0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(puVar15 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar37;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = (long)_DAT_112737e8c;
    uVar4 = *(undefined8 *)(puVar15 + lVar31);
    *(undefined **)(puVar15 + lVar31) = puVar14;
    _objc_release(uVar4);
    _objc_release(uVar29);
    _objc_release(uVar3);
    _objc_release(uVar37);
    _objc_release(lVar6);
    _objc_release(puVar33);
    _objc_release(puVar13);
    _objc_release(lVar2);
    puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar30 = *(undefined **)(puVar15 + lVar31);
    lVar2 = *(long *)(puVar15 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar33;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar15 + lVar36);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar15 + lVar36);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar20;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar15 + lVar36);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar15 + lVar36);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(puVar15 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar15 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar26;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar30;
    func_0x00010beef8c0(puVar13);
    _objc_release(puVar30);
    _objc_release(puVar15);
    _objc_release(uVar8);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar7);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar5);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar4);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar37);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(uVar10);
    _objc_release(uVar29);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar9);
    _objc_release(lVar6);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  lVar28 = (long)_DAT_112737e90;
  puVar33 = *(undefined **)(lVar2 + lVar28);
  _objc_retain(puVar33);
  _objc_retain(puVar14);
  puVar13 = puVar14;
  if (puVar33 == puVar14) {
LAB_105e47be4:
    _objc_release(puVar13);
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      _objc_release(puVar33);
    }
    else {
      puVar13 = puVar33;
      func_0x00010c071ae0();
      _objc_release(puVar14);
      _objc_release(puVar33);
      if (((ulong)puVar13 & 1) != 0) goto LAB_105e47bfc;
    }
    puVar13 = PTR_PTR_1126c5208;
    _objc_retain(puVar14);
    _objc_opt_class(puVar13);
    puVar33 = puVar14;
    _objc_opt_isKindOfClass(puVar14,puVar13);
    puVar13 = puVar14;
    if (((ulong)puVar33 & 1) == 0) {
      puVar13 = (undefined *)0x0;
    }
    _objc_retain(puVar13);
    _objc_release(puVar14);
    puVar33 = PTR_PTR_1126c5208;
    if (puVar13 != (undefined *)0x0) {
      puVar34 = *(undefined **)(lVar2 + lVar28);
      _objc_retain(puVar34);
      _objc_opt_class(puVar33);
      puVar15 = puVar34;
      _objc_opt_isKindOfClass(puVar34,puVar33);
      puVar13 = puVar34;
      if (((ulong)puVar15 & 1) == 0) {
        puVar13 = (undefined *)0x0;
      }
      _objc_retain(puVar13);
      _objc_release(puVar34);
      puVar33 = puVar14;
      func_0x00010bf51e00();
      uVar29 = *(undefined8 *)(lVar2 + lVar28);
      *(undefined **)(lVar2 + lVar28) = puVar33;
      _objc_release(uVar29);
      puVar33 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(lVar2);
      _objc_release(puVar33);
      puVar33 = puVar14;
      func_0x00010c0fd720(puVar14);
      _objc_retainAutoreleasedReturnValue();
      lVar28 = (long)_DAT_112737e6c;
      func_0x00010c1dc9c0(*(undefined8 *)(lVar2 + lVar28));
      _objc_release(puVar33);
      func_0x00010bf8c420(puVar14);
      func_0x00010c21e900(*(undefined8 *)(lVar2 + lVar28));
      puVar33 = puVar14;
      func_0x00010c2711a0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar33;
      func_0x0001062cfcbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(lVar2 + lVar28));
      _objc_release(puVar15);
      _objc_release(puVar33);
      puVar33 = puVar14;
      func_0x00010bf8c420();
      if ((int)puVar33 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(lVar2 + lVar28));
      }
      puVar33 = puVar14;
      func_0x00010c1298e0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beafe20(lVar2);
      _objc_release(puVar33);
      puVar33 = puVar13;
      func_0x00010c2683a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c2683a0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be32ba0(lVar2);
      _objc_release(puVar15);
      _objc_release(puVar33);
      lVar28 = (long)_DAT_112737e74;
      if (*(long *)(lVar2 + lVar28) != 0) {
        func_0x00010c12c960();
        uVar29 = *(undefined8 *)(lVar2 + lVar28);
        *(undefined8 *)(lVar2 + lVar28) = 0;
        _objc_release(uVar29);
      }
      func_0x00010bee5080(lVar2);
      func_0x00010c1cbe20(lVar2);
      puVar33 = puVar14;
      goto LAB_105e47be4;
    }
    puVar33 = (undefined *)0x0;
  }
  _objc_release(puVar33);
LAB_105e47bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 105e46b0c; end: 105e46ddb; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _setupSpotlightPlaceTagCarouselWithShowRemixLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e46b0c(long param_1)

{
  bool bVar1;
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
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined *puVar33;
  undefined *puVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = (long)_DAT_112737e7c;
  lVar28 = param_1;
  if (*(long *)(param_1 + lVar35) == 0) {
    puVar10 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar27 = *(undefined8 *)(param_1 + _DAT_112737e80);
    *(undefined **)(param_1 + _DAT_112737e80) = puVar10;
    _objc_release(uVar27);
    lVar32 = param_1 + _DAT_112737e84;
    _objc_loadWeakRetained();
    lVar30 = lVar32;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar30;
    func_0x00010bf59100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar30);
    _objc_release(lVar32);
    if (lVar28 != 0) {
      _objc_retain(lVar28);
      uVar27 = *(undefined8 *)(param_1 + lVar35);
      *(long *)(param_1 + lVar35) = lVar28;
      _objc_release(uVar27);
      lVar32 = (long)_DAT_112737e68;
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar32));
      puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar2 = *(undefined8 *)(param_1 + lVar35);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar2;
      func_0x00010bf49420(0x4039000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar35);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar36 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar35);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar35);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar32);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf493c0(0xc014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar10);
      _objc_release(puVar33);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar37);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar36);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar27);
      _objc_release(uVar2);
      func_0x00010beda820(param_1);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  lVar35 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = (long)_DAT_112737e70;
  func_0x00010c12c960(*(undefined8 *)(lVar28 + lVar32));
  lVar26 = lVar28;
  func_0x00010bf4dce0(lVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar26);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = (long)_DAT_112737e68;
  uVar9 = *(undefined8 *)(lVar28 + lVar26);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar9;
  func_0x00010bf49420(0x405a800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar28 + lVar32);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar28 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar2;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar28 + lVar32);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar28 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar4;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar33;
  func_0x00010beef8c0(puVar10);
  _objc_release(puVar33);
  _objc_release(uVar37);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar36);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar27);
  _objc_release(uVar9);
  puVar10 = *(undefined **)(lVar28 + _DAT_112737e6c);
  func_0x00010c2131e0(0x4024000000000000,0x4014000000000000,0x4024000000000000,0x4034000000000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar35) {
    return;
  }
  ___stack_chk_fail();
  puVar33 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_112737e78;
  puVar12 = puVar10;
  if (*(long *)(puVar10 + lVar26) == 0) {
    puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar12 = puVar33;
    func_0x00010c219b60();
    func_0x000108f5812c();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar12;
    func_0x00010c23b9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar33);
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar33);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar33);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar33);
    _objc_release(puVar11);
    puVar11 = puVar33;
    func_0x00010c08c0e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar11);
    puVar11 = puVar33;
    func_0x00010c08c0e0(puVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar11);
    puVar11 = puVar10;
    func_0x00010b8166c0();
    bVar1 = (int)puVar11 == 0;
    uVar27 = 0x4020000000000000;
    if (bVar1) {
      uVar27 = 0x4018000000000000;
    }
    uVar36 = 0x4018000000000000;
    if (bVar1) {
      uVar36 = 0x4020000000000000;
    }
    uVar37 = 0xc000000000000000;
    if (bVar1) {
      uVar37 = 0x4000000000000000;
    }
    uVar9 = 0x4000000000000000;
    if (bVar1) {
      uVar9 = 0xc000000000000000;
    }
    func_0x00010c181e40(0x4010000000000000,uVar27,0x4010000000000000,uVar36,puVar33);
    func_0x00010c2163a0(0,uVar37,0,uVar9,puVar33);
    puVar11 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar33);
    _objc_release(puVar11);
    uVar27 = *(undefined8 *)(puVar10 + lVar26);
    *(undefined **)(puVar10 + lVar26) = puVar33;
    _objc_retain(puVar33);
    _objc_release(uVar27);
    lVar35 = (long)_DAT_112737e68;
    func_0x00010befbb60(*(undefined8 *)(puVar10 + lVar35));
    puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(puVar10 + lVar26);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar9;
    func_0x00010bf49580(0x4062c00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar10 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar10 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar2;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar10 + lVar26);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar10 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar4;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar33);
    _objc_release(puVar10);
    _objc_release(uVar37);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar36);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar27);
    _objc_release(uVar9);
    _objc_release(puVar34);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = (long)_DAT_112737e68;
  lVar28 = *(long *)(puVar12 + lVar35);
  if (((lVar28 != 0) && (lVar32 = (long)_DAT_112737e6c, *(long *)(puVar12 + lVar32) != 0)) &&
     (lVar30 = (long)_DAT_112737e70, *(long *)(puVar12 + lVar30) != 0)) {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010bf4dce0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(puVar12 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010bf1ff80(uVar37);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar36;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = (long)_DAT_112737e8c;
    uVar9 = *(undefined8 *)(puVar12 + lVar31);
    *(undefined **)(puVar12 + lVar31) = puVar11;
    _objc_release(uVar9);
    _objc_release(uVar27);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(lVar13);
    _objc_release(puVar33);
    _objc_release(puVar10);
    _objc_release(lVar28);
    puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar29 = *(undefined **)(puVar12 + lVar31);
    lVar28 = *(long *)(puVar12 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar33;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar12 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar7;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar12 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar18;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar12 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar12 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar12 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(puVar12 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar24;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar29;
    func_0x00010beef8c0(puVar10);
    _objc_release(puVar29);
    _objc_release(puVar12);
    _objc_release(uVar4);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar3);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar2);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar9);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar37);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar36);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar6);
    _objc_release(uVar27);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar5);
    _objc_release(lVar13);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  lVar26 = (long)_DAT_112737e90;
  puVar33 = *(undefined **)(lVar28 + lVar26);
  _objc_retain(puVar33);
  _objc_retain(puVar11);
  puVar10 = puVar11;
  if (puVar33 == puVar11) {
LAB_105e47be4:
    _objc_release(puVar10);
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      _objc_release(puVar33);
    }
    else {
      puVar10 = puVar33;
      func_0x00010c071ae0();
      _objc_release(puVar11);
      _objc_release(puVar33);
      if (((ulong)puVar10 & 1) != 0) goto LAB_105e47bfc;
    }
    puVar10 = PTR_PTR_1126c5208;
    _objc_retain(puVar11);
    _objc_opt_class(puVar10);
    puVar33 = puVar11;
    _objc_opt_isKindOfClass(puVar11,puVar10);
    puVar10 = puVar11;
    if (((ulong)puVar33 & 1) == 0) {
      puVar10 = (undefined *)0x0;
    }
    _objc_retain(puVar10);
    _objc_release(puVar11);
    puVar33 = PTR_PTR_1126c5208;
    if (puVar10 != (undefined *)0x0) {
      puVar34 = *(undefined **)(lVar28 + lVar26);
      _objc_retain(puVar34);
      _objc_opt_class(puVar33);
      puVar12 = puVar34;
      _objc_opt_isKindOfClass(puVar34,puVar33);
      puVar10 = puVar34;
      if (((ulong)puVar12 & 1) == 0) {
        puVar10 = (undefined *)0x0;
      }
      _objc_retain(puVar10);
      _objc_release(puVar34);
      puVar33 = puVar11;
      func_0x00010bf51e00();
      uVar27 = *(undefined8 *)(lVar28 + lVar26);
      *(undefined **)(lVar28 + lVar26) = puVar33;
      _objc_release(uVar27);
      puVar33 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(lVar28);
      _objc_release(puVar33);
      puVar33 = puVar11;
      func_0x00010c0fd720(puVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar26 = (long)_DAT_112737e6c;
      func_0x00010c1dc9c0(*(undefined8 *)(lVar28 + lVar26));
      _objc_release(puVar33);
      func_0x00010bf8c420(puVar11);
      func_0x00010c21e900(*(undefined8 *)(lVar28 + lVar26));
      puVar33 = puVar11;
      func_0x00010c2711a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar33;
      func_0x0001062cfcbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(lVar28 + lVar26));
      _objc_release(puVar12);
      _objc_release(puVar33);
      puVar33 = puVar11;
      func_0x00010bf8c420();
      if ((int)puVar33 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(lVar28 + lVar26));
      }
      puVar33 = puVar11;
      func_0x00010c1298e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beafe20(lVar28);
      _objc_release(puVar33);
      puVar33 = puVar10;
      func_0x00010c2683a0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c2683a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be32ba0(lVar28);
      _objc_release(puVar12);
      _objc_release(puVar33);
      lVar26 = (long)_DAT_112737e74;
      if (*(long *)(lVar28 + lVar26) != 0) {
        func_0x00010c12c960();
        uVar27 = *(undefined8 *)(lVar28 + lVar26);
        *(undefined8 *)(lVar28 + lVar26) = 0;
        _objc_release(uVar27);
      }
      func_0x00010bee5080(lVar28);
      func_0x00010c1cbe20(lVar28);
      puVar33 = puVar11;
      goto LAB_105e47be4;
    }
    puVar33 = (undefined *)0x0;
  }
  _objc_release(puVar33);
LAB_105e47bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 105e46ddc; end: 105e46ffb; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _updateLayoutForSpotlightPlaceTagCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e46ddc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = (long)_DAT_112737e70;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar32));
  lVar33 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar33);
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar33 = (long)_DAT_112737e68;
  uVar2 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar2;
  func_0x00010bf49420(0x405a800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar3;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar5;
  func_0x00010bf493c0(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar30;
  func_0x00010beef8c0(puVar7);
  _objc_release(puVar30);
  _objc_release(uVar37);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar36);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar35);
  _objc_release(uVar2);
  puVar7 = *(undefined **)(param_1 + _DAT_112737e6c);
  func_0x00010c2131e0(0x4024000000000000,0x4014000000000000,0x4024000000000000,0x4034000000000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  puVar30 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar33 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_112737e78;
  puVar9 = puVar7;
  if (*(long *)(puVar7 + lVar26) == 0) {
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar9 = puVar30;
    func_0x00010c219b60();
    func_0x000108f5812c();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar9;
    func_0x00010c23b9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar30);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar30);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar30);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar30);
    _objc_release(puVar8);
    puVar8 = puVar30;
    func_0x00010c08c0e0(puVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar8);
    puVar8 = puVar30;
    func_0x00010c08c0e0(puVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010b8166c0();
    bVar1 = (int)puVar8 == 0;
    uVar35 = 0x4020000000000000;
    if (bVar1) {
      uVar35 = 0x4018000000000000;
    }
    uVar36 = 0x4018000000000000;
    if (bVar1) {
      uVar36 = 0x4020000000000000;
    }
    uVar37 = 0xc000000000000000;
    if (bVar1) {
      uVar37 = 0x4000000000000000;
    }
    uVar2 = 0x4000000000000000;
    if (bVar1) {
      uVar2 = 0xc000000000000000;
    }
    func_0x00010c181e40(0x4010000000000000,uVar35,0x4010000000000000,uVar36,puVar30);
    func_0x00010c2163a0(0,uVar37,0,uVar2,puVar30);
    puVar8 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar30);
    _objc_release(puVar8);
    uVar35 = *(undefined8 *)(puVar7 + lVar26);
    *(undefined **)(puVar7 + lVar26) = puVar30;
    _objc_retain(puVar30);
    _objc_release(uVar35);
    lVar32 = (long)_DAT_112737e68;
    func_0x00010befbb60(*(undefined8 *)(puVar7 + lVar32));
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(puVar7 + lVar26);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar2;
    func_0x00010bf49580(0x4062c00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar7 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar7 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar3;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar7 + lVar26);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar7 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar5;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010beef8c0(puVar11);
    _objc_release(puVar30);
    _objc_release(puVar7);
    _objc_release(uVar37);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar36);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar35);
    _objc_release(uVar2);
    _objc_release(puVar31);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar33) {
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = (long)_DAT_112737e68;
  lVar33 = *(long *)(puVar9 + lVar32);
  if (((lVar33 != 0) && (lVar34 = (long)_DAT_112737e6c, *(long *)(puVar9 + lVar34) != 0)) &&
     (lVar28 = (long)_DAT_112737e70, *(long *)(puVar9 + lVar28) != 0)) {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf4dce0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar33;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(puVar9 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010bf1ff80(uVar37);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar36;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = (long)_DAT_112737e8c;
    uVar2 = *(undefined8 *)(puVar9 + lVar29);
    *(undefined **)(puVar9 + lVar29) = puVar8;
    _objc_release(uVar2);
    _objc_release(uVar35);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(lVar10);
    _objc_release(puVar30);
    _objc_release(puVar7);
    _objc_release(lVar33);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar27 = *(undefined **)(puVar9 + lVar29);
    lVar33 = *(long *)(puVar9 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar9;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar30;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar33;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar9 + lVar34);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar16;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar9 + lVar34);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar18;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar9 + lVar34);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar9 + lVar34);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar9 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(puVar9 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar24;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar27;
    func_0x00010beef8c0(puVar7);
    _objc_release(puVar27);
    _objc_release(puVar9);
    _objc_release(uVar5);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar4);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar3);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar2);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar37);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar36);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar35);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar6);
    _objc_release(lVar10);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  lVar26 = (long)_DAT_112737e90;
  puVar30 = *(undefined **)(lVar33 + lVar26);
  _objc_retain(puVar30);
  _objc_retain(puVar8);
  puVar7 = puVar8;
  if (puVar30 == puVar8) {
LAB_105e47be4:
    _objc_release(puVar7);
  }
  else {
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar30);
    }
    else {
      puVar7 = puVar30;
      func_0x00010c071ae0();
      _objc_release(puVar8);
      _objc_release(puVar30);
      if (((ulong)puVar7 & 1) != 0) goto LAB_105e47bfc;
    }
    puVar7 = PTR_PTR_1126c5208;
    _objc_retain(puVar8);
    _objc_opt_class(puVar7);
    puVar30 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar7);
    puVar7 = puVar8;
    if (((ulong)puVar30 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar8);
    puVar30 = PTR_PTR_1126c5208;
    if (puVar7 != (undefined *)0x0) {
      puVar31 = *(undefined **)(lVar33 + lVar26);
      _objc_retain(puVar31);
      _objc_opt_class(puVar30);
      puVar9 = puVar31;
      _objc_opt_isKindOfClass(puVar31,puVar30);
      puVar7 = puVar31;
      if (((ulong)puVar9 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar31);
      puVar30 = puVar8;
      func_0x00010bf51e00();
      uVar35 = *(undefined8 *)(lVar33 + lVar26);
      *(undefined **)(lVar33 + lVar26) = puVar30;
      _objc_release(uVar35);
      puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(lVar33);
      _objc_release(puVar30);
      puVar30 = puVar8;
      func_0x00010c0fd720(puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar26 = (long)_DAT_112737e6c;
      func_0x00010c1dc9c0(*(undefined8 *)(lVar33 + lVar26));
      _objc_release(puVar30);
      func_0x00010bf8c420(puVar8);
      func_0x00010c21e900(*(undefined8 *)(lVar33 + lVar26));
      puVar30 = puVar8;
      func_0x00010c2711a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar30;
      func_0x0001062cfcbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(lVar33 + lVar26));
      _objc_release(puVar9);
      _objc_release(puVar30);
      puVar30 = puVar8;
      func_0x00010bf8c420();
      if ((int)puVar30 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(lVar33 + lVar26));
      }
      puVar30 = puVar8;
      func_0x00010c1298e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beafe20(lVar33);
      _objc_release(puVar30);
      puVar30 = puVar7;
      func_0x00010c2683a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c2683a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be32ba0(lVar33);
      _objc_release(puVar9);
      _objc_release(puVar30);
      lVar26 = (long)_DAT_112737e74;
      if (*(long *)(lVar33 + lVar26) != 0) {
        func_0x00010c12c960();
        uVar35 = *(undefined8 *)(lVar33 + lVar26);
        *(undefined8 *)(lVar33 + lVar26) = 0;
        _objc_release(uVar35);
      }
      func_0x00010bee5080(lVar33);
      func_0x00010c1cbe20(lVar33);
      puVar30 = puVar8;
      goto LAB_105e47be4;
    }
    puVar30 = (undefined *)0x0;
  }
  _objc_release(puVar30);
LAB_105e47bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105e46ffc; end: 105e473eb; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _setupTagAPlaceButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e46ffc(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_112737e78;
  puVar29 = param_1;
  if (*(long *)(param_1 + lVar31) == 0) {
    puVar29 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e2b538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
    puVar29 = puVar2;
    func_0x00010c219b60();
    func_0x000108f5812c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar29;
    func_0x00010c23b9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar2);
    puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar2);
    _objc_release(puVar30);
    puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar30);
    puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar2);
    _objc_release(puVar30);
    puVar30 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar30);
    puVar30 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar30);
    puVar30 = param_1;
    func_0x00010b8166c0();
    bVar1 = (int)puVar30 == 0;
    uVar33 = 0x4020000000000000;
    if (bVar1) {
      uVar33 = 0x4018000000000000;
    }
    uVar34 = 0x4018000000000000;
    if (bVar1) {
      uVar34 = 0x4020000000000000;
    }
    uVar35 = 0xc000000000000000;
    if (bVar1) {
      uVar35 = 0x4000000000000000;
    }
    uVar36 = 0x4000000000000000;
    if (bVar1) {
      uVar36 = 0xc000000000000000;
    }
    func_0x00010c181e40(0x4010000000000000,uVar33,0x4010000000000000,uVar34,puVar2);
    func_0x00010c2163a0(0,uVar35,0,uVar36,puVar2);
    puVar30 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar2);
    _objc_release(puVar30);
    uVar33 = *(undefined8 *)(param_1 + lVar31);
    *(undefined **)(param_1 + lVar31) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar33);
    lVar28 = (long)_DAT_112737e68;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28));
    puVar30 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar36 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar36;
    func_0x00010bf49580(0x4062c00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar4;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar6;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar8;
    func_0x00010beef8c0(puVar30);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar35);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar34);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar33);
    _objc_release(uVar36);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = (long)_DAT_112737e68;
  lVar24 = *(long *)(puVar29 + lVar28);
  if (((lVar24 != 0) && (lVar32 = (long)_DAT_112737e6c, *(long *)(puVar29 + lVar32) != 0)) &&
     (lVar26 = (long)_DAT_112737e70, *(long *)(puVar29 + lVar26) != 0)) {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar29;
    func_0x00010bf4dce0(puVar29);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(puVar29 + lVar26);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010bf1ff80(uVar35);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar34;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = (long)_DAT_112737e8c;
    uVar36 = *(undefined8 *)(puVar29 + lVar27);
    *(undefined **)(puVar29 + lVar27) = puVar30;
    _objc_release(uVar36);
    _objc_release(uVar33);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(lVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar24);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar25 = *(undefined **)(puVar29 + lVar27);
    lVar24 = *(long *)(puVar29 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar29;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar29;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar29;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar29 + lVar32);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar14;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar29 + lVar32);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar16;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar29 + lVar32);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar29 + lVar32);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar29 + lVar26);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar29 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar22;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar25;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar25);
    _objc_release(puVar29);
    _objc_release(uVar6);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar5);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar4);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar36);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar35);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar34);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar33);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(lVar9);
    _objc_release(puVar30);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar31 = (long)_DAT_112737e90;
  puVar29 = *(undefined **)(lVar24 + lVar31);
  _objc_retain(puVar29);
  _objc_retain(param_3);
  puVar2 = param_3;
  if (puVar29 == param_3) {
LAB_105e47be4:
    _objc_release(puVar2);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar29);
    }
    else {
      puVar2 = puVar29;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar29);
      if (((ulong)puVar2 & 1) != 0) goto LAB_105e47bfc;
    }
    puVar2 = PTR_PTR_1126c5208;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar29 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    puVar2 = param_3;
    if (((ulong)puVar29 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(param_3);
    puVar29 = PTR_PTR_1126c5208;
    if (puVar2 != (undefined *)0x0) {
      puVar30 = *(undefined **)(lVar24 + lVar31);
      _objc_retain(puVar30);
      _objc_opt_class(puVar29);
      puVar3 = puVar30;
      _objc_opt_isKindOfClass(puVar30,puVar29);
      puVar2 = puVar30;
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar30);
      puVar29 = param_3;
      func_0x00010bf51e00();
      uVar33 = *(undefined8 *)(lVar24 + lVar31);
      *(undefined **)(lVar24 + lVar31) = puVar29;
      _objc_release(uVar33);
      puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(lVar24);
      _objc_release(puVar29);
      puVar29 = param_3;
      func_0x00010c0fd720(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar31 = (long)_DAT_112737e6c;
      func_0x00010c1dc9c0(*(undefined8 *)(lVar24 + lVar31));
      _objc_release(puVar29);
      func_0x00010bf8c420(param_3);
      func_0x00010c21e900(*(undefined8 *)(lVar24 + lVar31));
      puVar29 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar29;
      func_0x0001062cfcbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(lVar24 + lVar31));
      _objc_release(puVar3);
      _objc_release(puVar29);
      puVar29 = param_3;
      func_0x00010bf8c420();
      if ((int)puVar29 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(lVar24 + lVar31));
      }
      puVar29 = param_3;
      func_0x00010c1298e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beafe20(lVar24);
      _objc_release(puVar29);
      puVar29 = puVar2;
      func_0x00010c2683a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010c2683a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be32ba0(lVar24);
      _objc_release(puVar3);
      _objc_release(puVar29);
      lVar31 = (long)_DAT_112737e74;
      if (*(long *)(lVar24 + lVar31) != 0) {
        func_0x00010c12c960();
        uVar33 = *(undefined8 *)(lVar24 + lVar31);
        *(undefined8 *)(lVar24 + lVar31) = 0;
        _objc_release(uVar33);
      }
      func_0x00010bee5080(lVar24);
      func_0x00010c1cbe20(lVar24);
      puVar29 = param_3;
      goto LAB_105e47be4;
    }
    puVar29 = (undefined *)0x0;
  }
  _objc_release(puVar29);
LAB_105e47bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e473ec; end: 105e4794f; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _activateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e473ec(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = (long)_DAT_112737e68;
  lVar1 = *(long *)(param_1 + lVar35);
  if (((lVar1 != 0) && (lVar36 = (long)_DAT_112737e6c, *(long *)(param_1 + lVar36) != 0)) &&
     (lVar31 = (long)_DAT_112737e70, *(long *)(param_1 + lVar31) != 0)) {
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bf1ff80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar5;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = (long)_DAT_112737e8c;
    uVar28 = *(undefined8 *)(param_1 + lVar32);
    *(undefined **)(param_1 + lVar32) = puVar7;
    _objc_release(uVar28);
    _objc_release(uVar30);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar29 = *(ulong *)(param_1 + lVar32);
    lVar1 = *(long *)(param_1 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar32;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar13;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar15;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar36);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    param_3 = uVar29;
    func_0x00010beef8c0(puVar7);
    _objc_release(uVar29);
    _objc_release(puVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar28);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar30);
    _objc_release(lVar9);
    _objc_release(lVar32);
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar27 = (long)_DAT_112737e90;
  uVar33 = *(ulong *)(lVar1 + lVar27);
  _objc_retain(uVar33);
  _objc_retain(param_3);
  uVar29 = param_3;
  if (uVar33 == param_3) {
LAB_105e47be4:
    _objc_release(uVar29);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar33);
    }
    else {
      uVar29 = uVar33;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar33);
      if ((uVar29 & 1) != 0) goto LAB_105e47bfc;
    }
    puVar7 = PTR_PTR_1126c5208;
    _objc_retain(param_3);
    _objc_opt_class(puVar7);
    uVar33 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    uVar29 = param_3;
    if ((uVar33 & 1) == 0) {
      uVar29 = 0;
    }
    _objc_retain(uVar29);
    _objc_release(param_3);
    puVar7 = PTR_PTR_1126c5208;
    if (uVar29 != 0) {
      uVar34 = *(ulong *)(lVar1 + lVar27);
      _objc_retain(uVar34);
      _objc_opt_class(puVar7);
      uVar33 = uVar34;
      _objc_opt_isKindOfClass(uVar34,puVar7);
      uVar29 = uVar34;
      if ((uVar33 & 1) == 0) {
        uVar29 = 0;
      }
      _objc_retain(uVar29);
      _objc_release(uVar34);
      uVar33 = param_3;
      func_0x00010bf51e00();
      uVar30 = *(undefined8 *)(lVar1 + lVar27);
      *(ulong *)(lVar1 + lVar27) = uVar33;
      _objc_release(uVar30);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(lVar1);
      _objc_release(puVar7);
      uVar33 = param_3;
      func_0x00010c0fd720(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar27 = (long)_DAT_112737e6c;
      func_0x00010c1dc9c0(*(undefined8 *)(lVar1 + lVar27));
      _objc_release(uVar33);
      func_0x00010bf8c420(param_3);
      func_0x00010c21e900(*(undefined8 *)(lVar1 + lVar27));
      uVar33 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar34 = uVar33;
      func_0x0001062cfcbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(lVar1 + lVar27));
      _objc_release(uVar34);
      _objc_release(uVar33);
      uVar33 = param_3;
      func_0x00010bf8c420();
      if ((int)uVar33 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(lVar1 + lVar27));
      }
      uVar33 = param_3;
      func_0x00010c1298e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beafe20(lVar1);
      _objc_release(uVar33);
      uVar33 = uVar29;
      func_0x00010c2683a0(uVar29);
      _objc_retainAutoreleasedReturnValue();
      uVar34 = param_3;
      func_0x00010c2683a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be32ba0(lVar1);
      _objc_release(uVar34);
      _objc_release(uVar33);
      lVar27 = (long)_DAT_112737e74;
      if (*(long *)(lVar1 + lVar27) != 0) {
        func_0x00010c12c960();
        uVar30 = *(undefined8 *)(lVar1 + lVar27);
        *(undefined8 *)(lVar1 + lVar27) = 0;
        _objc_release(uVar30);
      }
      func_0x00010bee5080(lVar1);
      func_0x00010c1cbe20(lVar1);
      uVar33 = param_3;
      goto LAB_105e47be4;
    }
    uVar33 = 0;
  }
  _objc_release(uVar33);
LAB_105e47bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e47950; end: 105e47c13; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e47950(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112737e90;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar4 == param_3) {
LAB_105e47be4:
    _objc_release(uVar1);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105e47bfc;
    }
    puVar2 = PTR_PTR_1126c5208;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126c5208;
    if (uVar1 != 0) {
      uVar5 = *(ulong *)(param_1 + lVar6);
      _objc_retain(uVar5);
      _objc_opt_class(puVar2);
      uVar4 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      uVar1 = uVar5;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar4 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar4;
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(param_1);
      _objc_release(puVar2);
      uVar4 = param_3;
      func_0x00010c0fd720(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_112737e6c;
      func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar6));
      _objc_release(uVar4);
      func_0x00010bf8c420(param_3);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar6));
      uVar4 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x0001062cfcbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6));
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x00010bf8c420();
      if ((int)uVar4 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar6));
      }
      uVar4 = param_3;
      func_0x00010c1298e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beafe20(param_1);
      _objc_release(uVar4);
      uVar4 = uVar1;
      func_0x00010c2683a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c2683a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be32ba0(param_1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar6 = (long)_DAT_112737e74;
      if (*(long *)(param_1 + lVar6) != 0) {
        func_0x00010c12c960();
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        *(undefined8 *)(param_1 + lVar6) = 0;
        _objc_release(uVar3);
      }
      func_0x00010bee5080(param_1);
      func_0x00010c1cbe20(param_1);
      uVar4 = param_3;
      goto LAB_105e47be4;
    }
    uVar4 = 0;
  }
  _objc_release(uVar4);
LAB_105e47bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e47c14; end: 105e47ca7; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _updateWordCountLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e47c14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112737e70);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112737e6c);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737e94);
  func_0x000108f4b42c(uVar3);
  FUN_1062d0088(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e47ca8; end: 105e47d97; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _handleUpdatedTaggedPlaceWithPrevTaggedPlace:taggedPlace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e47ca8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0fd0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) == 0) {
    if (param_4 == 0) {
      puVar3 = PTR_PTR_1126c0e50;
      _objc_alloc(PTR_PTR_1126c0e50);
      func_0x00010c036540();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112737e80),param_2,puVar3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112737e80),param_2,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e47d98; end: 105e48083; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell _updateTagAPlaceButtonWithTaggedPlace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e47d98(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112737e78;
  if (*(long *)(param_1 + lVar7) != 0) {
    lVar2 = param_3;
    func_0x00010c0fd260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      func_0x000108f5812c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = param_3;
      func_0x00010c0fd260(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar2;
    func_0x00010c23b9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(*(undefined8 *)(param_1 + lVar7),param_2,lVar4,0);
    if (lVar3 == 0) {
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7),param_2,1);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar5);
      _objc_release(puVar6);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(uVar5,param_2,puVar6);
      _objc_release(puVar6);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbb);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(uVar5,param_2,puVar6,0);
      _objc_release(puVar6);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar5,param_2,puVar6);
      _objc_release(puVar6);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar5);
      _objc_release(puVar6);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(uVar5,param_2,puVar6);
      _objc_release(puVar6);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(uVar5,param_2,puVar6,0);
      _objc_release(puVar6);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar5,param_2,puVar6);
      _objc_release(puVar6);
      lVar3 = param_3;
      func_0x00010c27dd80();
      if (lVar3 == 0) {
        bVar1 = false;
      }
      else {
        lVar3 = param_3;
        func_0x00010c27dd80(param_3);
        bVar1 = lVar3 != 1;
      }
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar7),param_2,bVar1);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e48084; end: 105e4808f; +[SCTopicSendToAddTopicWithDescriptionCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_105e48084(void)

{
  return;
}



/* Entry: 105e48090; end: 105e48177; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48090(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5208;
  uVar5 = *(ulong *)(param_1 + _DAT_112737e90);
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
  if (uVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112737e98);
    func_0x00010c268c60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e48178; end: 105e48297; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell didTapTagPlaceButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48178(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5208;
  uVar5 = *(ulong *)(param_1 + _DAT_112737e90);
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
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c2683a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar2);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112737e98);
    uVar4 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e48298; end: 105e482ff; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell didTapSearchPlacePill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112737e98),param_2,param_1,puVar1,
                      *(undefined8 *)(param_1 + _DAT_112737e7c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e48300; end: 105e4839b; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell didTapPlaceTag:isSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112737e98),param_2,param_1,puVar1,
                      *(undefined8 *)(param_1 + _DAT_112737e7c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e4839c; end: 105e483cb; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell taggedPlaceObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4839c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112737e80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e483cc; end: 105e48443; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell textViewDidEndEditing:] */

void FUN_105e483cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010befc5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c208680(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e48444; end: 105e4852b; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e48444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf6920(param_1);
  func_0x00010c1fb500(param_3);
  lVar3 = (long)_DAT_112737e9c;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar2 = uVar1;
    func_0x0001062cfcbc(uVar1,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(param_3);
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  lVar3 = param_1;
  func_0x00010befc5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208680();
  _objc_release(lVar3);
  func_0x00010bee5080(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e4852c; end: 105e488ef; -[SCTopicSendToAddTopicWithDescriptionCollectionViewCell textView:shouldChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105e4852c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
             ulong param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010c11f340();
  _objc_release(puVar3);
  if (uVar4 == 0x7fffffffffffffff) {
    uVar5 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar6 = *(ulong *)(param_1 + (long)_DAT_112737e94);
    func_0x000108f4b42c();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    if ((uVar5 <= uVar6) || (uVar5 = uVar4, func_0x00010c08fa60(), uVar5 == 0)) {
      uVar5 = param_1;
      func_0x00010bdf6920();
      uVar6 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c08fa60();
      if ((param_4 == uVar7) && (param_5 == 0)) {
        uVar7 = param_6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        if ((int)uVar7 == 0) goto LAB_105e486cc;
        *(undefined1 *)(param_1 + (long)_DAT_112737e9c) = 1;
        func_0x00010c153840(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c153340();
        uVar6 = param_1;
      }
      else {
        _objc_release(uVar6);
LAB_105e486cc:
        uVar6 = uVar4;
        func_0x00010c08fa60();
        uVar7 = param_3;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c08fa60();
        uVar2 = (int)uVar6 - (int)uVar8;
        _objc_release(uVar7);
        uVar1 = uVar2 >> 0x1f;
        uVar6 = param_4;
        FUN_1062d00bc(param_4,param_5,uVar4,uVar1,param_6);
        _objc_retainAutoreleasedReturnValue();
        if (uVar6 == 0) {
          uVar5 = param_6;
          func_0x00010c0720c0();
          uVar7 = param_1;
          if (((uVar5 & 1) == 0) && (uVar5 = param_6, func_0x00010c0720c0(), (uVar5 & 1) == 0)) {
            func_0x00010bdf9820(param_1);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010be34b60(param_1);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c21ade0(param_3);
          _objc_release(uVar7);
          func_0x00010c153840(param_1);
          _objc_retainAutoreleasedReturnValue();
LAB_105e48898:
          func_0x00010c153340();
        }
        else {
          uVar7 = param_1;
          func_0x00010be34b60(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21ade0(param_3);
          _objc_release(uVar7);
          FUN_1062cf67c(param_4,param_5,uVar4,uVar1,param_6);
          uVar7 = uVar4;
          func_0x00010c08fa60();
          if (uVar7 < param_4 + (long)(double)((uVar5 + (long)(int)uVar2) - param_4)) {
            func_0x00010c153840(param_1);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105e48898;
          }
          func_0x00010c153840(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c260c80(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c153340(param_1);
          _objc_release(uVar5);
        }
        _objc_release(param_1);
      }
      _objc_release(uVar6);
      uVar9 = 1;
      goto LAB_105e488b4;
    }
  }
  else {
    func_0x00010befc5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa060();
    uVar4 = param_1;
  }
  uVar9 = 0;
LAB_105e488b4:
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar9;
}


