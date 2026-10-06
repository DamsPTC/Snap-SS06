/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10694f018; end: 10694f0ff; -[SCMyStoriesDataCoordinator _updatePostedStorySnaps:] */

void FUN_10694f018(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10694f100;
  puStack_50 = &UNK_110841f20;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c287f00(param_1,uVar3,param_3,param_4,uVar4,uVar2,&puStack_68);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10694f100; end: 10694f103;  */

void FUN_10694f100(void)

{
  return;
}



/* Entry: 10694f104; end: 10694f153; -[SCMyStoriesDataCoordinator retryStoryPostWithClientId:] */

void FUN_10694f104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13fa00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10694f154; end: 10694f237; -[SCMyStoriesDataCoordinator queryStoriesWithStoryIds:completionQueue:completion:] */

void FUN_10694f154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10694f238;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694f238; end: 10694f32f;  */

void FUN_10694f238(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0f680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10694f330;
  puStack_50 = &UNK_11094d090;
  uStack_48 = uVar4;
  _objc_retain();
  func_0x000100504554(uVar5,&puStack_68);
  puStack_98 = puVar3;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10694f33c;
  puStack_80 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_78 = uVar5;
  uStack_70 = uVar2;
  _objc_retain(uVar5);
  func_0x00010007380c(uVar1,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uVar5);
  _objc_release(uStack_48);
  _objc_release(uVar4);
  return;
}



/* Entry: 10694f330; end: 10694f34b;  */

void FUN_10694f330(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 10694f34c; end: 10694f42f; -[SCMyStoriesDataCoordinator queryRepostedSpotlightStoryWithStoryId:completionQueue:completion:] */

void FUN_10694f34c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10694f430;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694f430; end: 10694f777;  */

void FUN_10694f430(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be0f680();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar3 = lVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar13 = *plStack_1c0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1c0 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        lVar17 = *(long *)(lStack_1c8 + lVar15 * 8);
        lVar5 = lVar17;
        func_0x00010c25b720();
        if (lVar5 == 1) {
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          lStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          plStack_200 = (long *)0x0;
          lVar5 = lVar17;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf52a60();
          if (lVar6 != 0) {
            lVar16 = *plStack_200;
            do {
              lVar14 = 0;
              do {
                if (*plStack_200 != lVar16) {
                  _objc_enumerationMutation(lVar5);
                }
                uVar18 = *(undefined8 *)(lStack_208 + lVar14 * 8);
                puVar7 = PTR_PTR_1126b2378;
                _objc_alloc();
                func_0x00010bf4e880(uVar18);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar18;
                func_0x00010c11ff60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c008360();
                _objc_release(uVar8);
                _objc_release(uVar18);
                puVar9 = puVar7;
                func_0x00010c27f9c0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar9;
                func_0x00010c1344a0();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010c0720c0();
                _objc_release(puVar11);
                _objc_release(puVar10);
                _objc_release(puVar9);
                if ((int)puVar12 != 0) {
                  func_0x00010befa120(puVar2);
                }
                _objc_release(puVar7);
                lVar14 = lVar14 + 1;
              } while (lVar6 != lVar14);
              lVar6 = lVar5;
              func_0x00010bf52a60();
            } while (lVar6 != 0);
          }
          _objc_release(lVar5);
          puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_240 = 0xc2000000;
          pcStack_238 = FUN_10694f778;
          puStack_230 = &UNK_11084a9e8;
          uVar8 = *(undefined8 *)(param_1 + 0x30);
          uVar18 = *(undefined8 *)(param_1 + 0x38);
          _objc_retain(uVar18);
          uStack_218 = uVar18;
          _objc_retain(puVar2);
          puStack_228 = puVar2;
          lStack_220 = lVar17;
          func_0x00010007380c(uVar8,&puStack_248);
          _objc_release(puStack_228);
          _objc_release(uStack_218);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != lVar4);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar18 = *(undefined8 *)(lVar1 + 0x20);
  uVar8 = *(undefined8 *)(lVar1 + 0x28);
  lVar3 = *(long *)(lVar1 + 0x30);
  func_0x00010c259cc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar18,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10694f778; end: 10694f7c7;  */

void FUN_10694f778(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10694f7c8; end: 10694f87f; -[SCMyStoriesDataCoordinator updatePostingWithScheduled:] */

void FUN_10694f7c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10694f880; end: 10694f8db;  */

void FUN_10694f880(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126cf360;
  func_0x00010bfd1f60(PTR_PTR_1126cf360,param_2,*(undefined1 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc160(lVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10694f8dc; end: 10694f9c7; -[SCMyStoriesDataCoordinator queryMyStoryWithStoryId:completionQueue:completion:] */

void FUN_10694f8dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010694e918(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10694f9c8;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694f9c8; end: 10694fa8b;  */

void FUN_10694f9c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0f680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10694fa8c;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  uStack_40 = uVar3;
  uStack_38 = uVar1;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 10694fa8c; end: 10694fa9b;  */

void FUN_10694fa8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010694fa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10694fa9c; end: 10694fb2f; -[SCMyStoriesDataCoordinator myStoryObservableWithStoryId:observationQueue:] */

void FUN_10694fa9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010694e918(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfa94a0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0e0500(uVar1,param_2,*(undefined8 *)(param_1 + 0x58),param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10694fb30; end: 10694fbcf; -[SCMyStoriesDataCoordinator storiesObservableWithStoryIds:observationQueue:] */

void FUN_10694fb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_4);
  func_0x00010bfa94e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11094d0c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10694fbd0; end: 10694fbd7;  */

void FUN_10694fbd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 10694fbd8; end: 10694fc77; -[SCMyStoriesDataCoordinator myStoriesObservableWithStoryType:observationQueue:] */

void FUN_10694fbd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_4);
  func_0x00010bfa94c0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11094d0e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10694fc78; end: 10694fc7f;  */

void FUN_10694fc78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 10694fc80; end: 10694fd7b; -[SCMyStoriesDataCoordinator fetchViewerInfoWithRequestSource:] */

void FUN_10694fc80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c11d120(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10694fd7c; end: 10694fdcf;  */

void FUN_10694fd7c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10694fdd0; end: 10694feeb; -[SCMyStoriesDataCoordinator fetchViewerInfoWithStoryId:requestSource:] */

void FUN_10694fdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c11d5e0(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10694feec; end: 10694ffa7;  */

void FUN_10694feec(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  puVar16 = puVar2;
  func_0x00010be15580(lVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  _objc_retain(uVar17);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_retain(puVar16);
  puVar2 = puVar16;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  do {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar16);
      uVar22 = *(undefined8 *)(lVar1 + 0x30);
      puVar2 = puVar3;
      func_0x00010bf51e00();
      puVar24 = puVar2;
      func_0x00010bfab580(uVar22);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar17);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(puVar24);
      uVar17 = *(undefined8 *)(puVar16 + 0x58);
      uVar22 = *(undefined8 *)(puVar16 + 0x60);
      _objc_retain(puVar24);
      func_0x00010c11de00(uVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8500(uVar17);
      _objc_release(uVar22);
      _objc_release(puVar24);
      _objc_release(puVar24);
      return;
    }
    puVar24 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar18) {
        _objc_enumerationMutation(puVar16);
      }
      lVar26 = *(long *)((long)puVar24 * 8);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      func_0x00010c25b720();
      lVar6 = lVar26;
      func_0x00010c25b720();
      if (lVar6 - 1U < 2) {
LAB_1069500fc:
        dVar27 = 0.0;
        lVar10 = lVar26;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar10;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        if (lVar7 == 0) {
          ppuVar21 = &PTR__OBJC_CLASS___NSConstantArray_111180d88;
        }
        else {
          do {
            lVar25 = 0;
            do {
              dVar28 = dVar27;
              if (lRam0000000000000000 != lVar6) {
                _objc_enumerationMutation(lVar10);
                dVar28 = dVar27;
              }
              lVar20 = *(long *)(lVar25 * 8);
              lVar8 = lVar20;
              func_0x00010c26f2a0(lVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9c720();
              dVar27 = dVar28;
              _objc_release(lVar8);
              if (param_1 <= dVar28) {
                lVar8 = lVar20;
                func_0x00010c15f2e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar8 != 0) {
                  lVar8 = lVar20;
                  func_0x00010bf5bbc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x00010c0720c0();
                  _objc_release(lVar8);
                  if ((int)lVar9 != 0) {
                    func_0x00010c15f2e0(lVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar5);
                    goto LAB_106950240;
                  }
                }
              }
              else {
                lVar20 = *(long *)(lVar1 + 0xb0);
                func_0x00010c269d40(lVar20);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar26;
                func_0x00010c25b720(lVar26);
                func_0x0001084d1f7c();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0a5960(lVar20);
                _objc_release(lVar8);
LAB_106950240:
                _objc_release(lVar20);
              }
              lVar25 = lVar25 + 1;
            } while (lVar7 != lVar25);
            lVar7 = lVar10;
            func_0x00010bf52a60();
          } while (lVar7 != 0);
          ppuVar21 = &PTR__OBJC_CLASS___NSConstantArray_111180d88;
        }
LAB_10695044c:
        _objc_release(lVar10);
      }
      else {
        if (lVar6 == 3) {
          lVar6 = lVar26;
          func_0x00010c25b340(lVar26);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar6;
          func_0x000100819d24();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar26;
          func_0x00010bf52a60();
          lVar7 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar25 = 0;
            do {
              if (lRam0000000000000000 != lVar7) {
                _objc_enumerationMutation(lVar26);
              }
              uVar23 = *(ulong *)(lVar25 * 8);
              uVar11 = uVar23;
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (uVar11 != 0) {
                uVar11 = uVar23;
                func_0x000108f41864();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x00010c08fa60();
                if (uVar12 != 0) {
                  uVar12 = uVar23;
                  func_0x00010bf0e700();
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar12;
                  func_0x00010bf0a8c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar12);
                  uVar12 = uVar13;
                  func_0x00010c07f5e0();
                  if ((((int)uVar12 != 0) && (func_0x000108f41bc0(uVar23,lVar10), (uVar23 & 1) == 0)
                      ) && (uVar23 = uVar13, func_0x00010c24c380(), uVar23 == 2)) {
                    func_0x00010befa120(puVar4);
                  }
                  uVar23 = uVar13;
                  func_0x00010c077620();
                  if ((int)uVar23 != 0) {
                    func_0x00010bedb220(lVar1);
                  }
                  func_0x00010befa120(puVar5);
                  _objc_release(uVar13);
                }
                _objc_release(uVar11);
              }
              lVar25 = lVar25 + 1;
            } while (lVar6 != lVar25);
            lVar6 = lVar26;
            func_0x00010bf52a60();
          }
          _objc_release(lVar26);
          uVar22 = *(undefined8 *)(lVar1 + 0x40);
          func_0x00010bf529e0(puVar5);
          func_0x00010c0aa980(uVar22);
          ppuVar21 = &PTR__OBJC_CLASS___NSConstantArray_111180da0;
          goto LAB_10695044c;
        }
        if (lVar6 == 4) goto LAB_1069500fc;
        ppuVar21 = (undefined **)0x0;
      }
      puVar14 = puVar5;
      func_0x00010bf529e0();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = PTR_PTR_1126cf370;
        _objc_alloc(PTR_PTR_1126cf370);
        puVar15 = puVar5;
        func_0x00010bf51e00(puVar5);
        func_0x00010bf51e00(ppuVar21);
        func_0x00010c04e2e0(puVar14);
        _objc_release(ppuVar21);
        _objc_release(puVar15);
        func_0x00010befa120(puVar3);
        _objc_release(puVar14);
      }
      _objc_release(puVar5);
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar2);
    puVar2 = puVar16;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10694ffa8; end: 1069505a7; -[SCMyStoriesDataCoordinator _fetchViewerInfoWithStories:requestSource:] */

void FUN_10694ffa8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      _objc_release(param_4);
      uVar20 = *(undefined8 *)(param_2 + 0x30);
      puVar4 = puVar2;
      func_0x00010bf51e00();
      puVar14 = puVar4;
      func_0x00010bfab580(uVar20);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(puVar14);
      uVar20 = *(undefined8 *)(param_4 + 0x58);
      uVar16 = *(undefined8 *)(param_4 + 0x60);
      _objc_retain(puVar14);
      func_0x00010c11de00(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8500(uVar20);
      _objc_release(uVar16);
      _objc_release(puVar14);
      _objc_release(puVar14);
      return;
    }
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar24 = *(long *)(lVar22 * 8);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      func_0x00010c25b720();
      lVar6 = lVar24;
      func_0x00010c25b720();
      if (lVar6 - 1U < 2) {
LAB_1069500fc:
        dVar25 = 0.0;
        lVar10 = lVar24;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar10;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        if (lVar7 == 0) {
          ppuVar19 = &PTR__OBJC_CLASS___NSConstantArray_111180d88;
        }
        else {
          do {
            lVar23 = 0;
            do {
              dVar26 = dVar25;
              if (lRam0000000000000000 != lVar6) {
                _objc_enumerationMutation(lVar10);
                dVar26 = dVar25;
              }
              lVar18 = *(long *)(lVar23 * 8);
              lVar8 = lVar18;
              func_0x00010c26f2a0(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9c720();
              dVar25 = dVar26;
              _objc_release(lVar8);
              if (param_1 <= dVar26) {
                lVar8 = lVar18;
                func_0x00010c15f2e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar8 != 0) {
                  lVar8 = lVar18;
                  func_0x00010bf5bbc0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x00010c0720c0();
                  _objc_release(lVar8);
                  if ((int)lVar9 != 0) {
                    func_0x00010c15f2e0(lVar18);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar4);
                    goto LAB_106950240;
                  }
                }
              }
              else {
                lVar18 = *(long *)(param_2 + 0xb0);
                func_0x00010c269d40(lVar18);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar24;
                func_0x00010c25b720(lVar24);
                func_0x0001084d1f7c();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0a5960(lVar18);
                _objc_release(lVar8);
LAB_106950240:
                _objc_release(lVar18);
              }
              lVar23 = lVar23 + 1;
            } while (lVar7 != lVar23);
            lVar7 = lVar10;
            func_0x00010bf52a60();
          } while (lVar7 != 0);
          ppuVar19 = &PTR__OBJC_CLASS___NSConstantArray_111180d88;
        }
LAB_10695044c:
        _objc_release(lVar10);
      }
      else {
        if (lVar6 == 3) {
          lVar6 = lVar24;
          func_0x00010c25b340(lVar24);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar6;
          func_0x000100819d24();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar24;
          func_0x00010bf52a60();
          lVar7 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar23 = 0;
            do {
              if (lRam0000000000000000 != lVar7) {
                _objc_enumerationMutation(lVar24);
              }
              uVar21 = *(ulong *)(lVar23 * 8);
              uVar11 = uVar21;
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (uVar11 != 0) {
                uVar11 = uVar21;
                func_0x000108f41864();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x00010c08fa60();
                if (uVar12 != 0) {
                  uVar12 = uVar21;
                  func_0x00010bf0e700();
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar12;
                  func_0x00010bf0a8c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar12);
                  uVar12 = uVar13;
                  func_0x00010c07f5e0();
                  if ((((int)uVar12 != 0) && (func_0x000108f41bc0(uVar21,lVar10), (uVar21 & 1) == 0)
                      ) && (uVar21 = uVar13, func_0x00010c24c380(), uVar21 == 2)) {
                    func_0x00010befa120(puVar3);
                  }
                  uVar21 = uVar13;
                  func_0x00010c077620();
                  if ((int)uVar21 != 0) {
                    func_0x00010bedb220(param_2);
                  }
                  func_0x00010befa120(puVar4);
                  _objc_release(uVar13);
                }
                _objc_release(uVar11);
              }
              lVar23 = lVar23 + 1;
            } while (lVar6 != lVar23);
            lVar6 = lVar24;
            func_0x00010bf52a60();
          }
          _objc_release(lVar24);
          uVar20 = *(undefined8 *)(param_2 + 0x40);
          func_0x00010bf529e0(puVar4);
          func_0x00010c0aa980(uVar20);
          ppuVar19 = &PTR__OBJC_CLASS___NSConstantArray_111180da0;
          goto LAB_10695044c;
        }
        if (lVar6 == 4) goto LAB_1069500fc;
        ppuVar19 = (undefined **)0x0;
      }
      puVar14 = puVar4;
      func_0x00010bf529e0();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = PTR_PTR_1126cf370;
        _objc_alloc(PTR_PTR_1126cf370);
        puVar15 = puVar4;
        func_0x00010bf51e00(puVar4);
        func_0x00010bf51e00(ppuVar19);
        func_0x00010c04e2e0(puVar14);
        _objc_release(ppuVar19);
        _objc_release(puVar15);
        func_0x00010befa120(puVar2);
        _objc_release(puVar14);
      }
      _objc_release(puVar4);
      lVar22 = lVar22 + 1;
    } while (lVar22 != lVar5);
    lVar5 = param_4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1069505a8; end: 1069506f3; -[SCMyStoriesDataCoordinator _updateMapStoryPostingInfoWithSnap:] */

void FUN_1069505a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106950660;
  puStack_40 = &UNK_11085adb8;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,uVar2,&PTR___NSConcreteGlobalBlock_11094d130);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069506f4; end: 1069506f7;  */

void FUN_1069506f4(void)

{
  return;
}



/* Entry: 1069506f8; end: 1069506ff; -[SCMyStoriesDataCoordinator startSavingSnapWithStoryId:snapComponentId:] */

void FUN_1069506f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_startSavingSnapWithStoryId_snapC_112671bc8);
  return;
}



/* Entry: 106950700; end: 106950707; -[SCMyStoriesDataCoordinator finishSavingSnapWithStoryId:snapComponentId:success:] */

void FUN_106950700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfafb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_finishSavingSnapWithStoryId_snap_1125c9888);
  return;
}



/* Entry: 106950708; end: 106950773; -[SCMyStoriesDataCoordinator fetchSnapSaveStateWithStoryId:snapComponentId:] */

undefined8 FUN_106950708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010694e918(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfaa3a0(uVar1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106950774; end: 1069509eb; -[SCMyStoriesDataCoordinator _startDeletingOurStorySnapWithClientId:serverId:posterGuid:queue:onDeleteBegin:] */

void FUN_106950774(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    if ((param_6 == 0) || (param_7 == 0)) goto LAB_1069509a0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1069509ec;
    puStack_80 = &UNK_110849530;
    _objc_retain(param_7);
    lStack_78 = param_7;
    func_0x00010007380c(param_6,&puStack_98);
    lVar2 = lStack_78;
  }
  else {
    lVar3 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar2 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106950a00;
    puStack_a8 = &UNK_110842e18;
    _objc_retain(lVar2);
    lStack_a0 = lVar2;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    if ((param_6 != 0) && (param_7 != 0)) {
      puStack_f0 = puVar1;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_106950a80;
      puStack_d8 = &UNK_11084aaa8;
      _objc_retain(param_7);
      lStack_c8 = param_7;
      _objc_retain(param_3);
      lStack_d0 = param_3;
      func_0x00010007380c(param_6,&puStack_f0);
      _objc_release(lStack_d0);
      _objc_release(lStack_c8);
    }
    _objc_initWeak(auStack_f8,param_1);
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x106950b0c;
    puStack_120 = &UNK_110850cf8;
    _objc_copyWeak(auStack_100,auStack_f8);
    _objc_retain(param_3);
    lStack_118 = param_3;
    _objc_retain(param_4);
    uStack_110 = param_4;
    _objc_retain(param_5);
    uStack_108 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_138);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(lStack_118);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
    _objc_release(lStack_a0);
  }
  _objc_release(lVar2);
LAB_1069509a0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069509ec; end: 1069509ff;  */

void FUN_1069509ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001069509fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 106950a00; end: 106950a7f;  */

void FUN_106950a00(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e65a78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e65a78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57f80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106950a80; end: 106950b43;  */

void FUN_106950a80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + 0x38;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bdfa400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106950b44; end: 106950cbf; -[SCMyStoriesDataCoordinator deleteStorySnapWithClientId:serverId:posterGuid:storyId:onlyShowFailureToast:disableFailureToast:queue:onDeleteBegin:] */

void FUN_106950b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010694e918(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106950cc0;
  puStack_a8 = &UNK_11094d170;
  uStack_78 = param_9;
  uStack_70 = param_10;
  lStack_a0 = param_1;
  uStack_98 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_68 = param_7;
  uStack_67 = param_8;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 106950cc0; end: 1069512d7;  */

void FUN_106950cc0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined2 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010bfa94a0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar16 = lVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar16;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar12 = *plStack_1c0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1c0 != lVar12) {
          _objc_enumerationMutation(lVar16);
        }
        lVar15 = *(long *)(lStack_1c8 + lVar13 * 8);
        uVar3 = *(ulong *)(param_1 + 0x30);
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar15;
        func_0x00010bf3cf60(lVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar17;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0720c0();
        _objc_release(lVar4);
        _objc_release(lVar17);
        _objc_release(uVar3);
        if ((uVar5 & 1) != 0) {
          _objc_retain(lVar15);
          _objc_release(lVar16);
          if (lVar15 == 0) goto LAB_106951018;
          if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
            ppuVar6 = &PTR____CFConstantStringClassReference_110e65a78;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e65a78,0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            FUN_1072401ec(ppuVar6,puVar7);
            _objc_release(puVar7);
            _objc_release(ppuVar6);
          }
          lVar16 = lVar15;
          func_0x00010c0d2260();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar16;
          func_0x00010bf24a40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          lVar16 = lVar14;
          func_0x00010c08fa60();
          if (lVar16 != 0) {
            iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
            func_0x00010c0720c0();
            if (iVar1 != 0) {
              uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar8;
              func_0x00010bf1f3c0();
              _objc_release(uVar8);
              if ((int)uVar11 != 0) {
                puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new();
                uStack_248 = 0;
                uStack_250 = 0;
                uStack_238 = 0;
                uStack_240 = 0;
                uStack_258 = 0;
                plStack_260 = (long *)0x0;
                lStack_268 = 0;
                uStack_270 = 0;
                lVar16 = lVar2;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar16;
                func_0x00010bf52a60();
                if (lVar12 != 0) {
                  lVar13 = *plStack_260;
                  do {
                    lVar17 = 0;
                    do {
                      if (*plStack_260 != lVar13) {
                        _objc_enumerationMutation(lVar16);
                      }
                      uVar18 = *(undefined8 *)(lStack_268 + lVar17 * 8);
                      func_0x00010c0d2260();
                      _objc_retainAutoreleasedReturnValue();
                      uVar11 = uVar18;
                      func_0x00010bf24a40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar8 = uVar11;
                      func_0x00010c0720c0();
                      _objc_release(uVar11);
                      _objc_release(uVar18);
                      if ((int)uVar8 != 0) {
                        func_0x00010befa120(puVar9);
                      }
                      lVar17 = lVar17 + 1;
                    } while (lVar12 != lVar17);
                    lVar12 = lVar16;
                    func_0x00010bf52a60();
                  } while (lVar12 != 0);
                }
                _objc_release(lVar16);
                puVar7 = puVar9;
                func_0x00010bf51e00();
                _objc_release(puVar9);
LAB_106951074:
                puVar9 = PTR___NSConcreteStackBlock_11034bd00;
                if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
                  puVar10 = puVar7;
                  func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_11094d150);
                  puStack_2a0 = puVar9;
                  uStack_298 = 0xc2000000;
                  uStack_290 = 0x106951334;
                  puStack_288 = &UNK_11084aaa8;
                  uVar11 = *(undefined8 *)(param_1 + 0x48);
                  uVar8 = *(undefined8 *)(param_1 + 0x50);
                  _objc_retain(uVar8);
                  puStack_280 = puVar10;
                  uStack_278 = uVar8;
                  _objc_retain(puVar10);
                  func_0x00010007380c(uVar11,&puStack_2a0);
                  _objc_release(puStack_280);
                  _objc_release(uStack_278);
                  _objc_release(puVar10);
                }
                _objc_initWeak(auStack_2a8,*(undefined8 *)(param_1 + 0x20));
                puStack_2e8 = puVar9;
                uStack_2e0 = 0xc2000000;
                pcStack_2d8 = FUN_106951344;
                puStack_2d0 = &UNK_1108ed4d0;
                _objc_copyWeak(auStack_2b8,auStack_2a8);
                _objc_retain(puVar7);
                puStack_2c8 = puVar7;
                _objc_retain(lVar2);
                uStack_2b0 = *(undefined2 *)(param_1 + 0x58);
                lStack_2c0 = lVar2;
                func_0x000100162d98("APPSTORE",&puStack_2e8);
                _objc_release(lStack_2c0);
                _objc_release(puStack_2c8);
                _objc_destroyWeak(auStack_2b8);
                _objc_destroyWeak(auStack_2a8);
                _objc_release(lVar14);
                _objc_release(puVar7);
                goto LAB_106951284;
              }
            }
          }
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_190 = lVar15;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106951074;
        }
        lVar13 = lVar13 + 1;
      } while (lVar14 != lVar13);
      lVar14 = lVar16;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(lVar16);
LAB_106951018:
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c0720c0();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar1 == 0) {
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_1069512d8;
    puStack_1f0 = &UNK_110848ba8;
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    uStack_1e8 = uVar8;
    uStack_1e0 = uVar18;
    _objc_retain(uVar11);
    uStack_1d8 = uVar11;
    func_0x000100162d98("APPSTORE",&puStack_208);
    lVar16 = *(long *)(param_1 + 0x48);
    if ((lVar16 != 0) && (lVar14 = *(long *)(param_1 + 0x50), lVar14 != 0)) {
      puStack_230 = puVar7;
      uStack_228 = 0xc2000000;
      pcStack_220 = FUN_106951318;
      puStack_218 = &UNK_110849530;
      _objc_retain(lVar14);
      lStack_210 = lVar14;
      func_0x00010007380c(lVar16,&puStack_230);
      _objc_release(lStack_210);
    }
    _objc_release(uStack_1d8);
    _objc_release(uStack_1e0);
  }
  else {
    func_0x00010bebfc60(*(undefined8 *)(param_1 + 0x20));
  }
  lVar15 = 0;
LAB_106951284:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar11 = *(undefined8 *)(*(long *)(lVar15 + 0x20) + 0x28);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf746a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 1069512d8; end: 106951317;  */

void FUN_1069512d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf746a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106951318; end: 106951343;  */

void FUN_106951318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106951328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 106951344; end: 10695137f;  */

void FUN_106951344(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106951380; end: 10695153f; -[SCMyStoriesDataCoordinator _deleteOurStorySnapWithClientId:serverId:posterGuid:] */

void FUN_106951380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(&PTR____CFConstantStringClassReference_110e43098);
  func_0x00010be59380(param_1);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(&PTR____CFConstantStringClassReference_110e43098);
  _objc_retain(lVar2);
  func_0x00010bf6c940(uVar3);
  _objc_release(lVar2);
  _objc_release(&PTR____CFConstantStringClassReference_110e43098);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(&PTR____CFConstantStringClassReference_110e43098);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106951540; end: 1069516db;  */

void FUN_106951540(long param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be282e0();
  _objc_release(lVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1069515f0;
  puStack_48 = &UNK_110854380;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = param_2;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  uStack_37 = param_3;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 1069516dc; end: 106951b73; -[SCMyStoriesDataCoordinator _deleteStorySnaps:fromMyStory:onlyShowFailureToast:disableFailureToast:] */

void FUN_1069516dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010694e918();
  _objc_release();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 1;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  _dispatch_group_create();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar7 = *plStack_170;
    do {
      lVar9 = 0;
      do {
        if (*plStack_170 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_178 + lVar9 * 8);
        uVar4 = uVar10;
        func_0x00010bf0e700(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001085332dc();
        _objc_release(uVar4);
        uVar4 = uVar10;
        func_0x00010bf3cf60(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar10;
        func_0x00010c15f2e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        func_0x00010bf5bbc0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25b720();
        uVar11 = param_4;
        func_0x00010c259cc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be59380(param_1);
        _objc_release(uVar11);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar4);
        _dispatch_group_enter(uVar3);
        _objc_initWeak(auStack_188,param_1);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c25b720(param_4);
        func_0x00010c25b720();
        uVar4 = param_4;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar10;
        func_0x00010bf3cf60(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        func_0x00010c15f2e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1d0 = 0xc2000000;
        pcStack_1c8 = FUN_106951b74;
        puStack_1c0 = &UNK_11094d1d0;
        _objc_copyWeak(auStack_190,auStack_188);
        uStack_1b8 = uVar10;
        _objc_retain(param_4);
        puStack_1a0 = &uStack_120;
        puStack_198 = &uStack_140;
        uStack_1b0 = param_4;
        _objc_retain(uVar3);
        uStack_1a8 = uVar3;
        func_0x00010bf6c940(uVar11);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar4);
        _objc_release(uStack_1a8);
        _objc_release(uStack_1b0);
        _objc_destroyWeak(auStack_190);
        _objc_destroyWeak(auStack_188);
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = param_3;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_3);
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_106951c34;
  puStack_1f8 = &UNK_11094d200;
  puStack_1f0 = &uStack_120;
  puStack_1e8 = &uStack_140;
  bVar6 = (byte)&puStack_210;
  uStack_1e0 = param_5;
  uStack_1df = param_6;
  func_0x000100bc0718(uVar3,PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_140,8);
  bVar5 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  lVar8 = param_3 + 0x48;
  _objc_loadWeakRetained(lVar8);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf3cf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c259cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be282e0(lVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar8);
  lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  *(byte *)(lVar8 + 0x18) = bVar5 & *(byte *)(lVar8 + 0x18);
  lVar8 = *(long *)(*(long *)(param_3 + 0x40) + 8);
  *(byte *)(lVar8 + 0x18) = *(byte *)(lVar8 + 0x18) | bVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106951b74; end: 106951c33;  */

void FUN_106951b74(long param_1,byte param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3cf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be282e0(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  *(byte *)(lVar3 + 0x18) = param_2 & *(byte *)(lVar3 + 0x18);
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106951c34; end: 106951cef;  */

void FUN_106951c34(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      return;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e65a98;
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
      return;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e17898;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_1072401ec(ppuVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106951cf0; end: 106951deb; -[SCMyStoriesDataCoordinator _handleDeletedStorySnapOnServerWithSuccess:clientId:storyId:] */

void FUN_106951cf0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = param_4;
    func_0x000108ea5f00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c480(*(undefined8 *)(param_1 + 0x68));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106951dec;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_5);
    uStack_40 = param_5;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106951dec; end: 106951e2b;  */

void FUN_106951dec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf746a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106951e2c; end: 10695202f; -[SCMyStoriesDataCoordinator deleteSnapProSnapWithStoryId:clientId:serverId:posterGuid:snapProAttributes:isSpotlightStory:isImpalaFlow:callback:] */

void FUN_106951e2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  func_0x00010be59380(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = param_9;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_6f = param_8;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_11);
  func_0x00010bf6c940(uVar1);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106952030; end: 10695223b;  */

void FUN_106952030(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_60,param_1 + 0x48);
    uStack_58 = (undefined1)param_2;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010c11d5e0(lVar1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar4);
  }
  if (param_2 == 0) {
    if ((param_3 & 1) != 0) goto LAB_1069521fc;
    ppuVar2 = &PTR____CFConstantStringClassReference_110e17898;
  }
  else {
    if (*(char *)(param_1 + 0x51) == '\x01') {
      lVar1 = param_1 + 0x48;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf74680();
      _objc_release(lVar1);
    }
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf25140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfa460(lVar1);
    _objc_release(uVar4);
    _objc_release(lVar1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e65a98;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  FUN_1072401ec(ppuVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
LAB_1069521fc:
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  return;
}



/* Entry: 10695223c; end: 1069523bb;  */

void FUN_10695223c(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_e8;
  lVar1 = param_2;
  func_0x00010bf52a60();
  puVar7 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        puVar7 = *(undefined1 **)(lStack_128 + lVar9 * 8);
        puVar2 = puVar7;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = *(undefined8 **)(param_1 + 0x20);
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)puVar3 != 0) {
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106952340;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar5 = auStack_e8;
      lVar1 = param_2;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar7 = (undefined1 *)0x0;
  }
LAB_106952340:
  _objc_release(param_2);
  puVar2 = puVar7;
  func_0x00010c08fa60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    puVar4 = (undefined8 *)(ulong)*(byte *)(param_1 + 0x38);
    puVar5 = puVar7;
    func_0x00010be282e0();
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar7 + 0x28);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d900();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1069523bc; end: 10695242b; -[SCMyStoriesDataCoordinator _deletePendingSnapProSnapsWithClientId:businessId:] */

void FUN_1069523bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d900();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10695242c; end: 106952503; -[SCMyStoriesDataCoordinator removeAllPendingSnapsWithBusinessId:] */

void FUN_10695242c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106952504; end: 106952673;  */

void FUN_106952504(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f7940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar2);
    param_4 = auStack_e8;
    param_5 = 0x10;
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar2);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d900();
          _objc_release(uVar3);
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        param_4 = auStack_e8;
        param_5 = 0x10;
        lVar1 = lVar2;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c105a00();
  _objc_release(lVar1);
  _objc_initWeak(auStack_198,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c241380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1b8,auStack_198);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_1b0 = param_6;
  uStack_1a8 = param_7;
  uStack_1a0 = lVar2 == 2;
  _objc_retain(param_8);
  func_0x00010c25ff60(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_198);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106952674; end: 106952843; -[SCMyStoriesDataCoordinator _logStorySnapDeletionWithClientId:serverId:posterGuid:storyType:storyTypeSpecific:storyId:] */

void FUN_106952674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c105a00();
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c241380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_80 = param_6;
  uStack_78 = param_7;
  uStack_70 = lVar2 == 2;
  _objc_retain(param_8);
  func_0x00010c25ff60(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106952844; end: 10695290b;  */

void FUN_106952844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010bfb91e0(uVar1);
    func_0x00010c0edf40(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar1);
    func_0x00010c0a4d40(*(undefined8 *)(param_1 + 0x48));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10695290c; end: 1069529eb; -[SCMyStoriesDataCoordinator didDeleteOurStorySnapForServerId:] */

void FUN_10695290c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf6c500(*(undefined8 *)(param_1 + 0x68));
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1069529ac;
  puStack_38 = &UNK_110841f80;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069529ec; end: 106952a73; -[SCMyStoriesDataCoordinator deleteAsyncFailedStorySnapsWithClientId:storyId:] */

void FUN_1069529ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010694e918(param_4);
  uVar1 = param_3;
  func_0x000108ea5f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf6c480(*(undefined8 *)(param_1 + 0x68),param_2,param_4,uVar1,
                      *(undefined8 *)(param_1 + 8),0,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106952a74; end: 106952adf; -[SCMyStoriesDataCoordinator fetchSnapDeleteStateWithStoryId:snapComponentId:] */

undefined8 FUN_106952a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010694e918(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaa2c0(uVar1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106952ae0; end: 106952b33; -[SCMyStoriesDataCoordinator fetchSnapDeleteStatesWithStoryId:] */

void FUN_106952ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010694e918(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaa2e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106952b34; end: 106952b93; -[SCMyStoriesDataCoordinator updatePostingState:forStory:] */

void FUN_106952b34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288b20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106952b94; end: 106952bf3; -[SCMyStoriesDataCoordinator updatePostingState:clientIds:] */

void FUN_106952b94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288b00();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106952bf4; end: 106952c53; -[SCMyStoriesDataCoordinator updatePostingProgress:forStory:] */

void FUN_106952bf4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288ac0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106952c54; end: 106952c9f; -[SCMyStoriesDataCoordinator updateStoryLatestPostTimestamp:forStoryType:] */

void FUN_106952c54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a5e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106952ca0; end: 106952cef; -[SCMyStoriesDataCoordinator getStoryLastestPostTimestampForStoryType:] */

undefined8 FUN_106952ca0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcace0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106952cf0; end: 106952d53; -[SCMyStoriesDataCoordinator postingStateWithClientId:] */

undefined8 FUN_106952cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c105a00();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106952d54; end: 106952d9b; -[SCMyStoriesDataCoordinator clientIdToPostingStateObservable] */

void FUN_106952d54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3d040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106952d9c; end: 106952de3; -[SCMyStoriesDataCoordinator clientIdToPostingProgressObservable] */

void FUN_106952d9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3d000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106952de4; end: 106952e2b; -[SCMyStoriesDataCoordinator currentClientIdToPostingState] */

void FUN_106952de4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106952e2c; end: 106952e73; -[SCMyStoriesDataCoordinator currentClientIdToPostingProgress] */

void FUN_106952e2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106952e74; end: 106952ee3; -[SCMyStoriesDataCoordinator insertPostingSnapProSnap:businessIds:] */

void FUN_106952e74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066c60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106952ee4; end: 106952f33; -[SCMyStoriesDataCoordinator insertPostingSnapProSnapWithBusinessIdsToSnap:] */

void FUN_106952ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106952f34; end: 10695305f; -[SCMyStoriesDataCoordinator queryPrivateStoriesOrPendingSnapProSnapsExistWithCompletion:] */

void FUN_106952f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106953060;
  puStack_60 = &UNK_11084e370;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1055a0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106953060; end: 106953243;  */

void FUN_106953060(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _objc_retain(param_2);
    lVar6 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar9 = *(ulong *)(lVar10 * 8);
        uVar3 = uVar9;
        func_0x00010c27dd80();
        if (uVar3 == 1) {
          uVar3 = uVar9;
          func_0x00010bf5a820();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf5bbc0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0720c0();
          if ((int)uVar5 == 0) {
            func_0x00010bf60900();
            _objc_release(uVar4);
            _objc_release(uVar3);
            if ((int)uVar9 == 0) goto LAB_10695317c;
          }
          else {
            _objc_release(uVar4);
            _objc_release(uVar3);
          }
LAB_1069531dc:
          lVar7 = 1;
          (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
          lVar6 = param_2;
          goto LAB_1069531f0;
        }
        func_0x00010bf60900();
        if ((uVar9 & 1) != 0) goto LAB_1069531dc;
LAB_10695317c:
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    lVar6 = *(long *)(lVar2 + 0x28);
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d920();
LAB_1069531f0:
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bedbf20();
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106953244; end: 10695328b;  */

void FUN_106953244(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbf20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10695328c; end: 106953323; -[SCMyStoriesDataCoordinator postingStateUpdatedWithClientIds:postingState:] */

void FUN_10695328c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106953324;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106953324; end: 10695336f;  */

void FUN_106953324(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf360;
  func_0x00010bfd28a0(PTR_PTR_1126cf360,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc160(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106953370; end: 10695340f; -[SCMyStoriesDataCoordinator postingProgressUpdatedWithClientId:postingProgress:] */

void FUN_106953370(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106953410;
  puStack_60 = &UNK_110844b80;
  uStack_58 = param_4;
  lStack_50 = param_2;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 106953410; end: 10695345b;  */

void FUN_106953410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf360;
  func_0x00010bfd2880(*(undefined8 *)(param_1 + 0x30),PTR_PTR_1126cf360,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc160(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10695345c; end: 1069535e3; -[SCMyStoriesDataCoordinator postedStateUpdateWithClientId:snapId:businessId:storyType:storyTypeVariant:] */

void FUN_10695345c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069535e4; end: 106953643;  */

void FUN_1069535e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf360;
  func_0x00010bfd2840(PTR_PTR_1126cf360,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc160();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106953644; end: 106953723; -[SCMyStoriesDataCoordinator postingToSpotlightStartWithClientId:postingToHostProfile:] */

void FUN_106953644(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  uStack_40 = param_4;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106953724; end: 10695377f;  */

void FUN_106953724(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf360;
  func_0x00010bfd1f80(PTR_PTR_1126cf360,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined1 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc160();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106953780; end: 106953843; -[SCMyStoriesDataCoordinator saveStateUpdatedWithStoryId:snapComponentId:saveState:] */

void FUN_106953780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106953844;
  puStack_68 = &UNK_11084d788;
  uStack_60 = param_3;
  uStack_58 = param_4;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106953844; end: 10695388f;  */

void FUN_106953844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf360;
  func_0x00010bfd28c0(PTR_PTR_1126cf360,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc160(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106953890; end: 10695397b; -[SCMyStoriesDataCoordinator deleteStateUpdatedWithStoryId:snapComponentId:snapProAttributes:deleteState:] */

void FUN_106953890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10695397c;
  puStack_70 = &UNK_110863fc8;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  lStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10695397c; end: 1069539cb;  */

void FUN_10695397c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf360;
  func_0x00010bfd27e0(PTR_PTR_1126cf360,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc160(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069539cc; end: 106953aff; -[SCMyStoriesDataCoordinator .cxx_destruct] */

void FUN_1069539cc(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
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



/* Entry: 106953b00; end: 1069545af;  */

void FUN_106953b00(undefined8 param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b25c0;
  _objc_alloc_init();
  puVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c27dd80();
  func_0x0001084f2c4c();
  puVar13 = PTR_PTR_1126b25e0;
  _objc_retain(param_2);
  _objc_alloc_init(puVar13);
  puVar4 = param_2;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c071060(puVar4);
  func_0x00010bf8b160(puVar4);
  func_0x00010853d77c(puVar12,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(puVar13);
  _objc_release(puVar12);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1dd6c0(puVar13);
  puVar7 = param_2;
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar12 = puVar7;
  func_0x00010c0ed100();
  if (puVar12 != (undefined *)0x2) {
    puVar12 = (undefined *)0x0;
  }
  puVar8 = puVar5;
  func_0x00010c086560(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010c085300(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160(puVar4);
  puVar10 = puVar5;
  func_0x00010c083e00(puVar5);
  puVar11 = puVar3;
  func_0x00010853d86c(param_1,puVar3,puVar12,puVar8,puVar9,0,0,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (puVar11 != (undefined *)0x0) {
    func_0x00010befa120(puVar6);
  }
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1dd3e0(puVar1);
  _objc_release(puVar13);
  puVar12 = param_2;
  func_0x00010c141c40(param_2);
  func_0x00010853e088(puVar3,puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207640(puVar1);
  _objc_release(puVar3);
  _objc_retain(param_2);
  puVar12 = PTR_PTR_1126cf388;
  _objc_alloc_init();
  puVar13 = param_2;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010853e134();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar13);
  if (puVar4 != (undefined *)0x0) {
    puVar13 = puVar12;
    func_0x00010bf0d800(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar13);
  }
  puVar13 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar13);
  if (puVar5 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126b2378;
    _objc_alloc(PTR_PTR_1126b2378);
    puVar3 = param_2;
    func_0x00010bf4e880(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c11ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar13);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  puVar3 = param_2;
  func_0x00010bf12320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010853e1b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  if (puVar6 != (undefined *)0x0) {
    puVar3 = puVar12;
    func_0x00010bf0d800(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar3);
  }
  puVar5 = puVar12;
  func_0x00010bf0d820();
  puVar3 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    puVar3 = puVar12;
  }
  _objc_retain(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(param_2);
  func_0x00010c16b420(puVar1);
  _objc_release(puVar3);
  puVar12 = param_2;
  func_0x00010bf12320(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010853e268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba8a0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_retain(param_2);
  puVar12 = param_2;
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf93b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010c281620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c11ff60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar12);
    if (puVar5 != (undefined *)0x0) goto LAB_106954010;
    puVar12 = (undefined *)0x0;
  }
  else {
    _objc_release(puVar13);
    _objc_release(puVar12);
LAB_106954010:
    puVar12 = PTR_PTR_1126cc7a0;
    _objc_alloc_init(PTR_PTR_1126cc7a0);
    puVar13 = param_2;
    func_0x00010bf30da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf93b00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (puVar4 != (undefined *)0x0) {
      puVar3 = param_2;
      func_0x00010bf30da0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf93b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195a40(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    puVar13 = param_2;
    func_0x00010c281620();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c11ff60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar13);
    if (puVar4 != (undefined *)0x0) {
      puVar13 = PTR_PTR_1126c0328;
      _objc_alloc(PTR_PTR_1126c0328);
      puVar3 = param_2;
      func_0x00010c281620(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c11ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar13);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c21bd60(puVar12);
      _objc_release(puVar13);
    }
  }
  _objc_release(param_2);
  func_0x00010c21bd40(puVar1);
  _objc_release(puVar12);
  puVar12 = puVar2;
  func_0x00010bf03740();
  if ((puVar12 == (undefined *)0x1) || (puVar12 == (undefined *)0x3)) {
    puVar12 = PTR_PTR_1126cf390;
    _objc_alloc_init(PTR_PTR_1126cf390);
    func_0x00010c181ae0();
    func_0x00010c1b1ba0(puVar12);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  func_0x00010c185a40(puVar1);
  _objc_release(puVar12);
  _objc_retain(param_2);
  puVar12 = PTR_PTR_1126bcf30;
  _objc_opt_new(PTR_PTR_1126bcf30);
  puVar13 = param_2;
  if (param_3 == 0) {
    puVar3 = param_2;
    func_0x00010c12fc80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb73c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59940();
    func_0x00010c203d40(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c26f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
LAB_106954330:
    func_0x00010c1c4200(puVar12);
    _objc_release(puVar13);
  }
  else {
    puVar3 = param_2;
    func_0x00010c26f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x00010c203d40(puVar12);
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb73c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf59940();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x0) {
      func_0x00010c26f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      goto LAB_106954330;
    }
    func_0x00010c1c4200(puVar12);
  }
  _objc_release(param_2);
  func_0x00010c216040(puVar1);
  _objc_release(puVar12);
  _objc_retain(param_2);
  puVar12 = PTR_PTR_1126cc7a8;
  _objc_opt_new(PTR_PTR_1126cc7a8);
  puVar13 = param_2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar13);
  if (puVar4 == (undefined *)0x0) {
    puVar13 = param_2;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bfb73c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247520();
    func_0x00010c1690c0(puVar12);
  }
  else {
    func_0x00010c1690c0(puVar12);
    puVar13 = PTR_PTR_1126cf398;
    _objc_opt_new(PTR_PTR_1126cf398);
    func_0x00010c204ba0(puVar12);
    puVar3 = param_2;
    func_0x00010c247520(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206c80(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x0) goto LAB_106954554;
    puVar3 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100576d08();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126afad0;
    _objc_opt_new(PTR_PTR_1126afad0);
    func_0x00010c206cc0(puVar13);
    _objc_release(puVar3);
    puVar3 = puVar13;
    func_0x00010c2475a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a85a0();
    _objc_release(puVar3);
    puVar3 = puVar13;
    func_0x00010c2475a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0fe0();
  }
  _objc_release(puVar3);
LAB_106954554:
  _objc_release(puVar13);
  _objc_release(param_2);
  func_0x00010c1e5280(puVar1);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069545b0; end: 1069547f3;  */

void FUN_1069545b0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126be758;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126cf378;
  _objc_opt_new(PTR_PTR_1126cf378);
  func_0x00010c20d6a0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cf380;
  _objc_opt_new(PTR_PTR_1126cf380);
  puVar5 = puVar1;
  func_0x00010c25a920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d500();
  _objc_release(puVar5);
  func_0x00010c17cd20(puVar2);
  _objc_release(param_2);
  func_0x00010c213f60(puVar2);
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010c12fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ac0(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed100();
  func_0x00010c1d6440(puVar2);
  _objc_release(lVar3);
  if (param_4 != 0) {
    lVar3 = param_1;
    func_0x00010bf30da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1048c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126bcf28;
      _objc_opt_new(PTR_PTR_1126bcf28);
      func_0x00010bf01f00(lVar4);
      func_0x00010c167920(puVar5);
      func_0x00010bfe4080(lVar4);
      func_0x00010c1a90c0(puVar5);
      func_0x00010c08b3c0(lVar4);
      func_0x00010c1b9520(puVar5);
      func_0x00010c0b55a0(lVar4);
      func_0x00010c1c0e80(puVar5);
      func_0x00010c249ca0(lVar4);
      func_0x00010c207c40(puVar5);
    }
    func_0x00010c1bf6c0(puVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  puVar5 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069547f4; end: 106954903;  */

void FUN_1069547f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ba668;
  _objc_retain();
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_38 = 0;
  func_0x00010c008360(puVar1,param_2,uVar2,&uStack_38);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf4ce20();
  if ((int)puVar5 == 0xb) {
    puVar5 = puVar1;
    func_0x00010c2453e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar1;
    func_0x00010bf4ce20();
    if ((int)puVar5 == 3) {
      puVar3 = puVar1;
      func_0x00010bf9e280(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c245400();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106954904; end: 106955d07;  */

void FUN_106954904(double param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  ulong uVar29;
  undefined *puVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined *puStack_200;
  undefined *puStack_1f0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a0;
  ulong uStack_180;
  ulong uStack_160;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar14 = param_4;
  func_0x00010bfd4460();
  if ((int)uVar14 == 0) {
    uStack_180 = 0;
  }
  else {
    uStack_180 = param_4;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uStack_180);
  }
  _objc_retain(param_4);
  uVar14 = param_4;
  func_0x00010bfd4420();
  if ((int)uVar14 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = param_4;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
  }
  dVar35 = 0.0;
  uVar29 = uVar14;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar29;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (uVar17 == 0) {
    uVar20 = 0;
  }
  else {
    do {
      uVar26 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar29);
        }
        uVar20 = *(undefined8 *)(uVar26 * 8);
        uVar3 = uVar20;
        func_0x00010bf0d0a0();
        if ((int)uVar3 == 1) {
          func_0x00010bf4e080();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106954ad0;
        }
        uVar26 = uVar26 + 1;
      } while (uVar17 != uVar26);
      uVar17 = uVar29;
      func_0x00010bf52a60();
    } while (uVar17 != 0);
    uVar20 = 0;
  }
LAB_106954ad0:
  _objc_release(uVar29);
  _objc_release(uVar14);
  _objc_release(param_4);
  uVar14 = param_4;
  func_0x00010bfdc7e0();
  if ((int)uVar14 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = param_4;
    func_0x00010c248460();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uVar14);
  }
  uVar29 = param_4;
  func_0x00010bfddcc0();
  if ((int)uVar29 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = param_4;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uVar29);
  }
  uVar17 = param_4;
  func_0x00010bfdabc0();
  if ((int)uVar17 == 0) {
    uStack_1a0 = 0;
  }
  else {
    uStack_1a0 = param_4;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uStack_1a0);
  }
  uVar17 = param_4;
  func_0x00010bfd84a0();
  if ((int)uVar17 == 0) {
    uStack_160 = 0;
  }
  else {
    uStack_160 = param_4;
    func_0x00010c08f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(uStack_160);
  }
  puVar23 = PTR_PTR_1126cf3a0;
  func_0x00010c0c5ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_8;
  func_0x00010c0ee2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bfd9d20();
  if ((int)uVar21 == 0) {
    puStack_1b0 = (undefined *)0x0;
  }
  else {
    puStack_1b0 = PTR_PTR_1126cf3a8;
    _objc_alloc();
    uVar21 = param_8;
    func_0x00010c0ee2a0(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar21;
    func_0x00010c0ed760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000108f52130();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032520();
    _objc_retain();
    _objc_release(puStack_1b0);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar21);
  }
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  puVar7 = PTR_PTR_1126cf3b0;
  _objc_retain(uVar20);
  _objc_alloc();
  uVar3 = uVar20;
  func_0x00010c297e20(uVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  uVar21 = uVar3;
  func_0x000108f0e94c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0607c0();
  _objc_release(uVar21);
  _objc_release(uVar3);
  _objc_retain(param_4);
  uVar17 = param_4;
  func_0x00010bfda540();
  uVar26 = 0;
  if ((int)uVar17 != 0) {
    uVar26 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar17 = uVar26;
  func_0x00010bfda560();
  if ((int)uVar17 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = uVar26;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar24 = param_4;
  func_0x00010bfdd660();
  if ((int)uVar24 == 0) {
    uVar24 = 0;
    puStack_1b8 = (undefined *)0x0;
  }
  else {
    uVar24 = param_4;
    func_0x00010c270d80();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar17 == 0) || (uVar24 == 0)) {
      puStack_1b8 = (undefined *)0x0;
    }
    else {
      func_0x00010bf85640(uVar17);
      uVar27 = uVar26;
      FUN_106955fbc();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar27;
      func_0x00010c0c4bc0();
      if ((int)uVar16 == 0) {
        uVar16 = uVar17;
        func_0x00010bf8b420(uVar17);
        dVar35 = (double)(uVar16 & 0xffffffff);
      }
      else {
        uVar16 = uVar27;
        func_0x00010c0c4bc0(uVar27);
        dVar35 = (double)(uVar16 & 0xffffffff) / 1000.0;
      }
      uVar16 = uVar24;
      func_0x00010c23fb40(uVar24);
      puStack_1b8 = PTR_PTR_1126cf3b8;
      _objc_alloc();
      func_0x00010c00eac0(dVar35,param_1 + (double)uVar16 / 1000.0,(double)uVar16 / 1000.0);
      _objc_release(uVar27);
    }
  }
  _objc_release(uVar24);
  _objc_release(uVar17);
  _objc_release(uVar26);
  _objc_release(param_4);
  _objc_retain(param_4);
  _objc_retain(uVar14);
  uVar17 = param_4;
  func_0x00010bfda540();
  if ((int)uVar17 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar26 = uVar17;
  FUN_106955fbc();
  _objc_retainAutoreleasedReturnValue();
  if (uVar26 == 0) {
    puStack_1f0 = (undefined *)0x0;
  }
  else {
    uVar24 = uVar17;
    func_0x00010bfda560();
    if ((int)uVar24 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar17;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar27 = uVar26;
    func_0x00010c27dd80();
    func_0x00010bfdc680();
    _objc_retain(uVar14);
    iVar2 = (int)uVar27;
    if ((iVar2 < 3) && (iVar2 != -0x4524111)) {
      if (iVar2 == 0) {
        if (uVar14 != 0) {
          uVar27 = uVar14;
          func_0x00010c298be0();
          iVar2 = (int)uVar27;
          if (iVar2 < 2) {
            if (((iVar2 != -0x4524111) && (iVar2 != 0)) && (iVar2 != 1)) goto LAB_106954f44;
          }
          else if (iVar2 < 4) {
            if ((iVar2 != 2) && (iVar2 != 3)) {
LAB_106954f44:
              func_0x00010c298be0();
            }
          }
          else if ((iVar2 != 4) && (iVar2 != 5)) goto LAB_106954f44;
        }
      }
      else if ((iVar2 == 1) && (uVar14 != 0)) goto LAB_106954f44;
    }
    _objc_release(uVar14);
    uVar27 = uVar26;
    func_0x00010bfd6a20();
    if ((int)uVar27 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = uVar26;
      func_0x00010bf93e60(uVar26);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(param_4);
    uVar16 = param_4;
    func_0x00010bfd5ee0();
    if ((int)uVar16 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = param_4;
      func_0x00010bf5aee0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = uVar16;
    func_0x00010bf4b5a0();
    if ((int)uVar8 != 0) {
      func_0x00010c0750a0();
    }
    _objc_release(uVar16);
    _objc_release(param_4);
    puStack_1f0 = PTR_PTR_1126cf3c0;
    _objc_alloc();
    uVar16 = uVar27;
    func_0x00010c086560(uVar27);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar16;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar27;
    func_0x00010c085300(uVar27);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf020();
    func_0x00010c01b280();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar16);
    _objc_release(uVar27);
    _objc_release(uVar24);
  }
  _objc_release(uVar26);
  _objc_release(uVar17);
  _objc_release(uVar14);
  _objc_release(param_4);
  _objc_retain(param_5);
  puVar25 = PTR_PTR_1126cf3c8;
  _objc_retain(uVar29);
  _objc_alloc();
  func_0x00010c0ed100();
  uVar17 = uVar29;
  func_0x00010bf93ae0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  uVar26 = uVar17;
  func_0x000108f0e990(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar26;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c09ea00(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126cf3d0;
  _objc_alloc(PTR_PTR_1126cf3d0);
  func_0x00010c0b55a0(uVar3);
  dVar31 = dVar35;
  func_0x00010c08b3c0(uVar3);
  dVar32 = dVar31;
  func_0x00010bf01f00(uVar3);
  dVar33 = dVar32;
  func_0x00010bfe4080(uVar3);
  dVar34 = dVar33;
  func_0x00010c249ca0(uVar3);
  func_0x00010c027c60(dVar35,dVar31,dVar32,dVar33,0,0,dVar34,0,puVar11);
  func_0x00010bffafc0();
  _objc_release(puVar11);
  _objc_release(uVar3);
  _objc_release(uVar24);
  _objc_release(uVar26);
  _objc_release(uVar17);
  _objc_release(param_5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar17 = param_4;
  func_0x00010bfd4420();
  if ((int)uVar17 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = param_4;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar24 = uVar17;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar24;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar26 != 0) {
    uVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar24);
      }
      uVar21 = *(undefined8 *)(uVar27 * 8);
      uVar3 = uVar21;
      func_0x00010bf0d0a0();
      if ((int)uVar3 == 3) {
        func_0x00010c2a3a80(uVar21);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1069553b0;
      }
      uVar27 = uVar27 + 1;
    } while (uVar26 != uVar27);
    uVar26 = uVar24;
    func_0x00010bf52a60();
  }
  uVar21 = 0;
LAB_1069553b0:
  _objc_release(uVar24);
  _objc_release(uVar17);
  _objc_release(param_4);
  puVar11 = PTR_PTR_1126cf3d8;
  _objc_alloc();
  uVar3 = uVar21;
  func_0x00010bdc2b80(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar17 = param_4;
  func_0x00010bfdabc0();
  if ((int)uVar17 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = param_4;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar26 = param_4;
  func_0x00010bfdd660();
  if ((int)uVar26 == 0) {
    uVar26 = 0;
    puVar19 = (undefined *)0x0;
  }
  else {
    uVar26 = param_4;
    func_0x00010c270d80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = (undefined *)0x0;
    if ((uVar17 != 0) && (uVar26 != 0)) {
      uVar24 = uVar17;
      func_0x00010bf05f80();
      puVar19 = (undefined *)0x0;
      iVar2 = (int)uVar24;
      if (iVar2 < 3) {
        if ((iVar2 != -0x4524111) && (iVar2 != 0)) goto LAB_106955548;
      }
      else if ((iVar2 < 5) || ((iVar2 == 5 || (iVar2 != 6)))) {
LAB_106955548:
        puVar19 = PTR_PTR_1126c3340;
        _objc_alloc(PTR_PTR_1126c3340);
        func_0x00010c0c4300(uVar26);
        func_0x00010c0066c0(puVar19);
      }
    }
  }
  _objc_release(uVar26);
  _objc_release(uVar17);
  _objc_release(param_4);
  uVar5 = param_5;
  func_0x00010bf30620(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar12 = uVar5;
  func_0x000108f0e94c(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4d60();
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(puVar19);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar21);
  _objc_release(param_4);
  _objc_retain(uStack_180);
  uVar17 = uStack_180;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar17 == 0) {
    puStack_200 = (undefined *)0x0;
  }
  else {
    uVar17 = uStack_180;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar17;
    func_0x00010bfdaa60();
    if ((int)uVar26 == 0) {
      uVar26 = 0;
    }
    else {
      uVar24 = uStack_180;
      func_0x00010c24a0a0(uStack_180);
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar24;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar27;
      func_0x00010bfe2ee0();
      uVar16 = uStack_180;
      func_0x00010c24a0a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar16;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar8;
      func_0x00010c0b5940();
      func_0x000100c4a928(uVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar16);
      _objc_release(uVar27);
      _objc_release(uVar24);
    }
    _objc_release(uVar17);
    puStack_200 = PTR_PTR_1126cf3e0;
    _objc_alloc();
    uVar17 = uVar26;
    func_0x00010c0b5ac0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uStack_180;
    func_0x00010c24a0a0(uStack_180);
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar24;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uStack_180;
    func_0x00010c24a0a0(uStack_180);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60();
    _objc_release(uVar16);
    _objc_release(uVar27);
    _objc_release(uVar24);
    _objc_release(uVar17);
    _objc_release(uVar26);
  }
  _objc_release(uStack_180);
  _objc_retain(uVar20);
  uVar3 = uVar20;
  func_0x00010bfd5c60();
  if ((int)uVar3 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = PTR_PTR_1126cf3e8;
    _objc_alloc();
    uVar3 = uVar20;
    func_0x00010bf4e840(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cda0();
    _objc_release(uVar21);
    _objc_release(uVar3);
  }
  _objc_release(uVar20);
  _objc_retain(uVar29);
  uVar17 = uVar29;
  func_0x00010bfddce0();
  if ((int)uVar17 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = PTR_PTR_1126cf3f0;
    _objc_alloc();
    uVar17 = uVar29;
    func_0x00010c281680(uVar29);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar17;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cda0();
    _objc_release(uVar26);
    _objc_release(uVar17);
  }
  _objc_release(uVar29);
  _objc_retain(uStack_1a0);
  uVar17 = uStack_1a0;
  func_0x00010bfdc3a0();
  if ((int)uVar17 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = uStack_1a0;
    func_0x00010c241c00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar26 = uVar17;
  func_0x00010bfdc760();
  if ((int)uVar26 == 0) {
LAB_106955948:
    puVar30 = (undefined *)0x0;
  }
  else {
    uVar26 = uVar17;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar26 == 0) goto LAB_106955948;
    uVar24 = uVar26;
    func_0x00010bfe2ee0();
    uVar13 = uVar26;
    func_0x00010c0b5940();
    func_0x000100c4a928();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar24;
    func_0x00010c08fa60();
    if (uVar27 == 0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar30 = PTR_PTR_1126cf3f8;
      _objc_alloc();
      func_0x00010c04a9a0();
    }
    _objc_release(uVar24);
    _objc_release(uVar26);
  }
  _objc_release(uVar17);
  _objc_release(uStack_1a0);
  _objc_retain(uStack_1a0);
  uVar17 = uStack_1a0;
  func_0x00010bf05f80();
  if ((int)uVar17 == 6) {
    uVar17 = uStack_1a0;
    func_0x00010bfdc3a0();
    if ((int)uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = uStack_1a0;
      func_0x00010c241c00();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar26 = uVar17;
    func_0x00010c247580();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar26;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar26);
    uVar26 = uVar24;
    func_0x00010c08fa60();
    if (uVar26 == 0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puVar28 = PTR_PTR_1126cf400;
      _objc_alloc();
      func_0x00010c00d4e0();
    }
    _objc_release(uVar24);
    _objc_release(uVar17);
  }
  else {
    puVar28 = (undefined *)0x0;
  }
  _objc_release(uStack_1a0);
  func_0x00010c141c40();
  _objc_retain(uStack_160);
  uVar17 = uStack_160;
  func_0x00010bfd4d40();
  if ((int)uVar17 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar17 = uStack_160;
    func_0x00010bf24a40(uStack_160);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar17;
    func_0x00010bfe2ee0();
    uVar24 = uStack_160;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar24;
    func_0x00010c0b5940();
    func_0x000100c4a928(uVar26);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
    _objc_release(uVar17);
    puVar18 = PTR_PTR_1126c32f8;
    _objc_alloc();
    func_0x00010c0eede0(uStack_160);
    func_0x00010c0eebe0(uStack_160);
    func_0x00010bff9aa0();
    _objc_release(uVar26);
  }
  _objc_release(uStack_160);
  func_0x00010c044c20();
  _objc_release(puVar18);
  _objc_release(puVar28);
  _objc_release(puVar30);
  _objc_release(puVar22);
  _objc_release(puVar19);
  _objc_release(puStack_200);
  _objc_release(puVar11);
  _objc_release(puVar25);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1b8);
  _objc_release(puVar7);
  _objc_release(puStack_1b0);
  _objc_release(puVar23);
  _objc_release(uStack_160);
  _objc_release(uStack_1a0);
  _objc_release(uVar29);
  _objc_release(uVar14);
  _objc_release(uVar20);
  _objc_release(uStack_180);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(uVar13);
  func_0x000108ea5f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar13);
  _objc_retain(param_2);
  uVar14 = uVar13;
  func_0x00010bfda540();
  if ((uVar14 & 1) == 0) {
    uVar14 = 0;
    FUN_106955fbc();
    _objc_retainAutoreleasedReturnValue();
    if (uVar14 != 0) goto LAB_106955d9c;
LAB_106955e6c:
    puVar25 = (undefined *)0x0;
  }
  else {
    uVar29 = uVar13;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar29;
    FUN_106955fbc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar29);
    if (uVar14 == 0) goto LAB_106955e6c;
LAB_106955d9c:
    uVar29 = uVar14;
    func_0x00010bfd6a20();
    if ((int)uVar29 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      uVar29 = uVar14;
      func_0x00010bf93e60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR_PTR_1126bfca8;
      _objc_alloc(PTR_PTR_1126bfca8);
      uVar17 = uVar29;
      func_0x00010c086560(uVar29);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar17;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar29;
      func_0x00010c085300(uVar29);
      _objc_retainAutoreleasedReturnValue();
      uVar27 = uVar24;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60(puVar23);
      _objc_release(uVar27);
      _objc_release(uVar24);
      _objc_release(uVar26);
      _objc_release(uVar17);
      _objc_release(uVar29);
    }
    func_0x00010c27dd80();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126c3390;
    _objc_alloc(PTR_PTR_1126c3390);
    func_0x00010bffa840();
    _objc_release(puVar7);
    _objc_release(puVar23);
  }
  _objc_release(uVar14);
  _objc_release(param_2);
  _objc_release(uVar13);
  puVar6 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar25);
  _objc_release(param_2);
  _objc_release(uVar13);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106955d08; end: 106955fbb;  */

void FUN_106955d08(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  func_0x000108ea5f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar6 = param_2;
  func_0x00010bfda540();
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
    FUN_106955fbc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    FUN_106955fbc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  if (uVar6 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar1 = uVar6;
    func_0x00010bfd6a20();
    if ((int)uVar1 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar1 = uVar6;
      func_0x00010bf93e60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126bfca8;
      _objc_alloc(PTR_PTR_1126bfca8);
      uVar2 = uVar1;
      func_0x00010c086560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c085300(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60(puVar8);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    func_0x00010c27dd80();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c3390;
    _objc_alloc(PTR_PTR_1126c3390);
    func_0x00010bffa840();
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(param_2);
  puVar8 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(puVar9);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106955fbc; end: 1069560d3;  */

undefined * FUN_106955fbc(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf52a60();
  puVar6 = (undefined *)0x0;
  if (uVar5 != 0) {
    lVar7 = *plStack_100;
    do {
      uVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar6 = *(undefined **)(lStack_108 + uVar8 * 8);
        puVar2 = puVar6;
        func_0x00010c08c3a0();
        if ((int)puVar2 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106956094;
        }
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      uVar5 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar5 != 0);
    puVar6 = (undefined *)0x0;
  }
LAB_106956094:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    _objc_retain(param_1);
    uVar5 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_230,auStack_1e8,0x10);
    puVar6 = (undefined *)0x0;
    if (uVar5 != 0) {
      lVar7 = *plStack_220;
      do {
        uVar8 = 0;
        do {
          if (*plStack_220 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          puVar2 = PTR_PTR_1126be758;
          _objc_alloc();
          func_0x00010c008360();
          if ((puVar2 != (undefined *)0x0) &&
             (puVar6 = puVar2, func_0x00010bf0d0a0(), (int)puVar6 == 4)) {
            puVar3 = puVar2;
            func_0x00010c25a920();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c25a520();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(puVar2);
            goto LAB_1069561fc;
          }
          _objc_release(puVar2);
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        uVar5 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_230,auStack_1e8,0x10);
      } while (uVar5 != 0);
      puVar6 = (undefined *)0x0;
    }
LAB_1069561fc:
    _objc_release(param_1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      _objc_retain();
      uVar5 = param_1;
      func_0x00010bf6ef00();
      if (uVar5 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        uVar5 = 0;
        do {
          uVar8 = param_1;
          func_0x00010bf6eee0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          func_0x00010c296de0();
          _objc_release(uVar8);
          bVar1 = (int)uVar4 == 2;
          puVar6 = (undefined *)(ulong)bVar1;
          if (bVar1) break;
          uVar5 = uVar5 + 1;
          uVar8 = param_1;
          func_0x00010bf6ef00();
        } while (uVar5 < uVar8);
      }
      _objc_release(param_1);
      return puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 1069560d4; end: 106956247;  */

undefined * FUN_1069560d4(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  uVar5 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  puVar6 = (undefined *)0x0;
  if (uVar5 != 0) {
    lVar7 = *plStack_110;
    do {
      uVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        puVar2 = PTR_PTR_1126be758;
        _objc_alloc();
        func_0x00010c008360();
        if ((puVar2 != (undefined *)0x0) &&
           (puVar6 = puVar2, func_0x00010bf0d0a0(), (int)puVar6 == 4)) {
          puVar3 = puVar2;
          func_0x00010c25a920();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c25a520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar2);
          goto LAB_1069561fc;
        }
        _objc_release(puVar2);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      uVar5 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar5 != 0);
    puVar6 = (undefined *)0x0;
  }
LAB_1069561fc:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar5 = param_1;
  func_0x00010bf6ef00();
  if (uVar5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar5 = 0;
    do {
      uVar8 = param_1;
      func_0x00010bf6eee0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010c296de0();
      _objc_release(uVar8);
      bVar1 = (int)uVar4 == 2;
      puVar6 = (undefined *)(ulong)bVar1;
      if (bVar1) break;
      uVar5 = uVar5 + 1;
      uVar8 = param_1;
      func_0x00010bf6ef00();
    } while (uVar5 < uVar8);
  }
  _objc_release(param_1);
  return puVar6;
}



/* Entry: 106956248; end: 1069562db;  */

bool FUN_106956248(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bf6ef00();
  if (uVar4 == 0) {
    bVar1 = false;
  }
  else {
    uVar4 = 0;
    do {
      uVar2 = param_1;
      func_0x00010bf6eee0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c296de0();
      _objc_release(uVar2);
      bVar1 = (int)uVar3 == 2;
      if (bVar1) break;
      uVar4 = uVar4 + 1;
      uVar2 = param_1;
      func_0x00010bf6ef00();
    } while (uVar4 < uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1069562dc; end: 106956383; -[SCStoriesPostCompletionKeepAlive initWithBackgroundTaskWrapper:] */

undefined1 * FUN_1069562dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf17d00();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106956384; end: 1069563e7; -[SCStoriesPostCompletionKeepAlive dealloc] */

void FUN_106956384(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f3e28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069563e8; end: 1069563f3; -[SCStoriesPostCompletionKeepAlive .cxx_destruct] */

void FUN_1069563e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069563f4; end: 10695643b;  */

void FUN_1069563f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a0a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10695643c; end: 1069564f3; -[SCStoriesSnapPostCoordinator insertStoryPostingSetting:clientId:] */

void FUN_10695643c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069564f4;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1069564f4; end: 106956503;  */

void FUN_1069564f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106956504; end: 106956693; -[SCStoriesSnapPostCoordinator insertPostingStorySnapsWithSnapDoc:storyMetadata:destinationMetadataByStoryPostingId:customStoryTypesByStoryId:completion:] */

void FUN_106956504(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 != 0) {
    lVar1 = param_4;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if ((lVar2 != 0) && (lVar2 = param_5, func_0x00010bf529e0(), lVar2 != 0)) {
      lVar2 = param_4;
      func_0x00010bfcd380();
      _objc_release(lVar1);
      if (lVar2 != 0) goto LAB_106956650;
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106956694;
      puStack_88 = &UNK_110866740;
      lStack_80 = param_1;
      _objc_retain(param_5);
      lStack_78 = param_5;
      _objc_retain(param_4);
      lStack_70 = param_4;
      _objc_retain(param_6);
      uStack_68 = param_6;
      _objc_retain(param_3);
      lStack_60 = param_3;
      _objc_retain(param_7);
      uStack_58 = param_7;
      func_0x00010c0f7fc0(uVar3,param_2,&puStack_a0);
      _objc_release(uStack_58);
      _objc_release(lStack_60);
      _objc_release(uStack_68);
      _objc_release(lStack_70);
      lVar1 = lStack_78;
    }
    _objc_release(lVar1);
  }
LAB_106956650:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


