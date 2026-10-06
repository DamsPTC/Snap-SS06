/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10620062c; end: 10620063b;  */

void FUN_10620062c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isSponsored_1125fd690);
  return;
}



/* Entry: 10620063c; end: 106200663;  */

void FUN_10620063c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106200664; end: 106200787;  */

void FUN_106200664(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar6 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar6 != 0) {
    uVar2 = uVar6;
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2813a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) goto LAB_106200760;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  *param_4 = 1;
LAB_106200760:
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106200788; end: 106200837; -[SCLensCarouselLoggingWorkflow _fireLensCarouselSnapshotEventWithCarouselChanged:arBarTabSessionId:arBarTabCategoryId:] */

void FUN_106200788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf09180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf09160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb0840(uVar4,param_2,uVar5,lVar1,param_3,uVar2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106200838; end: 1062008bb; -[SCLensCarouselLoggingWorkflow .cxx_destruct] */

void FUN_106200838(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062008bc; end: 106200903; -[SCLensCarouselLoggingWorkflowEntryPoint begin] */

void FUN_1062008bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f05d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_begin_1125a3840);
  func_0x00010bea95c0(param_1);
  return;
}



/* Entry: 106200904; end: 106200c6f; -[SCLensCarouselLoggingWorkflowEntryPoint _setUpLensCarouselSnapshotLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106200904(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112743018;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar13;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar13);
  lVar13 = lVar1;
  func_0x00010c0f9920(lVar1,param_2,&PTR____CFConstantStringClassReference_110e45798,3,0,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8ca0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112743008;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_106200c70(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c150160();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112743010;
    _objc_loadWeakRetained(lVar15);
  }
  lVar8 = lVar15;
  func_0x00010c24a560(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8840(puVar2,param_2,lVar4,lVar7,lVar9);
  lVar14 = (long)_DAT_112742ff0;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar12);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar11);
  puVar2 = PTR_PTR_1126c8ca8;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  lVar11 = param_1 + _DAT_11274301c;
  _objc_loadWeakRetained();
  lVar4 = lVar11;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274300c;
  _objc_loadWeakRetained(lVar3);
  lVar7 = lVar3;
  func_0x00010c091140();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_106200c70(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c150160();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c095c40(param_1);
  func_0x00010c0231e0(puVar2,param_2,uVar12,lVar6,lVar15,lVar14,lVar10,lVar13);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112742ff4);
  *(undefined **)(param_1 + _DAT_112742ff4) = puVar2;
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106200c70; end: 106200c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106200c70(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112743014);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106200c94; end: 106200cfb; -[SCLensCarouselLoggingWorkflowEntryPoint lensPlacement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106200c94(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1 + _DAT_112743000;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar3;
  func_0x00010c150aa0();
  _objc_release(uVar3);
  if (uVar1 < 0xe) {
    uVar2 = *(undefined8 *)(&UNK_10ddda248 + uVar1 * 8);
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 106200cfc; end: 106200db3; -[SCLensCarouselLoggingWorkflowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106200cfc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274301c);
  _objc_destroyWeak(param_1 + _DAT_112743018);
  _objc_destroyWeak(param_1 + _DAT_112743014);
  _objc_destroyWeak(param_1 + _DAT_112743010);
  _objc_destroyWeak(param_1 + _DAT_11274300c);
  _objc_destroyWeak(param_1 + _DAT_112743008);
  _objc_destroyWeak(param_1 + _DAT_112743004);
  _objc_destroyWeak(param_1 + _DAT_112743000);
  _objc_destroyWeak(param_1 + _DAT_112742ffc);
  _objc_destroyWeak(param_1 + _DAT_112742ff8);
  _objc_storeStrong(param_1 + _DAT_112742ff0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742ff4,0);
  return;
}



/* Entry: 106200db4; end: 106200e7f; -[SCLensCarouselSnapshotBlizzardLogger initWithBlizzardLogger:lensScheduleServiceProvider:sponsoredLensScheduleService:] */

undefined1 *
FUN_106200db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f05e0;
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



/* Entry: 106200e80; end: 10620117f; -[SCLensCarouselSnapshotBlizzardLogger fireWithCarouselLenses:lensSessionId:carouselChanged:arBarTabSessionId:arBarTabCategoryId:] */

void FUN_106200e80(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126c8cb0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1bcc00();
  _objc_release(param_5);
  func_0x00010c179960(puVar1,param_3,param_6);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c215e20(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar2);
  func_0x00010c1bcf40(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c17a100(puVar1,param_3,param_8);
  _objc_release(param_8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x106201008;
  puStack_68 = &UNK_110915bb8;
  lStack_60 = param_2;
  puStack_58 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_4,param_3,&puStack_80);
  _objc_release(param_4);
  func_0x00010c1c7500(puVar1,param_3,puVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puStack_58);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106201180; end: 10620121f; -[SCLensCarouselSnapshotBlizzardLogger _scheduleNamespaceDataForLens:] */

void FUN_106201180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c073c60();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf273c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0d53e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e00e0(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106201220; end: 10620125b; -[SCLensCarouselSnapshotBlizzardLogger .cxx_destruct] */

void FUN_106201220(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620125c; end: 10620141f; -[SCLensThumbnailEvent initWithLensSessionId:lensCarouselFunnelLogger:logger:performanceAutomationLogger:] */

undefined1 *
FUN_10620125c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined **param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f05e8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_5);
    ppuVar4 = param_5;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    _objc_retain(ppuVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined ***)((long)puVar2 + 0x20) = ppuVar1;
    _objc_release(uVar3);
    _objc_release(ppuVar4);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_6;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + 0x90) = 0;
    *(undefined8 *)((long)puVar2 + 0x80) = 0xbff0000000000000;
    *(undefined8 *)((long)puVar2 + 0x88) = 0;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0xa0);
    *(undefined **)((long)puVar2 + 0xa0) = puVar5;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar2 + 0x28) = param_1;
    *(undefined8 *)((long)puVar2 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar2 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar2 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar2 + 0x50) = 0xffffffffffffffff;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x60);
    *(undefined **)((long)puVar2 + 0x60) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x68);
    *(undefined **)((long)puVar2 + 0x68) = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x70);
    *(undefined **)((long)puVar2 + 0x70) = puVar5;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x78);
    *(undefined8 *)((long)puVar2 + 0x78) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 106201420; end: 10620142b; -[SCLensThumbnailEvent setActivationFlow:activationDelay:] */

void FUN_106201420(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_2 + 0x30) = param_4;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10620142c; end: 10620143b; -[SCLensThumbnailEvent setEntranceType:carouselType:] */

void FUN_10620142c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  return;
}



/* Entry: 10620143c; end: 106201443; -[SCLensThumbnailEvent setUserInteractableSession:] */

void FUN_10620143c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x91) = param_3;
  return;
}



/* Entry: 106201444; end: 106201457; -[SCLensThumbnailEvent setExitType:] */

void FUN_106201444(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x40) != -1) {
    *(undefined8 *)(param_1 + 0x48) = param_3;
  }
  return;
}



/* Entry: 106201458; end: 10620145f; -[SCLensThumbnailEvent setSnapSource:] */

void FUN_106201458(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 106201460; end: 106201547; -[SCLensThumbnailEvent startThumbnailLoadingForLensId:atIndex:] */

void FUN_106201460(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x70);
      func_0x00010c0e00e0(lVar1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar1 == 0) {
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,puVar2,param_3);
        _objc_release(puVar2);
        lVar1 = param_1;
        func_0x00010bee52c0(param_1,param_2,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,lVar1,param_3);
        _objc_release(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106201548; end: 1062016c3; -[SCLensThumbnailEvent finishThumbnailLoadingForLensId:atIndex:] */

void FUN_106201548(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + 0x68);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_2 + 0x70);
      func_0x00010c0e00e0(lVar1,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_2 + 0x70);
        func_0x00010c0e00e0(uVar2,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_2 + 0x60);
        func_0x00010c0e00e0(uVar3,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126c8cc0;
        func_0x00010c2b2d40(PTR_PTR_1126c8cc0,param_3,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbd60();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1bbe60(puVar4,param_3,param_5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _CACurrentMediaTime();
        dVar6 = param_1;
        func_0x00010bf885a0(uVar2);
        param_1 = param_1 - dVar6;
        func_0x00010c0e6280(uVar3);
        func_0x00010c1d3320(param_1 + dVar6,puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf21f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x60),param_3,puVar5,param_4);
        _objc_release(puVar5);
        func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x70),param_3,param_4);
        _objc_release(puVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062016c4; end: 10620178b; -[SCLensThumbnailEvent startDisplayingLensId:atIndex:] */

void FUN_1062016c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      _CACurrentMediaTime();
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68),param_2,puVar2,param_3);
      _objc_release(puVar2);
      lVar1 = param_1;
      func_0x00010bee52c0(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,lVar1,param_3);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620178c; end: 1062018f7; -[SCLensThumbnailEvent finishDisplayingLensId:atIndex:] */

void FUN_10620178c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + 0x68);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bfafc80(param_2,param_3,param_4,param_5);
      uVar2 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c0e00e0(uVar3,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c8cc0;
      func_0x00010c2b2d40(PTR_PTR_1126c8cc0,param_3,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1bbe60(puVar4,param_3,param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _CACurrentMediaTime();
      dVar6 = param_1;
      func_0x00010bf885a0(uVar2);
      param_1 = param_1 - dVar6;
      func_0x00010c0e62a0(uVar3);
      func_0x00010c1d3340(param_1 + dVar6,puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x60),param_3,puVar5,param_4);
      _objc_release(puVar5);
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x68),param_3,param_4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062018f8; end: 1062019b3; -[SCLensThumbnailEvent didDrawIconForLensId:atIndex:] */

void FUN_1062018f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_2 + 0xa0);
      func_0x00010c0e00e0(lVar1,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        _CACurrentMediaTime();
        if (*(double *)(param_2 + 0x80) == -1.0) {
          *(undefined8 *)(param_2 + 0x80) = param_1;
          *(undefined8 *)(param_2 + 0x88) = param_5;
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xa0),param_3,puVar2,param_4);
        _objc_release(puVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062019b4; end: 1062019bf; -[SCLensThumbnailEvent didInteractWithLensCarousel] */

void FUN_1062019b4(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 1062019c0; end: 1062019ef; -[SCLensThumbnailEvent didVisibleLensIdsChanged:] */

void FUN_1062019c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062019f0; end: 106201d03; -[SCLensThumbnailEvent fireWithActiveLensIdsOrder:lensCollectionIds:originalLensIndex:] */

void FUN_1062019f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  dVar11 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(lStack_128 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c094780(uVar3);
        func_0x00010bfaf7e0(param_1,param_2,uVar4,uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126c8cc8;
  _objc_opt_new(PTR_PTR_1126c8cc8);
  lVar2 = param_1;
  func_0x00010c0e6240(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d3300(puVar6,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1bcc00(puVar6,param_2,*(undefined8 *)(param_1 + 0x18));
  lVar2 = param_1;
  func_0x00010bf00400(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166ee0(puVar6,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf003a0(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166ec0(puVar6,param_2,lVar2);
  _CACurrentMediaTime();
  func_0x00010c218560((double)(long)((dVar11 - *(double *)(param_1 + 0x28)) * 10.0) / 10.0,puVar6);
  func_0x00010c1623c0(puVar6,param_2,*(undefined8 *)(param_1 + 0x30));
  dVar11 = *(double *)(param_1 + 0x38) * 1000.0;
  lVar9 = (long)dVar11;
  func_0x00010c162440(puVar6,param_2,lVar9);
  func_0x00010c1966a0(puVar6,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c179ce0(puVar6,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c198620(puVar6,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c206c40(puVar6,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1b1ee0(puVar6,param_2,*(undefined1 *)(param_1 + 0x91));
  lVar1 = param_1;
  func_0x00010be40ba0();
  if ((int)lVar1 != 0) {
    uVar7 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar8 = uVar7;
    func_0x00010c2a2480();
    _objc_release(uVar7);
    if ((uVar8 & 1) == 0) {
      func_0x00010be15d20(param_1,param_2,puVar6);
    }
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
  func_0x00010c0a2a20(*(undefined8 *)(param_1 + 0x78),param_2,lVar9);
  func_0x00010c137fe0(param_1);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x60));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x68));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x70));
  _CACurrentMediaTime();
  *(double *)(param_3 + 0x28) = dVar11;
  return;
}



/* Entry: 106201d04; end: 106201d3f; -[SCLensThumbnailEvent reset] */

void FUN_106201d04(undefined8 param_1,long param_2)

{
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x60));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x68));
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x70));
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 106201d40; end: 106201d73; -[SCLensThumbnailEvent restoreOptions] */

void FUN_106201d40(void)

{
  _objc_alloc(PTR_PTR_1126c8cd0);
  func_0x00010bffcd80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106201d74; end: 106201dcf; -[SCLensThumbnailEvent applyRestoreOptions:] */

void FUN_106201d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf96fa0(param_3);
  uVar2 = param_3;
  func_0x00010bf32bc0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1966d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setEntranceType_carouselType__1126433d0,uVar1,uVar2);
  return;
}



/* Entry: 106201dd0; end: 10620202b; -[SCLensThumbnailEvent _fillLensIconsLatencyForSessionEvent:] */

void FUN_106201dd0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0912a0();
  _objc_release(lVar2);
  func_0x00010c1adfa0(param_3);
  func_0x00010c168600(param_3);
  func_0x00010c1685e0(param_3);
  dVar8 = 0.0;
  lVar6 = *(long *)(param_1 + 0x98);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 == 0) {
    _objc_release(lVar6);
  }
  else {
    dVar9 = 0.0;
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        uVar4 = *(undefined8 *)(param_1 + 0xa0);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        if (dVar8 <= 0.0) {
          _objc_release(uVar4);
          _objc_release(lVar6);
          goto LAB_106201fc4;
        }
        func_0x00010bf885a0(uVar4);
        if (dVar9 <= dVar8) {
          func_0x00010bf885a0(uVar4);
          dVar9 = dVar8;
        }
        _objc_release(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    _objc_release(lVar6);
  }
LAB_106201fc4:
  func_0x00010c166fc0(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  iVar1 = (int)*(undefined8 *)(param_3 + 0x18);
  func_0x00010bf4bb00();
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be41230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__isInitialSession_11256de28);
  return;
}



/* Entry: 10620202c; end: 106202067; -[SCLensThumbnailEvent _isFunnelSessionEvent] */

void FUN_10620202c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4bb00(uVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be41230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isInitialSession_11256de28);
    return;
  }
  return;
}



/* Entry: 106202068; end: 1062020e3; -[SCLensThumbnailEvent _isInitialSession] */

bool FUN_106202068(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf44740(lVar2,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = lVar3;
    func_0x00010c067ec0(lVar3);
    bVar1 = (int)lVar2 == 0;
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 1062020e4; end: 1062021bb; -[SCLensThumbnailEvent allLensesWithActiveLensIdsOrder:originalLensIndex:] */

void FUN_1062020e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062021bc;
  puStack_48 = &UNK_110915be8;
  puStack_40 = puVar2;
  uStack_38 = param_4;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_40);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062021bc; end: 10620221b;  */

void FUN_1062021bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e457b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10620221c; end: 1062022f3; -[SCLensThumbnailEvent allLensCollectionIds:originalLensIndex:] */

void FUN_10620221c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062022f4;
  puStack_48 = &UNK_110915be8;
  puStack_40 = puVar2;
  uStack_38 = param_4;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_40);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062022f4; end: 1062023bf;  */

void FUN_1062022f4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c071ae0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010c067fc0();
    _objc_release(puVar2);
    if ((long)uVar3 < 1) goto LAB_1062023a4;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1);
  }
  _objc_release(puVar2);
LAB_1062023a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062023c0; end: 10620247b; -[SCLensThumbnailEvent onScreenLensesWithActiveLensIdsOrder:originalLensIndex:] */

void FUN_1062023c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10620247c;
  puStack_50 = &UNK_110915c18;
  uStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_4;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_68);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_40);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10620247c; end: 106202573;  */

void FUN_10620247c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee52c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x28));
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = uVar5;
    func_0x00010bf99d20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 106202574; end: 106202653; -[SCLensThumbnailEvent _updatedEntityForLensWithId:atIndex:] */

void FUN_106202574(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x60);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) || (puVar2 = puVar1, func_0x00010c094780(), puVar2 != param_4)) {
    puVar2 = PTR_PTR_1126c8cc0;
    func_0x00010c2b2d40(PTR_PTR_1126c8cc0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1bbe60(puVar2,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106202654; end: 1062026df; -[SCLensThumbnailEvent .cxx_destruct] */

void FUN_106202654(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1062026e0; end: 10620293f; -[SCLensThumbnailLogger setLensCarouselManager:] */

void FUN_1062026e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar6);
  _objc_initWeak(auStack_78,param_1);
  uVar6 = param_3;
  func_0x00010bef0b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10620299c;
  puStack_88 = &UNK_110857828;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c090960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 106202940; end: 1062029cf;  */

void FUN_106202940(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == 0) || (uVar1 = param_2, func_0x00010c070fa0(), (uVar1 & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar1 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062029d0; end: 106202ac3;  */

void FUN_1062029d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106202ac4;
  uStack_30 = 0x106202ad4;
  uStack_28 = 0;
  func_0x00010c0c1880(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106202ac4; end: 106202ae7;  */

void FUN_106202ac4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106202ae8; end: 106202b2f;  */

void FUN_106202ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf43280(param_2,param_2,&PTR___NSConcreteGlobalBlock_110915d48);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106202b30; end: 106202bc3;  */

void FUN_106202b30(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070fa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106202bc4; end: 106202c13;  */

void FUN_106202bc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf7ebc0(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106202c14; end: 106202c1b; -[SCLensThumbnailLogger startWithLensSessionId:] */

void FUN_106202c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__startSessionWithId_restore__11258dfc0,param_3,0);
  return;
}



/* Entry: 106202c1c; end: 106202c73; -[SCLensThumbnailLogger pauseSession] */

void FUN_106202c1c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106202c74;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 106202c74; end: 106202cbb;  */

void FUN_106202c74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c13c5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be177d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__fireEvent_112563790)
  ;
  return;
}



/* Entry: 106202cbc; end: 106202cc3; -[SCLensThumbnailLogger resumeSessionWithId:] */

void FUN_106202cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__startSessionWithId_restore__11258dfc0,param_3,1);
  return;
}



/* Entry: 106202cc4; end: 106202d1b; -[SCLensThumbnailLogger resetSession] */

void FUN_106202cc4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106202d1c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 106202d1c; end: 106202d27;  */

void FUN_106202d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 106202d28; end: 106202d7f; -[SCLensThumbnailLogger stopSession] */

void FUN_106202d28(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106202d80;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 106202d80; end: 106202d87;  */

void FUN_106202d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be177d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__fireEvent_112563790)
  ;
  return;
}



/* Entry: 106202d88; end: 106202ddf; -[SCLensThumbnailLogger setSnapSource:] */

void FUN_106202d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106202de0;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_40);
  return;
}



/* Entry: 106202de0; end: 106202deb;  */

void FUN_106202de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2056d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_setSnapSource__11265efd8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106202dec; end: 106202e83; -[SCLensThumbnailLogger _startSessionWithId:restore:] */

void FUN_106202dec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106202e84;
  puStack_50 = &UNK_11084d5f8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106202e84; end: 106202f9b;  */

void FUN_106202e84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  func_0x00010be177c0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126c8cd8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c090a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(0);
  func_0x00010c025800(puVar1,param_2,uVar3,uVar2,uVar6,0);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar1;
  _objc_release(uVar3);
  _objc_release(0);
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40) = uVar5;
  func_0x00010c21e8c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40));
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(lVar4 + 0x20) != 0)) {
    func_0x00010bf087e0(*(undefined8 *)(lVar4 + 0x10));
    lVar4 = *(long *)(param_1 + 0x20);
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x20) = 0;
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x48);
  *(undefined8 *)(lVar4 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106202f9c; end: 106203097; -[SCLensThumbnailLogger _fireEvent] */

void FUN_106202f9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR_s_lensId_112602b60;
    _NSStringFromSelector(PTR_s_lensId_112602b60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296f80(uVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR_s_lensCollectionId_112601f78;
    _NSStringFromSelector(PTR_s_lensCollectionId_112601f78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296f80(uVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c8ce0;
    func_0x00010c0ed640(PTR_PTR_1126c8ce0,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010bfb0820(lVar4,param_2,uVar5,uVar6,puVar3);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 106203098; end: 10620313f; -[SCLensThumbnailLogger _isLensReady:] */

undefined4 FUN_106203098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4c6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c094380(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar4);
  uVar1 = param_3;
  func_0x00010c072d20(param_3);
  _objc_release(param_3);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = (undefined4)uVar1;
  }
  _objc_release(lVar2);
  return uVar3;
}



/* Entry: 106203140; end: 106203143; -[SCLensThumbnailLogger willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_106203140(void)

{
  return;
}



/* Entry: 106203144; end: 10620324f; -[SCLensThumbnailLogger willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_106203144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1062031d4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106203250; end: 106203367; -[SCLensThumbnailLogger didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_106203250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1062032e0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106203368; end: 106203473; -[SCLensThumbnailLogger willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_106203368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1062033f8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106203474; end: 10620358b; -[SCLensThumbnailLogger didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_106203474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106203504;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10620358c; end: 10620358f; -[SCLensThumbnailLogger willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_10620358c(void)

{
  return;
}



/* Entry: 106203590; end: 106203593; -[SCLensThumbnailLogger didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_106203590(void)

{
  return;
}



/* Entry: 106203594; end: 106203597; -[SCLensThumbnailLogger didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_106203594(void)

{
  return;
}



/* Entry: 106203598; end: 10620359b; -[SCLensThumbnailLogger willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_106203598(void)

{
  return;
}



/* Entry: 10620359c; end: 10620359f; -[SCLensThumbnailLogger willShowLensesWithContext:] */

void FUN_10620359c(void)

{
  return;
}



/* Entry: 1062035a0; end: 1062035a3; -[SCLensThumbnailLogger didHideLensesWithContext:] */

void FUN_1062035a0(void)

{
  return;
}



/* Entry: 1062035a4; end: 106203633; -[SCLensThumbnailLogger didUpdateActiveLensOrder:withContext:] */

void FUN_1062035a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106203634;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106203634; end: 10620365f;  */

void FUN_106203634(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106203660; end: 106203663; -[SCLensThumbnailLogger didActivateLens:withContext:] */

void FUN_106203660(void)

{
  return;
}



/* Entry: 106203664; end: 106203667; -[SCLensThumbnailLogger didSelectLens:withContext:] */

void FUN_106203664(void)

{
  return;
}



/* Entry: 106203668; end: 1062037af; -[SCLensThumbnailLogger willDisplayLens:withContext:] */

void FUN_106203668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1062036f8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1062037b0; end: 1062037b3; -[SCLensThumbnailLogger didUpdateDisplayedLens:withContext:] */

void FUN_1062037b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_willDisplayLens_withContext__112687280);
  return;
}



/* Entry: 1062037b4; end: 1062038bf; -[SCLensThumbnailLogger didEndDisplayingLens:withContext:] */

void FUN_1062037b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106203844;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1062038c0; end: 1062039c3; -[SCLensThumbnailLogger didDrawIcon:forLens:atIndex:withContext:] */

void FUN_1062038c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106203958;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1062039c4; end: 106203a1f; -[SCLensThumbnailLogger didActivateCarouselWithLatency:] */

void FUN_1062039c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106203a20;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x30),param_3,&puStack_40);
  return;
}



/* Entry: 106203a20; end: 106203a37;  */

void FUN_106203a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1623f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setActivationFlow_activationDela_112636318,0);
  return;
}



/* Entry: 106203a38; end: 106203abf; -[SCLensThumbnailLogger carouselDidActivatedWithType:entranceType:] */

void FUN_106203a38(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  ulong uStack_20;
  undefined8 uStack_18;
  
  if (param_3 - 1U < 6) {
    uStack_18 = *(undefined8 *)(&UNK_10ddda2b8 + (param_3 - 1U) * 8);
  }
  else {
    uStack_18 = 0xffffffffffffffff;
  }
  uStack_20 = param_4 - 1;
  if (7 < uStack_20) {
    uStack_20 = 0xffffffffffffffff;
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106203ac0;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_48);
  return;
}



/* Entry: 106203ac0; end: 106203ad3;  */

void FUN_106203ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1966d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setEntranceType_carouselType__1126433d0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106203ad4; end: 106203b3b; -[SCLensThumbnailLogger carouselDidExitWithType:] */

void FUN_106203ad4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010be9a7c0();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106203b3c;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_50);
  return;
}



/* Entry: 106203b3c; end: 106203b47;  */

void FUN_106203b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c198630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_setExitType__112643ba8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106203b48; end: 106203ba3; -[SCLensThumbnailLogger setUserInteractableSession:] */

void FUN_106203b48(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106203ba4;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_40);
  return;
}



/* Entry: 106203ba4; end: 106203bbb;  */

void FUN_106203ba4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40) = *(undefined1 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c21e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setUserInteractableSession__112665458);
  return;
}



/* Entry: 106203bbc; end: 106203bdf; -[SCLensThumbnailLogger _scaLensCarouselExitTypeWithType:] */

undefined8 FUN_106203bbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x10) {
    return *(undefined8 *)(&UNK_10ddda2e8 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 106203be0; end: 106203cdf; -[SCLensThumbnailLogger carouselSnapshot] */

void FUN_106203be0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106203ce0; end: 106203d37;  */

void FUN_106203ce0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bddbd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106203d38; end: 106203ea3; -[SCLensThumbnailLogger _carouselSnapshot] */

void FUN_106203d38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c8ce0;
    func_0x00010c0ed640(PTR_PTR_1126c8ce0,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR_s_lensId_112602b60;
    _NSStringFromSelector(PTR_s_lensId_112602b60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296f80(uVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR_s_lensCollectionId_112601f78;
    _NSStringFromSelector(PTR_s_lensCollectionId_112601f78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296f80(uVar7,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf00400(uVar2,param_2,uVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf003a0(uVar3,param_2,uVar7,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0e6240(uVar4,param_2,uVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c8ce8;
    _objc_alloc(PTR_PTR_1126c8ce8);
    func_0x00010c0257e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106203ea4; end: 106203ebb; -[SCLensThumbnailLogger lensCarouselFunnelLogger] */

void FUN_106203ea4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106203ebc; end: 106203ec7; -[SCLensThumbnailLogger setLensCarouselFunnelLogger:] */

void FUN_106203ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 106203ec8; end: 106203f47; -[SCLensThumbnailLogger .cxx_destruct] */

void FUN_106203ec8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 106203f48; end: 106203fe3; -[SCLensThumbnailEventEntity eventDescription] */

void FUN_106203f48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c094780();
  uVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e62a0(param_1);
  func_0x00010c0e6280(param_1);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e457f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106203fe4; end: 10620407f; -[SCLensThumbnailEventEntity initWithLensId:lensIndex:onScreenTimeNotReady:onScreenTimeTotal:] */

undefined1 *
FUN_106203fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f05f8;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106204080; end: 1062040a3; -[SCLensThumbnailEventEntity copyWithZone:] */

undefined8 FUN_106204080(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


