/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051d2148; end: 1051d2223; -[SCContextActionsEntryPoint registerActionPerformerWithActionCase:provider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d2148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5f68;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c055f20();
  _objc_release(param_4);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11271ed78;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c119bc0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c125b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11271ed44),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051d2224; end: 1051d2243; -[SCContextActionsEntryPoint discoverFeedDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d2224(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ed4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051d2244; end: 1051d2257; -[SCContextActionsEntryPoint setDiscoverFeedDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d2244(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ed4c,param_3);
  return;
}



/* Entry: 1051d2258; end: 1051d2267; -[SCContextActionsEntryPoint contentProductPlaybackExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051d2258(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ed50);
}



/* Entry: 1051d2268; end: 1051d22a7; -[SCContextActionsEntryPoint setContentProductPlaybackExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d2268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ed50;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051d22a8; end: 1051d22c7; -[SCContextActionsEntryPoint sponsoredLensContextCardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d22a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271ee74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051d22c8; end: 1051d22db; -[SCContextActionsEntryPoint setSponsoredLensContextCardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d22c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271ee74,param_3);
  return;
}



/* Entry: 1051d22dc; end: 1051d2a7b; -[SCContextActionsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051d22dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ef88);
  _objc_destroyWeak(param_1 + _DAT_11271ef84);
  _objc_storeStrong(param_1 + _DAT_11271ef80,0);
  _objc_destroyWeak(param_1 + _DAT_11271ef7c);
  _objc_destroyWeak(param_1 + _DAT_11271ef78);
  _objc_destroyWeak(param_1 + _DAT_11271ef74);
  _objc_destroyWeak(param_1 + _DAT_11271ef70);
  _objc_storeStrong(param_1 + _DAT_11271ef6c,0);
  _objc_destroyWeak(param_1 + _DAT_11271ef68);
  _objc_destroyWeak(param_1 + _DAT_11271ef64);
  _objc_destroyWeak(param_1 + _DAT_11271ef60);
  _objc_destroyWeak(param_1 + _DAT_11271ef5c);
  _objc_destroyWeak(param_1 + _DAT_11271ef58);
  _objc_destroyWeak(param_1 + _DAT_11271ef54);
  _objc_destroyWeak(param_1 + _DAT_11271ef50);
  _objc_destroyWeak(param_1 + _DAT_11271ef4c);
  _objc_destroyWeak(param_1 + _DAT_11271ef48);
  _objc_destroyWeak(param_1 + _DAT_11271ef44);
  _objc_storeStrong(param_1 + _DAT_11271ef40,0);
  _objc_destroyWeak(param_1 + _DAT_11271ef3c);
  _objc_destroyWeak(param_1 + _DAT_11271ef38);
  _objc_destroyWeak(param_1 + _DAT_11271ef34);
  _objc_storeStrong(param_1 + _DAT_11271ef30,0);
  _objc_destroyWeak(param_1 + _DAT_11271ef2c);
  _objc_storeStrong(param_1 + _DAT_11271ef28,0);
  _objc_destroyWeak(param_1 + _DAT_11271ef24);
  _objc_storeStrong(param_1 + _DAT_11271ef20,0);
  _objc_storeStrong(param_1 + _DAT_11271ef1c,0);
  _objc_storeStrong(param_1 + _DAT_11271ef18,0);
  _objc_destroyWeak(param_1 + _DAT_11271ef14);
  _objc_destroyWeak(param_1 + _DAT_11271ef10);
  _objc_destroyWeak(param_1 + _DAT_11271ef0c);
  _objc_storeStrong(param_1 + _DAT_11271ef08,0);
  _objc_storeStrong(param_1 + _DAT_11271ef04,0);
  _objc_storeStrong(param_1 + _DAT_11271ef00,0);
  _objc_storeStrong(param_1 + _DAT_11271eefc,0);
  _objc_destroyWeak(param_1 + _DAT_11271eef8);
  _objc_destroyWeak(param_1 + _DAT_11271eef4);
  _objc_storeStrong(param_1 + _DAT_11271eef0,0);
  _objc_storeStrong(param_1 + _DAT_11271eeec,0);
  _objc_storeStrong(param_1 + _DAT_11271eee8,0);
  _objc_storeStrong(param_1 + _DAT_11271eee4,0);
  _objc_storeStrong(param_1 + _DAT_11271eee0,0);
  _objc_destroyWeak(param_1 + _DAT_11271eedc);
  _objc_storeStrong(param_1 + _DAT_11271eed8,0);
  _objc_storeStrong(param_1 + _DAT_11271eed4,0);
  _objc_destroyWeak(param_1 + _DAT_11271eed0);
  _objc_destroyWeak(param_1 + _DAT_11271eecc);
  _objc_destroyWeak(param_1 + _DAT_11271eec8);
  _objc_storeStrong(param_1 + _DAT_11271eec4,0);
  _objc_storeStrong(param_1 + _DAT_11271eec0,0);
  _objc_destroyWeak(param_1 + _DAT_11271eebc);
  _objc_storeStrong(param_1 + _DAT_11271eeb8,0);
  _objc_storeStrong(param_1 + _DAT_11271eeb4,0);
  _objc_storeStrong(param_1 + _DAT_11271eeb0,0);
  _objc_storeStrong(param_1 + _DAT_11271eeac,0);
  _objc_storeStrong(param_1 + _DAT_11271eea8,0);
  _objc_storeStrong(param_1 + _DAT_11271eea4,0);
  _objc_storeStrong(param_1 + _DAT_11271eea0,0);
  _objc_storeStrong(param_1 + _DAT_11271ee9c,0);
  _objc_destroyWeak(param_1 + _DAT_11271ee98);
  _objc_destroyWeak(param_1 + _DAT_11271ee94);
  _objc_storeStrong(param_1 + _DAT_11271ee90,0);
  _objc_destroyWeak(param_1 + _DAT_11271ee8c);
  _objc_destroyWeak(param_1 + _DAT_11271ee88);
  _objc_destroyWeak(param_1 + _DAT_11271ee84);
  _objc_destroyWeak(param_1 + _DAT_11271ee80);
  _objc_destroyWeak(param_1 + _DAT_11271ee7c);
  _objc_destroyWeak(param_1 + _DAT_11271ee78);
  _objc_destroyWeak(param_1 + _DAT_11271ee74);
  _objc_destroyWeak(param_1 + _DAT_11271ee70);
  _objc_destroyWeak(param_1 + _DAT_11271ee6c);
  _objc_destroyWeak(param_1 + _DAT_11271ee68);
  _objc_destroyWeak(param_1 + _DAT_11271ee64);
  _objc_destroyWeak(param_1 + _DAT_11271ee60);
  _objc_destroyWeak(param_1 + _DAT_11271ee5c);
  _objc_storeStrong(param_1 + _DAT_11271ee58,0);
  _objc_storeStrong(param_1 + _DAT_11271ee54,0);
  _objc_destroyWeak(param_1 + _DAT_11271ee50);
  _objc_destroyWeak(param_1 + _DAT_11271ee4c);
  _objc_destroyWeak(param_1 + _DAT_11271ee48);
  _objc_destroyWeak(param_1 + _DAT_11271ee44);
  _objc_destroyWeak(param_1 + _DAT_11271ee40);
  _objc_destroyWeak(param_1 + _DAT_11271ee3c);
  _objc_destroyWeak(param_1 + _DAT_11271ee38);
  _objc_destroyWeak(param_1 + _DAT_11271ee34);
  _objc_destroyWeak(param_1 + _DAT_11271ee30);
  _objc_destroyWeak(param_1 + _DAT_11271ee2c);
  _objc_destroyWeak(param_1 + _DAT_11271ee28);
  _objc_destroyWeak(param_1 + _DAT_11271ee24);
  _objc_destroyWeak(param_1 + _DAT_11271ee20);
  _objc_destroyWeak(param_1 + _DAT_11271ee1c);
  _objc_destroyWeak(param_1 + _DAT_11271ee18);
  _objc_destroyWeak(param_1 + _DAT_11271ee14);
  _objc_destroyWeak(param_1 + _DAT_11271ee10);
  _objc_destroyWeak(param_1 + _DAT_11271ee0c);
  _objc_destroyWeak(param_1 + _DAT_11271ee08);
  _objc_destroyWeak(param_1 + _DAT_11271ee04);
  _objc_destroyWeak(param_1 + _DAT_11271ee00);
  _objc_destroyWeak(param_1 + _DAT_11271edfc);
  _objc_destroyWeak(param_1 + _DAT_11271edf8);
  _objc_destroyWeak(param_1 + _DAT_11271edf4);
  _objc_destroyWeak(param_1 + _DAT_11271edf0);
  _objc_destroyWeak(param_1 + _DAT_11271edec);
  _objc_destroyWeak(param_1 + _DAT_11271ede8);
  _objc_destroyWeak(param_1 + _DAT_11271ede4);
  _objc_destroyWeak(param_1 + _DAT_11271ede0);
  _objc_destroyWeak(param_1 + _DAT_11271eddc);
  _objc_destroyWeak(param_1 + _DAT_11271edd8);
  _objc_destroyWeak(param_1 + _DAT_11271edd4);
  _objc_destroyWeak(param_1 + _DAT_11271edd0);
  _objc_destroyWeak(param_1 + _DAT_11271edcc);
  _objc_destroyWeak(param_1 + _DAT_11271edc8);
  _objc_destroyWeak(param_1 + _DAT_11271edc4);
  _objc_destroyWeak(param_1 + _DAT_11271edc0);
  _objc_destroyWeak(param_1 + _DAT_11271edbc);
  _objc_destroyWeak(param_1 + _DAT_11271edb8);
  _objc_destroyWeak(param_1 + _DAT_11271edb4);
  _objc_storeStrong(param_1 + _DAT_11271edb0,0);
  _objc_storeStrong(param_1 + _DAT_11271edac,0);
  _objc_storeStrong(param_1 + _DAT_11271eda8,0);
  _objc_storeStrong(param_1 + _DAT_11271eda4,0);
  _objc_storeStrong(param_1 + _DAT_11271eda0,0);
  _objc_storeStrong(param_1 + _DAT_11271ed9c,0);
  _objc_storeStrong(param_1 + _DAT_11271ed98,0);
  _objc_storeStrong(param_1 + _DAT_11271ed94,0);
  _objc_destroyWeak(param_1 + _DAT_11271ed90);
  _objc_destroyWeak(param_1 + _DAT_11271ed8c);
  _objc_destroyWeak(param_1 + _DAT_11271ed88);
  _objc_destroyWeak(param_1 + _DAT_11271ed84);
  _objc_destroyWeak(param_1 + _DAT_11271ed80);
  _objc_destroyWeak(param_1 + _DAT_11271ed7c);
  _objc_destroyWeak(param_1 + _DAT_11271ed78);
  _objc_destroyWeak(param_1 + _DAT_11271ed74);
  _objc_destroyWeak(param_1 + _DAT_11271ed70);
  _objc_destroyWeak(param_1 + _DAT_11271ed6c);
  _objc_destroyWeak(param_1 + _DAT_11271ed68);
  _objc_destroyWeak(param_1 + _DAT_11271ed64);
  _objc_destroyWeak(param_1 + _DAT_11271ed60);
  _objc_destroyWeak(param_1 + _DAT_11271ed5c);
  _objc_destroyWeak(param_1 + _DAT_11271ed58);
  _objc_destroyWeak(param_1 + _DAT_11271ed54);
  _objc_storeStrong(param_1 + _DAT_11271ed50,0);
  _objc_destroyWeak(param_1 + _DAT_11271ed4c);
  _objc_destroyWeak(param_1 + _DAT_11271ed48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ed44,0);
  return;
}



/* Entry: 1051d2a7c; end: 1051d2b47; -[SCContextSaveActionPerformer initWithActionHandler:userId:notificationPool:] */

undefined1 *
FUN_1051d2a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6d00;
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



/* Entry: 1051d2b48; end: 1051d2d4b; -[SCContextSaveActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051d2b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_6;
  func_0x00010bf50720(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c242420(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf36f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010bfa89a0(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1051d2d4c; end: 1051d2dc3;  */

void FUN_1051d2d4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be726e0();
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051d2db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051d2dc4; end: 1051d305f; -[SCContextSaveActionPerformer _performSaveOrUnsaveAction:params:] */

void FUN_1051d2dc4(long param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c29d360();
  uVar1 = param_3;
  func_0x00010c07d0e0();
  uVar7 = *(undefined8 *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    puVar2 = param_4;
    func_0x00010bf50720(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c242420(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf36f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a9c0(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126afde0;
    func_0x0001070b06f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1051d3060;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(puVar3);
    puStack_78 = puVar3;
    func_0x000100162d98("APPSTORE",&puStack_98);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_70);
  }
  else {
    puVar3 = param_4;
    func_0x00010bf50720(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c242420(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf36f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2824a0(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d3060; end: 1051d30b3;  */

void FUN_1051d3060(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051d30b4; end: 1051d30ef; -[SCContextSaveActionPerformer .cxx_destruct] */

void FUN_1051d30b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051d30f0; end: 1051d3193; -[SCContextSaveClientGeneratedSnapActionPerformer initWithSaveManager:notificationPool:] */

undefined1 *
FUN_1051d30f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6d08;
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



/* Entry: 1051d3194; end: 1051d33cb; -[SCContextSaveClientGeneratedSnapActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051d3194(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c14a200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar3 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_6);
    _objc_retain(uVar2);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bfa9ea0(uVar5);
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
    puVar6 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051d33cc; end: 1051d3573;  */

void FUN_1051d33cc(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x00010c07d080();
  if (param_2 == 0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1051d3624;
    puStack_98 = &UNK_1108450c8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    ppuVar1 = &puStack_b0;
    uStack_90 = uVar2;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    _objc_retain(ppuVar1);
    _objc_retain(ppuVar1);
    func_0x00010c14a700(uVar2);
    _objc_release(param_1);
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
    uVar2 = uStack_90;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1051d3574;
    puStack_70 = &UNK_110842e18;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_88);
    uVar2 = uStack_68;
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 1051d3574; end: 1051d3623;  */

void FUN_1051d3574(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ea4c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b5b28;
    func_0x00010bf52060(PTR_PTR_1126b5b28);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ea8e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar2,param_2,puVar3,uVar4,0);
    _objc_release(uVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051d3624; end: 1051d36bf;  */

void FUN_1051d3624(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1051d36c0;
  puStack_38 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 1051d36c0; end: 1051d3757;  */

void FUN_1051d36c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ea4c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ea8e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar3,param_2,uVar1,uVar4,0);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1051d3758; end: 1051d37e7;  */

void FUN_1051d3758(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c0f5e80(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051d37e8; end: 1051d3867;  */

void FUN_1051d37e8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afde0;
  if (param_2 != 0) {
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcabb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcabb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c25f340(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051d3868; end: 1051d386b;  */

void FUN_1051d3868(void)

{
  return;
}



/* Entry: 1051d386c; end: 1051d389b; -[SCContextSaveClientGeneratedSnapActionPerformer .cxx_destruct] */

void FUN_1051d386c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051d389c; end: 1051d3973; -[SCContextScanActionPerformer initWithScanScopeLauncher:scanScopeServices:] */

undefined1 *
FUN_1051d389c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6d10;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051d3974; end: 1051d3bdb; -[SCContextScanActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051d3974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_6;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0870;
  _objc_alloc_init();
  func_0x00010c1d96a0();
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010c14c940(puVar2);
  puVar3 = PTR_PTR_1126b3140;
  func_0x00010bf30ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be16ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar5 = param_1;
    func_0x00010be9d9a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      _objc_initWeak(auStack_68,param_1);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      uVar1 = param_8;
      _objc_retain(param_8);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar5);
      _objc_release(uVar1);
      _objc_release(param_8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1051d3bdc; end: 1051d3c3f;  */

void FUN_1051d3bdc(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdeabc0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1051d3c40; end: 1051d3cd3; -[SCContextScanActionPerformer _selectImageFromOperaViewController:] */

void FUN_1051d3c40(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c22b5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c22b600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = uVar1;
  if (uVar2 < 2) {
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dfd40(uVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051d3cd4; end: 1051d3e2b; -[SCContextScanActionPerformer _createAndLaunchScanScopeWithImage:uiContainer:captureOrientationMetadata:completion:] */

void FUN_1051d3cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1051d3e2c;
  puStack_78 = &UNK_11084cbf0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_6);
  uStack_58 = param_6;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d3e2c; end: 1051d4183;  */

void FUN_1051d3e2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076220();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84460();
      _objc_release(uVar3);
    }
    puVar4 = PTR_PTR_1126b5f70;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b3100;
    puVar10 = PTR_PTR_1126ae6b8;
    puVar6 = PTR_PTR_1126b30f8;
    func_0x00010bfe94a0(PTR_PTR_1126b30f8,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9500(puVar9,param_2,puVar6,puVar7,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar10,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c29d360(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf4eb00(uVar2);
    lVar11 = lVar1;
    func_0x00010be854c0(lVar1,param_2,uVar3,uVar2);
    puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puStack_78 = PTR_PTR_1133162f8;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar13,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c400(puVar4,param_2,puVar5,puVar10,lVar11,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar14 = *(undefined8 *)(lVar1 + 0x10);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    puVar10 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b5f78;
    func_0x00010bf4e080(PTR_PTR_1126b5f78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c29d360(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf4eb00(uVar2);
    lVar11 = lVar1;
    func_0x00010be9acc0(lVar1,param_2,uVar3,uVar2);
    func_0x00010bf23f80(uVar14,param_2,uVar15,puVar10,puVar13,lVar11,0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar10);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bcc0();
    _objc_release(uVar3);
    func_0x00010be70de0(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar14);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = 0;
  func_0x0001008cd514(0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be87e80(lVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051d4184; end: 1051d41f7; -[SCContextScanActionPerformer _findOperaViewControllerInHierarchy] */

void FUN_1051d4184(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001008cd514(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be87e80(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051d41f8; end: 1051d43c7; -[SCContextScanActionPerformer _recursiveFindOperaViewControllerInViewController:] */

undefined1 * FUN_1051d41f8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f48);
  puVar1 = param_3;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = param_3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined1 *)0x0) {
      puVar2 = param_3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      puVar5 = puVar2;
      func_0x00010be87e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar6 != (undefined1 *)0x0) goto LAB_1051d4268;
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = param_3;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar2);
          }
          puVar5 = *(undefined1 **)(lStack_128 + (long)puVar8 * 8);
          puVar6 = param_1;
          func_0x00010be87e80();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined1 *)0x0) {
            _objc_release(puVar2);
            goto LAB_1051d4268;
          }
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar3 = puVar2;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    puVar6 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)puVar4;
  }
  else {
    _objc_retain();
    puVar6 = param_3;
  }
LAB_1051d4268:
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar1 = (undefined1 *)0x4;
  if (puVar5 != (undefined1 *)0x5) {
    puVar1 = (undefined1 *)0x0;
  }
  puVar2 = (undefined1 *)0x3;
  if (puVar5 != (undefined1 *)0x4) {
    puVar2 = puVar1;
  }
  return puVar2;
}



/* Entry: 1051d43c8; end: 1051d43e3; -[SCContextScanActionPerformer _sourceCategoryForSpecificStoriesSource:] */

undefined8 FUN_1051d43c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 4;
  if (param_3 != 5) {
    uVar1 = 0;
  }
  uVar2 = 3;
  if (param_3 != 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1051d43e4; end: 1051d4453; -[SCContextScanActionPerformer _sourceCategoryForViewLocation:specificSource:] */

undefined8 FUN_1051d43e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_3 - 0x37;
  if (uVar1 < 0x2f) {
    if ((1L << (uVar1 & 0x3f) & 0x4d0da07c0000U) != 0) {
      return 1;
    }
    if (uVar1 == 0) {
      return 5;
    }
    if (uVar1 == 2) {
      return 6;
    }
  }
  if (param_3 == 0x17) {
    return 7;
  }
  if (param_3 == 0x15) {
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebe5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sourceCategoryForSpecificStorie_11258d310,param_4);
  return param_1;
}



/* Entry: 1051d4454; end: 1051d4483; -[SCContextScanActionPerformer _scanSourceForViewLocation:specificSource:] */

undefined8 FUN_1051d4454(ulong param_1)

{
  undefined8 uVar1;
  
  func_0x00010bebe5c0();
  if (param_1 < 8) {
    uVar1 = *(undefined8 *)(&UNK_10dd90780 + param_1 * 8);
  }
  else {
    uVar1 = 0xb;
  }
  return uVar1;
}



/* Entry: 1051d4484; end: 1051d44b3; -[SCContextScanActionPerformer _querySourceForViewLocation:specificSource:] */

undefined8 FUN_1051d4484(ulong param_1)

{
  undefined8 uVar1;
  
  func_0x00010bebe5c0();
  if (param_1 < 8) {
    uVar1 = *(undefined8 *)(&UNK_10dd907c0 + param_1 * 8);
  }
  else {
    uVar1 = 0xd;
  }
  return uVar1;
}



/* Entry: 1051d44b4; end: 1051d44f7; -[SCContextScanActionPerformer _runActionPerformerCompletion] */

void FUN_1051d44b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051d44f8; end: 1051d4663; -[SCContextScanActionPerformer scanWantsDismiss:] */

void FUN_1051d44f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1051d4664;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010bf84460(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_98);
  }
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d4664; end: 1051d46bb;  */

void FUN_1051d4664(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051d46bc; end: 1051d46bf; -[SCContextScanActionPerformer scanWantsQueryWithSource:requestedAnalyzerServiceIds:] */

void FUN_1051d46bc(void)

{
  return;
}



/* Entry: 1051d46c0; end: 1051d4747; -[SCContextScanActionPerformer _pausePlayback] */

void FUN_1051d46c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ea4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c0f5e80(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ea8e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar1,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051d4748; end: 1051d47cf; -[SCContextScanActionPerformer _resumePlayback] */

void FUN_1051d4748(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ea4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c13d5c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ea8e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar1,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051d47d0; end: 1051d4823; -[SCContextScanActionPerformer .cxx_destruct] */

void FUN_1051d47d0(long param_1)

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



/* Entry: 1051d4824; end: 1051d48c7; -[SCContextLaunchSearchActionPerformer initWithSearchScopeExposer:searchScopeServices:] */

undefined1 *
FUN_1051d4824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6d18;
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



/* Entry: 1051d48c8; end: 1051d4b2f; -[SCContextLaunchSearchActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051d48c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar5 = param_8;
  _objc_retainBlock();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  _objc_release(uVar6);
  lVar1 = param_3;
  func_0x00010c08bce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1543e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c08bce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1543e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b5f80;
    _objc_alloc(PTR_PTR_1126b5f80);
    func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c038f40(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf23ea0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_68,param_1);
    puVar7 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bffae00(puVar7);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1051d4b30; end: 1051d4b5b;  */

void FUN_1051d4b30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051d4b5c; end: 1051d4bcb; -[SCContextLaunchSearchActionPerformer _tearDown] */

void FUN_1051d4b5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051d4bcc; end: 1051d4c3b; -[SCContextLaunchSearchActionPerformer searchWorkflowDidEnd] */

void FUN_1051d4bcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051d4c3c; end: 1051d4c77; -[SCContextLaunchSearchActionPerformer .cxx_destruct] */

void FUN_1051d4c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051d4c78; end: 1051d4ddf; -[SCContextShareActionPerformer initWithSendToMentionsConfiguration:conversationDataFetcher:textSender:notificationManager:circumstanceEngine:userId:] */

undefined1 *
FUN_1051d4c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e6d20;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
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



/* Entry: 1051d4de0; end: 1051d572f; -[SCContextShareActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051d4de0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107dd9cf0(uVar1,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
    goto LAB_1051d5270;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c068440(param_7);
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5cb8;
  func_0x00010c068440(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beef1e0(param_7);
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5cb8;
  func_0x00010bfc1d00(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar1 = param_6;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar3 != 0) {
    uVar1 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2cf0;
    func_0x00010bf4f080(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = uVar7;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b5c10;
  _objc_opt_class(PTR_PTR_1126b5c10);
  uVar8 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar5);
  uVar1 = uVar3;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0ca760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf529e0();
  if (uVar8 == 0) {
LAB_1051d5174:
    _objc_release(uVar3);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010bfa2380();
    _objc_release(uVar9);
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      uVar8 = uVar1;
      func_0x00010c0ca760(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x000100504554();
      _objc_release(uVar8);
      puVar5 = PTR_PTR_1126b5bf0;
      func_0x00010c0ca740(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar4);
      _objc_release(puVar5);
      goto LAB_1051d5174;
    }
  }
  uVar3 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c08bda0();
  if (((uVar10 - 3 < 6) || (uVar10 == 0x22)) || (uVar10 == 0x20)) {
    _objc_release(uVar8);
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010c0ea4c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b5b28;
    func_0x00010c15b3c0(PTR_PTR_1126b5b28);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c0ea8e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar3);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(uVar3);
  }
  else {
    _objc_release(uVar8);
    _objc_release(uVar3);
    uVar3 = uVar7;
    func_0x000108437064();
    if ((uVar3 & 1) == 0) {
      puVar5 = PTR_PTR_1126b5bf0;
      func_0x00010c22ab20(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar4);
      _objc_release(puVar5);
      uVar2 = param_3;
      func_0x00010c0ccaa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010beef1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b5cb8;
      func_0x00010beedca0(PTR_PTR_1126b5cb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar4);
      _objc_release(puVar5);
      _objc_release(uVar9);
      _objc_release(uVar2);
      uVar3 = param_6;
      func_0x00010c0ea4c0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010c0ea8e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar3);
      _objc_release(puVar6);
      _objc_release(uVar8);
      _objc_release(puVar5);
      _objc_release(uVar3);
      if (param_8 != 0) {
        (**(code **)(param_8 + 0x10))(param_8,0);
      }
    }
    else {
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_1051d57b0;
      uStack_88 = 0x1051d57c0;
      uStack_80 = 0;
      uVar3 = param_6;
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bfe5ec0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_1051d57c8;
      puStack_b8 = &UNK_110842b58;
      puStack_b0 = &uStack_a8;
      func_0x00010c0c12a0();
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar3);
      puStack_f8 = &uStack_100;
      uStack_100 = 0;
      uStack_f0 = 0x3032000000;
      pcStack_e8 = FUN_1051d57b0;
      uStack_e0 = 0x1051d57c0;
      uStack_d8 = 0;
      puStack_128 = &uStack_130;
      uStack_130 = 0;
      uStack_120 = 0x3032000000;
      pcStack_118 = FUN_1051d57b0;
      uStack_110 = 0x1051d57c0;
      uStack_108 = 0;
      uVar3 = uVar7;
      func_0x00010bfa29a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bed40();
      _objc_release(uVar3);
      uVar3 = param_6;
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar3);
      if (((puStack_a0[5] == 0) || (puStack_f8[5] == 0)) || ((puStack_128[5] == 0 || (uVar10 == 0)))
         ) {
        if (param_8 != 0) {
          (**(code **)(param_8 + 0x10))(param_8,0);
        }
      }
      else {
        uVar3 = param_6;
        func_0x00010c242420();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c131ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0748c0();
        uVar11 = uVar7;
        func_0x00010c15ffa0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9f220(param_1);
        _objc_release(uVar11);
        _objc_release(uVar8);
        _objc_release(uVar3);
      }
      _objc_release(uVar10);
      __Block_object_dispose(&uStack_130,8);
      _objc_release(uStack_108);
      __Block_object_dispose(&uStack_100,8);
      _objc_release(uStack_d8);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
    }
  }
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(puVar4);
LAB_1051d5270:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1051d5730; end: 1051d57af;  */

void FUN_1051d5730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe2ee0(param_2);
  uVar2 = param_2;
  func_0x00010c0b5940(param_2);
  _objc_release(param_2);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051d57b0; end: 1051d57c7;  */

void FUN_1051d57b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051d57c8; end: 1051d57ff;  */

void FUN_1051d57c8(long param_1,undefined8 param_2)

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



/* Entry: 1051d5800; end: 1051d5873;  */

void FUN_1051d5800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1051d5874; end: 1051d5a67; -[SCContextShareActionPerformer _sendFriendshipFlashbackWithConversationId:messageId:analyticsMessageId:recipientId:isGroupReply:contextSessionId:completion:] */

void FUN_1051d5874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_4);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_6);
  uStack_70 = param_7;
  _objc_retain(param_9);
  func_0x00010bfa8960(uVar1);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d5a68; end: 1051d5cbb;  */

void FUN_1051d5a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x000108605f20(param_2,*(undefined8 *)(lVar1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b5f88;
    _objc_alloc();
    func_0x00010c03c9c0();
    puVar4 = puVar3;
    func_0x000108606d64();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa660(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ac2e0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c2aa640(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar7 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    if (lVar7 != 0) {
      puVar6 = PTR_PTR_1126b5f90;
      _objc_alloc(PTR_PTR_1126b5f90);
      func_0x00010c004680();
      func_0x00010c2ab020(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9f240(param_1);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051d5cbc; end: 1051d5ffb; -[SCContextShareActionPerformer _sendFriendshipFlashbackWithMessage:messageId:conversationId:recipientId:isGroupReply:analytics:completion:] */

void FUN_1051d5cbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126b5f98;
  _objc_retain(param_9);
  _objc_retain(param_4);
  func_0x00010bf37840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b0420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2b66c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = puVar4;
  func_0x00010c2b81a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_7 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010bf1f440();
    uVar11 = 0;
    uVar12 = param_5;
    if (iVar1 == 0) goto LAB_1051d5df4;
  }
  _objc_retain(param_6);
  uVar12 = 0;
  uVar11 = param_6;
LAB_1051d5df4:
  _objc_retain(uVar12);
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c064d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(lVar6);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar7 != 0) {
    lVar6 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a4a0();
    func_0x00010bf651a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c26f1e0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    _objc_release(puVar4);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b620(uVar8);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar7);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1051d5ffc; end: 1051d605b; -[SCContextShareActionPerformer .cxx_destruct] */

void FUN_1051d5ffc(long param_1)

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



/* Entry: 1051d605c; end: 1051d62db; -[SCContextShareYoursActionPerformer initWithMemoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:snapDocEditorServices:previewScopeExposer:previewScopeBuilderServices:circumstanceEngine:shareYoursClient:chatCameraScopeExposer:chatCameraScopeServices:memoriesMergedDataSource:creativeToolsABProvider:] */

undefined8 *
FUN_1051d605c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  puStack_68 = PTR_PTR_1126e6d28;
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
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 1051d62dc; end: 1051d6633; -[SCContextShareYoursActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051d62dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dcac18;
  }
  else {
    uVar10 = param_3;
    func_0x00010beeed20();
    if ((int)uVar10 == 0x6b) {
      uVar10 = param_3;
      func_0x00010c22b460();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar10;
      func_0x00010c22b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if ((int)puVar2 == 0) {
        uVar4 = *(ulong *)(param_1 + 0xb0);
        func_0x00010c22b500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d480();
        uVar5 = uVar4;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf1f3c0();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110dcac78;
          func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcac78,param_8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar10 = uVar1;
          func_0x00010bf51e00();
          uVar8 = *(undefined8 *)(param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x50) = uVar10;
          _objc_release(uVar8);
          uVar10 = param_6;
          func_0x00010c242420();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar10;
          func_0x00010c241400();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c08bda0();
          func_0x000108436010();
          *(undefined8 *)(param_1 + 0x58) = uVar7;
          _objc_release(uVar8);
          _objc_release(uVar10);
          uVar10 = param_6;
          func_0x00010c0b3760();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar10;
          func_0x00010c15ffa0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010bf51e00();
          uVar9 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x60) = uVar7;
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar10);
          _objc_storeWeak(param_1 + 0x68,param_4);
          uVar10 = param_8;
          _objc_retainBlock();
          uVar8 = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 *)(param_1 + 0x78) = uVar10;
          _objc_release(uVar8);
          puVar2 = PTR_PTR_1126b2798;
          _objc_opt_new();
          uVar10 = *(undefined8 *)(param_1 + 0x80);
          *(undefined **)(param_1 + 0x80) = puVar2;
          _objc_release(uVar10);
          func_0x00010be7c6c0(param_1);
          _objc_initWeak(auStack_68,param_1);
          ppuVar3 = (undefined **)PTR_PTR_1126afd78;
          _objc_alloc(PTR_PTR_1126afd78);
          _objc_copyWeak(auStack_70,auStack_68);
          func_0x00010bffae00(ppuVar3);
          _objc_destroyWeak(auStack_70);
          _objc_destroyWeak(auStack_68);
        }
        _objc_release(uVar4);
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110dcac58;
        func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcac58,param_8);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar1);
      goto LAB_1051d65bc;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110dcac38;
  }
  func_0x0001051cb2fc(ppuVar3,param_8);
  _objc_retainAutoreleasedReturnValue();
LAB_1051d65bc:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1051d6634; end: 1051d6663;  */

void FUN_1051d6634(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be174c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051d6664; end: 1051d682f; -[SCContextShareYoursActionPerformer _presentMemoriesPicker] */

void FUN_1051d6664(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126aff70;
    _objc_alloc(PTR_PTR_1126aff70);
    puVar3 = puVar2;
    func_0x00010723cd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071800();
    func_0x00010c053560(puVar2,param_2,puVar3,0,0,0,1,1,0,0x101);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f60(puVar3,param_2,lVar1,1,5);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar4 = PTR_PTR_1126aff78;
    func_0x00010bf68ba0(PTR_PTR_1126aff78,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24140(uVar5,param_2,puVar3,puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1051d6830; end: 1051d6917; -[SCContextShareYoursActionPerformer memoriesPickerV2DidSelectItemsWithMediaSegments:] */

void FUN_1051d6830(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010be4c620(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051d6918; end: 1051d69ab;  */

void FUN_1051d6918(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  if (lVar1 == 0) {
    func_0x00010be174c0(lVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5c40(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051d69ac; end: 1051d69b3; -[SCContextShareYoursActionPerformer memoriesPickerV2DidDismiss] */

void FUN_1051d69ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be174d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishWithCancelled__1125636d0,1);
  return;
}



/* Entry: 1051d69b4; end: 1051d69bf; -[SCContextShareYoursActionPerformer setPickerViewController:] */

void FUN_1051d69b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 1051d69c0; end: 1051d6a8b; -[SCContextShareYoursActionPerformer onCameraIconClicked] */

void FUN_1051d69c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c071800();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x80);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010be4c620(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 1051d6a8c; end: 1051d6af7;  */

void FUN_1051d6a8c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be174c0();
  }
  else {
    func_0x00010be7a700();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051d6af8; end: 1051d6d1b; -[SCContextShareYoursActionPerformer _presentCameraWithPromptText:] */

void FUN_1051d6af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x70;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x68;
      _objc_loadWeakRetained();
      if (lVar2 == 0) goto LAB_1051d6cf8;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126b13b0;
    func_0x00010c22b4c0(PTR_PTR_1126b13b0,param_2,*(undefined8 *)(param_1 + 0x50),param_3,
                        PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x0001091ef76c(uVar6);
    func_0x00010c03e5a0(puVar5,param_2,0,uVar6,0x1d,0,0);
    puVar7 = PTR_PTR_1126b5b50;
    _objc_alloc(PTR_PTR_1126b5b50);
    func_0x00010c01f080();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puVar8 = PTR_PTR_1126b1bb0;
    func_0x00010bf4efa0(PTR_PTR_1126b1bb0,param_2,puVar5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b5b40;
    func_0x00010c254180(PTR_PTR_1126b5b40);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b5b48;
    func_0x00010bf5cd40(PTR_PTR_1126b5b48,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23680(uVar6,param_2,lVar2,puVar8,param_1,2,0,puVar9,puVar10,param_1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
LAB_1051d6cf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051d6d1c; end: 1051d6d83; -[SCContextShareYoursActionPerformer dismissCameraScope:] */

void FUN_1051d6d1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_3) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051d6d84; end: 1051d6def; -[SCContextShareYoursActionPerformer captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1051d6d84(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf834c0(param_1);
  _objc_release(uVar1);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be174d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishWithCancelled__1125636d0,0);
    return;
  }
  return;
}



/* Entry: 1051d6df0; end: 1051d6df3; -[SCContextShareYoursActionPerformer didCancelFromPreview:] */

void FUN_1051d6df0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePreviewScopeIfExposed_112580d58);
  return;
}



/* Entry: 1051d6df4; end: 1051d6dfb; -[SCContextShareYoursActionPerformer didSendSnapsAndPostToStory:storyTypes:] */

void FUN_1051d6df4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be174d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishWithCancelled__1125636d0,0);
  return;
}



/* Entry: 1051d6dfc; end: 1051d6e03; -[SCContextShareYoursActionPerformer didSendChatMessage] */

void FUN_1051d6dfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be174d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishWithCancelled__1125636d0,0);
  return;
}



/* Entry: 1051d6e04; end: 1051d6e0b; -[SCContextShareYoursActionPerformer didPostStoryWithStoryTypes:] */

void FUN_1051d6e04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be174d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishWithCancelled__1125636d0,0);
  return;
}



/* Entry: 1051d6e0c; end: 1051d6f9b; -[SCContextShareYoursActionPerformer _listStoriesWithShareYoursId:completion:] */

void FUN_1051d6e0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_1051d6f6c;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_1051d6e78:
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar2 != 0) goto LAB_1051d6e78;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1051d6f9c;
    puStack_70 = &UNK_110848438;
    _objc_retain(param_4);
    ppuVar3 = &puStack_88;
    lStack_68 = param_4;
    _objc_retainBlock();
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
    lVar4 = lVar1;
    func_0x00010c09a2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar3);
    lVar5 = lVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = lVar5;
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(lStack_68);
  }
  _objc_release(lVar1);
LAB_1051d6f6c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d6f9c; end: 1051d7053;  */

void FUN_1051d6f9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1051d7054; end: 1051d7063;  */

void FUN_1051d7054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051d7060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1051d7064; end: 1051d711f;  */

void FUN_1051d7064(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1051d7120; end: 1051d71a3;  */

void FUN_1051d7120(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b5fa0;
    func_0x00010c0f40e0(PTR_PTR_1126b5fa0,param_2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = puVar2;
  func_0x00010c118940(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051d71a4; end: 1051d71b3;  */

void FUN_1051d71a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051d71b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1051d71b4; end: 1051d72c3; -[SCContextShareYoursActionPerformer _buildAndPresentResponseSnapWithMediaSegmentFuture:promptText:] */

void FUN_1051d71b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = param_4;
    _objc_retain(param_4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_3);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d72c4; end: 1051d757f;  */

void FUN_1051d72c4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x80);
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      if ((param_2 == 0) || (param_3 != 0)) {
        func_0x00010be174c0(param_1);
      }
      else {
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        uStack_80 = 0x3032000000;
        pcStack_78 = FUN_1051d7580;
        uStack_70 = 0x1051d7590;
        uStack_68 = 0;
        puStack_a8 = &uStack_b0;
        uStack_b0 = 0;
        uStack_a0 = 0x2020000000;
        uStack_98 = 0;
        puStack_c8 = &uStack_d0;
        uStack_d0 = 0;
        uStack_c0 = 0x2020000000;
        uStack_b8 = 0x3fe2000000000000;
        puStack_f8 = &uStack_100;
        uStack_100 = 0;
        uStack_f0 = 0x3032000000;
        pcStack_e8 = FUN_1051d7580;
        uStack_e0 = 0x1051d7590;
        uStack_d8 = 0;
        lVar3 = param_2;
        func_0x00010bfea600(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0be500();
        _objc_release(lVar3);
        uVar2 = 6;
        if (puStack_f8[5] != 0) {
          uVar2 = 0;
        }
        *(undefined8 *)(param_1 + 0x98) = uVar2;
        lVar3 = puStack_f8[5];
        if (lVar3 == 0) {
          if (puStack_88[5] == 0) {
            func_0x00010be174c0(param_1);
          }
          else {
            func_0x00010bdd60a0(puStack_c8[3],param_1);
          }
        }
        else {
          _objc_retain(lVar3);
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          *(long *)(param_1 + 0x90) = lVar3;
          _objc_release(uVar2);
          func_0x00010be94a80(param_1);
          func_0x00010be3c900(param_1);
        }
        __Block_object_dispose(&uStack_100,8);
        _objc_release(uStack_d8);
        __Block_object_dispose(&uStack_d0,8);
        __Block_object_dispose(&uStack_b0,8);
        __Block_object_dispose(&uStack_90,8);
        _objc_release(uStack_68);
      }
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1051d7580; end: 1051d7597;  */

void FUN_1051d7580(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051d7598; end: 1051d767f;  */

void FUN_1051d7598(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR_PTR_1126affc0;
  _objc_retain(param_4);
  dVar4 = 3.0;
  _CMTimeMakeWithSeconds(auStack_58,600);
  func_0x00010c27eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 1;
  func_0x00010c23d0a0(param_4);
  _objc_release(param_4);
  dVar5 = -dVar4;
  if (0.0 <= dVar4) {
    dVar5 = dVar4;
  }
  dVar4 = -param_2;
  if (0.0 <= param_2) {
    dVar4 = param_2;
  }
  dVar7 = (double)NEON_fminnm(dVar5,dVar4);
  dVar6 = 0.5625;
  if (0.0 < dVar7) {
    dVar6 = dVar5 / dVar4;
  }
  *(double *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = dVar6;
  return;
}



/* Entry: 1051d7680; end: 1051d7793;  */

void FUN_1051d7680(undefined8 param_1,double param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  puVar1 = PTR_PTR_1126affc0;
  _objc_retain(param_4);
  func_0x00010c299260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  lVar4 = param_4;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar2 != 0) {
    dVar5 = (double)func_0x00010c0d5d20(lVar2);
    func_0x00010c106f40(&dStack_60,lVar2);
    dVar6 = dStack_50 * param_2 + dStack_60 * dVar5;
    dVar7 = dStack_48 * param_2 + dStack_58 * dVar5;
    dVar6 = (double)((ulong)dVar6 ^ ((ulong)dVar6 ^ (ulong)-dVar6) & -(ulong)(dVar6 < 0.0));
    dVar7 = (double)((ulong)dVar7 ^ ((ulong)dVar7 ^ (ulong)-dVar7) & -(ulong)(dVar7 < 0.0));
    dVar8 = (double)NEON_fminnm(dVar6,dVar7);
    dVar5 = 0.5625;
    if (0.0 < dVar8) {
      dVar5 = dVar6 / dVar7;
    }
    *(double *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = dVar5;
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1051d7794; end: 1051d77cb;  */

void FUN_1051d7794(long param_1,undefined8 param_2)

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



/* Entry: 1051d77cc; end: 1051d7a1b; -[SCContextShareYoursActionPerformer _resolveGalleryConfigurationForMediaSegment:] */

void FUN_1051d77cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1051d7580;
  uStack_60 = 0x1051d7590;
  uStack_58 = 0;
  lVar6 = param_3;
  func_0x00010c0c5900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcda0();
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = puStack_78[5];
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bfa7560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(puVar1);
    if (lVar3 != 0) {
      lVar6 = lVar2;
      func_0x00010bfa7040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        puVar1 = PTR_PTR_1126b5fa8;
        _objc_alloc_init();
        func_0x00010c203860();
        func_0x00010c196760(puVar1);
        func_0x00010c2012e0(puVar1);
        uVar4 = *(undefined8 *)(param_1 + 0xa8);
        *(undefined **)(param_1 + 0xa8) = puVar1;
        _objc_release(uVar4);
        *(undefined8 *)(param_1 + 0x98) = 7;
        _objc_release(lVar6);
      }
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  _objc_retain(uVar5);
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1051d7a1c; end: 1051d7a53;  */

void FUN_1051d7a1c(long param_1,undefined8 param_2)

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



/* Entry: 1051d7a54; end: 1051d7c93; -[SCContextShareYoursActionPerformer _buildEditorWithBaseMediaInput:isImage:aspectRatio:promptText:] */

void FUN_1051d7a54(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  dVar5 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b25c0;
  _objc_opt_new(PTR_PTR_1126b25c0);
  uVar3 = uVar1;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c179060(uVar3);
  func_0x00010bfce280(uVar3);
  if (dVar5 == 0.0) {
    func_0x00010c1a44c0(param_1,uVar3);
  }
  func_0x00010c28a040(uVar3);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = uVar3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010c09e180();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_2);
  uVar1 = uVar3;
  func_0x00010bef7100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_5;
  _objc_retain(uVar3);
  _objc_retain(puVar2);
  uVar4 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1051d7c94; end: 1051d7d1f;  */

void FUN_1051d7c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b25e8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0fef80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051d7d20; end: 1051d7ea7;  */

void FUN_1051d7d20(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 0x80);
    func_0x00010c06e0e0();
    if ((uVar3 & 1) == 0) {
      if ((param_2 == 0) || (param_3 != 0)) {
        func_0x00010be174c0(lVar2);
      }
      else {
        puVar4 = PTR_PTR_1126b25d0;
        _objc_opt_new(PTR_PTR_1126b25d0);
        func_0x00010c1c4020();
        if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
          func_0x00010c0c4bc0(param_2);
        }
        puVar5 = puVar4;
        func_0x00010c118b40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0699e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar6);
        _objc_release(puVar5);
        func_0x00010befa9a0(*(undefined8 *)(param_1 + 0x20));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(param_2);
        func_0x00010c28b3e0(uVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010be3c900(lVar2);
        _objc_release(param_2);
        _objc_release(puVar4);
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1051d7ea8; end: 1051d7f0f;  */

void FUN_1051d7ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c4bc0(uVar1);
  uVar1 = param_2;
  func_0x00010c27c540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c192d40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051d7f10; end: 1051d7fef; -[SCContextShareYoursActionPerformer _insertStickerAndPresentWithEditor:promptText:] */

void FUN_1051d7f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b13b0;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c22b4c0(puVar2,param_2,uVar4,param_4,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b13b8;
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb980(0x3fe0000000000000,0x3fd0000000000000,0x3fe0000000000000,0x3fe0000000000000,
                      0x3ff0000000000000,0,puVar1,param_2,puVar2,param_3,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010be7d920(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051d7ff0; end: 1051d856b; -[SCContextShareYoursActionPerformer _presentPreviewWithEditor:] */

void FUN_1051d7ff0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010be8cee0(param_1);
      puVar2 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0ff580(param_3,param_2,puVar2,&PTR___NSConcreteGlobalBlock_11086f1c8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar2);
      if (uVar4 != 0) {
        uVar3 = param_3;
        func_0x00010c0ff640(param_3,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 != 0) {
          puVar2 = PTR_PTR_1126afee0;
          _objc_alloc();
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              "-[SCContextShareYoursActionPerformer _presentPreviewWithEditor:]");
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c004180(puVar2,param_2,puVar5,*(undefined8 *)(param_1 + 0x30));
          _objc_release(puVar5);
          func_0x00010c1c4ca0(puVar2,param_2,0);
          func_0x00010c2056c0(puVar2,param_2,*(undefined8 *)(param_1 + 0x98));
          func_0x00010c204fa0(puVar2,param_2,*(undefined8 *)(param_1 + 0x58));
          func_0x00010c19e9c0(puVar2,param_2,1);
          func_0x00010c205d00(puVar2,param_2,*(undefined8 *)(param_1 + 0xa8));
          puVar5 = puVar2;
          func_0x00010c2005e0(puVar2,param_2,1);
          func_0x0001008e4748();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bbc40();
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c242400(puVar2);
          func_0x00010c2b9b80(puVar5,param_2,puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf21f60(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17f520(puVar2,param_2,puVar6);
          _objc_release(puVar6);
          uVar7 = uVar3;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf7ee20();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c2a5040();
          uVar10 = uVar3;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bf7ee20();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010bfe0640();
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar8);
          _objc_release(uVar7);
          if (((int)uVar9 != 0) && ((int)uVar12 != 0)) {
            func_0x00010c1c5240((double)(uVar9 & 0xffffffff),(double)(uVar12 & 0xffffffff),puVar2);
            func_0x00010c1c40c0((double)(uVar9 & 0xffffffff) / (double)(uVar12 & 0xffffffff),puVar2)
            ;
          }
          uVar7 = uVar3;
          func_0x00010c0c3fe0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_3;
          func_0x00010c0c6240(param_3,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          _objc_release(uVar7);
          uVar7 = uVar9;
          func_0x00010c0c6c20();
          if ((int)uVar7 == 2) {
            func_0x00010c1c5440(puVar2,param_2,0);
            uVar7 = uVar3;
            func_0x00010c0c3fe0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0c7240(param_3,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c0b8600();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a1660(puVar2,param_2,uVar11);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar8);
          }
          else {
            func_0x00010c1c5440(puVar2,param_2,1);
            func_0x00010c16c080(puVar2,param_2,1);
            uVar7 = uVar3;
            func_0x00010c0c3fe0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0c6f80(param_3,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0xc2000000;
            pcStack_88 = FUN_1051d85c0;
            puStack_80 = &UNK_11086f208;
            _objc_retain(uVar3);
            uVar11 = uVar10;
            uStack_78 = uVar3;
            func_0x00010c0b8600(uVar10,param_2,&puStack_98);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e8f00(puVar2,param_2,uVar11);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar8);
            _objc_release(uVar7);
            uVar7 = uStack_78;
          }
          _objc_release(uVar7);
          func_0x00010bf42760(puVar2);
          puVar6 = PTR_PTR_1126aff58;
          _objc_alloc();
          lVar1 = param_1 + 0x68;
          _objc_loadWeakRetained();
          lVar13 = lVar1;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          if (lVar13 == 0) {
            lVar14 = param_1 + 0x68;
            _objc_loadWeakRetained(lVar14);
            func_0x00010c038f60(puVar6,param_2,lVar14,1,5);
            _objc_release(lVar14);
          }
          else {
            func_0x00010c038f60(puVar6,param_2,lVar13,1,5);
          }
          _objc_release(lVar13);
          _objc_release(lVar1);
          uVar15 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf22c20(uVar15,param_2,0,puVar2,param_3,0,param_1,0,puVar6,0,0,0,0,0,0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,uVar15);
          _objc_release(uVar15);
          _objc_release(puVar6);
          _objc_release(uVar9);
          _objc_release(puVar5);
          _objc_release(puVar2);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar4);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051d856c; end: 1051d85af;  */

bool FUN_1051d856c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 1051d85b0; end: 1051d85bf;  */

void FUN_1051d85b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sc_imageWithData__112630e30,param_2);
  return;
}



/* Entry: 1051d85c0; end: 1051d866b;  */

void FUN_1051d85c0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b5fb0;
  if (param_2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_alloc(puVar3);
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0c3fe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c4bc0();
    func_0x00010c0613a0((double)(uVar2 & 0xffffffff) / 1000.0,puVar3);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051d866c; end: 1051d8733; -[SCContextShareYoursActionPerformer _finishWithCancelled:] */

void FUN_1051d866c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  func_0x00010be8cee0(param_1);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x78);
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


