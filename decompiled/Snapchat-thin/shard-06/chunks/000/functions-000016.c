/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043b426c; end: 1043b42c3; -[_TtC28SCGenAIDreamsOnboardingScope28SCGenAIDreamsOnboardingScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b426c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074c20;
  _swift_beginAccess(param_1 + _DAT_113074c20,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b42c4; end: 1043b42d3; -[_TtC28SCGenAIDreamsOnboardingScope28SCGenAIDreamsOnboardingScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b42c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074c28);
}



/* Entry: 1043b42d4; end: 1043b433f; -[_TtC28SCGenAIDreamsOnboardingScope28SCGenAIDreamsOnboardingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043b42d4(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074c10));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074c18));
  param_1 = param_1 + _DAT_113074c20;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043b4340; end: 1043b43a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4340(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034061c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113074c38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043b43a8; end: 1043b43f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b43a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074c38) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b43f4; end: 1043b4553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ***
FUN_1043b43f4(undefined ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **UNRECOVERED_JUMPTABLE;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined ***apppuStack_90 [2];
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [24];
  
  UNRECOVERED_JUMPTABLE = &PTR_FUN_113074c40;
  _swift_getFunctionReplacement(&PTR_FUN_113074c40,FUN_1043b43f4);
  if (UNRECOVERED_JUMPTABLE != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001043b4464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return param_1;
  }
  func_0x0001003357b4();
  ppuVar3 = UNRECOVERED_JUMPTABLE;
  _objc_allocWithZone();
  lVar2 = _DAT_113074c20;
  _swift_unknownObjectWeakInit((long)ppuVar3 + _DAT_113074c20,0);
  *(undefined ****)((long)ppuVar3 + _DAT_113074c10) = param_1;
  *(undefined8 *)((long)ppuVar3 + _DAT_113074c18) = param_2;
  _swift_beginAccess((long)ppuVar3 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign((long)ppuVar3 + lVar2,param_3);
  *(undefined8 *)((long)ppuVar3 + _DAT_113074c28) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  ppuStack_78 = ppuVar3;
  ppuStack_70 = UNRECOVERED_JUMPTABLE;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  pppuVar4 = &ppuStack_78;
  _objc_msgSendSuper2(pppuVar4,puVar1);
  apppuStack_90[0] = pppuVar4;
  func_0x00010008a7c8(&uStack_80,apppuStack_90);
  func_0x000100083b20(apppuStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(apppuStack_90[0]);
  return pppuVar4;
}



/* Entry: 1043b4554; end: 1043b4557;  */

void FUN_1043b4554(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b4558; end: 1043b458b;  */

void FUN_1043b4558(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b458c; end: 1043b45af; -[_TtC28SCGenAIDreamsOnboardingScope36SCGenAIDreamsOnboardingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b458c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074c38));
  return;
}



/* Entry: 1043b45b0; end: 1043b477f;  */

long FUN_1043b45b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043b4780; end: 1043b479f; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope dreamsViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4780(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074ca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b47a0; end: 1043b47bf; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope modalUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b47a0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113074ca8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b47c0; end: 1043b47cb; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope composerNavigatorManagedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b47c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074cb0;
  _swift_beginAccess(param_1 + _DAT_113074cb0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b47cc; end: 1043b47d7; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope setComposerNavigatorManagedViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b47cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074cb0;
  _swift_beginAccess(param_1 + _DAT_113074cb0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b47d8; end: 1043b47e3; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope containerViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b47d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074cb8;
  _swift_beginAccess(param_1 + _DAT_113074cb8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b47e4; end: 1043b47ef; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope setContainerViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b47e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074cb8;
  _swift_beginAccess(param_1 + _DAT_113074cb8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b47f0; end: 1043b47ff; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope myDreamsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b47f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074cc0));
  return;
}



/* Entry: 1043b4800; end: 1043b480f; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope genAISnapsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074cc8));
  return;
}



/* Entry: 1043b4810; end: 1043b481f; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope dreamsSessionService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074cd0));
  return;
}



/* Entry: 1043b4820; end: 1043b483b; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope onUnpackHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4820(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074cd8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1022dc22c;
  puStack_48 = &UNK_1107648e0;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043b483c; end: 1043b484b; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope nextGenerationDreamsPackObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b483c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074ce0));
  return;
}



/* Entry: 1043b484c; end: 1043b485b; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope selectModeObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b484c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074ce8));
  return;
}



/* Entry: 1043b485c; end: 1043b4877; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope onSelectModeChangeHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b485c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074cf0);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f3aa0;
  puStack_48 = &UNK_1107648b8;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043b4878; end: 1043b4893; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope onSelectedDreamsChangeHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4878(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074cf8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1022db670;
  puStack_48 = &UNK_110764890;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043b4894; end: 1043b48a3; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope nextGenerationGallerySnapsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074d00));
  return;
}



/* Entry: 1043b48a4; end: 1043b48b3; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope notificationTapObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b48a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074d08));
  return;
}



/* Entry: 1043b48b4; end: 1043b48bf; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope galleryDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b48b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074d10;
  _swift_beginAccess(param_1 + _DAT_113074d10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b48c0; end: 1043b4903;  */

void FUN_1043b48c0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b4904; end: 1043b490f; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope setGalleryDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074d10;
  _swift_beginAccess(param_1 + _DAT_113074d10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b4910; end: 1043b4963;  */

void FUN_1043b4910(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b4964; end: 1043b4973; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope isPlusEarlyAccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043b4964(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113074d18);
}



/* Entry: 1043b4974; end: 1043b498f; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope onMemoriesCloudSyncRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4974(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074d20);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110764868;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043b4990; end: 1043b4a0b;  */

void FUN_1043b4990(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + *param_3);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = param_4;
  uStack_48 = param_5;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043b4a0c; end: 1043b4a1b; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope aiSnapsTapNotificationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074d28));
  return;
}



/* Entry: 1043b4a1c; end: 1043b4a47; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope init] */

void FUN_1043b4a1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGenAIDreamsScope.SCGenAIDreamsScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b4a48);
  (*pcVar1)();
}



/* Entry: 1043b4a48; end: 1043b4bcb; -[_TtC18SCGenAIDreamsScope18SCGenAIDreamsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4a48(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074ca0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113074ca8));
  func_0x000100db7be8(param_1 + _DAT_113074cb0);
  func_0x000100db7be8(param_1 + _DAT_113074cb8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074cc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074cc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074cd0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113074cd8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074ce0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074ce8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113074cf0 + 8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113074cf8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074d00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074d08));
  func_0x000100db7be8(param_1 + _DAT_113074d10);
  _swift_release(*(undefined8 *)(param_1 + _DAT_113074d20 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074d28));
  return;
}



/* Entry: 1043b4bcc; end: 1043b4c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4bcc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1043b53b8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113074d38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043b4c38; end: 1043b4c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4c38(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1043b53b8();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074d38) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043b4c40; end: 1043b4c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b4c40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074d38) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b4c8c; end: 1043b4fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043b4c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *aplStack_d8 [2];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar6 = param_1;
  FUN_1043b5314();
  lVar7 = lVar6;
  _objc_allocWithZone();
  lVar3 = _DAT_113074cb0;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_113074cb0,0);
  lVar4 = _DAT_113074cb8;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_113074cb8,0);
  lVar5 = _DAT_113074d10;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_113074d10,0);
  *(long *)(lVar7 + _DAT_113074ca0) = param_1;
  *(undefined8 *)(lVar7 + _DAT_113074ca8) = param_2;
  _swift_beginAccess(lVar7 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar3,param_3);
  _swift_beginAccess(lVar7 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar4,param_4);
  *(undefined8 *)(lVar7 + _DAT_113074cc0) = param_5;
  *(undefined8 *)(lVar7 + _DAT_113074cc8) = param_6;
  *(undefined8 *)(lVar7 + _DAT_113074cd0) = param_7;
  puVar1 = (undefined8 *)(lVar7 + _DAT_113074cd8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(lVar7 + _DAT_113074ce0) = param_10;
  *(undefined8 *)(lVar7 + _DAT_113074ce8) = param_12;
  puVar1 = (undefined8 *)(lVar7 + _DAT_113074cf0);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(lVar7 + _DAT_113074cf8);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(lVar7 + _DAT_113074d00) = param_11;
  *(undefined8 *)(lVar7 + _DAT_113074d08) = param_13;
  _swift_beginAccess(lVar7 + lVar5,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar5,param_20);
  *(undefined1 *)(lVar7 + _DAT_113074d18) = param_18;
  puVar1 = (undefined8 *)(lVar7 + _DAT_113074d20);
  *puVar1 = param_21;
  puVar1[1] = param_22;
  *(undefined8 *)(lVar7 + _DAT_113074d28) = param_23;
  puVar2 = PTR_s_init_1125d9248;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _swift_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _swift_retain(param_15);
  _swift_retain(param_17);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _swift_retain(param_22);
  _objc_retain(param_23);
  plVar8 = &lStack_c0;
  _objc_msgSendSuper2(plVar8,puVar2);
  aplStack_d8[0] = plVar8;
  func_0x00010008a7c8(&uStack_c8,aplStack_d8);
  func_0x000100083b20(aplStack_d8);
  _swift_release(uStack_c8);
  _swift_unknownObjectRelease(aplStack_d8[0]);
  return plVar8;
}



/* Entry: 1043b4fc0; end: 1043b52c7; -[_TtC18SCGenAIDreamsScope26SCGenAIDreamsScopeServices buildWithDreamsViewContainer:modalUIContainer:composerNavigatorManagedViewController:containerViewController:myDreamsObservable:genAISnapsObservable:dreamsSessionService:onUnpackHandler:nextGenerationDreamsPackObservable:nextGenerationGallerySnapsObservable:selectModeObservable:notificationTapObservable:onSelectModeChangeHandler:onSelectedDreamsChangeHandler:isPlusEarlyAccess:galleryDataSource:onMemoriesCloudSyncRequest:aiSnapsTapNotificationObservable:] */

void FUN_1043b4fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  __Block_copy();
  __Block_copy();
  __Block_copy();
  __Block_copy();
  puVar1 = &UNK_1107647d8;
  _swift_allocObject(&UNK_1107647d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  puVar2 = &UNK_110764800;
  _swift_allocObject(&UNK_110764800,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_15;
  puVar3 = &UNK_110764828;
  _swift_allocObject(&UNK_110764828,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_16;
  puVar4 = &UNK_110764850;
  _swift_allocObject(&UNK_110764850,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_20;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _swift_unknownObjectRetain(param_19);
  _objc_retain();
  _objc_retain(param_1);
  uVar5 = param_3;
  FUN_1043b4c8c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,FUN_1043b53d8,puVar1,
                param_11,param_12,param_13,param_14,0x1043b53e8,puVar2,0x1043b53fc,puVar3,param_17);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_11);
  _objc_release(param_12);
  _objc_release(param_13);
  _objc_release(param_14);
  _swift_unknownObjectRelease(param_19);
  _objc_release(param_21);
  _objc_release(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1043b52c8; end: 1043b5313;  */

void FUN_1043b52c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1043b5410(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043b5314; end: 1043b5333;  */

void FUN_1043b5314(void)

{
  _objc_opt_self(&PTR_PTR_1129aa570);
  return;
}



/* Entry: 1043b5334; end: 1043b535f; -[_TtC18SCGenAIDreamsScope26SCGenAIDreamsScopeServices init] */

void FUN_1043b5334(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGenAIDreamsScope.SCGenAIDreamsScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b5360);
  (*pcVar1)();
}



/* Entry: 1043b5360; end: 1043b5363;  */

void FUN_1043b5360(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b5364; end: 1043b5397;  */

void FUN_1043b5364(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b5398; end: 1043b53b7; -[_TtC18SCGenAIDreamsScope26SCGenAIDreamsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074d38));
  return;
}



/* Entry: 1043b53b8; end: 1043b53d7;  */

void FUN_1043b53b8(void)

{
  _objc_opt_self(&PTR_PTR_1129aa6b8);
  return;
}



/* Entry: 1043b53d8; end: 1043b540f;  */

void FUN_1043b53d8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001043b53e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1043b5410; end: 1043b5453;  */

void FUN_1043b5410(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7c0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c3bf8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000112e7c0b8 = puVar1;
  return;
}



/* Entry: 1043b5454; end: 1043b548b;  */

void FUN_1043b5454(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1043b548c; end: 1043b56bb;  */

long FUN_1043b548c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043b56bc; end: 1043b56c7; -[SCGenAINotification snapIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b56bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113074d90);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b56c8; end: 1043b56d3; -[SCGenAINotification generationIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b56c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113074d98);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b56d4; end: 1043b5723;  */

void FUN_1043b56d4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043b5724; end: 1043b577f; -[SCGenAINotification notificationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5724(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074da0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074da0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b5780; end: 1043b5783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074d90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113074d98) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074da0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b5784; end: 1043b58d3; -[SCGenAINotification initWithSnapIds:generationIds:notificationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5784(long param_1,undefined *param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    param_2 = PTR___sSSN_11034da80;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  if (param_4 != 0) {
    param_2 = PTR___sSSN_11034da80;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(long *)(param_1 + _DAT_113074d90) = param_3;
  *(long *)(param_1 + _DAT_113074d98) = param_4;
  plVar1 = (long *)(param_1 + _DAT_113074da0);
  *plVar1 = param_5;
  plVar1[1] = (long)param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b58d4; end: 1043b58d7; -[SCGenAINotification copyWithZone:] */

void FUN_1043b58d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b58d8; end: 1043b58f3; -[SCGenAINotification description] */

void FUN_1043b58d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b58f4; end: 1043b596f; -[SCGenAINotification init] */

void FUN_1043b58f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCGenAIDreamsScope/SCGenAINotificationWrapper.swift",0x33,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b593c);
  (*pcVar1)();
}



/* Entry: 1043b5970; end: 1043b59bb; -[SCGenAINotification .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5970(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074d90));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074d98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113074da0 + 8))
  ;
  return;
}



/* Entry: 1043b59bc; end: 1043b59db;  */

void FUN_1043b59bc(void)

{
  _objc_opt_self(&PTR_PTR_1129aa778);
  return;
}



/* Entry: 1043b59dc; end: 1043b59df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b59dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074d90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113074d98) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074da0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b59e0; end: 1043b59ef; -[SCGenAIAnalyticsData is2Person] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043b59e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113074dd0);
}



/* Entry: 1043b59f0; end: 1043b5a4b; -[SCGenAIAnalyticsData lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b59f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074dd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074dd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b5a4c; end: 1043b5a5f; -[SCGenAIAnalyticsData entrySource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b5a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074de0);
}



/* Entry: 1043b5a60; end: 1043b5b7f; -[SCGenAIAnalyticsData initWithIs2Person:lensId:entrySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5a60(long param_1,long param_2,undefined1 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_1 + _DAT_113074dd0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113074dd8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113074de0) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b5b80; end: 1043b5b83; -[SCGenAIAnalyticsData copyWithZone:] */

void FUN_1043b5b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b5b84; end: 1043b5b9f; -[SCGenAIAnalyticsData description] */

void FUN_1043b5b84(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b5ba0; end: 1043b5c1b; -[SCGenAIAnalyticsData init] */

void FUN_1043b5ba0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCGenAIDreamsScope/SCGenAIAnalyticsDataWrapper.swift",0x34,2,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b5be8);
  (*pcVar1)();
}



/* Entry: 1043b5c1c; end: 1043b5c2f; -[SCGenAIAnalyticsData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113074dd8 + 8))
  ;
  return;
}



/* Entry: 1043b5c30; end: 1043b5c4f;  */

void FUN_1043b5c30(void)

{
  _objc_opt_self(&PTR_PTR_1129aa850);
  return;
}



/* Entry: 1043b5c50; end: 1043b5c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5c50(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113074dd0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074dd8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113074de0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b5c54; end: 1043b5c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5c54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074e18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b5ca0; end: 1043b5d8b; -[_TtC20SCMemoriesScopeProxy23SCMemoriesScopeServices buildWithUiContainer:viewLifecycleObservable:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aa290;
  _objc_allocWithZone();
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain();
  func_0x00010c058ac0(puVar1,param_2,param_3,param_4,param_5);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_unknownObjectRelease(apuStack_58[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1043b5d8c; end: 1043b5dbf;  */

void FUN_1043b5d8c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043b5dc0; end: 1043b5e0b; -[_TtC20SCMemoriesScopeProxy23SCMemoriesScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5dc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113074e18));
  return;
}



/* Entry: 1043b5e0c; end: 1043b5e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5e0c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074e60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b5e70; end: 1043b5ee7; +[SCMemoriesDeeplinkDestinationInfo toSnapWithSnapId:isFeaturedStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5e70(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar2 + _DAT_113074e60);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = param_4;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b5ee8; end: 1043b5f5f; +[SCMemoriesDeeplinkDestinationInfo toFeaturedStoryWithCollectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar2 + _DAT_113074e60);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0x40;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b5f60; end: 1043b5fb7; +[SCMemoriesDeeplinkDestinationInfo toFaceTagging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5f60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar2 + _DAT_113074e60);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0x80;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b5fb8; end: 1043b623b; -[SCMemoriesDeeplinkDestinationInfo matchToSnap:toFeaturedStory:toFaceTagging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b5fb8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113074e60);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  bVar3 = *(byte *)(puVar1 + 2);
  bVar4 = bVar3 >> 6;
  if (bVar4 == 0) {
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar2);
    (**(code **)(param_3 + 0x10))(param_3,uVar5,bVar3 & 1);
  }
  else {
    if (bVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001043b6088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_5 + 0x10))(param_5);
      return;
    }
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar2);
    (**(code **)(param_4 + 0x10))(param_4,uVar5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1043b623c; end: 1043b62bb; -[SCMemoriesDeeplinkDestinationInfo isEqual:] */

uint FUN_1043b623c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001043b608c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043b62bc; end: 1043b62ef; -[SCMemoriesDeeplinkDestinationInfo hash] */

undefined8 FUN_1043b62bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043b62f0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043b62f0; end: 1043b63bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b62f0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  long unaff_x20;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherVABycfC(&uStack_c8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074e60);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  bVar4 = *(byte *)(puVar1 + 2);
  bVar5 = bVar4 >> 6;
  if (bVar5 == 0) {
    __ss6HasherV8_combineyySuF(0);
    __sSS4hash4intoys6HasherVz_tF(&uStack_c8,uVar2,uVar3);
    __ss6HasherV8_combineyys5UInt8VF(bVar4 & 1);
  }
  else if (bVar5 == 1) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_c8,uVar2,uVar3);
  }
  else {
    __ss6HasherV8_combineyySuF(2);
  }
  uStack_58 = uStack_a0;
  uStack_60 = uStack_a8;
  uStack_48 = uStack_90;
  uStack_50 = uStack_98;
  uStack_40 = uStack_88;
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  uStack_68 = uStack_b0;
  uStack_70 = uStack_b8;
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043b63bc; end: 1043b6593; -[SCMemoriesDeeplinkDestinationInfo description] */

void FUN_1043b63bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001043b6414();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b6594; end: 1043b65f3; -[SCMemoriesDeeplinkDestinationInfo init] */

void FUN_1043b6594(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemoriesGalleryNavigationAPI.MemoriesDeeplinkDestinationInfo",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b65c0);
  (*pcVar1)();
}



/* Entry: 1043b65f4; end: 1043b660b; -[SCMemoriesDeeplinkDestinationInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b65f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113074e60);
  uVar2 = puVar1[1];
  if (-1 < *(char *)(puVar1 + 2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return uVar2;
  }
  return *puVar1;
}



/* Entry: 1043b660c; end: 1043b66e7;  */

ulong FUN_1043b660c(ulong param_1,long param_2,uint param_3,ulong param_4,long param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    if (((param_6 & 0xff) < 0x40) &&
       (((param_1 == param_4 && (param_2 == param_5)) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (param_1,param_2,param_4,param_5,0), (param_1 & 1) != 0)))) {
      return (ulong)((param_6 ^ param_3 ^ 1) & 1);
    }
  }
  else if (uVar1 == 1) {
    if ((param_6 & 0xc0) == 0x40) {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  else if ((((char)param_6 < -0x40) && (param_5 == 0 && param_4 == 0)) && ((param_6 & 0xff) == 0x80)
          ) {
    return 1;
  }
  return 0;
}



/* Entry: 1043b66e8; end: 1043b6707;  */

void FUN_1043b66e8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 >> 7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1043b6708; end: 1043b6727;  */

void FUN_1043b6708(void)

{
  _objc_opt_self(&PTR_PTR_1129aa9e8);
  return;
}



/* Entry: 1043b6728; end: 1043b6737;  */

undefined8 FUN_1043b6728(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (-1 < *(char *)(param_1 + 2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 1043b6738; end: 1043b67d3;  */

undefined8 * FUN_1043b6738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1043b66e8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1043b67d4; end: 1043b6817;  */

undefined8 * FUN_1043b67d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001043b66f8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1043b6818; end: 1043b6933;  */

int FUN_1043b6818(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 4) >> 6) | (*(byte *)(param_1 + 4) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1043b6934; end: 1043b693f; -[_TtC17SCViewfinderScope17SCViewfinderScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b6934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074eb0;
  _swift_beginAccess(param_1 + _DAT_113074eb0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b6940; end: 1043b694b; -[_TtC17SCViewfinderScope17SCViewfinderScope gestureRecognizerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b6940(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074eb8;
  func_0x000107c61428(param_1 + _DAT_113074eb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b694c; end: 1043b6957; -[_TtC17SCViewfinderScope17SCViewfinderScope setGestureRecognizerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b694c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113074eb8;
  _swift_beginAccess(param_1 + _DAT_113074eb8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043b6958; end: 1043b69ab;  */

void FUN_1043b6958(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


