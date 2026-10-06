/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ec6214; end: 104ec627b; +[SCLensRemoteApiGetOAuth2StatusResponse descriptor] */

void FUN_104ec6214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a06080,
                        &PTR____CFConstantStringClassReference_110db9b78,
                        &PTR_s_snapchat_lenses_1130ba378,&PTR_s_oauth2Status_1130ba3f0,2,0x10,0x1c);
    puRam00000001136b9120 = puVar1;
  }
  return;
}



/* Entry: 104ec627c; end: 104ec62e3; +[SCLensRemoteApiStartOAuth2FlowRequest descriptor] */

void FUN_104ec627c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a060d0,
                        &PTR____CFConstantStringClassReference_110db9b98,
                        &PTR_s_snapchat_lenses_1130ba378,&PTR_s_apiSpecId_1130ba3b0,1,0x10,0x1c);
    puRam00000001136b9128 = puVar1;
  }
  return;
}



/* Entry: 104ec62e4; end: 104ec634b; +[SCLensRemoteApiStartOAuth2FlowResponse descriptor] */

void FUN_104ec62e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a06120,
                        &PTR____CFConstantStringClassReference_110db9bb8,
                        &PTR_s_snapchat_lenses_1130ba378,&PTR_s_oauth2Status_1130ba430,2,0x10,0x1c);
    puRam00000001136b9130 = puVar1;
  }
  return;
}



/* Entry: 104ec634c; end: 104ec63b3; +[SCLensRemoteApiDeleteOAuth2TokensRequest descriptor] */

void FUN_104ec634c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a06170,
                        &PTR____CFConstantStringClassReference_110db9bd8,
                        &PTR_s_snapchat_lenses_1130ba378,&PTR_s_apiSpecId_1130ba3d0,1,0x10,0x1c);
    puRam00000001136b9138 = puVar1;
  }
  return;
}



/* Entry: 104ec63b4; end: 104ec641b; +[SCMReactionPickerConfiguration descriptor] */

void FUN_104ec63b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a06210,
                        &PTR____CFConstantStringClassReference_110db9bf8,
                        &PTR_s_snapchat_map_1130ba470,&PTR_s_defaultEmojisArray_1130ba488,1,0x10,
                        0x1c);
    puRam00000001136b9140 = puVar1;
  }
  return;
}



/* Entry: 104ec641c; end: 104ec643f; +[SCCMapPlaceSuggestAttributeTrayActionHandler valdiMarshallableObjectDescriptor] */

void FUN_104ec641c(undefined8 *param_1)

{
  *param_1 = &PTR_s_handleCloseTray_110858418;
  param_1[1] = 0;
  param_1[2] = &PTR_s_oob_v_1108583e8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104ec6440; end: 104ec646b;  */

undefined8 FUN_104ec6440(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 104ec646c; end: 104ec64e7;  */

void FUN_104ec646c(undefined8 param_1)

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
  pcStack_38 = FUN_104ec65b4;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  FUN_104ec65e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104ec64e8; end: 104ec64f3; +[SCCMapPlaceSuggestAttributeTrayView componentPath] */

undefined ** FUN_104ec64e8(void)

{
  return &PTR____CFConstantStringClassReference_110db9c18;
}



/* Entry: 104ec64f4; end: 104ec6527; -[SCCMapPlaceSuggestAttributeTrayView initWithViewModel:componentContext:runtime:] */

void FUN_104ec64f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4d40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104ec6528; end: 104ec6573; -[SCCMapPlaceSuggestAttributeTrayView setViewModel:] */

void FUN_104ec6528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_104ec65e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ec6574; end: 104ec65b3; -[SCCMapPlaceSuggestAttributeTrayView viewModel] */

void FUN_104ec6574(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_104ec65e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104ec65b4; end: 104ec65e3;  */

void FUN_104ec65b4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104ec65e4; end: 104ec65eb;  */

void FUN_104ec65e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104ec65ec; end: 104ec662b; -[SCCMapPlaceSuggestAttributeTrayContext initWithActionHandler:networkingClient:] */

void FUN_104ec65ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4d48;
  uStack_20 = param_1;
  func_0x000104ec673c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 104ec662c; end: 104ec6647; +[SCCMapPlaceSuggestAttributeTrayContext valdiMarshallableObjectDescriptor] */

void FUN_104ec662c(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110858478;
  param_1[1] = &PTR_s_SCCMapPlaceSuggestAttributeTrayA_110858508;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104ec6648; end: 104ec6683; -[SCCMapPlaceSuggestAttributeTrayViewModel initWithInitialAttributes:placeId:userId:] */

void FUN_104ec6648(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4d50;
  uStack_20 = param_1;
  func_0x000104ec673c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 104ec6684; end: 104ec669f; +[SCCMapPlaceSuggestAttributeTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_104ec6684(undefined8 *param_1)

{
  *param_1 = &PTR_s_initialAttributes_110858538;
  param_1[1] = &PTR_s_SCCAttributeInfo_110858598;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104ec66a0; end: 104ec66d3; -[SCMapPlaceSuggestAttributeTrayConfig init] */

void FUN_104ec66a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4d58;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104ec66d4; end: 104ec66e7; +[SCMapPlaceSuggestAttributeTrayConfig valdiMarshallableObjectDescriptor] */

void FUN_104ec66d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_hitStaging_1108585a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104ec66e8; end: 104ec671f; -[SCMapPlaceSuggestAttributeTraySessionInfo initWithMapSessionId:placeProfileSessionId:] */

void FUN_104ec66e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4d60;
  uStack_20 = param_1;
  func_0x000104ec673c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 104ec6720; end: 104ec6743; +[SCMapPlaceSuggestAttributeTraySessionInfo valdiMarshallableObjectDescriptor] */

void FUN_104ec6720(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_mapSessionId_1108585d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104ec6744; end: 104ec67b7; -[SCGrapheneMapScreenshotMetric2 init] */

undefined1 * FUN_104ec6744(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4d68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ec67b8; end: 104ec682f;  */

void FUN_104ec67b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110858620,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec6830; end: 104ec68a7;  */

void FUN_104ec6830(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110858670,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec68a8; end: 104ec691f;  */

void FUN_104ec68a8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108586c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec6920; end: 104ec6997;  */

void FUN_104ec6920(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110858710,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec6998; end: 104ec6a0f;  */

void FUN_104ec6998(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110858760,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec6a10; end: 104ec6b83;  */

char * FUN_104ec6a10(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108587b0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_104ec6b84;
  puStack_a8 = PTR_PTR_1126e4d70;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 104ec6b84; end: 104ec6bf7; -[SCGrapheneSnapshotMetric2 init] */

undefined1 * FUN_104ec6b84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4d70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ec6bf8; end: 104ec6d6b;  */

void FUN_104ec6bf8(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110858810,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_104ec6d6c;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110858860,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 104ec6d6c; end: 104ec6de3;  */

void FUN_104ec6d6c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110858860,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec6de4; end: 104ec6e5b;  */

void FUN_104ec6de4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108588b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec6e5c; end: 104ec6edf;  */

void FUN_104ec6e5c(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_110858900,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ec6ee0; end: 104ec7037; -[SCMapHomeWorkOnboardingDialogController initWithCurrentMapPerson:mapHomeWorkDataProvider:container:composerRuntime:delegate:enable3DHomes:] */

undefined8 *
FUN_104ec6ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_7);
  puStack_60 = PTR_PTR_1126e4d78;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
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
    puVar3 = auStack_58;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 5,puVar3);
    _objc_release(puVar3);
    *(undefined1 *)(puVar1 + 7) = param_8;
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104ec7038; end: 104ec7263; -[SCMapHomeWorkOnboardingDialogController presentOnboarding] */

void FUN_104ec7038(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126b1d08;
  _objc_alloc(PTR_PTR_1126b1d08);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ac00(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1acc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21df60(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1948c0(puVar1);
  _objc_release(puVar3);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (lVar5 == 0) {
    func_0x00010c294420(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar6;
  }
  _objc_release(lVar4);
  func_0x00010c21e360(puVar1);
  puVar3 = PTR_PTR_1126b1d10;
  _objc_alloc();
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c061d60();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfab380(uVar6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104ec7264; end: 104ec7347;  */

void FUN_104ec7264(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x104ec7308;
    puStack_38 = &UNK_110841f80;
    lStack_30 = param_1;
    _objc_retain(param_2);
    uStack_28 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 104ec7348; end: 104ec73a3; -[SCMapHomeWorkOnboardingDialogController .cxx_destruct] */

void FUN_104ec7348(long param_1)

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



/* Entry: 104ec73a4; end: 104ec74ef; -[SCMapHomeWorkOnboardingDialogViewController initWithViewModel:container:composerRuntime:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104ec73a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_6);
  puStack_50 = PTR_PTR_1126e4d80;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112716040;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716044;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112716048;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = auStack_48;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271604c,puVar3);
    _objc_release(puVar3);
    func_0x00010c189400(puVar1);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104ec74f0; end: 104ec77d7; -[SCMapHomeWorkOnboardingDialogViewController presentOnboardingWithHomeLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec74f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1d18;
  _objc_alloc();
  func_0x00010c061d40();
  puVar2 = auStack_90;
  _objc_initWeak(puVar2,param_1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000106875214();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104ec77d8;
  puStack_a8 = &UNK_11084d918;
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_3);
  lStack_a0 = param_3;
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126aed70;
  func_0x00010687522c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_90;
  _objc_copyWeak(auStack_c8,puVar8);
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar3;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0(puVar5);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + _DAT_112716044));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar3);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar8);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010bf84b00(puVar8);
    lVar7 = param_3 + _DAT_11271604c;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c0e7e60();
    _objc_release(lVar7);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 104ec77d8; end: 104ec78df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec77d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_2);
    lVar1 = param_1 + _DAT_11271604c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0e7e60();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ec78e0; end: 104ec793b; -[SCMapHomeWorkOnboardingDialogViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec78e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271604c);
  _objc_storeStrong(param_1 + _DAT_112716048,0);
  _objc_storeStrong(param_1 + _DAT_112716044,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716040,0);
  return;
}



/* Entry: 104ec793c; end: 104ec7e5f; -[SCMapHomeWorkEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec793c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  
  lVar1 = param_1 + _DAT_112716050;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b1d20;
  _objc_alloc();
  lVar43 = (long)_DAT_112716054;
  lVar1 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_112716058;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271605c;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112716060;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112716064;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0d5a80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112716068;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bfe3fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_11271606c;
  lVar20 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112716070;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112716074;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112716078;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c0b9440();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11271607c;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112716080;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar36 = param_1 + _DAT_112716084;
  _objc_loadWeakRetained();
  uVar44 = *(undefined8 *)(param_1 + _DAT_112716088);
  lVar37 = param_1 + _DAT_11271608c;
  _objc_loadWeakRetained();
  lVar38 = param_1 + _DAT_112716090;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_112716094;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010bf164e0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_112716098;
  _objc_loadWeakRetained();
  func_0x00010c041dc0(puVar4,param_2,lVar1,lVar6,lVar9,lVar13,lVar16,lVar19,lVar23,lVar26,lVar28,
                      lVar31,lVar3,lVar33,lVar35,lVar45,lVar36,uVar44,lVar37,lVar39,lVar41,lVar42);
  lVar46 = (long)_DAT_11271609c;
  uVar44 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar4;
  _objc_release(uVar44);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar45);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
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
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar43 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar1 = lVar43;
  func_0x00010c238c40();
  _objc_release(lVar43);
  if ((int)lVar1 == 0) {
    func_0x00010c10e2a0(*(undefined8 *)(param_1 + lVar46),param_2,0);
  }
  else {
    func_0x00010c10d460();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104ec7e60; end: 104ec7f83; -[SCMapHomeWorkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec7e60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716088,0);
  _objc_destroyWeak(param_1 + _DAT_11271608c);
  _objc_destroyWeak(param_1 + _DAT_112716098);
  _objc_destroyWeak(param_1 + _DAT_112716094);
  _objc_destroyWeak(param_1 + _DAT_112716084);
  _objc_destroyWeak(param_1 + _DAT_112716090);
  _objc_destroyWeak(param_1 + _DAT_11271606c);
  _objc_destroyWeak(param_1 + _DAT_112716080);
  _objc_destroyWeak(param_1 + _DAT_11271607c);
  _objc_destroyWeak(param_1 + _DAT_112716078);
  _objc_destroyWeak(param_1 + _DAT_112716050);
  _objc_destroyWeak(param_1 + _DAT_112716074);
  _objc_destroyWeak(param_1 + _DAT_112716070);
  _objc_destroyWeak(param_1 + _DAT_112716068);
  _objc_destroyWeak(param_1 + _DAT_112716064);
  _objc_destroyWeak(param_1 + _DAT_112716060);
  _objc_destroyWeak(param_1 + _DAT_11271605c);
  _objc_destroyWeak(param_1 + _DAT_112716058);
  _objc_destroyWeak(param_1 + _DAT_1127160a0);
  _objc_destroyWeak(param_1 + _DAT_112716054);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271609c,0);
  return;
}



/* Entry: 104ec7f84; end: 104ec83e7; -[SCMapHomeWorkSetupEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec7f84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  
  lVar1 = param_1 + _DAT_1127160a4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b1d20;
  _objc_alloc();
  lVar36 = (long)_DAT_1127160a8;
  lVar1 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_1127160ac;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0b9680();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127160b0;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127160b4;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127160b8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0d5a80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_1127160bc;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bfe3fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_1127160c0;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_1127160c4;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_1127160c8;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_1127160cc;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_1127160d0;
  _objc_loadWeakRetained();
  uVar37 = *(undefined8 *)(param_1 + _DAT_1127160d4);
  lVar30 = param_1 + _DAT_1127160d8;
  _objc_loadWeakRetained();
  lVar31 = param_1 + _DAT_1127160dc;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_1127160e0;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bf164e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_1127160e4;
  _objc_loadWeakRetained();
  func_0x00010c041dc0(puVar4,param_2,lVar1,lVar6,lVar9,lVar13,lVar16,lVar19,0,lVar22,lVar24,0,lVar3,
                      lVar26,lVar28,0,lVar29,uVar37,lVar30,lVar32,lVar34,lVar35);
  lVar38 = (long)_DAT_1127160e8;
  uVar37 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar4;
  _objc_release(uVar37);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
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
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar36 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar1 = lVar36;
  func_0x00010c238c40();
  _objc_release(lVar36);
  if ((int)lVar1 == 0) {
    func_0x00010c10e2a0(*(undefined8 *)(param_1 + lVar38),param_2,0);
  }
  else {
    func_0x00010c10d460();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104ec83e8; end: 104ec84e7; -[SCMapHomeWorkSetupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ec83e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127160d4,0);
  _objc_destroyWeak(param_1 + _DAT_1127160d8);
  _objc_destroyWeak(param_1 + _DAT_1127160e4);
  _objc_destroyWeak(param_1 + _DAT_1127160e0);
  _objc_destroyWeak(param_1 + _DAT_1127160d0);
  _objc_destroyWeak(param_1 + _DAT_1127160dc);
  _objc_destroyWeak(param_1 + _DAT_1127160cc);
  _objc_destroyWeak(param_1 + _DAT_1127160c8);
  _objc_destroyWeak(param_1 + _DAT_1127160a4);
  _objc_destroyWeak(param_1 + _DAT_1127160c4);
  _objc_destroyWeak(param_1 + _DAT_1127160c0);
  _objc_destroyWeak(param_1 + _DAT_1127160bc);
  _objc_destroyWeak(param_1 + _DAT_1127160b8);
  _objc_destroyWeak(param_1 + _DAT_1127160b4);
  _objc_destroyWeak(param_1 + _DAT_1127160b0);
  _objc_destroyWeak(param_1 + _DAT_1127160ac);
  _objc_destroyWeak(param_1 + _DAT_1127160a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127160e8,0);
  return;
}



/* Entry: 104ec84e8; end: 104ec895f; -[SCMapHomeWorkWorkflow initWithScope:mapPeopleFriendsProvider:currentUserID:composerRuntime:nativeMapSDK:mapHomeWorkDataProvider:nativeMapSDKSession:featureSettingsService:blizzardLogger:mapSession:composerBlizzardLogger:configProvider:notificationPool:mapViewServices:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:locationProvider:basemapPersonalization:locationSearchTrayFactoryServices:] */

undefined8 *
FUN_104ec84e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126e4d88;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[6];
    puVar2[6] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[7];
    puVar2[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[8];
    puVar2[8] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[9];
    puVar2[9] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[10];
    puVar2[10] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_19;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0xb];
    func_0x000109021cc4();
    *(undefined1 *)(puVar2 + 0x15) = uVar1;
    _objc_retain(param_21);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_22;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc();
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80();
    uVar3 = puVar2[0x19];
    puVar2[0x19] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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
  return puVar2;
}



/* Entry: 104ec8960; end: 104ec8a4f; -[SCMapHomeWorkWorkflow presentOnboarding] */

void FUN_104ec8960(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0b96e0(uVar1,param_3,*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1d28;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c27ece0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0070e0(puVar2,param_3,uVar1,uVar4,uVar3,*(undefined8 *)(param_2 + 0x20),param_2,
                      *(undefined1 *)(param_2 + 0xa8));
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  *(undefined **)(param_2 + 0x90) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  *(long *)(param_2 + 0xa0) = (long)(param_1 * 1000.0);
  _objc_release(puVar2);
  func_0x00010be56260(param_2);
  func_0x00010c10d460(*(undefined8 *)(param_2 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ec8a50; end: 104ec8bef; -[SCMapHomeWorkWorkflow presentSettingsWithHomeLocation:] */

void FUN_104ec8a50(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lVar5;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar5 = param_3;
    func_0x00010be1e7e0();
    iVar4 = (int)lVar5;
    param_1 = ABS(param_1);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 1.1920928955078125e-07;
        bVar2 = param_1 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if ((bVar2 || bVar1 != bVar3) || (_CLLocationCoordinate2DIsValid(), iVar4 == 0)) {
      _objc_initWeak(auStack_48,param_3);
      uVar6 = *(undefined8 *)(param_3 + 0xb8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c135ca0(0x3ff0000000000000,uVar6);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      lVar5 = param_3;
      func_0x00010be20ba0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7e760(param_3);
      _objc_release(lVar5);
    }
  }
  else {
    func_0x00010be7e760(param_3);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 104ec8bf0; end: 104ec8c4f;  */

void FUN_104ec8bf0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be20ba0(param_1,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7e760(param_1,param_2,0,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ec8c50; end: 104ec8d0f; -[SCMapHomeWorkWorkflow _presentSettingsWithHomeLocation:fallbackHomeLocation:] */

void FUN_104ec8c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1d30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c05fca0();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar2);
  func_0x00010c10e2c0(*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ec8d10; end: 104ec8eb3; -[SCMapHomeWorkWorkflow _userDeniedPermissionsWithHomeLocation:] */

void FUN_104ec8d10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b91e0();
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010be20ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104ec8eb4;
    puStack_70 = &UNK_1108589c0;
    unaff_x23 = &puStack_88;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar1);
    lStack_68 = lVar1;
    func_0x00010c28bb40(uVar5);
    _objc_release(puVar2);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_58);
  lVar3 = param_3;
  __Unwind_Resume();
  pcStack_98 = FUN_104ec8eb4;
  lVar4 = lVar3 + 0x28;
  lStack_b0 = lVar1;
  lStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_104ec8f48;
    puStack_c8 = &UNK_110841f80;
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    lStack_c0 = lVar4;
    _objc_retain(uVar5);
    uStack_b8 = uVar5;
    func_0x000100162d98("APPSTORE",&puStack_e0);
    _objc_release(uStack_b8);
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 104ec8eb4; end: 104ec8f47;  */

void FUN_104ec8eb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104ec8f48;
    puStack_38 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_30 = lVar1;
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104ec8f48; end: 104ec8f53;  */

void FUN_104ec8f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentSettingsWithHomeLocation__1126212c8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ec8f54; end: 104ec8fa3; -[SCMapHomeWorkWorkflow _getNewOrDefaultHomeLocation:isHidden:] */

void FUN_104ec8f54(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be1e7e0();
  _objc_alloc(PTR_PTR_1126b1d38);
  func_0x00010c055ca0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ec8fa4; end: 104ec915b; -[SCMapHomeWorkWorkflow onboardingDialogDidCompleteWithAccepted:homeLocation:] */

void FUN_104ec8fa4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **unaff_x23;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x00010c1a8fe0(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x00010c1a8fc0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010be59f60(param_1);
  if ((int)param_3 == 0) {
    func_0x00010bee6ae0(param_1);
  }
  else {
    param_3 = param_1;
    func_0x00010be20ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104ec915c;
    puStack_70 = &UNK_1108589c0;
    unaff_x23 = &puStack_88;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    lStack_68 = param_3;
    func_0x00010c28bb40(uVar4);
    _objc_release(puVar1);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_58);
  lVar2 = param_4;
  __Unwind_Resume();
  pcStack_98 = FUN_104ec915c;
  lVar3 = lVar2 + 0x28;
  lStack_b0 = param_3;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_104ec91f0;
    puStack_c8 = &UNK_110841f80;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    lStack_c0 = lVar3;
    _objc_retain(uVar4);
    uStack_b8 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_e0);
    _objc_release(uStack_b8);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 104ec915c; end: 104ec91ef;  */

void FUN_104ec915c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104ec91f0;
    puStack_38 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_30 = lVar1;
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104ec91f0; end: 104ec91fb;  */

void FUN_104ec91f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentSettingsWithHomeLocation__1126212c8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ec91fc; end: 104ec9283; -[SCMapHomeWorkWorkflow _logModalLaunchedEvent] */

void FUN_104ec91fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1d40;
  _objc_alloc_init(PTR_PTR_1126b1d40);
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    func_0x00010c15ffa0();
    func_0x00010c1c25a0(puVar1,param_2,lVar2);
  }
  func_0x00010c1c8bc0(puVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c1c8c20(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9c38);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ec9284; end: 104ec933b; -[SCMapHomeWorkWorkflow _logTraySettingsAction:] */

void FUN_104ec9284(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b1d48;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9c58;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db9c78;
  }
  _objc_retain(ppuVar1);
  _objc_alloc_init(puVar2);
  lVar3 = *(long *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    func_0x00010c15ffa0();
    func_0x00010c1c25a0(puVar2,param_2,lVar3);
  }
  func_0x00010c1c8bc0(puVar2,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c161fe0(puVar2,param_2,ppuVar1);
  _objc_release(ppuVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ec933c; end: 104ec94c3; -[SCMapHomeWorkWorkflow _getDefaultHomeLocationCoordinate:] */

undefined1  [16]
FUN_104ec933c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar5;
  
  _objc_retain(param_5);
  uVar5 = param_5;
  func_0x00010bf51c80();
  iVar4 = (int)uVar5;
  dVar13 = ABS(param_1);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920928955078125e-07 < ABS(param_2)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar13)) {
      bVar1 = dVar13 < 1.1920928955078125e-07;
      bVar2 = dVar13 == 1.1920928955078125e-07;
      bVar3 = false;
    }
  }
  if ((bVar2 || bVar1 != bVar3) || (_CLLocationCoordinate2DIsValid(), iVar4 == 0)) {
    uVar6 = *(ulong *)(param_3 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80();
    _objc_release(uVar7);
    _objc_release();
    dVar12 = ABS(param_1);
    dVar13 = 1.1920928955078125e-07;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (1.1920928955078125e-07 < ABS(param_2)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar12)) {
        bVar1 = dVar12 < 1.1920928955078125e-07;
        bVar2 = dVar12 == 1.1920928955078125e-07;
        bVar3 = false;
      }
    }
    if ((bVar2 || bVar1 != bVar3) ||
       (dVar13 = param_1, dVar12 = param_2, _CLLocationCoordinate2DIsValid(param_1,param_2),
       (uVar6 & 1) == 0)) {
      lVar8 = *(long *)(param_3 + 0x68);
      if (lVar8 == 0) {
        param_1 = 0.0;
        param_2 = 0.0;
        _CLLocationCoordinate2DMake(0,0);
      }
      else {
        func_0x00010c0ba460();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c0baae0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf28e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf34640();
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        param_1 = dVar13;
        param_2 = dVar12;
      }
    }
  }
  else {
    func_0x00010bf51c80(param_5);
  }
  _objc_release(param_5);
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  return auVar14;
}



/* Entry: 104ec94c4; end: 104ec95ef; -[SCMapHomeWorkWorkflow .cxx_destruct] */

void FUN_104ec94c4(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 104ec95f0; end: 104ec980f; -[SCMapHomeLocationEditorController initWithValdiRuntime:nativeMapSDK:configProvider:uiContainer:currentUserID:delegate:blizzardLogger:plusServices:basemapPersonalization:locationSearchTrayFactoryServices:] */

undefined8 *
FUN_104ec95f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  puStack_68 = PTR_PTR_1126e4d90;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_storeWeak(puVar1 + 0xb,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 104ec9810; end: 104ec9837; -[SCMapHomeLocationEditorController presentHomeLocationEditorWithHomeModel:shouldHideHome:metrics:] */

void FUN_104ec9810(long param_1)

{
  func_0x00010bdee840();
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 104ec9838; end: 104ec98df; -[SCMapHomeLocationEditorController onHomeFeatureUpdatedWithHomeModel:] */

void FUN_104ec9838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    _objc_retain(param_3);
    func_0x00010c29d560(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1d50;
    _objc_alloc(PTR_PTR_1126b1d50);
    lVar2 = lVar3;
    func_0x00010c230ca0(lVar3);
    func_0x00010c01dc60(puVar1,param_2,param_3,lVar2);
    _objc_release(param_3);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 104ec98e0; end: 104ec9a3b; -[SCMapHomeLocationEditorController _createHomeLocationEditorWithHomeModel:shouldHideHome:metrics:] */

void FUN_104ec98e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b1d58;
  _objc_alloc();
  func_0x00010c02dfa0();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b1d50;
  _objc_alloc(PTR_PTR_1126b1d50);
  func_0x00010c01dc60();
  lVar2 = param_1;
  func_0x00010bdee820(param_1,param_2,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf55f80(uVar4,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2860(lVar2,param_2,uVar4);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b1d60;
  _objc_alloc();
  func_0x00010c061d40();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar3;
  _objc_retain();
  _objc_release(uVar4);
  func_0x00010c21ffe0(*(undefined8 *)(param_1 + 0x60),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ec9a3c; end: 104ec9cf3; -[SCMapHomeLocationEditorController _createHomeLocationEditorContextWithMetrics:initialHomeModel:] */

void FUN_104ec9a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b1d68;
  _objc_alloc_init(PTR_PTR_1126b1d68);
  func_0x00010c1a8f00();
  func_0x00010c171b20(puVar2);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ec9cf4;
  puStack_98 = &UNK_1108589f0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  uStack_90 = param_4;
  func_0x00010c1d3d60(puVar2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104ec9e04;
  puStack_c0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b8,auStack_80);
  func_0x00010c18f680(puVar2);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_104ec9ec8;
  puStack_e8 = &UNK_110858a20;
  _objc_copyWeak(auStack_e0,auStack_80);
  func_0x00010c1d2640(puVar2);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_104ec9f28;
  puStack_110 = &UNK_110848ca8;
  _objc_copyWeak(auStack_108,auStack_80);
  func_0x00010c1b4020(puVar2);
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_104ec9fc8;
  puStack_138 = &UNK_110858a50;
  _objc_copyWeak(auStack_130,auStack_80);
  func_0x00010c1dbae0(puVar2);
  _objc_copyWeak(auStack_158,auStack_80);
  func_0x00010c1a5300(puVar2);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ec9cf4; end: 104ec9dc7;  */

void FUN_104ec9cf4(long param_1,undefined8 param_2)

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
  pcStack_58 = FUN_104ec9dc8;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ec9dc8; end: 104ec9e03;  */

void FUN_104ec9dc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be2f800(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ec9e04; end: 104ec9e93;  */

void FUN_104ec9e04(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ec9e94;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ec9e94; end: 104ec9ec7;  */

void FUN_104ec9e94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be28840(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ec9ec8; end: 104ec9f27;  */

void FUN_104ec9ec8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e47e0(*(undefined8 *)(param_1 + 0x60));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ec9f28; end: 104ec9fc7;  */

undefined8 FUN_104ec9f28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c260800(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c080120();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 104ec9fc8; end: 104eca04b;  */

void FUN_104ec9fc8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c272120(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104eca04c; end: 104eca0f3; -[SCMapHomeLocationEditorController _handleDismissHomeLocationEditor] */

void FUN_104eca04c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104eca0f4; end: 104eca137;  */

void FUN_104eca0f4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eca138; end: 104eca1b3; -[SCMapHomeLocationEditorController _handleSaveHomeModelWithLocation:initialHomeModel:] */

void FUN_104eca138(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf5ef20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e70c0(lVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be28850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDismissHomeLocationEditor_112567bb0);
  return;
}



/* Entry: 104eca1b4; end: 104eca2eb; -[SCMapHomeLocationEditorController _handleDisplaySearchTray] */

void FUN_104eca1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_5 + 0x50) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_5 + 0x70);
  func_0x00010c09ea00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar2 = *(undefined8 *)(param_5 + 0x70);
  uVar4 = param_1;
  func_0x00010c09ea00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(param_1,uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0x409f400000000000;
  func_0x000108d31f58(param_1,uVar4,0x409f400000000000);
  puVar3 = PTR_PTR_1126b1d70;
  _objc_alloc(PTR_PTR_1126b1d70);
  func_0x00010c00b3e0(param_1,uVar4,uVar1,param_4);
  uVar1 = *(undefined8 *)(param_5 + 0x48);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + 0x50);
  *(undefined8 *)(param_5 + 0x50) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c10efa0(*(undefined8 *)(param_5 + 0x50),param_6,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104eca2ec; end: 104eca2fb; -[SCMapHomeLocationEditorController mapLocationSearchTrayDidDismiss] */

void FUN_104eca2ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eca2fc; end: 104eca3ef; -[SCMapHomeLocationEditorController mapLocationSearchTrayDidSelectLocationWithCoordinates:placeSelectionUpdate:] */

void FUN_104eca2fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x78));
  func_0x00010c0e4fc0(param_1,param_2,*(undefined8 *)(param_3 + 0x60));
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x78,0);
  _objc_storeStrong(puVar3 + 0x70,0);
  _objc_storeStrong(puVar3 + 0x68,0);
  _objc_storeStrong(puVar3 + 0x60,0);
  _objc_destroyWeak(puVar3 + 0x58);
  _objc_storeStrong(puVar3 + 0x50,0);
  _objc_storeStrong(puVar3 + 0x48,0);
  _objc_storeStrong(puVar3 + 0x40,0);
  _objc_storeStrong(puVar3 + 0x38,0);
  _objc_storeStrong(puVar3 + 0x30,0);
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 104eca3f0; end: 104eca4b7; -[SCMapHomeLocationEditorController .cxx_destruct] */

void FUN_104eca3f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 104eca4b8; end: 104eca537; +[SCMapHomeSettingsMapWeakWrapper wrapping:] */

void FUN_104eca4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  _objc_alloc(param_1);
  puVar1 = auStack_28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c03d880(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104eca538; end: 104eca5cb; -[SCMapHomeSettingsMapWeakWrapper initWithRef:] */

undefined8 * FUN_104eca538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  puStack_30 = PTR_PTR_1126e4d98;
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_28);
  return puVar1;
}



/* Entry: 104eca5cc; end: 104eca633; -[SCMapHomeSettingsMapWeakWrapper handle:parameters:] */

void FUN_104eca5cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcff80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eca634; end: 104eca65f; -[SCMapHomeSettingsMapWeakWrapper onMapReady] */

void FUN_104eca634(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e5120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eca660; end: 104eca6a7; -[SCMapHomeSettingsMapWeakWrapper onInitialMapFriendsLoad:] */

void FUN_104eca660(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e48c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eca6a8; end: 104eca6af; -[SCMapHomeSettingsMapWeakWrapper .cxx_destruct] */

void FUN_104eca6a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104eca6b0; end: 104ecaac3; -[SCMapHomeWorkSettingsController initWithValdiRuntime:nativeMapSDK:mapHomeWorkDataProvider:scope:mapSession:composerBlizzardLogger:configProvider:notificationPool:currentUserID:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:nativeMapSDKSession:basemapPersonalization:locationSearchTrayFactoryServices:] */

undefined8 *
FUN_104eca6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  puStack_70 = PTR_PTR_1126e4da0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[5];
    puVar2[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[6];
    puVar2[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[7];
    puVar2[7] = param_10;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[6];
    func_0x000109021cc4();
    *(undefined1 *)(puVar2 + 0x10) = uVar1;
    _objc_retain(param_11);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[8];
    puVar2[8] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[9];
    puVar2[9] = param_17;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = puVar2[10];
    puVar2[10] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = puVar2[0xb];
    puVar2[0xb] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = puVar2[0x18];
    puVar2[0x18] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b1d78;
    _objc_alloc();
    puVar5 = PTR_PTR_1126b1d80;
    _objc_alloc(PTR_PTR_1126b1d80);
    func_0x00010c0219a0(0,0);
    func_0x00010c01a740();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    func_0x00010c1b5700(puVar2[0xc]);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x19];
    puVar2[0x19] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_7;
    _objc_release(uVar3);
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
  return puVar2;
}



/* Entry: 104ecaac4; end: 104ecace7; -[SCMapHomeWorkSettingsController presentSettingsWithHomeLocation:fallbackHomeLocation:] */

void FUN_104ecaac4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    _objc_initWeak(auStack_40,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104ecace8;
    puStack_58 = &UNK_110858a80;
    _objc_copyWeak(auStack_50,auStack_38);
    _objc_copyWeak(auStack_48,auStack_40);
    func_0x00010be11da0(param_1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    puVar1 = auStack_40;
  }
  else {
    if (param_3 != 0) {
      func_0x00010bde6be0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x104ecae14;
      puStack_88 = &UNK_110841fb0;
      _objc_copyWeak(auStack_78,auStack_38);
      _objc_retain(param_1);
      lStack_80 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_release(lStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(param_1);
      goto LAB_104ecac7c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_a8,auStack_38);
    func_0x00010bfab380(uVar2);
    puVar1 = auStack_a8;
  }
  _objc_destroyWeak(puVar1);
LAB_104ecac7c:
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ecace8; end: 104ecadaf;  */

void FUN_104ecace8(long param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7cd20();
    _objc_release(param_1);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104ecadb0;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104ecadb0; end: 104ecae5f;  */

void FUN_104ecadb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0xb8);
    *(undefined8 *)(lVar1 + 0xb8) = uVar2;
    _objc_release(uVar3);
    func_0x00010bdf3340(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010be04da0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ecae60; end: 104ecaf77;  */

void FUN_104ecae60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bfe3d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bde6be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104ecaf78;
  puStack_58 = &UNK_110841fb0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(lVar3);
  lStack_50 = lVar3;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(lStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ecaf78; end: 104ecafc3;  */

void FUN_104ecaf78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdf3340();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ecafc4; end: 104ecb083; -[SCMapHomeWorkSettingsController _dismissSettings] */

void FUN_104ecafc4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104ecb04c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ecb084; end: 104ecb0df; -[SCMapHomeWorkSettingsController _displaySettings] */

void FUN_104ecb084(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c720(0x3fe6666666666666,uVar2,param_2,uVar1,*(undefined1 *)(param_1 + 0x80),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ecb0e0; end: 104ecb1fb; -[SCMapHomeWorkSettingsController _createSettingsVCWithHomeSettings:] */

void FUN_104ecb0e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bdf5980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1d58;
  _objc_alloc();
  func_0x00010c02dfa0();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b1d88;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010bdec6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar2,param_2,lVar1,lVar3,*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar3);
  func_0x00010c21ffe0(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1263a0(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x70));
  puVar2 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055640();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar2;
  _objc_release(uVar4);
  func_0x00010c219d60(*(undefined8 *)(param_1 + 0x78),param_2,0);
  func_0x00010c167420(*(undefined8 *)(param_1 + 0x78),param_2,10);
  func_0x00010c219e20(*(undefined8 *)(param_1 + 0x78),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ecb1fc; end: 104ecb2ff; -[SCMapHomeWorkSettingsController _createViewModelWithHomeSettings:] */

void FUN_104ecb1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e9800(uVar1);
  lVar2 = param_1;
  func_0x00010be362e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1d90;
  _objc_alloc_init(PTR_PTR_1126b1d90);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    func_0x00010c15ffa0();
    func_0x00010c0df840(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c25a0(puVar3,param_2,puVar5);
    _objc_release(puVar5);
  }
  func_0x00010c1d50a0(puVar3,param_2,lVar2);
  puVar5 = PTR_PTR_1126b1d98;
  _objc_alloc(PTR_PTR_1126b1d98);
  func_0x00010c045840();
  func_0x00010c1c77e0();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ecb300; end: 104ecb623; -[SCMapHomeWorkSettingsController _createContext] */

void FUN_104ecb300(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar2 = PTR_PTR_1126b1da0;
  _objc_alloc_init(PTR_PTR_1126b1da0);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104ecb624;
  puStack_88 = &UNK_110858ab0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c21c900(puVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104ecb690;
  puStack_b0 = &UNK_110858ae0;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c1a52e0(puVar2);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_104ecb74c;
  puStack_d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010c18f680(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1948c0(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c272120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d700(puVar2);
  _objc_release(uVar4);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_104ecb81c;
  puStack_100 = &UNK_110858a20;
  _objc_copyWeak(auStack_f8,auStack_78);
  func_0x00010c1d2640(puVar2);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_104ecb87c;
  puStack_128 = &UNK_110848ca8;
  _objc_copyWeak(auStack_120,auStack_78);
  func_0x00010c1a52c0(puVar2);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_104ecb8c4;
  puStack_150 = &UNK_110848ca8;
  _objc_copyWeak(auStack_148,auStack_78);
  func_0x00010c1b4020(puVar2);
  _objc_copyWeak(auStack_170,auStack_78);
  func_0x00010c1e1080(puVar2);
  func_0x00010c171b20(puVar2);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ecb624; end: 104ecb68f;  */

void FUN_104ecb624(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bed93e0(param_1);
    func_0x00010be7cda0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c272120(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ecb690; end: 104ecb74b;  */

void FUN_104ecb690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bee2fc0(param_1);
    func_0x00010be7cd80(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c272120(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


