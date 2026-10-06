/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065bf780; end: 1065bf7b7; -[SCStorySharingContentProductPlaybackLauncher _playbackDidFinish] */

void FUN_1065bf780(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf376e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf39f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanUp_1125ac188);
  return;
}



/* Entry: 1065bf7b8; end: 1065bf81f; -[SCStorySharingContentProductPlaybackLauncher .cxx_destruct] */

void FUN_1065bf7b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1065bf820; end: 1065bf923; -[SCStorySharingLightweightComposerContextProvider initWithDataProvider:playerViewFactory:actionHandler:cofSyncStore:viewTemplate:] */

undefined1 *
FUN_1065bf820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1eb8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065bf924; end: 1065bfa2f; -[SCStorySharingLightweightComposerContextProvider contextParamsFor:] */

void FUN_1065bf924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1065bfa30;
  uStack_30 = 0x1065bfa40;
  uStack_28 = 0;
  func_0x00010c0beda0(param_3);
  func_0x00010bf4ed20(param_1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1065bfa30; end: 1065bfa47;  */

void FUN_1065bfa30(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065bfa48; end: 1065bfaf7;  */

void FUN_1065bfa48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107d60b58();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065bfaf8; end: 1065bff3f; -[SCStorySharingLightweightComposerContextProvider contextParamsWithMessageType:] */

void FUN_1065bfaf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  lVar9 = *(long *)(param_3 + 0x38);
  if (lVar9 == 0) {
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    *(undefined **)(param_3 + 0x20) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    *(undefined **)(param_3 + 0x28) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar3;
    _objc_release(uVar8);
    _objc_initWeak(auStack_78,param_3);
    puVar3 = PTR_PTR_1126c6910;
    _objc_alloc(PTR_PTR_1126c6910);
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c272120(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d2c0(puVar3);
    _objc_release(uVar8);
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6550;
    if (*(long *)(param_3 + 0x40) != 1) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6538;
    }
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6568;
    if (*(long *)(param_3 + 0x40) != 2) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    func_0x00010c212c00(puVar3);
    _objc_release(ppuVar2);
    func_0x00010c222520(puVar3);
    func_0x00010c17df40(puVar3);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uVar8 = *(undefined8 *)(param_3 + 8);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1065bff44;
    puStack_88 = &UNK_11092dea8;
    _objc_copyWeak(auStack_80,auStack_78);
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1065bff8c;
    puStack_b0 = &UNK_1108485e8;
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_copyWeak(auStack_d0,auStack_78);
    func_0x00010bfa6360(uVar8);
    puVar4 = PTR_PTR_1126cbcd0;
    _objc_opt_new(PTR_PTR_1126cbcd0);
    lVar10 = *(long *)(param_3 + 8);
    _objc_retain(lVar10);
    lVar5 = lVar10;
    func_0x00010010fab4(lVar10,PTR_DAT_1126a5508);
    lVar9 = lVar10;
    if ((int)lVar5 == 0) {
      lVar9 = 0;
    }
    _objc_retain(lVar9);
    _objc_release(lVar10);
    if ((lVar9 != 0) && (lVar5 = lVar10, func_0x00010c231b80(), (int)lVar5 != 0)) {
      func_0x00010c0f0240(lVar10);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2256c0(puVar4);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7d00(puVar4);
      _objc_release(puVar6);
    }
    func_0x00010c1c7160(puVar4);
    lVar11 = *(long *)(param_3 + 8);
    _objc_retain(lVar11);
    lVar10 = lVar11;
    func_0x00010010fab4(lVar11,PTR_DAT_1126a5510);
    lVar5 = lVar11;
    if ((int)lVar10 == 0) {
      lVar5 = 0;
    }
    _objc_retain(lVar5);
    _objc_release(lVar11);
    if (lVar5 != 0) {
      func_0x00010c25b8e0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fa0(puVar4);
      _objc_release(lVar11);
    }
    puVar6 = PTR_PTR_1126c67d8;
    _objc_alloc();
    puVar7 = PTR_PTR_1126cbcd8;
    func_0x00010bf44480(PTR_PTR_1126cbcd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660();
    uVar8 = *(undefined8 *)(param_3 + 0x38);
    *(undefined **)(param_3 + 0x38) = puVar6;
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_78);
    lVar9 = *(long *)(param_3 + 0x38);
  }
  _objc_retain(lVar9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 1065bff40; end: 1065bff43;  */

void FUN_1065bff40(void)

{
  return;
}



/* Entry: 1065bff44; end: 1065c001b;  */

void FUN_1065bff44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065c001c; end: 1065c001f; -[SCStorySharingLightweightComposerContextProvider setAutoPlayPreviewEnabled:] */

void FUN_1065c001c(void)

{
  return;
}



/* Entry: 1065c0020; end: 1065c00a7; -[SCStorySharingLightweightComposerContextProvider onTapWithView:] */

void FUN_1065c0020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1065c00a8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1065c00a8; end: 1065c0187;  */

void FUN_1065c00a8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_1126a5520;
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(uVar5);
  uVar6 = uVar5;
  func_0x00010010fab4(uVar5,puVar2);
  uVar1 = uVar5;
  if ((int)uVar6 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar6 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_ignoreCallingHandleStoryTap_1125d7370);
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bfe66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
  }
  if ((uVar1 != 0) && ((uVar6 & 1) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2ae0(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c0188; end: 1065c01c7; -[SCStorySharingLightweightComposerContextProvider onProfileTap] */

void FUN_1065c0188(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleHeaderTap_1125d1e88);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_handleHeaderTap_1125d1e88);
    return;
  }
  return;
}



/* Entry: 1065c01c8; end: 1065c0247; -[SCStorySharingLightweightComposerContextProvider onAvatarTapWithView:] */

void FUN_1065c01c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleAvatarTap__1125d1af0);
  if ((uVar1 & 1) == 0) {
    func_0x00010c0e5c80(param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0520(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c0248; end: 1065c028f; -[SCStorySharingLightweightComposerContextProvider onActionButtonTapWithButtonType:] */

void FUN_1065c0248(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleActionButtonTapFor__1125d19c0);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_handleActionButtonTapFor__1125d19c0,param_3);
    return;
  }
  return;
}



/* Entry: 1065c0290; end: 1065c02ef; -[SCStorySharingLightweightComposerContextProvider onExtensionCTATap] */

void FUN_1065c0290(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_1126a5528;
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    func_0x00010bfd1160(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065c02f0; end: 1065c02f7; -[SCStorySharingLightweightComposerContextProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1065c02f0(void)

{
  return 0;
}



/* Entry: 1065c02f8; end: 1065c0303; -[SCStorySharingLightweightComposerContextProvider pushToValdiMarshaller:] */

undefined8 FUN_1065c02f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df0d8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af9b284();
  func_0x00010af9b278();
  return param_3;
}



/* Entry: 1065c0304; end: 1065c070b; -[SCStorySharingLightweightComposerContextProvider _updateUiWithConfiguration:] */

/* WARNING: Possible PIC construction at 0x0001065c06c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001065c06c8) */
/* WARNING: Removing unreachable block (ram,0x0001065c0708) */
/* WARNING: Removing unreachable block (ram,0x0001065c06f0) */

void FUN_1065c0304(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbcc0;
  _objc_opt_new(PTR_PTR_1126cbcc0);
  puVar2 = PTR_PTR_1126cbcc8;
  _objc_opt_new(PTR_PTR_1126cbcc8);
  func_0x00010c1a77a0(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221420(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20df80(puVar1);
  _objc_release(uVar3);
  lVar4 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0();
  _objc_release(puVar2);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0();
  _objc_release(puVar2);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c26e520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144c0();
  _objc_release(puVar2);
  _objc_release(lVar4);
  func_0x00010bf15520(param_3);
  puVar2 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eda0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfdff00(param_3);
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a79c0();
  _objc_release(puVar5);
  _objc_release(puVar2);
  lVar4 = param_3;
  func_0x00010c25a980(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d700();
  _objc_release(puVar2);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf12c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d940();
  _objc_release(puVar2);
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beef1e0(param_3);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161800(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  lVar4 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1971a0(puVar1);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c29c5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdf4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222500();
  _objc_release(puVar2);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf9dcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126cbce0;
    _objc_alloc(PTR_PTR_1126cbce0);
    func_0x00010bf9dcc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052bc0(puVar2);
    func_0x00010c199300(puVar1);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,puVar1);
  return;
}



/* Entry: 1065c070c; end: 1065c0713; -[SCStorySharingLightweightComposerContextProvider _updateWithVideoContext:] */

void FUN_1065c070c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028);
  return;
}



/* Entry: 1065c0714; end: 1065c071b; -[SCStorySharingLightweightComposerContextProvider _updateWithStoryThumbnailUrl:] */

void FUN_1065c0714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_next__112614028);
  return;
}



/* Entry: 1065c071c; end: 1065c0793; -[SCStorySharingLightweightComposerContextProvider .cxx_destruct] */

void FUN_1065c071c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1065c0794; end: 1065c085f; -[SCStorySharingLightweightComposerContextProviderFactory initWithCofSyncStore:valdiRuntimeProvider:snapPlayerViewProvider:] */

undefined1 *
FUN_1065c0794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1ec0;
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



/* Entry: 1065c0860; end: 1065c0947; -[SCStorySharingLightweightComposerContextProviderFactory contextProviderWithDataProvider:actionHandler:viewTemplate:] */

void FUN_1065c0860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cbce8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_1065c2f88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008be0(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c0948; end: 1065c0983; -[SCStorySharingLightweightComposerContextProviderFactory .cxx_destruct] */

void FUN_1065c0948(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c0984; end: 1065c0a27; -[SCStorySharingLightweightComposerContextProviderFactoryService initWithCofSyncStore:valdiRuntimeProvider:] */

undefined1 *
FUN_1065c0984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1ec8;
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



/* Entry: 1065c0a28; end: 1065c0adf; -[SCStorySharingLightweightComposerContextProviderFactoryService contextProviderWithDataProvider:snapPlayerViewProvider:actionHandler:viewTemplate:] */

void FUN_1065c0a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbcf0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfff660();
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bf4eee0(puVar1,param_2,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065c0ae0; end: 1065c0b0f; -[SCStorySharingLightweightComposerContextProviderFactoryService .cxx_destruct] */

void FUN_1065c0ae0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c0b10; end: 1065c0c5f; -[SCStorySharingPlaybackLauncher initWithStorySharePlaybackScopeExposer:upNextV2PlaybackSessionExposer:upNextV2PlaybackSessionScopeServices:pageLauncher:storiesGrapheneMetricsEmitter:genAIDreamsService:] */

undefined1 *
FUN_1065c0b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f1ed0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cbcf8;
    _objc_alloc();
    func_0x00010c033060();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065c0c60; end: 1065c0ee3; -[SCStorySharingPlaybackLauncher launchWithDataProvider:playbackDataProvider:sourceView:actionStartTime:] */

void FUN_1065c0c60(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  dVar10 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010c0ea680();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar3 = param_5;
      func_0x00010c282f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = param_5;
        func_0x00010c282f60(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be488c0(param_2,param_3,lVar3);
        _objc_release(lVar3);
      }
      func_0x00010c20da60(param_4,param_3,param_2);
      lVar3 = param_5;
      func_0x00010bf4cfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        puVar4 = PTR_PTR_1126c6d58;
        _objc_alloc();
        lVar3 = param_5;
        func_0x00010c0f3ca0(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_5;
        func_0x00010c1016c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_5;
        func_0x00010c0eb380(param_5,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_5;
        func_0x00010c0eadc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04ad20(puVar4,param_3,param_6,lVar3,lVar1,lVar5,lVar6,param_2,lVar7,0);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar3);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        _CACurrentMediaTime();
        uVar8 = 0xb;
        func_0x000108534a80(0xb);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ab9c0((double)(long)((dVar10 - param_1) * 1000.0),uVar9,param_3,
                            &PTR____CFConstantStringClassReference_110dcb1f8,uVar8);
        _objc_release(uVar8);
        func_0x00010bf9d620(*(undefined8 *)(param_2 + 8),param_3,puVar4);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c10e600(param_1,*(undefined8 *)(param_2 + 0x30),param_3,param_5,param_6,param_2)
        ;
      }
    }
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065c0ee4; end: 1065c1173; -[SCStorySharingPlaybackLauncher _launchUpNextV2PlaybackSessionScopeWithParams:] */

void FUN_1065c0ee4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11092def8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar8);
  }
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = param_3;
  _objc_release(uVar8);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_3;
  func_0x00010c0f1c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf245c0(lVar1,param_2,uVar8,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,lVar4);
  puVar2 = PTR_PTR_1126c2d60;
  lVar1 = param_3;
  func_0x00010bfb1cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfb1cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = param_3;
  func_0x00010c0644e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf695c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c27c500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ffcc0(puVar2,param_2,puVar9,lVar5,lVar6,2,2,0,lVar7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (lVar1 != 0) {
    _objc_release(puVar9);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_opt_new(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065c1174; end: 1065c118f;  */

void FUN_1065c1174(void)

{
  _objc_opt_new(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065c1190; end: 1065c120b; -[SCStorySharingPlaybackLauncher _cleanUpOpera] */

void FUN_1065c1190(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf39f80(*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065c120c; end: 1065c120f; -[SCStorySharingPlaybackLauncher chatSharePlaybackDidFinish] */

void FUN_1065c120c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpOpera_112555608);
  return;
}



/* Entry: 1065c1210; end: 1065c12e3; -[SCStorySharingPlaybackLauncher chatSharePlaybackTriggerPagination:] */

void FUN_1065c1210(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126c2d60;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c089a60(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ff0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f27c0(puVar4,param_2,param_3,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c12e4; end: 1065c134b; -[SCStorySharingPlaybackLauncher .cxx_destruct] */

void FUN_1065c12e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c134c; end: 1065c1603; -[SCStorySharingServiceProvider provide] */

void FUN_1065c134c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065c1604;
  puStack_90 = &UNK_11092c698;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1065c1644;
  puStack_b8 = &UNK_11092c698;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar5;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1065c1684;
  puStack_e0 = &UNK_11092c698;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_120 = puVar5;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1065c16c4;
  puStack_108 = &UNK_11092c698;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cbd00;
  _objc_alloc(PTR_PTR_1126cbd00);
  func_0x00010c04ddc0();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065c1604; end: 1065c1743;  */

void FUN_1065c1604(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c25a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065c1744; end: 1065c183b; -[SCStorySharingServiceProvider storyManifestComposerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c1744(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126cbd08;
  _objc_alloc(PTR_PTR_1126cbd08);
  lVar2 = param_1 + _DAT_11274b2fc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b300;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b304;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029220(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c183c; end: 1065c1933; -[SCStorySharingServiceProvider discoverFeedStorySnapValdiProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c183c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126cbd10;
  _objc_alloc(PTR_PTR_1126cbd10);
  lVar2 = param_1 + _DAT_11274b2fc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b300;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b304;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029220(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c1934; end: 1065c1a67; -[SCStorySharingServiceProvider legacyStoryComposerPlayerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c1934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126cbd18;
  _objc_alloc(PTR_PTR_1126cbd18);
  lVar2 = param_1 + _DAT_11274b2fc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b300;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11274b308;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b304;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029240(puVar1,param_2,lVar3,lVar5,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
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



/* Entry: 1065c1a68; end: 1065c1b23; -[SCStorySharingServiceProvider lazySnapDocPlayerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c1a68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cbd20;
  _objc_alloc(PTR_PTR_1126cbd20);
  lVar2 = param_1 + _DAT_11274b300;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b304;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5e40(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c1b24; end: 1065c1ccf; -[SCStorySharingServiceProvider valdiContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c1b24(long param_1,undefined8 param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR_PTR_1126cbd28;
  _objc_alloc();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11274b30c);
  lVar2 = param_1 + _DAT_11274b310;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b314;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf3f720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274b318);
  lVar7 = param_1 + _DAT_11274b31c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_11274b320;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11274b324;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b328;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e120(puVar1,param_2,uVar13,lVar3,lVar6,uVar14,lVar7,lVar9,lVar11,lVar12);
  _objc_release(lVar12);
  _objc_release(param_1);
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



/* Entry: 1065c1cd0; end: 1065c1d93; -[SCStorySharingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c1cd0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b318,0);
  _objc_storeStrong(param_1 + _DAT_11274b30c,0);
  _objc_destroyWeak(param_1 + _DAT_11274b31c);
  _objc_destroyWeak(param_1 + _DAT_11274b314);
  _objc_destroyWeak(param_1 + _DAT_11274b320);
  _objc_destroyWeak(param_1 + _DAT_11274b328);
  _objc_destroyWeak(param_1 + _DAT_11274b324);
  _objc_destroyWeak(param_1 + _DAT_11274b304);
  _objc_destroyWeak(param_1 + _DAT_11274b308);
  _objc_destroyWeak(param_1 + _DAT_11274b310);
  _objc_destroyWeak(param_1 + _DAT_11274b2fc);
  _objc_destroyWeak(param_1 + _DAT_11274b300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b32c);
  return;
}



/* Entry: 1065c1d94; end: 1065c1d9f; +[SCComposerSnapPlayerAVLayerView layerClass] */

void FUN_1065c1d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  return;
}



/* Entry: 1065c1da0; end: 1065c1da3; -[SCComposerSnapPlayerAVLayerView playerLayer] */

void FUN_1065c1da0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 1065c1da4; end: 1065c1de7; -[SCComposerSnapPlayerAVLayerView videoPlayer] */

void FUN_1065c1da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065c1de8; end: 1065c1ec7; -[SCComposerSnapPlayerAVLayerView setVideoPlayer:] */

void FUN_1065c1de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c100c60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dda40();
  _objc_release(param_7);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  uVar1 = param_5;
  func_0x00010c100c60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010c100c60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2218a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1065c1ec8; end: 1065c21e3; -[SCComposerSnapPlayerView initWithPlayerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1065c1ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *unaff_x19;
  long lVar12;
  long lVar13;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126f1ed8;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar12 = (long)_DAT_11274b334;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cbd30;
    _objc_opt_new();
    lVar12 = (long)_DAT_11274b338;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar3;
    _objc_release(uVar2);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010befbb60(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar13 = (long)_DAT_11274b33c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    uStack_a0 = param_3;
    _objc_release(uVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_a8 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_b8 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_c0 = uVar5;
    func_0x00010bf1ff80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar5;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c08de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar2;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c2793a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef79e0(puVar1);
    _objc_release(unaff_x19);
    _objc_release(uVar4);
    _objc_release(uVar10);
    param_3 = uStack_a0;
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uStack_c0);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
    func_0x00010c17d4c0(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_f0;
  pcStack_c8 = FUN_1065c21e4;
  puStack_e0 = puVar1;
  puStack_d8 = unaff_x19;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c139c20();
  puStack_e8 = PTR_PTR_1126f1ed8;
  uStack_f0 = param_3;
  _objc_msgSendSuper2(&uStack_f0,PTR_s_dealloc_112525b20);
  return puVar11;
}



/* Entry: 1065c21e4; end: 1065c2227; -[SCComposerSnapPlayerView dealloc] */

void FUN_1065c21e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c139c20();
  puStack_28 = PTR_PTR_1126f1ed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1065c2228; end: 1065c2327; -[SCComposerSnapPlayerView updateVideoContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2228(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  if (param_3 != 0) {
    func_0x00010c209fc0(param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274b334);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf57ae0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065c2328; end: 1065c240b;  */

void FUN_1065c2328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065c240c;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_48 = param_2;
  _objc_retain(param_3);
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1065c240c; end: 1065c243f;  */

void FUN_1065c240c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28cb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065c2440; end: 1065c25db; -[SCComposerSnapPlayerView updateWithPlayer:overlayImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2440(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bea5840(param_1,param_2,0,1);
  lVar3 = (long)_DAT_11274b340;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c139c20(param_1);
  }
  lVar4 = (long)_DAT_11274b33c;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,param_4 == 0);
  if (param_3 == 0) {
    uVar1 = 3;
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    lVar3 = param_3;
    func_0x00010bf5f0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1675a0(param_3,param_2,1);
    func_0x00010c1ca6a0(param_3,param_2,1);
    func_0x00010c221ce0(*(undefined8 *)(param_1 + _DAT_11274b338),param_2,param_3);
    func_0x00010befa220(lVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110daf4d8,0,0);
    func_0x00010befa220(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e54e98,0,0
                       );
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    func_0x00010beddc80(param_1);
    _objc_release(lVar3);
    uVar1 = 2;
  }
  func_0x00010c1cbe20(param_1);
  func_0x00010c209fc0(param_1,param_2,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c25dc; end: 1065c26f3; -[SCComposerSnapPlayerView observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c25dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11274b340;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == lVar1) {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110daf4d8);
    _objc_release(lVar1);
    if ((int)uVar2 != 0) {
      lVar3 = *(long *)(param_1 + lVar4);
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010c252d60();
      _objc_release(lVar3);
      if (lVar1 == 1) {
        func_0x00010beda6e0(param_1);
        if ((*(byte *)(param_1 + _DAT_11274b344) & 1) == 0) {
          func_0x00010c0fe360(*(undefined8 *)(param_1 + lVar4));
        }
      }
      goto LAB_1065c26d4;
    }
  }
  else {
    _objc_release(lVar1);
  }
  if ((param_4 == *(long *)(param_1 + lVar4)) &&
     (uVar2 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e54e98),
     (int)uVar2 != 0)) {
    func_0x00010be32180(param_1);
  }
LAB_1065c26d4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c26f4; end: 1065c272f; -[SCComposerSnapPlayerView _handleTimeControlStatusChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c26f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274b340);
  func_0x00010c26f180(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setMediaPlaybackActive_notify__112586fb8,lVar1 == 2,1);
  return;
}



/* Entry: 1065c2730; end: 1065c275b; -[SCComposerSnapPlayerView _setMediaPlaybackActive:notify:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2730(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  if ((*(byte *)(param_1 + _DAT_11274b330) != param_3) &&
     (*(char *)(param_1 + _DAT_11274b330) = (char)param_3, param_4 != 0)) {
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be72370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performPlaybackStarted_11257a278);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be72350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performPlaybackPaused_11257a270);
    return;
  }
  return;
}



/* Entry: 1065c275c; end: 1065c27cb; -[SCComposerSnapPlayerView _restartPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c275c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = (long)_DAT_11274b340;
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010c157260(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_50);
  if ((*(byte *)(param_1 + _DAT_11274b344) & 1) == 0) {
    func_0x00010c0fe360(*(undefined8 *)(param_1 + lVar1));
  }
  return;
}



/* Entry: 1065c27cc; end: 1065c28d7; -[SCComposerSnapPlayerView resetVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c27cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274b33c),param_2,1);
  lVar4 = (long)_DAT_11274b340;
  func_0x00010c12d580(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                      &PTR____CFConstantStringClassReference_110e54e98);
  func_0x00010bea5840(param_1,param_2,0,0);
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010be8cec0(param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0(puVar2,param_2,param_1,uVar3,uVar1);
  _objc_release(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c28d8; end: 1065c28f7; -[SCComposerSnapPlayerView pauseVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c28d8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274b344) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274b340),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 1065c28f8; end: 1065c2913; -[SCComposerSnapPlayerView playVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c28f8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274b344) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274b340),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 1065c2914; end: 1065c2937; -[SCComposerSnapPlayerView setPreviewLoopDurationMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2914(long param_1,undefined8 param_2,ulong param_3)

{
  param_3 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
  if (*(ulong *)(param_1 + _DAT_11274b348) == param_3) {
    return;
  }
  *(ulong *)(param_1 + _DAT_11274b348) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010beddc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePreviewLoopTimeObserver_1125950c8);
  return;
}



/* Entry: 1065c2938; end: 1065c2b13; -[SCComposerSnapPlayerView _updatePreviewLoopTimeObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2938(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **unaff_x23;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010be8cec0();
  lVar5 = (long)_DAT_11274b340;
  if ((*(long *)(param_1 + lVar5) != 0) && (0 < (long)*(ulong *)(param_1 + _DAT_11274b348))) {
    _CMTimeMakeWithSeconds(&uStack_68,(double)*(ulong *)(param_1 + _DAT_11274b348) / 1000.0,1000);
    _objc_initWeak(auStack_70,param_1);
    uVar6 = *(undefined8 *)(param_1 + lVar5);
    uStack_88 = uStack_60;
    uStack_90 = uStack_68;
    uStack_80 = uStack_58;
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1065c2b14;
    puStack_a0 = &UNK_1108434b0;
    unaff_x23 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_70);
    func_0x00010bef7320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274b34c);
    *(undefined8 *)(param_1 + _DAT_11274b34c) = uVar6;
    _objc_release(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
    puVar1 = auStack_70;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be95380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065c2b14; end: 1065c2b3f;  */

void FUN_1065c2b14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065c2b40; end: 1065c2b8b; -[SCComposerSnapPlayerView _removePreviewLoopTimeObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2b40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274b34c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 != 0) {
    if (*(long *)(param_1 + _DAT_11274b340) != 0) {
      func_0x00010c12eb40();
      lVar1 = *(long *)(param_1 + lVar2);
    }
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065c2b8c; end: 1065c2c4b; -[SCComposerSnapPlayerView _updateLayerViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2b8c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010bf20c00();
  uVar1 = *(undefined8 *)(param_5 + _DAT_11274b340);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f620();
  _objc_release(uVar1);
  if ((0.0 < param_1) && (0.0 < param_2)) {
    dVar2 = param_4 / param_2;
    if (param_4 / param_2 <= param_3 / param_1) {
      dVar2 = param_3 / param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,(param_2 * dVar2 - param_4) * -0.25,param_1 * dVar2,
               *(undefined8 *)(param_5 + _DAT_11274b338),PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 1065c2c4c; end: 1065c2c6b; -[SCComposerSnapPlayerView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2c4c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == *(int *)(param_1 + _DAT_11274b350)) {
    return;
  }
  *(int *)(param_1 + _DAT_11274b350) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c0f8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_performOnStateUpdate_11261bd08);
  return;
}



/* Entry: 1065c2c6c; end: 1065c2cab; -[SCComposerSnapPlayerView setOnStateUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b354);
  *(undefined8 *)(param_1 + _DAT_11274b354) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_performOnStateUpdate_11261bd08);
  return;
}



/* Entry: 1065c2cac; end: 1065c2d4f; -[SCComposerSnapPlayerView performOnStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2cac(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274b354;
  if (*(long *)((long)param_1 + lVar2) != 0) {
    plVar1 = param_1;
    func_0x00010b97f424();
    func_0x00010b9a0c18();
    func_0x00010c0f9540(*(undefined8 *)((long)param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x0001065c2d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}



/* Entry: 1065c2d50; end: 1065c2d87; -[SCComposerSnapPlayerView setOnPlaybackStarted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b358);
  *(undefined8 *)(param_1 + _DAT_11274b358) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c2d88; end: 1065c2dbf; -[SCComposerSnapPlayerView setOnPlaybackPaused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274b35c);
  *(undefined8 *)(param_1 + _DAT_11274b35c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c2dc0; end: 1065c2e53; -[SCComposerSnapPlayerView _performPlaybackStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2dc0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274b358;
  if (*(long *)((long)param_1 + lVar2) != 0) {
    plVar1 = param_1;
    func_0x00010b97f424();
    func_0x00010c0f9540(*(undefined8 *)((long)param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x0001065c2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}



/* Entry: 1065c2e54; end: 1065c2ee7; -[SCComposerSnapPlayerView _performPlaybackPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2e54(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274b35c;
  if (*(long *)((long)param_1 + lVar2) != 0) {
    plVar1 = param_1;
    func_0x00010b97f424();
    func_0x00010c0f9540(*(undefined8 *)((long)param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x0001065c2ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}



/* Entry: 1065c2ee8; end: 1065c2f87; -[SCComposerSnapPlayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c2ee8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b34c,0);
  _objc_storeStrong(param_1 + _DAT_11274b35c,0);
  _objc_storeStrong(param_1 + _DAT_11274b358,0);
  _objc_storeStrong(param_1 + _DAT_11274b354,0);
  _objc_storeStrong(param_1 + _DAT_11274b33c,0);
  _objc_storeStrong(param_1 + _DAT_11274b338,0);
  _objc_storeStrong(param_1 + _DAT_11274b340,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b334,0);
  return;
}



/* Entry: 1065c2f88; end: 1065c304f;  */

void FUN_1065c2f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cbd38;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010c0b7ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065c3050; end: 1065c3173;  */

void FUN_1065c3050(void)

{
  _objc_alloc(PTR_PTR_1126cbd38);
  func_0x00010c037240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065c3174; end: 1065c317b;  */

void FUN_1065c3174(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d3710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setOnStateUpdate__1126527e8);
  return;
}



/* Entry: 1065c317c; end: 1065c31bb;  */

void FUN_1065c317c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1d3700(param_2);
  func_0x00010c209fc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065c31bc; end: 1065c31e3;  */

void FUN_1065c31bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d2eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setOnPlaybackStarted__1126525d0);
  return;
}



/* Entry: 1065c31e4; end: 1065c31ff;  */

undefined8 FUN_1065c31e4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c28be60(param_2);
  return 1;
}



/* Entry: 1065c3200; end: 1065c3207;  */

void FUN_1065c3200(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_resetVideo_11262c128);
  return;
}



/* Entry: 1065c3208; end: 1065c322f;  */

undefined8 FUN_1065c3208(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    func_0x00010c0fea00(param_2);
  }
  else {
    func_0x00010c0f6160();
  }
  return 1;
}



/* Entry: 1065c3230; end: 1065c3237;  */

void FUN_1065c3230(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_resetVideo_11262c128);
  return;
}



/* Entry: 1065c3238; end: 1065c3253;  */

undefined8 FUN_1065c3238(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1e1f20(param_2);
  return 1;
}



/* Entry: 1065c3254; end: 1065c325f;  */

void FUN_1065c3254(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e1f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setPreviewLoopDurationMs__1126561f0,0);
  return;
}



/* Entry: 1065c3260; end: 1065c3343; -[SCCTChatMessagingServiceProvider provide] */

void FUN_1065c3260(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cbd50;
  _objc_alloc(PTR_PTR_1126cbd50);
  func_0x00010bffdc80();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065c3344; end: 1065c3517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c3344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f385302);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar1,param_2,puVar11,0x11,0,0xb);
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126cbd40;
    _objc_alloc(PTR_PTR_1126cbd40);
    lVar2 = param_1 + _DAT_11274b368;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf50a40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11274b36c;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cbd48;
    _objc_opt_new(PTR_PTR_1126cbd48);
    lVar8 = param_1 + _DAT_11274b364;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005940(puVar11,param_2,lVar3,lVar6,puVar1,puVar7,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1065c3518; end: 1065c3567; -[SCCTChatMessagingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c3518(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b36c);
  _objc_destroyWeak(param_1 + _DAT_11274b368);
  _objc_destroyWeak(param_1 + _DAT_11274b364);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b360);
  return;
}



/* Entry: 1065c3568; end: 1065c368f; -[SCCTChatNewMessageProvider initWithConversationUpdaterEventPublisher:chatActionHandler:performer:announcer:currentUserId:] */

undefined1 *
FUN_1065c3568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1ee0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065c3690; end: 1065c36e3; -[SCCTChatNewMessageProvider dealloc] */

void FUN_1065c3690(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f1ee0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1065c36e4; end: 1065c371f; -[SCCTChatNewMessageProvider conversationId] */

void FUN_1065c36e4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065c3720; end: 1065c375f; -[SCCTChatNewMessageProvider setConversationId:] */

void FUN_1065c3720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 1065c3760; end: 1065c379b; -[SCCTChatNewMessageProvider lastMessageTimestamp] */

void FUN_1065c3760(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065c379c; end: 1065c37db; -[SCCTChatNewMessageProvider setLastMessageTimestamp:] */

void FUN_1065c379c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 1065c37dc; end: 1065c3847; -[SCCTChatNewMessageProvider startObservingNewMessagesWithConversationId:] */

void FUN_1065c37dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c183b80();
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
    func_0x00010bdf0160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar2);
  }
  lVar1 = param_1;
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdddd80(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065c3848; end: 1065c387b; -[SCCTChatNewMessageProvider stopObservingNewMessages] */

void FUN_1065c3848(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c183b80(param_1,param_2,0);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c387c; end: 1065c3883; -[SCCTChatNewMessageProvider addListener:] */

void FUN_1065c387c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1065c3884; end: 1065c388b; -[SCCTChatNewMessageProvider removeListener:] */

void FUN_1065c3884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1065c388c; end: 1065c3a1f; -[SCCTChatNewMessageProvider _createMessagesObserver] */

void FUN_1065c388c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf509e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1065c3a20;
  puStack_78 = &UNK_11085e5e8;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010bfad7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1065c3a20; end: 1065c3b1f;  */

long FUN_1065c3a20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010beb2600(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return lVar1;
}


