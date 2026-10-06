/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bdb960; end: 105bdbc23; -[SCFriendsFeedHeaderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdb960(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar7 = (long)_DAT_112731bf4;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22d860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731bf8);
  *(long *)(param_1 + _DAT_112731bf8) = lVar2;
  _objc_release(uVar6);
  _objc_release(lVar1);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar1 = lVar7;
  func_0x00010c22d820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731bfc);
  *(long *)(param_1 + _DAT_112731bfc) = lVar1;
  _objc_release(uVar6);
  _objc_release(lVar7);
  lVar1 = param_1 + _DAT_112731c00;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bfba2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c04);
  *(long *)(param_1 + _DAT_112731c04) = lVar7;
  _objc_release(uVar6);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c08);
  *(undefined **)(param_1 + _DAT_112731c08) = puVar3;
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c0c);
  *(undefined **)(param_1 + _DAT_112731c0c) = puVar3;
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c10);
  *(undefined **)(param_1 + _DAT_112731c10) = puVar3;
  _objc_release(uVar6);
  lVar1 = param_1 + _DAT_112731c14;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c18);
  *(long *)(param_1 + _DAT_112731c18) = lVar4;
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112731c1c;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105bdbc24;
  puStack_60 = &UNK_1108429c8;
  puVar5 = PTR_PTR_1126ae720;
  lStack_58 = lVar7;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c20);
  *(undefined **)(param_1 + _DAT_112731c20) = puVar5;
  _objc_release(uVar6);
  puStack_a0 = puVar3;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105bdbc80;
  puStack_88 = &UNK_1108429c8;
  puVar3 = PTR_PTR_1126ae720;
  lStack_80 = lVar7;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c24);
  *(undefined **)(param_1 + _DAT_112731c24) = puVar3;
  _objc_release(uVar6);
  lVar1 = lVar7;
  func_0x00010c0b8600(lVar7,param_2,&PTR___NSConcreteGlobalBlock_1108db828);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731c28);
  *(long *)(param_1 + _DAT_112731c28) = lVar1;
  _objc_release(uVar6);
  func_0x00010bdd3e60(param_1);
  _objc_release(lVar7);
  return;
}



/* Entry: 105bdbc24; end: 105bdbd0b;  */

void FUN_105bdbc24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf008c0();
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bdbd0c; end: 105bdbdcb; -[SCFriendsFeedHeaderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdbd0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112731c2c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f4a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = (long)_DAT_112731c30;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_38 = PTR_PTR_1126ec398;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bdbdcc; end: 105bdbdfb; -[SCFriendsFeedHeaderEntryPoint _clearShortcutSelectionForDirectNavigationShortcut] */

void FUN_105bdbdcc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bed1fa0(param_1,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
                    /* WARNING: Could not recover jumptable at 0x00010be939b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetScrollPosition_112582808);
  return;
}



/* Entry: 105bdbdfc; end: 105bdbf53; -[SCFriendsFeedHeaderEntryPoint _subscribeToFriendsFeedInteractionEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdbdfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112731c2c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfa3e80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e0ec0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105bdbf54; end: 105bdbf9b;  */

void FUN_105bdbf54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a0a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdbf9c; end: 105bdc153; -[SCFriendsFeedHeaderEntryPoint _handleFriendsFeedInteractionEvent:] */

void FUN_105bdbf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105bdc154;
  puStack_68 = &UNK_1108db848;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105bdc198;
  puStack_90 = &UNK_110843540;
  _objc_copyWeak(auStack_88,auStack_58);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105bdc1e0;
  puStack_b8 = &UNK_110843540;
  _objc_copyWeak(auStack_b0,auStack_58);
  _objc_copyWeak(auStack_d8,auStack_58);
  func_0x00010c0bf6e0(param_3);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105bdc154; end: 105bdc18f;  */

void FUN_105bdc154(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be79b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105bdc190; end: 105bdc197;  */

void FUN_105bdc190(void)

{
  return;
}



/* Entry: 105bdc198; end: 105bdc1df;  */

void FUN_105bdc198(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d9e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdc1e0; end: 105bdc277;  */

void FUN_105bdc1e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed1fa0();
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be939a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be09d60();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdc278; end: 105bdc2a3;  */

void FUN_105bdc278(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdc2a4; end: 105bdc2af;  */

void FUN_105bdc2a4(void)

{
  return;
}



/* Entry: 105bdc2b0; end: 105bdc2f3; -[SCFriendsFeedHeaderEntryPoint _onBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc2b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112731c34);
  if ((0xc < uVar1) && (0x12 < uVar1 || (1L << (uVar1 & 0x3f) & 0x4c000U) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed1fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__unselectShortcutIfNecessaryWith_112592190,
             &PTR____CFConstantStringClassReference_110f59bb8);
  return;
}



/* Entry: 105bdc2f4; end: 105bdc32b; -[SCFriendsFeedHeaderEntryPoint _handlePageLoadedWithSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc2f4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112731c38) != 0) {
    return;
  }
  func_0x00010be58a00();
                    /* WARNING: Could not recover jumptable at 0x00010be95db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeObservableUpdatesIfNecess_112583108);
  return;
}



/* Entry: 105bdc32c; end: 105bdc3bb; -[SCFriendsFeedHeaderEntryPoint _logShortcutSessionDidBeginWithSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731c38);
  *(undefined8 *)(param_1 + _DAT_112731c38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731c3c);
  puVar1 = PTR_PTR_1126b5460;
  func_0x00010c250980(PTR_PTR_1126b5460,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bdc3bc; end: 105bdc50f; -[SCFriendsFeedHeaderEntryPoint _subscribeToShortcutEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc3bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112731c2c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c22d600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e0ea0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105bdc510; end: 105bdc557;  */

void FUN_105bdc510(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be300a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdc558; end: 105bdc69f; -[SCFriendsFeedHeaderEntryPoint _handleShortcutEvent:] */

void FUN_105bdc558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105bdc6a0;
  puStack_58 = &UNK_110850658;
  _objc_copyWeak(auStack_50,auStack_48);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105bdc71c;
  puStack_80 = &UNK_11085c360;
  _objc_copyWeak(auStack_78,auStack_48);
  _objc_copyWeak(auStack_a0,auStack_48);
  func_0x00010c0be6e0(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105bdc6a0; end: 105bdc71b;  */

void FUN_105bdc6a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be58a20();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde0f20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be939a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdc71c; end: 105bdc77b;  */

void FUN_105bdc71c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdc77c; end: 105bdc7e3; -[SCFriendsFeedHeaderEntryPoint _pauseObservableUpdatesIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc77c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_112731c40) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112731c40) = 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731c3c);
  puVar1 = PTR_PTR_1126b5460;
  func_0x00010c0f6140(PTR_PTR_1126b5460);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bdc7e4; end: 105bdc84b; -[SCFriendsFeedHeaderEntryPoint _resumeObservableUpdatesIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc7e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_112731c40) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112731c40) = 0;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112731c3c);
    puVar1 = PTR_PTR_1126b5460;
    func_0x00010c13da60(PTR_PTR_1126b5460);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105bdc84c; end: 105bdc8ef; -[SCFriendsFeedHeaderEntryPoint _handleShortcutRecipients:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc84c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) && ((*(ulong *)(param_1 + _DAT_112731c34) & 0xfffffffffffffffe) != 0xc)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731c28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde0f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearShortcutSelection_112555d68);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bed1fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__unselectShortcutIfNecessaryWith_112592190,
               &PTR____CFConstantStringClassReference_110f59bb8);
    return;
  }
  return;
}



/* Entry: 105bdc8f0; end: 105bdc987; -[SCFriendsFeedHeaderEntryPoint _unselectShortcutIfNecessaryWithNextPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112731c44) != 0) {
    _objc_retain(param_3);
    func_0x00010bde0f20(param_1);
    func_0x00010be58a20(param_1,param_2,0xf,param_3);
    _objc_release(param_3);
    param_1 = param_1 + _DAT_112731c2c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b080();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105bdc988; end: 105bdca73; -[SCFriendsFeedHeaderEntryPoint _endShortcutSessionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdc988(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112731c38;
  if (*(long *)(param_1 + lVar4) != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731c3c);
    puVar1 = PTR_PTR_1126b5460;
    func_0x00010bf953c0(PTR_PTR_1126b5460);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731bf8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112731c08;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf51e00(uVar2);
    func_0x00010c289ec0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010be384a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar4),PTR_s_removeAllObjects_112628590);
    return;
  }
  return;
}



/* Entry: 105bdca74; end: 105bdcad3; -[SCFriendsFeedHeaderEntryPoint _incrementImpressionCountForShortcuts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdca74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105bdcad4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_112731c18),param_2,&puStack_38);
  return;
}



/* Entry: 105bdcad4; end: 105bdcc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdcad4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731c48);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731c0c);
        uVar3 = uVar5;
        func_0x00010c22d760(uVar5);
        func_0x00010c0df840(puVar2,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar6,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)uVar6 != 0) {
          func_0x00010bfec5c0(uVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar4 + _DAT_112731c3c);
  puVar2 = PTR_PTR_1126b5460;
  func_0x00010c1384e0(PTR_PTR_1126b5460);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105bdcc3c; end: 105bdcc87; -[SCFriendsFeedHeaderEntryPoint _resetScrollPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdcc3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731c3c);
  puVar1 = PTR_PTR_1126b5460;
  func_0x00010c1384e0(PTR_PTR_1126b5460);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bdcc88; end: 105bdccff; -[SCFriendsFeedHeaderEntryPoint _clearShortcutSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdcc88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731c3c);
  puVar1 = PTR_PTR_1126b5460;
  func_0x00010bf3c040(PTR_PTR_1126b5460);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731c44);
  *(undefined8 *)(param_1 + _DAT_112731c44) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_112731c34) = 0;
  return;
}



/* Entry: 105bdcd00; end: 105bdcd87; -[SCFriendsFeedHeaderEntryPoint _preselectShortcut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdcd00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    FUN_105bddfd4();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731c3c);
      puVar2 = PTR_PTR_1126b5460;
      func_0x00010c159040(PTR_PTR_1126b5460,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3,param_2,puVar2);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105bdcd88; end: 105bdcde3; -[SCFriendsFeedHeaderEntryPoint _doubleTapBatchCameraReply:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdcd88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112731c2c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24df40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdcde4; end: 105bdd04b; -[SCFriendsFeedHeaderEntryPoint _beginWithSharedCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdcde4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112731c3c);
  *(undefined **)(param_1 + _DAT_112731c3c) = puVar1;
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126b5458;
  _objc_alloc(PTR_PTR_1126b5458);
  lVar8 = (long)_DAT_112731c20;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282760();
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282760();
  func_0x00010c00f920(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_initWeak(auStack_68,param_1);
  lVar8 = param_1 + _DAT_112731c4c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = (long)_DAT_112731c2c;
  lVar3 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar6 = lVar8;
  func_0x00010bf24780(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112731c30));
  func_0x00010bec78e0(param_1);
  func_0x00010bec8460(param_1);
  func_0x00010bec8480(param_1);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 105bdd04c; end: 105bdd0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd04c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112731c2c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4b80();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdd0b8; end: 105bdd1bf; -[SCFriendsFeedHeaderEntryPoint carouselDidSelectShortcutWithIdentifier:name:shortcutType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd0b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112731c44;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112731c34) = param_5;
  lVar5 = param_1 + _DAT_112731c2c;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b080();
  _objc_release(lVar2);
  _objc_release(lVar5);
  func_0x00010be58580(param_1,param_2,param_3,param_5,uVar4);
  lVar5 = param_3;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112731c08),param_2,puVar3,param_3);
    _objc_release(puVar3);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bdd1c0; end: 105bdd1eb; -[SCFriendsFeedHeaderEntryPoint carouselDidDoubleTapShortcutWithIdentifier:name:shortcutType:wasAlreadySelected:] */

void FUN_105bdd1c0(undefined8 param_1)

{
  ulong in_x4;
  uint in_w5;
  
  if ((in_x4 < 0x14) && ((1L << (in_x4 & 0x3f) & 0xfb20cU) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be05bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__doubleTapBatchCameraReply__11255f098,in_w5 ^ 1);
  return;
}



/* Entry: 105bdd1ec; end: 105bdd273; -[SCFriendsFeedHeaderEntryPoint carouselDidResetPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd1ec(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_112731c44) != 0) {
    *(undefined8 *)(param_1 + _DAT_112731c44) = 0;
    _objc_release();
    *(undefined8 *)(param_1 + _DAT_112731c34) = 0;
    param_1 = param_1 + _DAT_112731c2c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b080();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105bdd274; end: 105bdd30b; -[SCFriendsFeedHeaderEntryPoint carouselDidUpdateDisplayedShortcuts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731c18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105bdd30c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105bdd30c; end: 105bdd37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd30c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100817178(uVar1,&PTR___NSConcreteGlobalBlock_1108db968);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731c0c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731c0c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bdd380; end: 105bdd48b; -[SCFriendsFeedHeaderEntryPoint carouselDidUpdateRegisteredPlugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112731c18);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar4);
  lVar1 = *(long *)(param_1 + _DAT_112731c24);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar4 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108db9c8);
    uVar3 = uVar4;
    func_0x0001006372a4();
    _objc_release(uVar4);
    func_0x00010bec7380(param_1);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105bdd48c; end: 105bdd577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd48c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1108db988);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731c48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731c48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bdd578; end: 105bdd583;  */

void FUN_105bdd578(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shouldBadgeForSource__1126692b0,1);
  return;
}



/* Entry: 105bdd584; end: 105bdd713; -[SCFriendsFeedHeaderEntryPoint _subscribeToShortcutsForOverPull] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd584(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112731c24);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731bfc);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22d6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105bdd714; end: 105bdd75b;  */

void FUN_105bdd714(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfdc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bdd75c; end: 105bdd79b; -[SCFriendsFeedHeaderEntryPoint _updateShortcutsListForOverPull:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731c50);
  *(undefined8 *)(param_1 + _DAT_112731c50) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be18e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__forwardShortcutBadgeStateToOver_112563d40);
  return;
}



/* Entry: 105bdd79c; end: 105bdd947; -[SCFriendsFeedHeaderEntryPoint _subscribeToBadgeCountsForOverPullWithBadgingPlugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdd79c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112731c54;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar7));
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = 0;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010bedfda0(param_1);
  }
  else {
    lVar2 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108dba48);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_58;
    _objc_initWeak(puVar4,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    puVar6 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar6;
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105bdd948; end: 105bddadb;  */

void FUN_105bdd948(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a50a0);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = param_2;
  func_0x00010bf153c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae750;
  puVar5 = PTR_PTR_1126b14f0;
  func_0x00010bf80d20(PTR_PTR_1126b14f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c2519e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  uVar8 = uVar7;
  func_0x00010c0b8600(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105bddadc; end: 105bddb57;  */

void FUN_105bddadc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b60f8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c22d640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2b40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bddb58; end: 105bddb7f;  */

void FUN_105bddb58(undefined8 param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108dbad8,
                      &PTR___NSConcreteGlobalBlock_1108dbaf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bddb80; end: 105bddb8f;  */

void FUN_105bddb80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_first_1125c9d08);
  return;
}



/* Entry: 105bddb90; end: 105bddbd7;  */

void FUN_105bddb90(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bddbd8; end: 105bddc17; -[SCFriendsFeedHeaderEntryPoint _updateShortcutBadgesForOverPull:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bddbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731c58);
  *(undefined8 *)(param_1 + _DAT_112731c58) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be18e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__forwardShortcutBadgeStateToOver_112563d40);
  return;
}



/* Entry: 105bddc18; end: 105bddcb3; -[SCFriendsFeedHeaderEntryPoint _forwardShortcutBadgeStateToOverPullDelegateIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bddc18(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + _DAT_112731c58) != 0) && (*(long *)(param_1 + _DAT_112731c50) != 0)) {
    param_1 = param_1 + _DAT_112731c2c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e6a0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105bddcb4; end: 105bdddbf; -[SCFriendsFeedHeaderEntryPoint _logSelectShortcutWithIdentifier:currentType:previousIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bddcb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    if (param_5 == 0) goto LAB_105bddda0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731c04);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15fd40();
  }
  else {
    lVar3 = (long)_DAT_112731c04;
    if (param_5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15fd40();
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112731c38);
    func_0x000105bddff8(param_4);
    func_0x00010c15fcc0(uVar1,param_2,uVar2,param_4);
  }
  _objc_release(uVar1);
LAB_105bddda0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bdddc0; end: 105bdde27; -[SCFriendsFeedHeaderEntryPoint _logShortcutUnselectWithExitEvent:nextPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdddc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731c04);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fd40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bdde28; end: 105bddfd3; -[SCFriendsFeedHeaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdde28(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731c64);
  _objc_storeStrong(param_1 + _DAT_112731c30,0);
  _objc_destroyWeak(param_1 + _DAT_112731c4c);
  _objc_destroyWeak(param_1 + _DAT_112731c60);
  _objc_destroyWeak(param_1 + _DAT_112731c14);
  _objc_destroyWeak(param_1 + _DAT_112731bf4);
  _objc_destroyWeak(param_1 + _DAT_112731c1c);
  _objc_destroyWeak(param_1 + _DAT_112731c00);
  _objc_destroyWeak(param_1 + _DAT_112731c5c);
  _objc_destroyWeak(param_1 + _DAT_112731c2c);
  _objc_storeStrong(param_1 + _DAT_112731c20,0);
  _objc_storeStrong(param_1 + _DAT_112731c28,0);
  _objc_storeStrong(param_1 + _DAT_112731c08,0);
  _objc_storeStrong(param_1 + _DAT_112731c18,0);
  _objc_storeStrong(param_1 + _DAT_112731c04,0);
  _objc_storeStrong(param_1 + _DAT_112731c38,0);
  _objc_storeStrong(param_1 + _DAT_112731c48,0);
  _objc_storeStrong(param_1 + _DAT_112731c0c,0);
  _objc_storeStrong(param_1 + _DAT_112731c44,0);
  _objc_storeStrong(param_1 + _DAT_112731c10,0);
  _objc_storeStrong(param_1 + _DAT_112731c24,0);
  _objc_storeStrong(param_1 + _DAT_112731c54,0);
  _objc_storeStrong(param_1 + _DAT_112731c58,0);
  _objc_storeStrong(param_1 + _DAT_112731c50,0);
  _objc_storeStrong(param_1 + _DAT_112731bfc,0);
  _objc_storeStrong(param_1 + _DAT_112731bf8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731c3c,0);
  return;
}



/* Entry: 105bddfd4; end: 105bde017;  */

undefined * FUN_105bddfd4(long param_1)

{
  if (param_1 - 1U < 0x13) {
    return (&PTR_PTR_1108dbb18)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 105bde018; end: 105bde08f; -[SCLensFriendsFeedContextConfigCOFFetcher initWithConfigProvider:] */

undefined1 * FUN_105bde018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec3a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bde090; end: 105bde253; -[SCLensFriendsFeedContextConfigCOFFetcher config] */

void FUN_105bde090(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c1195e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c2f20;
      uVar5 = uVar1;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
      _objc_release(uVar3);
      _objc_release(uVar5);
      if (lRam00000001136c1c88 != -1) {
        func_0x00010002a2fc(0x1136c1c88,&PTR___NSConcreteGlobalBlock_1108dbbb0);
      }
      puVar2 = PTR_PTR_1126c2f20;
      if ((bRam00000001136c1c80 & 1) == 0) {
        uVar5 = uVar1;
        func_0x00010c296d80(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        _objc_release(0);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        *(undefined **)(param_1 + 0x18) = puVar2;
        _objc_release(uVar3);
      }
      else {
        lVar4 = param_1;
        func_0x00010be1af40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        *(long *)(param_1 + 0x18) = lVar4;
      }
      _objc_release(uVar5);
      *(undefined1 *)(param_1 + 0x14) = 1;
      _objc_release(0);
      _objc_release(uVar1);
    }
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105bde254; end: 105bde2eb; -[SCLensFriendsFeedContextConfigCOFFetcher _generateDefaultProto] */

void FUN_105bde254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2f20;
  _objc_alloc_init(PTR_PTR_1126c2f20);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197dc0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c202ae0(puVar1,param_2,1);
  func_0x00010c219240(puVar1,param_2,10);
  func_0x00010c1f9000(puVar1,param_2,1);
  func_0x00010c1ab1e0(puVar1,param_2,3);
  func_0x00010c1bbce0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bde2ec; end: 105bde3fb; -[SCLensFriendsFeedContextConfigCOFFetcher smartCTABehaviorConfig] */

void FUN_105bde2ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c1195e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e20fd8,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c2f28;
      uVar2 = uVar1;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      uStack_48 = 0;
      func_0x00010c0f40e0(puVar3,param_2,uVar2,&uStack_48);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uStack_48;
      _objc_retain(uStack_48);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + 0x15) = 1;
      _objc_release(uVar5);
      _objc_release(uVar1);
    }
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105bde3fc; end: 105bde413; -[SCLensFriendsFeedContextConfigCOFFetcher lensSuggestionsEnabled] */

void FUN_105bde3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e20f38,1,0);
  return;
}



/* Entry: 105bde414; end: 105bde42b; -[SCLensFriendsFeedContextConfigCOFFetcher lensSuggestionsDoubleTapEnabled] */

void FUN_105bde414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e20f58,1,0);
  return;
}



/* Entry: 105bde42c; end: 105bde493; -[SCLensFriendsFeedContextConfigCOFFetcher numberOfConversations] */

/* WARNING: Possible PIC construction at 0x000105bde444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105bde448) */
/* WARNING: Removing unreachable block (ram,0x000105bde460) */
/* WARNING: Removing unreachable block (ram,0x000105bde44c) */

void FUN_105bde42c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c31f0,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 105bde494; end: 105bde4fb; -[SCLensFriendsFeedContextConfigCOFFetcher suggestionsCount] */

/* WARNING: Possible PIC construction at 0x000105bde4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105bde4b0) */
/* WARNING: Removing unreachable block (ram,0x000105bde4c8) */
/* WARNING: Removing unreachable block (ram,0x000105bde4b4) */

void FUN_105bde494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c31f0,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 105bde4fc; end: 105bde563; -[SCLensFriendsFeedContextConfigCOFFetcher impressionCap] */

/* WARNING: Possible PIC construction at 0x000105bde514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105bde518) */
/* WARNING: Removing unreachable block (ram,0x000105bde530) */
/* WARNING: Removing unreachable block (ram,0x000105bde51c) */

void FUN_105bde4fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c31f0,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 105bde564; end: 105bde5a3; -[SCLensFriendsFeedContextConfigCOFFetcher lensSuggestionsSecondarySortingPriorityRandom] */

bool FUN_105bde564(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1550a0();
  _objc_release(param_1);
  return (int)uVar1 == 2;
}



/* Entry: 105bde5a4; end: 105bde5bb; -[SCLensFriendsFeedContextConfigCOFFetcher useStandardEventIcons] */

void FUN_105bde5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e20f78,0,0);
  return;
}



/* Entry: 105bde5bc; end: 105bde5e7; -[SCLensFriendsFeedContextConfigCOFFetcher smartCTAPostSnapActionCap] */

long FUN_105bde5bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e20f98,0xffffffff,0);
  return (long)(int)uVar1;
}



/* Entry: 105bde5e8; end: 105bde603; -[SCLensFriendsFeedContextConfigCOFFetcher steaksCTAPrimaryLensId] */

void FUN_105bde5e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110e20fb8,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 105bde604; end: 105bde63f; -[SCLensFriendsFeedContextConfigCOFFetcher storyHidesSmartCTADisabled] */

undefined8 FUN_105bde604(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c23eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c259c40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bde640; end: 105bde67b; -[SCLensFriendsFeedContextConfigCOFFetcher perConversationCTAClearEnabled] */

undefined8 FUN_105bde640(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c23eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f7b40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bde67c; end: 105bde6bf; -[SCLensFriendsFeedContextConfigCOFFetcher consumableContentCheckLimit] */

int FUN_105bde67c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c23eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf49840();
  _objc_release(param_1);
  iVar1 = 10;
  if ((int)uVar2 != 0) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 105bde6c0; end: 105bde6fb; -[SCLensFriendsFeedContextConfigCOFFetcher limitUnreadContentCheckEnabled] */

undefined8 FUN_105bde6c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c23eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c099120();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105bde6fc; end: 105bde737; -[SCLensFriendsFeedContextConfigCOFFetcher maxSmartCTACount] */

ulong FUN_105bde6fc(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c23eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c2e60();
  _objc_release(param_1);
  return uVar1 & 0xffffffff;
}



/* Entry: 105bde738; end: 105bde7d3; -[SCLensFriendsFeedContextConfigCOFFetcher .cxx_destruct] */

void FUN_105bde738(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bde7d4; end: 105bde8d7; -[SCLensFriendsFeedContextConfigServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bde7d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_112731c80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105bde8d8;
  puStack_50 = &UNK_1108dbbd0;
  lStack_48 = lVar2;
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2f38;
  _objc_alloc(PTR_PTR_1126c2f38);
  func_0x00010c024100();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112731c84),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 105bde8d8; end: 105bde907;  */

void FUN_105bde8d8(void)

{
  _objc_alloc(PTR_PTR_1126c2f30);
  func_0x00010c001220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bde908; end: 105bde94f; -[SCLensFriendsFeedContextConfigServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bde908(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731c84,0);
  _objc_destroyWeak(param_1 + _DAT_112731c80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112731c88);
  return;
}



/* Entry: 105bde950; end: 105bde9c3; -[SCLensFriendsFeedContextDeltaSyncConfigProvider initWithCircumstanceEngine:] */

undefined1 * FUN_105bde950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec3a8;
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



/* Entry: 105bde9c4; end: 105bdeabf; -[SCLensFriendsFeedContextDeltaSyncConfigProvider eventTriggersExcludeList] */

void FUN_105bde9c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e20ff8,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init();
  func_0x00010c1d02e0();
  uVar3 = uVar1;
  func_0x00010bf44740(uVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105bdeac0;
  puStack_40 = &UNK_1108dbc00;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  uVar4 = uVar3;
  func_0x00010c0ba200(uVar3,param_2,&puStack_58,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105bdeac0; end: 105bdeacb;  */

void FUN_105bdeac0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_numberFromString__112615490,param_2);
  return;
}



/* Entry: 105bdeacc; end: 105bdead7; -[SCLensFriendsFeedContextDeltaSyncConfigProvider .cxx_destruct] */

void FUN_105bdeacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bdead8; end: 105bdebc7; -[SCLensFriendsFeedContextDeltaSyncConfigServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdead8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112731c94;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105bdebc8;
  puStack_40 = &UNK_1108dbc30;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2f48;
  _objc_alloc(PTR_PTR_1126c2f48);
  func_0x00010c00b560();
  _objc_release(puVar2);
  _objc_release(lStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bdebc8; end: 105bdebf7;  */

void FUN_105bdebc8(void)

{
  _objc_alloc(PTR_PTR_1126c2f40);
  func_0x00010bffe1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bdebf8; end: 105bdec2f; -[SCLensFriendsFeedContextDeltaSyncConfigServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bdebf8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731c94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112731c90);
  return;
}



/* Entry: 105bdec30; end: 105bded13; +[SCLensSmartCTABehaviorConfig descriptor] */

void FUN_105bdec30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a8fab0,
                        &PTR____CFConstantStringClassReference_110e21018,&PTR_DAT_11311dda8,
                        &PTR_DAT_11311ddc0,5,0xc,0x1c);
    puRam00000001136c1c90 = puVar1;
  }
  return;
}



/* Entry: 105bded14; end: 105bded1f;  */

bool FUN_105bded14(uint param_1)

{
  return param_1 < 0x19;
}



/* Entry: 105bded20; end: 105bded9b;  */

undefined * FUN_105bded20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1ca0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e21058,
                        &UNK_10ddcaddc,&UNK_10ddcae04,4,FUN_105bded9c,0);
    do {
      if (puRam00000001136c1ca0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1ca0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1ca0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1ca0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1ca0;
}



/* Entry: 105bded9c; end: 105bdeda7;  */

bool FUN_105bded9c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105bdeda8; end: 105bdee0f; +[SCLensFriendsFeedContextLensInfo descriptor] */

void FUN_105bdeda8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a8fb50,
                        &PTR____CFConstantStringClassReference_110e01618,&PTR_DAT_11311de60,
                        &PTR_s_lensId_11311de78,2,0x18,0x1c);
    puRam00000001136c1ca8 = puVar1;
  }
  return;
}



/* Entry: 105bdee10; end: 105bdee77; +[SCLensFriendsFeedContextEvent descriptor] */

void FUN_105bdee10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a8fba0,
                        &PTR____CFConstantStringClassReference_110e21078,&PTR_DAT_11311de60,
                        &PTR_s_priority_11311deb8,3,0x18,0x1c);
    puRam00000001136c1cb0 = puVar1;
  }
  return;
}



/* Entry: 105bdee78; end: 105bdeedf; +[SCLensFriendsFeedContextConfig descriptor] */

void FUN_105bdee78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a8fbf0,
                        &PTR____CFConstantStringClassReference_110dba7d8,&PTR_DAT_11311de60,
                        &PTR_DAT_11311df18,6,0x28,0x1c);
    puRam00000001136c1cb8 = puVar1;
  }
  return;
}



/* Entry: 105bdeee0; end: 105bdeeeb; +[SCCFriendsFeedNearMe componentPath] */

undefined ** FUN_105bdeee0(void)

{
  return &PTR____CFConstantStringClassReference_110e21098;
}



/* Entry: 105bdeeec; end: 105bdef0b; -[SCCFriendsFeedNearMe initWithViewModel:componentContext:runtime:] */

void FUN_105bdeeec(void)

{
  FUN_105bdf270(PTR_PTR_1126ec3b0);
  return;
}



/* Entry: 105bdef0c; end: 105bdef3f; -[SCCFriendsFeedNearMe setViewModel:] */

void FUN_105bdef0c(void)

{
  func_0x000105bdf284();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105bdf294();
  func_0x000105bdf2ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105bdef40; end: 105bdef77; -[SCCFriendsFeedNearMe viewModel] */

void FUN_105bdef40(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105bdf2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bdef78; end: 105bdef83; +[SCCNearMeEmptyFriendsList componentPath] */

undefined ** FUN_105bdef78(void)

{
  return &PTR____CFConstantStringClassReference_110e210b8;
}



/* Entry: 105bdef84; end: 105bdefa3; -[SCCNearMeEmptyFriendsList initWithViewModel:componentContext:runtime:] */

void FUN_105bdef84(void)

{
  FUN_105bdf270(PTR_PTR_1126ec3b8);
  return;
}



/* Entry: 105bdefa4; end: 105bdefd7; -[SCCNearMeEmptyFriendsList setViewModel:] */

void FUN_105bdefa4(void)

{
  func_0x000105bdf284();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105bdf294();
  func_0x000105bdf2ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


